#ifndef OPENFILEDIALOG_H
#define OPENFILEDIALOG_H

#include <QDialog>

namespace Ui {
class openfiledialog;
}

class openfiledialog : public QDialog
{
    Q_OBJECT

public:
    explicit openfiledialog(QWidget *parent = 0);
    ~openfiledialog();

private slots:
    void on_buttonBox_accepted();

    void on_textEdit_selectionChanged();

    void on_buttonBox_rejected();

private:
    Ui::openfiledialog *ui;
};

#endif // OPENFILEDIALOG_H
