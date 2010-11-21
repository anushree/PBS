/********************************************************************************
** Form generated from reading ui file 'entrydialog.ui'
**
** Created: Tue Apr 27 10:00:20 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ENTRYDIALOG_H
#define UI_ENTRYDIALOG_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_entryDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QDateEdit *endDateEdit;
    QComboBox *chooseComboBox;
    QLabel *label_2;
    QLabel *label;
    QDateEdit *startDateEdit;

    void setupUi(QDialog *entryDialog)
    {
        if (entryDialog->objectName().isEmpty())
            entryDialog->setObjectName(QString::fromUtf8("entryDialog"));
        entryDialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../logo_plain/blob.png"), QSize(), QIcon::Normal, QIcon::Off);
        entryDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(entryDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_3 = new QLabel(entryDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 160, 111, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        label_3->setFont(font);
        endDateEdit = new QDateEdit(entryDialog);
        endDateEdit->setObjectName(QString::fromUtf8("endDateEdit"));
        endDateEdit->setGeometry(QRect(199, 160, 191, 28));
        endDateEdit->setFont(font);
        endDateEdit->setLayoutDirection(Qt::LeftToRight);
        endDateEdit->setMinimumDate(QDate(2010, 3, 1));
        chooseComboBox = new QComboBox(entryDialog);
        chooseComboBox->setObjectName(QString::fromUtf8("chooseComboBox"));
        chooseComboBox->setGeometry(QRect(200, 40, 191, 27));
        chooseComboBox->setFont(font);
        label_2 = new QLabel(entryDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 98, 111, 20));
        label_2->setFont(font);
        label = new QLabel(entryDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 181, 18));
        label->setFont(font);
        startDateEdit = new QDateEdit(entryDialog);
        startDateEdit->setObjectName(QString::fromUtf8("startDateEdit"));
        startDateEdit->setGeometry(QRect(200, 100, 191, 28));
        startDateEdit->setFont(font);
        startDateEdit->setLayoutDirection(Qt::LeftToRight);
        startDateEdit->setMinimumDate(QDate(2010, 3, 1));

        retranslateUi(entryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), entryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), entryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(entryDialog);
    } // setupUi

    void retranslateUi(QDialog *entryDialog)
    {
        entryDialog->setWindowTitle(QApplication::translate("entryDialog", "Spreadsheet details", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("entryDialog", "Enter end date: ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("entryDialog", "Enter start date: ", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("entryDialog", "Choose wallet / account: ", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(entryDialog);
    } // retranslateUi

};

namespace Ui {
    class entryDialog: public Ui_entryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYDIALOG_H
