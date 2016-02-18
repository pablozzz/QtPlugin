#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
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
    void sendEcho();

private:
    void createGUI();
    bool loadPlugin();

    MyPluginInterface *myPluginInterface;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *button;
    QGridLayout *layout;
};

#endif // MAINWINDOW_H
