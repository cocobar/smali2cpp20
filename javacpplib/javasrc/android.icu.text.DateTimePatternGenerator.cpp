// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.DateTimePatternGenerator_S_AppendItemFormatsSink.h"
#include "android.icu.text.DateTimePatternGenerator_S_AppendItemNamesSink.h"
#include "android.icu.text.DateTimePatternGenerator_S_AvailableFormatsSink.h"
#include "android.icu.text.DateTimePatternGenerator_S_DTPGflags.h"
#include "android.icu.text.DateTimePatternGenerator_S_DateTimeMatcher.h"
#include "android.icu.text.DateTimePatternGenerator_S_DayPeriodAllowedHoursSink.h"
#include "android.icu.text.DateTimePatternGenerator_S_DistanceInfo.h"
#include "android.icu.text.DateTimePatternGenerator_S_FormatParser.h"
#include "android.icu.text.DateTimePatternGenerator_S_PatternInfo.h"
#include "android.icu.text.DateTimePatternGenerator_S_PatternWithMatcher.h"
#include "android.icu.text.DateTimePatternGenerator_S_PatternWithSkeletonFlag.h"
#include "android.icu.text.DateTimePatternGenerator_S_SkeletonFields.h"
#include "android.icu.text.DateTimePatternGenerator_S_VariableField.h"
#include "android.icu.text.DateTimePatternGenerator.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.CharSequence.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.Arrays.h"
#include "java.util.BitSet.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.EnumSet.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashMap.h"
#include "java.util.LinkedHashSet.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"
#include "java.util.TreeSet.h"

