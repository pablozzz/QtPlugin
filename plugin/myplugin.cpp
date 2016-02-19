
#include "myplugin.h"

bool MyPlugin::show_window()
{
    my_plugin_window = new QWidget;

    label = new QLabel("Press button to exit");
    button = new QPushButton("Exit");

    connect(button,SIGNAL(clicked(bool)),my_plugin_window,SLOT(close()));

    layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addWidget(button);

    my_plugin_window->setLayout(layout);
    my_plugin_window->show();

    return true;
}
