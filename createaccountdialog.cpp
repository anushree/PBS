#include "createaccountdialog.h"
#include "ui_createaccountdialog.h"

createAccountDialog::createAccountDialog(MySQLData database, QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::createAccountDialog)
{
    m_ui->setupUi(this);
    databases = database;

    connect(m_ui->buttonBox, SIGNAL(accepted()), this, SLOT(addDetails()));
}

createAccountDialog::~createAccountDialog()
{
    delete m_ui;
}

void createAccountDialog::changeEvent(QEvent *e)
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

void createAccountDialog::addDetails()
{
    QString accountName = m_ui->accountNameLineEdit->text();
    QString accountDesc = m_ui->accountDescTextEdit->toPlainText();
    QString accountNo = m_ui->accNoLineEdit->text();
    double accAmt = m_ui->amtSpinBox->value();
    QString accountAmt;
    accountAmt.setNum(accAmt, 'g', 2);
    double mAmt = m_ui->minamtSpinBox->value();
    QString minAmt;
    minAmt.setNum(mAmt, 'g', 2);
    databases.insertMetadata(accountName, accountDesc, accountNo, minAmt);
    databases.insertData(accountName, QDateTime::currentDateTime().toString("yyyy-MM-dd"), "Initial", accountAmt, "0");
}
