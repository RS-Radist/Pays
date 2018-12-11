#ifndef ORDER_RECEIVER_H
#define ORDER_RECEIVER_H
#include <QFrame>
#include "ui_receiver.h"

namespace PAYS {
namespace Order {
class Receiver:public QFrame
{
    Q_OBJECT
private:
    Ui::Receiver ui;
public:
    Receiver(QWidget *parent=0);
    virtual~Receiver(){}
};

}//namespace Order
}//namespace PAYS
#endif // ORDER_RECEIVER_H
