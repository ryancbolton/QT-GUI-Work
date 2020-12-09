#include <QMessageBox>
#include <QDebug>
#include <string>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "string"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // List of methods that can be used with the QMessage box class,
    // a class that allows a button or other action to pull up a message box.

    //      void            about
    //      void            aboutQt         displays Qts about page for the version the program is written on.
    //      StandardButton      critical        for reporting critical, permanent errors
    //      StandardButton      information     for reporting information about normal operations
    //      StandardButton      question        for asking a question during normal operations
    //      StandardButton      warning         for reporting non-critical errors

    // Creates instance of this class with title and the message displayed when the window pops up.
    //QMessageBox::about(this, "My Title", "This is my custom message");
    //QMessageBox::aboutQt(this, "My Title");

    //QMessageBox::critical(this, "My Title", "This is my custom message");

//    QMessageBox::question(this, "My Title", "This is my custom message",
//    QMessageBox::Yes | QMessageBox::No);

    //Asks if you want to quit the application or not.
    QMessageBox::StandardButton reply = QMessageBox::question(this,
                                            "My Title", "This is my custom message",
                                            QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes) {
        QApplication::quit();
    }   else {
        qDebug() << "No is clicked";
    }
}
