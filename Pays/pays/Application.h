#ifndef APPLICATION_H
#define APPLICATION_H
#include <QApplication>

namespace PAYS
{
class Application:public QApplication
{
    Q_OBJECT

public:
    Application(int argc,char*argv[]);
    virtual ~Application(){}
};
}

#define APP qobject_cast<::PAYS::Application*>(qApp)


#endif // APPLICATION_H
