// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.text.DateIntervalFormat_S_BestMatchInfo.h"
#include "android.icu.text.DateIntervalInfo_S_DateIntervalSink.h"
#include "android.icu.text.DateIntervalInfo_S_PatternInfo.h"
#include "android.icu.text.DateIntervalInfo.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.ICUException.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.Collection.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashMap.h"
#include "java.util.LinkedHashSet.h"
#include "java.util.Locale.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"

static android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER;
static android::icu::text::DateIntervalInfo::CALENDAR_KEY = nullptr;
static android::icu::text::DateIntervalInfo::DIICACHE;
static android::icu::text::DateIntervalInfo::EARLIEST_FIRST_PREFIX = nullptr;
static android::icu::text::DateIntervalInfo::FALLBACK_STRING = nullptr;
static android::icu::text::DateIntervalInfo::INTERVAL_FORMATS_KEY = nullptr;
static android::icu::text::DateIntervalInfo::LATEST_FIRST_PREFIX = nullptr;
static android::icu::text::DateIntervalInfo::MINIMUM_SUPPORTED_CALENDAR_FIELD = 0xd;
static android::icu::text::DateIntervalInfo::currentSerialVersion = 0x1;
static android::icu::text::DateIntervalInfo::serialVersionUID = 0x1L;
// .method static synthetic -get0()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateIntervalInfo::_get0()
{
	
	return android::icu::text::DateIntervalInfo::CALENDAR_KEY;

}
// .method static synthetic -get1()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateIntervalInfo::_get1()
{
	
	return android::icu::text::DateIntervalInfo::INTERVAL_FORMATS_KEY;

}
// .method static synthetic -get2(Landroid/icu/text/DateIntervalInfo;)Ljava/util/Map;
std::shared_ptr<java::util::Map> android::icu::text::DateIntervalInfo::_get2(std::shared_ptr<android::icu::text::DateIntervalInfo> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/DateIntervalInfo;
	return _this->fIntervalPatterns;

}
// .method static synthetic -wrap0(Landroid/icu/text/DateIntervalInfo;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/DateIntervalInfo$PatternInfo;
std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> android::icu::text::DateIntervalInfo::_wrap0(std::shared_ptr<android::icu::text::DateIntervalInfo> _this,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::lang::String> lrgDiffCalUnit,std::shared_ptr<java::lang::String> intervalPattern)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/DateIntervalInfo;
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "lrgDiffCalUnit"    # Ljava/lang/String;
	//    .param p3, "intervalPattern"    # Ljava/lang/String;
	return _this->setIntervalPatternInternally(skeleton, lrgDiffCalUnit, intervalPattern);

}
// .method static constructor <clinit>()V
void android::icu::text::DateIntervalInfo::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	std::shared_ptr<android::icu::impl::SimpleCache> cVar1;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x18);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("G"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("y"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("M"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("w"));
	cVar0[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("W"));
	cVar0[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("d"));
	cVar0[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("D"));
	cVar0[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("E"));
	cVar0[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("F"));
	cVar0[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("a"));
	cVar0[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("h"));
	cVar0[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("H"));
	cVar0[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("m"));
	cVar0[0xd] = std::make_shared<java::lang::String>(std::make_shared<char[]>("s"));
	cVar0[0xe] = std::make_shared<java::lang::String>(std::make_shared<char[]>("S"));
	cVar0[0xf] = std::make_shared<java::lang::String>(std::make_shared<char[]>("z"));
	cVar0[0x10] = std::make_shared<java::lang::String>(std::make_shared<char[]>(" "));
	cVar0[0x11] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Y"));
	cVar0[0x12] = std::make_shared<java::lang::String>(std::make_shared<char[]>("e"));
	cVar0[0x13] = std::make_shared<java::lang::String>(std::make_shared<char[]>("u"));
	cVar0[0x14] = std::make_shared<java::lang::String>(std::make_shared<char[]>("g"));
	cVar0[0x15] = std::make_shared<java::lang::String>(std::make_shared<char[]>("A"));
	cVar0[0x16] = std::make_shared<java::lang::String>(std::make_shared<char[]>(" "));
	cVar0[0x17] = std::make_shared<java::lang::String>(std::make_shared<char[]>(" "));
	android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER = cVar0;
	android::icu::text::DateIntervalInfo::CALENDAR_KEY = std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar"));
	android::icu::text::DateIntervalInfo::INTERVAL_FORMATS_KEY = std::make_shared<java::lang::String>(std::make_shared<char[]>("intervalFormats"));
	android::icu::text::DateIntervalInfo::FALLBACK_STRING = std::make_shared<java::lang::String>(std::make_shared<char[]>("fallback"));
	android::icu::text::DateIntervalInfo::LATEST_FIRST_PREFIX = std::make_shared<java::lang::String>(std::make_shared<char[]>("latestFirst:"));
	android::icu::text::DateIntervalInfo::EARLIEST_FIRST_PREFIX = std::make_shared<java::lang::String>(std::make_shared<char[]>("earliestFirst:"));
	cVar1 = std::make_shared<android::icu::impl::SimpleCache>();
	android::icu::text::DateIntervalInfo::DIICACHE = cVar1;
	return;

}
// .method public constructor <init>()V
android::icu::text::DateIntervalInfo::DateIntervalInfo()
{
	
	bool cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 334    .end annotation
	cVar0 = 0x0;
	// 340    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fFirstDateInPtnIsLaterDate = cVar0;
	this->fIntervalPatterns = 0x0;
	this->frozen = cVar0;
	this->fIntervalPatternsReadOnly = cVar0;
	cVar1 = std::make_shared<java::util::HashMap>();
	this->fIntervalPatterns = cVar1;
	this->fFallbackIntervalPattern = std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} \u2013 {1}"));
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::DateIntervalInfo::DateIntervalInfo(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	bool cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	// 380    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fFirstDateInPtnIsLaterDate = cVar0;
	this->fIntervalPatterns = 0x0;
	this->frozen = cVar0;
	this->fIntervalPatternsReadOnly = cVar0;
	this->initializeData(locale);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::text::DateIntervalInfo::DateIntervalInfo(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	android::icu::text::DateIntervalInfo::(android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method private static cloneIntervalPatterns(Ljava/util/Map;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>>> android::icu::text::DateIntervalInfo::cloneIntervalPatterns(std::shared_ptr<java::util::Map<java::lang::String,java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>>> patterns)
{
	
	std::shared_ptr<java::util::HashMap> result;
	std::shared_ptr<java::util::Iterator> skeletonEntry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> skeletonEntry;
	std::shared_ptr<java::lang::String> skeleton;
	std::shared_ptr<java::util::Map> patternsOfOneSkeleton;
	std::shared_ptr<java::util::HashMap> oneSetPtn;
	std::shared_ptr<java::util::Iterator> calEntry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> calEntry;
	std::shared_ptr<java::lang::String> calField;
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> value;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 422        value = {
	// 423            "(",
	// 424            "Ljava/util/Map",
	// 425            "<",
	// 426            "Ljava/lang/String;",
	// 427            "Ljava/util/Map",
	// 428            "<",
	// 429            "Ljava/lang/String;",
	// 430            "Landroid/icu/text/DateIntervalInfo$PatternInfo;",
	// 431            ">;>;)",
	// 432            "Ljava/util/Map",
	// 433            "<",
	// 434            "Ljava/lang/String;",
	// 435            "Ljava/util/Map",
	// 436            "<",
	// 437            "Ljava/lang/String;",
	// 438            "Landroid/icu/text/DateIntervalInfo$PatternInfo;",
	// 439            ">;>;"
	// 440        }
	// 441    .end annotation
	//    .local p0, "patterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;>;"
	result = std::make_shared<java::util::HashMap>();
	//    .local v5, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;>;"
	skeletonEntry_S_iterator = patterns->entrySet()->iterator();
	//    .local v8, "skeletonEntry$iterator":Ljava/util/Iterator;
label_goto_d:
	if ( !(skeletonEntry_S_iterator->hasNext()) )  
		goto label_cond_52;
	skeletonEntry = skeletonEntry_S_iterator->next();
	skeletonEntry->checkCast("java::util::Map_S_Entry");
	//    .local v7, "skeletonEntry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;>;"
	skeleton = skeletonEntry->getKey();
	skeleton->checkCast("java::lang::String");
	//    .local v6, "skeleton":Ljava/lang/String;
	patternsOfOneSkeleton = skeletonEntry->getValue();
	patternsOfOneSkeleton->checkCast("java::util::Map");
	//    .local v4, "patternsOfOneSkeleton":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	oneSetPtn = std::make_shared<java::util::HashMap>();
	//    .local v3, "oneSetPtn":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	calEntry_S_iterator = patternsOfOneSkeleton->entrySet()->iterator();
	//    .local v1, "calEntry$iterator":Ljava/util/Iterator;
label_goto_32:
	if ( !(calEntry_S_iterator->hasNext()) )  
		goto label_cond_4e;
	calEntry = calEntry_S_iterator->next();
	calEntry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "calEntry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	calField = calEntry->getKey();
	calField->checkCast("java::lang::String");
	//    .local v2, "calField":Ljava/lang/String;
	value = calEntry->getValue();
	value->checkCast("android::icu::text::DateIntervalInfo_S_PatternInfo");
	//    .local v9, "value":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	oneSetPtn->put(calField, value);
	goto label_goto_32;
	// 542    .line 966
	// 543    .end local v0    # "calEntry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	// 544    .end local v2    # "calField":Ljava/lang/String;
	// 545    .end local v9    # "value":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_cond_4e:
	result->put(skeleton, oneSetPtn);
	goto label_goto_d;
	// 551    .line 968
	// 552    .end local v1    # "calEntry$iterator":Ljava/util/Iterator;
	// 553    .end local v3    # "oneSetPtn":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	// 554    .end local v4    # "patternsOfOneSkeleton":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	// 555    .end local v6    # "skeleton":Ljava/lang/String;
	// 556    .end local v7    # "skeletonEntry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;>;"
label_cond_52:
	return result;

}
// .method private cloneUnfrozenDII()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DateIntervalInfo::cloneUnfrozenDII()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar0;
	std::shared_ptr<android::icu::text::DateIntervalInfo> other;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	other = this->clone();
	other->checkCast("android::icu::text::DateIntervalInfo");
	//    .local v1, "other":Landroid/icu/text/DateIntervalInfo;
	other->fFallbackIntervalPattern = this->fFallbackIntervalPattern;
	other->fFirstDateInPtnIsLaterDate = this->fFirstDateInPtnIsLaterDate;
	if ( !(this->fIntervalPatternsReadOnly) )  
		goto label_cond_1d;
	other->fIntervalPatterns = this->fIntervalPatterns;
	other->fIntervalPatternsReadOnly = 0x1;
label_goto_19:
	other->frozen = 0x0;
	return other;
	// 608    .line 942
label_cond_1d:
	other->fIntervalPatterns = android::icu::text::DateIntervalInfo::cloneIntervalPatterns(this->fIntervalPatterns);
	other->fIntervalPatternsReadOnly = 0x0;
	//label_try_end_28:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_29;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_28} :catch_29
	goto label_goto_19;
	// 627    .line 947
	// 628    .end local v1    # "other":Landroid/icu/text/DateIntervalInfo;
label_catch_29:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar0 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("clone is not supported")), getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public static genPatternInfo(Ljava/lang/String;Z)Landroid/icu/text/DateIntervalInfo$PatternInfo;
std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> android::icu::text::DateIntervalInfo::genPatternInfo(std::shared_ptr<java::lang::String> intervalPattern,bool laterDateFirst)
{
	
	int splitPoint;
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> cVar0;
	
	//    .param p0, "intervalPattern"    # Ljava/lang/String;
	//    .param p1, "laterDateFirst"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 648    .end annotation
	splitPoint = android::icu::text::DateIntervalInfo::splitPatternInto2Part(intervalPattern);
	//    .local v2, "splitPoint":I
	//    .local v0, "firstPart":Ljava/lang/String;
	//    .local v1, "secondPart":Ljava/lang/String;
	if ( splitPoint >= intervalPattern->length() )
		goto label_cond_18;
	//    .end local v1    # "secondPart":Ljava/lang/String;
label_cond_18:
	cVar0 = std::make_shared<android::icu::text::DateIntervalInfo_S_PatternInfo>(intervalPattern->substring(0x0, splitPoint), 0x0, laterDateFirst);
	return cVar0;

}
// .method private initializeData(Landroid/icu/util/ULocale;)V
void android::icu::text::DateIntervalInfo::initializeData(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<android::icu::text::DateIntervalInfo> dii;
	std::shared_ptr<android::icu::text::DateIntervalInfo> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	key = locale->toString();
	//    .local v1, "key":Ljava/lang/String;
	dii = android::icu::text::DateIntervalInfo::DIICACHE->get(key);
	dii->checkCast("android::icu::text::DateIntervalInfo");
	//    .local v0, "dii":Landroid/icu/text/DateIntervalInfo;
	if ( dii )     
		goto label_cond_24;
	this->setup(locale);
	this->fIntervalPatternsReadOnly = 0x1;
	cVar0 = this->clone();
	cVar0->checkCast("android::icu::text::DateIntervalInfo");
	android::icu::text::DateIntervalInfo::DIICACHE->put(key, cVar0->freeze());
label_goto_23:
	return;
	// 746    .line 387
label_cond_24:
	this->initializeFromReadOnlyPatterns(dii);
	goto label_goto_23;

}
// .method private initializeFromReadOnlyPatterns(Landroid/icu/text/DateIntervalInfo;)V
void android::icu::text::DateIntervalInfo::initializeFromReadOnlyPatterns(std::shared_ptr<android::icu::text::DateIntervalInfo> dii)
{
	
	//    .param p1, "dii"    # Landroid/icu/text/DateIntervalInfo;
	this->fFallbackIntervalPattern = dii->fFallbackIntervalPattern;
	this->fFirstDateInPtnIsLaterDate = dii->fFirstDateInPtnIsLaterDate;
	this->fIntervalPatterns = dii->fIntervalPatterns;
	this->fIntervalPatternsReadOnly = 0x1;
	return;

}
// .method static parseSkeleton(Ljava/lang/String;[I)V
void android::icu::text::DateIntervalInfo::parseSkeleton(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<int[]> skeletonFieldWidth)
{
	
	int i;
	int cVar0;
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	//    .param p1, "skeletonFieldWidth"    # [I
	0x41;
	//    .local v0, "PATTERN_CHAR_BASE":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_3:
	if ( i >= skeleton->length() )
		goto label_cond_18;
	cVar0 = ( skeleton->charAt(i) + -0x41);
	skeletonFieldWidth[cVar0] = ( skeletonFieldWidth[cVar0] + 0x1);
	i = ( i + 0x1);
	goto label_goto_3;
	// 821    .line 1013
label_cond_18:
	return;

}
// .method private setIntervalPattern(Ljava/lang/String;Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;)V
void android::icu::text::DateIntervalInfo::setIntervalPattern(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::lang::String> lrgDiffCalUnit,std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> ptnInfo)
{
	
	std::shared_ptr<java::util::Map> patternsOfOneSkeleton;
	
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "lrgDiffCalUnit"    # Ljava/lang/String;
	//    .param p3, "ptnInfo"    # Landroid/icu/text/DateIntervalInfo$PatternInfo;
	patternsOfOneSkeleton = this->fIntervalPatterns->get(skeleton);
	patternsOfOneSkeleton->checkCast("java::util::Map");
	//    .local v0, "patternsOfOneSkeleton":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	patternsOfOneSkeleton->put(lrgDiffCalUnit, ptnInfo);
	return;

}
// .method private setIntervalPatternInternally(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/icu/text/DateIntervalInfo$PatternInfo;
std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> android::icu::text::DateIntervalInfo::setIntervalPatternInternally(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::lang::String> lrgDiffCalUnit,std::shared_ptr<java::lang::String> cVar0)
{
	
	std::shared_ptr<java::util::Map> patternsOfOneSkeleton;
	std::shared_ptr<java::util::HashMap> patternsOfOneSkeleton;
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::Object> itvPtnInfo;
	
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "lrgDiffCalUnit"    # Ljava/lang/String;
	//    .param p3, "intervalPattern"    # Ljava/lang/String;
	patternsOfOneSkeleton = this->fIntervalPatterns->get(skeleton);
	patternsOfOneSkeleton->checkCast("java::util::Map");
	//    .local v4, "patternsOfOneSkeleton":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	//    .local v1, "emptyHash":Z
	if ( patternsOfOneSkeleton )     
		goto label_cond_11;
	//    .end local v4    # "patternsOfOneSkeleton":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	patternsOfOneSkeleton = std::make_shared<java::util::HashMap>();
	//    .restart local v4    # "patternsOfOneSkeleton":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
label_cond_11:
	//    .local v3, "order":Z
	if ( !(cVar0->startsWith(android::icu::text::DateIntervalInfo::LATEST_FIRST_PREFIX)) )  
		goto label_cond_39;
	//    .local v3, "order":Z
	//    .local v5, "prefixLength":I
	cVar0 = cVar0->substring(android::icu::text::DateIntervalInfo::LATEST_FIRST_PREFIX->length(), cVar0->length());
	//    .end local v3    # "order":Z
	//    .end local v5    # "prefixLength":I
label_cond_2a:
label_goto_2a:
	itvPtnInfo = android::icu::text::DateIntervalInfo::genPatternInfo(cVar0, this->fFirstDateInPtnIsLaterDate);
	//    .local v2, "itvPtnInfo":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	patternsOfOneSkeleton->put(lrgDiffCalUnit, itvPtnInfo);
	if ( !(0x0) )  
		goto label_cond_38;
	this->fIntervalPatterns->put(skeleton, patternsOfOneSkeleton);
label_cond_38:
	return itvPtnInfo;
	// 944    .line 778
	// 945    .end local v2    # "itvPtnInfo":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	// 946    .local v3, "order":Z
label_cond_39:
	if ( !(cVar0->startsWith(android::icu::text::DateIntervalInfo::EARLIEST_FIRST_PREFIX)) )  
		goto label_cond_2a;
	//    .local v3, "order":Z
	//    .local v0, "earliestFirstLength":I
	cVar0 = cVar0->substring(android::icu::text::DateIntervalInfo::EARLIEST_FIRST_PREFIX->length(), cVar0->length());
	goto label_goto_2a;

}
// .method private setup(Landroid/icu/util/ULocale;)V
void android::icu::text::DateIntervalInfo::setup(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::lang::String> calendarTypeToUse;
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_DateIntervalSink> sink;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> resource;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::HashSet> loadedCalendarTypes;
	std::shared_ptr<android::icu::util::ICUException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::Object> calendarTypeToUse;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .local v0, "DEFAULT_HASH_SIZE":I
	cVar0 = std::make_shared<java::util::HashMap>(0x13);
	this->fIntervalPatterns = cVar0;
	this->fFallbackIntervalPattern = std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} \u2013 {1}"));
	try {
	//label_try_start_e:
	calendarTypeToUse = locale->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar")));
	//    .local v1, "calendarTypeToUse":Ljava/lang/String;
	if ( calendarTypeToUse )     
		goto label_cond_22;
	//    .local v6, "preferredCalendarTypes":[Ljava/lang/String;
	calendarTypeToUse = android::icu::util::Calendar::getKeywordValuesForLocale(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar")), locale, 0x1)[0x0];
	//    .end local v6    # "preferredCalendarTypes":[Ljava/lang/String;
label_cond_22:
	if ( calendarTypeToUse )     
		goto label_cond_27;
	calendarTypeToUse = std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"));
label_cond_27:
	sink = std::make_shared<android::icu::text::DateIntervalInfo_S_DateIntervalSink>(this);
	//    .local v8, "sink":Landroid/icu/text/DateIntervalInfo$DateIntervalSink;
	resource = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), locale);
	resource->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v7, "resource":Landroid/icu/impl/ICUResourceBundle;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "fallbackPattern":Ljava/lang/String;
	this->setFallbackIntervalPattern(resource->getStringWithFallback(cVar1->append(android::icu::text::DateIntervalInfo::CALENDAR_KEY)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(calendarTypeToUse)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(android::icu::text::DateIntervalInfo::INTERVAL_FORMATS_KEY)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(android::icu::text::DateIntervalInfo::FALLBACK_STRING)->toString()));
	loadedCalendarTypes = std::make_shared<java::util::HashSet>();
	//    .local v4, "loadedCalendarTypes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_goto_75:
	if ( !(calendarTypeToUse) )  
		goto label_cond_98;
	if ( !(loadedCalendarTypes->contains(calendarTypeToUse)) )  
		goto label_cond_99;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<android::icu::util::ICUException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Loop in calendar type fallback: ")))->append(calendarTypeToUse)->toString());
	// throw
	throw cVar2;
	// 1160    .line 610
	// 1161    .end local v1    # "calendarTypeToUse":Ljava/lang/String;
	// 1162    .end local v3    # "fallbackPattern":Ljava/lang/String;
	// 1163    .end local v4    # "loadedCalendarTypes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1164    .end local v7    # "resource":Landroid/icu/impl/ICUResourceBundle;
	// 1165    .end local v8    # "sink":Landroid/icu/text/DateIntervalInfo$DateIntervalSink;
label_catch_97:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_98:
	return;
	// 1173    .line 601
	// 1174    .restart local v1    # "calendarTypeToUse":Ljava/lang/String;
	// 1175    .restart local v3    # "fallbackPattern":Ljava/lang/String;
	// 1176    .restart local v4    # "loadedCalendarTypes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1177    .restart local v7    # "resource":Landroid/icu/impl/ICUResourceBundle;
	// 1178    .restart local v8    # "sink":Landroid/icu/text/DateIntervalInfo$DateIntervalSink;
label_cond_99:
	loadedCalendarTypes->add(calendarTypeToUse);
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	//    .local v5, "pathToIntervalFormats":Ljava/lang/String;
	resource->getAllItemsWithFallback(cVar4->append(android::icu::text::DateIntervalInfo::CALENDAR_KEY)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(calendarTypeToUse)->toString(), sink);
	//label_try_end_bc:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_97;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_e .. :try_end_bc} :catch_97
	calendarTypeToUse = sink->getAndResetNextCalendarType();
	goto label_goto_75;

}
// .method private static splitPatternInto2Part(Ljava/lang/String;)I
int android::icu::text::DateIntervalInfo::splitPatternInto2Part(std::shared_ptr<java::lang::String> intervalPattern)
{
	
	int cVar0;
	int inQuote;
	int prevCh;
	int count;
	std::shared<std::vector<int[]>> patternRepeated;
	int i;
	int ch;
	
	//    .param p0, "intervalPattern"    # Ljava/lang/String;
	cVar0 = 0x27;
	inQuote = 0x0;
	//    .local v5, "inQuote":Z
	prevCh = 0x0;
	//    .local v7, "prevCh":C
	count = 0x0;
	//    .local v2, "count":I
	patternRepeated = std::make_shared<std::vector<int[]>>(0x3a);
	//    .local v6, "patternRepeated":[I
	0x41;
	//    .local v0, "PATTERN_CHAR_BASE":I
	0x0;
	//    .local v3, "foundRepetition":Z
	i = 0x0;
	//    .end local v5    # "inQuote":Z
	//    .end local v7    # "prevCh":C
	//    .local v4, "i":I
label_goto_d:
	if ( i >= intervalPattern->length() )
		goto label_cond_3f;
	ch = intervalPattern->charAt(i);
	//    .local v1, "ch":C
	if ( ch == prevCh )
		goto label_cond_27;
	if ( count <= 0 )
		goto label_cond_27;
	//    .local v8, "repeated":I
	if ( patternRepeated[( prevCh + -0x41)] )     
		goto label_cond_3e;
	patternRepeated[( prevCh + -0x41)] = 0x1;
	count = 0x0;
	//    .end local v8    # "repeated":I
label_cond_27:
	if ( ch != cVar0 )
		goto label_cond_50;
	if ( ( i + 0x1) >= intervalPattern->length() )
		goto label_cond_4d;
	if ( intervalPattern->charAt(( i + 0x1)) != cVar0 )
		goto label_cond_4d;
	i = ( i + 0x1);
label_cond_3b:
label_goto_3b:
	i = ( i + 0x1);
	goto label_goto_d;
	// 1330    .line 649
	// 1331    .restart local v8    # "repeated":I
label_cond_3e:
	//    .end local v1    # "ch":C
	//    .end local v8    # "repeated":I
label_cond_3f:
	if ( count <= 0 )
		goto label_cond_4a;
	if ( 0x1 )     
		goto label_cond_4a;
	if ( patternRepeated[( prevCh + -0x41)] )     
		goto label_cond_4a;
	count = 0x0;
label_cond_4a:
	return (i - count);
	// 1359    .line 661
	// 1360    .restart local v1    # "ch":C
label_cond_4d:
	//    .local v5, "inQuote":Z
	goto label_goto_3b;
	// 1367    .line 664
	// 1368    .end local v5    # "inQuote":Z
label_cond_50:
	if ( inQuote )     
		goto label_cond_3b;
	if ( ch <  0x61 )
		goto label_cond_5e;
	if ( ch >  0x7a )
		goto label_cond_5e;
label_goto_5a:
	prevCh = ch;
	//    .local v7, "prevCh":C
	count = ( count + 0x1);
	goto label_goto_3b;
	// 1390    .line 665
	// 1391    .end local v7    # "prevCh":C
label_cond_5e:
	if ( ch <  0x41 )
		goto label_cond_3b;
	if ( ch >  0x5a )
		goto label_cond_3b;
	goto label_goto_5a;

}
// .method private static stringNumeric(IIC)Z
bool android::icu::text::DateIntervalInfo::stringNumeric(int fieldWidth,int anotherFieldWidth,char patternLetter)
{
	
	int cVar0;
	
	//    .param p0, "fieldWidth"    # I
	//    .param p1, "anotherFieldWidth"    # I
	//    .param p2, "patternLetter"    # C
	cVar0 = 0x2;
	if ( patternLetter != 0x4d )
		goto label_cond_f;
	if ( fieldWidth >  cVar0 )
		goto label_cond_b;
	if ( anotherFieldWidth <= cVar0 )
		goto label_cond_b;
label_cond_9:
	return 0x1;
	// 1429    .line 1033
label_cond_b:
	if ( fieldWidth <= cVar0 )
		goto label_cond_f;
	if ( anotherFieldWidth <= cVar0 )
		goto label_cond_9;
label_cond_f:
	return 0x0;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DateIntervalInfo::clone()
{
	
	if ( !(this->frozen) )  
		goto label_cond_5;
	return this;
	// 1456    .line 924
label_cond_5:
	return this->cloneUnfrozenDII();

}
// .method public cloneAsThawed()Landroid/icu/text/DateIntervalInfo;
std::shared_ptr<android::icu::text::DateIntervalInfo> android::icu::text::DateIntervalInfo::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::text::DateIntervalInfo> result;
	
	result = this->cloneUnfrozenDII();
	result->checkCast("android::icu::text::DateIntervalInfo");
	//    .local v0, "result":Landroid/icu/text/DateIntervalInfo;
	return result;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::DateIntervalInfo::equals(std::shared_ptr<java::lang::Object> a)
{
	
	std::shared_ptr<android::icu::text::DateIntervalInfo> dtInfo;
	
	//    .param p1, "a"    # Ljava/lang/Object;
	if ( !(a->instanceOf("android::icu::text::DateIntervalInfo")) )  
		goto label_cond_10;
	dtInfo = a;
	dtInfo->checkCast("android::icu::text::DateIntervalInfo");
	//    .local v0, "dtInfo":Landroid/icu/text/DateIntervalInfo;
	return this->fIntervalPatterns->equals(dtInfo->fIntervalPatterns);
	// 1520    .line 1133
	// 1521    .end local v0    # "dtInfo":Landroid/icu/text/DateIntervalInfo;
label_cond_10:
	return 0x0;

}
// .method public freeze()Landroid/icu/text/DateIntervalInfo;
std::shared_ptr<android::icu::text::DateIntervalInfo> android::icu::text::DateIntervalInfo::freeze()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	this->fIntervalPatternsReadOnly = cVar0;
	this->frozen = cVar0;
	return this;

}
// .method getBestSkeleton(Ljava/lang/String;)Landroid/icu/text/DateIntervalFormat$BestMatchInfo;
std::shared_ptr<android::icu::text::DateIntervalFormat_S_BestMatchInfo> android::icu::text::DateIntervalInfo::getBestSkeleton(std::shared_ptr<java::lang::String> cVar0)
{
	
	std::shared<std::vector<int[]>> inputSkeletonFieldWidth;
	auto skeletonFieldWidth;
	std::shared_ptr<java::lang::Object> cVar0;
	int bestDistance;
	std::shared_ptr<java::util::Iterator> skeleton_S_iterator;
	std::shared_ptr<java::lang::String> skeleton;
	int i;
	int distance;
	int inputFieldWidth;
	int fieldWidth;
	int bestFieldDifference;
	std::shared_ptr<android::icu::text::DateIntervalFormat_S_BestMatchInfo> cVar1;
	
	//    .param p1, "inputSkeleton"    # Ljava/lang/String;
	//    .local v8, "bestSkeleton":Ljava/lang/String;
	inputSkeletonFieldWidth = std::make_shared<std::vector<int[]>>(0x3a);
	//    .local v14, "inputSkeletonFieldWidth":[I
	skeletonFieldWidth = std::make_shared<std::vector<int[]>>(0x3a);
	//    .local v18, "skeletonFieldWidth":[I
	0x1000;
	//    .local v4, "DIFFERENT_FIELD":I
	0x100;
	//    .local v5, "STRING_NUMERIC_DIFFERENCE":I
	0x41;
	//    .local v3, "BASE":I
	//    .local v15, "replaceZWithV":Z
	if ( cVar0->indexOf(0x7a) == -0x1 )
		goto label_cond_38;
	cVar0 = cVar0->replace(0x7a, 0x76);
label_cond_38:
	android::icu::text::DateIntervalInfo::parseSkeleton(cVar0, inputSkeletonFieldWidth);
	bestDistance = 0x7fffffff;
	//    .local v6, "bestDistance":I
	//    .local v7, "bestFieldDifference":I
	skeleton_S_iterator = this->fIntervalPatterns->keySet()->iterator();
	//    .local v17, "skeleton$iterator":Ljava/util/Iterator;
label_cond_4f:
	if ( !(skeleton_S_iterator->hasNext()) )  
		goto label_cond_b6;
	skeleton = skeleton_S_iterator->next();
	skeleton->checkCast("java::lang::String");
	//    .local v16, "skeleton":Ljava/lang/String;
	i = 0x0;
	//    .local v12, "i":I
label_goto_5c:
	if ( i >= skeletonFieldWidth->size() )
		goto label_cond_6c;
	skeletonFieldWidth[i] = 0x0;
	i = ( i + 0x1);
	goto label_goto_5c;
	// 1705    .line 1085
label_cond_6c:
	android::icu::text::DateIntervalInfo::parseSkeleton(skeleton, skeletonFieldWidth);
	distance = 0x0;
	//    .local v9, "distance":I
	//    .local v10, "fieldDifference":I
	i = 0x0;
label_goto_76:
	if ( i >= inputSkeletonFieldWidth->size() )
		goto label_cond_ad;
	inputFieldWidth = inputSkeletonFieldWidth[i];
	//    .local v13, "inputFieldWidth":I
	fieldWidth = skeletonFieldWidth[i];
	//    .local v11, "fieldWidth":I
	if ( inputFieldWidth != fieldWidth )
		goto label_cond_86;
label_goto_83:
	i = ( i + 0x1);
	goto label_goto_76;
	// 1750    .line 1095
label_cond_86:
	if ( inputFieldWidth )     
		goto label_cond_8c;
	-0x1;
	distance = ( distance + 0x1000);
	goto label_goto_83;
	// 1762    .line 1098
label_cond_8c:
	if ( fieldWidth )     
		goto label_cond_92;
	-0x1;
	distance = ( distance + 0x1000);
	goto label_goto_83;
	// 1774    .line 1102
label_cond_92:
	if ( !(android::icu::text::DateIntervalInfo::stringNumeric(inputFieldWidth, fieldWidth, (char)(( i + 0x41)))) )  
		goto label_cond_a4;
	distance = ( distance + 0x100);
	goto label_goto_83;
	// 1798    .line 1105
label_cond_a4:
	distance = (distance + java::lang::Math::abs((inputFieldWidth - fieldWidth)));
	goto label_goto_83;
	// 1810    .line 1108
	// 1811    .end local v11    # "fieldWidth":I
	// 1812    .end local v13    # "inputFieldWidth":I
label_cond_ad:
	if ( distance >= bestDistance )
		goto label_cond_b3;
	bestDistance = distance;
	0x1;
label_cond_b3:
	if ( distance )     
		goto label_cond_4f;
	bestFieldDifference = 0x0;
	//    .end local v9    # "distance":I
	//    .end local v10    # "fieldDifference":I
	//    .end local v12    # "i":I
	//    .end local v16    # "skeleton":Ljava/lang/String;
label_cond_b6:
	if ( !(0x0) )  
		goto label_cond_bf;
	if ( bestFieldDifference == -0x1 )
		goto label_cond_bf;
label_cond_bf:
	var87 = cVar1(cVar0, 0x0);
	return cVar1;

}
// .method public getDefaultOrder()Z
bool android::icu::text::DateIntervalInfo::getDefaultOrder()
{
	
	return this->fFirstDateInPtnIsLaterDate;

}
// .method public getFallbackIntervalPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateIntervalInfo::getFallbackIntervalPattern()
{
	
	return this->fFallbackIntervalPattern;

}
// .method public getIntervalPattern(Ljava/lang/String;I)Landroid/icu/text/DateIntervalInfo$PatternInfo;
std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> android::icu::text::DateIntervalInfo::getIntervalPattern(std::shared_ptr<java::lang::String> skeleton,int field)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::util::Map> patternsOfOneSkeleton;
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> intervalPattern;
	
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "field"    # I
	if ( field <= 0xd )
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("no support for field less than SECOND")));
	// throw
	throw cVar0;
	// 1902    .line 847
label_cond_e:
	patternsOfOneSkeleton = this->fIntervalPatterns->get(skeleton);
	patternsOfOneSkeleton->checkCast("java::util::Map");
	//    .local v1, "patternsOfOneSkeleton":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	if ( !(patternsOfOneSkeleton) )  
		goto label_cond_25;
	intervalPattern = patternsOfOneSkeleton->get(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[field]);
	intervalPattern->checkCast("android::icu::text::DateIntervalInfo_S_PatternInfo");
	//    .local v0, "intervalPattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	if ( !(intervalPattern) )  
		goto label_cond_25;
	return intervalPattern;
	// 1935    .line 855
	// 1936    .end local v0    # "intervalPattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_cond_25:
	return 0x0;

}
// .method public getPatterns()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::util::Set<java::lang::String>>> android::icu::text::DateIntervalInfo::getPatterns()
{
	
	std::shared_ptr<java::util::LinkedHashMap> result;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::util::LinkedHashSet> cVar1;
	std::shared_ptr<java::util::Map> cVar2;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1944        value = {
	// 1945            "()",
	// 1946            "Ljava/util/Map",
	// 1947            "<",
	// 1948            "Ljava/lang/String;",
	// 1949            "Ljava/util/Set",
	// 1950            "<",
	// 1951            "Ljava/lang/String;",
	// 1952            ">;>;"
	// 1953        }
	// 1954    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1957    .end annotation
	result = std::make_shared<java::util::LinkedHashMap>();
	//    .local v2, "result":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	entry_S_iterator = this->fIntervalPatterns->entrySet()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
label_goto_f:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_34;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;>;"
	cVar0 = entry->getKey();
	cVar0->checkCast("java::lang::String");
	cVar2 = entry->getValue();
	cVar2->checkCast("java::util::Map");
	cVar1 = std::make_shared<java::util::LinkedHashSet>(cVar2->keySet());
	result->put(cVar0, cVar1);
	goto label_goto_f;
	// 2017    .line 1155
	// 2018    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;>;"
label_cond_34:
	return result;

}
// .method public getRawPatterns()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>>> android::icu::text::DateIntervalInfo::getRawPatterns()
{
	
	std::shared_ptr<java::util::LinkedHashMap> result;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::util::LinkedHashMap> cVar1;
	std::shared_ptr<java::util::Map> cVar2;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2026        value = {
	// 2027            "()",
	// 2028            "Ljava/util/Map",
	// 2029            "<",
	// 2030            "Ljava/lang/String;",
	// 2031            "Ljava/util/Map",
	// 2032            "<",
	// 2033            "Ljava/lang/String;",
	// 2034            "Landroid/icu/text/DateIntervalInfo$PatternInfo;",
	// 2035            ">;>;"
	// 2036        }
	// 2037    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2040    .end annotation
	result = std::make_shared<java::util::LinkedHashMap>();
	//    .local v2, "result":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;>;"
	entry_S_iterator = this->fIntervalPatterns->entrySet()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
label_goto_f:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_30;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;>;"
	cVar0 = entry->getKey();
	cVar0->checkCast("java::lang::String");
	cVar2 = entry->getValue();
	cVar2->checkCast("java::util::Map");
	cVar1 = std::make_shared<java::util::LinkedHashMap>(cVar2);
	result->put(cVar0, cVar1);
	goto label_goto_f;
	// 2096    .line 1170
	// 2097    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;>;"
label_cond_30:
	return result;

}
// .method public hashCode()I
int android::icu::text::DateIntervalInfo::hashCode()
{
	
	return this->fIntervalPatterns->hashCode();

}
// .method public isFrozen()Z
bool android::icu::text::DateIntervalInfo::isFrozen()
{
	
	return this->frozen;

}
// .method public setFallbackIntervalPattern(Ljava/lang/String;)V
void android::icu::text::DateIntervalInfo::setFallbackIntervalPattern(std::shared_ptr<java::lang::String> fallbackPattern)
{
	
	int cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	int firstPatternIndex;
	int secondPatternIndex;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "fallbackPattern"    # Ljava/lang/String;
	cVar0 = -0x1;
	if ( !(this->frozen) )  
		goto label_cond_e;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("no modification is allowed after DII is frozen")));
	// throw
	throw cVar1;
	// 2147    .line 889
label_cond_e:
	firstPatternIndex = fallbackPattern->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0}")));
	//    .local v0, "firstPatternIndex":I
	secondPatternIndex = fallbackPattern->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("{1}")));
	//    .local v1, "secondPatternIndex":I
	if ( firstPatternIndex == cVar0 )
		goto label_cond_20;
	if ( secondPatternIndex != cVar0 )
		goto label_cond_29;
