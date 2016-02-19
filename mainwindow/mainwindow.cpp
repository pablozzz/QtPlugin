#include "mainwindow.h"


MainWindow::MainWindow()
{
    createGUI();
    setLayout(layout);
    setWindowTitle("Simple Plugin Example");

    if (!loadPlugin()) {
        QMessageBox::information(this, "Error", "Could not load the plugin");
    }
}

void MainWindow::start_plugin()
{
    bool plugin_started = myPluginInterface->show_window();

}

void MainWindow::createGUI()
{
    label = new QLabel("Press button to start plugin:");

    button = new QPushButton("Start Plugin");
    connect(button, SIGNAL(clicked()),
            this, SLOT(start_plugin()));

    exit_button = new QPushButton("Exit");
    connect(exit_button,SIGNAL(clicked(bool)),this,SLOT(close()));

    layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addWidget(button);
    layout->addWidget(exit_button);
}

bool MainWindow::loadPlugin()
{
    QDir pluginsDir(qApp->applicationDirPath());
#if defined(Q_OS_WIN)
    if (pluginsDir.dirName().toLower() == "debug" || pluginsDir.dirName().toLower() == "release")
        pluginsDir.cdUp();
#elif defined(Q_OS_MAC)
    if (pluginsDir.dirName() == "MacOS") {
        pluginsDir.cdUp();
        pluginsDir.cdUp();
        pluginsDir.cdUp();
    }
#endif
    pluginsDir.cd("plugins");
    foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
        QPluginLoader pluginLoader(pluginsDir.absoluteFilePath(fileName));
        QObject *plugin = pluginLoader.instance();
        if (plugin) {
            myPluginInterface = qobject_cast<MyPluginInterface *>(plugin);
            if (myPluginInterface)
                return true;
        }
    }

    return false;
}
