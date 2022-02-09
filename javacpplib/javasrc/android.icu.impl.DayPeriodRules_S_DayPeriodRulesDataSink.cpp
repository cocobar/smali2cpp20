// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\DayPeriodRules$DayPeriodRulesDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.DayPeriodRules_S_CutoffType.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriod.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriodRulesData.h"
#include "android.icu.impl.DayPeriodRules_S_DayPeriodRulesDataSink.h"
#include "android.icu.impl.DayPeriodRules.h"
#include "android.icu.impl.UResource_S_Array.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.util.ICUException.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

// .method private constructor <init>(Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;)V
android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink::DayPeriodRules_S_DayPeriodRulesDataSink(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> data)
{
	
	//    .param p1, "data"    # Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;
	// 036    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	this->cutoffs = std::make_shared<std::vector<int[]>>(0x19);
	this->data = data;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;Landroid/icu/impl/DayPeriodRules$DayPeriodRulesDataSink;)V
android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink::DayPeriodRules_S_DayPeriodRulesDataSink(std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesData> data,std::shared_ptr<android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink> _this1)
{
	
	//    .param p1, "data"    # Landroid/icu/impl/DayPeriodRules$DayPeriodRulesData;
	//    .param p2, "-this1"    # Landroid/icu/impl/DayPeriodRules$DayPeriodRulesDataSink;
	android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink::(data);
	return;

}
// .method private addCutoff(Landroid/icu/impl/DayPeriodRules$CutoffType;Ljava/lang/String;)V
void android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink::addCutoff(std::shared_ptr<android::icu::impl::DayPeriodRules_S_CutoffType> type,std::shared_ptr<java::lang::String> hourStr)
{
	
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	int hour;
	std::shared_ptr<int[]> cVar1;
	
	//    .param p1, "type"    # Landroid/icu/impl/DayPeriodRules$CutoffType;
	//    .param p2, "hourStr"    # Ljava/lang/String;
	if ( type )     
		goto label_cond_b;
	cVar0 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cutoff type not recognized.")));
	// throw
	throw cVar0;
	// 080    .line 152
label_cond_b:
	hour = android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink::parseHour(hourStr);
	//    .local v0, "hour":I
	cVar1 = this->cutoffs;
	cVar1[hour] = (cVar1[hour] |  (0x1 << type->ordinal()));
	return;

}
// .method private static parseHour(Ljava/lang/String;)I
int android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink::parseHour(std::shared_ptr<java::lang::String> str)
{
	
	int firstColonPos;
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	std::shared_ptr<android::icu::util::ICUException> cVar1;
	int hour;
	std::shared_ptr<android::icu::util::ICUException> cVar2;
	
	//    .param p0, "str"    # Ljava/lang/String;
	firstColonPos = str->indexOf(0x3a);
	//    .local v0, "firstColonPos":I
	if ( firstColonPos < 0 ) 
		goto label_cond_18;
	if ( !(( str->substring(firstColonPos)->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>(":00"))) ^ 0x1)) )  
		goto label_cond_21;
label_cond_18:
	cVar0 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cutoff time must end in \")));
	// throw
	throw cVar0;
	// 150    .line 195
label_cond_21:
	//    .local v2, "hourStr":Ljava/lang/String;
	if ( firstColonPos == 0x1 )
		goto label_cond_34;
	if ( firstColonPos == 0x2 )
		goto label_cond_34;
	cVar1 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cutoff time must begin with h: or hh:")));
	// throw
	throw cVar1;
	// 175    .line 200
label_cond_34:
	hour = java::lang::Integer::parseInt(str->substring(0x0, firstColonPos));
	//    .local v1, "hour":I
	if ( hour < 0 ) 
		goto label_cond_3e;
	if ( hour <= 0x18 )
		goto label_cond_47;
label_cond_3e:
	cVar2 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cutoff hour must be between 0 and 24, inclusive.")));
	// throw
	throw cVar2;
	// 199    .line 207
label_cond_47:
	return hour;

}
// .method private processRules(Landroid/icu/impl/UResource$Table;Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink::processRules(std::shared_ptr<android::icu::impl::UResource_S_Table> rules,std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	int i;
	std::shared_ptr<android::icu::impl::DayPeriodRules> cVar0;
	int j;
	std::shared_ptr<android::icu::util::ICUException> cVar1;
	int k;
	std::shared_ptr<android::icu::impl::UResource_S_Array> cutoffArray;
	int l;
	std::shared_ptr<java::lang::Object> cVar2;
	int cVar3;
	std::shared_ptr<android::icu::util::ICUException> cVar4;
	
	//    .param p1, "rules"    # Landroid/icu/impl/UResource$Table;
	//    .param p2, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p3, "value"    # Landroid/icu/impl/UResource$Value;
	i = 0x0;
	//    .local v4, "i":I
