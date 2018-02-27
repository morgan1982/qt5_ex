#include "calculator.h"
#include "ui_calculator.h"
#include <QDebug>

Calculator::Calculator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    test();
}

Calculator::~Calculator()
{
    delete ui;
}
void Calculator::test() {
    qDebug() << "ok";
}


void Calculator::on_test_btn_clicked()
{
    int price = 100;
    if(ui -> checkBox -> isChecked()) {
        price = price / 1.1; // has to be converted to float?
        qDebug() << price;
    }else {
        qDebug() << price;
    }
    if (ui -> id2_radio -> isChecked()) {
        qDebug() << "ipad 2";
    }else if (ui -> id3_radio -> isChecked()) {
        qDebug() << "ipad 3";
    }else if (ui -> air_radio -> isChecked()) {
        qDebug() << "ipad air";
    }
}

void Calculator::on_checkBox_2_stateChanged(int arg1)
{
    qDebug() << arg1;
}
