// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ICUUncheckedIOException.smali
#include "java2ctype.h"
#include "android.icu.util.ICUUncheckedIOException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static android::icu::util::ICUUncheckedIOException::serialVersionUID = 0x10cbb83d59830401L;
// .method public constructor <init>()V
android::icu::util::ICUUncheckedIOException::ICUUncheckedIOException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::util::ICUUncheckedIOException::ICUUncheckedIOException(std::shared_ptr<java::lang::String> message)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	java::lang::RuntimeException::(message);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
android::icu::util::ICUUncheckedIOException::ICUUncheckedIOException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::RuntimeException::(message, cause);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
android::icu::util::ICUUncheckedIOException::ICUUncheckedIOException(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::lang::RuntimeException::(cause);
	return;

}


