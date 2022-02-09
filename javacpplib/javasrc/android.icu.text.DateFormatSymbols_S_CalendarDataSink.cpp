// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormatSymbols$CalendarDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DateFormatSymbols_S_CalendarDataSink_S_AliasType.h"
#include "android.icu.text.DateFormatSymbols_S_CalendarDataSink.h"
#include "android.icu.util.ICUException.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"

static android::icu::text::DateFormatSymbols_S_CalendarDataSink::_assertionsDisabled;
static android::icu::text::DateFormatSymbols_S_CalendarDataSink::CALENDAR_ALIAS_PREFIX = std::make_shared<java::lang::String>("/LOCALE/calendar/");
// .method static constructor <clinit>()V
void android::icu::text::DateFormatSymbols_S_CalendarDataSink::static_cinit()
{
	
	android::icu::text::DateFormatSymbols_S_CalendarDataSink::_assertionsDisabled = ( android::icu::text::DateFormatSymbols_S_CalendarDataSink()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method constructor <init>()V
android::icu::text::DateFormatSymbols_S_CalendarDataSink::DateFormatSymbols_S_CalendarDataSink()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::util::TreeMap> cVar1;
	std::shared_ptr<java::util::TreeMap> cVar2;
	std::shared_ptr<java::util::ArrayList> cVar3;
	
	cVar0 = 0x0;
	// 113    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	cVar1 = std::make_shared<java::util::TreeMap>();
	this->arrays = cVar1;
	cVar2 = std::make_shared<java::util::TreeMap>();
	this->maps = cVar2;
	cVar3 = std::make_shared<java::util::ArrayList>();
	this->aliasPathPairs = cVar3;
	this->currentCalendarType = cVar0;
	this->nextCalendarType = cVar0;
	return;

}
// .method private processAliasFromValue(Ljava/lang/String;Landroid/icu/impl/UResource$Value;)Landroid/icu/text/DateFormatSymbols$CalendarDataSink$AliasType;
std::shared_ptr<android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType> android::icu::text::DateFormatSymbols_S_CalendarDataSink::processAliasFromValue(std::shared_ptr<java::lang::String> currentRelativePath,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	std::shared_ptr<java::lang::String> aliasPath;
	int typeLimit;
	std::shared_ptr<java::lang::Object> aliasCalendarType;
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "currentRelativePath"    # Ljava/lang/String;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	if ( value->getType() != 0x3 )
		goto label_cond_a6;
	aliasPath = value->getAliasString();
	//    .local v1, "aliasPath":Ljava/lang/String;
	if ( !(aliasPath->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("/LOCALE/calendar/")))) )  
		goto label_cond_8c;
	if ( aliasPath->length() <= std::make_shared<java::lang::String>(std::make_shared<char[]>("/LOCALE/calendar/"))->length() )
		goto label_cond_8c;
	typeLimit = aliasPath->indexOf(0x2f, std::make_shared<java::lang::String>(std::make_shared<char[]>("/LOCALE/calendar/"))->length());
	//    .local v2, "typeLimit":I
	if ( typeLimit <= std::make_shared<java::lang::String>(std::make_shared<char[]>("/LOCALE/calendar/"))->length() )
		goto label_cond_8c;
	aliasCalendarType = aliasPath->substring(std::make_shared<java::lang::String>(std::make_shared<char[]>("/LOCALE/calendar/"))->length(), typeLimit);
	//    .local v0, "aliasCalendarType":Ljava/lang/String;
	this->aliasRelativePath = aliasPath->substring(( typeLimit + 0x1));
	if ( !(this->currentCalendarType->equals(aliasCalendarType)) )  
		goto label_cond_5f;
	if ( !(( currentRelativePath->equals(this->aliasRelativePath) ^ 0x1)) )  
		goto label_cond_5f;
	return android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::SAME_CALENDAR;
	// 259    .line 1779
