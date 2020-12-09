#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) //creating ui mainwindow object
{
    ui->setupUi(this); //opens window
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(setValue(int)));
//    disconnect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
//            ui->progressBar, SLOT(setValue(int)));
}

void MainWindow::on_pushButtonClose_clicked()
{
    ui->label->setText("Move the slider below!");
}

MainWindow::~MainWindow()
{
    delete ui; //deletes the object.
}

