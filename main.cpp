#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MySQLData database;
    QString dbName = "pbs", userName = "root", passwd = "zaxscdvf";
    if (database.createConnection(dbName, userName, passwd))
    {
        MainWindow w(database);
        w.show();
        return a.exec();
    }
    else
        return 1;
}
