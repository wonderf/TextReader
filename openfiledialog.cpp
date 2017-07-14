#include "openfiledialog.h"
#include "ui_openfiledialog.h"
#include "mainwindow.h"
#include <QFileDialog>

openfiledialog::openfiledialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::openfiledialog)
{
    ui->setupUi(this);
}

openfiledialog::~openfiledialog()
{
    delete ui;
}

void openfiledialog::on_buttonBox_accepted()
{
    QString path = this->ui->textEdit->toPlainText();
    MainWindow *mw = new MainWindow();
    mw->open_file(path);
    mw->show();
}

void openfiledialog::on_textEdit_selectionChanged()
{
    QString file_name = QFileDialog::getOpenFileName();
    ui->textEdit->setText(file_name);
}

void openfiledialog::on_buttonBox_rejected()
{
    MainWindow *mw = new MainWindow();
    mw->show();
    this->close();
}
