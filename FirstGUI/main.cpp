#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //app object declaration
    MainWindow w; //MainWindow class from .cpp file
    w.show(); //opens class
    return a.exec(); //app object execution return
}
