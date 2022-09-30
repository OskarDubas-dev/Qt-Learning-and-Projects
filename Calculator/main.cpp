#include "mainwindow.h"
#include "gamescreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    gameScreen gs;


    w.show();
    return a.exec();
}