label_cond_5f:
	if ( this->currentCalendarType->equals(aliasCalendarType) )     
		goto label_cond_8c;
	if ( !(currentRelativePath->equals(this->aliasRelativePath)) )  
		goto label_cond_8c;
	if ( !(aliasCalendarType->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian")))) )  
		goto label_cond_7b;
	return android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::GREGORIAN;
	// 293    .line 1784
label_cond_7b:
	if ( !(this->nextCalendarType) )  
		goto label_cond_87;
	if ( !(this->nextCalendarType->equals(aliasCalendarType)) )  
		goto label_cond_8c;
label_cond_87:
	this->nextCalendarType = aliasCalendarType;
	return android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::DIFFERENT_CALENDAR;
	// 316    .line 1791
	// 317    .end local v0    # "aliasCalendarType":Ljava/lang/String;
	// 318    .end local v2    # "typeLimit":I
label_cond_8c:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::util::ICUException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Malformed \'calendar\' alias. Path: ")))->append(aliasPath)->toString());
	// throw
	throw cVar0;
	// 344    .line 1793
	// 345    .end local v1    # "aliasPath":Ljava/lang/String;
label_cond_a6:
	return android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::NONE;

}
// .method preEnumerate(Ljava/lang/String;)V
void android::icu::text::DateFormatSymbols_S_CalendarDataSink::preEnumerate(std::shared_ptr<java::lang::String> calendarType)
{
	
	//    .param p1, "calendarType"    # Ljava/lang/String;
	this->currentCalendarType = calendarType;
	this->nextCalendarType = 0x0;
	this->aliasPathPairs->clear();
	return;

}
// .method protected processResource(Ljava/lang/String;Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::DateFormatSymbols_S_CalendarDataSink::processResource(std::shared_ptr<java::lang::String> path,std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	std::shared_ptr<java::util::Map> stringMap;
	int i;
	std::shared_ptr<java::lang::Object> keyString;
	std::shared_ptr<java::util::HashMap> stringMap;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::String> currentPath;
	auto aliasType;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	
	//    .param p1, "path"    # Ljava/lang/String;
	//    .param p2, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p3, "value"    # Landroid/icu/impl/UResource$Value;
	//    .local v6, "table":Landroid/icu/impl/UResource$Table;
	stringMap = 0x0;
	//    .local v5, "stringMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	i = 0x0;
	//    .end local v5    # "stringMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	//    .local v3, "i":I
label_goto_6:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_e1;
	if ( !(key->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("%variant")))) )  
		goto label_cond_18;
label_cond_15:
label_goto_15:
	i = ( i + 0x1);
	goto label_goto_6;
	// 421    .line 1706
label_cond_18:
	keyString = key->toString();
	//    .local v4, "keyString":Ljava/lang/String;
	if ( value->getType() )     
		goto label_cond_42;
	if ( i )     
		goto label_cond_2e;
	stringMap = std::make_shared<java::util::HashMap>();
	//    .local v5, "stringMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	this->maps->put(path, stringMap);
	//    .end local v5    # "stringMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_2e:
	if ( android::icu::text::DateFormatSymbols_S_CalendarDataSink::_assertionsDisabled )     
		goto label_cond_3a;
	if ( stringMap )     
		goto label_cond_3a;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 464    .line 1716
label_cond_3a:
	stringMap->put(keyString, value->getString());
	goto label_goto_15;
	// 474    .line 1719
label_cond_42:
	if ( android::icu::text::DateFormatSymbols_S_CalendarDataSink::_assertionsDisabled )     
		goto label_cond_4e;
	if ( !(stringMap) )  
		goto label_cond_4e;
	cVar1 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar1;
	// 488    .line 1721
label_cond_4e:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	currentPath = cVar2->append(path)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(keyString)->toString();
	//    .local v1, "currentPath":Ljava/lang/String;
	if ( !(currentPath->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("cyclicNameSets")))) )  
		goto label_cond_8e;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("cyclicNameSets/years/format/abbreviated"))->startsWith(currentPath) )     
		goto label_cond_8e;
	if ( !(( std::make_shared<java::lang::String>(std::make_shared<char[]>("cyclicNameSets/zodiacs/format/abbreviated"))->startsWith(currentPath) ^ 0x1)) )  
		goto label_cond_8e;
	if ( ( std::make_shared<java::lang::String>(std::make_shared<char[]>("cyclicNameSets/dayParts/format/abbreviated"))->startsWith(currentPath) ^ 0x1) )     
		goto label_cond_15;
