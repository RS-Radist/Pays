#ifndef DIALOGS_BUTTONS_H
#define DIALOGS_BUTTONS_H
#include <QFrame>
class QPushButton ;
class QLabel ;

namespace PAYS {
namespace DIALOGS {

class Buttons:public QFrame // Где идет установка button
{
  Q_OBJECT
private:
    QLabel *m_ErrorMassage ;
    QPushButton *m_OK ;
    QPushButton *m_Cancel ;


public:
    Buttons (QWidget *parent=0);
    virtual~Buttons(){}

private slots:
    void on_ok_press();
public slots:
    void error_message(const QString & message);

signals:
    void rejected();
    void accepted();
    void accept_request(bool *OK);
    void save_request(bool *OK);
};
}
}
#endif // DIALOGS_BUTTONS_H
