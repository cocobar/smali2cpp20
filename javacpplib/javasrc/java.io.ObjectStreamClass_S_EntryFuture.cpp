// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$EntryFuture.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_EntryFuture_S_1.h"
#include "java.io.ObjectStreamClass_S_EntryFuture.h"
#include "java.lang.InterruptedException.h"
#include "java.lang.Object.h"
#include "java.lang.Thread.h"
#include "java.security.AccessController.h"

static java::io::ObjectStreamClass_S_EntryFuture::unset;
// .method static constructor <clinit>()V
void java::io::ObjectStreamClass_S_EntryFuture::static_cinit()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	cVar0 = std::make_shared<java::lang::Object>();
	java::io::ObjectStreamClass_S_EntryFuture::unset = cVar0;
	return;

}
// .method private constructor <init>()V
java::io::ObjectStreamClass_S_EntryFuture::ObjectStreamClass_S_EntryFuture()
{
	
	// 048    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->owner = java::lang::Thread::currentThread({const[class].FS-Param});
	this->entry = java::io::ObjectStreamClass_S_EntryFuture::unset;
	return;

}
// .method synthetic constructor <init>(Ljava/io/ObjectStreamClass$EntryFuture;)V
java::io::ObjectStreamClass_S_EntryFuture::ObjectStreamClass_S_EntryFuture(std::shared_ptr<java::io::ObjectStreamClass_S_EntryFuture> _this0)
{
	
	//    .param p1, "-this0"    # Ljava/io/ObjectStreamClass$EntryFuture;
	// 071    invoke-direct {p0}, Ljava/io/ObjectStreamClass$EntryFuture;-><init>()V
	return;

}
// .method declared-synchronized get()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectStreamClass_S_EntryFuture::get()
{
	
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::ObjectStreamClass_S_EntryFuture_S_1> cVar0;
	
	this->monitor_enter();
	//    .local v1, "interrupted":Z
label_goto_2:
	try {
	//label_try_start_2:
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_1d;
	}
	//    .catchall {:try_start_2 .. :try_end_6} :catchall_1d
	if ( this->entry != java::io::ObjectStreamClass_S_EntryFuture::unset )
		goto label_cond_f;
	try {
	//label_try_start_8:
	this->wait();
	//label_try_end_b:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c;
	}
	catch (...){
		goto label_catchall_1d;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_8 .. :try_end_b} :catch_c
	//    .catchall {:try_start_8 .. :try_end_b} :catchall_1d
	goto label_goto_2;
	// 108    .line 416
label_catch_c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/lang/InterruptedException;
	0x1;
	goto label_goto_2;
	// 118    .line 420
	// 119    .end local v0    # "ex":Ljava/lang/InterruptedException;
label_cond_f:
	if ( !(0x0) )  
		goto label_cond_19;
	try {
	//label_try_start_11:
	cVar0 = std::make_shared<java::io::ObjectStreamClass_S_EntryFuture_S_1>(this);
	java::security::AccessController::doPrivileged(cVar0);
label_cond_19:
	//label_try_end_1b:
	}
	catch (...){
		goto label_catchall_1d;
	}
	//    .catchall {:try_start_11 .. :try_end_1b} :catchall_1d
	this->monitor_exit();
	return this->entry;
label_catchall_1d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method getOwner()Ljava/lang/Thread;
std::shared_ptr<java::lang::Thread> java::io::ObjectStreamClass_S_EntryFuture::getOwner()
{
	
	return this->owner;

}
// .method declared-synchronized set(Ljava/lang/Object;)Z
bool java::io::ObjectStreamClass_S_EntryFuture::set(std::shared_ptr<java::lang::Object> entry)
{
	
	//    .param p1, "entry"    # Ljava/lang/Object;
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_1 .. :try_end_5} :catchall_12
	if ( this->entry == java::io::ObjectStreamClass_S_EntryFuture::unset )
		goto label_cond_a;
	this->monitor_exit();
	return 0x0;
	// 184    .line 402
label_cond_a:
	try {
	//label_try_start_a:
	this->entry = entry;
	this->notifyAll();
	//label_try_end_f:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_a .. :try_end_f} :catchall_12
	this->monitor_exit();
	return 0x1;
label_catchall_12:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


