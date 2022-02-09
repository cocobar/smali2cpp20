// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceInt.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceInt.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "java.lang.String.h"

// .method constructor <init>(Landroid/icu/impl/ICUResourceBundleImpl;Ljava/lang/String;I)V
android::icu::impl::ICUResourceBundleImpl_S_ResourceInt::ICUResourceBundleImpl_S_ResourceInt(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource)
{
	
	//    .param p1, "container"    # Landroid/icu/impl/ICUResourceBundleImpl;
	//    .param p2, "key"    # Ljava/lang/String;
	//    .param p3, "resource"    # I
	android::icu::impl::ICUResourceBundleImpl::(container, key, resource);
	return;

}
// .method public getInt()I
int android::icu::impl::ICUResourceBundleImpl_S_ResourceInt::getInt()
{
	
	return android::icu::impl::ICUResourceBundleReader::RES_GET_INT(this->resource);

}
// .method public getType()I
int android::icu::impl::ICUResourceBundleImpl_S_ResourceInt::getType()
{
	
	return 0x7;

}
// .method public getUInt()I
int android::icu::impl::ICUResourceBundleImpl_S_ResourceInt::getUInt()
{
	
	return android::icu::impl::ICUResourceBundleReader::RES_GET_UINT(this->resource);

}


