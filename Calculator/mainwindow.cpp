#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->InputA->setText("0");
    ui->InputB->setText("0");

    connect(ui->Calculate, SIGNAL(clicked()), this, SLOT(addAB()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addAB()
{
    double a;
    a = (ui->InputA->text()).toDouble();

    double b;
    b = (ui->InputB->text()).toDouble();

    ui->ResultC -> setText(QString("%1").arg(a+b,0,'f',4));

}
