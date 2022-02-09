// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUData$1.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUData_S_1.h"
#include "android.icu.impl.ICUData.h"
#include "java.lang.String.h"
#include "java.net.URL.h"

// .method constructor <init>(Ljava/lang/String;)V
android::icu::impl::ICUData_S_1::ICUData_S_1(std::shared_ptr<java::lang::String> var0)
{
	
	this->val_S_resourceName = var0;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/net/URL;
std::shared_ptr<java::net::URL> android::icu::impl::ICUData_S_1::run()
{
	
	return android::icu::impl::ICUData()->getResource(this->val_S_resourceName);

}


