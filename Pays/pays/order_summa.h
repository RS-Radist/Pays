#ifndef ORDER_SUMMA_H
#define ORDER_SUMMA_H
#include <QFrame>
#include "ui_summa.h"
namespace PAYS {
namespace Order {
class Summa:public QFrame
{
    Q_OBJECT
    Q_PROPERTY(QString value READ
               value WRITE setValue
               NOTIFY value_changed)
public:
    Summa (QWidget *parent=0);
    virtual ~Summa(){}
    QString value() const;
    void setValue(const QString &value);
public slots:
    void can_accept(bool *OK);
private:
    Ui::Summa ui;
signals:
    void value_changed(const QString &);



};


}//namspace Order
}//namespcae PAYS
#endif // ORDER_SUMMA_H
