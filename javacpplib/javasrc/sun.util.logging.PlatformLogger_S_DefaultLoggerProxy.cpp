// CPP L:\smali2cpp20\x64\Release\out\sun\util\logging\PlatformLogger$DefaultLoggerProxy.smali
#include "java2ctype.h"
#include "java.io.PrintStream.h"
#include "java.io.PrintWriter.h"
#include "java.io.StringWriter.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.StackTraceElement.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.text.MessageFormat.h"
#include "java.util.Date.h"
#include "sun.util.logging.LoggingSupport.h"
#include "sun.util.logging.PlatformLogger_S_DefaultLoggerProxy.h"
#include "sun.util.logging.PlatformLogger_S_Level.h"
#include "sun.util.logging.PlatformLogger_S_LoggerProxy.h"
#include "sun.util.logging.PlatformLogger.h"

static sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::formatString;
// .method static constructor <clinit>()V
void sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::static_cinit()
{
	
	sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::formatString = sun::util::logging::LoggingSupport::getSimpleFormat(0x0);
	return;

}
// .method constructor <init>(Ljava/lang/String;)V
sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::PlatformLogger_S_DefaultLoggerProxy(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar0;
	std::shared_ptr<java::util::Date> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = 0x0;
	sun::util::logging::PlatformLogger_S_LoggerProxy::(name);
	cVar1 = std::make_shared<java::util::Date>();
	this->date = cVar1;
	this->effectiveLevel = this->deriveEffectiveLevel(cVar0);
	this->level = cVar0;
	return;

}
// .method private deriveEffectiveLevel(Lsun/util/logging/PlatformLogger$Level;)Lsun/util/logging/PlatformLogger$Level;
std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::deriveEffectiveLevel(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar0)
{
	
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> cVar0;
	
	//    .param p1, "level"    # Lsun/util/logging/PlatformLogger$Level;
	if ( cVar0 )     
		goto label_cond_6;
	cVar0 = sun::util::logging::PlatformLogger::-get0({const[class].FS-Param});
	//    .end local p1    # "level":Lsun/util/logging/PlatformLogger$Level;
label_cond_6:
	return cVar0;

}
// .method private declared-synchronized format(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/Throwable;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::format(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> thrown)
{
	
	std::shared_ptr<java::io::StringWriter> sw;
	std::shared_ptr<java::io::PrintWriter> pw;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	
	//    .param p1, "level"    # Lsun/util/logging/PlatformLogger$Level;
	//    .param p2, "msg"    # Ljava/lang/String;
	//    .param p3, "thrown"    # Ljava/lang/Throwable;
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->date->setTime(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	//    .local v2, "throwable":Ljava/lang/String;
	if ( !(thrown) )  
		goto label_cond_26;
	sw = std::make_shared<java::io::StringWriter>();
	//    .local v1, "sw":Ljava/io/StringWriter;
	pw = std::make_shared<java::io::PrintWriter>(sw);
	//    .local v0, "pw":Ljava/io/PrintWriter;
	pw->println();
	thrown->printStackTrace(pw);
	pw->close();
	//    .end local v0    # "pw":Ljava/io/PrintWriter;
	//    .end local v1    # "sw":Ljava/io/StringWriter;
label_cond_26:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x6);
	cVar0[0x0] = this->date;
	cVar0[0x1] = this->getCallerInfo();
	cVar0[0x2] = this->name;
	cVar0[0x3] = level->name();
	cVar0[0x4] = msg;
	cVar0[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//label_try_end_4c:
	}
	catch (...){
		goto label_catchall_4f;
	}
	//    .catchall {:try_start_1 .. :try_end_4c} :catchall_4f
	this->monitor_exit();
	return java::lang::String::format(sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::formatString, cVar0);
	// 211    .end local v2    # "throwable":Ljava/lang/String;
label_catchall_4f:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private varargs formatMessage(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::formatMessage(std::shared_ptr<java::lang::String> format,std::shared_ptr<std::vector<java::lang::Object>> parameters)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "format"    # Ljava/lang/String;
	//    .param p2, "parameters"    # [Ljava/lang/Object;
	if ( !(parameters) )  
		goto label_cond_5;
	try {
	//label_try_start_2:
	if ( parameters->size() )     
		goto label_cond_6;
label_cond_5:
	return format;
	// 238    .line 506
label_cond_6:
	if ( format->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0"))) >= 0 )
		goto label_cond_18;
	if ( format->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("{1"))) < 0 ) 
		goto label_cond_1d;
label_cond_18:
	return java::text::MessageFormat::format(format, parameters);
	// 264    .line 507
label_cond_1d:
	if ( format->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("{2"))) >= 0 )
		goto label_cond_18;
	//label_try_end_2c:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_30;
	}
	//    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2c} :catch_30
	if ( format->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("{3"))) >= 0 )
		goto label_cond_18;
	return format;
	// 287    .line 511
