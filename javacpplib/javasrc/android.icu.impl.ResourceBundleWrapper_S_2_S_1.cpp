// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ResourceBundleWrapper$2$1.smali
#include "java2ctype.h"
#include "android.icu.impl.ResourceBundleWrapper_S_2_S_1.h"
#include "android.icu.impl.ResourceBundleWrapper_S_2.h"
#include "java.io.InputStream.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"

// .method constructor <init>(Landroid/icu/impl/ResourceBundleWrapper$2;Ljava/lang/ClassLoader;Ljava/lang/String;)V
android::icu::impl::ResourceBundleWrapper_S_2_S_1::ResourceBundleWrapper_S_2_S_1(std::shared_ptr<android::icu::impl::ResourceBundleWrapper_S_2> this_S_1,std::shared_ptr<java::lang::ClassLoader> var1,std::shared_ptr<java::lang::String> var2)
{
	
	//    .param p1, "this$1"    # Landroid/icu/impl/ResourceBundleWrapper$2;
	this->this_S_1 = this_S_1;
	this->val_S_root = var1;
	this->val_S_resName = var2;
	// 052    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> android::icu::impl::ResourceBundleWrapper_S_2_S_1::run()
{
	
	return this->val_S_root->getResourceAsStream(this->val_S_resName);

}


