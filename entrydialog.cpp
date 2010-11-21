#include "entrydialog.h"
#include "ui_entrydialog.h"
#include "sheetdialog.h"

entryDialog::entryDialog(MySQLData database, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::entryDialog)
{
    ui->setupUi(this);
    databases = database;
    ui->chooseComboBox->addItems(databases.getWalAccNames());

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(showSheet()));

}

entryDialog::~entryDialog()
{
    delete ui;
}

void entryDialog::changeEvent(QEvent *e)
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

void entryDialog::showSheet()
{
    sheetDialog SWindow(databases, ui->chooseComboBox->currentText(), ui->startDateEdit->date().toString("yyyy-MM-dd"), ui->endDateEdit->date().toString("yyyy-MM-dd"));
    SWindow.show();
    SWindow.exec();
}
