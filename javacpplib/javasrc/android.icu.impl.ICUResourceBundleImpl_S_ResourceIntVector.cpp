// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleImpl$ResourceIntVector.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundleImpl_S_ResourceIntVector.h"
#include "android.icu.impl.ICUResourceBundleImpl.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "java.lang.String.h"

// .method constructor <init>(Landroid/icu/impl/ICUResourceBundleImpl;Ljava/lang/String;I)V
android::icu::impl::ICUResourceBundleImpl_S_ResourceIntVector::ICUResourceBundleImpl_S_ResourceIntVector(std::shared_ptr<android::icu::impl::ICUResourceBundleImpl> container,std::shared_ptr<java::lang::String> key,int resource)
{
	
	//    .param p1, "container"    # Landroid/icu/impl/ICUResourceBundleImpl;
	//    .param p2, "key"    # Ljava/lang/String;
	//    .param p3, "resource"    # I
	android::icu::impl::ICUResourceBundleImpl::(container, key, resource);
	return;

}
// .method public getIntVector()[I
int android::icu::impl::ICUResourceBundleImpl_S_ResourceIntVector::getIntVector()
{
	
	return this->wholeBundle->reader->getIntVector(this->resource);

}
// .method public getType()I
int android::icu::impl::ICUResourceBundleImpl_S_ResourceIntVector::getType()
{
	
	return 0xe;

}