static android::icu::text::DateTimePatternGenerator::CANONICAL_ITEMS;
static android::icu::text::DateTimePatternGenerator::CANONICAL_SET;
static android::icu::text::DateTimePatternGenerator::CLDR_FIELD_APPEND;
static android::icu::text::DateTimePatternGenerator::CLDR_FIELD_NAME;
static android::icu::text::DateTimePatternGenerator::DATE_MASK = 0x3ff;
static android::icu::text::DateTimePatternGenerator::DAY = 0x7;
static android::icu::text::DateTimePatternGenerator::DAYPERIOD = 0xa;
static android::icu::text::DateTimePatternGenerator::DAY_OF_WEEK_IN_MONTH = 0x9;
static android::icu::text::DateTimePatternGenerator::DAY_OF_YEAR = 0x8;
static android::icu::text::DateTimePatternGenerator::DEBUG = false;
static android::icu::text::DateTimePatternGenerator::DELTA = 0x10;
static android::icu::text::DateTimePatternGenerator::DTPNG_CACHE = nullptr;
static android::icu::text::DateTimePatternGenerator::ERA = 0x0;
static android::icu::text::DateTimePatternGenerator::EXTRA_FIELD = 0x10000;
static android::icu::text::DateTimePatternGenerator::FIELD_NAME;
static android::icu::text::DateTimePatternGenerator::FRACTIONAL_MASK = 0x4000;
static android::icu::text::DateTimePatternGenerator::FRACTIONAL_SECOND = 0xe;
static android::icu::text::DateTimePatternGenerator::HOUR = 0xb;
static android::icu::text::DateTimePatternGenerator::LAST_RESORT_ALLOWED_HOUR_FORMAT;
static android::icu::text::DateTimePatternGenerator::LOCALE_TO_ALLOWED_HOUR;
static android::icu::text::DateTimePatternGenerator::LONG = -0x103;
static android::icu::text::DateTimePatternGenerator::MATCH_ALL_FIELDS_LENGTH = 0xffff;
static android::icu::text::DateTimePatternGenerator::MATCH_HOUR_FIELD_LENGTH = 0x800;
static android::icu::text::DateTimePatternGenerator::MATCH_MINUTE_FIELD_LENGTH = 0x1000;
static android::icu::text::DateTimePatternGenerator::MATCH_NO_OPTIONS = 0x0;
static android::icu::text::DateTimePatternGenerator::MATCH_SECOND_FIELD_LENGTH = 0x2000;
static android::icu::text::DateTimePatternGenerator::MINUTE = 0xc;
static android::icu::text::DateTimePatternGenerator::MISSING_FIELD = 0x1000;
static android::icu::text::DateTimePatternGenerator::MONTH = 0x3;
static android::icu::text::DateTimePatternGenerator::NARROW = -0x101;
static android::icu::text::DateTimePatternGenerator::NONE = 0x0;
static android::icu::text::DateTimePatternGenerator::NUMERIC = 0x100;
static android::icu::text::DateTimePatternGenerator::QUARTER = 0x2;
static android::icu::text::DateTimePatternGenerator::SECOND = 0xd;
static android::icu::text::DateTimePatternGenerator::SECOND_AND_FRACTIONAL_MASK = 0x6000;
static android::icu::text::DateTimePatternGenerator::SHORT = -0x102;
static android::icu::text::DateTimePatternGenerator::TIME_MASK = 0xfc00;
static android::icu::text::DateTimePatternGenerator::TYPE_LIMIT = 0x10;
static android::icu::text::DateTimePatternGenerator::WEEKDAY = 0x6;
static android::icu::text::DateTimePatternGenerator::WEEK_OF_MONTH = 0x5;
static android::icu::text::DateTimePatternGenerator::WEEK_OF_YEAR = 0x4;
static android::icu::text::DateTimePatternGenerator::YEAR = 0x1;
static android::icu::text::DateTimePatternGenerator::ZONE = 0xf;
static android::icu::text::DateTimePatternGenerator::types;
// .method static synthetic -get0()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::_get0()
{
	
	return android::icu::text::DateTimePatternGenerator::CANONICAL_ITEMS;

}
// .method static synthetic -get1()[[I
int android::icu::text::DateTimePatternGenerator::_get1()
{
	
	return android::icu::text::DateTimePatternGenerator::types;

}
// .method static synthetic -wrap0(Landroid/icu/text/DateTimePatternGenerator;Ljava/lang/String;)Z
bool android::icu::text::DateTimePatternGenerator::_wrap0(std::shared_ptr<android::icu::text::DateTimePatternGenerator> _this,std::shared_ptr<java::lang::String> key)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/DateTimePatternGenerator;
	//    .param p1, "key"    # Ljava/lang/String;
	return _this->isAvailableFormatSet(key);

}
// .method static synthetic -wrap1(IC)C
char android::icu::text::DateTimePatternGenerator::_wrap1(int field,char reference)
{
	
	//    .param p0, "field"    # I
	//    .param p1, "reference"    # C
	return android::icu::text::DateTimePatternGenerator::getCanonicalChar(field, reference);

}
// .method static synthetic -wrap2(Landroid/icu/impl/UResource$Key;)I
int android::icu::text::DateTimePatternGenerator::_wrap2(std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	//    .param p0, "key"    # Landroid/icu/impl/UResource$Key;
	return android::icu::text::DateTimePatternGenerator::getCLDRFieldNumber(key);

}
// .method static synthetic -wrap3(Ljava/lang/String;Z)I
int android::icu::text::DateTimePatternGenerator::_wrap3(std::shared_ptr<java::lang::String> s,bool strict)
{
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "strict"    # Z
	return android::icu::text::DateTimePatternGenerator::getCanonicalIndex(s, strict);

}
// .method static synthetic -wrap4(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::_wrap4(int mask)
{
	
	//    .param p0, "mask"    # I
	return android::icu::text::DateTimePatternGenerator::showMask(mask);

}
// .method static synthetic -wrap5(Landroid/icu/text/DateTimePatternGenerator;Ljava/lang/String;)V
void android::icu::text::DateTimePatternGenerator::_wrap5(std::shared_ptr<android::icu::text::DateTimePatternGenerator> _this,std::shared_ptr<java::lang::String> key)
{
	
	//    .param p0, "-this"    # Landroid/icu/text/DateTimePatternGenerator;
	//    .param p1, "key"    # Ljava/lang/String;
	_this->setAvailableFormat(key);
	return;

}
// .method static constructor <clinit>()V
void android::icu::text::DateTimePatternGenerator::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared_ptr<java::util::HashMap> temp;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> suppData;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DayPeriodAllowedHoursSink> allowedHoursSink;
	std::shared_ptr<android::icu::impl::SimpleCache> cVar6;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar7;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar8;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar9;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar10;
	std::shared_ptr<java::util::HashSet> cVar11;
	std::shared<std::vector<int[][]>> cVar12;
	
	cVar0 = 0x4;
	cVar1 = 0xf;
	cVar2 = 0x3;
	cVar3 = 0x2;
	cVar4 = 0x1;
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar4);
	cVar5[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("H"));
	android::icu::text::DateTimePatternGenerator::LAST_RESORT_ALLOWED_HOUR_FORMAT = cVar5;
	temp = std::make_shared<java::util::HashMap>();
	//    .local v2, "temp":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;[Ljava/lang/String;>;"
	suppData = android::icu::impl::ICUResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("supplementalData")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
	suppData->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v1, "suppData":Landroid/icu/impl/ICUResourceBundle;
	allowedHoursSink = std::make_shared<android::icu::text::DateTimePatternGenerator_S_DayPeriodAllowedHoursSink>(temp, 0x0);
	//    .local v0, "allowedHoursSink":Landroid/icu/text/DateTimePatternGenerator$DayPeriodAllowedHoursSink;
	suppData->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("timeData")), allowedHoursSink);
	android::icu::text::DateTimePatternGenerator::LOCALE_TO_ALLOWED_HOUR = java::util::Collections::unmodifiableMap(temp);
	cVar6 = std::make_shared<android::icu::impl::SimpleCache>();
	android::icu::text::DateTimePatternGenerator::DTPNG_CACHE = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x10);
	cVar7[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Era"));
	cVar7[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Year"));
	cVar7[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Quarter"));
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Month"));
	cVar7[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Week"));
	cVar7[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
	cVar7[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Day-Of-Week"));
	cVar7[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Day"));
	cVar7[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
	cVar7[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
	cVar7[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
	cVar7[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Hour"));
	cVar7[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Minute"));
	cVar7[0xd] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Second"));
	cVar7[0xe] = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
	cVar7[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Timezone"));
	android::icu::text::DateTimePatternGenerator::CLDR_FIELD_APPEND = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x10);
	cVar8[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("era"));
	cVar8[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("year"));
	cVar8[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
	cVar8[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("month"));
	cVar8[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("week"));
	cVar8[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
	cVar8[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("weekday"));
	cVar8[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("day"));
	cVar8[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
	cVar8[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
	cVar8[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("dayperiod"));
	cVar8[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hour"));
	cVar8[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("minute"));
	cVar8[0xd] = std::make_shared<java::lang::String>(std::make_shared<char[]>("second"));
	cVar8[0xe] = std::make_shared<java::lang::String>(std::make_shared<char[]>("*"));
	cVar8[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zone"));
	android::icu::text::DateTimePatternGenerator::CLDR_FIELD_NAME = cVar8;
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x10);
	cVar9[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Era"));
	cVar9[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Year"));
	cVar9[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Quarter"));
	cVar9[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Month"));
	cVar9[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Week_in_Year"));
	cVar9[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Week_in_Month"));
	cVar9[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Weekday"));
	cVar9[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Day"));
	cVar9[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Day_Of_Year"));
	cVar9[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Day_of_Week_in_Month"));
	cVar9[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Dayperiod"));
	cVar9[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Hour"));
	cVar9[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Minute"));
	cVar9[0xd] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Second"));
	cVar9[0xe] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Fractional_Second"));
	cVar9[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Zone"));
	android::icu::text::DateTimePatternGenerator::FIELD_NAME = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	cVar10[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("G"));
	cVar10[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("y"));
	cVar10[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("Q"));
	cVar10[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("M"));
	cVar10[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("w"));
	cVar10[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("W"));
	cVar10[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("E"));
	cVar10[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("d"));
	cVar10[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("D"));
	cVar10[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("F"));
	cVar10[0xa] = std::make_shared<java::lang::String>(std::make_shared<char[]>("H"));
	cVar10[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("m"));
	cVar10[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("s"));
	cVar10[0xd] = std::make_shared<java::lang::String>(std::make_shared<char[]>("S"));
	cVar10[0xe] = std::make_shared<java::lang::String>(std::make_shared<char[]>("v"));
	android::icu::text::DateTimePatternGenerator::CANONICAL_ITEMS = cVar10;
	cVar11 = std::make_shared<java::util::HashSet>(java::util::Arrays::asList(android::icu::text::DateTimePatternGenerator::CANONICAL_ITEMS));
	android::icu::text::DateTimePatternGenerator::CANONICAL_SET = cVar11;
	cVar12 = std::make_shared<std::vector<int[][]>>(0x43);
	?;
	cVar12[0x0] = ?;
	?;
	cVar12[cVar4] = ?;
	?;
	cVar12[cVar3] = ?;
	?;
	cVar12[cVar2] = ?;
	?;
	cVar12[cVar0] = ?;
	?;
	cVar12[0x5] = ?;
	?;
	cVar12[0x6] = ?;
	?;
	cVar12[0x7] = ?;
	?;
	cVar12[0x8] = ?;
	?;
	cVar12[0x9] = ?;
	?;
	cVar12[0xa] = ?;
	?;
	cVar12[0xb] = ?;
	?;
	cVar12[0xc] = ?;
	?;
	cVar12[0xd] = ?;
	?;
	cVar12[0xe] = ?;
	?;
	cVar12[cVar1] = ?;
	?;
	cVar12[0x10] = ?;
	?;
	cVar12[0x11] = ?;
	?;
	cVar12[0x12] = ?;
	?;
	cVar12[0x13] = ?;
	?;
	cVar12[0x14] = ?;
	?;
	cVar12[0x15] = ?;
	?;
	cVar12[0x16] = ?;
	?;
	cVar12[0x17] = ?;
	?;
	cVar12[0x18] = ?;
	?;
	cVar12[0x19] = ?;
	?;
	cVar12[0x1a] = ?;
	?;
	cVar12[0x1b] = ?;
	?;
	cVar12[0x1c] = ?;
	?;
	cVar12[0x1d] = ?;
	?;
	cVar12[0x1e] = ?;
	?;
	cVar12[0x1f] = ?;
	?;
	cVar12[0x20] = ?;
	?;
	cVar12[0x21] = ?;
	?;
	cVar12[0x22] = ?;
	?;
	cVar12[0x23] = ?;
	?;
	cVar12[0x24] = ?;
	?;
	cVar12[0x25] = ?;
	?;
	cVar12[0x26] = ?;
	?;
	cVar12[0x27] = ?;
	?;
	cVar12[0x28] = ?;
	?;
	cVar12[0x29] = ?;
	?;
	cVar12[0x2a] = ?;
	?;
	cVar12[0x2b] = ?;
	?;
	cVar12[0x2c] = ?;
	?;
	cVar12[0x2d] = ?;
	?;
	cVar12[0x2e] = ?;
	?;
	cVar12[0x2f] = ?;
	?;
	cVar12[0x30] = ?;
	?;
	cVar12[0x31] = ?;
	?;
	cVar12[0x32] = ?;
	?;
	cVar12[0x33] = ?;
	?;
	cVar12[0x34] = ?;
	?;
	cVar12[0x35] = ?;
	?;
	cVar12[0x36] = ?;
	?;
	cVar12[0x37] = ?;
	?;
	cVar12[0x38] = ?;
	?;
	cVar12[0x39] = ?;
	?;
	cVar12[0x3a] = ?;
	?;
	cVar12[0x3b] = ?;
	?;
	cVar12[0x3c] = ?;
	?;
	cVar12[0x3d] = ?;
	?;
	cVar12[0x3e] = ?;
	?;
	cVar12[0x3f] = ?;
	?;
	cVar12[0x40] = ?;
	?;
	cVar12[0x41] = ?;
	?;
	cVar12[0x42] = ?;
	android::icu::text::DateTimePatternGenerator::types = cVar12;
	return;

}
// .method protected constructor <init>()V
android::icu::text::DateTimePatternGenerator::DateTimePatternGenerator()
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> cVar0;
	int cVar1;
	std::shared_ptr<java::util::TreeMap> cVar2;
	std::shared_ptr<java::util::TreeMap> cVar3;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> cVar4;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> cVar5;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> cVar6;
	std::shared_ptr<java::util::HashSet> cVar7;
	
	cVar0 = 0x0;
	cVar1 = 0x10;
	// 1752    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar2 = std::make_shared<java::util::TreeMap>();
	this->skeleton2pattern = cVar2;
	cVar3 = std::make_shared<java::util::TreeMap>();
	this->basePattern_pattern = cVar3;
	this->decimal = std::make_shared<java::lang::String>(std::make_shared<char[]>("?"));
	this->dateTimeFormat = std::make_shared<java::lang::String>(std::make_shared<char[]>("{1} {0}"));
	this->appendItemFormats = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	this->appendItemNames = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	this->defaultHourFormatChar = 0x48;
	this->frozen = 0x0;
	cVar4 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher>(cVar0);
	this->current = cVar4;
	cVar5 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_FormatParser>();
	this->fp = cVar5;
	cVar6 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_DistanceInfo>(cVar0);
	this->_distanceInfo = cVar6;
	cVar7 = std::make_shared<java::util::HashSet>(0x14);
	this->cldrAvailableFormatKeys = cVar7;
	return;

}
// .method private addCLDRData(Landroid/icu/text/DateTimePatternGenerator$PatternInfo;Landroid/icu/util/ULocale;)V
void android::icu::text::DateTimePatternGenerator::addCLDRData(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo,std::shared_ptr<android::icu::util::ULocale> uLocale)
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<java::lang::String> calendarTypeToUse;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink> appendItemFormatsSink;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_AppendItemNamesSink> appendItemNamesSink;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_AvailableFormatsSink> availableFormatsSink;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "returnInfo"    # Landroid/icu/text/DateTimePatternGenerator$PatternInfo;
	//    .param p2, "uLocale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), uLocale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v5, "rb":Landroid/icu/impl/ICUResourceBundle;
	calendarTypeToUse = this->getCalendarTypeToUse(uLocale);
	//    .local v3, "calendarTypeToUse":Ljava/lang/String;
	appendItemFormatsSink = std::make_shared<android::icu::text::DateTimePatternGenerator_S_AppendItemFormatsSink>(this, cVar0);
	//    .local v0, "appendItemFormatsSink":Landroid/icu/text/DateTimePatternGenerator$AppendItemFormatsSink;
	try {
	//label_try_start_13:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	rb->getAllItemsWithFallback(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/")))->append(calendarTypeToUse)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/appendItems")))->toString(), appendItemFormatsSink);
	//label_try_end_31:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_64;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_13 .. :try_end_31} :catch_64
label_goto_31:
	appendItemNamesSink = std::make_shared<android::icu::text::DateTimePatternGenerator_S_AppendItemNamesSink>(this, cVar0);
	//    .local v1, "appendItemNamesSink":Landroid/icu/text/DateTimePatternGenerator$AppendItemNamesSink;
	try {
	//label_try_start_36:
	rb->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("fields")), appendItemNamesSink);
	//label_try_end_3c:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_62;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_36 .. :try_end_3c} :catch_62
label_goto_3c:
	availableFormatsSink = std::make_shared<android::icu::text::DateTimePatternGenerator_S_AvailableFormatsSink>(this, returnInfo);
	//    .local v2, "availableFormatsSink":Landroid/icu/text/DateTimePatternGenerator$AvailableFormatsSink;
	try {
	//label_try_start_41:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	rb->getAllItemsWithFallback(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/")))->append(calendarTypeToUse)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/availableFormats")))->toString(), availableFormatsSink);
	//label_try_end_5f:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_60;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_41 .. :try_end_5f} :catch_60
label_goto_5f:
	return;
	// 1951    .line 298
label_catch_60:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "e":Ljava/util/MissingResourceException;
	goto label_goto_5f;
	// 1958    .line 289
	// 1959    .end local v2    # "availableFormatsSink":Landroid/icu/text/DateTimePatternGenerator$AvailableFormatsSink;
	// 1960    .end local v4    # "e":Ljava/util/MissingResourceException;
label_catch_62:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v4    # "e":Ljava/util/MissingResourceException;
	goto label_goto_3c;
	// 1967    .line 280
	// 1968    .end local v1    # "appendItemNamesSink":Landroid/icu/text/DateTimePatternGenerator$AppendItemNamesSink;
	// 1969    .end local v4    # "e":Ljava/util/MissingResourceException;
label_catch_64:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v4    # "e":Ljava/util/MissingResourceException;
	goto label_goto_31;

}
// .method private addCanonicalItems()V
void android::icu::text::DateTimePatternGenerator::addCanonicalItems()
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> patternInfo;
	int i;
	
	patternInfo = std::make_shared<android::icu::text::DateTimePatternGenerator_S_PatternInfo>();
	//    .local v1, "patternInfo":Landroid/icu/text/DateTimePatternGenerator$PatternInfo;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= android::icu::text::DateTimePatternGenerator::CANONICAL_ITEMS->size() )
		goto label_cond_1a;
	this->addPattern(java::lang::String::valueOf(android::icu::text::DateTimePatternGenerator::CANONICAL_ITEMS[i]), 0x0, patternInfo);
	i = ( i + 0x1);
	goto label_goto_6;
	// 2016    .line 1827
label_cond_1a:
	return;

}
// .method private addICUPatterns(Landroid/icu/text/DateTimePatternGenerator$PatternInfo;Landroid/icu/util/ULocale;)V
void android::icu::text::DateTimePatternGenerator::addICUPatterns(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo,std::shared_ptr<android::icu::util::ULocale> uLocale)
{
	
	int cVar0;
	bool cVar1;
	int i;
	std::shared_ptr<android::icu::text::SimpleDateFormat> df;
	
	//    .param p1, "returnInfo"    # Landroid/icu/text/DateTimePatternGenerator$PatternInfo;
	//    .param p2, "uLocale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x3;
	cVar1 = 0x0;
	i = 0x0;
	//    .local v1, "i":I
label_goto_3:
	if ( i >  cVar0 )
		goto label_cond_2b;
	df = android::icu::text::DateFormat::getDateInstance(i, uLocale);
	df->checkCast("android::icu::text::SimpleDateFormat");
	//    .local v0, "df":Landroid/icu/text/SimpleDateFormat;
	this->addPattern(df->toPattern(), cVar1, returnInfo);
	df = android::icu::text::DateFormat::getTimeInstance(i, uLocale);
	//    .end local v0    # "df":Landroid/icu/text/SimpleDateFormat;
	df->checkCast("android::icu::text::SimpleDateFormat");
	//    .restart local v0    # "df":Landroid/icu/text/SimpleDateFormat;
	this->addPattern(df->toPattern(), cVar1, returnInfo);
	if ( i != cVar0 )
		goto label_cond_28;
	this->consumeShortTimePattern(df->toPattern(), returnInfo);
label_cond_28:
	i = ( i + 0x1);
	goto label_goto_3;
	// 2085    .line 158
	// 2086    .end local v0    # "df":Landroid/icu/text/SimpleDateFormat;
label_cond_2b:
	return;

}
// .method private adjustFieldTypes(Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;Ljava/util/EnumSet;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::adjustFieldTypes(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithMatcher> patternWithMatcher,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> inputRequest,std::shared_ptr<java::util::EnumSet<android::icu::text::DateTimePatternGenerator_S_DTPGflags>> flags,int options)
{
	
	std::shared_ptr<java::lang::StringBuilder> newPattern;
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	std::shared_ptr<java::lang::String> item;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_VariableField> variableField;
	std::shared_ptr<java::lang::StringBuilder> fieldBuilder;
	int type;
	char c;
	int i;
	int reqFieldChar;
	int reqFieldLen;
	int adjFieldLen;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> matcherWithSkeleton;
	int patFieldIsNumeric;
	int skelFieldIsNumeric;
	
	//    .param p1, "patternWithMatcher"    # Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;
	//    .param p2, "inputRequest"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	//    .param p4, "options"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 2097        value = {
	// 2098            "(",
	// 2099            "Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;",
	// 2100            "Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;",
	// 2101            "Ljava/util/EnumSet",
	// 2102            "<",
	// 2103            "Landroid/icu/text/DateTimePatternGenerator$DTPGflags;",
	// 2104            ">;I)",
	// 2105            "Ljava/lang/String;"
	// 2106        }
	// 2107    .end annotation
	//    .local p3, "flags":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/DateTimePatternGenerator$DTPGflags;>;"
	this->fp->set(patternWithMatcher->pattern);
	newPattern = std::make_shared<java::lang::StringBuilder>();
	//    .local v10, "newPattern":Ljava/lang/StringBuilder;
	item_S_iterator = this->fp->getItems()->iterator();
	//    .local v7, "item$iterator":Ljava/util/Iterator;
label_goto_22:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_1bc;
	item = item_S_iterator->next();
	//    .local v6, "item":Ljava/lang/Object;
	if ( !(item->instanceOf("java::lang::String")) )  
		goto label_cond_46;
	item->checkCast("java::lang::String");
	//    .end local v6    # "item":Ljava/lang/Object;
	newPattern->append(this->fp->quoteLiteral(item));
	goto label_goto_22;
	// 2189    .restart local v6    # "item":Ljava/lang/Object;
label_cond_46:
	variableField = item;
	variableField->checkCast("android::icu::text::DateTimePatternGenerator_S_VariableField");
	//    .local v17, "variableField":Landroid/icu/text/DateTimePatternGenerator$VariableField;
	fieldBuilder = std::make_shared<java::lang::StringBuilder>(variableField->toString());
	//    .local v4, "fieldBuilder":Ljava/lang/StringBuilder;
	type = variableField->getType();
	//    .local v16, "type":I
	if ( type != 0xa )
		goto label_cond_a3;
	if ( !(( flags->isEmpty() ^ 0x1)) )  
		goto label_cond_a3;
	if ( !(flags->contains(android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_b)) )  
		goto label_cond_91;
	c = 0x62;
	//    .local v3, "c":C
label_goto_77:
	if ( c == 0x30 )
		goto label_cond_a3;
	//    .local v8, "len":I
	fieldBuilder->setLength(0x0);
	i = fieldBuilder->length();
	//    .local v5, "i":I
label_goto_89:
	if ( i <= 0 )
		goto label_cond_a3;
	fieldBuilder->append(c);
	i = ( i + -0x1);
	goto label_goto_89;
	// 2286    .line 1903
	// 2287    .end local v3    # "c":C
	// 2288    .end local v5    # "i":I
	// 2289    .end local v8    # "len":I
label_cond_91:
	if ( !(flags->contains(android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_B)) )  
		goto label_cond_a0;
	//    .restart local v3    # "c":C
	goto label_goto_77;
	// 2308    .end local v3    # "c":C
label_cond_a0:
	//    .restart local v3    # "c":C
	goto label_goto_77;
	// 2315    .line 1913
	// 2316    .end local v3    # "c":C
label_cond_a3:
	if ( !(flags->contains(android::icu::text::DateTimePatternGenerator_S_DTPGflags::FIX_FRACTIONAL_SECONDS)) )  
		goto label_cond_d4;
	if ( type != 0xd )
		goto label_cond_d4;
	fieldBuilder->append(this->decimal);
	android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::-get0(inputRequest)->appendFieldTo(0xe, fieldBuilder);
label_cond_cf:
	newPattern->append(fieldBuilder);
	goto label_goto_22;
	// 2368    .line 1916
label_cond_d4:
	if ( !(android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::-get1(inputRequest)[type]) )  
		goto label_cond_cf;
	reqFieldChar = android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::-get0(inputRequest)->getFieldChar(type);
	//    .local v12, "reqFieldChar":C
	reqFieldLen = android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::-get0(inputRequest)->getFieldLength(type);
	//    .local v13, "reqFieldLen":I
	if ( reqFieldChar != 0x45 )
		goto label_cond_101;
	if ( reqFieldLen >= 0x3 )
		goto label_cond_101;
	reqFieldLen = 0x3;
label_cond_101:
	adjFieldLen = reqFieldLen;
	//    .local v2, "adjFieldLen":I
	matcherWithSkeleton = patternWithMatcher->matcherWithSkeleton;
	//    .local v9, "matcherWithSkeleton":Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	if ( type != 0xb )
		goto label_cond_167;
	if ( ( options & 0x800) )     
		goto label_cond_167;
label_cond_116:
	adjFieldLen = fieldBuilder->length();
label_cond_11a:
label_goto_11a:
	if ( type == 0xb )
		goto label_cond_1b3;
	if ( type == 0x3 )
		goto label_cond_1b3;
	if ( type == 0x6 )
		goto label_cond_1b3;
	if ( type != 0x1 )
		goto label_cond_140;
	if ( reqFieldChar != 0x59 )
		goto label_cond_1b3;
label_cond_140:
	reqFieldChar;
	//    .local v3, "c":C
label_goto_141:
	if ( type != 0xb )
		goto label_cond_159;
	if ( !(flags->contains(android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_CAP_J)) )  
		goto label_cond_159;
label_cond_159:
	//    .end local v4    # "fieldBuilder":Ljava/lang/StringBuilder;
	fieldBuilder = std::make_shared<java::lang::StringBuilder>();
	//    .restart local v4    # "fieldBuilder":Ljava/lang/StringBuilder;
	i = adjFieldLen;
	//    .restart local v5    # "i":I
label_goto_15f:
	if ( i <= 0 )
		goto label_cond_cf;
	fieldBuilder->append(this->defaultHourFormatChar);
	i = ( i + -0x1);
	goto label_goto_15f;
	// 2553    .line 1949
	// 2554    .end local v3    # "c":C
	// 2555    .end local v5    # "i":I
label_cond_167:
	if ( type != 0xc )
		goto label_cond_177;
	if ( !(( options & 0x1000)) )  
		goto label_cond_116;
label_cond_177:
	if ( type != 0xd )
		goto label_cond_187;
	if ( !(( options & 0x2000)) )  
		goto label_cond_116;
label_cond_187:
	if ( !(matcherWithSkeleton) )  
		goto label_cond_11a;
	//    .local v15, "skelFieldLen":I
	patFieldIsNumeric = variableField->isNumeric();
	//    .local v11, "patFieldIsNumeric":Z
	skelFieldIsNumeric = matcherWithSkeleton->fieldIsNumeric(type);
	//    .local v14, "skelFieldIsNumeric":Z
	if ( android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher::-get0(matcherWithSkeleton)->getFieldLength(type) == reqFieldLen )
		goto label_cond_1ad;
	if ( !(patFieldIsNumeric) )  
		goto label_cond_1a7;
	if ( ( skelFieldIsNumeric ^ 0x1) )     
		goto label_cond_1ad;
label_cond_1a7:
	if ( !(skelFieldIsNumeric) )  
		goto label_cond_11a;
	if ( !(( patFieldIsNumeric ^ 0x1)) )  
		goto label_cond_11a;
label_cond_1ad:
	adjFieldLen = fieldBuilder->length();
	goto label_goto_11a;
	// 2651    .line 1968
	// 2652    .end local v11    # "patFieldIsNumeric":Z
	// 2653    .end local v14    # "skelFieldIsNumeric":Z
	// 2654    .end local v15    # "skelFieldLen":I
label_cond_1b3:
	fieldBuilder->charAt(0x0);
	//    .restart local v3    # "c":C
	goto label_goto_141;
	// 2667    .line 1979
	// 2668    .end local v2    # "adjFieldLen":I
	// 2669    .end local v3    # "c":C
	// 2670    .end local v4    # "fieldBuilder":Ljava/lang/StringBuilder;
	// 2671    .end local v6    # "item":Ljava/lang/Object;
	// 2672    .end local v9    # "matcherWithSkeleton":Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	// 2673    .end local v12    # "reqFieldChar":C
	// 2674    .end local v13    # "reqFieldLen":I
	// 2675    .end local v16    # "type":I
	// 2676    .end local v17    # "variableField":Landroid/icu/text/DateTimePatternGenerator$VariableField;
label_cond_1bc:
	return newPattern->toString();

}
// .method private checkFrozen()V
void android::icu::text::DateTimePatternGenerator::checkFrozen()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify frozen object")));
	// throw
	throw cVar0;
	// 2705    .line 1755
label_cond_f:
	return;

}
// .method private consumeShortTimePattern(Ljava/lang/String;Landroid/icu/text/DateTimePatternGenerator$PatternInfo;)V
void android::icu::text::DateTimePatternGenerator::consumeShortTimePattern(std::shared_ptr<java::lang::String> shortTimePattern,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo)
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> fp;
	std::shared_ptr<java::util::List> items;
	int idx;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_VariableField> item;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_VariableField> fld;
	
	//    .param p1, "shortTimePattern"    # Ljava/lang/String;
	//    .param p2, "returnInfo"    # Landroid/icu/text/DateTimePatternGenerator$PatternInfo;
	fp = std::make_shared<android::icu::text::DateTimePatternGenerator_S_FormatParser>();
	//    .local v1, "fp":Landroid/icu/text/DateTimePatternGenerator$FormatParser;
	fp->set(shortTimePattern);
	items = fp->getItems();
	//    .local v4, "items":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Object;>;"
	idx = 0x0;
	//    .local v2, "idx":I
label_goto_d:
	if ( idx >= items->size() )
		goto label_cond_31;
	item = items->get(idx);
	//    .local v3, "item":Ljava/lang/Object;
	if ( !(item->instanceOf("android::icu::text::DateTimePatternGenerator_S_VariableField")) )  
		goto label_cond_35;
	fld = item;
	fld->checkCast("android::icu::text::DateTimePatternGenerator_S_VariableField");
	//    .local v0, "fld":Landroid/icu/text/DateTimePatternGenerator$VariableField;
	if ( fld->getType() != 0xb )
		goto label_cond_35;
	this->defaultHourFormatChar = fld->toString()->charAt(0x0);
	//    .end local v0    # "fld":Landroid/icu/text/DateTimePatternGenerator$VariableField;
	//    .end local v3    # "item":Ljava/lang/Object;
label_cond_31:
	this->hackTimes(returnInfo, shortTimePattern);
	return;
	// 2790    .line 182
	// 2791    .restart local v3    # "item":Ljava/lang/Object;
label_cond_35:
	idx = ( idx + 0x1);
	goto label_goto_d;

}
// .method private fillInMissing()V
void android::icu::text::DateTimePatternGenerator::fillInMissing()
{
	
	int i;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= 0x10 )
		goto label_cond_31;
	if ( this->getAppendItemFormat(i) )     
		goto label_cond_11;
	this->setAppendItemFormat(i, std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} \u251c{2}: {1}\u2524")));
label_cond_11:
	if ( this->getAppendItemName(i) )     
		goto label_cond_2e;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->setAppendItemName(i, cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("F")))->append(i)->toString());
label_cond_2e:
	i = ( i + 0x1);
	goto label_goto_1;
	// 2858    .line 239
label_cond_31:
	return;

}
// .method private getAllowedHourFormats(Landroid/icu/util/ULocale;)V
void android::icu::text::DateTimePatternGenerator::getAllowedHourFormats(std::shared_ptr<android::icu::util::ULocale> uLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> max;
	std::shared_ptr<java::lang::String> country;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<std::vector<java::lang::String>> list;
	
	//    .param p1, "uLocale"    # Landroid/icu/util/ULocale;
	max = android::icu::util::ULocale::addLikelySubtags(uLocale);
	//    .local v3, "max":Landroid/icu/util/ULocale;
	country = max->getCountry();
	//    .local v0, "country":Ljava/lang/String;
	if ( !(country->isEmpty()) )  
		goto label_cond_11;
	country = std::make_shared<java::lang::String>(std::make_shared<char[]>("001"));
label_cond_11:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "langCountry":Ljava/lang/String;
	list = android::icu::text::DateTimePatternGenerator::LOCALE_TO_ALLOWED_HOUR->get(cVar0->append(max->getLanguage())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(country)->toString());
	list->checkCast("std::vector<java::lang::String>");
	//    .local v2, "list":[Ljava/lang/String;
	if ( list )     
		goto label_cond_43;
	list = android::icu::text::DateTimePatternGenerator::LOCALE_TO_ALLOWED_HOUR->get(country);
	//    .end local v2    # "list":[Ljava/lang/String;
	list->checkCast("std::vector<java::lang::String>");
	//    .restart local v2    # "list":[Ljava/lang/String;
	if ( list )     
		goto label_cond_43;
label_cond_43:
	this->allowedHourFormats = list;
	return;

}
// .method private getAppendFormat(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getAppendFormat(int foundMask)
{
	
	//    .param p1, "foundMask"    # I
	return this->appendItemFormats[foundMask];

}
// .method public static getAppendFormatNumber(Landroid/icu/impl/UResource$Key;)I
int android::icu::text::DateTimePatternGenerator::getAppendFormatNumber(std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	int i;
	
	//    .param p0, "key"    # Landroid/icu/impl/UResource$Key;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2974    .end annotation
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= android::icu::text::DateTimePatternGenerator::CLDR_FIELD_APPEND->size() )
		goto label_cond_14;
	if ( !(key->contentEquals(android::icu::text::DateTimePatternGenerator::CLDR_FIELD_APPEND[i])) )  
		goto label_cond_11;
	return i;
	// 3002    .line 484
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_1;
	// 3008    .line 489
label_cond_14:
	return -0x1;

}
// .method public static getAppendFormatNumber(Ljava/lang/String;)I
int android::icu::text::DateTimePatternGenerator::getAppendFormatNumber(std::shared_ptr<java::lang::String> string)
{
	
	int i;
	
	//    .param p0, "string"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3019    .end annotation
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= android::icu::text::DateTimePatternGenerator::CLDR_FIELD_APPEND->size() )
		goto label_cond_14;
	if ( !(android::icu::text::DateTimePatternGenerator::CLDR_FIELD_APPEND[i]->equals(string)) )  
		goto label_cond_11;
	return i;
	// 3047    .line 499
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_1;
	// 3053    .line 504
label_cond_14:
	return -0x1;

}
// .method private getAppendName(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getAppendName(int foundMask)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "foundMask"    # I
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->append(this->appendItemNames[foundMask])->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString();

}
// .method private getBestAppending(Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;ILandroid/icu/text/DateTimePatternGenerator$DistanceInfo;Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;Ljava/util/EnumSet;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getBestAppending(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> source,int missingFields,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> distInfo,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> skipMatcher,std::shared_ptr<java::util::EnumSet<android::icu::text::DateTimePatternGenerator_S_DTPGflags>> flags,int options)
{
	
	std::shared_ptr<java::lang::String> resultPattern;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithMatcher> resultPatternWithMatcher;
	std::shared_ptr<java::util::EnumSet> flags;
	int topField;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar0;
	auto resultPattern;
	
	//    .param p1, "source"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	//    .param p2, "missingFields"    # I
	//    .param p3, "distInfo"    # Landroid/icu/text/DateTimePatternGenerator$DistanceInfo;
	//    .param p4, "skipMatcher"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	//    .param p6, "options"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 3105        value = {
	// 3106            "(",
	// 3107            "Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;",
	// 3108            "I",
	// 3109            "Landroid/icu/text/DateTimePatternGenerator$DistanceInfo;",
	// 3110            "Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;",
	// 3111            "Ljava/util/EnumSet",
	// 3112            "<",
	// 3113            "Landroid/icu/text/DateTimePatternGenerator$DTPGflags;",
	// 3114            ">;I)",
	// 3115            "Ljava/lang/String;"
	// 3116        }
	// 3117    .end annotation
	//    .local p5, "flags":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/DateTimePatternGenerator$DTPGflags;>;"
	resultPattern = 0x0;
	//    .local v3, "resultPattern":Ljava/lang/String;
	if ( !(missingFields) )  
		goto label_cond_83;
	resultPatternWithMatcher = this->getBestRaw(source, missingFields, distInfo, skipMatcher);
	//    .local v4, "resultPatternWithMatcher":Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;
	resultPattern = this->adjustFieldTypes(resultPatternWithMatcher, source, flags, options);
	//    .local v3, "resultPattern":Ljava/lang/String;
label_goto_f:
	if ( !(distInfo->missingFieldMask) )  
		goto label_cond_83;
	if ( ( distInfo->missingFieldMask & 0x6000) != 0x4000 )
		goto label_cond_45;
	if ( ( missingFields & 0x6000) != 0x6000 )
		goto label_cond_45;
	resultPatternWithMatcher->pattern = resultPattern;
	flags = java::util::EnumSet::copyOf(flags);
	flags->add(android::icu::text::DateTimePatternGenerator_S_DTPGflags::FIX_FRACTIONAL_SECONDS);
	resultPattern = this->adjustFieldTypes(resultPatternWithMatcher, source, flags, options);
	distInfo->missingFieldMask = ( distInfo->missingFieldMask & -0x4001);
	goto label_goto_f;
	// 3207    .line 1781
label_cond_45:
	//    .local v5, "startingMask":I
	//    .local v7, "tempWithMatcher":Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;
	//    .local v6, "temp":Ljava/lang/String;
	//    .local v2, "foundMask":I
	topField = this->getTopBitNumber((distInfo->missingFieldMask & (~distInfo->missingFieldMask)));
	//    .local v8, "topField":I
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x3);
	cVar0[0x0] = resultPattern;
	cVar0[0x1] = this->adjustFieldTypes(this->getBestRaw(source, distInfo->missingFieldMask, distInfo, skipMatcher), source, flags, options);
	cVar0[0x2] = this->getAppendName(topField);
	resultPattern = android::icu::impl::SimpleFormatterImpl::formatRawPattern(this->getAppendFormat(topField), 0x2, 0x3, cVar0);
	goto label_goto_f;
	// 3292    .line 1790
	// 3293    .end local v2    # "foundMask":I
	// 3294    .end local v3    # "resultPattern":Ljava/lang/String;
	// 3295    .end local v4    # "resultPatternWithMatcher":Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;
	// 3296    .end local v5    # "startingMask":I
	// 3297    .end local v6    # "temp":Ljava/lang/String;
	// 3298    .end local v7    # "tempWithMatcher":Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;
	// 3299    .end local v8    # "topField":I
label_cond_83:
	return resultPattern;

}
// .method private getBestPattern(Ljava/lang/String;Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getBestPattern(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> skipMatcher,int options)
{
	
	std::shared_ptr<java::util::EnumSet> flags;
	std::shared_ptr<java::lang::StringBuilder> skeletonCopy;
	int inQuoted;
	int patPos;
	int patChr;
	std::shared_ptr<java::lang::String> preferred;
	std::shared_ptr<java::lang::Object> alt;
	int neededFields;
	std::shared_ptr<java::lang::String> datePattern;
	std::shared_ptr<java::lang::String> timePattern;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar0;
	
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "skipMatcher"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	//    .param p3, "options"    # I
	flags = java::util::EnumSet::noneOf(android::icu::text::DateTimePatternGenerator_S_DTPGflags());
	//    .local v7, "flags":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/DateTimePatternGenerator$DTPGflags;>;"
	var7 = skeletonCopy(skeleton);
	//    .local v17, "skeletonCopy":Ljava/lang/StringBuilder;
	inQuoted = 0x0;
	//    .local v12, "inQuoted":Z
	patPos = 0x0;
	//    .end local v12    # "inQuoted":Z
	//    .local v15, "patPos":I
label_goto_11:
	if ( patPos >= skeleton->length() )
		goto label_cond_68;
	patChr = skeleton->charAt(patPos);
	//    .local v14, "patChr":C
	if ( patChr != 0x27 )
		goto label_cond_26;
	inQuoted = ( inQuoted ^ 0x1);
label_cond_23:
label_goto_23:
	patPos = ( patPos + 0x1);
	goto label_goto_11;
	// 3368    .line 555
label_cond_26:
	if ( inQuoted )     
		goto label_cond_23;
	if ( patChr != 0x6a )
		goto label_cond_36;
	skeletonCopy->setCharAt(patPos, this->defaultHourFormatChar);
	goto label_goto_23;
	// 3388    .line 558
label_cond_36:
	if ( patChr != 0x43 )
		goto label_cond_57;
	preferred = this->allowedHourFormats[0x0];
	//    .local v16, "preferred":Ljava/lang/String;
	skeletonCopy->setCharAt(patPos, preferred->charAt(0x0));
	alt = android::icu::text::DateTimePatternGenerator_S_DTPGflags::getFlag(preferred);
	//    .local v9, "alt":Landroid/icu/text/DateTimePatternGenerator$DTPGflags;
	if ( !(alt) )  
		goto label_cond_23;
	flags->add(alt);
	goto label_goto_23;
	// 3431    .line 565
	// 3432    .end local v9    # "alt":Landroid/icu/text/DateTimePatternGenerator$DTPGflags;
	// 3433    .end local v16    # "preferred":Ljava/lang/String;
label_cond_57:
	if ( patChr != 0x4a )
		goto label_cond_23;
	skeletonCopy->setCharAt(patPos, 0x48);
	flags->add(android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_CAP_J);
	goto label_goto_23;
	// 3453    .line 575
	// 3454    .end local v14    # "patChr":C
label_cond_68:
	this->monitor_enter();
	try {
	//label_try_start_69:
	this->current->set(skeletonCopy->toString(), this->fp, 0x0);
	//    .local v10, "bestWithMatcher":Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;
	if ( this->_distanceInfo->missingFieldMask )     
		goto label_cond_a8;
	if ( this->_distanceInfo->extraFieldMask )     
		goto label_cond_a8;
	//label_try_end_a5:
	}
	catch (...){
		goto label_catchall_e4;
	}
	//    .catchall {:try_start_69 .. :try_end_a5} :catchall_e4
	this->monitor_exit();
	return this->adjustFieldTypes(this->getBestRaw(this->current, -0x1, this->_distanceInfo, skipMatcher), this->current, flags, options);
	// 3532    .line 582
label_cond_a8:
	try {
	//label_try_start_a8:
	neededFields = this->current->getFieldMask();
	//    .local v13, "neededFields":I
	datePattern = this->getBestAppending(this->current, ( neededFields & 0x3ff), this->_distanceInfo, skipMatcher, flags, options);
	//    .local v11, "datePattern":Ljava/lang/String;
	//label_try_end_da:
	}
	catch (...){
		goto label_catchall_e4;
	}
	//    .catchall {:try_start_a8 .. :try_end_da} :catchall_e4
	timePattern = this->getBestAppending(this->current, (neededFields & 0xfc00), this->_distanceInfo, skipMatcher, flags, options);
	//    .local v18, "timePattern":Ljava/lang/String;
	this->monitor_exit();
	if ( datePattern )     
		goto label_cond_e7;
	if ( timePattern )     
		goto label_cond_e3;
	//    .end local v18    # "timePattern":Ljava/lang/String;
label_cond_e3:
	return timePattern;
	// 3605    .line 575
	// 3606    .end local v10    # "bestWithMatcher":Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;
	// 3607    .end local v11    # "datePattern":Ljava/lang/String;
	// 3608    .end local v13    # "neededFields":I
label_catchall_e4:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 3616    .line 590
	// 3617    .restart local v10    # "bestWithMatcher":Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;
	// 3618    .restart local v11    # "datePattern":Ljava/lang/String;
	// 3619    .restart local v13    # "neededFields":I
	// 3620    .restart local v18    # "timePattern":Ljava/lang/String;
label_cond_e7:
	if ( timePattern )     
		goto label_cond_ea;
	return datePattern;
	// 3626    .line 592
label_cond_ea:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x2);
	cVar0[0x0] = timePattern;
	cVar0[0x1] = datePattern;
	return android::icu::impl::SimpleFormatterImpl::formatRawPattern(this->getDateTimeFormat(), 0x2, 0x2, cVar0);

}
// .method private getBestRaw(Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;ILandroid/icu/text/DateTimePatternGenerator$DistanceInfo;Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;)Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;
std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithMatcher> android::icu::text::DateTimePatternGenerator::getBestRaw(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> source,int includeMask,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> missingFields,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> skipMatcher)
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> cVar0;
	int bestDistance;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithMatcher> bestPatternWithMatcher;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> tempInfo;
	std::shared_ptr<java::util::Iterator> trial_S_iterator;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> trial;
	int distance;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag> patternWithSkelFlag;
	
	//    .param p1, "source"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	//    .param p2, "includeMask"    # I
	//    .param p3, "missingFields"    # Landroid/icu/text/DateTimePatternGenerator$DistanceInfo;
	//    .param p4, "skipMatcher"    # Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	cVar0 = 0x0;
	bestDistance = 0x7fffffff;
	//    .local v0, "bestDistance":I
	bestPatternWithMatcher = std::make_shared<android::icu::text::DateTimePatternGenerator_S_PatternWithMatcher>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), cVar0);
	//    .local v1, "bestPatternWithMatcher":Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;
	tempInfo = std::make_shared<android::icu::text::DateTimePatternGenerator_S_DistanceInfo>(cVar0);
	//    .local v4, "tempInfo":Landroid/icu/text/DateTimePatternGenerator$DistanceInfo;
	trial_S_iterator = this->skeleton2pattern->keySet()->iterator();
	//    .local v6, "trial$iterator":Ljava/util/Iterator;
label_cond_1b:
	if ( !(trial_S_iterator->hasNext()) )  
		goto label_cond_4b;
	trial = trial_S_iterator->next();
	trial->checkCast("android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher");
	//    .local v5, "trial":Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	if ( trial->equals(skipMatcher) )     
		goto label_cond_1b;
	distance = source->getDistance(trial, includeMask, tempInfo);
	//    .local v2, "distance":I
	if ( distance >= bestDistance )
		goto label_cond_1b;
	bestDistance = distance;
	patternWithSkelFlag = this->skeleton2pattern->get(trial);
	patternWithSkelFlag->checkCast("android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag");
	//    .local v3, "patternWithSkelFlag":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
	bestPatternWithMatcher->pattern = patternWithSkelFlag->pattern;
	if ( !(patternWithSkelFlag->skeletonWasSpecified) )  
		goto label_cond_4c;
	bestPatternWithMatcher->matcherWithSkeleton = trial;
label_goto_46:
	missingFields->setTo(tempInfo);
	if ( distance )     
		goto label_cond_1b;
	//    .end local v2    # "distance":I
	//    .end local v3    # "patternWithSkelFlag":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
	//    .end local v5    # "trial":Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
label_cond_4b:
	return bestPatternWithMatcher;
	// 3768    .line 1851
	// 3769    .restart local v2    # "distance":I
	// 3770    .restart local v3    # "patternWithSkelFlag":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
	// 3771    .restart local v5    # "trial":Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
label_cond_4c:
	bestPatternWithMatcher->matcherWithSkeleton = cVar0;
	goto label_goto_46;

}
// .method private static getCLDRFieldNumber(Landroid/icu/impl/UResource$Key;)I
int android::icu::text::DateTimePatternGenerator::getCLDRFieldNumber(std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	int i;
	
	//    .param p0, "key"    # Landroid/icu/impl/UResource$Key;
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= android::icu::text::DateTimePatternGenerator::CLDR_FIELD_NAME->size() )
		goto label_cond_14;
	if ( !(key->contentEquals(android::icu::text::DateTimePatternGenerator::CLDR_FIELD_NAME[i])) )  
		goto label_cond_11;
	return i;
	// 3808    .line 508
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_1;
	// 3814    .line 513
label_cond_14:
	return -0x1;

}
// .method private getCalendarTypeToUse(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getCalendarTypeToUse(std::shared_ptr<android::icu::util::ULocale> uLocale)
{
	
	std::shared_ptr<java::lang::String> calendarTypeToUse;
	
	//    .param p1, "uLocale"    # Landroid/icu/util/ULocale;
	calendarTypeToUse = uLocale->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar")));
	//    .local v0, "calendarTypeToUse":Ljava/lang/String;
	if ( calendarTypeToUse )     
		goto label_cond_14;
	//    .local v1, "preferredCalendarTypes":[Ljava/lang/String;
	calendarTypeToUse = android::icu::util::Calendar::getKeywordValuesForLocale(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar")), uLocale, 0x1)[0x0];
	//    .end local v1    # "preferredCalendarTypes":[Ljava/lang/String;
label_cond_14:
	if ( calendarTypeToUse )     
		goto label_cond_19;
label_cond_19:
	return calendarTypeToUse;

}
// .method private static getCanonicalChar(IC)C
char android::icu::text::DateTimePatternGenerator::getCanonicalChar(int field,char reference)
{
	
	char cVar0;
	int i;
	auto row;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "field"    # I
	//    .param p1, "reference"    # C
	cVar0 = 0x68;
	if ( reference == cVar0 )
		goto label_cond_8;
	if ( reference != 0x4b )
		goto label_cond_9;
label_cond_8:
	return cVar0;
	// 3884    .line 2119
label_cond_9:
	i = 0x0;
	//    .local v0, "i":I
label_goto_a:
	if ( i >= android::icu::text::DateTimePatternGenerator::types->size() )
		goto label_cond_20;
	row = android::icu::text::DateTimePatternGenerator::types[i];
	//    .local v1, "row":[I
	if ( row[0x1] != field )
		goto label_cond_1d;
	return (char)(row[0x0]);
	// 3918    .line 2119
label_cond_1d:
	i = ( i + 0x1);
	goto label_goto_a;
	// 3924    .line 2125
	// 3925    .end local v1    # "row":[I
label_cond_20:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not find field ")))->append(field)->toString());
	// throw
	throw cVar1;

}
// .method private static getCanonicalIndex(Ljava/lang/String;Z)I
int android::icu::text::DateTimePatternGenerator::getCanonicalIndex(std::shared_ptr<java::lang::String> s,bool strict)
{
	
	int cVar0;
	int cVar1;
	int len;
	int ch;
	int i;
	auto row;
	
	//    .param p0, "s"    # Ljava/lang/String;
	//    .param p1, "strict"    # Z
	cVar0 = 0x0;
	cVar1 = -0x1;
	len = s->length();
	//    .local v3, "len":I
	if ( len )     
		goto label_cond_9;
	return cVar1;
	// 3974    .line 2090
label_cond_9:
	ch = s->charAt(cVar0);
	//    .local v1, "ch":I
	i = 0x1;
	//    .local v2, "i":I
label_goto_e:
	if ( i >= len )
		goto label_cond_1a;
	if ( s->charAt(i) == ch )
		goto label_cond_17;
	return cVar1;
	// 3998    .line 2092
label_cond_17:
	i = ( i + 0x1);
	goto label_goto_e;
	// 4004    .line 2097
label_cond_1a:
	//    .local v0, "bestRow":I
	i = 0x0;
label_goto_1c:
	if ( i >= android::icu::text::DateTimePatternGenerator::types->size() )
		goto label_cond_3a;
	row = android::icu::text::DateTimePatternGenerator::types[i];
	//    .local v4, "row":[I
	if ( row[cVar0] == ch )
		goto label_cond_2c;
label_cond_29:
	i = ( i + 0x1);
	goto label_goto_1c;
	// 4036    .line 2101
label_cond_2c:
	i;
	if ( row[0x3] >  len )
		goto label_cond_29;
	if ( row[( row->size() + -0x1)] <  len )
		goto label_cond_29;
	return i;
	// 4059    .line 2106
	// 4060    .end local v4    # "row":[I
label_cond_3a:
	if ( !(strict) )  
		goto label_cond_3d;
	//    .end local v0    # "bestRow":I
label_cond_3d:
	return -0x1;

}
// .method public static getEmptyInstance()Landroid/icu/text/DateTimePatternGenerator;
std::shared_ptr<android::icu::text::DateTimePatternGenerator> android::icu::text::DateTimePatternGenerator::getEmptyInstance()
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator> instance;
	
	instance = std::make_shared<android::icu::text::DateTimePatternGenerator>();
	//    .local v0, "instance":Landroid/icu/text/DateTimePatternGenerator;
	instance->addCanonicalItems();
	instance->fillInMissing();
	return instance;

}
// .method private static getFilteredPattern(Landroid/icu/text/DateTimePatternGenerator$FormatParser;Ljava/util/BitSet;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getFilteredPattern(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> fp,std::shared_ptr<java::util::BitSet> nuke)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	int i;
	std::shared_ptr<java::lang::String> item;
	
	//    .param p0, "fp"    # Landroid/icu/text/DateTimePatternGenerator$FormatParser;
	//    .param p1, "nuke"    # Ljava/util/BitSet;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "result":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= android::icu::text::DateTimePatternGenerator_S_FormatParser::-get0(fp)->size() )
		goto label_cond_39;
	if ( !(nuke->get(i)) )  
		goto label_cond_19;
label_goto_16:
	i = ( i + 0x1);
	goto label_goto_6;
	// 4131    .line 461
label_cond_19:
	item = android::icu::text::DateTimePatternGenerator_S_FormatParser::-get0(fp)->get(i);
	//    .local v1, "item":Ljava/lang/Object;
	if ( !(item->instanceOf("java::lang::String")) )  
		goto label_cond_31;
	result->append(fp->quoteLiteral(item->toString()));
	goto label_goto_16;
	// 4160    .line 465
label_cond_31:
	result->append(item->toString());
	goto label_goto_16;
	// 4170    .line 468
	// 4171    .end local v1    # "item":Ljava/lang/Object;
label_cond_39:
	return result->toString();

}
// .method public static getFrozenInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/DateTimePatternGenerator;
std::shared_ptr<android::icu::text::DateTimePatternGenerator> android::icu::text::DateTimePatternGenerator::getFrozenInstance(std::shared_ptr<android::icu::util::ULocale> uLocale)
{
	
	std::shared_ptr<java::lang::Object> localeKey;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator> result;
	
	//    .param p0, "uLocale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4184    .end annotation
	localeKey = uLocale->toString();
	//    .local v0, "localeKey":Ljava/lang/String;
	result = android::icu::text::DateTimePatternGenerator::DTPNG_CACHE->get(localeKey);
	result->checkCast("android::icu::text::DateTimePatternGenerator");
	//    .local v1, "result":Landroid/icu/text/DateTimePatternGenerator;
	if ( !(result) )  
		goto label_cond_f;
	return result;
	// 4209    .line 122
label_cond_f:
	//    .end local v1    # "result":Landroid/icu/text/DateTimePatternGenerator;
	result = std::make_shared<android::icu::text::DateTimePatternGenerator>();
	//    .restart local v1    # "result":Landroid/icu/text/DateTimePatternGenerator;
	result->initData(uLocale);
	result->freeze();
	android::icu::text::DateTimePatternGenerator::DTPNG_CACHE->put(localeKey, result);
	return result;

}
// .method public static getInstance()Landroid/icu/text/DateTimePatternGenerator;
std::shared_ptr<android::icu::text::DateTimePatternGenerator> android::icu::text::DateTimePatternGenerator::getInstance()
{
	
	return android::icu::text::DateTimePatternGenerator::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/DateTimePatternGenerator;
std::shared_ptr<android::icu::text::DateTimePatternGenerator> android::icu::text::DateTimePatternGenerator::getInstance(std::shared_ptr<android::icu::util::ULocale> uLocale)
{
	
	//    .param p0, "uLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::DateTimePatternGenerator::getFrozenInstance(uLocale)->cloneAsThawed();

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/text/DateTimePatternGenerator;
std::shared_ptr<android::icu::text::DateTimePatternGenerator> android::icu::text::DateTimePatternGenerator::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::text::DateTimePatternGenerator::getInstance(android::icu::util::ULocale::forLocale(locale));

}
// .method private static getName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getName(std::shared_ptr<java::lang::String> s)
{
	
	bool cVar0;
	int i;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "s"    # Ljava/lang/String;
	cVar0 = 0x1;
	i = android::icu::text::DateTimePatternGenerator::getCanonicalIndex(s, cVar0);
	//    .local v0, "i":I
	name = android::icu::text::DateTimePatternGenerator::FIELD_NAME[android::icu::text::DateTimePatternGenerator::types[i][cVar0]];
	//    .local v1, "name":Ljava/lang/String;
	if ( android::icu::text::DateTimePatternGenerator::types[i][0x2] >= 0 )
		goto label_cond_2d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	name = cVar1->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(":S")))->toString();
label_goto_2c:
	return name;
	// 4343    .line 2075
label_cond_2d:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	name = cVar2->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(":N")))->toString();
	goto label_goto_2c;

}
// .method private getSet(Ljava/lang/String;)Ljava/util/TreeSet;
std::shared_ptr<java::util::TreeSet<java::lang::String>> android::icu::text::DateTimePatternGenerator::getSet(std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<java::util::TreeSet> result;
	std::shared_ptr<java::util::Iterator> obj_S_iterator;
	std::shared_ptr<java::lang::String> item;
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 4370        value = {
	// 4371            "(",
	// 4372            "Ljava/lang/String;",
	// 4373            ")",
	// 4374            "Ljava/util/TreeSet",
	// 4375            "<",
	// 4376            "Ljava/lang/String;",
	// 4377            ">;"
	// 4378        }
	// 4379    .end annotation
	//    .local v1, "items":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Object;>;"
	result = std::make_shared<java::util::TreeSet>();
	//    .local v4, "result":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
	obj_S_iterator = this->fp->set(id)->getItems()->iterator();
	//    .local v3, "obj$iterator":Ljava/util/Iterator;
label_cond_13:
label_goto_13:
	if ( !(obj_S_iterator->hasNext()) )  
		goto label_cond_37;
	//    .local v2, "obj":Ljava/lang/Object;
	item = obj_S_iterator->next()->toString();
	//    .local v0, "item":Ljava/lang/String;
	if ( item->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("G"))) )     
		goto label_cond_13;
	if ( item->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("a"))) )     
		goto label_cond_13;
	result->add(item);
	goto label_goto_13;
	// 4447    .line 1701
	// 4448    .end local v0    # "item":Ljava/lang/String;
	// 4449    .end local v2    # "obj":Ljava/lang/Object;
label_cond_37:
	return result;

}
// .method private getTopBitNumber(I)I
int android::icu::text::DateTimePatternGenerator::getTopBitNumber(int foundMask)
{
	
	int i;
	int foundMask;
	
	//    .param p1, "foundMask"    # I
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( !(foundMask) )  
		goto label_cond_8;
	foundMask = _ushri(foundMask,0x1);
	i = ( i + 0x1);
	goto label_goto_1;
	// 4475    .line 1818
label_cond_8:
	return ( i + -0x1);

}
// .method private hackTimes(Landroid/icu/text/DateTimePatternGenerator$PatternInfo;Ljava/lang/String;)V
void android::icu::text::DateTimePatternGenerator::hackTimes(std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo,std::shared_ptr<java::lang::String> shortTimePattern)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::StringBuilder> mmss;
	int gotMm;
	int i;
	std::shared_ptr<java::lang::String> item;
	int ch;
	std::shared_ptr<java::util::BitSet> variables;
	std::shared_ptr<java::util::BitSet> nuke;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_VariableField> item;
	int j;
	
	//    .param p1, "returnInfo"    # Landroid/icu/text/DateTimePatternGenerator$PatternInfo;
	//    .param p2, "shortTimePattern"    # Ljava/lang/String;
	cVar0 = 0x73;
	cVar1 = 0x0;
	this->fp->set(shortTimePattern);
	mmss = std::make_shared<java::lang::StringBuilder>();
	//    .local v6, "mmss":Ljava/lang/StringBuilder;
	gotMm = 0x0;
	//    .local v1, "gotMm":Z
	i = 0x0;
	//    .local v3, "i":I
label_goto_f:
	if ( i >= android::icu::text::DateTimePatternGenerator_S_FormatParser::-get0(this->fp)->size() )
		goto label_cond_50;
	item = android::icu::text::DateTimePatternGenerator_S_FormatParser::-get0(this->fp)->get(i);
	//    .local v4, "item":Ljava/lang/Object;
	if ( !(item->instanceOf("java::lang::String")) )  
		goto label_cond_3b;
	if ( !(gotMm) )  
		goto label_cond_38;
	mmss->append(this->fp->quoteLiteral(item->toString()));
label_cond_38:
label_goto_38:
	i = ( i + 0x1);
	goto label_goto_f;
	// 4564    .line 419
label_cond_3b:
	ch = item->toString()->charAt(cVar1);
	//    .local v0, "ch":C
	if ( ch != 0x6d )
		goto label_cond_4c;
	0x1;
	mmss->append(item);
	goto label_goto_38;
	// 4588    .line 423
label_cond_4c:
	if ( ch != cVar0 )
		goto label_cond_a1;
	if ( gotMm )     
		goto label_cond_96;
	//    .end local v0    # "ch":C
	//    .end local v4    # "item":Ljava/lang/Object;
label_cond_50:
label_goto_50:
	variables = std::make_shared<java::util::BitSet>();
	//    .local v8, "variables":Ljava/util/BitSet;
	nuke = std::make_shared<java::util::BitSet>();
	//    .local v7, "nuke":Ljava/util/BitSet;
	i = 0x0;
label_goto_5b:
	if ( i >= android::icu::text::DateTimePatternGenerator_S_FormatParser::-get0(this->fp)->size() )
		goto label_cond_ba;
	item = android::icu::text::DateTimePatternGenerator_S_FormatParser::-get0(this->fp)->get(i);
	//    .restart local v4    # "item":Ljava/lang/Object;
	if ( !(item->instanceOf("android::icu::text::DateTimePatternGenerator_S_VariableField")) )  
		goto label_cond_93;
	variables->set(i);
	ch = item->toString()->charAt(cVar1);
	//    .restart local v0    # "ch":C
	if ( ch == cVar0 )
		goto label_cond_86;
	if ( ch != 0x53 )
		goto label_cond_93;
label_cond_86:
	nuke->set(i);
	j = ( i + -0x1);
	//    .local v5, "j":I
label_goto_8b:
	if ( j < 0 ) 
		goto label_cond_93;
	if ( !(variables->get(j)) )  
		goto label_cond_b4;
	//    .end local v0    # "ch":C
	//    .end local v5    # "j":I
label_cond_93:
	i = ( i + 0x1);
	goto label_goto_5b;
	// 4690    .line 427
	// 4691    .end local v7    # "nuke":Ljava/util/BitSet;
	// 4692    .end local v8    # "variables":Ljava/util/BitSet;
	// 4693    .restart local v0    # "ch":C
label_cond_96:
	mmss->append(item);
	this->addPattern(mmss->toString(), cVar1, returnInfo);
	goto label_goto_50;
	// 4706    .line 430
label_cond_a1:
	if ( gotMm )     
		goto label_cond_50;
	if ( ch == 0x7a )
		goto label_cond_50;
	if ( ch == 0x5a )
		goto label_cond_50;
	if ( ch == 0x76 )
		goto label_cond_50;
	if ( ch != 0x56 )
		goto label_cond_38;
	goto label_goto_50;
	// 4728    .line 448
	// 4729    .restart local v5    # "j":I
	// 4730    .restart local v7    # "nuke":Ljava/util/BitSet;
	// 4731    .restart local v8    # "variables":Ljava/util/BitSet;
label_cond_b4:
	nuke->set(i);
	j = ( j + 0x1);
	goto label_goto_8b;
	// 4740    .line 453
	// 4741    .end local v0    # "ch":C
	// 4742    .end local v4    # "item":Ljava/lang/Object;
	// 4743    .end local v5    # "j":I
label_cond_ba:
	//    .local v2, "hhmm":Ljava/lang/String;
	this->addPattern(android::icu::text::DateTimePatternGenerator::getFilteredPattern(this->fp, nuke), cVar1, returnInfo);
	return;

}
// .method private initData(Landroid/icu/util/ULocale;)V
void android::icu::text::DateTimePatternGenerator::initData(std::shared_ptr<android::icu::util::ULocale> uLocale)
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo;
	
	//    .param p1, "uLocale"    # Landroid/icu/util/ULocale;
	returnInfo = std::make_shared<android::icu::text::DateTimePatternGenerator_S_PatternInfo>();
	//    .local v0, "returnInfo":Landroid/icu/text/DateTimePatternGenerator$PatternInfo;
	this->addCanonicalItems();
	this->addICUPatterns(returnInfo, uLocale);
	this->addCLDRData(returnInfo, uLocale);
	this->setDateTimeFromCalendar(uLocale);
	this->setDecimalSymbols(uLocale);
	this->getAllowedHourFormats(uLocale);
	this->fillInMissing();
	return;

}
// .method private isAvailableFormatSet(Ljava/lang/String;)Z
bool android::icu::text::DateTimePatternGenerator::isAvailableFormatSet(std::shared_ptr<java::lang::String> key)
{
	
	//    .param p1, "key"    # Ljava/lang/String;
	return this->cldrAvailableFormatKeys->contains(key);

}
// .method public static isSingleField(Ljava/lang/String;)Z
bool android::icu::text::DateTimePatternGenerator::isSingleField(std::shared_ptr<java::lang::String> skeleton)
{
	
	int cVar0;
	int i;
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4814    .end annotation
	cVar0 = 0x0;
	//    .local v0, "first":C
	i = 0x1;
	//    .local v1, "i":I
label_goto_6:
	if ( i >= skeleton->length() )
		goto label_cond_16;
	if ( skeleton->charAt(i) == skeleton->charAt(cVar0) )
		goto label_cond_13;
	return cVar0;
	// 4845    .line 1145
label_cond_13:
	i = ( i + 0x1);
	goto label_goto_6;
	// 4851    .line 1148
label_cond_16:
	return 0x1;

}
// .method private setAvailableFormat(Ljava/lang/String;)V
void android::icu::text::DateTimePatternGenerator::setAvailableFormat(std::shared_ptr<java::lang::String> key)
{
	
	//    .param p1, "key"    # Ljava/lang/String;
	this->checkFrozen();
	this->cldrAvailableFormatKeys->add(key);
	return;

}
// .method private setDateTimeFromCalendar(Landroid/icu/util/ULocale;)V
void android::icu::text::DateTimePatternGenerator::setDateTimeFromCalendar(std::shared_ptr<android::icu::util::ULocale> uLocale)
{
	
	//    .param p1, "uLocale"    # Landroid/icu/util/ULocale;
	//    .local v0, "dateTimeFormat":Ljava/lang/String;
	this->setDateTimeFormat(android::icu::util::Calendar::getDateTimePattern(android::icu::util::Calendar::getInstance(uLocale), uLocale, 0x2));
	return;

}
// .method private setDecimalSymbols(Landroid/icu/util/ULocale;)V
void android::icu::text::DateTimePatternGenerator::setDecimalSymbols(std::shared_ptr<android::icu::util::ULocale> uLocale)
{
	
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> dfs;
	
	//    .param p1, "uLocale"    # Landroid/icu/util/ULocale;
	dfs = std::make_shared<android::icu::text::DecimalFormatSymbols>(uLocale);
	//    .local v0, "dfs":Landroid/icu/text/DecimalFormatSymbols;
	this->setDecimal(java::lang::String::valueOf(dfs->getDecimalSeparator()));
	return;

}
// .method private static showMask(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::showMask(int mask)
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	int i;
	
	//    .param p0, "mask"    # I
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "result":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= 0x10 )
		goto label_cond_2c;
	if ( ((0x1 << i) &  mask) )     
		goto label_cond_12;
label_goto_f:
	i = ( i + 0x1);
	goto label_goto_6;
	// 4960    .line 2017
label_cond_12:
	if ( !(result->length()) )  
		goto label_cond_1e;
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" | ")));
label_cond_1e:
	result->append(android::icu::text::DateTimePatternGenerator::FIELD_NAME[i]);
	result->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
	goto label_goto_f;
	// 4988    .line 2022
label_cond_2c:
	return result->toString();

}
// .method public addPattern(Ljava/lang/String;ZLandroid/icu/text/DateTimePatternGenerator$PatternInfo;)Landroid/icu/text/DateTimePatternGenerator;
std::shared_ptr<android::icu::text::DateTimePatternGenerator> android::icu::text::DateTimePatternGenerator::addPattern(std::shared_ptr<java::lang::String> pattern,bool override,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "override"    # Z
	//    .param p3, "returnInfo"    # Landroid/icu/text/DateTimePatternGenerator$PatternInfo;
	return this->addPatternWithSkeleton(pattern, 0x0, override, returnInfo);

}
// .method public addPatternWithSkeleton(Ljava/lang/String;Ljava/lang/String;ZLandroid/icu/text/DateTimePatternGenerator$PatternInfo;)Landroid/icu/text/DateTimePatternGenerator;
std::shared_ptr<android::icu::text::DateTimePatternGenerator> android::icu::text::DateTimePatternGenerator::addPatternWithSkeleton(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> skeletonToUse,bool override,std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternInfo> returnInfo)
{
	
	int cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> cVar2;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> cVar3;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> matcher;
	std::shared_ptr<java::lang::Object> basePattern;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag> previousPatternWithSameBase;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag> previousValue;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag> patWithSkelFlag;
	bool cVar0;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> cVar4;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "skeletonToUse"    # Ljava/lang/String;
	//    .param p3, "override"    # Z
	//    .param p4, "returnInfo"    # Landroid/icu/text/DateTimePatternGenerator$PatternInfo;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 5023    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = 0x0;
	this->checkFrozen();
	if ( skeletonToUse )     
		goto label_cond_34;
	cVar3 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher>(cVar2);
	matcher = cVar3->set(pattern, this->fp, cVar1);
	//    .local v1, "matcher":Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
label_goto_13:
	basePattern = matcher->getBasePattern();
	//    .local v0, "basePattern":Ljava/lang/String;
	previousPatternWithSameBase = this->basePattern_pattern->get(basePattern);
	previousPatternWithSameBase->checkCast("android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag");
	//    .local v3, "previousPatternWithSameBase":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
	if ( !(previousPatternWithSameBase) )  
		goto label_cond_40;
	if ( !(previousPatternWithSameBase->skeletonWasSpecified) )  
		goto label_cond_2b;
	if ( !(skeletonToUse) )  
		goto label_cond_40;
	if ( !(( override ^ 0x1)) )  
		goto label_cond_40;
label_cond_2b:
	returnInfo->status = cVar0;
	returnInfo->conflictingPattern = previousPatternWithSameBase->pattern;
	if ( override )     
		goto label_cond_40;
	return this;
	// 5095    .line 668
	// 5096    .end local v0    # "basePattern":Ljava/lang/String;
	// 5097    .end local v1    # "matcher":Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	// 5098    .end local v3    # "previousPatternWithSameBase":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
label_cond_34:
	cVar4 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher>(cVar2);
	matcher = cVar4->set(skeletonToUse, this->fp, cVar1);
	//    .restart local v1    # "matcher":Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	goto label_goto_13;
	// 5113    .line 690
	// 5114    .restart local v0    # "basePattern":Ljava/lang/String;
	// 5115    .restart local v3    # "previousPatternWithSameBase":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
label_cond_40:
	previousValue = this->skeleton2pattern->get(matcher);
	previousValue->checkCast("android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag");
	//    .local v4, "previousValue":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
	if ( !(previousValue) )  
		goto label_cond_5a;
	returnInfo->status = 0x2;
	returnInfo->conflictingPattern = previousValue->pattern;
	if ( !(override) )  
		goto label_cond_59;
	if ( !(skeletonToUse) )  
		goto label_cond_5a;
	if ( !(previousValue->skeletonWasSpecified) )  
		goto label_cond_5a;
label_cond_59:
	return this;
	// 5151    .line 696
label_cond_5a:
	returnInfo->status = cVar1;
	returnInfo->conflictingPattern = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	if ( !(skeletonToUse) )  
		goto label_cond_73;
label_goto_65:
	patWithSkelFlag = std::make_shared<android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag>(pattern, cVar0);
	//    .local v2, "patWithSkelFlag":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
	this->skeleton2pattern->put(matcher, patWithSkelFlag);
	this->basePattern_pattern->put(basePattern, patWithSkelFlag);
	return this;
	// 5182    .end local v2    # "patWithSkelFlag":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
label_cond_73:
	cVar0 = cVar1;
	goto label_goto_65;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DateTimePatternGenerator::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar7;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator> result;
	std::shared_ptr<java::util::TreeMap> cVar0;
	std::shared_ptr<java::util::TreeMap> cVar1;
	std::shared_ptr<std::vector<java::lang::String>> cVar2;
	std::shared_ptr<std::vector<java::lang::String>> cVar3;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> cVar4;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_FormatParser> cVar5;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DistanceInfo> cVar6;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	result = this->clone();
	result->checkCast("android::icu::text::DateTimePatternGenerator");
	//    .local v1, "result":Landroid/icu/text/DateTimePatternGenerator;
	cVar0 = this->skeleton2pattern->clone();
	cVar0->checkCast("java::util::TreeMap");
	result->skeleton2pattern = cVar0;
	cVar1 = this->basePattern_pattern->clone();
	cVar1->checkCast("java::util::TreeMap");
	result->basePattern_pattern = cVar1;
	cVar2 = this->appendItemFormats->clone();
	cVar2->checkCast("std::vector<java::lang::String>");
	result->appendItemFormats = cVar2;
	cVar3 = this->appendItemNames->clone();
	cVar3->checkCast("std::vector<java::lang::String>");
	result->appendItemNames = cVar3;
	cVar4 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher>(0x0);
	result->current = cVar4;
	cVar5 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_FormatParser>();
	result->fp = cVar5;
	cVar6 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_DistanceInfo>(0x0);
	result->_distanceInfo = cVar6;
	result->frozen = 0x0;
	//label_try_end_48:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_49;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_48} :catch_49
	return result;
	// 5282    .line 1221
	// 5283    .end local v1    # "result":Landroid/icu/text/DateTimePatternGenerator;
label_catch_49:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar7 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal Error")), getCatchExcetionFromList);
	// throw
	throw cVar7;

}
// .method public cloneAsThawed()Landroid/icu/text/DateTimePatternGenerator;
std::shared_ptr<android::icu::text::DateTimePatternGenerator> android::icu::text::DateTimePatternGenerator::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator> result;
	
	result = this->clone();
	result->checkCast("android::icu::text::DateTimePatternGenerator");
	//    .local v0, "result":Landroid/icu/text/DateTimePatternGenerator;
	this->frozen = 0x0;
	return result;

}
// .method public freeze()Landroid/icu/text/DateTimePatternGenerator;
std::shared_ptr<android::icu::text::DateTimePatternGenerator> android::icu::text::DateTimePatternGenerator::freeze()
{
	
	this->frozen = 0x1;
	return this;

}
// .method public getAppendItemFormat(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getAppendItemFormat(int field)
{
	
	//    .param p1, "field"    # I
	return this->appendItemFormats[field];

}
// .method public getAppendItemName(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getAppendItemName(int field)
{
	
	//    .param p1, "field"    # I
	return this->appendItemNames[field];

}
// .method public getBaseSkeleton(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getBaseSkeleton(std::shared_ptr<java::lang::String> pattern)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->current->set(pattern, this->fp, 0x0);
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_1 .. :try_end_e} :catchall_11
	this->monitor_exit();
	return this->current->getBasePattern();
	// 5413    .line 767
