// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ArabicShapingException.smali
#include "java2ctype.h"
#include "android.icu.text.ArabicShapingException.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"

static android::icu::text::ArabicShapingException::serialVersionUID = 0x4904b74ce11579caL;
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::ArabicShapingException::ArabicShapingException(std::shared_ptr<java::lang::String> message)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	java::lang::Exception::(message);
	return;

}


