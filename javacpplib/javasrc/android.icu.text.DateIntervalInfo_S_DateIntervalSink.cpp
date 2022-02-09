// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalInfo$DateIntervalSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.DateIntervalInfo_S_DateIntervalSink.h"
#include "android.icu.text.DateIntervalInfo_S_PatternInfo.h"
#include "android.icu.text.DateIntervalInfo.h"
#include "android.icu.util.ICUException.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Map.h"

static android::icu::text::DateIntervalInfo_S_DateIntervalSink::ACCEPTED_PATTERN_LETTERS = std::make_shared<java::lang::String>("yMdahHms");
static android::icu::text::DateIntervalInfo_S_DateIntervalSink::DATE_INTERVAL_PATH_PREFIX;
static android::icu::text::DateIntervalInfo_S_DateIntervalSink::DATE_INTERVAL_PATH_SUFFIX;
// .method static constructor <clinit>()V
void android::icu::text::DateIntervalInfo_S_DateIntervalSink::static_cinit()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	android::icu::text::DateIntervalInfo_S_DateIntervalSink::DATE_INTERVAL_PATH_PREFIX = cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/LOCALE/")))->append(android::icu::text::DateIntervalInfo::-get0({const[class].FS-Param}))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->toString();
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	android::icu::text::DateIntervalInfo_S_DateIntervalSink::DATE_INTERVAL_PATH_SUFFIX = cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(android::icu::text::DateIntervalInfo::-get1({const[class].FS-Param}))->toString();
	return;

}
// .method public constructor <init>(Landroid/icu/text/DateIntervalInfo;)V
android::icu::text::DateIntervalInfo_S_DateIntervalSink::DateIntervalInfo_S_DateIntervalSink(std::shared_ptr<android::icu::text::DateIntervalInfo> dateIntervalInfo)
{
	
	//    .param p1, "dateIntervalInfo"    # Landroid/icu/text/DateIntervalInfo;
	// 104    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	this->dateIntervalInfo = dateIntervalInfo;
	return;

}
// .method private getCalendarTypeFromPath(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateIntervalInfo_S_DateIntervalSink::getCalendarTypeFromPath(std::shared_ptr<java::lang::String> path)
{
	
	std::shared_ptr<android::icu::util::ICUException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "path"    # Ljava/lang/String;
	if ( !(path->startsWith(android::icu::text::DateIntervalInfo_S_DateIntervalSink::DATE_INTERVAL_PATH_PREFIX)) )  
		goto label_cond_26;
	if ( !(path->endsWith(android::icu::text::DateIntervalInfo_S_DateIntervalSink::DATE_INTERVAL_PATH_SUFFIX)) )  
		goto label_cond_26;
	return path->substring(android::icu::text::DateIntervalInfo_S_DateIntervalSink::DATE_INTERVAL_PATH_PREFIX->length(), (path->length() -  android::icu::text::DateIntervalInfo_S_DateIntervalSink::DATE_INTERVAL_PATH_SUFFIX->length()));
	// 164    .line 513
label_cond_26:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::util::ICUException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Malformed \'intervalFormat\' alias path: ")))->append(path)->toString());
	// throw
	throw cVar0;

}
// .method private setIntervalPatternIfAbsent(Ljava/lang/String;Ljava/lang/String;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::DateIntervalInfo_S_DateIntervalSink::setIntervalPatternIfAbsent(std::shared_ptr<java::lang::String> currentSkeleton,std::shared_ptr<java::lang::String> lrgDiffCalUnit,std::shared_ptr<android::icu::impl::UResource_S_Value> intervalPattern)
{
	
	std::shared_ptr<java::util::Map> patternsOfOneSkeleton;
	
	//    .param p1, "currentSkeleton"    # Ljava/lang/String;
	//    .param p2, "lrgDiffCalUnit"    # Ljava/lang/String;
	//    .param p3, "intervalPattern"    # Landroid/icu/impl/UResource$Value;
	patternsOfOneSkeleton = android::icu::text::DateIntervalInfo::-get2(this->dateIntervalInfo)->get(currentSkeleton);
	patternsOfOneSkeleton->checkCast("java::util::Map");
	//    .local v0, "patternsOfOneSkeleton":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	if ( !(patternsOfOneSkeleton) )  
		goto label_cond_16;
	if ( !(( patternsOfOneSkeleton->containsKey(lrgDiffCalUnit) ^ 0x1)) )  
		goto label_cond_1f;
label_cond_16:
	android::icu::text::DateIntervalInfo::-wrap0(this->dateIntervalInfo, currentSkeleton, lrgDiffCalUnit, intervalPattern->toString());
label_cond_1f:
	return;

}
// .method private validateAndProcessPatternLetter(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;
std::shared_ptr<java::lang::CharSequence> android::icu::text::DateIntervalInfo_S_DateIntervalSink::validateAndProcessPatternLetter(std::shared_ptr<java::lang::CharSequence> cVar2)
{
	
	std::shared_ptr<java::lang::CharSequence> cVar0;
	int cVar1;
	int letter;
	std::shared_ptr<java::lang::CharSequence> cVar2;
	
	//    .param p1, "patternLetter"    # Ljava/lang/CharSequence;
	cVar0 = 0x0;
	cVar1 = 0x0;
	if ( cVar2->length() == 0x1 )
		goto label_cond_a;
	return cVar0;
	// 260    .line 526
label_cond_a:
	letter = cVar2->charAt(cVar1);
	//    .local v0, "letter":C
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("yMdahHms"))->indexOf(letter) >= 0 )
		goto label_cond_18;
	return cVar0;
	// 279    .line 532
