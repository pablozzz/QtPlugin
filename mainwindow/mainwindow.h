#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QtWidgets>
#include <myplugininterface.h>

class QString;
class QLineEdit;
class QLabel;
class QPushButton;
class QGridLayout;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();

private slots:
    void start_plugin();

private:
    void createGUI();
    bool loadPlugin();

    MyPluginInterface *myPluginInterface;
    QLabel *label;
    QPushButton *button;
    QPushButton *exit_button;
    QVBoxLayout *layout;
};

#endif // MAINWINDOW_H
