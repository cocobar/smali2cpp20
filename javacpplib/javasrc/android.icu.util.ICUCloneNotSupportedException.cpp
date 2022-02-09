// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ICUCloneNotSupportedException.smali
#include "java2ctype.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.ICUException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static android::icu::util::ICUCloneNotSupportedException::serialVersionUID = -0x42f3e07e34148794L;
// .method public constructor <init>()V
android::icu::util::ICUCloneNotSupportedException::ICUCloneNotSupportedException()
{
	
	// 016    invoke-direct {p0}, Landroid/icu/util/ICUException;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::util::ICUCloneNotSupportedException::ICUCloneNotSupportedException(std::shared_ptr<java::lang::String> message)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	android::icu::util::ICUException::(message);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
android::icu::util::ICUCloneNotSupportedException::ICUCloneNotSupportedException(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	android::icu::util::ICUException::(message, cause);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
android::icu::util::ICUCloneNotSupportedException::ICUCloneNotSupportedException(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	android::icu::util::ICUException::(cause);
	return;

}


