/********************************************************************************
** Form generated from reading ui file 'warningdialog.ui'
**
** Created: Wed Apr 28 20:44:49 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WARNINGDIALOG_H
#define UI_WARNINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>

QT_BEGIN_NAMESPACE

class Ui_warningDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *warningDialog)
    {
        if (warningDialog->objectName().isEmpty())
            warningDialog->setObjectName(QString::fromUtf8("warningDialog"));
        warningDialog->resize(271, 154);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../logo_plain/blob.png"), QSize(), QIcon::Normal, QIcon::Off);
        warningDialog->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(warningDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-120, 80, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(warningDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 201, 17));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        label->setFont(font);

        retranslateUi(warningDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), warningDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), warningDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(warningDialog);
    } // setupUi

    void retranslateUi(QDialog *warningDialog)
    {
        warningDialog->setWindowTitle(QApplication::translate("warningDialog", "Warning!!!", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("warningDialog", "Warning! Balance too low.", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(warningDialog);
    } // retranslateUi

};

namespace Ui {
    class warningDialog: public Ui_warningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARNINGDIALOG_H
