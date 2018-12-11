#ifndef DIALOGS_COMMON_H
#define DIALOGS_COMMON_H
#include <QDialog>


class QFrame;
namespace PAYS {
namespace DIALOGS {

class Base : public QDialog// Где идет установка base??
{
    Q_OBJECT

private:
   QFrame *m_Central;
   QFrame *m_Buttons;

public:
    Base (QWidget *parent=0);
    virtual ~Base(){}
    virtual void attach(QObject *data);
    void setCentralFrame(QFrame *central);
signals:
    void attach_data(QObject *data);


};
}//namespace DIALOGS
}//namespace PAYS
#endif // DIALOGS_COMMON_H