label_catchall_11:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public getBaseSkeletons(Ljava/util/Set;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::DateTimePatternGenerator::getBaseSkeletons(std::shared_ptr<java::util::Set<java::lang::String>> result)
{
	
	std::shared_ptr<java::util::HashSet> result;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 5425        value = {
	// 5426            "(",
	// 5427            "Ljava/util/Set",
	// 5428            "<",
	// 5429            "Ljava/lang/String;",
	// 5430            ">;)",
	// 5431            "Ljava/util/Set",
	// 5432            "<",
	// 5433            "Ljava/lang/String;",
	// 5434            ">;"
	// 5435        }
	// 5436    .end annotation
	//    .local p1, "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( result )     
		goto label_cond_7;
	//    .end local p1    # "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	result = std::make_shared<java::util::HashSet>();
	//    .restart local p1    # "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_7:
	result->addAll(this->basePattern_pattern->keySet());
	return result;

}
// .method public getBestPattern(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getBestPattern(std::shared_ptr<java::lang::String> skeleton)
{
	
	//    .param p1, "skeleton"    # Ljava/lang/String;
	return this->getBestPattern(skeleton, 0x0, 0x0);

}
// .method public getBestPattern(Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getBestPattern(std::shared_ptr<java::lang::String> skeleton,int options)
{
	
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "options"    # I
	return this->getBestPattern(skeleton, 0x0, options);

}
// .method public getCanonicalSkeletonAllowingDuplicates(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getCanonicalSkeletonAllowingDuplicates(std::shared_ptr<java::lang::String> pattern)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 5501    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->current->set(pattern, this->fp, 0x1);
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_1 .. :try_end_e} :catchall_11
	this->monitor_exit();
	return this->current->toCanonicalString();
	// 5530    .line 750
label_catchall_11:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public getDateTimeFormat()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getDateTimeFormat()
{
	
	return this->dateTimeFormat;

}
// .method public getDecimal()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getDecimal()
{
	
	return this->decimal;

}
// .method public getDefaultHourFormatChar()C
char android::icu::text::DateTimePatternGenerator::getDefaultHourFormatChar()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 5562    .end annotation
	return this->defaultHourFormatChar;

}
// .method public getFields(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getFields(std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<java::lang::StringBuilder> newPattern;
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	std::shared_ptr<java::lang::String> item;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 5575    .end annotation
	this->fp->set(pattern);
	newPattern = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "newPattern":Ljava/lang/StringBuilder;
	item_S_iterator = this->fp->getItems()->iterator();
	//    .local v1, "item$iterator":Ljava/util/Iterator;
