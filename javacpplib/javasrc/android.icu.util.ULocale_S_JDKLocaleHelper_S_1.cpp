// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale$JDKLocaleHelper$1.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale_S_JDKLocaleHelper_S_1.h"
#include "java.lang.String.h"
#include "java.lang.System.h"

// .method constructor <init>(Ljava/lang/String;)V
android::icu::util::ULocale_S_JDKLocaleHelper_S_1::ULocale_S_JDKLocaleHelper_S_1(std::shared_ptr<java::lang::String> var0)
{
	
	this->val_S_fkey = var0;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale_S_JDKLocaleHelper_S_1::run()
{
	
	return java::lang::System::getProperty(this->val_S_fkey);

}


