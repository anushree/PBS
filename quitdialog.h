#ifndef QUITDIALOG_H
#define QUITDIALOG_H

#include <QDialog>

namespace Ui {
    class quitDialog;
}

class quitDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(quitDialog)
public:
    explicit quitDialog(QWidget *parent = 0);
    virtual ~quitDialog();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::quitDialog *m_ui;
};

#endif // QUITDIALOG_H
