// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$Array32.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Array32.h"
#include "android.icu.impl.ICUResourceBundleReader.h"

// .method constructor <init>(Landroid/icu/impl/ICUResourceBundleReader;I)V
android::icu::impl::ICUResourceBundleReader_S_Array32::ICUResourceBundleReader_S_Array32(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int offset)
{
	
	int cVar0;
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "offset"    # I
	// 025    invoke-direct {p0}, Landroid/icu/impl/ICUResourceBundleReader$Array;-><init>()V
	cVar0 = android::icu::impl::ICUResourceBundleReader::-wrap8(reader, offset);
	this->size = android::icu::impl::ICUResourceBundleReader::-wrap7(reader, cVar0);
	this->itemsOffset = ( cVar0 + 0x4);
	return;

}
// .method getContainerResource(Landroid/icu/impl/ICUResourceBundleReader;I)I
int android::icu::impl::ICUResourceBundleReader_S_Array32::getContainerResource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int index)
{
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "index"    # I
	return this->getContainer32Resource(reader, index);

}


