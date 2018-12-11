#ifndef ORDER_TITLE_H
#define ORDER_TITLE_H
#include <QFrame>
#include <QDateTime>
class QLineEdit;
class QDateTimeEdit;
class QComboBox;
namespace PAYS {
namespace Order {
class Title:public QFrame
{
    Q_OBJECT
    Q_PROPERTY(QString number READ number WRITE setNumber)
    Q_PROPERTY(QDateTime date READ date WRITE setDate)
    Q_PROPERTY(QString kind READ kind WRITE setKind)
    Q_PROPERTY(QString payerStatus READ payerStatus WRITE setPayerStatus)

private:
    QObject *m_Data;
private:
    QLineEdit *m_Number ;
    QDateTimeEdit *m_Date ;
    QComboBox     *m_Kind ;
    QLineEdit     *m_PayerStatus;
public:
    Title(QWidget *parent=0);
    virtual ~Title(){}

    QString number() const ;
    void setNumber(const QString &value);

    QDateTime date() const;
    void setDate(const QDateTime &value);

    QString kind ()const ;
    void setKind(const QString &value) ;

    QString payerStatus ()const;
    void setPayerStatus(const QString &value);

public slots:
    void can_accept(bool *OK);
    void save_data(bool *OK);
    void attach_data(QObject *data){m_Data=data;}
signals:
    void raise_error(const QString &message);


};
/*
QString number() const ;
void setNumber(const QString &value);

QDateTime date() const;
void setDate(const QDateTime &value);

QString kind ()const ;
void setKind(const QString &value) ;

QString payerStatus ()const;
void setPayerStatus(const QString &value);
*/
}//namespace Order
}//namcespace PAYS
#endif // ORDER_TITLE_H
