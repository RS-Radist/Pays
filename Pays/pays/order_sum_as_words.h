#ifndef ORDER_SUM_AS_WORDS_H
#define ORDER_SUM_AS_WORDS_H
#include <QFrame>
#include <QLabel>
namespace PAYS {
namespace Order {


class SumAsWords:public QFrame
{
    Q_OBJECT
private:
    QLabel *m_Label;
    QLabel *m_Value;
public:
    SumAsWords(QWidget *parent=0);
    virtual ~SumAsWords(){}

public slots:
    void setValue(const QString &value);


};
}//namespace Order
}//namespace PAYS
#endif // ORDER_SUM_AS_WORDS_H
