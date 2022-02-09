// CPP L:\smali2cpp20\x64\Release\out\sun\util\logging\LoggingSupport.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.security.AccessController.h"
#include "java.util.Date.h"
#include "java.util.List.h"
#include "sun.util.logging.LoggingProxy.h"
#include "sun.util.logging.LoggingSupport_S_1.h"
#include "sun.util.logging.LoggingSupport_S_2.h"
#include "sun.util.logging.LoggingSupport.h"

static sun::util::logging::LoggingSupport::DEFAULT_FORMAT = std::make_shared<java::lang::String>("%1$tb %1$td, %1$tY %1$tl:%1$tM:%1$tS %1$Tp %2$s%n%4$s: %5$s%6$s%n");
static sun::util::logging::LoggingSupport::FORMAT_PROP_KEY = std::make_shared<java::lang::String>("java.util.logging.SimpleFormatter.format");
static sun::util::logging::LoggingSupport::proxy;
// .method static constructor <clinit>()V
void sun::util::logging::LoggingSupport::static_cinit()
{
	
	std::shared_ptr<sun::util::logging::LoggingSupport_S_1> cVar0;
	std::shared_ptr<sun::util::logging::LoggingProxy> cVar1;
	
	cVar0 = std::make_shared<sun::util::logging::LoggingSupport_S_1>();
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("sun::util::logging::LoggingProxy");
	sun::util::logging::LoggingSupport::proxy = cVar1;
	return;

}
// .method private constructor <init>()V
sun::util::logging::LoggingSupport::LoggingSupport()
{
	
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static ensureAvailable()V
void sun::util::logging::LoggingSupport::ensureAvailable()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( sun::util::logging::LoggingSupport::proxy )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Should not here")));
	// throw
	throw cVar0;
	// 073    .line 77
label_cond_d:
	return;

}
// .method public static getLevel(Ljava/lang/Object;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::util::logging::LoggingSupport::getLevel(std::shared_ptr<java::lang::Object> logger)
{
	
	//    .param p0, "logger"    # Ljava/lang/Object;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	return sun::util::logging::LoggingSupport::proxy->getLevel(logger);

}
// .method public static getLevelName(Ljava/lang/Object;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::logging::LoggingSupport::getLevelName(std::shared_ptr<java::lang::Object> level)
{
	
	//    .param p0, "level"    # Ljava/lang/Object;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	return sun::util::logging::LoggingSupport::proxy->getLevelName(level);

}
// .method public static getLevelValue(Ljava/lang/Object;)I
int sun::util::logging::LoggingSupport::getLevelValue(std::shared_ptr<java::lang::Object> level)
{
	
	//    .param p0, "level"    # Ljava/lang/Object;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	return sun::util::logging::LoggingSupport::proxy->getLevelValue(level);

}
// .method public static getLogger(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::util::logging::LoggingSupport::getLogger(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	return sun::util::logging::LoggingSupport::proxy->getLogger(name);

}
// .method public static getLoggerLevel(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::logging::LoggingSupport::getLoggerLevel(std::shared_ptr<java::lang::String> loggerName)
{
	
	//    .param p0, "loggerName"    # Ljava/lang/String;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	return sun::util::logging::LoggingSupport::proxy->getLoggerLevel(loggerName);

}
// .method public static getLoggerNames()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> sun::util::logging::LoggingSupport::getLoggerNames()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 171        value = {
	// 172            "()",
	// 173            "Ljava/util/List",
	// 174            "<",
	// 175            "Ljava/lang/String;",
	// 176            ">;"
	// 177        }
	// 178    .end annotation
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	return sun::util::logging::LoggingSupport::proxy->getLoggerNames();

}
// .method public static getParentLoggerName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::logging::LoggingSupport::getParentLoggerName(std::shared_ptr<java::lang::String> loggerName)
{
	
	//    .param p0, "loggerName"    # Ljava/lang/String;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	return sun::util::logging::LoggingSupport::proxy->getParentLoggerName(loggerName);

}
// .method public static getSimpleFormat()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::logging::LoggingSupport::getSimpleFormat()
{
	
	return sun::util::logging::LoggingSupport::getSimpleFormat(0x1);

}
// .method static getSimpleFormat(Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::logging::LoggingSupport::getSimpleFormat(bool useProxy)
{
	
	std::shared_ptr<sun::util::logging::LoggingSupport_S_2> cVar0;
	std::shared_ptr<java::lang::String> format;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar1;
	std::shared_ptr<java::util::Date> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "useProxy"    # Z
	cVar0 = std::make_shared<sun::util::logging::LoggingSupport_S_2>();
	format = java::security::AccessController::doPrivileged(cVar0);
	format->checkCast("java::lang::String");
	//    .local v1, "format":Ljava/lang/String;
	if ( !(useProxy) )  
		goto label_cond_1c;
	if ( !(sun::util::logging::LoggingSupport::proxy) )  
		goto label_cond_1c;
	if ( format )     
		goto label_cond_1c;
	format = sun::util::logging::LoggingSupport::proxy->getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.util.logging.SimpleFormatter.format")));
label_cond_1c:
	if ( !(format) )  
		goto label_cond_50;
	try {
	//label_try_start_1f:
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x6);
	cVar2 = std::make_shared<java::util::Date>();
	cVar1[0x0] = cVar2;
	cVar1[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	cVar1[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	cVar1[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	cVar1[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	cVar1[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	java::lang::String::format(format, cVar1);
	//label_try_end_4a:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4b;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_1f .. :try_end_4a} :catch_4b
label_goto_4a:
	return format;
	// 318    .line 175
label_catch_4b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/IllegalArgumentException;
	format = std::make_shared<java::lang::String>(std::make_shared<char[]>("%1$tb %1$td, %1$tY %1$tl:%1$tM:%1$tS %1$Tp %2$s%n%4$s: %5$s%6$s%n"));
	goto label_goto_4a;
	// 328    .line 180
	// 329    .end local v0    # "e":Ljava/lang/IllegalArgumentException;
label_cond_50:
	format = std::make_shared<java::lang::String>(std::make_shared<char[]>("%1$tb %1$td, %1$tY %1$tl:%1$tM:%1$tS %1$Tp %2$s%n%4$s: %5$s%6$s%n"));
	goto label_goto_4a;

}
// .method public static isAvailable()Z
bool sun::util::logging::LoggingSupport::isAvailable()
{
	
	bool cVar0;
	
	if ( !(sun::util::logging::LoggingSupport::proxy) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public static isLoggable(Ljava/lang/Object;Ljava/lang/Object;)Z
bool sun::util::logging::LoggingSupport::isLoggable(std::shared_ptr<java::lang::Object> logger,std::shared_ptr<java::lang::Object> level)
{
	
	//    .param p0, "logger"    # Ljava/lang/Object;
	//    .param p1, "level"    # Ljava/lang/Object;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	return sun::util::logging::LoggingSupport::proxy->isLoggable(logger, level);

}
// .method public static log(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/String;)V
void sun::util::logging::LoggingSupport::log(std::shared_ptr<java::lang::Object> logger,std::shared_ptr<java::lang::Object> level,std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p0, "logger"    # Ljava/lang/Object;
	//    .param p1, "level"    # Ljava/lang/Object;
	//    .param p2, "msg"    # Ljava/lang/String;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	sun::util::logging::LoggingSupport::proxy->log(logger, level, msg);
	return;

}
// .method public static log(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Throwable;)V
void sun::util::logging::LoggingSupport::log(std::shared_ptr<java::lang::Object> logger,std::shared_ptr<java::lang::Object> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t)
{
	
	//    .param p0, "logger"    # Ljava/lang/Object;
	//    .param p1, "level"    # Ljava/lang/Object;
	//    .param p2, "msg"    # Ljava/lang/String;
	//    .param p3, "t"    # Ljava/lang/Throwable;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	sun::util::logging::LoggingSupport::proxy->log(logger, level, msg, t);
	return;

}
// .method public static varargs log(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V
void sun::util::logging::LoggingSupport::log(std::shared_ptr<java::lang::Object> logger,std::shared_ptr<java::lang::Object> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params)
{
	
	//    .param p0, "logger"    # Ljava/lang/Object;
	//    .param p1, "level"    # Ljava/lang/Object;
	//    .param p2, "msg"    # Ljava/lang/String;
	//    .param p3, "params"    # [Ljava/lang/Object;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	sun::util::logging::LoggingSupport::proxy->log(logger, level, msg, params);
	return;

}
// .method public static parseLevel(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::util::logging::LoggingSupport::parseLevel(std::shared_ptr<java::lang::String> levelName)
{
	
	//    .param p0, "levelName"    # Ljava/lang/String;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	return sun::util::logging::LoggingSupport::proxy->parseLevel(levelName);

}
// .method public static setLevel(Ljava/lang/Object;Ljava/lang/Object;)V
void sun::util::logging::LoggingSupport::setLevel(std::shared_ptr<java::lang::Object> logger,std::shared_ptr<java::lang::Object> newLevel)
{
	
	//    .param p0, "logger"    # Ljava/lang/Object;
	//    .param p1, "newLevel"    # Ljava/lang/Object;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	sun::util::logging::LoggingSupport::proxy->setLevel(logger, newLevel);
	return;

}
// .method public static setLoggerLevel(Ljava/lang/String;Ljava/lang/String;)V
void sun::util::logging::LoggingSupport::setLoggerLevel(std::shared_ptr<java::lang::String> loggerName,std::shared_ptr<java::lang::String> levelName)
{
	
	//    .param p0, "loggerName"    # Ljava/lang/String;
	//    .param p1, "levelName"    # Ljava/lang/String;
	sun::util::logging::LoggingSupport::ensureAvailable({const[class].FS-Param});
	sun::util::logging::LoggingSupport::proxy->setLoggerLevel(loggerName, levelName);
	return;

}


