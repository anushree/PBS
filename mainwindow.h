#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "MySQLHeader.h"

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(MySQLData database, QWidget *parent = 0);
    ~MainWindow();
    MySQLData databases;

private:
    Ui::MainWindow *ui;

protected:
    void changeEvent(QEvent *e);

public slots:
    void createWal();
    void createAcc();
    void credit();
    void graph();
    void sheet();
    void about();
};

#endif // MAINWINDOW_H
