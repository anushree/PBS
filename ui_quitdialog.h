/********************************************************************************
** Form generated from reading ui file 'quitdialog.ui'
**
** Created: Sun Apr 25 09:35:02 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QUITDIALOG_H
#define UI_QUITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quitDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *quitDialog)
    {
        if (quitDialog->objectName().isEmpty())
            quitDialog->setObjectName(QString::fromUtf8("quitDialog"));
        quitDialog->resize(272, 152);
        verticalLayoutWidget = new QWidget(quitDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 251, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout->addWidget(label);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(quitDialog);

        QMetaObject::connectSlotsByName(quitDialog);
    } // setupUi

    void retranslateUi(QDialog *quitDialog)
    {
        quitDialog->setWindowTitle(QApplication::translate("quitDialog", "Are you sure?", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("quitDialog", "Do you really want to quit?", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(quitDialog);
    } // retranslateUi

};

namespace Ui {
    class quitDialog: public Ui_quitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUITDIALOG_H
