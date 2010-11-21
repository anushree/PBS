#ifndef SHEETDIALOG_H
#define SHEETDIALOG_H

#include <QDialog>
#include "MySQLHeader.h"
#include <QDateEdit>

namespace Ui {
    class sheetDialog;
}

class sheetDialog : public QDialog {
    Q_OBJECT
public:
    sheetDialog(MySQLData database, QString name, QString startDate, QString endDate, QWidget *parent = 0);
    ~sheetDialog();
    MySQLData databases;
    QString start, end, idName;
    void tableCreate();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::sheetDialog *ui;
};


#endif // SHEETDIALOG_H