label_goto_1:
	if ( !(rules->getKeyAndValue(i, key, value)) )  
		goto label_cond_e0;
	this->ruleSetNum = android::icu::impl::DayPeriodRules::-wrap0(key->toString());
	cVar0 = std::make_shared<android::icu::impl::DayPeriodRules>(0x0);
	this->data->rules[this->ruleSetNum] = cVar0;
	//    .local v11, "ruleSet":Landroid/icu/impl/UResource$Table;
	j = 0x0;
	//    .local v5, "j":I
label_goto_31:
	if ( !(value->getTable()->getKeyAndValue(j, key, value)) )  
		goto label_cond_b8;
	this->period = android::icu::impl::DayPeriodRules_S_DayPeriod::-wrap0(key);
	if ( this->period )     
		goto label_cond_52;
	cVar1 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown day period in data.")));
	// throw
	throw cVar1;
	// 305    .line 111
label_cond_52:
	//    .local v10, "periodDefinition":Landroid/icu/impl/UResource$Table;
	k = 0x0;
	//    .local v6, "k":I
label_goto_57:
	if ( !(value->getTable()->getKeyAndValue(k, key, value)) )  
		goto label_cond_9f;
	if ( value->getType() )     
		goto label_cond_77;
	//    .local v12, "type":Landroid/icu/impl/DayPeriodRules$CutoffType;
	this->addCutoff(android::icu::impl::DayPeriodRules_S_CutoffType::-wrap0(key), value->getString());
	//    .end local v12    # "type":Landroid/icu/impl/DayPeriodRules$CutoffType;
label_cond_74:
	k = ( k + 0x1);
	goto label_goto_57;
	// 356    .line 119
label_cond_77:
	this->cutoffType = android::icu::impl::DayPeriodRules_S_CutoffType::-wrap0(key);
	cutoffArray = value->getArray();
	//    .local v3, "cutoffArray":Landroid/icu/impl/UResource$Array;
	//    .local v8, "length":I
	l = 0x0;
	//    .local v7, "l":I
label_goto_88:
	if ( l >= cutoffArray->getSize() )
		goto label_cond_74;
	cutoffArray->getValue(l, value);
	this->addCutoff(this->cutoffType, value->getString());
	l = ( l + 0x1);
	goto label_goto_88;
	// 408    .line 128
	// 409    .end local v3    # "cutoffArray":Landroid/icu/impl/UResource$Array;
	// 410    .end local v7    # "l":I
	// 411    .end local v8    # "length":I
label_cond_9f:
	this->setDayPeriodForHoursFromCutoffs();
	k = 0x0;
label_goto_a3:
	if ( k >= this->cutoffs->size() )
		goto label_cond_b4;
	this->cutoffs[k] = 0x0;
	k = ( k + 0x1);
	goto label_goto_a3;
	// 441    .line 107
label_cond_b4:
	j = ( j + 0x1);
	goto label_goto_31;
	// 447    .line 133
	// 448    .end local v6    # "k":I
	// 449    .end local v10    # "periodDefinition":Landroid/icu/impl/UResource$Table;
label_cond_b8:
	cVar2 = android::icu::impl::DayPeriodRules::-get0(this->data->rules[this->ruleSetNum]);
	cVar3 = 0x0;
label_goto_ca:
	if ( cVar3 >= cVar2->size() )
		goto label_cond_dc;
	//    .local v9, "period":Landroid/icu/impl/DayPeriodRules$DayPeriod;
	if ( cVar2[cVar3] )     
		goto label_cond_d9;
	cVar4 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Rules in data don\'t cover all 24 hours (they should).")));
	// throw
	throw cVar4;
	// 489    .line 133
label_cond_d9:
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_ca;
	// 495    .line 102
	// 496    .end local v9    # "period":Landroid/icu/impl/DayPeriodRules$DayPeriod;
label_cond_dc:
	i = ( i + 0x1);
	goto label_goto_1;
	// 502    .line 139
	// 503    .end local v5    # "j":I
	// 504    .end local v11    # "ruleSet":Landroid/icu/impl/UResource$Table;
