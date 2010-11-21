/********************************************************************************
** Form generated from reading ui file 'creditdialog.ui'
**
** Created: Mon May 3 09:03:47 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CREDITDIALOG_H
#define UI_CREDITDIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_creditDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QComboBox *chooseComboBox;
    QLabel *label_2;
    QDoubleSpinBox *amtSpinBox;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *descTextEdit;
    QCheckBox *debitCheckBox;
    QCheckBox *creditCheckBox;

    void setupUi(QDialog *creditDialog)
    {
        if (creditDialog->objectName().isEmpty())
            creditDialog->setObjectName(QString::fromUtf8("creditDialog"));
        creditDialog->resize(400, 403);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        creditDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../logo_plain/blob.png"), QSize(), QIcon::Normal, QIcon::Off);
        creditDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(creditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 360, 341, 32));
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(creditDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 181, 18));
        label->setFont(font);
        chooseComboBox = new QComboBox(creditDialog);
        chooseComboBox->setObjectName(QString::fromUtf8("chooseComboBox"));
        chooseComboBox->setGeometry(QRect(200, 40, 191, 27));
        chooseComboBox->setFont(font);
        label_2 = new QLabel(creditDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 111, 20));
        label_2->setFont(font);
        amtSpinBox = new QDoubleSpinBox(creditDialog);
        amtSpinBox->setObjectName(QString::fromUtf8("amtSpinBox"));
        amtSpinBox->setGeometry(QRect(200, 100, 191, 28));
        amtSpinBox->setFont(font);
        amtSpinBox->setMaximum(1e+06);
        dateEdit = new QDateEdit(creditDialog);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(199, 160, 191, 28));
        dateEdit->setFont(font);
        dateEdit->setLayoutDirection(Qt::LeftToRight);
        dateEdit->setMinimumDate(QDate(2010, 3, 1));
        label_3 = new QLabel(creditDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 160, 111, 20));
        label_3->setFont(font);
        label_4 = new QLabel(creditDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 210, 141, 31));
        label_4->setFont(font);
        descTextEdit = new QTextEdit(creditDialog);
        descTextEdit->setObjectName(QString::fromUtf8("descTextEdit"));
        descTextEdit->setGeometry(QRect(10, 240, 201, 81));
        descTextEdit->setFont(font);
        debitCheckBox = new QCheckBox(creditDialog);
        debitCheckBox->setObjectName(QString::fromUtf8("debitCheckBox"));
        debitCheckBox->setGeometry(QRect(260, 250, 94, 22));
        debitCheckBox->setFont(font);
        creditCheckBox = new QCheckBox(creditDialog);
        creditCheckBox->setObjectName(QString::fromUtf8("creditCheckBox"));
        creditCheckBox->setGeometry(QRect(260, 290, 94, 22));
        creditCheckBox->setFont(font);

        retranslateUi(creditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), creditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), creditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(creditDialog);
    } // setupUi

    void retranslateUi(QDialog *creditDialog)
    {
        creditDialog->setWindowTitle(QApplication::translate("creditDialog", "Credit / debit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("creditDialog", "Choose wallet / account: ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("creditDialog", "Enter amount: ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("creditDialog", "Enter date: ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("creditDialog", "Enter description: ", 0, QApplication::UnicodeUTF8));
        debitCheckBox->setText(QApplication::translate("creditDialog", "Debit", 0, QApplication::UnicodeUTF8));
        creditCheckBox->setText(QApplication::translate("creditDialog", "Credit", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(creditDialog);
    } // retranslateUi

};

namespace Ui {
    class creditDialog: public Ui_creditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITDIALOG_H
