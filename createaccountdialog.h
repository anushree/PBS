#ifndef CREATEACCOUNTDIALOG_H
#define CREATEACCOUNTDIALOG_H

#include <QDialog>
#include <QDateTime>
#include "MySQLHeader.h"

namespace Ui {
    class createAccountDialog;
}

class createAccountDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(createAccountDialog)
public:
    explicit createAccountDialog(MySQLData database, QWidget *parent = 0);
    virtual ~createAccountDialog();
    MySQLData databases;

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::createAccountDialog *m_ui;

public slots:
    void addDetails();
};

#endif // CREATEACCOUNTDIALOG_H