label_cond_e0:
	return;

}
// .method private setDayPeriodForHoursFromCutoffs()V
void android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink::setDayPeriodForHoursFromCutoffs()
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::DayPeriodRules> rule;
	int startHour;
	int hour;
	std::shared_ptr<android::icu::util::ICUException> cVar1;
	std::shared_ptr<android::icu::util::ICUException> cVar2;
	
	cVar0 = 0x1;
	rule = this->data->rules[this->ruleSetNum];
	//    .local v1, "rule":Landroid/icu/impl/DayPeriodRules;
	startHour = 0x0;
	//    .local v2, "startHour":I
label_goto_a:
	if ( startHour >  0x18 )
		goto label_cond_89;
	if ( (this->cutoffs[startHour] &  (cVar0 << android::icu::impl::DayPeriodRules_S_CutoffType::AT->ordinal())) <= 0 )
		goto label_cond_28;
	if ( startHour )     
		goto label_cond_53;
	if ( this->period != android::icu::impl::DayPeriodRules_S_DayPeriod::MIDNIGHT )
		goto label_cond_53;
	android::icu::impl::DayPeriodRules::-set0(rule, cVar0);
label_cond_28:
label_goto_28:
	if ( (this->cutoffs[startHour] &  (cVar0 << android::icu::impl::DayPeriodRules_S_CutoffType::FROM->ordinal())) > 0 ) 
		goto label_cond_46;
	if ( (this->cutoffs[startHour] &  (cVar0 << android::icu::impl::DayPeriodRules_S_CutoffType::AFTER->ordinal())) <= 0 )
		goto label_cond_83;
label_cond_46:
	hour = ( startHour + 0x1);
	//    .local v0, "hour":I
label_goto_48:
	if ( hour != startHour )
		goto label_cond_6a;
	cVar1 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FROM/AFTER cutoffs must have a matching BEFORE cutoff.")));
	// throw
	throw cVar1;
	// 619    .line 163
	// 620    .end local v0    # "hour":I
label_cond_53:
	if ( startHour != 0xc )
		goto label_cond_61;
	if ( this->period != android::icu::impl::DayPeriodRules_S_DayPeriod::NOON )
		goto label_cond_61;
	android::icu::impl::DayPeriodRules::-set1(rule, cVar0);
	goto label_goto_28;
	// 637    .line 166
label_cond_61:
	cVar2 = std::make_shared<android::icu::util::ICUException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AT cutoff must only be set for 0:00 or 12:00.")));
	// throw
	throw cVar2;
	// 647    .line 179
	// 648    .restart local v0    # "hour":I
label_cond_6a:
	if ( hour != 0x19 )
		goto label_cond_6f;
	hour = 0x0;
label_cond_6f:
	if ( (this->cutoffs[hour] &  (cVar0 << android::icu::impl::DayPeriodRules_S_CutoffType::BEFORE->ordinal())) <= 0 )
		goto label_cond_86;
	android::icu::impl::DayPeriodRules::-wrap1(rule, startHour, hour, this->period);
	//    .end local v0    # "hour":I
label_cond_83:
	startHour = ( startHour + 0x1);
	goto label_goto_a;
	// 686    .line 173
	// 687    .restart local v0    # "hour":I
label_cond_86:
	hour = ( hour + 0x1);
	goto label_goto_48;
	// 693    .line 187
	// 694    .end local v0    # "hour":I
label_cond_89:
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::impl::DayPeriodRules_S_DayPeriodRulesDataSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i;
	int j;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v0, "dayPeriodData":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v1, "i":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_4c;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("locales")))) )  
		goto label_cond_39;
	//    .local v3, "locales":Landroid/icu/impl/UResource$Table;
	j = 0x0;
	//    .local v2, "j":I
label_goto_19:
	if ( !(value->getTable()->getKeyAndValue(j, key, value)) )  
		goto label_cond_49;
	//    .local v5, "setNum":I
	this->data->localesToRuleSetNumMap->put(key->toString(), java::lang::Integer::valueOf(android::icu::impl::DayPeriodRules::-wrap0(value->getString())));
	j = ( j + 0x1);
	goto label_goto_19;
	// 781    .line 94
	// 782    .end local v2    # "j":I
	// 783    .end local v3    # "locales":Landroid/icu/impl/UResource$Table;
	// 784    .end local v5    # "setNum":I
label_cond_39:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("rules")))) )  
		goto label_cond_49;
	//    .local v4, "rules":Landroid/icu/impl/UResource$Table;
	this->processRules(value->getTable(), key, value);
	//    .end local v4    # "rules":Landroid/icu/impl/UResource$Table;
label_cond_49:
	i = ( i + 0x1);
	goto label_goto_5;
	// 810    .line 99
label_cond_4c:
	return;

}