label_catch_30:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/Exception;
	return format;

}
// .method private getCallerInfo()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::getCallerInfo()
{
	
	std::shared_ptr<java::lang::Throwable> throwable;
	std::shared_ptr<java::lang::String> logClassName;
	int lookingForLogger;
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	std::shared_ptr<java::lang::StackTraceElement> frame;
	std::shared_ptr<java::lang::String> cname;
	std::shared_ptr<java::lang::String> sourceClassName;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .local v4, "sourceClassName":Ljava/lang/String;
	0x0;
	//    .local v5, "sourceMethodName":Ljava/lang/String;
	throwable = std::make_shared<java::lang::Throwable>();
	//    .local v6, "throwable":Ljava/lang/Throwable;
	logClassName = std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.util.logging.PlatformLogger"));
	//    .local v2, "logClassName":Ljava/lang/String;
	lookingForLogger = 0x1;
	//    .local v3, "lookingForLogger":Z
	cVar0 = throwable->getStackTrace();
	cVar1 = 0x0;
label_goto_11:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_30;
	frame = cVar0[cVar1];
	//    .local v1, "frame":Ljava/lang/StackTraceElement;
	cname = frame->getClassName();
	//    .local v0, "cname":Ljava/lang/String;
	if ( !(lookingForLogger) )  
		goto label_cond_25;
	if ( !(cname->equals(logClassName)) )  
		goto label_cond_22;
	lookingForLogger = 0x0;
label_cond_22:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_11;
	// 362    .line 571
label_cond_25:
	if ( cname->equals(logClassName) )     
		goto label_cond_22;
	sourceClassName = cname;
	//    .local v4, "sourceClassName":Ljava/lang/String;
	//    .end local v0    # "cname":Ljava/lang/String;
	//    .end local v1    # "frame":Ljava/lang/StackTraceElement;
	//    .end local v4    # "sourceClassName":Ljava/lang/String;
	//    .end local v5    # "sourceMethodName":Ljava/lang/String;
label_cond_30:
	if ( !(0x0) )  
		goto label_cond_4b;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	return cVar3->append(sourceClassName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(frame->getMethodName())->toString();
	// 412    .line 583
label_cond_4b:
	return this->name;

}
// .method private static outputStream()Ljava/io/PrintStream;
std::shared_ptr<java::io::PrintStream> sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::outputStream()
{
	
	return java::lang::System::err;

}
// .method doLog(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;)V
void sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "level"    # Lsun/util/logging/PlatformLogger$Level;
	//    .param p2, "msg"    # Ljava/lang/String;
	if ( !(this->isLoggable(level)) )  
		goto label_cond_12;
	sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::outputStream({const[class].FS-Param})->print(this->format(level, msg, 0x0));
label_cond_12:
	return;

}
// .method doLog(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V
void sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> thrown)
{
	
	//    .param p1, "level"    # Lsun/util/logging/PlatformLogger$Level;
	//    .param p2, "msg"    # Ljava/lang/String;
	//    .param p3, "thrown"    # Ljava/lang/Throwable;
	if ( !(this->isLoggable(level)) )  
		goto label_cond_11;
	sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::outputStream({const[class].FS-Param})->print(this->format(level, msg, thrown));
label_cond_11:
	return;

}
// .method varargs doLog(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;[Ljava/lang/Object;)V
void sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params)
{
	
	//    .param p1, "level"    # Lsun/util/logging/PlatformLogger$Level;
	//    .param p2, "msg"    # Ljava/lang/String;
	//    .param p3, "params"    # [Ljava/lang/Object;
	if ( !(this->isLoggable(level)) )  
		goto label_cond_16;
	//    .local v0, "newMsg":Ljava/lang/String;
	sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::outputStream({const[class].FS-Param})->print(this->format(level, this->formatMessage(msg, params), 0x0));
	//    .end local v0    # "newMsg":Ljava/lang/String;
label_cond_16:
	return;

}
// .method getLevel()Lsun/util/logging/PlatformLogger$Level;
std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::getLevel()
{
	
	return this->level;

}
// .method isEnabled()Z
bool sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::isEnabled()
{
	
	bool cVar0;
	
	if ( this->effectiveLevel == sun::util::logging::PlatformLogger_S_Level::OFF )
		goto label_cond_8;
	cVar0 = 0x1;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = 0x0;
	goto label_goto_7;

}
// .method isLoggable(Lsun/util/logging/PlatformLogger$Level;)Z
bool sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::isLoggable(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level)
{
	
	bool cVar1;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> effectiveLevel;
	
	//    .param p1, "level"    # Lsun/util/logging/PlatformLogger$Level;
	cVar1 = 0x0;
	effectiveLevel = this->effectiveLevel;
	//    .local v0, "effectiveLevel":Lsun/util/logging/PlatformLogger$Level;
	if ( level->intValue() <  effectiveLevel->intValue() )
		goto label_cond_12;
	if ( effectiveLevel == sun::util::logging::PlatformLogger_S_Level::OFF )
		goto label_cond_12;
	cVar1 = 0x1;
label_cond_12:
	return cVar1;

}
// .method setLevel(Lsun/util/logging/PlatformLogger$Level;)V
void sun::util::logging::PlatformLogger_S_DefaultLoggerProxy::setLevel(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> newLevel)
{
	
	//    .param p1, "newLevel"    # Lsun/util/logging/PlatformLogger$Level;
	//    .local v0, "oldLevel":Lsun/util/logging/PlatformLogger$Level;
	if ( this->level == newLevel )
		goto label_cond_c;
	this->level = newLevel;
	this->effectiveLevel = this->deriveEffectiveLevel(newLevel);
label_cond_c:
	return;

}


