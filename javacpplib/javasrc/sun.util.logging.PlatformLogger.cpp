// CPP L:\smali2cpp20\x64\Release\out\sun\util\logging\PlatformLogger.smali
#include "java2ctype.h"
#include "java.lang.Boolean.h"
#include "java.lang.Iterable.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.lang.ref.WeakReference.h"
#include "java.security.AccessController.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "sun.util.logging.LoggingSupport.h"
#include "sun.util.logging.PlatformLogger_S_1.h"
#include "sun.util.logging.PlatformLogger_S_DefaultLoggerProxy.h"
#include "sun.util.logging.PlatformLogger_S_JavaLoggerProxy.h"
#include "sun.util.logging.PlatformLogger_S_Level.h"
#include "sun.util.logging.PlatformLogger_S_LoggerProxy.h"
#include "sun.util.logging.PlatformLogger.h"

static sun::util::logging::PlatformLogger::ALL = -0x80000000;
static sun::util::logging::PlatformLogger::CONFIG = 0x2bc;
static sun::util::logging::PlatformLogger::DEFAULT_LEVEL;
static sun::util::logging::PlatformLogger::FINE = 0x1f4;
static sun::util::logging::PlatformLogger::FINER = 0x190;
static sun::util::logging::PlatformLogger::FINEST = 0x12c;
static sun::util::logging::PlatformLogger::INFO = 0x320;
static sun::util::logging::PlatformLogger::OFF = 0x7fffffff;
static sun::util::logging::PlatformLogger::SEVERE = 0x3e8;
static sun::util::logging::PlatformLogger::WARNING = 0x384;
static sun::util::logging::PlatformLogger::loggers;
static sun::util::logging::PlatformLogger::loggingEnabled;
// .method static synthetic -get0()Lsun/util/logging/PlatformLogger$Level;
std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> sun::util::logging::PlatformLogger::_get0()
{
	
	return sun::util::logging::PlatformLogger::DEFAULT_LEVEL;

}
// .method static constructor <clinit>()V
void sun::util::logging::PlatformLogger::static_cinit()
{
	
	std::shared_ptr<sun::util::logging::PlatformLogger_S_1> cVar0;
	std::shared_ptr<java::lang::Boolean> cVar1;
	std::shared_ptr<java::util::HashMap> cVar2;
	
	sun::util::logging::PlatformLogger::DEFAULT_LEVEL = sun::util::logging::PlatformLogger_S_Level::INFO;
	cVar0 = std::make_shared<sun::util::logging::PlatformLogger_S_1>();
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("java::lang::Boolean");
	sun::util::logging::PlatformLogger::loggingEnabled = cVar1->booleanValue();
	cVar2 = std::make_shared<java::util::HashMap>();
	sun::util::logging::PlatformLogger::loggers = cVar2;
	return;

}
// .method private constructor <init>(Ljava/lang/String;)V
sun::util::logging::PlatformLogger::PlatformLogger(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::util::logging::PlatformLogger_S_JavaLoggerProxy> cVar0;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_DefaultLoggerProxy> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	// 116    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(sun::util::logging::PlatformLogger::loggingEnabled) )  
		goto label_cond_11;
	cVar0 = std::make_shared<sun::util::logging::PlatformLogger_S_JavaLoggerProxy>(name);
	this->javaLoggerProxy = cVar0;
	this->loggerProxy = cVar0;
label_goto_10:
	return;
	// 136    .line 243
label_cond_11:
	cVar1 = std::make_shared<sun::util::logging::PlatformLogger_S_DefaultLoggerProxy>(name);
	this->loggerProxy = cVar1;
	goto label_goto_10;

}
// .method public static declared-synchronized getLogger(Ljava/lang/String;)Lsun/util/logging/PlatformLogger;
std::shared_ptr<sun::util::logging::PlatformLogger> sun::util::logging::PlatformLogger::getLogger(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::util::logging::PlatformLogger> cVar0;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::lang::ref::WeakReference> ref;
	std::shared_ptr<sun::util::logging::PlatformLogger> cVar1;
	auto log;
	std::shared_ptr<sun::util::logging::PlatformLogger> log;
	std::shared_ptr<java::lang::ref::WeakReference> cVar2;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = sun::util::logging::PlatformLogger();
	cVar0->monitor_enter();
	//    .local v1, "log":Lsun/util/logging/PlatformLogger;
	try {
	//label_try_start_4:
	ref = sun::util::logging::PlatformLogger::loggers->get(name);
	ref->checkCast("java::lang::ref::WeakReference");
	//    .local v3, "ref":Ljava/lang/ref/WeakReference;, "Ljava/lang/ref/WeakReference<Lsun/util/logging/PlatformLogger;>;"
	if ( !(ref) )  
		goto label_cond_32;
	cVar1 = ref->get();
	cVar1->checkCast("sun::util::logging::PlatformLogger");
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_2a;
	}
	//    .catchall {:try_start_4 .. :try_end_16} :catchall_2a
	//    .local v1, "log":Lsun/util/logging/PlatformLogger;
	log = cVar1;
	//    .end local v1    # "log":Lsun/util/logging/PlatformLogger;
	//    .local v2, "log":Lsun/util/logging/PlatformLogger;
label_goto_17:
	if ( log )     
		goto label_cond_30;
	try {
	//label_try_start_19:
	log = std::make_shared<sun::util::logging::PlatformLogger>(name);
	//label_try_end_1e:
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catchall {:try_start_19 .. :try_end_1e} :catchall_2d
	//    .end local v2    # "log":Lsun/util/logging/PlatformLogger;
	//    .restart local v1    # "log":Lsun/util/logging/PlatformLogger;
	try {
	//label_try_start_1e:
	cVar2 = std::make_shared<java::lang::ref::WeakReference>(log);
	sun::util::logging::PlatformLogger::loggers->put(name, cVar2);
	//label_try_end_28:
	}
	catch (...){
		goto label_catchall_2a;
	}
	//    .catchall {:try_start_1e .. :try_end_28} :catchall_2a
label_goto_28:
	cVar0->monitor_exit();
	return log;
	// 224    .end local v1    # "log":Lsun/util/logging/PlatformLogger;
	// 225    .end local v3    # "ref":Ljava/lang/ref/WeakReference;, "Ljava/lang/ref/WeakReference<Lsun/util/logging/PlatformLogger;>;"
label_catchall_2a:
	// move-exception
	catchall = tryCatchExcetionList.back();
label_goto_2b:
	cVar0->monitor_exit();
	// throw
	throw;
	// 234    .restart local v2    # "log":Lsun/util/logging/PlatformLogger;
	// 235    .restart local v3    # "ref":Ljava/lang/ref/WeakReference;, "Ljava/lang/ref/WeakReference<Lsun/util/logging/PlatformLogger;>;"
label_catchall_2d:
	// move-exception
	catchall = tryCatchExcetionList.back();
	log;
	//    .end local v2    # "log":Lsun/util/logging/PlatformLogger;
	//    .restart local v1    # "log":Lsun/util/logging/PlatformLogger;
	goto label_goto_2b;
	// 245    .end local v1    # "log":Lsun/util/logging/PlatformLogger;
	// 246    .restart local v2    # "log":Lsun/util/logging/PlatformLogger;
label_cond_30:
	//    .end local v2    # "log":Lsun/util/logging/PlatformLogger;
	//    .restart local v1    # "log":Lsun/util/logging/PlatformLogger;
	goto label_goto_28;
	// 254    .local v1, "log":Lsun/util/logging/PlatformLogger;
label_cond_32:
	log = 0x0;
	//    .restart local v2    # "log":Lsun/util/logging/PlatformLogger;
	goto label_goto_17;

}
// .method public static declared-synchronized redirectPlatformLoggers()V
void sun::util::logging::PlatformLogger::redirectPlatformLoggers()
{
	
	std::shared_ptr<sun::util::logging::PlatformLogger> cVar0;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::lang::ref::WeakReference> ref;
	std::shared_ptr<sun::util::logging::PlatformLogger> plog;
	
	cVar0 = sun::util::logging::PlatformLogger();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	if ( sun::util::logging::PlatformLogger::loggingEnabled )     
		goto label_cond_f;
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_3 .. :try_end_a} :catchall_3c
	if ( !(( sun::util::logging::LoggingSupport::isAvailable({const[class].FS-Param}) ^ 0x1)) )  
		goto label_cond_11;
label_cond_f:
	cVar0->monitor_exit();
	return;
	// 291    .line 213
label_cond_11:
	try {
	//label_try_start_12:
	sun::util::logging::PlatformLogger::loggingEnabled = 0x1;
	entry_S_iterator = sun::util::logging::PlatformLogger::loggers->entrySet()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
label_cond_1e:
label_goto_1e:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_3f;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/ref/WeakReference<Lsun/util/logging/PlatformLogger;>;>;"
	ref = entry->getValue();
	ref->checkCast("java::lang::ref::WeakReference");
	//    .local v3, "ref":Ljava/lang/ref/WeakReference;, "Ljava/lang/ref/WeakReference<Lsun/util/logging/PlatformLogger;>;"
	plog = ref->get();
	plog->checkCast("sun::util::logging::PlatformLogger");
	//    .local v2, "plog":Lsun/util/logging/PlatformLogger;
	if ( !(plog) )  
		goto label_cond_1e;
	plog->redirectToJavaLoggerProxy();
	//label_try_end_3b:
	}
	catch (...){
		goto label_catchall_3c;
	}
	//    .catchall {:try_start_12 .. :try_end_3b} :catchall_3c
	goto label_goto_1e;
	// 351    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/ref/WeakReference<Lsun/util/logging/PlatformLogger;>;>;"
	// 352    .end local v2    # "plog":Lsun/util/logging/PlatformLogger;
	// 353    .end local v3    # "ref":Ljava/lang/ref/WeakReference;, "Ljava/lang/ref/WeakReference<Lsun/util/logging/PlatformLogger;>;"
label_catchall_3c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
label_cond_3f:
	cVar0->monitor_exit();
	return;

}
// .method private redirectToJavaLoggerProxy()V
void sun::util::logging::PlatformLogger::redirectToJavaLoggerProxy()
{
	
	std::shared_ptr<sun::util::logging::PlatformLogger_S_DefaultLoggerProxy> lp;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_JavaLoggerProxy> jlp;
	
	lp = sun::util::logging::PlatformLogger_S_DefaultLoggerProxy()->cast(this->loggerProxy);
	lp->checkCast("sun::util::logging::PlatformLogger_S_DefaultLoggerProxy");
	//    .local v1, "lp":Lsun/util/logging/PlatformLogger$DefaultLoggerProxy;
	jlp = std::make_shared<sun::util::logging::PlatformLogger_S_JavaLoggerProxy>(lp->name, lp->level);
	//    .local v0, "jlp":Lsun/util/logging/PlatformLogger$JavaLoggerProxy;
	this->javaLoggerProxy = jlp;
	this->loggerProxy = jlp;
	return;

}
// .method public config(Ljava/lang/String;)V
void sun::util::logging::PlatformLogger::config(std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::CONFIG, msg);
	return;

}
// .method public config(Ljava/lang/String;Ljava/lang/Throwable;)V
void sun::util::logging::PlatformLogger::config(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "t"    # Ljava/lang/Throwable;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::CONFIG, msg, t);
	return;

}
// .method public varargs config(Ljava/lang/String;[Ljava/lang/Object;)V
void sun::util::logging::PlatformLogger::config(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "params"    # [Ljava/lang/Object;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::CONFIG, msg, params);
	return;

}
// .method public fine(Ljava/lang/String;)V
void sun::util::logging::PlatformLogger::fine(std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::FINE, msg);
	return;

}
// .method public fine(Ljava/lang/String;Ljava/lang/Throwable;)V
void sun::util::logging::PlatformLogger::fine(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "t"    # Ljava/lang/Throwable;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::FINE, msg, t);
	return;

}
// .method public varargs fine(Ljava/lang/String;[Ljava/lang/Object;)V
void sun::util::logging::PlatformLogger::fine(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "params"    # [Ljava/lang/Object;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::FINE, msg, params);
	return;

}
// .method public finer(Ljava/lang/String;)V
void sun::util::logging::PlatformLogger::finer(std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::FINER, msg);
	return;

}
// .method public finer(Ljava/lang/String;Ljava/lang/Throwable;)V
void sun::util::logging::PlatformLogger::finer(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "t"    # Ljava/lang/Throwable;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::FINER, msg, t);
	return;

}
// .method public varargs finer(Ljava/lang/String;[Ljava/lang/Object;)V
void sun::util::logging::PlatformLogger::finer(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "params"    # [Ljava/lang/Object;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::FINER, msg, params);
	return;

}
// .method public finest(Ljava/lang/String;)V
void sun::util::logging::PlatformLogger::finest(std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::FINEST, msg);
	return;

}
// .method public finest(Ljava/lang/String;Ljava/lang/Throwable;)V
void sun::util::logging::PlatformLogger::finest(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "t"    # Ljava/lang/Throwable;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::FINEST, msg, t);
	return;

}
// .method public varargs finest(Ljava/lang/String;[Ljava/lang/Object;)V
void sun::util::logging::PlatformLogger::finest(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "params"    # [Ljava/lang/Object;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::FINEST, msg, params);
	return;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::logging::PlatformLogger::getName()
{
	
	return this->loggerProxy->name;

}
// .method public info(Ljava/lang/String;)V
void sun::util::logging::PlatformLogger::info(std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::INFO, msg);
	return;

}
// .method public info(Ljava/lang/String;Ljava/lang/Throwable;)V
void sun::util::logging::PlatformLogger::info(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "t"    # Ljava/lang/Throwable;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::INFO, msg, t);
	return;

}
// .method public varargs info(Ljava/lang/String;[Ljava/lang/Object;)V
void sun::util::logging::PlatformLogger::info(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "params"    # [Ljava/lang/Object;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::INFO, msg, params);
	return;

}
// .method public isEnabled()Z
bool sun::util::logging::PlatformLogger::isEnabled()
{
	
	return this->loggerProxy->isEnabled();

}
// .method public isLoggable(Lsun/util/logging/PlatformLogger$Level;)Z
bool sun::util::logging::PlatformLogger::isLoggable(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> level)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<sun::util::logging::PlatformLogger_S_JavaLoggerProxy> jlp;
	bool cVar1;
	
	//    .param p1, "level"    # Lsun/util/logging/PlatformLogger$Level;
	if ( level )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 697    .line 271
