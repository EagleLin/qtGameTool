#ifndef PUBNAME_H
#define PUBNAME_H
#include <QString>
#include <QObject>
namespace PUBNAME
{
namespace FYPART
{
QString getFYName()
{
    //Fenyun server
    QString sFyName=QObject::tr("锋云服务器");
    return sFyName;
}
QString getFYAddedName()
{
    //Fenyun server added service
    QString sFyName= QObject::tr("锋云服务器增值服务");
    return sFyName;
}
QString getremotedesktopFYName()
{
    //Fenyun server remotedesktopFY
    QString sFyName= QObject::tr("锋云服务器远程协助");
    return sFyName;
}
QString getFyVODName()
{
    //fengyun VOD server
    QString sFyVODName=QObject::tr("锋云点播服务器");
    return sFyVODName;
}
QString getFuUpdateName()
{
    //fengyun VOD server
    QString sFyUpdateName=QObject::tr("锋云服务器升级");
    return sFyUpdateName;
}

}


namespace STBPART
{
QString getSTBName()
{
    // STB
    QString sStbName=QObject::tr("机顶盒");
    return sStbName;
}
QString getKCamName()
{
    //KCam
    QString sKcamName=QObject::tr("K米看看");
    return sKcamName;
}
}
namespace GATEWAYPART
{
namespace GATEWAYSERVICE
{
QString getGatewayServiceName()
{
    //Gateway Service
    QString sGatewayServiceName=QObject::tr("网关通讯服务");
    return sGatewayServiceName;
}
QString getDataSyncServiceName()
{
    //Data Sync Service
    QString sDataSyncServiceName=QObject::tr("数据同步服务");
    return sDataSyncServiceName;
}
QString getWetchatProxyName()
{
    //Wetchat Proxy Service
    QString sWetChatProxyServiceName=QObject::tr("微+服务");
    return sWetChatProxyServiceName;
}
QString getResReCycleName()
{
    //Res Recycle Service
    QString sResRecycleServiceName=QObject::tr("资源回收服务");
    return sResRecycleServiceName;
}
QString getRecordServiceName()
{
    //Record Server
    QString sRecordServiceName=QObject::tr("录音服务器");
    return sRecordServiceName;
}
QString getRecorduploadServiceName()
{
    //Record Upload Service
    QString sRecordUploadServiceName=QObject::tr("录音上传服务");
    return sRecordUploadServiceName;
}
}
namespace GATEWAYTOOL
{
QString getErcFileManagementTitle()
{
    //Erc File Management
    QString sErcFileManagementName=QObject::tr("歌曲特征文件管理工具");
    return sErcFileManagementName;
}
QString getBoxRankingManagementTitle()
{
    //Box Ranking Management
    QString sToolName=QObject::tr("包厢打榜管理");
    return sToolName;
}
QString getHttpDownloadMonTitle()
{
    //File Download Monitoring Tool
    QString sToolName=QObject::tr("文件下载监控工具");
    return sToolName;
}
QString getKmNetMonitorTitle()
{
    //Bandwidth checking Tool
    QString sToolName=QObject::tr("直播带宽监控工具");
    return sToolName;
}
QString getRemotePushresTaskQueryTitle()
{
    //Resource Push Query
    QString sToolName=QObject::tr("远程资源推送查询工具");
    return sToolName;
}
QString getShutDownToolTitle()
{
    //System Shutdown Tool
    QString sToolName=QObject::tr("关机工具");
    return sToolName;
}
QString getTerminalToolTitle()
{
    //Terminal Management Tool
    QString sToolName=QObject::tr("终端管理工具");
    return sToolName;
}
QString getSyncinfoMonTitle()
{
    //Data Sync Tool
    QString sToolName= QObject::tr("场所信息同步工具");
    return sToolName;
}
QString getSystemappRebackTitle()
{
    //System Rollback Tool
    QString sToolName= QObject::tr("系统版本回滚工具");
    return sToolName;
}
QString getStbMsanagerHelperTitle()
{
    //Android STB Assistant
    QString sToolName= QObject::tr("安卓机顶盒助手");
    return sToolName;
}
QString getLogviewerTitle()
{
    //System Log Viewer
    QString sToolName= QObject::tr("日志查看器");
    return sToolName;
}
QString getSystemBoxTitle()
{
    //System Tool Box
    QString sToolName= QObject::tr("系统工具箱");
    return sToolName;
}
QString getSystemTestTitle()
{
    //System Fault Detection Tool
    QString sToolName=  QObject::tr("系统故障检测工具");
    return sToolName;
}
QString getGatewayMonTitle()
{
    //System Monitoring Tool
    QString sToolName=  QObject::tr("系统监控工具");
    return sToolName;
}
QString getUpdateCenterTitle()
{
    //System Upgrade Center
    QString sToolName= QObject::tr("系统升级中心");
    return sToolName;
}
QString getMessageCenterTitle()
{
    //Message Center
    QString sToolName=  QObject::tr("消息中心");
    return sToolName;
}
QString getControlPanelTitle()
{
    //Control Panel
    QString sToolName=  QObject::tr("控制面板");
    return sToolName;
}
QString getSettingToolTitle()
{
    //Setting Tool
    QString sToolName=   QObject::tr("系统参数配置工具");
    return sToolName;
}
QString getNetWorkSettingTitle()
{
    //Network Connections
    QString sToolName=   QObject::tr("网络连接");
    return sToolName;
}

QString getIotRemoteupdateToolTitle()
{
    QString sToolName =   QObject::tr("物联网远程升级中心");
    return sToolName;
}
}

}


namespace BILLSERVERPART
{
QString getBillServerName()
{
    //Bill Server
    QString sBillServerName=QObject::tr("收银服务器");
    return sBillServerName;
}
QString getCashierSystemName()
{
    //cashier system
    QString sCashierSystemName=QObject::tr("收银管理系统");
    return sCashierSystemName;
}
QString getPayServiceName()
{
    //Pay Service
    QString sPayServiceName=QObject::tr("支付服务");
    return sPayServiceName;
}
QString getBillProxyServiceName()
{
    //Bill Proxy Service
    QString sBillProxyServiceName=QObject::tr("预定服务");
    return sBillProxyServiceName;
}
}

namespace BUSSINESSPART
{
QString getmanageToolName()
{
    //Management Tool
    QString sManageToolName=QObject::tr("管理工具");
    return sManageToolName;
}
QString getboxName()
{
    //box
    QString sBoxName=QObject::tr("包厢");
    return sBoxName;
}
QString getupdatePackageName()
{
    //update package
    QString sUpdatePackage=QObject::tr("升级包");
    return sUpdatePackage;
}
QString getphotoMVName()
{
    //photo MV
    QString sphotoMVName=QObject::tr("照片MV");
    return sphotoMVName;
}
QString getNetAdvertName()
{
    //net advert
    QString sNetAdvertName=QObject::tr("联网广告");
    return sNetAdvertName;
}
QString getMagicFaceName()
{
    //Magic Face
    QString sMagicFaceName=QObject::tr("魔法表情");
    return sMagicFaceName;
}
QString getSongErcFileName()
{
    //song ERC file
    QString sSongErcFileName=QObject::tr("歌曲音准文件");
    return sSongErcFileName;
}
QString getSongRecordingName()
{
    //Song Recording
    QString sSongRecordingName=QObject::tr("歌曲录音");
    return sSongRecordingName;
}
QString getSongShareName()
{
    //Song Sharing
    QString sSongRecordingName=QObject::tr("歌曲分享");
    return sSongRecordingName;
}
}

namespace SYSTEMPART
{
QString getGatewayName()
{
    //gateway
    QString sGatewayName=QObject::tr("网关");
    return sGatewayName;
}
QString getewayLocalIPName()
{
    //gateway local ip
    QString sGatewayLocalIpName=QObject::tr("网关内网IP");
    return sGatewayLocalIpName;
}
QString getNetCarName(int index=-1)
{
    //NIC
    QString sNetCarName="";
    if(index<0)
        sNetCarName=QObject::tr("网卡");
    else
        sNetCarName=QObject::tr("网卡%1").arg(index);
    return sNetCarName;
}
}

namespace OTHERPART
{
QString getVideoServerName()
{
    //video server
    QString sVideoServerName=QObject::tr("录像服务器");
    return sVideoServerName;
}
}

}
#endif // PUBNAME_H
