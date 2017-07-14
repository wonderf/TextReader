#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void open_file(QString path);

private slots:
    void on_action_triggered();

    void on_action_3_triggered();

    void on_action_2_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
