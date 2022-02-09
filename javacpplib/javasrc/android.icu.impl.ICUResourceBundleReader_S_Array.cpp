// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$Array.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Array.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderValue.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.impl.UResource_S_Value.h"

// .method constructor <init>()V
android::icu::impl::ICUResourceBundleReader_S_Array::ICUResourceBundleReader_S_Array()
{
	
	// 026    invoke-direct {p0}, Landroid/icu/impl/ICUResourceBundleReader$Container;-><init>()V
	return;

}
// .method public getValue(ILandroid/icu/impl/UResource$Value;)Z
bool android::icu::impl::ICUResourceBundleReader_S_Array::getValue(int i,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderValue> readerValue;
	
	//    .param p1, "i"    # I
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	if ( i < 0 ) 
		goto label_cond_14;
	if ( i >= this->size )
		goto label_cond_14;
	readerValue = value;
	readerValue->checkCast("android::icu::impl::ICUResourceBundleReader_S_ReaderValue");
	//    .local v0, "readerValue":Landroid/icu/impl/ICUResourceBundleReader$ReaderValue;
	readerValue->res = this->getContainerResource(readerValue->reader, i);
	return 0x1;
	// 068    .line 987
	// 069    .end local v0    # "readerValue":Landroid/icu/impl/ICUResourceBundleReader$ReaderValue;
label_cond_14:
	return 0x0;

}


