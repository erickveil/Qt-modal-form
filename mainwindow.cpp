#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

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

void MainWindow::on_bt_launch_clicked()
{
    Dialog d(this);
    if(d.exec()==QDialog::Accepted){
        ui->tb_output->setProperty("text",d.dialog_data);
    }
}
