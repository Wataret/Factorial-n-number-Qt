#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    bool flag;
    QString str1;
    str1.clear();
    str1.append(ui->lineEdit->text());
    int n=str1.toInt(&flag,10);
    int result = 1;
    for(int i=1;i<n+1;i++)
        result*=i;
    ui->label_2->setText(QString::number(result));
}
