// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceString.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheValue.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceString.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "java.lang.String.h"

// .method constructor <init>(Landroid/icu/impl/ICUResourceBundleImpl;Ljava/lang/String;I)V
android::icu::impl::ICUResourceBundleImpl_S_ResourceString::ICUResourceBundleImpl_S_ResourceString(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource)
{
	
	std::shared_ptr<java::lang::String> s;
	
	//    .param p1, "container"    # Landroid/icu/impl/ICUResourceBundleImpl;
	//    .param p2, "key"    # Ljava/lang/String;
	//    .param p3, "resource"    # I
	android::icu::impl::ICUResourceBundleImpl::(container, key, resource);
	s = this->wholeBundle->reader->getString(resource);
	//    .local v0, "s":Ljava/lang/String;
	if ( s->length() <  0xc )
		goto label_cond_19;
	if ( !(android::icu::impl::CacheValue::futureInstancesWillBeStrong({const[class].FS-Param})) )  
		goto label_cond_1b;
label_cond_19:
	this->value = s;
label_cond_1b:
	return;

}
// .method public getString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleImpl_S_ResourceString::getString()
{
	
	if ( !(this->value) )  
		goto label_cond_7;
	return this->value;
	// 084    .line 109
label_cond_7:
	return this->wholeBundle->reader->getString(this->resource);

}
// .method public getType()I
int android::icu::impl::ICUResourceBundleImpl_S_ResourceString::getType()
{
	
	return 0x0;

}


