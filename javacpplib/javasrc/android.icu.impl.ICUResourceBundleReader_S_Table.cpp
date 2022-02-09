// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundleReader$Table.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundleReader_S_ReaderValue.h"
#include "android.icu.impl.ICUResourceBundleReader_S_Table.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.CharSequence.h"
#include "java.lang.String.h"

static android::icu::impl::ICUResourceBundleReader_S_Table::URESDATA_ITEM_NOT_FOUND = -0x1;
// .method constructor <init>()V
android::icu::impl::ICUResourceBundleReader_S_Table::ICUResourceBundleReader_S_Table()
{
	
	// 036    invoke-direct {p0}, Landroid/icu/impl/ICUResourceBundleReader$Container;-><init>()V
	return;

}
// .method findTableItem(Landroid/icu/impl/ICUResourceBundleReader;Ljava/lang/CharSequence;)I
int android::icu::impl::ICUResourceBundleReader_S_Table::findTableItem(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,std::shared_ptr<java::lang::CharSequence> key)
{
	
	int start;
	int limit;
	int mid;
	int result;
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "key"    # Ljava/lang/CharSequence;
	start = 0x0;
	//    .local v3, "start":I
	limit = this->size;
	//    .local v0, "limit":I
label_goto_3:
	if ( start >= limit )
		goto label_cond_28;
	mid = _ushri((start + limit),0x1);
	//    .local v1, "mid":I
	if ( !(this->keyOffsets) )  
		goto label_cond_19;
	result = android::icu::impl::ICUResourceBundleReader::-wrap6(reader, key, this->keyOffsets[mid]);
	//    .local v2, "result":I
label_goto_15:
	if ( result >= 0 )
		goto label_cond_22;
	limit = mid;
	goto label_goto_3;
	// 092    .line 1038
	// 093    .end local v2    # "result":I
label_cond_19:
	result = android::icu::impl::ICUResourceBundleReader::-wrap5(reader, key, this->key32Offsets[mid]);
	//    .restart local v2    # "result":I
	goto label_goto_15;
	// 106    .line 1042
label_cond_22:
	if ( result <= 0 )
		goto label_cond_27;
	start = ( mid + 0x1);
	goto label_goto_3;
	// 115    .line 1046
label_cond_27:
	return mid;
	// 119    .line 1049
	// 120    .end local v1    # "mid":I
	// 121    .end local v2    # "result":I
label_cond_28:
	return -0x1;

}
// .method getKey(Landroid/icu/impl/ICUResourceBundleReader;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUResourceBundleReader_S_Table::getKey(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,int index)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "index"    # I
	if ( index < 0 ) 
		goto label_cond_7;
	if ( this->size >  index )
		goto label_cond_8;
label_cond_7:
	return 0x0;
	// 147    .line 1021
label_cond_8:
	if ( !(this->keyOffsets) )  
		goto label_cond_15;
	cVar0 = android::icu::impl::ICUResourceBundleReader::-wrap9(reader, this->keyOffsets[index]);
label_goto_14:
	return cVar0;
	// 166    .line 1023
label_cond_15:
	cVar0 = android::icu::impl::ICUResourceBundleReader::-wrap10(reader, this->key32Offsets[index]);
	goto label_goto_14;

}
// .method public getKeyAndValue(ILandroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)Z
bool android::icu::impl::ICUResourceBundleReader_S_Table::getKeyAndValue(int i,std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundleReader_S_ReaderValue> readerValue;
	
	//    .param p1, "i"    # I
	//    .param p2, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p3, "value"    # Landroid/icu/impl/UResource$Value;
	if ( i < 0 ) 
		goto label_cond_2b;
	if ( i >= this->size )
		goto label_cond_2b;
	readerValue = value;
	readerValue->checkCast("android::icu::impl::ICUResourceBundleReader_S_ReaderValue");
	//    .local v0, "readerValue":Landroid/icu/impl/ICUResourceBundleReader$ReaderValue;
	if ( !(this->keyOffsets) )  
		goto label_cond_21;
	android::icu::impl::ICUResourceBundleReader::-wrap11(readerValue->reader, this->keyOffsets[i], key);
label_goto_17:
	readerValue->res = this->getContainerResource(readerValue->reader, i);
	return 0x1;
	// 230    .line 1062
label_cond_21:
	android::icu::impl::ICUResourceBundleReader::-wrap12(readerValue->reader, this->key32Offsets[i], key);
	goto label_goto_17;
	// 242    .line 1067
	// 243    .end local v0    # "readerValue":Landroid/icu/impl/ICUResourceBundleReader$ReaderValue;
label_cond_2b:
	return 0x0;

}
// .method getResource(Landroid/icu/impl/ICUResourceBundleReader;Ljava/lang/String;)I
int android::icu::impl::ICUResourceBundleReader_S_Table::getResource(std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader,std::shared_ptr<java::lang::String> resKey)
{
	
	//    .param p1, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	//    .param p2, "resKey"    # Ljava/lang/String;
	return this->getContainerResource(reader, this->findTableItem(reader, resKey));

}


