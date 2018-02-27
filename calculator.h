#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>

namespace Ui {
class Calculator;
}

class Calculator : public QWidget
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private slots:
    void on_test_btn_clicked();

    void on_checkBox_2_stateChanged(int arg1);

private:
    Ui::Calculator *ui;
    void test();
};

#endif // CALCULATOR_H
