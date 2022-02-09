// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\TransactionAbortError.smali
#include "java2ctype.h"
#include "dalvik.system.TransactionAbortError.h"
#include "java.lang.InternalError.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

// .method private constructor <init>()V
dalvik::system::TransactionAbortError::TransactionAbortError()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/InternalError;-><init>()V
	return;

}
// .method private constructor <init>(Ljava/lang/String;)V
dalvik::system::TransactionAbortError::TransactionAbortError(std::shared_ptr<java::lang::String> detailMessage)
{
	
	//    .param p1, "detailMessage"    # Ljava/lang/String;
	java::lang::InternalError::(detailMessage);
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
dalvik::system::TransactionAbortError::TransactionAbortError(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::InternalError::(message);
	this->initCause(cause);
	return;

}
// .method private constructor <init>(Ljava/lang/Throwable;)V
dalvik::system::TransactionAbortError::TransactionAbortError(std::shared_ptr<java::lang::Throwable> cause)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	cVar0 = 0x0;
	if ( cause )     
		goto label_cond_7;
label_goto_3:
	dalvik::system::TransactionAbortError::(cVar0, cause);
	return;
	// 062    .line 59
label_cond_7:
	cVar0 = cause->toString();
	goto label_goto_3;

}