label_cond_18:
	if ( letter != android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0xb]->charAt(cVar1) )
		goto label_cond_2a;
	cVar2 = android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0xa];
label_cond_2a:
	return cVar2;

}
// .method public getAndResetNextCalendarType()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateIntervalInfo_S_DateIntervalSink::getAndResetNextCalendarType()
{
	
	//    .local v0, "tmpCalendarType":Ljava/lang/String;
	this->nextCalendarType = 0x0;
	return this->nextCalendarType;

}
// .method public processSkeletonTable(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;)V
void android::icu::text::DateIntervalInfo_S_DateIntervalSink::processSkeletonTable(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value)
{
	
	int k;
	std::shared_ptr<java::lang::CharSequence> patternLetter;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .local v0, "currentSkeleton":Ljava/lang/String;
	//    .local v3, "patternData":Landroid/icu/impl/UResource$Table;
	k = 0x0;
	//    .local v1, "k":I
label_goto_9:
	if ( !(value->getTable()->getKeyAndValue(k, key, value)) )  
		goto label_cond_25;
	if ( value->getType() )     
		goto label_cond_22;
	patternLetter = this->validateAndProcessPatternLetter(key);
	//    .local v4, "patternLetter":Ljava/lang/CharSequence;
	if ( !(patternLetter) )  
		goto label_cond_22;
	//    .local v2, "lrgDiffCalUnit":Ljava/lang/String;
	this->setIntervalPatternIfAbsent(key->toString(), patternLetter->toString(), value);
	//    .end local v2    # "lrgDiffCalUnit":Ljava/lang/String;
	//    .end local v4    # "patternLetter":Ljava/lang/CharSequence;
label_cond_22:
	k = ( k + 0x1);
	goto label_goto_9;
	// 386    .line 484
label_cond_25:
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::text::DateIntervalInfo_S_DateIntervalSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int cVar0;
	int i;
	int j;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	cVar0 = 0x2;
	//    .local v0, "dateIntervalData":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v1, "i":I
label_goto_6:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_2a;
	if ( key->contentEquals(android::icu::text::DateIntervalInfo::-get1({const[class].FS-Param})) )     
		goto label_cond_19;
label_cond_16:
	i = ( i + 0x1);
	goto label_goto_6;
	// 434    .line 445
label_cond_19:
	if ( value->getType() != 0x3 )
		goto label_cond_2b;
	this->nextCalendarType = this->getCalendarTypeFromPath(value->getAliasString());
label_cond_2a:
	return;
	// 459    .line 450
label_cond_2b:
	if ( value->getType() != cVar0 )
		goto label_cond_16;
	//    .local v3, "skeletonData":Landroid/icu/impl/UResource$Table;
	j = 0x0;
	//    .local v2, "j":I
label_goto_36:
	if ( !(value->getTable()->getKeyAndValue(j, key, value)) )  
		goto label_cond_2a;
	if ( value->getType() != cVar0 )
		goto label_cond_45;
	this->processSkeletonTable(key, value);
label_cond_45:
	j = ( j + 0x1);
	goto label_goto_36;

}


