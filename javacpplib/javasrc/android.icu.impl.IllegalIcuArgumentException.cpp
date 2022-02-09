// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\IllegalIcuArgumentException.smali
#include "java2ctype.h"
#include "android.icu.impl.IllegalIcuArgumentException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static android::icu::impl::IllegalIcuArgumentException::serialVersionUID = 0x3496294bfd718099L;
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::IllegalIcuArgumentException::IllegalIcuArgumentException(std::shared_ptr<java::lang::String> errorMessage)
{
	
	//    .param p1, "errorMessage"    # Ljava/lang/String;
	java::lang::IllegalArgumentException::(errorMessage);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
android::icu::impl::IllegalIcuArgumentException::IllegalIcuArgumentException(std::shared_ptr<java::lang::String> errorMessage,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "errorMessage"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::IllegalArgumentException::(errorMessage, cause);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
android::icu::impl::IllegalIcuArgumentException::IllegalIcuArgumentException(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::lang::IllegalArgumentException::(cause);
	return;

}
// .method public declared-synchronized initCause(Ljava/lang/Throwable;)Landroid/icu/impl/IllegalIcuArgumentException;
std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> android::icu::impl::IllegalIcuArgumentException::initCause(std::shared_ptr<java::lang::Throwable> cause)
{
	
	std::shared_ptr<android::icu::impl::IllegalIcuArgumentException> cVar0;
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	this->monitor_enter();
	try {
	//label_try_start_1:
	cVar0 = this->initCause(cause);
	cVar0->checkCast("android::icu::impl::IllegalIcuArgumentException");
	//label_try_end_7:
	}
	catch (...){
		goto label_catchall_9;
	}
	//    .catchall {:try_start_1 .. :try_end_7} :catchall_9
	this->monitor_exit();
	return cVar0;
label_catchall_9:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


