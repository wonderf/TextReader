#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include "openfiledialog.h"
#include <about.h>

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
void MainWindow::open_file(QString path){
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly))
    return;
    QByteArray data = file.readAll();
    ui->textEdit->setText(QString(data));
    file.close();
}

void MainWindow::on_action_triggered()
{
    openfiledialog *opf = new openfiledialog();
    opf->show();
    this->close();
}

void MainWindow::on_action_3_triggered()
{
    this->close();
}

void MainWindow::on_action_2_triggered()
{
    about *a = new about();
    a->show();
}
