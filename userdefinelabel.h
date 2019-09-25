#ifndef USERDEFINELABEL_H
#define USERDEFINELABEL_H

#include <QLabel>
#include <QHBoxLayout>
#include <QGroupBox>
enum colorType {
    black,
    gray,
    blue,
    red,
    magenta,
    darkMagenta,
    darkYellow,
    darkGray
};

class userDefineLabel : public QWidget
{
    Q_OBJECT
public:
    explicit userDefineLabel(QWidget *parent = 0);
    ~userDefineLabel();

    void setName(const QString &labelname,colorType color=black);
    void setNameFixedWidth(int iMinLenth);
    void setValue(const QString &labelvalue,colorType color=gray);
    void grayByWindowText();

    QString Name();
    QString Value();
    void SetValueFont(int FontSize=10,QString FontName="sans",bool Bold=false,bool Italic=false,bool UnderLine=false);
private:
    void InitVariable();
    void setMainLayout();

private:
    QLabel *m_lblName;
    QLabel *m_lblValue;
    QHBoxLayout *m_hbLayout;
    QGroupBox   *m_gpbLabel;
    QVBoxLayout *m_vbMainLayout;

    
signals:
    
public slots:
    
};

#endif // USERDEFINELABEL_H
