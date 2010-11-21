#ifndef WARNINGDIALOG_H
#define WARNINGDIALOG_H

#include <QDialog>

namespace Ui {
    class warningDialog;
}

class warningDialog : public QDialog {
    Q_OBJECT
public:
    warningDialog(QWidget *parent = 0);
    ~warningDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::warningDialog *ui;
};

#endif // WARNINGDIALOG_H
