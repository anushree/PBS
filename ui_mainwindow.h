/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Tue Apr 27 11:20:46 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionWallet;
    QAction *actionBank_Account;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionGraph;
    QAction *actionSpreadsheet;
    QAction *actionData_entry;
    QAction *actionAbout_PBS;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *newWalButton;
    QPushButton *newAccButton;
    QPushButton *creditButton;
    QPushButton *viewSheetButton;
    QPushButton *aboutButton;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(450, 302);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../logo_plain/blob.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionWallet = new QAction(MainWindow);
        actionWallet->setObjectName(QString::fromUtf8("actionWallet"));
        actionBank_Account = new QAction(MainWindow);
        actionBank_Account->setObjectName(QString::fromUtf8("actionBank_Account"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionGraph = new QAction(MainWindow);
        actionGraph->setObjectName(QString::fromUtf8("actionGraph"));
        actionSpreadsheet = new QAction(MainWindow);
        actionSpreadsheet->setObjectName(QString::fromUtf8("actionSpreadsheet"));
        actionData_entry = new QAction(MainWindow);
        actionData_entry->setObjectName(QString::fromUtf8("actionData_entry"));
        actionAbout_PBS = new QAction(MainWindow);
        actionAbout_PBS->setObjectName(QString::fromUtf8("actionAbout_PBS"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 185, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        newWalButton = new QPushButton(verticalLayoutWidget);
        newWalButton->setObjectName(QString::fromUtf8("newWalButton"));

        verticalLayout->addWidget(newWalButton);

        newAccButton = new QPushButton(verticalLayoutWidget);
        newAccButton->setObjectName(QString::fromUtf8("newAccButton"));

        verticalLayout->addWidget(newAccButton);

        creditButton = new QPushButton(verticalLayoutWidget);
        creditButton->setObjectName(QString::fromUtf8("creditButton"));

        verticalLayout->addWidget(creditButton);

        viewSheetButton = new QPushButton(verticalLayoutWidget);
        viewSheetButton->setObjectName(QString::fromUtf8("viewSheetButton"));

        verticalLayout->addWidget(viewSheetButton);

        aboutButton = new QPushButton(verticalLayoutWidget);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));

        verticalLayout->addWidget(aboutButton);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(205, 21, 231, 261));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        textBrowser->setFont(font);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Personal Budgetting System for Students", 0, QApplication::UnicodeUTF8));
        actionWallet->setText(QApplication::translate("MainWindow", "Wallet", 0, QApplication::UnicodeUTF8));
        actionBank_Account->setText(QApplication::translate("MainWindow", "Bank Account", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionGraph->setText(QApplication::translate("MainWindow", "Graph", 0, QApplication::UnicodeUTF8));
        actionSpreadsheet->setText(QApplication::translate("MainWindow", "Spreadsheet", 0, QApplication::UnicodeUTF8));
        actionData_entry->setText(QApplication::translate("MainWindow", "Data entry", 0, QApplication::UnicodeUTF8));
        actionAbout_PBS->setText(QApplication::translate("MainWindow", "About PBS", 0, QApplication::UnicodeUTF8));
        newWalButton->setText(QApplication::translate("MainWindow", "Create new wallet", 0, QApplication::UnicodeUTF8));
        newAccButton->setText(QApplication::translate("MainWindow", "Create new account", 0, QApplication::UnicodeUTF8));
        creditButton->setText(QApplication::translate("MainWindow", "Credit / debit amount", 0, QApplication::UnicodeUTF8));
        viewSheetButton->setText(QApplication::translate("MainWindow", "View spreadsheet", 0, QApplication::UnicodeUTF8));
        aboutButton->setText(QApplication::translate("MainWindow", "About PBS", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
