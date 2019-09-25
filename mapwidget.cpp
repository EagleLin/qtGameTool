#include "mapwidget.h"
#include <QLabel>
#include <QTime>
#include <QDebug>
int g_widthCount=100;
int g_heightCount=50;

MapWidget::MapWidget(int width,int height,QWidget *parent) :
    QWidget(parent)
{
    g_widthCount=width;// getRandNum(101,20);
    g_heightCount=height;//getRandNum(51,10);
    iAllCount=g_widthCount*g_heightCount;
    m_layMap=new QGridLayout;
    this->setLayout(m_layMap);
    getRabbitInfo();
    getWolfInfo();
    getGrassInfo();
    getTreeInfo();
    getWaterInfo();
    getDesertInfo();

    createMap();
}

void MapWidget::createMap()
{
    //湖的开始位置
    int width= getRandNum(g_widthCount,13);
    int startWidth=getRandNum(g_widthCount-width,0);
    int height=getRandNum(g_heightCount-2,0);
    int deSertCount=0;
    //荒地
    for(int i=0;i<g_heightCount;i++){
        for(int j=0;j<g_widthCount;j++){
            srt_point srtPoint;
            srtPoint.row=i;
            srtPoint.colum=j;
            if(i>=height&&i<=(height+2)&&j>=startWidth&&j<=width){
                if((i==height||i==height+2)&&(j==startWidth||j==startWidth+1||j==width||j==width-1)){
                    addRole(GRASS,i,j);
                }else
                    addRole(WATER,i,j);
            }
            else if(isListPoint(m_srtRabbit.srtPointList,srtPoint)){
                addRole(RABBIT,i,j);
            }
            else if(isListPoint(m_srtWolf.srtPointList,srtPoint)){
                addRole(WOLF,i,j);
            }else if(deSertCount!=0||(deSertCount==0&&getRandNum(11,0)==1)){
                 if(deSertCount==0)
                        deSertCount=getRandNum(3,0);
                  else
                     deSertCount--;
                addRole(DESERT,i,j);
            }else if(getRandNum(3,0)==1){
                addRole(TREE,i,j);
            }
            else{
                addRole(GRASS,i,j);
            }

        }
    }

}

void MapWidget::addRole(ROLE_TYPE roleType, int row, int colum)
{
    QLabel *lblRole=new QLabel(this);
    if(roleType==GRASS)
    {
        lblRole->setText(tr("，"));
        lblRole->setToolTip("草");
    }
    else  if(roleType==TREE)
    {
        lblRole->setText(tr("🌲"));
        lblRole->setToolTip("树");
    }
    else  if(roleType==DESERT)
    {
        lblRole->setText(tr("っ"));
        lblRole->setToolTip("荒地");
    }
    else  if(roleType==WATER)
    {
        lblRole->setText(tr("〰"));
        lblRole->setToolTip("湖水");
    }
    else  if(roleType==RABBIT)
    {
        lblRole->setText(tr("🐇"));
        lblRole->setToolTip("兔子");
    }
    else  if(roleType==WOLF)
    {
        lblRole->setText(tr("🐺"));
        lblRole->setToolTip("狼");
    }

    m_layMap->addWidget(lblRole,row,colum);
}
//输入 数值得到 随机数
//如 输入5 得到5以内的随机数 0~4
int MapWidget::getRandNum(int iMaxNum,int iMinNum)
{
    int iRand=iMaxNum-iMinNum;
    QTime time;
    time= QTime::currentTime();
    qsrand(time.msec()+time.second()*5000+rand());
    int n = qrand() % iRand;
    return n+iMinNum;
}
//得到草数量 0.55~0.80
void MapWidget::getGrassInfo()
{//1
    m_srtGrass.roleType=GRASS;
    m_srtGrass.roleCount=iAllCount*getRandNum(81,55)/100;
}

void MapWidget::getTreeInfo()
{//2
    m_srtTree.roleType=TREE;
    m_srtTree.roleCount=m_srtGrass.roleCount*getRandNum(49,30)/100;
}

void MapWidget::getDesertInfo()
{//3
    m_srtDesert.roleType=DESERT;
    m_srtDesert.roleCount= m_srtGrass.roleCount*getRandNum(49,10)/100;
}

void MapWidget::getWaterInfo()
{
    m_srtWater.roleType=WATER;
    m_srtWater.roleCount=m_srtGrass.roleCount*getRandNum(49,10)/100;


}

void MapWidget::getRabbitInfo()
{//1
    m_srtRabbit.roleType=RABBIT;
    m_srtRabbit.roleCount=getRandNum(10,1);
    for(int i=0;i<m_srtRabbit.roleCount;i++){
        srt_point srtPoint;
        srtPoint.row=getRandNum(g_heightCount,0);
        srtPoint.colum=getRandNum(g_widthCount,0);
        m_srtRabbit.srtPointList.append(srtPoint);
    }

}

void MapWidget::getWolfInfo()
{//2
    m_srtWolf.roleType=WOLF;
    m_srtWolf.roleCount=getRandNum(3,1);
    for(int i=0;i<m_srtWolf.roleCount;i++){
        srt_point srtPoint;
        srtPoint.row=getRandNum(g_heightCount,0);
        srtPoint.colum=getRandNum(g_widthCount,0);
        m_srtWolf.srtPointList.append(srtPoint);
    }
}

bool MapWidget::isListPoint(QList<srt_point> srtPointList, srt_point srtPoint)
{
    for(int i=0;i<srtPointList.count();i++){
        if(srtPointList[i].row==srtPoint.row&&srtPointList[i].colum==srtPoint.colum)
            return true;
    }
    return false;
}
