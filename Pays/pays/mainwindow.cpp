#include "mainwindow.h"
#include <QDialog>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QMessageBox>
#include <QtDebug>
#include "Application.h"
#include "order_dialog.h"

namespace PAYS
{
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("MAIN WINDOW");

    m_ActionQuit=new QAction(this);
    m_ActionQuit->setText(tr("Quit"));
    m_ActionQuit->setMenuRole(QAction::NoRole);


    m_ActionHelp=new QAction(this);
    m_ActionHelp->setText("Help");
    m_ActionHelp->setMenuRole(QAction::NoRole);

    m_ActionAbout=new QAction(this);
    m_ActionAbout->setText("About ...");
    m_ActionAbout->setMenuRole(QAction::NoRole);

    m_ActionAboutQt=new QAction(this);
    m_ActionAboutQt->setText("About Qt ...");
    m_ActionAboutQt->setMenuRole(QAction::NoRole);

    m_ActionNewOrder=new QAction(this);
    m_ActionNewOrder->setText("New Order");
    m_ActionNewOrder->setMenuRole(QAction::NoRole);
    m_ActionNewOrder->setShortcut(QKeySequence (Qt::ALT + Qt::Key_N,Qt::Key_O));



    QMenu * file_menu=new QMenu(tr("File"),this);
    file_menu->addAction(m_ActionNewOrder);
    file_menu->addSeparator();
    file_menu->addAction(m_ActionQuit);

    menuBar()->addMenu(file_menu);


    QAction *m_deleteFile=new QAction(this);
    m_deleteFile->setText("DELETE FILE");
    m_deleteFile->setMenuRole(QAction::NoRole);

    QMenu * windows_menu=new QMenu(tr("szx"),this);
    windows_menu->addAction(m_deleteFile);
    menuBar()->addMenu(windows_menu);



    QMenu *m_menu3=new QMenu(tr("Help"),this);

    menuBar()->addMenu(m_menu3);

    m_menu3->addAction(m_ActionHelp);
    m_menu3->addSeparator();
    m_menu3->addAction(m_ActionAbout);
    m_menu3->addAction(m_ActionAboutQt);

    connect(m_ActionQuit,SIGNAL(triggered()),this,SLOT(close()));
    connect(m_ActionNewOrder,SIGNAL(triggered()),this,SLOT(on_new_order()));
    connect(m_ActionAbout,SIGNAL(triggered()),this,SLOT(on_about()));
    connect(m_ActionAboutQt,&QAction::triggered,this,&MainWindow::on_about_qt);
    //connect(m_ActionAboutQt,SIGNAL(triggered()),this,SLOT(on_about_qt()));



//    m_ToolBar=new QToolBar(this);
//    m_ToolBar->addAction(m_ActionQuit);
//    addToolBar(Qt::TopToolBarArea,m_ToolBar);
//
}


void MainWindow::on_about()
{
    QString title = tr("About")
                + " " + APP->applicationDisplayName();

        QString text = tr(
                    "This is a very cool program.\n"
                    "It works fine\n"
                    "and does anything you need.");
        QMessageBox::about(this, title, text) ;
}


void MainWindow::on_new_order()
{
    QObject test ;
    Order::Dialog diaOrder(this);
    diaOrder.attach(&test);
    //diaOrder.setModal(true);
    diaOrder.setMinimumSize(302,233);
    //diaOrder.setFixedSize(302,233);
    diaOrder.exec();
    qDebug()<<test.property("number") ;
    qDebug()<<test.property("date") ;
    qDebug()<<test.property("kind") ;
    qDebug()<<test.property("payerStatus") ;


}

void MainWindow::on_about_qt()
{
    QMessageBox::aboutQt(this,APP->applicationDisplayName());
}

}

