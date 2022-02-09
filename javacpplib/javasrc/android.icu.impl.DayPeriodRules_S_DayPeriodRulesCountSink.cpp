// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\DayPeriodRules$DayPeriodRulesCountSink.smali
#include "java2ctype.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriodRulesCountSink.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriodRulesData.h"
#include "android.icu.impl.DayPeriodRules.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.String.h"

// .method private constructor <init>(Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;)V
android::icu::impl::DayPeriodRules_S_DayPeriodRulesCountSink::DayPeriodRules_S_DayPeriodRulesCountSink(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> data)
{
	
	//    .param p1, "data"    # Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;
	// 028    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	this->data = data;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;Landroid/icu/impl/DayPeriodRules$DayPeriodRulesCountSink;)V
android::icu::impl::DayPeriodRules_S_DayPeriodRulesCountSink::DayPeriodRules_S_DayPeriodRulesCountSink(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> data,std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesCountSink> _this1)
{
	
	//    .param p1, "data"    # Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;
	//    .param p2, "-this1"    # Landroid/icu/impl/DayPeriodRules$DayPeriodRulesCountSink;
	android::icu::impl::DayPeriodRules_S_DayPeriodRulesCountSink::(data);
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::impl::DayPeriodRules_S_DayPeriodRulesCountSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i;
	int setNum;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v1, "rules":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v0, "i":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_20;
	setNum = android::icu::impl::DayPeriodRules::-wrap0(key->toString());
	//    .local v2, "setNum":I
	if ( setNum <= this->data->maxRuleSetNum )
		goto label_cond_1d;
	this->data->maxRuleSetNum = setNum;
label_cond_1d:
	i = ( i + 0x1);
	goto label_goto_5;
	// 102    .line 227
	// 103    .end local v2    # "setNum":I
label_cond_20:
	return;

}


