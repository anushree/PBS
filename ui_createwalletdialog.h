/********************************************************************************
** Form generated from reading ui file 'createwalletdialog.ui'
**
** Created: Mon May 3 09:03:47 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CREATEWALLETDIALOG_H
#define UI_CREATEWALLETDIALOG_H

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

class Ui_createWalletDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *walletNameLineEdit;
    QLabel *label_2;
    QTextEdit *walDescTextEdit;
    QLabel *label_3;
    QDoubleSpinBox *amtSpinBox;
    QDoubleSpinBox *minamtSpinBox;
    QLabel *label_5;

    void setupUi(QDialog *createWalletDialog)
    {
        if (createWalletDialog->objectName().isEmpty())
            createWalletDialog->setObjectName(QString::fromUtf8("createWalletDialog"));
        createWalletDialog->resize(400, 346);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../logo_plain/blob.png"), QSize(), QIcon::Normal, QIcon::Off);
        createWalletDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(createWalletDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 290, 359, 34));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(createWalletDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 141, 31));
        label->setFont(font);
        walletNameLineEdit = new QLineEdit(createWalletDialog);
        walletNameLineEdit->setObjectName(QString::fromUtf8("walletNameLineEdit"));
        walletNameLineEdit->setGeometry(QRect(180, 30, 201, 26));
        walletNameLineEdit->setFont(font);
        label_2 = new QLabel(createWalletDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 141, 31));
        label_2->setFont(font);
        walDescTextEdit = new QTextEdit(createWalletDialog);
        walDescTextEdit->setObjectName(QString::fromUtf8("walDescTextEdit"));
        walDescTextEdit->setGeometry(QRect(180, 80, 201, 81));
        walDescTextEdit->setFont(font);
        label_3 = new QLabel(createWalletDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 190, 151, 31));
        label_3->setFont(font);
        amtSpinBox = new QDoubleSpinBox(createWalletDialog);
        amtSpinBox->setObjectName(QString::fromUtf8("amtSpinBox"));
        amtSpinBox->setGeometry(QRect(180, 190, 201, 28));
        amtSpinBox->setFont(font);
        amtSpinBox->setMaximum(1e+06);
        minamtSpinBox = new QDoubleSpinBox(createWalletDialog);
        minamtSpinBox->setObjectName(QString::fromUtf8("minamtSpinBox"));
        minamtSpinBox->setGeometry(QRect(180, 240, 201, 28));
        minamtSpinBox->setFont(font);
        minamtSpinBox->setMaximum(1e+06);
        label_5 = new QLabel(createWalletDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 240, 171, 31));
        label_5->setFont(font);

        retranslateUi(createWalletDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), createWalletDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), createWalletDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(createWalletDialog);
    } // setupUi

    void retranslateUi(QDialog *createWalletDialog)
    {
        createWalletDialog->setWindowTitle(QApplication::translate("createWalletDialog", "New wallet", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("createWalletDialog", "Enter name: ", 0, QApplication::UnicodeUTF8));
        walletNameLineEdit->setText(QString());
        label_2->setText(QApplication::translate("createWalletDialog", "Enter description: ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("createWalletDialog", "Enter initial amount: ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("createWalletDialog", "Enter minimum amount: ", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(createWalletDialog);
    } // retranslateUi

};

namespace Ui {
    class createWalletDialog: public Ui_createWalletDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEWALLETDIALOG_H