label_cond_8e:
	if ( this->arrays->containsKey(currentPath) )     
		goto label_cond_15;
	if ( this->maps->containsKey(currentPath) )     
		goto label_cond_15;
	aliasType = this->processAliasFromValue(currentPath, value);
	//    .local v0, "aliasType":Landroid/icu/text/DateFormatSymbols$CalendarDataSink$AliasType;
	if ( aliasType != android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::SAME_CALENDAR )
		goto label_cond_b4;
	this->aliasPathPairs->add(this->aliasRelativePath);
	this->aliasPathPairs->add(currentPath);
	goto label_goto_15;
	// 600    .line 1741
label_cond_b4:
	if ( android::icu::text::DateFormatSymbols_S_CalendarDataSink::_assertionsDisabled )     
		goto label_cond_c2;
	if ( aliasType == android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::NONE )
		goto label_cond_c2;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 616    .line 1744
label_cond_c2:
	if ( value->getType() != 0x8 )
		goto label_cond_d5;
	//    .local v2, "dataArray":[Ljava/lang/String;
	this->arrays->put(currentPath, value->getStringArray());
	goto label_goto_15;
	// 639    .line 1748
	// 640    .end local v2    # "dataArray":[Ljava/lang/String;
label_cond_d5:
	if ( value->getType() != 0x2 )
		goto label_cond_15;
	this->processResource(currentPath, key, value);
	goto label_goto_15;
	// 655    .line 1753
	// 656    .end local v0    # "aliasType":Landroid/icu/text/DateFormatSymbols$CalendarDataSink$AliasType;
	// 657    .end local v1    # "currentPath":Ljava/lang/String;
	// 658    .end local v4    # "keyString":Ljava/lang/String;
label_cond_e1:
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::DateFormatSymbols_S_CalendarDataSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::util::Set> resourcesToVisitNext;
	int i;
	std::shared_ptr<java::lang::String> keyString;
	auto aliasType;
	std::shared_ptr<java::util::HashSet> resourcesToVisitNext;
	int mod;
	std::shared_ptr<java::lang::String> alias;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<std::vector<java::lang::String>> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	std::shared_ptr<java::util::Map> cVar4;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	if ( android::icu::text::DateFormatSymbols_S_CalendarDataSink::_assertionsDisabled )     
		goto label_cond_16;
	if ( !(this->currentCalendarType) )  
		goto label_cond_10;
	if ( !(this->currentCalendarType->isEmpty()) )  
		goto label_cond_16;
label_cond_10:
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 694    .line 1607
label_cond_16:
	resourcesToVisitNext = 0x0;
	//    .local v8, "resourcesToVisitNext":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .local v2, "calendarData":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .end local v8    # "resourcesToVisitNext":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .local v4, "i":I
label_goto_1c:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_fe;
	keyString = key->toString();
	//    .local v5, "keyString":Ljava/lang/String;
	aliasType = this->processAliasFromValue(keyString, value);
	//    .local v1, "aliasType":Landroid/icu/text/DateFormatSymbols$CalendarDataSink$AliasType;
	if ( aliasType != android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::GREGORIAN )
		goto label_cond_31;
label_cond_2e:
label_goto_2e:
	i = ( i + 0x1);
	goto label_goto_1c;
	// 741    .line 1620
label_cond_31:
	if ( aliasType != android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::DIFFERENT_CALENDAR )
		goto label_cond_42;
	if ( resourcesToVisitNext )     
		goto label_cond_3c;
	resourcesToVisitNext = std::make_shared<java::util::HashSet>();
label_cond_3c:
	resourcesToVisitNext->add(this->aliasRelativePath);
	goto label_goto_2e;
	// 763    .line 1629
label_cond_42:
	if ( aliasType != android::icu::text::DateFormatSymbols_S_CalendarDataSink_S_AliasType::SAME_CALENDAR )
		goto label_cond_65;
	if ( this->arrays->containsKey(keyString) )     
		goto label_cond_2e;
	if ( !(( this->maps->containsKey(keyString) ^ 0x1)) )  
		goto label_cond_2e;
	this->aliasPathPairs->add(this->aliasRelativePath);
	this->aliasPathPairs->add(keyString);
	goto label_goto_2e;
	// 802    .line 1640
