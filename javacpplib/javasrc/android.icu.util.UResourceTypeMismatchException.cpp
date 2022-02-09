// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\UResourceTypeMismatchException.smali
#include "java2ctype.h"
#include "android.icu.util.UResourceTypeMismatchException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

static android::icu::util::UResourceTypeMismatchException::serialVersionUID = 0x11dacfbe9999e92dL;
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::util::UResourceTypeMismatchException::UResourceTypeMismatchException(std::shared_ptr<java::lang::String> msg)
{
	
	//    .param p1, "msg"    # Ljava/lang/String;
	java::lang::RuntimeException::(msg);
	return;

}


