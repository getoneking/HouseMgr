#include "addownerinfo.h"
#include "ui_addownerinfo.h"

CAddOwnerInfo::CAddOwnerInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CAddOwnerInfo)
{
    ui->setupUi(this);
}

CAddOwnerInfo::~CAddOwnerInfo()
{
    delete ui;
}
