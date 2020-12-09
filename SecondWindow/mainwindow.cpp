#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    //Creates an object of SecondWindow type that is then executed.
//    SecondDialog secdialog;
//    secdialog.setModal(true); //sets it so that the previous window cannot be clicked before exiting the second one.
//    secdialog.exec();

    // to hide the main window after opening the second,
    hide();
    secondDialog = new SecondDialog(this); //takes parent argument which is default set to 0. In this case it is "this" which is the mainwindow (current class)
    secondDialog->show();   //this approach compared to above is called "modaless approach" as the main window is still accessible.
}
