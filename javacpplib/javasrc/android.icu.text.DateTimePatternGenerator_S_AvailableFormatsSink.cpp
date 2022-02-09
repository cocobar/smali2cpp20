// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$AvailableFormatsSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DateTimePatternGenerator_S_AvailableFormatsSink.h"
#include "android.icu.text.DateTimePatternGenerator_S_PatternInfo.h"
#include "android.icu.text.DateTimePatternGenerator.h"
#include "java.lang.String.h"

// .method public constructor <init>(Landroid/icu/text/DateTimePatternGenerator;Landroid/icu/text/DateTimePatternGenerator$PatternInfo;)V
android::icu::text::DateTimePatternGenerator_S_AvailableFormatsSink::DateTimePatternGenerator_S_AvailableFormatsSink(std::shared_ptr<android::icu::text::DateTimePatternGenerator> this_S_0,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/DateTimePatternGenerator;
	//    .param p2, "returnInfo"    # Landroid/icu/text/DateTimePatternGenerator$PatternInfo;
	this->this_S_0 = this_S_0;
	// 033    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	this->returnInfo = returnInfo;
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::DateTimePatternGenerator_S_AvailableFormatsSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool isRoot)
{
	
	int i;
	std::shared_ptr<java::lang::String> formatKey;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "isRoot"    # Z
	//    .local v2, "formatsTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v3, "i":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_2c;
	formatKey = key->toString();
	//    .local v0, "formatKey":Ljava/lang/String;
	if ( android::icu::text::DateTimePatternGenerator::-wrap0(this->this_S_0, formatKey) )     
		goto label_cond_29;
	android::icu::text::DateTimePatternGenerator::-wrap5(this->this_S_0, formatKey);
	//    .local v1, "formatValue":Ljava/lang/String;
	this->this_S_0->addPatternWithSkeleton(value->toString(), formatKey, ( isRoot ^ 0x1), this->returnInfo);
	//    .end local v1    # "formatValue":Ljava/lang/String;
label_cond_29:
	i = ( i + 0x1);
	goto label_goto_5;
	// 110    .line 260
	// 111    .end local v0    # "formatKey":Ljava/lang/String;
label_cond_2c:
	return;

}