label_cond_65:
	if ( !(this->resourcesToVisit) )  
		goto label_cond_88;
	if ( !(( this->resourcesToVisit->isEmpty() ^ 0x1)) )  
		goto label_cond_88;
	if ( !(( this->resourcesToVisit->contains(keyString) ^ 0x1)) )  
		goto label_cond_88;
	if ( ( keyString->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("AmPmMarkersAbbr"))) ^ 0x1) )     
		goto label_cond_2e;
label_cond_88:
	if ( !(keyString->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("AmPmMarkers")))) )  
		goto label_cond_ae;
	if ( keyString->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("%variant"))) )     
		goto label_cond_2e;
	if ( !(( this->arrays->containsKey(keyString) ^ 0x1)) )  
		goto label_cond_2e;
	//    .local v3, "dataArray":[Ljava/lang/String;
	this->arrays->put(keyString, value->getStringArray());
	goto label_goto_2e;
	// 882    .line 1649
	// 883    .end local v3    # "dataArray":[Ljava/lang/String;
label_cond_ae:
	if ( keyString->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("eras"))) )     
		goto label_cond_ed;
	if ( keyString->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayNames"))) )     
		goto label_cond_ed;
	if ( keyString->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("monthNames"))) )     
		goto label_cond_ed;
	if ( keyString->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("quarters"))) )     
		goto label_cond_ed;
	if ( keyString->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("dayPeriod"))) )     
		goto label_cond_ed;
	if ( keyString->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("monthPatterns"))) )     
		goto label_cond_ed;
	if ( !(keyString->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("cyclicNameSets")))) )  
		goto label_cond_2e;
label_cond_ed:
	this->processResource(keyString, key, value);
	goto label_goto_2e;
	// 959    .line 1682
	// 960    .end local v1    # "aliasType":Landroid/icu/text/DateFormatSymbols$CalendarDataSink$AliasType;
	// 961    .end local v5    # "keyString":Ljava/lang/String;
	// 962    .local v7, "modified":Z
label_cond_f2:
	if ( !(0x0) )  
		goto label_cond_165;
	if ( !(( this->aliasPathPairs->isEmpty() ^ 0x1)) )  
		goto label_cond_165;
	//    .end local v7    # "modified":Z
label_cond_fe:
	//    .restart local v7    # "modified":Z
	i = 0x0;
label_goto_100:
	if ( i >= this->aliasPathPairs->size() )
		goto label_cond_f2;
	mod = 0x0;
	//    .local v6, "mod":Z
	alias = this->aliasPathPairs->get(i);
	alias->checkCast("java::lang::String");
	//    .local v0, "alias":Ljava/lang/String;
	if ( !(this->arrays->containsKey(alias)) )  
		goto label_cond_141;
	cVar1 = this->aliasPathPairs->get(( i + 0x1));
	cVar1->checkCast("java::lang::String");
	cVar2 = this->arrays->get(alias);
	cVar2->checkCast("std::vector<java::lang::String>");
	this->arrays->put(cVar1, cVar2);
	mod = 0x1;
label_cond_131:
label_goto_131:
	if ( !(mod) )  
		goto label_cond_162;
	this->aliasPathPairs->remove(( i + 0x1));
	this->aliasPathPairs->remove(i);
	0x1;
	goto label_goto_100;
	// 1065    .line 1670
label_cond_141:
	if ( !(this->maps->containsKey(alias)) )  
		goto label_cond_131;
	cVar3 = this->aliasPathPairs->get(( i + 0x1));
	cVar3->checkCast("java::lang::String");
	cVar4 = this->maps->get(alias);
	cVar4->checkCast("java::util::Map");
	this->maps->put(cVar3, cVar4);
	mod = 0x1;
	goto label_goto_131;
	// 1103    .line 1679
label_cond_162:
	i = ( i + 0x2);
	goto label_goto_100;
	// 1109    .line 1685
	// 1110    .end local v0    # "alias":Ljava/lang/String;
	// 1111    .end local v6    # "mod":Z
label_cond_165:
	if ( !(resourcesToVisitNext) )  
		goto label_cond_169;
	this->resourcesToVisit = resourcesToVisitNext;
label_cond_169:
	return;

}
// .method visitAllResources()V
void android::icu::text::DateFormatSymbols_S_CalendarDataSink::visitAllResources()
{
	
	this->resourcesToVisit = 0x0;
	return;

}


