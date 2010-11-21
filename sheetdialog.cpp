#include "sheetdialog.h"
#include "ui_sheetdialog.h"

#include <QSqlField>

sheetDialog::sheetDialog(MySQLData database, QString name, QString startDate, QString endDate, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sheetDialog)
{
    ui->setupUi(this);
    databases = database;
    start = startDate;
    end = endDate;
    idName = name;
    tableCreate();
}

sheetDialog::~sheetDialog()
{
    delete ui;
}

void sheetDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void sheetDialog::tableCreate()
{
    QString str;
    str = "Name\tDate\tDescription\tCredit\tDebit\n";
    str.append(databases.showData(idName, start, end));
    ui->textBrowser->setText(str);
}
