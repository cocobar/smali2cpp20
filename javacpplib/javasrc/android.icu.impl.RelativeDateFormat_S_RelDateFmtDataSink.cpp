// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\RelativeDateFormat$RelDateFmtDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.RelativeDateFormat_S_RelDateFmtDataSink.h"
#include "android.icu.impl.RelativeDateFormat_S_URelativeString.h"
#include "android.icu.impl.RelativeDateFormat.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.Integer.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.String.h"
#include "java.util.List.h"

// .method private constructor <init>(Landroid/icu/impl/RelativeDateFormat;)V
android::icu::impl::RelativeDateFormat_S_RelDateFmtDataSink::RelativeDateFormat_S_RelDateFmtDataSink(std::shared_ptr<android::icu::impl::RelativeDateFormat> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/RelativeDateFormat;
	this->this_S_0 = this_S_0;
	// 030    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/RelativeDateFormat;Landroid/icu/impl/RelativeDateFormat$RelDateFmtDataSink;)V
android::icu::impl::RelativeDateFormat_S_RelDateFmtDataSink::RelativeDateFormat_S_RelDateFmtDataSink(std::shared_ptr<android::icu::impl::RelativeDateFormat> this_S_0,std::shared_ptr<android::icu::impl::RelativeDateFormat_S_RelDateFmtDataSink> _this1)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/RelativeDateFormat;
	//    .param p2, "-this1"    # Landroid/icu/impl/RelativeDateFormat$RelDateFmtDataSink;
	android::icu::impl::RelativeDateFormat_S_RelDateFmtDataSink::(this_S_0);
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::impl::RelativeDateFormat_S_RelDateFmtDataSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i;
	std::vector<std::any> tryCatchExcetionList;
	int keyOffset;
	std::shared_ptr<android::icu::impl::RelativeDateFormat_S_URelativeString> newDayInfo;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	if ( value->getType() != 0x3 )
		goto label_cond_8;
	return;
	// 067    .line 258
label_cond_8:
	//    .local v4, "table":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v0, "i":I
label_goto_d:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_3a;
	try {
	//label_try_start_13:
	//label_try_end_1a:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_38;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_13 .. :try_end_1a} :catch_38
	keyOffset = java::lang::Integer::parseInt(key->toString());
	//    .local v1, "keyOffset":I
	if ( android::icu::impl::RelativeDateFormat::-wrap0(this->this_S_0, keyOffset) )     
		goto label_cond_35;
	newDayInfo = std::make_shared<android::icu::impl::RelativeDateFormat_S_URelativeString>(keyOffset, value->getString());
	//    .local v2, "newDayInfo":Landroid/icu/impl/RelativeDateFormat$URelativeString;
	android::icu::impl::RelativeDateFormat::-get0(this->this_S_0)->add(newDayInfo);
	//    .end local v2    # "newDayInfo":Landroid/icu/impl/RelativeDateFormat$URelativeString;
label_cond_35:
	i = ( i + 0x1);
	goto label_goto_d;
	// 133    .line 265
	// 134    .end local v1    # "keyOffset":I
label_catch_38:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "nfe":Ljava/lang/NumberFormatException;
	return;
	// 142    .line 275
	// 143    .end local v3    # "nfe":Ljava/lang/NumberFormatException;
label_cond_3a:
	return;

}


