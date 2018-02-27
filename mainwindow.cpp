#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <string>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui -> pushButton -> setStyleSheet("border: 1px solid black");
    QPixmap pix(":/img/assets/power_btn.png");
    int w = ui -> power_label -> width();
    int h = ui -> power_label -> height();
    ui -> power_label -> setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui -> comboBox -> addItem(QIcon(":/img/assets/bat.png"),"Mark");
    ui -> comboBox -> addItem("Tom");

    //list widget example
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/img/assets/bat.png"), "Max");
    ui -> listWidget -> addItem(item);
    ui -> listWidget -> addItem("Tom");
    ui -> listWidget -> addItem("Larry");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    hide();
    dialog = new Dialog;
    dialog -> show();
}

void MainWindow::on_pushButton_4_clicked()
{
    hide();
    calculator = new Calculator;
    calculator -> show();

}
void MainWindow::credentials (std::string x) { // needs to display a new window with the credentials

    qDebug() << x.data();
}















void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_getItem_btn_clicked()
{
    if (ui -> listWidget -> currentItem() -> text() == "Max") {
        std::string x = "tasos";
        credentials(x); // sends the string to the function
        ui -> listWidget -> currentItem() -> setBackgroundColor(Qt::magenta);
    }
}
