#ifndef ENTRYDIALOG_H
#define ENTRYDIALOG_H

#include <QDialog>
#include "MySQLHeader.h"

namespace Ui {
    class entryDialog;
}

class entryDialog : public QDialog {
    Q_OBJECT
public:
    entryDialog(MySQLData database, QWidget *parent = 0);
    ~entryDialog();
    MySQLData databases;

protected:
    void changeEvent(QEvent *e);

private:
    Ui::entryDialog *ui;

public slots:
    void showSheet();
};

#endif // ENTRYDIALOG_H
