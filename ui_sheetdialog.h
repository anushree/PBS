/********************************************************************************
** Form generated from reading ui file 'sheetdialog.ui'
**
** Created: Tue Apr 27 14:19:46 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SHEETDIALOG_H
#define UI_SHEETDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_sheetDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *sheetDialog)
    {
        if (sheetDialog->objectName().isEmpty())
            sheetDialog->setObjectName(QString::fromUtf8("sheetDialog"));
        sheetDialog->resize(508, 303);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../logo_plain/blob.png"), QSize(), QIcon::Normal, QIcon::Off);
        sheetDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(sheetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(160, 260, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        textBrowser = new QTextBrowser(sheetDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 491, 231));

        retranslateUi(sheetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), sheetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), sheetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(sheetDialog);
    } // setupUi

    void retranslateUi(QDialog *sheetDialog)
    {
        sheetDialog->setWindowTitle(QApplication::translate("sheetDialog", "Spreadsheet", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(sheetDialog);
    } // retranslateUi

};

namespace Ui {
    class sheetDialog: public Ui_sheetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHEETDIALOG_H
