// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$Array16.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Array16.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "java.nio.CharBuffer.h"

// .method constructor <init>(Landroid/icu/impl/ICUResourceBundleReader;I)V
android::icu::impl::ICUResourceBundleReader_S_Array16::ICUResourceBundleReader_S_Array16(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int offset)
{
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "offset"    # I
	// 025    invoke-direct {p0}, Landroid/icu/impl/ICUResourceBundleReader$Array;-><init>()V
	this->size = android::icu::impl::ICUResourceBundleReader::-get2(reader)->charAt(offset);
	this->itemsOffset = ( offset + 0x1);
	return;

}
// .method getContainerResource(Landroid/icu/impl/ICUResourceBundleReader;I)I
int android::icu::impl::ICUResourceBundleReader_S_Array16::getContainerResource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int index)
{
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "index"    # I
	return this->getContainer16Resource(reader, index);

}


