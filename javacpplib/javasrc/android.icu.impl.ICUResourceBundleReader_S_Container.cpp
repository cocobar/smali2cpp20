// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$Container.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Container.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.nio.CharBuffer.h"

// .method constructor <init>()V
android::icu::impl::ICUResourceBundleReader_S_Container::ICUResourceBundleReader_S_Container()
{
	
	// 029    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method protected getContainer16Resource(Landroid/icu/impl/ICUResourceBundleReader;I)I
int android::icu::impl::ICUResourceBundleReader_S_Container::getContainer16Resource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int index)
{
	
	int res16;
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "index"    # I
	if ( index < 0 ) 
		goto label_cond_6;
	if ( this->size >  index )
		goto label_cond_8;
label_cond_6:
	return -0x1;
	// 056    .line 956
label_cond_8:
	res16 = android::icu::impl::ICUResourceBundleReader::-get2(reader)->charAt((this->itemsOffset +  index));
	//    .local v0, "res16":I
	if ( res16 >= android::icu::impl::ICUResourceBundleReader::-get3(reader) )
		goto label_cond_1d;
label_goto_19:
	return (0x60000000 |  res16);
	// 086    .line 962
label_cond_1d:
	res16 = ((res16 - android::icu::impl::ICUResourceBundleReader::-get3(reader)) + android::icu::impl::ICUResourceBundleReader::-get4(reader));
	goto label_goto_19;

}
// .method protected getContainer32Resource(Landroid/icu/impl/ICUResourceBundleReader;I)I
int android::icu::impl::ICUResourceBundleReader_S_Container::getContainer32Resource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int index)
{
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "index"    # I
	if ( index < 0 ) 
		goto label_cond_6;
	if ( this->size >  index )
		goto label_cond_8;
label_cond_6:
	return -0x1;
	// 122    .line 970
label_cond_8:
	return android::icu::impl::ICUResourceBundleReader::-wrap7(reader, (this->itemsOffset +  ( index * 0x4)));

}
// .method getContainerResource(Landroid/icu/impl/ICUResourceBundleReader;I)I
int android::icu::impl::ICUResourceBundleReader_S_Container::getContainerResource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int index)
{
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "index"    # I
	return -0x1;

}
// .method getResource(Landroid/icu/impl/ICUResourceBundleReader;Ljava/lang/String;)I
int android::icu::impl::ICUResourceBundleReader_S_Container::getResource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,std::shared_ptr<java::lang::String> resKey)
{
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "resKey"    # Ljava/lang/String;
	return this->getContainerResource(reader, java::lang::Integer::parseInt(resKey));

}
// .method public final getSize()I
int android::icu::impl::ICUResourceBundleReader_S_Container::getSize()
{
	
	return this->size;

}


