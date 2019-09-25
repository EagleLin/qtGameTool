/*########################################################################
 # 单元名称： PLATFORMVARS
 # 单元说明： 存放网关上平台相关(业务无关)的相关的参数,系统统一变量,约定等
 # 系统说明： （魔云联网系统-网关）
########################################################################*/
#ifndef PLATFORMVARS_H
#define PLATFORMVARS_H

#include <QString>
#include <QSize>

namespace PLATFORMVARS{

//标准参数
namespace STANDARD_CONSTANT
{
const char STANDARD_TIME_FORMAT[] = "yyyy-MM-dd hh:mm:ss";      //时间格式
const char STANDARD_DATE_FORMAT[] = "yyyy-MM-dd";
const char STANDARD_HOUR_FORMAT[] = "hh:mm:ss";
}


namespace ERRORCODE
{
const char CORRECT[]        = "0";      //正确;
const char COMMON_ERROR[]   = "1";      //普通错误;
const char DEALING[]   = "2";      //正在处理;
}


//■ 定义界面参数 ■
namespace INTERFACE
{

const QString APP_INTERFACE_CONFIG_FILE     = "/evideoktv/bin/appinterface.cfg";                        //应用程序界面统一配置文件

namespace BANNER
{
const int    WINDOW_HIGHT = 85;                     //banner的高度
const int    TITLE_FONT_SIZE = 13;                  //标题字体大小
const QString TITLE_FONT_COLOR ="yellow";           //标题颜色
const int    TITLE_DESCRIPTION_FONT_SIZE = 10;      //描述字体大小;
const QString TITLE_DESCRIPTION_FONT_COLOR ="white"; //描述字体颜色
const QSize  ICON_SIZE=QSize(56,56);                //图标大小
}
}

}


#endif

