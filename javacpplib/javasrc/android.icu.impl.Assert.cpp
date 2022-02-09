// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Assert.smali
#include "java2ctype.h"
#include "android.icu.impl.Assert.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method public constructor <init>()V
android::icu::impl::Assert::Assert()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static assrt(Ljava/lang/String;Z)V
void android::icu::impl::Assert::assrt(std::shared_ptr<java::lang::String> msg,bool val)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "msg"    # Ljava/lang/String;
	//    .param p1, "val"    # Z
	if ( val )     
		goto label_cond_23;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalStateException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("assert \'")))->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' failed")))->toString());
	// throw
	throw cVar0;
	// 056    .line 28
label_cond_23:
	return;

}
// .method public static assrt(Z)V
void android::icu::impl::Assert::assrt(bool val)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p0, "val"    # Z
	if ( val )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("assert failed")));
	// throw
	throw cVar0;
	// 077    .line 25
label_cond_b:
	return;

}
// .method public static fail(Ljava/lang/Exception;)V
void android::icu::impl::Assert::fail(std::shared_ptr<java::lang::Exception> e)
{
	
	//    .param p0, "e"    # Ljava/lang/Exception;
	android::icu::impl::Assert::fail(e->toString());
	return;

}
// .method public static fail(Ljava/lang/String;)V
void android::icu::impl::Assert::fail(std::shared_ptr<java::lang::String> msg)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "msg"    # Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalStateException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("failure \'")))->append(msg)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString());
	// throw
	throw cVar0;

}


