//Note, login systems need to be connected to a database or server where user info is held.

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
//#include "secdialog.h"

#include <QPixmap> //allows you to make a qpixmap object

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //these lines place the picture in the label box.

    //this way is not good for when program is on other computers/os. (is an absolute path)
    //QPixmap pix("C:/Users/rcbol/QT Projects/GUI Stuff/WebApp pictures/Couple_transparent.png");

    //relative path way which can be used on WindowsOS and Linux
    QPixmap pix(":/resources/img/Couple_transparent.png");

    //these 2 lines get the width and height of the text box label for use with the picture.
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio)); //manually sets size and aspect ratio

    //to add widgets to status bar:
    ui->statusbar->addPermanentWidget(ui->label_3, 1);  //second argument "stretch" sets ratio of statusbar to be filled by widgets.
    ui->statusbar->addPermanentWidget(ui->progressBar, 1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//How to verify username and password (simple)
void MainWindow::on_pushButton_login1_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_2_password->text();

    if(username == "test" && password == "test") {
        //to show message using QMessage and pop-up window
        QMessageBox::information(this, "Login", "Username and password is correct!");
        hide();
        secDialog = new SecDialog(this);
        secDialog->show();

        //to show message using status bar:
        //ui->statusbar->showMessage("Username and password is correct", 5000); //second argument is the timeout time in ms
    }
    else
        QMessageBox::warning(this, "Login", "Username and password is not correct");

        //to show message using status bar:
        //ui->statusbar->showMessage("Username and password is not correct", 5000);
}
