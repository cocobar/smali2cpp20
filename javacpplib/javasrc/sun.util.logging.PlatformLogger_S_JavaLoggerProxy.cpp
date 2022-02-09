// CPP L:\smali2cpp20\x64\Release\out\sun\util\logging\PlatformLogger$JavaLoggerProxy.smali
#include "java2ctype.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "sun.util.logging.LoggingSupport.h"
#include "sun.util.logging.PlatformLogger_S_JavaLoggerProxy.h"
#include "sun.util.logging.PlatformLogger_S_Level.h"
#include "sun.util.logging.PlatformLogger_S_LoggerProxy.h"

// .method static constructor <clinit>()V
void sun::util::logging::PlatformLogger_S_JavaLoggerProxy::static_cinit()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level;
	
	cVar0 = sun::util::logging::PlatformLogger_S_Level::values({const[class].FS-Param});
	cVar1 = 0x0;
	//    .local v0, "level":Lsun/util/logging/PlatformLogger$Level;
label_goto_6:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_17;
	level = cVar0[cVar1];
	level->javaLevel = sun::util::logging::LoggingSupport::parseLevel(level->name());
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_6;
	// 057    .line 592
label_cond_17:
	return;

}
// .method constructor <init>(Ljava/lang/String;)V
sun::util::logging::PlatformLogger_S_JavaLoggerProxy::PlatformLogger_S_JavaLoggerProxy(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	sun::util::logging::PlatformLogger_S_JavaLoggerProxy::(name, 0x0);
	return;

}
// .method constructor <init>(Ljava/lang/String;Lsun/util/logging/PlatformLogger$Level;)V
sun::util::logging::PlatformLogger_S_JavaLoggerProxy::PlatformLogger_S_JavaLoggerProxy(std::shared_ptr<java::lang::String> name,std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "level"    # Lsun/util/logging/PlatformLogger$Level;
	sun::util::logging::PlatformLogger_S_LoggerProxy::(name);
	this->javaLogger = sun::util::logging::LoggingSupport::getLogger(name);
	if ( !(level) )  
		goto label_cond_12;
	sun::util::logging::LoggingSupport::setLevel(this->javaLogger, level->javaLevel);
label_cond_12:
	return;

}
// .method doLog(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;)V
void sun::util::logging::PlatformLogger_S_JavaLoggerProxy::doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "level"    # Lsun/util/logging/PlatformLogger$Level;
	//    .param p2, "msg"    # Ljava/lang/String;
	sun::util::logging::LoggingSupport::log(this->javaLogger, level->javaLevel, msg);
	return;

}
// .method doLog(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;Ljava/lang/Throwable;)V
void sun::util::logging::PlatformLogger_S_JavaLoggerProxy::doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t)
{
	
	//    .param p1, "level"    # Lsun/util/logging/PlatformLogger$Level;
	//    .param p2, "msg"    # Ljava/lang/String;
	//    .param p3, "t"    # Ljava/lang/Throwable;
	sun::util::logging::LoggingSupport::log(this->javaLogger, level->javaLevel, msg, t);
	return;

}
// .method varargs doLog(Lsun/util/logging/PlatformLogger$Level;Ljava/lang/String;[Ljava/lang/Object;)V
void sun::util::logging::PlatformLogger_S_JavaLoggerProxy::doLog(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level,std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params)
{
	
	int len;
	std::shared<std::vector<std::vector<java::lang::String>>> sparams;
	int i;
	
	//    .param p1, "level"    # Lsun/util/logging/PlatformLogger$Level;
	//    .param p2, "msg"    # Ljava/lang/String;
	//    .param p3, "params"    # [Ljava/lang/Object;
	if ( this->isLoggable(level) )     
		goto label_cond_7;
	return;
	// 161    .line 629
label_cond_7:
	if ( !(params) )  
		goto label_cond_1a;
	len = params->size();
	//    .local v1, "len":I
label_goto_a:
	sparams = std::make_shared<std::vector<std::vector<java::lang::String>>>(len);
	//    .local v2, "sparams":[Ljava/lang/Object;
	i = 0x0;
	//    .local v0, "i":I
label_goto_d:
	if ( i >= len )
		goto label_cond_1c;
	sparams[i] = java::lang::String::valueOf(params[i]);
	i = ( i + 0x1);
	goto label_goto_d;
	// 194    .line 629
	// 195    .end local v0    # "i":I
	// 196    .end local v1    # "len":I
	// 197    .end local v2    # "sparams":[Ljava/lang/Object;
label_cond_1a:
	len = 0x0;
	//    .restart local v1    # "len":I
	goto label_goto_a;
	// 204    .line 634
	// 205    .restart local v0    # "i":I
	// 206    .restart local v2    # "sparams":[Ljava/lang/Object;
label_cond_1c:
	sun::util::logging::LoggingSupport::log(this->javaLogger, level->javaLevel, msg, sparams);
	return;

}
// .method getLevel()Lsun/util/logging/PlatformLogger$Level;
std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> sun::util::logging::PlatformLogger_S_JavaLoggerProxy::getLevel()
{
	
	std::shared_ptr<java::lang::Object> javaLevel;
	std::vector<std::any> tryCatchExcetionList;
	
	javaLevel = sun::util::logging::LoggingSupport::getLevel(this->javaLogger);
	//    .local v1, "javaLevel":Ljava/lang/Object;
	if ( javaLevel )     
		goto label_cond_a;
	return 0x0;
	// 237    .line 651
label_cond_a:
	try {
	//label_try_start_a:
	//label_try_end_11:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_13;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_a .. :try_end_11} :catch_13
	return sun::util::logging::PlatformLogger_S_Level::valueOf(sun::util::logging::LoggingSupport::getLevelName(javaLevel));
	// 252    .line 652
label_catch_13:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/IllegalArgumentException;
	return sun::util::logging::PlatformLogger_S_Level::valueOf(sun::util::logging::LoggingSupport::getLevelValue(javaLevel));

}
// .method isEnabled()Z
bool sun::util::logging::PlatformLogger_S_JavaLoggerProxy::isEnabled()
{
	
	return sun::util::logging::LoggingSupport::isLoggable(this->javaLogger, sun::util::logging::PlatformLogger_S_Level::OFF->javaLevel);

}
// .method isLoggable(Lsun/util/logging/PlatformLogger$Level;)Z
bool sun::util::logging::PlatformLogger_S_JavaLoggerProxy::isLoggable(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level)
{
	
	//    .param p1, "level"    # Lsun/util/logging/PlatformLogger$Level;
	return sun::util::logging::LoggingSupport::isLoggable(this->javaLogger, level->javaLevel);

}
// .method setLevel(Lsun/util/logging/PlatformLogger$Level;)V
void sun::util::logging::PlatformLogger_S_JavaLoggerProxy::setLevel(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "level"    # Lsun/util/logging/PlatformLogger$Level;
	cVar0 = 0x0;
	if ( level )     
		goto label_cond_9;
label_goto_5:
	sun::util::logging::LoggingSupport::setLevel(this->javaLogger, cVar0);
	return;
	// 322    .line 658
label_cond_9:
	cVar0 = level->javaLevel;
	goto label_goto_5;

}


