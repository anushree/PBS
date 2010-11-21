#include "creditdialog.h"
#include "ui_creditdialog.h"

creditDialog::creditDialog(MySQLData database, QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::creditDialog)
{
    m_ui->setupUi(this);
    databases = database;
    m_ui->chooseComboBox->addItems(databases.getWalAccNames());

    connect(m_ui->buttonBox, SIGNAL(accepted()), this, SLOT(addDetails()));

}

creditDialog::~creditDialog()
{
    delete m_ui;
}

void creditDialog::changeEvent(QEvent *e)
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

void creditDialog::addDetails()
{
    QString name = m_ui->chooseComboBox->currentText();
    QString date = m_ui->dateEdit->date().toString("yyyy-MM-dd");
    QString desc = m_ui->descTextEdit->toPlainText();
    bool chkCredit = m_ui->creditCheckBox->isChecked();
    bool chkDebit = m_ui->debitCheckBox->isChecked();
    QString debit = "0", credit = "0";
    if (chkCredit && !chkDebit)
    {
        credit.setNum(m_ui->amtSpinBox->value(), 'f', 2);
        //QMessageBox::critical(0, QObject::tr("DEBUG."), credit);
        databases.insertData(name, date, desc, credit, debit);
        calculateBudget(name);
    }
    else if (chkDebit && !chkCredit)
    {
        debit.setNum(m_ui->amtSpinBox->value(), 'f', 2);
        //QMessageBox::critical(0, QObject::tr("DEBUG."), debit);
        databases.insertData(name, date, desc, credit, debit);
        calculateBudget(name);
    }
    else
        QMessageBox::critical(0, QObject::tr("Value Error."), "Please check one of the check boxes only.");
}

void creditDialog::calculateBudget(QString name)
{
    double balance = databases.getSum(name);
    double minAmt = databases.getMinAmt(name);
    QString min;
    //QMessageBox::critical(0, QObject::tr("DEBUG."), min.setNum(balance, 'f', 2));
    min.setNum(minAmt, 'f', 2);
    if ((balance - minAmt) <= 100) //100 is the "safety" amount which we, the programmers, determined.
    {
        QString err = "Warning: The balance in ";
        err.append(name);
        err.append(" is below ");
        err.append(min);
        err.append("!");
        QMessageBox::critical(0, QObject::tr("Warning."), err);
    }
}
