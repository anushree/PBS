#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "createwalletdialog.h"
#include "createaccountdialog.h"
#include "creditdialog.h"
#include "aboutdialog.h"
#include "entrydialog.h"

MainWindow::MainWindow(MySQLData database, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    databases = database;
    QString list = "Wallets and bank accounts:\n\n";
    list.append(databases.getWalAccNameBal());
    ui->textBrowser->setText(list);

    connect(ui->newWalButton, SIGNAL(clicked()), this, SLOT(createWal()));
    connect(ui->newAccButton, SIGNAL(clicked()), this, SLOT(createAcc()));
    connect(ui->creditButton, SIGNAL(clicked()), this, SLOT(credit()));
    //connect(ui->viewGraphButton, SIGNAL(clicked()), this, SLOT(graph()));
    connect(ui->viewSheetButton, SIGNAL(clicked()), this, SLOT(sheet()));
    connect(ui->aboutButton, SIGNAL(clicked()), this, SLOT(about()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::createWal()
{
    createWalletDialog WalWindow(databases);
    WalWindow.show();
    WalWindow.exec();
}

void MainWindow::createAcc()
{
    createAccountDialog AccWindow(databases);
    AccWindow.show();
    AccWindow.exec();
}

void MainWindow::credit()
{
    creditDialog CWindow(databases);
    CWindow.show();
    CWindow.exec();
}

void MainWindow::graph()
{

}

void MainWindow::sheet()
{
    entryDialog EWindow(databases);
    EWindow.show();
    EWindow.exec();
}

void MainWindow::about()
{
    aboutDialog AWindow;
    AWindow.show();
    AWindow.exec();
}
