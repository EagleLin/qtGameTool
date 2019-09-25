#include <QApplication>
#include "mainwindow.h"
#include "appsetting.h"
#include "qsingleapplication.h"
QString g_sProgramVersion = "2.54";
QString g_sProgramName    = "testtool";
QString g_sWindowTitle   =QString::fromUtf8("地图工具");
int main(int argc, char *argv[])
{
    QSingleApplication a(argc, argv);
    if (a.isRunning())
    {
        return EXIT_SUCCESS;
    }
    else
    {
        AppSetting appsetting;
        appsetting.setTextCodec();
        appsetting.setAppName(&a,g_sProgramName);
        appsetting.setTranslator(&a);
        g_sWindowTitle   =QObject::tr("地图工具");
        appsetting.setAppBaseInfo(&a,g_sProgramName,g_sWindowTitle,g_sProgramVersion);
        MainWindow w;
        appsetting.setMainWindowBaseInfo(&w,g_sWindowTitle,g_sProgramVersion,true,QIcon(":terminalmanagetool.png"));
        appsetting.setFixedSize(&w,800,550);
        QObject::connect(&a,SIGNAL(messageReceived(const QString &)),&w,SLOT(slotActiveApplication()));
        w.show();

        return a.exec();
    }
}
