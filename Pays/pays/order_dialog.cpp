#include "order_dialog.h"
#include "order_frame.h"
namespace PAYS {
namespace Order {

Dialog::Dialog (QWidget *parent):
    DIALOGS::Base(parent)
{
    Frame *F = new Frame(this);
    setCentralFrame(F);// Установка отцентрока фрейма
}

}//namspace Order
}//namespace PAYS
