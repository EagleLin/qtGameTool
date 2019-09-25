#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QFrame>
#include <QGridLayout>
#include <QKeyEvent>
#include <QLabel>
#include <QPoint>
#include <QPushButton>
#include <QUdpSocket>
#include "mapwidget.h"
#include <QScrollArea>
#include "userdefinelabel.h";
class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = 0);
    void initGUI();
    void createBanner(QString title,QString description,QString iconresname);
    void createAllObject();
    void setMainLayout();
signals:
    
public slots:
    void slotCreateMapWdiget();
private:
    void showEvent(QShowEvent *);
    void resizeEvent(QResizeEvent *);
    int getRandNum(int iMaxNum,int iMinNum=0);
private:
    //定义ui
    //=====================================================
    //顶部面板;
    QFrame      *m_frmBanner;
    QGridLayout *m_glayoutBanner;

    QLabel      *m_lblIcon;
    QLabel      *m_lblTitle;
    QLabel      *m_lblTitleDescribtion;
    QPushButton *m_btnCreate;
    //主体布局
    QFrame      *m_frmMain;
    QGridLayout *m_glayoutMain;
    MapWidget   *m_mapWidget;
    QScrollArea *m_scrollArea;
    userDefineLabel *m_ulbWidth;
    userDefineLabel *m_ulbHeight;
    userDefineLabel *m_ulbGrass;
    userDefineLabel *m_ulbTree;
    userDefineLabel *m_ulbDesert;
    userDefineLabel *m_ulbRabbit;
    userDefineLabel *m_ulbWolf;
     userDefineLabel *m_ulbWater;


};

#endif // MAINWIDGET_H
