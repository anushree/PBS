#ifndef MYSQLHEADER_H
#define MYSQLHEADER_H

#include <QtGui/QApplication>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>

class MySQLData
{
public:
    QSqlDatabase db;
    bool createConnection(QString dbName, QString user, QString pass)
    {
        QString debug = dbName + " " + user + " " + pass;
        //QMessageBox::critical(0, QObject::tr("DEBUG."), debug);

        db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("localhost");
        db.setDatabaseName(dbName);
        db.setUserName(user);
        db.setPassword(pass);
        if (!db.open()) {
            //QMessageBox::critical(0, QObject::tr("DEBUG."), debug);//QMessageBox::critical(0, QObject::tr("Database Error."), db.lastError().text());
            return false;
        }
        return true;
    }

    void insertData(QString name, QString date, QString description, QString credit, QString debit)
    {
        QSqlQuery query(db);
        QString comm = "INSERT INTO data VALUES (\"";
        comm.append(name);
        comm.append("\", \"");
        comm.append(date);
        comm.append("\", \"");
        comm.append(description);
        comm.append("\", ");
        comm.append(credit);
        comm.append(", ");
        comm.append(debit);
        comm.append(")");

        query.exec(comm);
        //QMessageBox::critical(0, QObject::tr("DEBUG MESSAGE."), comm);
        if (query.lastError().isValid())
            QMessageBox::critical(0, QObject::tr("Error."), "Insertion query for data did not get executed!");
    }

    void insertMetadata(QString name, QString description, QString accountNo, QString minAmt)
    {
        QSqlQuery query(db);
        QString comm = "INSERT INTO metadata VALUES (\"";
        comm.append(name);
        comm.append("\", \"");
        comm.append(description);
        comm.append("\", \"");
        comm.append(accountNo);
        comm.append("\", ");
        comm.append(minAmt);
        comm.append(")");

        query.exec(comm);
        //QMessageBox::critical(0, QObject::tr("DEBUG MESSAGE."), comm);
        if (query.lastError().isValid())
            QMessageBox::critical(0, QObject::tr("Error."), "Insertion query for metadata did not get executed!");
    }

    /*
    QSqlRecord showData(QString tableName, QString name)
    {
        QSqlQuery query(db);
        QString comm = "SELECT * FROM ";
        comm.append(tableName);
        comm.append(" WHERE name = ");
        comm.append(name);
        query.exec(comm);
        if (query.lastError().isValid())
            QMessageBox::critical(0, QObject::tr("Error."), "Select query for data did not get executed!");
        return query.record();
    }
    */

    QString showData(QString idName, QString fromDate, QString toDate)
    {
        QSqlQuery query(db);
        QString comm = "SELECT * FROM data WHERE edate >= \"";
        QString str;
        comm.append(fromDate);
        comm.append("\" AND edate <= \"");
        comm.append(toDate);
        comm.append("\" AND name = \"");
        comm.append(idName);
        comm.append("\"");
        query.exec(comm);
        //QMessageBox::critical(0, QObject::tr("DEBUG"), comm);
        if (query.lastError().isValid())
            QMessageBox::critical(0, QObject::tr("Error."), "Select with dates query for data did not get executed!");
        while (query.next())
        {
            for (int i = 0; i < 5; i++)
            {
                str.append(query.value(i).toString());
                str.append("\t");
            }
            str.append("\n");
        }
        return str;
    }

    double getSum(QString name)
    {
        QSqlQuery query(db);
        double amount = 0.0;
        QString comm = "SELECT sum(credit) FROM data WHERE name = \"";
        comm.append(name);
        comm.append("\"");
        query.exec(comm);
        //QMessageBox::critical(0, QObject::tr("DEBUG."), comm);
        if (query.lastError().isValid())
        {
            QString err0 = "Sum query number 1 for ";
            err0.append(name);
            err0.append(" did not get executed!");
            QMessageBox::critical(0, QObject::tr("Error."), err0);
        }
        while (query.next())
        {
            amount += query.value(0).toDouble();
        }

        comm = "SELECT sum(debit) FROM data WHERE name = \"";
        comm.append(name);
        comm.append("\"");
        query.exec(comm);
        //QMessageBox::critical(0, QObject::tr("DEBUG."), comm);
        if (query.lastError().isValid())
        {
            QString err1 = "Sum query number 2 for ";
            err1.append(name);
            err1.append(" did not get executed!");
            QMessageBox::critical(0, QObject::tr("Error."), err1);
        }
        while (query.next())
        {
            amount -= query.value(0).toDouble();
        }
        return amount;
    }

    double getMinAmt(QString name)
    {
        QSqlQuery query(db);
        double min;
        QString comm = "SELECT minamt FROM metadata WHERE name = \"";
        comm.append(name);
        comm.append("\"");
        query.exec(comm);
        while (query.next())
        {
            //QMessageBox::critical(0, QObject::tr("DEBUG."), query.value(0).toString());
            min = query.value(0).toDouble();
        }
        if (query.lastError().isValid())
        {
            QString err = "Minimum amount query for ";
            err.append(name);
            err.append(" did not get executed!");
            QMessageBox::critical(0, QObject::tr("Error."), err);
        }
        return min;
    }

    QStringList getWalAccNames()
    {
        QSqlQuery query(db);
        QStringList names;
        query.exec("SELECT name FROM metadata");

        if (query.lastError().isValid())
            QMessageBox::critical(0, QObject::tr("Error."), "Get wallet and account names query did not get executed!");
        while (query.next())
        {
            names << query.value(0).toString();
        }
        return names;
    }
    QString getWalAccNameBal()
    {
        QSqlQuery query(db);
        QStringList list;
        QString final;
        query.exec("SELECT name FROM metadata");

        if (query.lastError().isValid())
            QMessageBox::critical(0, QObject::tr("Error."), "Get wallet and account names query did not get executed!");
        while (query.next())
        {
            list << query.value(0).toString();
        }

        for (int i = 0; i < list.size(); i++)
        {
            double sum = getSum(list.at(i));
            QString sSum;
            sSum.setNum(sum, 'f', 2);
            final.append(list.at(i) + ": " + sSum + "\n");
        }

        return final;
    }
};

#endif //MYSQLHEADER_H
