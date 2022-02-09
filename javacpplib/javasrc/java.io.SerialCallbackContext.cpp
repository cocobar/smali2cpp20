// CPP L:\smali2cpp20\x64\Release\out\java\io\SerialCallbackContext.smali
#include "java2ctype.h"
#include "java.io.NotActiveException.h"
#include "java.io.ObjectStreamClass.h"
#include "java.io.SerialCallbackContext.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Thread.h"

// .method public constructor <init>(Ljava/lang/Object;Ljava/io/ObjectStreamClass;)V
java::io::SerialCallbackContext::SerialCallbackContext(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectStreamClass> desc)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "desc"    # Ljava/io/ObjectStreamClass;
	// 022    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->obj = obj;
	this->desc = desc;
	this->thread = java::lang::Thread::currentThread({const[class].FS-Param});
	return;

}
// .method private checkAndSetUsed()V
void java::io::SerialCallbackContext::checkAndSetUsed()
{
	
	std::shared_ptr<java::io::NotActiveException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 044        value = {
	// 045            Ljava/io/NotActiveException;
	// 046        }
	// 047    .end annotation
	if ( this->thread == java::lang::Thread::currentThread({const[class].FS-Param}) )
		goto label_cond_11;
	cVar0 = std::make_shared<java::io::NotActiveException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("not in readObject invocation or fields already read")));
	// throw
	throw cVar0;
	// 070    .line 75
label_cond_11:
	this->thread = 0x0;
	return;

}
// .method public check()V
void java::io::SerialCallbackContext::check()
{
	
	std::shared_ptr<java::io::NotActiveException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 085        value = {
	// 086            Ljava/io/NotActiveException;
	// 087        }
	// 088    .end annotation
	if ( !(this->thread) )  
		goto label_cond_37;
	if ( this->thread == java::lang::Thread::currentThread({const[class].FS-Param}) )
		goto label_cond_37;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::NotActiveException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("expected thread: ")))->append(this->thread)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", but got: ")))->append(java::lang::Thread::currentThread({const[class].FS-Param}))->toString());
	// throw
	throw cVar0;
	// 147    .line 68
label_cond_37:
	return;

}
// .method public getDesc()Ljava/io/ObjectStreamClass;
std::shared_ptr<java::io::ObjectStreamClass> java::io::SerialCallbackContext::getDesc()
{
	
	return this->desc;

}
// .method public getObj()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::SerialCallbackContext::getObj()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 165        value = {
	// 166            Ljava/io/NotActiveException;
	// 167        }
	// 168    .end annotation
	this->checkAndSetUsed();
	return this->obj;

}
// .method public setUsed()V
void java::io::SerialCallbackContext::setUsed()
{
	
	this->thread = 0x0;
	return;

}


