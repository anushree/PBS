/********************************************************************************
** Form generated from reading ui file 'createaccountdialog.ui'
**
** Created: Mon May 3 09:03:47 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CREATEACCOUNTDIALOG_H
#define UI_CREATEACCOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_createAccountDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *accountNameLineEdit;
    QLabel *label_2;
    QTextEdit *accountDescTextEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *accNoLineEdit;
    QDoubleSpinBox *amtSpinBox;
    QDoubleSpinBox *minamtSpinBox;
    QLabel *label_5;

    void setupUi(QDialog *createAccountDialog)
    {
        if (createAccountDialog->objectName().isEmpty())
            createAccountDialog->setObjectName(QString::fromUtf8("createAccountDialog"));
        createAccountDialog->resize(400, 352);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../logo_plain/blob.png"), QSize(), QIcon::Normal, QIcon::Off);
        createAccountDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(createAccountDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 300, 359, 34));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(createAccountDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 141, 31));
        label->setFont(font);
        accountNameLineEdit = new QLineEdit(createAccountDialog);
        accountNameLineEdit->setObjectName(QString::fromUtf8("accountNameLineEdit"));
        accountNameLineEdit->setGeometry(QRect(190, 30, 201, 26));
        accountNameLineEdit->setFont(font);
        label_2 = new QLabel(createAccountDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 141, 31));
        label_2->setFont(font);
        accountDescTextEdit = new QTextEdit(createAccountDialog);
        accountDescTextEdit->setObjectName(QString::fromUtf8("accountDescTextEdit"));
        accountDescTextEdit->setGeometry(QRect(190, 80, 201, 51));
        accountDescTextEdit->setFont(font);
        label_3 = new QLabel(createAccountDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 200, 151, 31));
        label_3->setFont(font);
        label_4 = new QLabel(createAccountDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 150, 171, 18));
        label_4->setFont(font);
        accNoLineEdit = new QLineEdit(createAccountDialog);
        accNoLineEdit->setObjectName(QString::fromUtf8("accNoLineEdit"));
        accNoLineEdit->setGeometry(QRect(190, 150, 201, 26));
        accNoLineEdit->setFont(font);
        amtSpinBox = new QDoubleSpinBox(createAccountDialog);
        amtSpinBox->setObjectName(QString::fromUtf8("amtSpinBox"));
        amtSpinBox->setGeometry(QRect(190, 200, 201, 28));
        amtSpinBox->setFont(font);
        amtSpinBox->setMaximum(1e+06);
        minamtSpinBox = new QDoubleSpinBox(createAccountDialog);
        minamtSpinBox->setObjectName(QString::fromUtf8("minamtSpinBox"));
        minamtSpinBox->setGeometry(QRect(190, 250, 201, 28));
        minamtSpinBox->setFont(font);
        minamtSpinBox->setMaximum(1e+06);
        label_5 = new QLabel(createAccountDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 250, 171, 31));
        label_5->setFont(font);

        retranslateUi(createAccountDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), createAccountDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), createAccountDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(createAccountDialog);
    } // setupUi

    void retranslateUi(QDialog *createAccountDialog)
    {
        createAccountDialog->setWindowTitle(QApplication::translate("createAccountDialog", "New account", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("createAccountDialog", "Enter name: ", 0, QApplication::UnicodeUTF8));
        accountNameLineEdit->setText(QString());
        label_2->setText(QApplication::translate("createAccountDialog", "Enter description: ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("createAccountDialog", "Enter initial amount: ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("createAccountDialog", "Enter account number:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("createAccountDialog", "Enter minimum amount: ", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(createAccountDialog);
    } // retranslateUi

};

namespace Ui {
    class createAccountDialog: public Ui_createAccountDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACCOUNTDIALOG_H
