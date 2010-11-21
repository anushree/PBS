#include "createwalletdialog.h"
#include "ui_createwalletdialog.h"

createWalletDialog::createWalletDialog(MySQLData database, QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::createWalletDialog)
{
    m_ui->setupUi(this);
    databases = database;

    connect(m_ui->buttonBox, SIGNAL(accepted()), this, SLOT(addDetails()));

}

createWalletDialog::~createWalletDialog()
{
    delete m_ui;
}

void createWalletDialog::changeEvent(QEvent *e)
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

void createWalletDialog::addDetails()
{
    QString walletName = m_ui->walletNameLineEdit->text();
    QString walletDesc = m_ui->walDescTextEdit->toPlainText();
    double walAmt = m_ui->amtSpinBox->value();
    QString walletAmt;
    walletAmt.setNum(walAmt, 'g', 2);
    double mAmt = m_ui->minamtSpinBox->value();
    QString minAmt;
    minAmt.setNum(mAmt, 'g', 2);
    databases.insertMetadata(walletName, walletDesc, "NULL", minAmt);
    databases.insertData(walletName, QDateTime::currentDateTime().toString("yyyy-MM-dd"), "Initial", walletAmt, "0");
}
