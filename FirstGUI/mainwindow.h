#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; } //there are different kinds of windows other than main
QT_END_NAMESPACE

class MainWindow : public QMainWindow //inherits from QMain
{
    Q_OBJECT //a macro object that is converted from MOC (macro object compiler) that takes header file and converts it to cpp code.
             //allows you to add headers and slots to the widget.

public:
    //default constructor and destructors
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonClose_clicked();

private:
    //object of mainwindow called ui that accesses all the widgets in the mainwindow.
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
