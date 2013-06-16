#ifndef ADDOWNERINFO_H
#define ADDOWNERINFO_H

#include <QDialog>

namespace Ui {
class CAddOwnerInfo;
}

class CAddOwnerInfo : public QDialog
{
    Q_OBJECT
    
public:
    explicit CAddOwnerInfo(QWidget *parent = 0);
    ~CAddOwnerInfo();
    
private:
    Ui::CAddOwnerInfo *ui;
};

#endif // ADDOWNERINFO_H