label_goto_14:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_48;
	item = item_S_iterator->next();
	//    .local v0, "item":Ljava/lang/Object;
	if ( !(item->instanceOf("java::lang::String")) )  
		goto label_cond_2e;
	item->checkCast("java::lang::String");
	//    .end local v0    # "item":Ljava/lang/Object;
	newPattern->append(this->fp->quoteLiteral(item));
	goto label_goto_14;
	// 5632    .line 2006
	// 5633    .restart local v0    # "item":Ljava/lang/Object;
label_cond_2e:
	newPattern->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{")))->append(android::icu::text::DateTimePatternGenerator::getName(item->toString()))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")));
	goto label_goto_14;
	// 5659    .line 2009
	// 5660    .end local v0    # "item":Ljava/lang/Object;
label_cond_48:
	return newPattern->toString();

}
// .method public getRedundants(Ljava/util/Collection;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::lang::String>> android::icu::text::DateTimePatternGenerator::getRedundants(std::shared_ptr<java::util::Collection<java::lang::String>> output)
{
	
	std::shared_ptr<java::util::LinkedHashSet> output;
	std::shared_ptr<java::util::Collection> output;
	std::shared_ptr<java::util::Iterator> cur_S_iterator;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> cur;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag> patternWithSkelFlag;
	std::shared_ptr<java::lang::String> pattern;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 5672        value = {
	// 5673            "(",
	// 5674            "Ljava/util/Collection",
	// 5675            "<",
	// 5676            "Ljava/lang/String;",
	// 5677            ">;)",
	// 5678            "Ljava/util/Collection",
	// 5679            "<",
	// 5680            "Ljava/lang/String;",
	// 5681            ">;"
	// 5682        }
	// 5683    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 5686    .end annotation
	//    .local p1, "output":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	this->monitor_enter();
	if ( output )     
		goto label_cond_9;
	try {
	//label_try_start_3:
	output = std::make_shared<java::util::LinkedHashSet>();
	//    .end local p1    # "output":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	//    .local v2, "output":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	output = output;
	//    .end local v2    # "output":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
	//    .restart local p1    # "output":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/lang/String;>;"
label_cond_9:
	cur_S_iterator = this->skeleton2pattern->keySet()->iterator();
	//    .local v1, "cur$iterator":Ljava/util/Iterator;
label_cond_13:
label_goto_13:
	if ( !(cur_S_iterator->hasNext()) )  
		goto label_cond_47;
	cur = cur_S_iterator->next();
	cur->checkCast("android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher");
	//    .local v0, "cur":Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	patternWithSkelFlag = this->skeleton2pattern->get(cur);
	patternWithSkelFlag->checkCast("android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag");
	//    .local v4, "patternWithSkelFlag":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
	pattern = patternWithSkelFlag->pattern;
	//    .local v3, "pattern":Ljava/lang/String;
	if ( android::icu::text::DateTimePatternGenerator::CANONICAL_SET->contains(pattern) )     
		goto label_cond_13;
	//    .local v5, "trial":Ljava/lang/String;
	if ( !(this->getBestPattern(cur->toString(), cur, 0x0)->equals(pattern)) )  
		goto label_cond_13;
	output->add(pattern);
	//label_try_end_43:
	}
	catch (...){
		goto label_catchall_44;
	}
	//    .catchall {:try_start_3 .. :try_end_43} :catchall_44
	goto label_goto_13;
	// 5785    .line 918
	// 5786    .end local v0    # "cur":Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	// 5787    .end local v1    # "cur$iterator":Ljava/util/Iterator;
	// 5788    .end local v3    # "pattern":Ljava/lang/String;
	// 5789    .end local v4    # "patternWithSkelFlag":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
	// 5790    .end local v5    # "trial":Ljava/lang/String;
label_catchall_44:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 5798    .restart local v1    # "cur$iterator":Ljava/util/Iterator;
label_cond_47:
	this->monitor_exit();
	return output;

}
// .method public getSkeleton(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getSkeleton(std::shared_ptr<java::lang::String> pattern)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->current->set(pattern, this->fp, 0x0);
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_1 .. :try_end_e} :catchall_11
	this->monitor_exit();
	return this->current->toString();
	// 5837    .line 715
