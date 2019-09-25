#include "userdefinelabel.h"
#include "pubgui.h"

userDefineLabel::userDefineLabel(QWidget *parent) :
    QWidget(parent)
{
    InitVariable();
    setMainLayout();
}
userDefineLabel::~userDefineLabel()
{
    delete m_lblName;
    delete m_lblValue;
    delete m_hbLayout;
}
void userDefineLabel::InitVariable()
{
    m_lblName = new QLabel();
    m_lblValue = new QLabel();
    m_hbLayout = new QHBoxLayout();
    m_gpbLabel = new QGroupBox();
    m_vbMainLayout = new QVBoxLayout();
    //m_gpbLabel->setStyleSheet("border: 1px solid  #000000");
}
void userDefineLabel::setMainLayout()
{
    //    m_lblName->setFrameShape(QFrame::Box);
    //    m_lblName->setStyleSheet("border: 1px solid  #000000");
    m_hbLayout->setContentsMargins(1,1,1,1);
    m_hbLayout->addWidget(m_lblName);
    m_hbLayout->addWidget(m_lblValue);
    m_hbLayout->addStretch();
    m_gpbLabel->setLayout(m_hbLayout);
    m_vbMainLayout->addWidget(m_gpbLabel);

    this->setLayout(m_hbLayout);
}
void userDefineLabel::setName(const QString &labelname, colorType color)
{
    QColor qColor;
    switch(color)
    {
    case black:
        qColor=Qt::black;
        break;
    case gray:
        qColor=Qt::gray;
        break;
    case blue:
        qColor=Qt::blue;
        break;
    case red:
        qColor=Qt::red;
        break;
    case magenta:
        qColor=Qt::magenta;
        break;
    case darkMagenta:
        qColor=Qt::darkMagenta;
        break;
    case darkYellow:
        qColor=Qt::darkYellow;
        break;
    case darkGray:
        qColor=Qt::darkGray;
        break;
    }
    PUBGUI::SetALabel(m_lblName,labelname,this);
    PUBGUI::SetFontColor(m_lblName,qColor);
    PUBGUI::SetFont(m_lblName,10,"",false);

}

void userDefineLabel::setNameFixedWidth(int iMinLenth)
{
        m_lblName->setFixedWidth(iMinLenth);
}

void userDefineLabel::setValue(const QString &labelvalue, colorType color)
{
    QColor qColor;
    switch(color)
    {
    case black:
        qColor=Qt::black;
        break;
    case gray:
        qColor=Qt::gray;
        break;
    case blue:
        qColor=Qt::blue;
        break;
    case red:
        qColor=Qt::red;
        break;
    case magenta:
        qColor=Qt::magenta;
        break;
    case darkMagenta:
        qColor=Qt::darkMagenta;
        break;
    case darkYellow:
        qColor=Qt::darkYellow;
        break;
    case darkGray:
        qColor=Qt::darkGray;
        break;
    }
    PUBGUI::SetALabel(m_lblValue,labelvalue,this);
    PUBGUI::SetFontColor(m_lblValue,qColor);
    PUBGUI::SetFont(m_lblValue,10,"",false);
}

void userDefineLabel::SetValueFont(int FontSize,QString FontName,bool Bold,bool Italic,bool UnderLine)
{
    QFont ff;
    ff=m_lblValue->font();

    if (FontName!="")
        ff.setFamily(FontName);
    ff.setItalic(Italic);
    ff.setBold(Bold);
    ff.setUnderline(UnderLine);

    if ((FontSize>=6) &&(FontSize<=50))
        ff.setPointSize(FontSize);

    m_lblValue->setFont(ff);
}
QString userDefineLabel::Name()
{
    return m_lblName->text();
}

QString userDefineLabel::Value()
{
    return m_lblValue->text();
}

void userDefineLabel::grayByWindowText()
{
    PUBGUI::SetFontColor(m_lblName,Qt::darkGray);
    PUBGUI::SetFontColor(m_lblValue,Qt::darkGray);
}
