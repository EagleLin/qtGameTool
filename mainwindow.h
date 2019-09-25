#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"mainwidget.h"
class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initObject();
public slots:
    void slotActiveApplication();
private:
    void showEvent(QShowEvent *);
private:
    MainWidget *m_mainWidget;
    QPoint  m_pLeftTop;
};

#endif // MAINWINDOW_H
