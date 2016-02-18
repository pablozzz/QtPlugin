#ifndef MYPLUGININTERFACE_H
#define MYPLUGININTERFACE_H

#include <QString>

class MyPluginInterface
{
public:
    virtual ~MyPluginInterface() {}
    virtual QString echo(const QString &message) = 0;
};

#define MyPluginInterface_iid "org.qt-project.Qt.Examples.EchoInterface"

Q_DECLARE_INTERFACE(MyPluginInterface, MyPluginInterface_iid)


#endif // MYPLUGININTERFACE_H