label_catchall_11:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public getSkeletonAllowingDuplicates(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::getSkeletonAllowingDuplicates(std::shared_ptr<java::lang::String> pattern)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 5850    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->current->set(pattern, this->fp, 0x1);
	//label_try_end_e:
	}
	catch (...){
		goto label_catchall_11;
	}
	//    .catchall {:try_start_1 .. :try_end_e} :catchall_11
	this->monitor_exit();
	return this->current->toString();
	// 5879    .line 732
label_catchall_11:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public getSkeletons(Ljava/util/Map;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::text::DateTimePatternGenerator::getSkeletons(std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> result)
{
	
	std::shared_ptr<java::util::LinkedHashMap> result;
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher> item;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag> patternWithSkelFlag;
	std::shared_ptr<java::lang::String> pattern;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 5891        value = {
	// 5892            "(",
	// 5893            "Ljava/util/Map",
	// 5894            "<",
	// 5895            "Ljava/lang/String;",
	// 5896            "Ljava/lang/String;",
	// 5897            ">;)",
	// 5898            "Ljava/util/Map",
	// 5899            "<",
	// 5900            "Ljava/lang/String;",
	// 5901            "Ljava/lang/String;",
	// 5902            ">;"
	// 5903        }
	// 5904    .end annotation
	//    .local p1, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( result )     
		goto label_cond_7;
	//    .end local p1    # "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	result = std::make_shared<java::util::LinkedHashMap>();
	//    .restart local p1    # "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_7:
	item_S_iterator = this->skeleton2pattern->keySet()->iterator();
	//    .local v1, "item$iterator":Ljava/util/Iterator;
label_cond_11:
label_goto_11:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_37;
	item = item_S_iterator->next();
	item->checkCast("android::icu::text::DateTimePatternGenerator_S_DateTimeMatcher");
	//    .local v0, "item":Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	patternWithSkelFlag = this->skeleton2pattern->get(item);
	patternWithSkelFlag->checkCast("android::icu::text::DateTimePatternGenerator_S_PatternWithSkeletonFlag");
	//    .local v3, "patternWithSkelFlag":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
	pattern = patternWithSkelFlag->pattern;
	//    .local v2, "pattern":Ljava/lang/String;
	if ( android::icu::text::DateTimePatternGenerator::CANONICAL_SET->contains(pattern) )     
		goto label_cond_11;
	result->put(item->toString(), pattern);
	goto label_goto_11;
	// 5978    .line 799
	// 5979    .end local v0    # "item":Landroid/icu/text/DateTimePatternGenerator$DateTimeMatcher;
	// 5980    .end local v2    # "pattern":Ljava/lang/String;
	// 5981    .end local v3    # "patternWithSkelFlag":Landroid/icu/text/DateTimePatternGenerator$PatternWithSkeletonFlag;
label_cond_37:
	return result;

}
// .method public isFrozen()Z
bool android::icu::text::DateTimePatternGenerator::isFrozen()
{
	
	return this->frozen;

}
// .method public replaceFieldTypes(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::replaceFieldTypes(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> skeleton)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "skeleton"    # Ljava/lang/String;
	return this->replaceFieldTypes(pattern, skeleton, 0x0);

}
// .method public replaceFieldTypes(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateTimePatternGenerator::replaceFieldTypes(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> skeleton,int options)
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_PatternWithMatcher> patternNoMatcher;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "skeleton"    # Ljava/lang/String;
	//    .param p3, "options"    # I
	this->monitor_enter();
	try {
	//label_try_start_1:
	patternNoMatcher = std::make_shared<android::icu::text::DateTimePatternGenerator_S_PatternWithMatcher>(pattern, 0x0);
	//    .local v0, "patternNoMatcher":Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;
	//label_try_end_19:
	}
	catch (...){
		goto label_catchall_1c;
	}
	//    .catchall {:try_start_1 .. :try_end_19} :catchall_1c
	this->monitor_exit();
	return this->adjustFieldTypes(patternNoMatcher, this->current->set(skeleton, this->fp, 0x0), java::util::EnumSet::noneOf(android::icu::text::DateTimePatternGenerator_S_DTPGflags()), options);
	// 6058    .line 843
	// 6059    .end local v0    # "patternNoMatcher":Landroid/icu/text/DateTimePatternGenerator$PatternWithMatcher;
label_catchall_1c:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public setAppendItemFormat(ILjava/lang/String;)V
void android::icu::text::DateTimePatternGenerator::setAppendItemFormat(int field,std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "field"    # I
	//    .param p2, "value"    # Ljava/lang/String;
	this->checkFrozen();
	this->appendItemFormats[field] = value;
	return;

}
// .method public setAppendItemName(ILjava/lang/String;)V
void android::icu::text::DateTimePatternGenerator::setAppendItemName(int field,std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "field"    # I
	//    .param p2, "value"    # Ljava/lang/String;
	this->checkFrozen();
	this->appendItemNames[field] = value;
	return;

}
// .method public setDateTimeFormat(Ljava/lang/String;)V
void android::icu::text::DateTimePatternGenerator::setDateTimeFormat(std::shared_ptr<java::lang::String> dateTimeFormat)
{
	
	//    .param p1, "dateTimeFormat"    # Ljava/lang/String;
	this->checkFrozen();
	this->dateTimeFormat = dateTimeFormat;
	return;

}
// .method public setDecimal(Ljava/lang/String;)V
void android::icu::text::DateTimePatternGenerator::setDecimal(std::shared_ptr<java::lang::String> decimal)
{
	
	//    .param p1, "decimal"    # Ljava/lang/String;
	this->checkFrozen();
	this->decimal = decimal;
	return;

}
// .method public setDefaultHourFormatChar(C)V
void android::icu::text::DateTimePatternGenerator::setDefaultHourFormatChar(char defaultHourFormatChar)
{
	
	//    .param p1, "defaultHourFormatChar"    # C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 6138    .end annotation
	this->defaultHourFormatChar = defaultHourFormatChar;
	return;

}
// .method public skeletonsAreSimilar(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::text::DateTimePatternGenerator::skeletonsAreSimilar(std::shared_ptr<java::lang::String> id,std::shared_ptr<java::lang::String> skeleton)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::util::TreeSet> parser1;
	std::shared_ptr<java::util::TreeSet> parser2;
	std::shared_ptr<java::util::Iterator> item_S_iterator;
	std::shared_ptr<java::lang::String> item;
	std::shared_ptr<java::lang::String> item2;
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "skeleton"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 6153    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( !(id->equals(skeleton)) )  
		goto label_cond_9;
	return cVar0;
	// 6170    .line 1674
label_cond_9:
	parser1 = this->getSet(id);
	//    .local v6, "parser1":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
	parser2 = this->getSet(skeleton);
	//    .local v7, "parser2":Ljava/util/TreeSet;, "Ljava/util/TreeSet<Ljava/lang/String;>;"
	if ( parser1->size() == parser2->size() )
		goto label_cond_1c;
	return cVar1;
	// 6197    .line 1679
label_cond_1c:
	//    .local v2, "it2":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	item_S_iterator = parser1->iterator();
	//    .local v4, "item$iterator":Ljava/util/Iterator;
label_cond_24:
	if ( !(item_S_iterator->hasNext()) )  
		goto label_cond_4d;
	item = item_S_iterator->next();
	item->checkCast("java::lang::String");
	//    .local v3, "item":Ljava/lang/String;
	//    .local v0, "index1":I
	item2 = parser2->iterator()->next();
	item2->checkCast("java::lang::String");
	//    .local v5, "item2":Ljava/lang/String;
	//    .local v1, "index2":I
	if ( android::icu::text::DateTimePatternGenerator::types[android::icu::text::DateTimePatternGenerator::getCanonicalIndex(item, cVar1)][cVar0] == android::icu::text::DateTimePatternGenerator::types[android::icu::text::DateTimePatternGenerator::getCanonicalIndex(item2, cVar1)][cVar0] )
		goto label_cond_24;
	return cVar1;
	// 6262    .line 1688
	// 6263    .end local v0    # "index1":I
	// 6264    .end local v1    # "index2":I
	// 6265    .end local v3    # "item":Ljava/lang/String;
	// 6266    .end local v5    # "item2":Ljava/lang/String;
label_cond_4d:
	return cVar0;

}


