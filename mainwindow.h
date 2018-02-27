#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "calculator.h"
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_actionExit_triggered();

    void on_getItem_btn_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *dialog;
    Calculator *calculator;
    void credentials(std::string x);
};

#endif // MAINWINDOW_H
