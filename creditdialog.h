#ifndef CREDITDIALOG_H
#define CREDITDIALOG_H

#include <QDialog>
#include "MySQLHeader.h"

namespace Ui {
    class creditDialog;
}

class creditDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(creditDialog)
public:
    explicit creditDialog(MySQLData database, QWidget *parent = 0);
    virtual ~creditDialog();
    MySQLData databases;

public slots:
    void addDetails();
    void calculateBudget(QString ID);

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::creditDialog *m_ui;
};

#endif // CREDITDIALOG_H

