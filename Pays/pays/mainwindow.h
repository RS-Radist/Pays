#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QPushButton>
class QAction;
namespace PAYS
{
class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    //QAction *m_ActionShowDialog;
    QMenuBar *m_menuBar;
    QAction *m_ActionQuit;
    QAction *m_ActionHelp;
    QAction *m_ActionAbout;
    QAction *m_ActionAboutQt;
    QAction *m_ActionNewOrder;
public:
    MainWindow(QWidget *parent = 0);
    virtual ~MainWindow(){}
public slots:
    void on_about() ;
    void on_new_order() ;
    void on_about_qt();
};

}

#endif // MAINWINDOW_H
