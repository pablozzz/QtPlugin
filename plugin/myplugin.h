#ifndef MYPLUGIN_H
#define MYPLUGIN_H

#include <QObject>
#include <QtPlugin>
#include "myplugininterface.h"

class MyPlugin : public QObject, MyPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "MyPluginInterface" FILE "myplugin.json")
    Q_INTERFACES(MyPluginInterface)

public:
    QString echo(const QString &message) Q_DECL_OVERRIDE;
};

#endif // MYPLUGIN_H
