// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\InvalidFormatException.smali
#include "java2ctype.h"
#include "android.icu.impl.InvalidFormatException.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static android::icu::impl::InvalidFormatException::serialVersionUID = 0x7b47ec92c2cf68ffL;
// .method public constructor <init>()V
android::icu::impl::InvalidFormatException::InvalidFormatException()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Exception;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::InvalidFormatException::InvalidFormatException(std::shared_ptr<java::lang::String> message)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	java::lang::Exception::(message);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
android::icu::impl::InvalidFormatException::InvalidFormatException(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::lang::Exception::(cause);
	return;

}


