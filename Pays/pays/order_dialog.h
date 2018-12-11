#ifndef ORDER_DIALOG_H
#define ORDER_DIALOG_H
#include "dialogs_common.h"

namespace PAYS {
namespace Order {
class Dialog:public DIALOGS::Base
{
    Q_OBJECT
public:
    Dialog(QWidget *parent=0);
    virtual ~Dialog(){}
};





}//namespace Order
}//namespace PAYS
#endif // ORDER_DIALOG_H
