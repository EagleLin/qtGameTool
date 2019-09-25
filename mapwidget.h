#ifndef MAPWIDGET_H
#define MAPWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QList>
enum ROLE_TYPE{
    GRASS=0,//草
    TREE=1, //树
    DESERT=2,//荒地
    WATER=3,//湖水
    RABBIT=4,//兔子
    WOLF=5 //狼
};
struct srt_point{
   int row;
   int colum;
};
struct srt_Role{
    ROLE_TYPE roleType;
    int roleCount;
    QList<srt_point> srtPointList;
};


class MapWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MapWidget(int width,int height,QWidget *parent = 0);
    void createMap();
    void addRole(ROLE_TYPE roleType,int row,int colum);
private:
    int getRandNum(int iMaxNum,int iMinNum=0);
    void getGrassInfo();
    void getTreeInfo();
    void getDesertInfo();
    void getWaterInfo();
     void getRabbitInfo();
      void getWolfInfo();
      bool isListPoint( QList<srt_point> srtPointList,srt_point srtPoint);
signals:
    
public slots:
private:
    QGridLayout *m_layMap;
    int iAllCount;
    srt_Role m_srtGrass;
    srt_Role m_srtTree;
    srt_Role m_srtDesert;
    srt_Role m_srtRabbit;
    srt_Role m_srtWater;
    srt_Role m_srtWolf;

};

#endif // MAPWIDGET_H
