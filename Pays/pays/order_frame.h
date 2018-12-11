#ifndef ORDER_FRAME_H
#define ORDER_FRAME_H
#include <QFrame>

namespace PAYS {
namespace Order {

class Title;
class BankName;
class SumAsWords;
class Summa;
class Account;
class PayerInOut;
class Receiver;
class Frame:public QFrame
{
  Q_OBJECT
private:
    Title      *m_Title;
    SumAsWords *m_SumAsWords;
    Summa      *m_Summa;
    Account    *m_PayerAccount;
    PayerInOut *m_Payer;
    BankName   *m_PayerBank;
    Receiver   *m_Receiver;
private:
    QObject    *m_Data;
public:
    Frame (QWidget *parent=0) ;
    virtual ~Frame (){}

public slots:
    void attach_data(QObject *data);
    void save_data(bool *OK);
    void can_accept(bool *OK);
signals:
    void raise_error(const QString&);
};

}//namespace Order
}//namespace PAYS

#endif // ORDER_FRAME_H
