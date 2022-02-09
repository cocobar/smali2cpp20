// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUData$3.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUData_S_3.h"
#include "java.io.InputStream.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/ClassLoader;Ljava/lang/String;)V
android::icu::impl::ICUData_S_3::ICUData_S_3(std::shared_ptr<java::lang::ClassLoader> var0,std::shared_ptr<java::lang::String> var1)
{
	
	this->val_S_loader = var0;
	this->val_S_resourceName = var1;
	// 047    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> android::icu::impl::ICUData_S_3::run()
{
	
	return this->val_S_loader->getResourceAsStream(this->val_S_resourceName);

}