label_cond_20:
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("no pattern {0} or pattern {1} in fallbackPattern")));
	// throw
	throw cVar2;
	// 2179    .line 894
label_cond_29:
	if ( firstPatternIndex <= secondPatternIndex )
		goto label_cond_2e;
	this->fFirstDateInPtnIsLaterDate = 0x1;
label_cond_2e:
	this->fFallbackIntervalPattern = fallbackPattern;
	return;

}
// .method public setIntervalPattern(Ljava/lang/String;ILjava/lang/String;)V
void android::icu::text::DateIntervalInfo::setIntervalPattern(std::shared_ptr<java::lang::String> skeleton,int lrgDiffCalUnit,std::shared_ptr<java::lang::String> intervalPattern)
{
	
	int cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> ptnInfo;
	
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "lrgDiffCalUnit"    # I
	//    .param p3, "intervalPattern"    # Ljava/lang/String;
	cVar0 = 0x5;
	if ( !(this->frozen) )  
		goto label_cond_e;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("no modification is allowed after DII is frozen")));
	// throw
	throw cVar1;
	// 2219    .line 724
label_cond_e:
	if ( lrgDiffCalUnit <= 0xd )
		goto label_cond_1b;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar field is larger than MINIMUM_SUPPORTED_CALENDAR_FIELD")));
	// throw
	throw cVar2;
	// 2234    .line 727
label_cond_1b:
	if ( !(this->fIntervalPatternsReadOnly) )  
		goto label_cond_2a;
	this->fIntervalPatterns = android::icu::text::DateIntervalInfo::cloneIntervalPatterns(this->fIntervalPatterns);
	this->fIntervalPatternsReadOnly = 0x0;
label_cond_2a:
	ptnInfo = this->setIntervalPatternInternally(skeleton, android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[lrgDiffCalUnit], intervalPattern);
	//    .local v0, "ptnInfo":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	if ( lrgDiffCalUnit != 0xb )
		goto label_cond_49;
	this->setIntervalPattern(skeleton, android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0x9], ptnInfo);
	this->setIntervalPattern(skeleton, android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0xa], ptnInfo);
label_cond_48:
label_goto_48:
	return;
	// 2296    .line 741
label_cond_49:
	if ( lrgDiffCalUnit == cVar0 )
		goto label_cond_4e;
	if ( lrgDiffCalUnit != 0x7 )
		goto label_cond_48;
label_cond_4e:
	this->setIntervalPattern(skeleton, android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[cVar0], ptnInfo);
	goto label_goto_48;

}


