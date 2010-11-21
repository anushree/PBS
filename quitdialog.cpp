#include "quitdialog.h"
#include "ui_quitdialog.h"

quitDialog::quitDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::quitDialog)
{
    m_ui->setupUi(this);
}

quitDialog::~quitDialog()
{
    delete m_ui;
}

void quitDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
