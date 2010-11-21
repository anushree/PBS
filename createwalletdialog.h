#ifndef CREATEWALLETDIALOG_H
#define CREATEWALLETDIALOG_H

#include <QDialog>
#include <QDateTime>
#include "MySQLHeader.h"

namespace Ui {
    class createWalletDialog;
}

class createWalletDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(createWalletDialog)

public:
    explicit createWalletDialog(MySQLData database, QWidget *parent = 0);
    virtual ~createWalletDialog();
    MySQLData databases;

public slots:
    void addDetails();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::createWalletDialog *m_ui;
};


#endif // CREATEWALLETDIALOG_H
