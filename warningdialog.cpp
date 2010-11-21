#include "warningdialog.h"
#include "ui_warningdialog.h"

warningDialog::warningDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::warningDialog)
{
    ui->setupUi(this);
}

warningDialog::~warningDialog()
{
    delete ui;
}

void warningDialog::changeEvent(QEvent *e)
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