label_cond_8:
	jlp = this->javaLoggerProxy;
	//    .local v0, "jlp":Lsun/util/logging/PlatformLogger$JavaLoggerProxy;
	if ( !(jlp) )  
		goto label_cond_11;
	cVar1 = jlp->isLoggable(level);
label_goto_10:
	return cVar1;
label_cond_11:
	cVar1 = this->loggerProxy->isLoggable(level);
	goto label_goto_10;

}
// .method public level()Lsun/util/logging/PlatformLogger$Level;
std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> sun::util::logging::PlatformLogger::level()
{
	
	return this->loggerProxy->getLevel();

}
// .method public setLevel(Lsun/util/logging/PlatformLogger$Level;)V
void sun::util::logging::PlatformLogger::setLevel(std::shared_ptr<sun::util::logging::PlatformLogger_S_Level> newLevel)
{
	
	//    .param p1, "newLevel"    # Lsun/util/logging/PlatformLogger$Level;
	this->loggerProxy->setLevel(newLevel);
	return;

}
// .method public severe(Ljava/lang/String;)V
void sun::util::logging::PlatformLogger::severe(std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::SEVERE, msg);
	return;

}
// .method public severe(Ljava/lang/String;Ljava/lang/Throwable;)V
void sun::util::logging::PlatformLogger::severe(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "t"    # Ljava/lang/Throwable;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::SEVERE, msg, t);
	return;

}
// .method public varargs severe(Ljava/lang/String;[Ljava/lang/Object;)V
void sun::util::logging::PlatformLogger::severe(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "params"    # [Ljava/lang/Object;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::SEVERE, msg, params);
	return;

}
// .method public warning(Ljava/lang/String;)V
void sun::util::logging::PlatformLogger::warning(std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::WARNING, msg);
	return;

}
// .method public warning(Ljava/lang/String;Ljava/lang/Throwable;)V
void sun::util::logging::PlatformLogger::warning(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::Throwable> t)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "t"    # Ljava/lang/Throwable;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::WARNING, msg, t);
	return;

}
// .method public varargs warning(Ljava/lang/String;[Ljava/lang/Object;)V
void sun::util::logging::PlatformLogger::warning(std::shared_ptr<java::lang::String> msg,std::shared_ptr<std::vector<java::lang::Object>> params)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	//    .param p2, "params"    # [Ljava/lang/Object;
	this->loggerProxy->doLog(sun::util::logging::PlatformLogger_S_Level::WARNING, msg, params);
	return;

}


