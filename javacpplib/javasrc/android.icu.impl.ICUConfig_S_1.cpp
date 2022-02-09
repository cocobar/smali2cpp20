// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUConfig$1.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUConfig_S_1.h"
#include "java.lang.String.h"
#include "java.lang.System.h"

// .method constructor <init>(Ljava/lang/String;)V
android::icu::impl::ICUConfig_S_1::ICUConfig_S_1(std::shared_ptr<java::lang::String> var0)
{
	
	this->val_S_fname = var0;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUConfig_S_1::run()
{
	
	return java::lang::System::getProperty(this->val_S_fname);

}


