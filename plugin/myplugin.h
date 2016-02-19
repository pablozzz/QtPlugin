#ifndef MYPLUGIN_H
#define MYPLUGIN_H

#include <QObject>
#include <QtWidgets>
#include <QtPlugin>
#include "myplugininterface.h"

class MyPlugin : public QObject, MyPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "MyPluginInterface" FILE "myplugin.json")
    Q_INTERFACES(MyPluginInterface)

public:
    bool show_window() Q_DECL_OVERRIDE;

private:
    QWidget* my_plugin_window;
    QLabel* label;
    QPushButton* button;
    QVBoxLayout* layout;
};

#endif // MYPLUGIN_H
