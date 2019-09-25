#include "mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    initObject();
}

MainWindow::~MainWindow()
{
    
}

void MainWindow::initObject()
{
    //ui
    m_mainWidget= new MainWidget(this);
    setCentralWidget(m_mainWidget);
}

void MainWindow::showEvent(QShowEvent *)
{
     //PUBGUI::AlignCenter(this,true,true,true);
}
void MainWindow::slotActiveApplication()
{
    m_pLeftTop.setX(this->frameGeometry().left());
    m_pLeftTop.setY(this->frameGeometry().top());

    this->hide();
    this->showNormal();
}
