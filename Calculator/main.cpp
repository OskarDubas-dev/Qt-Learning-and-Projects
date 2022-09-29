#include "mainwindow.h"
#include "gamescreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    gameScreen gs;


    gs.show();
    return a.exec();
}
