#ifndef ORDER_PAYER_IN_OUT_H
#define ORDER_PAYER_IN_OUT_H
#include <QFrame>
#include "ui_payer_in_out.h"
namespace PAYS {
namespace Order {

class PayerInOut : public QFrame
{
  Q_OBJECT
private:
    Ui::PayerInOut ui;

public:
    PayerInOut (QWidget *parent=0);
    virtual ~PayerInOut(){}
    void setName(const QString &name);
};
}//namspace Order
}//namespace PAYS
#endif // ORDER_PAYER_IN_OUT_H
