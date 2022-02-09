// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\CloseGuard.smali
#include "java2ctype.h"
#include "dalvik.system.CloseGuard_S_DefaultReporter.h"
#include "dalvik.system.CloseGuard_S_DefaultTracker.h"
#include "dalvik.system.CloseGuard_S_Reporter.h"
#include "dalvik.system.CloseGuard_S_Tracker.h"
#include "dalvik.system.CloseGuard.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"

static dalvik::system::CloseGuard::DEFAULT_TRACKER;
static dalvik::system::CloseGuard::ENABLED;
static dalvik::system::CloseGuard::NOOP;
static dalvik::system::CloseGuard::REPORTER;
static dalvik::system::CloseGuard::currentTracker;
// .method static constructor <clinit>()V
void dalvik::system::CloseGuard::static_cinit()
{
	
	std::shared_ptr<dalvik::system::CloseGuard_S_DefaultReporter> cVar0;
	std::shared_ptr<dalvik::system::CloseGuard> cVar1;
	std::shared_ptr<dalvik::system::CloseGuard_S_DefaultReporter> cVar2;
	std::shared_ptr<dalvik::system::CloseGuard_S_DefaultTracker> cVar3;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<dalvik::system::CloseGuard>();
	dalvik::system::CloseGuard::NOOP = cVar1;
	dalvik::system::CloseGuard::ENABLED = 0x1;
	cVar2 = std::make_shared<dalvik::system::CloseGuard_S_DefaultReporter>(cVar0);
	dalvik::system::CloseGuard::REPORTER = cVar2;
	cVar3 = std::make_shared<dalvik::system::CloseGuard_S_DefaultTracker>(cVar0);
	dalvik::system::CloseGuard::DEFAULT_TRACKER = cVar3;
	dalvik::system::CloseGuard::currentTracker = dalvik::system::CloseGuard::DEFAULT_TRACKER;
	return;

}
// .method private constructor <init>()V
dalvik::system::CloseGuard::CloseGuard()
{
	
	// 080    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static get()Ldalvik/system/CloseGuard;
std::shared_ptr<dalvik::system::CloseGuard> dalvik::system::CloseGuard::get()
{
	
	std::shared_ptr<dalvik::system::CloseGuard> cVar0;
	
	if ( dalvik::system::CloseGuard::ENABLED )     
		goto label_cond_7;
	return dalvik::system::CloseGuard::NOOP;
	// 099    .line 140
label_cond_7:
	cVar0 = std::make_shared<dalvik::system::CloseGuard>();
	return cVar0;

}
// .method public static getReporter()Ldalvik/system/CloseGuard$Reporter;
std::shared_ptr<dalvik::system::CloseGuard_S_Reporter> dalvik::system::CloseGuard::getReporter()
{
	
	return dalvik::system::CloseGuard::REPORTER;

}
// .method public static getTracker()Ldalvik/system/CloseGuard$Tracker;
std::shared_ptr<dalvik::system::CloseGuard_S_Tracker> dalvik::system::CloseGuard::getTracker()
{
	
	return dalvik::system::CloseGuard::currentTracker;

}
// .method public static isEnabled()Z
bool dalvik::system::CloseGuard::isEnabled()
{
	
	return dalvik::system::CloseGuard::ENABLED;

}
// .method public static setEnabled(Z)V
void dalvik::system::CloseGuard::setEnabled(bool enabled)
{
	
	//    .param p0, "enabled"    # Z
	dalvik::system::CloseGuard::ENABLED = enabled;
	return;

}
// .method public static setReporter(Ldalvik/system/CloseGuard$Reporter;)V
void dalvik::system::CloseGuard::setReporter(std::shared_ptr<dalvik::system::CloseGuard_S_Reporter> reporter)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p0, "reporter"    # Ldalvik/system/CloseGuard$Reporter;
	if ( reporter )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("reporter == null")));
	// throw
	throw cVar0;
	// 167    .line 166
label_cond_b:
	dalvik::system::CloseGuard::REPORTER = reporter;
	return;

}
// .method public static setTracker(Ldalvik/system/CloseGuard$Tracker;)V
void dalvik::system::CloseGuard::setTracker(std::shared_ptr<dalvik::system::CloseGuard_S_Tracker> tracker)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p0, "tracker"    # Ldalvik/system/CloseGuard$Tracker;
	if ( tracker )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("tracker == null")));
	// throw
	throw cVar0;
	// 192    .line 188
label_cond_b:
	dalvik::system::CloseGuard::currentTracker = tracker;
	return;

}
// .method public close()V
void dalvik::system::CloseGuard::close()
{
	
	dalvik::system::CloseGuard::currentTracker->close(this->allocationSite);
	this->allocationSite = 0x0;
	return;

}
// .method public open(Ljava/lang/String;)V
void dalvik::system::CloseGuard::open(std::shared_ptr<java::lang::String> closer)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::Throwable> cVar2;
	
	//    .param p1, "closer"    # Ljava/lang/String;
	if ( closer )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("closer == null")));
	// throw
	throw cVar0;
	// 239    .line 219
label_cond_b:
	if ( this == dalvik::system::CloseGuard::NOOP )
		goto label_cond_15;
	if ( !(( dalvik::system::CloseGuard::ENABLED ^ 0x1)) )  
		goto label_cond_16;
label_cond_15:
	return;
	// 255    .line 222
label_cond_16:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "message":Ljava/lang/String;
	cVar2 = std::make_shared<java::lang::Throwable>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Explicit termination method \'")))->append(closer)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' not called")))->toString());
	this->allocationSite = cVar2;
	dalvik::system::CloseGuard::currentTracker->open(this->allocationSite);
	return;

}
// .method public warnIfOpen()V
void dalvik::system::CloseGuard::warnIfOpen()
{
	
	if ( !(this->allocationSite) )  
		goto label_cond_a;
	if ( !(( dalvik::system::CloseGuard::ENABLED ^ 0x1)) )  
		goto label_cond_b;
label_cond_a:
	return;
	// 319    .line 250
label_cond_b:
	//    .local v0, "message":Ljava/lang/String;
	dalvik::system::CloseGuard::REPORTER->report(std::make_shared<java::lang::String>(std::make_shared<char[]>("A resource was acquired at attached stack trace but never released. See java.io.Closeable for information on avoiding resource leaks.")), this->allocationSite);
	return;

}


