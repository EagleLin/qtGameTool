#include "mainwidget.h"
#include "pubgui.h"
#include "platformvars.h"
#include <QHBoxLayout>
#include <QTime>
extern QString g_sWindowTitle;

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent)
{
    initGUI();
}

void MainWidget::initGUI()
{
    createAllObject();
    setMainLayout();
}

void MainWidget::createBanner(QString title, QString description, QString iconresname)
{
    m_frmBanner = new QFrame(this);
    m_frmBanner->setFixedHeight(PLATFORMVARS::INTERFACE::BANNER::WINDOW_HIGHT);

    m_glayoutBanner = new QGridLayout(m_frmBanner);
    m_glayoutBanner->setContentsMargins(8, 8, 8, 0);
    m_glayoutBanner->setSpacing(4);

    m_lblTitle = new QLabel(this);
    m_lblTitle->setText(title);
    m_lblTitle->setAlignment(Qt::AlignTop);
    PUBGUI::SetFont(m_lblTitle, PLATFORMVARS::INTERFACE::BANNER::TITLE_FONT_SIZE, "", true);
    PUBGUI::SetFontColor(m_lblTitle, PLATFORMVARS::INTERFACE::BANNER::TITLE_FONT_COLOR);

    m_lblTitleDescribtion = new QLabel(this);
    m_lblTitleDescribtion->setText(description);
    m_lblTitleDescribtion->setAlignment(Qt::AlignTop);
    m_lblTitleDescribtion->setWordWrap(true);
    PUBGUI::SetFont(m_lblTitleDescribtion, PLATFORMVARS::INTERFACE::BANNER::TITLE_DESCRIPTION_FONT_SIZE);
    PUBGUI::SetFontColor(m_lblTitleDescribtion,PLATFORMVARS::INTERFACE::BANNER::TITLE_DESCRIPTION_FONT_COLOR);

    m_lblIcon = new QLabel(this);
    m_lblIcon->setFixedSize(PLATFORMVARS::INTERFACE::BANNER::ICON_SIZE);
    QPixmap pp(iconresname);
    pp = pp.scaled(PLATFORMVARS::INTERFACE::BANNER::ICON_SIZE, Qt::KeepAspectRatioByExpanding);
    m_lblIcon->setPixmap(pp);
    m_lblIcon->installEventFilter(this);
}

void MainWidget::createAllObject()
{
    //banner栏;
    createBanner(g_sWindowTitle,
                 tr("生车恩公随机大小的字符地图！"),
                 ":terminalmanagetool.png");
    //主布局;
    m_frmMain = new QFrame(this);
    m_glayoutMain = new QGridLayout(m_frmMain);
    m_glayoutMain->setContentsMargins(1,1,1,1);
    int width=getRandNum(101,20);
    int height=getRandNum(51,10);
    m_mapWidget=new MapWidget( width,height,this);
    m_scrollArea=new QScrollArea(this);
    m_scrollArea->setWidget(m_mapWidget);
    m_btnCreate=new QPushButton(this);
    m_btnCreate->setText(tr("生成地图"));
    connect(m_btnCreate,SIGNAL(clicked()),this,SLOT(slotCreateMapWdiget()));
    m_ulbGrass=new userDefineLabel(this);
    m_ulbGrass->setName("草数量:",blue);
    m_ulbGrass->setValue("0");
    m_ulbTree=new userDefineLabel(this);
    m_ulbTree->setName("树数量:",blue);
    m_ulbTree->setValue("0");
    m_ulbDesert=new userDefineLabel(this);
    m_ulbDesert->setName("荒地数量:",blue);
    m_ulbDesert->setValue("0");

    m_ulbRabbit=new userDefineLabel(this);
    m_ulbRabbit->setName("兔子数量:",blue);
    m_ulbRabbit->setValue("0");
    m_ulbWolf=new userDefineLabel(this);
    m_ulbWolf->setName("狼数量:",blue);
    m_ulbWolf->setValue("0");
    m_ulbWater=new userDefineLabel(this);
    m_ulbWater->setName("水数量:",blue);
    m_ulbWater->setValue("0");
    m_ulbWidth=new userDefineLabel(this);
    m_ulbWidth->setName("地图宽度:",blue);
    m_ulbWidth->setValue("0");
    m_ulbHeight=new userDefineLabel(this);
    m_ulbHeight->setName("地图高度:",blue);
    m_ulbHeight->setValue("0");

    m_ulbWidth->setValue(QString::number(width),red);
     m_ulbHeight->setValue(QString::number(height),red);
}

void MainWidget::setMainLayout()
{
    //banner;
    m_glayoutBanner->addWidget(m_lblTitle,0,0);
    m_glayoutBanner->addWidget(m_lblTitleDescribtion,1,0);
    m_glayoutBanner->addWidget(m_lblIcon,0,1,3,1);
    m_frmBanner->setLayout(m_glayoutBanner);

    //主布局;
    m_glayoutMain->addWidget(m_frmBanner);
    QHBoxLayout *lay=new QHBoxLayout();
    lay->addWidget(m_btnCreate);
    lay->addWidget(m_ulbWidth);
    lay->addWidget(m_ulbHeight);
    lay->addWidget(m_ulbGrass);
    lay->addWidget(m_ulbTree);
    lay->addWidget(m_ulbRabbit);
    lay->addWidget(m_ulbWolf);
//    lay->addWidget(m_ulbWater);
//    lay->addWidget(m_ulbDesert);
    m_glayoutMain->addLayout(lay,1,0);
    m_glayoutMain->addWidget(m_scrollArea);


    setLayout(m_glayoutMain);
}

void MainWidget::slotCreateMapWdiget()
{
    m_mapWidget->close();
    delete m_mapWidget;
    int width=getRandNum(101,20);
    int height=getRandNum(51,10);
    m_mapWidget=new MapWidget( width,height,this);
    m_scrollArea->setWidget(m_mapWidget);
    m_ulbWidth->setValue(QString::number(width),red);
     m_ulbHeight->setValue(QString::number(height),red);
}

void MainWidget::showEvent(QShowEvent *)
{
    //强制刷新banner;
    resizeEvent(0);
    PUBGUI::AlignCenter(this,true,true,true);
}

void MainWidget::resizeEvent(QResizeEvent *)
{
    QLinearGradient linearGradient(10, 10, m_frmBanner->width(), m_frmBanner->height()-2);
    linearGradient.setColorAt(0.20, QColor(0,0,0) );
    linearGradient.setColorAt(0.82, QColor(5,26,54) );
    linearGradient.setColorAt(1.0, QColor(50,141,90));

    QPalette palette;
    palette.setBrush(m_frmBanner->backgroundRole(), QBrush(linearGradient));
    m_frmBanner->setPalette(palette);
    m_frmBanner->setAutoFillBackground(true);
}

int MainWidget::getRandNum(int iMaxNum, int iMinNum)
{
    int iRand=iMaxNum-iMinNum;
    QTime time;
    time= QTime::currentTime();
    qsrand(time.msec()+time.second()*5000+rand());
    int n = qrand() % iRand;
    return n+iMinNum;
}
