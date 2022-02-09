// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeUnitFormat$TimeUnitFormatSetupSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.MessageFormat.h"
#include "android.icu.text.TimeUnitFormat_S_TimeUnitFormatSetupSink.h"
#include "android.icu.util.TimeUnit.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"

// .method constructor <init>(Ljava/util/Map;ILjava/util/Set;Landroid/icu/util/ULocale;)V
android::icu::text::TimeUnitFormat_S_TimeUnitFormatSetupSink::TimeUnitFormat_S_TimeUnitFormatSetupSink(std::shared_ptr<java::util::Map<android::icu::util::TimeUnit,java::util::Map<java::lang::String,std::vector<java::lang::Object>>>> timeUnitToCountToPatterns,int style,std::shared_ptr<java::util::Set<java::lang::String>> pluralKeywords,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p2, "style"    # I
	//    .param p4, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 058        value = {
	// 059            "(",
	// 060            "Ljava/util/Map",
	// 061            "<",
	// 062            "Landroid/icu/util/TimeUnit;",
	// 063            "Ljava/util/Map",
	// 064            "<",
	// 065            "Ljava/lang/String;",
	// 066            "[",
	// 067            "Ljava/lang/Object;",
	// 068            ">;>;I",
	// 069            "Ljava/util/Set",
	// 070            "<",
	// 071            "Ljava/lang/String;",
	// 072            ">;",
	// 073            "Landroid/icu/util/ULocale;",
	// 074            ")V"
	// 075        }
	// 076    .end annotation
	//    .local p1, "timeUnitToCountToPatterns":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/util/TimeUnit;Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;>;"
	//    .local p3, "pluralKeywords":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 082    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	this->timeUnitToCountToPatterns = timeUnitToCountToPatterns;
	this->style = style;
	this->pluralKeywords = pluralKeywords;
	this->locale = locale;
	this->beenHere = 0x0;
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::TimeUnitFormat_S_TimeUnitFormatSetupSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int i;
	std::shared_ptr<java::lang::String> timeUnitName;
	std::shared_ptr<android::icu::util::TimeUnit> timeUnit;
	std::shared_ptr<java::util::Map> countToPatterns;
	std::shared_ptr<java::util::TreeMap> countToPatterns;
	int j;
	std::shared_ptr<java::lang::Object> pluralCount;
	std::shared_ptr<std::vector<java::lang::Object>> pair;
	std::shared<std::vector<std::vector<java::lang::Object>>> pair;
	std::shared_ptr<android::icu::text::MessageFormat> messageFormat;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	if ( !(this->beenHere) )  
		goto label_cond_5;
	return;
	// 122    .line 391
label_cond_5:
	this->beenHere = 0x1;
	//    .local v10, "units":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v2, "i":I
label_goto_d:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_c1;
	timeUnitName = key->toString();
	//    .local v9, "timeUnitName":Ljava/lang/String;
	0x0;
	//    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
	if ( !(timeUnitName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("year")))) )  
		goto label_cond_51;
	timeUnit = android::icu::util::TimeUnit::YEAR;
	//    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
label_goto_23:
	countToPatterns = this->timeUnitToCountToPatterns->get(timeUnit);
	countToPatterns->checkCast("java::util::Map");
	//    .local v0, "countToPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	if ( countToPatterns )     
		goto label_cond_37;
	//    .end local v0    # "countToPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	countToPatterns = std::make_shared<java::util::TreeMap>();
	//    .restart local v0    # "countToPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	this->timeUnitToCountToPatterns->put(timeUnit, countToPatterns);
label_cond_37:
	//    .local v1, "countsToPatternTable":Landroid/icu/impl/UResource$Table;
	j = 0x0;
	//    .local v3, "j":I
label_goto_3c:
	if ( !(value->getTable()->getKeyAndValue(j, key, value)) )  
		goto label_cond_bd;
	pluralCount = key->toString();
	//    .local v7, "pluralCount":Ljava/lang/String;
	if ( this->pluralKeywords->contains(pluralCount) )     
		goto label_cond_99;
label_cond_4e:
label_goto_4e:
	j = ( j + 0x1);
	goto label_goto_3c;
	// 234    .line 401
	// 235    .end local v0    # "countToPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	// 236    .end local v1    # "countsToPatternTable":Landroid/icu/impl/UResource$Table;
	// 237    .end local v3    # "j":I
	// 238    .end local v7    # "pluralCount":Ljava/lang/String;
	// 239    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
label_cond_51:
	if ( !(timeUnitName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("month")))) )  
		goto label_cond_5d;
	//    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
	goto label_goto_23;
	// 255    .line 403
	// 256    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
label_cond_5d:
	if ( !(timeUnitName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("day")))) )  
		goto label_cond_69;
	//    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
	goto label_goto_23;
	// 272    .line 405
	// 273    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
label_cond_69:
	if ( !(timeUnitName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("hour")))) )  
		goto label_cond_75;
	//    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
	goto label_goto_23;
	// 289    .line 407
	// 290    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
label_cond_75:
	if ( !(timeUnitName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("minute")))) )  
		goto label_cond_81;
	//    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
	goto label_goto_23;
	// 306    .line 409
	// 307    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
label_cond_81:
	if ( !(timeUnitName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("second")))) )  
		goto label_cond_8d;
	//    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
	goto label_goto_23;
	// 323    .line 411
	// 324    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
label_cond_8d:
	if ( !(timeUnitName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("week")))) )  
		goto label_cond_bd;
	//    .local v8, "timeUnit":Landroid/icu/util/TimeUnit;
	goto label_goto_23;
	// 340    .line 432
	// 341    .restart local v0    # "countToPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	// 342    .restart local v1    # "countsToPatternTable":Landroid/icu/impl/UResource$Table;
	// 343    .restart local v3    # "j":I
	// 344    .restart local v7    # "pluralCount":Ljava/lang/String;
label_cond_99:
	pair = countToPatterns->get(pluralCount);
	pair->checkCast("std::vector<java::lang::Object>");
	//    .local v5, "pair":[Ljava/lang/Object;
	if ( pair )     
		goto label_cond_a7;
	pair = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	countToPatterns->put(pluralCount, pair);
label_cond_a7:
	if ( pair[this->style] )     
		goto label_cond_4e;
	//    .local v6, "pattern":Ljava/lang/String;
	messageFormat = std::make_shared<android::icu::text::MessageFormat>(value->getString(), this->locale);
	//    .local v4, "messageFormat":Landroid/icu/text/MessageFormat;
	pair[this->style] = messageFormat;
	goto label_goto_4e;
	// 393    .line 395
	// 394    .end local v0    # "countToPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/Object;>;"
	// 395    .end local v1    # "countsToPatternTable":Landroid/icu/impl/UResource$Table;
	// 396    .end local v3    # "j":I
	// 397    .end local v4    # "messageFormat":Landroid/icu/text/MessageFormat;
	// 398    .end local v5    # "pair":[Ljava/lang/Object;
	// 399    .end local v6    # "pattern":Ljava/lang/String;
	// 400    .end local v7    # "pluralCount":Ljava/lang/String;
	// 401    .end local v8    # "timeUnit":Landroid/icu/util/TimeUnit;
label_cond_bd:
	i = ( i + 0x1);
	goto label_goto_d;
	// 407    .line 444
	// 408    .end local v9    # "timeUnitName":Ljava/lang/String;
label_cond_c1:
	return;

}


