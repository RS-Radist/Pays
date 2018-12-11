#include "mainwindow.h"
#include "Application.h"
int main(int argc, char *argv[])
{
    PAYS::Application a(argc,argv);
    PAYS::MainWindow w;
    w.show();

    return  a.exec();
}
