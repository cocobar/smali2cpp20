// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$Table32.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Table32.h"
#include "android.icu.impl.ICUResourceBundleReader.h"

// .method constructor <init>(Landroid/icu/impl/ICUResourceBundleReader;I)V
android::icu::impl::ICUResourceBundleReader_S_Table32::ICUResourceBundleReader_S_Table32(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int offset)
{
	
	int cVar0;
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "offset"    # I
	// 025    invoke-direct {p0}, Landroid/icu/impl/ICUResourceBundleReader$Table;-><init>()V
	cVar0 = android::icu::impl::ICUResourceBundleReader::-wrap8(reader, offset);
	this->key32Offsets = android::icu::impl::ICUResourceBundleReader::-wrap4(reader, cVar0);
	this->size = this->key32Offsets->size();
	this->itemsOffset = (( ( this->size + 0x1) * 0x4) +  cVar0);
	return;

}
// .method getContainerResource(Landroid/icu/impl/ICUResourceBundleReader;I)I
int android::icu::impl::ICUResourceBundleReader_S_Table32::getContainerResource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int index)
{
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "index"    # I
	return this->getContainer32Resource(reader, index);

}


