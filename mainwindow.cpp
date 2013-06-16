#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addownerinfo.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAddOwner_triggered()
{
    CAddOwnerInfo *addOwnerInfo = new CAddOwnerInfo(this);
    addOwnerInfo->show();
    addOwnerInfo->setAttribute(Qt::WA_DeleteOnClose);


    addOwnerInfo->setModal(true);
    addOwnerInfo->activateWindow();
}
