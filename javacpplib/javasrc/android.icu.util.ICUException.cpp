// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ICUException.smali
#include "java2ctype.h"
#include "android.icu.util.ICUException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static android::icu::util::ICUException::serialVersionUID = -0x2a9197bc5b335782L;
// .method public constructor <init>()V
android::icu::util::ICUException::ICUException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::util::ICUException::ICUException(std::shared_ptr<java::lang::String> message)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	java::lang::RuntimeException::(message);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
android::icu::util::ICUException::ICUException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::RuntimeException::(message, cause);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
android::icu::util::ICUException::ICUException(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::lang::RuntimeException::(cause);
	return;

}


