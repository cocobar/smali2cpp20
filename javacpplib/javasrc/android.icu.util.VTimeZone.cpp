// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\VTimeZone.smali
#include "java2ctype.h"
#include "android.icu.impl.Grego.h"
#include "android.icu.util.AnnualTimeZoneRule.h"
#include "android.icu.util.BasicTimeZone.h"
#include "android.icu.util.DateTimeRule.h"
#include "android.icu.util.InitialTimeZoneRule.h"
#include "android.icu.util.RuleBasedTimeZone.h"
#include "android.icu.util.TimeArrayTimeZoneRule.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.TimeZoneRule.h"
#include "android.icu.util.TimeZoneTransition.h"
#include "android.icu.util.VTimeZone.h"
#include "java.io.BufferedWriter.h"
#include "java.io.IOException.h"
#include "java.io.Reader.h"
#include "java.io.Writer.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.ArrayList.h"
#include "java.util.Date.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedList.h"
#include "java.util.List.h"
#include "java.util.MissingResourceException.h"
#include "java.util.StringTokenizer.h"

static android::icu::util::VTimeZone::_assertionsDisabled;
static android::icu::util::VTimeZone::COLON = std::make_shared<java::lang::String>(":");
static android::icu::util::VTimeZone::COMMA = std::make_shared<java::lang::String>(",");
static android::icu::util::VTimeZone::DEF_DSTSAVINGS = 0x36ee80;
static android::icu::util::VTimeZone::DEF_TZSTARTTIME = 0x0L;
static android::icu::util::VTimeZone::EQUALS_SIGN = std::make_shared<java::lang::String>("=");
static android::icu::util::VTimeZone::ERR = 0x3;
static android::icu::util::VTimeZone::ICAL_BEGIN = std::make_shared<java::lang::String>("BEGIN");
static android::icu::util::VTimeZone::ICAL_BEGIN_VTIMEZONE = std::make_shared<java::lang::String>("BEGIN:VTIMEZONE");
static android::icu::util::VTimeZone::ICAL_BYDAY = std::make_shared<java::lang::String>("BYDAY");
static android::icu::util::VTimeZone::ICAL_BYMONTH = std::make_shared<java::lang::String>("BYMONTH");
static android::icu::util::VTimeZone::ICAL_BYMONTHDAY = std::make_shared<java::lang::String>("BYMONTHDAY");
static android::icu::util::VTimeZone::ICAL_DAYLIGHT = std::make_shared<java::lang::String>("DAYLIGHT");
static android::icu::util::VTimeZone::ICAL_DOW_NAMES;
static android::icu::util::VTimeZone::ICAL_DTSTART = std::make_shared<java::lang::String>("DTSTART");
static android::icu::util::VTimeZone::ICAL_END = std::make_shared<java::lang::String>("END");
static android::icu::util::VTimeZone::ICAL_END_VTIMEZONE = std::make_shared<java::lang::String>("END:VTIMEZONE");
static android::icu::util::VTimeZone::ICAL_FREQ = std::make_shared<java::lang::String>("FREQ");
static android::icu::util::VTimeZone::ICAL_LASTMOD = std::make_shared<java::lang::String>("LAST-MODIFIED");
static android::icu::util::VTimeZone::ICAL_RDATE = std::make_shared<java::lang::String>("RDATE");
static android::icu::util::VTimeZone::ICAL_RRULE = std::make_shared<java::lang::String>("RRULE");
static android::icu::util::VTimeZone::ICAL_STANDARD = std::make_shared<java::lang::String>("STANDARD");
static android::icu::util::VTimeZone::ICAL_TZID = std::make_shared<java::lang::String>("TZID");
static android::icu::util::VTimeZone::ICAL_TZNAME = std::make_shared<java::lang::String>("TZNAME");
static android::icu::util::VTimeZone::ICAL_TZOFFSETFROM = std::make_shared<java::lang::String>("TZOFFSETFROM");
static android::icu::util::VTimeZone::ICAL_TZOFFSETTO = std::make_shared<java::lang::String>("TZOFFSETTO");
static android::icu::util::VTimeZone::ICAL_TZURL = std::make_shared<java::lang::String>("TZURL");
static android::icu::util::VTimeZone::ICAL_UNTIL = std::make_shared<java::lang::String>("UNTIL");
static android::icu::util::VTimeZone::ICAL_VTIMEZONE = std::make_shared<java::lang::String>("VTIMEZONE");
static android::icu::util::VTimeZone::ICAL_YEARLY = std::make_shared<java::lang::String>("YEARLY");
static android::icu::util::VTimeZone::ICU_TZINFO_PROP = std::make_shared<java::lang::String>("X-TZINFO");
static android::icu::util::VTimeZone::ICU_TZVERSION = nullptr;
static android::icu::util::VTimeZone::INI = 0x0;
static android::icu::util::VTimeZone::MAX_TIME = 0x7fffffffffffffffL;
static android::icu::util::VTimeZone::MIN_TIME = -0x8000000000000000L;
static android::icu::util::VTimeZone::MONTHLENGTH;
static android::icu::util::VTimeZone::NEWLINE = std::make_shared<java::lang::String>("\r\n");
static android::icu::util::VTimeZone::SEMICOLON = std::make_shared<java::lang::String>(";");
static android::icu::util::VTimeZone::TZI = 0x2;
static android::icu::util::VTimeZone::VTZ = 0x1;
static android::icu::util::VTimeZone::serialVersionUID = -0x5f154d3410b1aebeL;
// .method static constructor <clinit>()V
void android::icu::util::VTimeZone::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	std::shared<std::vector<int[]>> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	android::icu::util::VTimeZone::_assertionsDisabled = ( android::icu::util::VTimeZone()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x7);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SU"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MO"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TU"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("WE"));
	cVar0[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("TH"));
	cVar0[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FR"));
	cVar0[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SA"));
	android::icu::util::VTimeZone::ICAL_DOW_NAMES = cVar0;
	cVar1 = std::make_shared<std::vector<int[]>>(0xc);
	?;
	android::icu::util::VTimeZone::MONTHLENGTH = cVar1;
	try {
	//label_try_start_42:
	android::icu::util::VTimeZone::ICU_TZVERSION = android::icu::util::TimeZone::getTZDataVersion({const[class].FS-Param});
	//label_try_end_48:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_49;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_42 .. :try_end_48} :catch_49
	//    .local v0, "e":Ljava/util/MissingResourceException;
label_goto_48:
	return;
	// 202    .line 427
	// 203    .end local v0    # "e":Ljava/util/MissingResourceException;
label_catch_49:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "e":Ljava/util/MissingResourceException;
	android::icu::util::VTimeZone::ICU_TZVERSION = 0x0;
	goto label_goto_48;
	// 215    .line 421
	// 216    :array_4e
	// 217    .array-data 4
	// 218        0x1f
	// 219        0x1c
	// 220        0x1f
	// 221        0x1e
	// 222        0x1f
	// 223        0x1e
	// 224        0x1f
	// 225        0x1f
	// 226        0x1e
	// 227        0x1f
	// 228        0x1e
	// 229        0x1f
	// 230    .end array-data

}
// .method private constructor <init>()V
android::icu::util::VTimeZone::VTimeZone()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	cVar0 = 0x0;
	// 240    invoke-direct {p0}, Landroid/icu/util/BasicTimeZone;-><init>()V
	this->olsonzid = cVar0;
	this->tzurl = cVar0;
	this->lastmod = cVar0;
	this->isFrozen = 0x0;
	return;

}
// .method private constructor <init>(Ljava/lang/String;)V
android::icu::util::VTimeZone::VTimeZone(std::shared_ptr<java::lang::String> tzid)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "tzid"    # Ljava/lang/String;
	cVar0 = 0x0;
	android::icu::util::BasicTimeZone::(tzid);
	this->olsonzid = cVar0;
	this->tzurl = cVar0;
	this->lastmod = cVar0;
	this->isFrozen = 0x0;
	return;

}
// .method private static appendUNTIL(Ljava/io/Writer;Ljava/lang/String;)V
void android::icu::util::VTimeZone::appendUNTIL(std::shared_ptr<java::io::Writer> writer,std::shared_ptr<java::lang::String> until)
{
	
	//    .param p0, "writer"    # Ljava/io/Writer;
	//    .param p1, "until"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 293        value = {
	// 294            Ljava/io/IOException;
	// 295        }
	// 296    .end annotation
	if ( !(until) )  
		goto label_cond_17;
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNTIL")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")));
	writer->write(until);
label_cond_17:
	return;

}
// .method private static beginRRULE(Ljava/io/Writer;I)V
void android::icu::util::VTimeZone::beginRRULE(std::shared_ptr<java::io::Writer> writer,int month)
{
	
	//    .param p0, "writer"    # Ljava/io/Writer;
	//    .param p1, "month"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 330        value = {
	// 331            Ljava/io/IOException;
	// 332        }
	// 333    .end annotation
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("RRULE")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("FREQ")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("YEARLY")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("BYMONTH")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")));
	writer->write(java::lang::Integer::toString(( month + 0x1)));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
	return;

}
// .method private static beginZoneProps(Ljava/io/Writer;ZLjava/lang/String;IIJ)V
void android::icu::util::VTimeZone::beginZoneProps(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<java::lang::String> tzname,int fromOffset,int toOffset,long long startTime)
{
	
	//    .param p0, "writer"    # Ljava/io/Writer;
	//    .param p1, "isDst"    # Z
	//    .param p2, "tzname"    # Ljava/lang/String;
	//    .param p3, "fromOffset"    # I
	//    .param p4, "toOffset"    # I
	//    .param p5, "startTime"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 403        value = {
	// 404            Ljava/io/IOException;
	// 405        }
	// 406    .end annotation
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("BEGIN")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	if ( !(isDst) )  
		goto label_cond_7d;
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("DAYLIGHT")));
label_goto_14:
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZOFFSETTO")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	writer->write(android::icu::util::VTimeZone::millisToOffset(toOffset));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZOFFSETFROM")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	writer->write(android::icu::util::VTimeZone::millisToOffset(fromOffset));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZNAME")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	writer->write(tzname);
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("DTSTART")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	writer->write(android::icu::util::VTimeZone::getDateTimeString(((long long)(fromOffset) +  startTime)));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	return;
	// 524    .line 1780
label_cond_7d:
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("STANDARD")));
	goto label_goto_14;

}
// .method public static create(Ljava/io/Reader;)Landroid/icu/util/VTimeZone;
std::shared_ptr<android::icu::util::VTimeZone> android::icu::util::VTimeZone::create(std::shared_ptr<java::io::Reader> reader)
{
	
	std::shared_ptr<android::icu::util::VTimeZone> vtz;
	
	//    .param p0, "reader"    # Ljava/io/Reader;
	vtz = std::make_shared<android::icu::util::VTimeZone>();
	//    .local v0, "vtz":Landroid/icu/util/VTimeZone;
	if ( !(vtz->load(reader)) )  
		goto label_cond_c;
	return vtz;
	// 554    .line 74
label_cond_c:
	return 0x0;

}
// .method public static create(Ljava/lang/String;)Landroid/icu/util/VTimeZone;
std::shared_ptr<android::icu::util::VTimeZone> android::icu::util::VTimeZone::create(std::shared_ptr<java::lang::String> tzid)
{
	
	std::shared_ptr<android::icu::util::BasicTimeZone> basicTimeZone;
	std::shared_ptr<android::icu::util::VTimeZone> vtz;
	std::shared_ptr<android::icu::util::BasicTimeZone> cVar0;
	
	//    .param p0, "tzid"    # Ljava/lang/String;
	basicTimeZone = android::icu::util::TimeZone::getFrozenICUTimeZone(tzid, 0x1);
	//    .local v0, "basicTimeZone":Landroid/icu/util/BasicTimeZone;
	if ( basicTimeZone )     
		goto label_cond_9;
	return 0x0;
	// 582    .line 55
label_cond_9:
	vtz = std::make_shared<android::icu::util::VTimeZone>(tzid);
	//    .local v1, "vtz":Landroid/icu/util/VTimeZone;
	cVar0 = basicTimeZone->cloneAsThawed();
	cVar0->checkCast("android::icu::util::BasicTimeZone");
	vtz->tz = cVar0;
	vtz->olsonzid = vtz->tz->getID();
	return vtz;

}
// .method private static createRuleByRDATE(Ljava/lang/String;IIJLjava/util/List;I)Landroid/icu/util/TimeZoneRule;
std::shared_ptr<android::icu::util::TimeZoneRule> android::icu::util::VTimeZone::createRuleByRDATE(std::shared_ptr<java::lang::String> tzname,int rawOffset,int dstSavings,long long start,std::shared_ptr<java::util::List<java::lang::String>> dates,int fromOffset)
{
	
	std::shared<std::vector<long long[]>> times;
	std::shared_ptr<android::icu::util::TimeArrayTimeZoneRule> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Iterator> date_S_iterator;
	int idx;
	std::shared_ptr<java::lang::String> date;
	
	//    .param p0, "tzname"    # Ljava/lang/String;
	//    .param p1, "rawOffset"    # I
	//    .param p2, "dstSavings"    # I
	//    .param p3, "start"    # J
	//    .param p6, "fromOffset"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 619        value = {
	// 620            "(",
	// 621            "Ljava/lang/String;",
	// 622            "IIJ",
	// 623            "Ljava/util/List",
	// 624            "<",
	// 625            "Ljava/lang/String;",
	// 626            ">;I)",
	// 627            "Landroid/icu/util/TimeZoneRule;"
	// 628        }
	// 629    .end annotation
	//    .local p5, "dates":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	if ( !(dates) )  
		goto label_cond_8;
	if ( dates->size() )     
		goto label_cond_18;
label_cond_8:
	times = std::make_shared<std::vector<long long[]>>(0x1);
	//    .local v6, "times":[J
	times[0x0] = start;
label_cond_e:
	cVar0 = std::make_shared<android::icu::util::TimeArrayTimeZoneRule>(tzname, rawOffset, dstSavings, times, 0x2);
	return cVar0;
	// 670    .line 1200
	// 671    .end local v6    # "times":[J
label_cond_18:
	times = std::make_shared<std::vector<long long[]>>(dates->size());
	//    .restart local v6    # "times":[J
	//    .local v11, "idx":I
	try {
	//label_try_start_1f:
	//label_try_end_22:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3c;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_1f .. :try_end_22} :catch_3c
	date_S_iterator = dates->iterator();
	//    .local v9, "date$iterator":Ljava/util/Iterator;
	idx = 0x0;
	//    .end local v11    # "idx":I
	//    .local v12, "idx":I
label_goto_24:
	try {
	//label_try_start_24:
	if ( !(date_S_iterator->hasNext()) )  
		goto label_cond_e;
	date = date_S_iterator->next();
	date->checkCast("java::lang::String");
	//label_try_end_30:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3f;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_24 .. :try_end_30} :catch_3f
	//    .local v8, "date":Ljava/lang/String;
	//    .end local v12    # "idx":I
	//    .restart local v11    # "idx":I
	try {
	//label_try_start_32:
	times[idx] = android::icu::util::VTimeZone::parseDateTimeString(date, fromOffset);
	//label_try_end_3a:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3c;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_32 .. :try_end_3a} :catch_3c
	idx = ( idx + 0x1);
	//    .end local v11    # "idx":I
	//    .restart local v12    # "idx":I
	goto label_goto_24;
	// 736    .line 1206
	// 737    .end local v8    # "date":Ljava/lang/String;
	// 738    .end local v9    # "date$iterator":Ljava/util/Iterator;
	// 739    .end local v12    # "idx":I
	// 740    .restart local v11    # "idx":I
label_catch_3c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v10, "iae":Ljava/lang/IllegalArgumentException;
label_goto_3d:
	return 0x0;
	// 751    .line 1206
	// 752    .end local v10    # "iae":Ljava/lang/IllegalArgumentException;
	// 753    .end local v11    # "idx":I
	// 754    .restart local v9    # "date$iterator":Ljava/util/Iterator;
	// 755    .restart local v12    # "idx":I
label_catch_3f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v10    # "iae":Ljava/lang/IllegalArgumentException;
	idx;
	//    .end local v12    # "idx":I
	//    .restart local v11    # "idx":I
	goto label_goto_3d;

}
// .method private static createRuleByRRULE(Ljava/lang/String;IIJLjava/util/List;I)Landroid/icu/util/TimeZoneRule;
std::shared_ptr<android::icu::util::TimeZoneRule> android::icu::util::VTimeZone::createRuleByRRULE(std::shared_ptr<java::lang::String> tzname,int rawOffset,int dstSavings,long long start,std::shared_ptr<java::util::List<java::lang::String>> dates,int fromOffset)
{
	
	std::shared_ptr<java::lang::String> rrule;
	auto until;
	auto ruleFields;
	int month;
	int dayOfWeek;
	int nthDayOfWeek;
	int firstDay;
	auto days;
	int i;
	int cVar0;
	int j;
	auto dfields;
	int dayOfMonth;
	int timeInDay;
	std::shared_ptr<android::icu::util::DateTimeRule> adtr;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> cVar2;
	int earliestMonth;
	int daysCount;
	int earliestDay;
	int dom;
	int anotherMonth;
	auto unt;
	auto fields;
	int count;
	int diff;
	
	//    .param p0, "tzname"    # Ljava/lang/String;
	//    .param p1, "rawOffset"    # I
	//    .param p2, "dstSavings"    # I
	//    .param p3, "start"    # J
	//    .param p6, "fromOffset"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 775        value = {
	// 776            "(",
	// 777            "Ljava/lang/String;",
	// 778            "IIJ",
	// 779            "Ljava/util/List",
	// 780            "<",
	// 781            "Ljava/lang/String;",
	// 782            ">;I)",
	// 783            "Landroid/icu/util/TimeZoneRule;"
	// 784        }
	// 785    .end annotation
	//    .local p5, "dates":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	if ( !(dates) )  
		goto label_cond_8;
	if ( dates->size() )     
		goto label_cond_a;
label_cond_8:
	return 0x0;
	// 804    .line 838
label_cond_a:
	rrule = dates->get(0x0);
	rrule->checkCast("java::lang::String");
	//    .local v31, "rrule":Ljava/lang/String;
	until = std::make_shared<std::vector<long long[]>>(0x1);
	//    .local v34, "until":[J
	ruleFields = android::icu::util::VTimeZone::parseRRULE(rrule, until);
	//    .local v32, "ruleFields":[I
	if ( ruleFields )     
		goto label_cond_24;
	return 0x0;
	// 843    .line 847
label_cond_24:
	month = ruleFields[0x0];
	//    .local v3, "month":I
	dayOfWeek = ruleFields[0x1];
	//    .local v5, "dayOfWeek":I
	nthDayOfWeek = ruleFields[0x2];
	//    .local v4, "nthDayOfWeek":I
	//    .local v9, "dayOfMonth":I
	if ( dates->size() != 0x1 )
		goto label_cond_f0;
	if ( ruleFields->size() <= 0x4 )
		goto label_cond_a0;
	if ( ruleFields->size() != 0xa )
		goto label_cond_47;
	if ( month != -0x1 )
		goto label_cond_49;
label_cond_47:
	return 0x0;
	// 905    .line 857
label_cond_49:
	if ( !(dayOfWeek) )  
		goto label_cond_47;
	firstDay = 0x1f;
	//    .local v27, "firstDay":I
	days = std::make_shared<std::vector<int[]>>(0x7);
	//    .local v19, "days":[I
	i = 0x0;
	//    .local v29, "i":I
label_goto_54:
	if ( i >= 0x7 )
		goto label_cond_7c;
	days[i] = ruleFields[( i + 0x3)];
	if ( days[i] <= 0 )
		goto label_cond_72;
	cVar0 = days[i];
label_goto_65:
	days[i] = cVar0;
	if ( days[i] >= firstDay )
		goto label_cond_6f;
	firstDay = days[i];
label_cond_6f:
	i = ( i + 0x1);
	goto label_goto_54;
	// 964    .line 869
label_cond_72:
	cVar0 = ( (android::icu::util::VTimeZone::MONTHLENGTH[month] +  days[i]) + 0x1);
	goto label_goto_65;
	// 978    .line 873
label_cond_7c:
	i = 0x1;
label_goto_7e:
	if ( i >= 0x7 )
		goto label_cond_9e;
	//    .local v28, "found":Z
	j = 0x0;
	//    .local v30, "j":I
label_goto_87:
	if ( j >= 0x7 )
		goto label_cond_94;
	if ( days[j] != (firstDay + i) )
		goto label_cond_98;
label_cond_94:
	if ( 0x0 )     
		goto label_cond_9b;
	return 0x0;
	// 1023    .line 875
label_cond_98:
	j = ( j + 0x1);
	goto label_goto_87;
	// 1029    .line 873
label_cond_9b:
	i = ( i + 0x1);
	goto label_goto_7e;
	// 1035    .line 887
	// 1036    .end local v28    # "found":Z
	// 1037    .end local v30    # "j":I
label_cond_9e:
	//    .end local v19    # "days":[I
	//    .end local v27    # "firstDay":I
	//    .end local v29    # "i":I
label_cond_a0:
label_goto_a0:
	dfields = android::icu::impl::Grego::timeToFields(((long long)(fromOffset) + start), 0x0);
	//    .local v21, "dfields":[I
	//    .local v15, "startYear":I
	if ( month != -0x1 )
		goto label_cond_b3;
	month = dfields[0x1];
label_cond_b3:
	if ( dayOfWeek )     
		goto label_cond_bc;
	if ( nthDayOfWeek )     
		goto label_cond_bc;
	if ( firstDay )     
		goto label_cond_bc;
	dayOfMonth = dfields[0x2];
label_cond_bc:
	timeInDay = dfields[0x5];
	//    .local v6, "timeInDay":I
	0x7fffffff;
	//    .local v16, "endYear":I
	if ( !((until[0x0] > -0x8000000000000000L)) )  
		goto label_cond_d6;
	android::icu::impl::Grego::timeToFields(until[0x0], dfields);
label_cond_d6:
	0x0;
	//    .local v2, "adtr":Landroid/icu/util/DateTimeRule;
	if ( dayOfWeek )     
		goto label_cond_200;
	if ( nthDayOfWeek )     
		goto label_cond_200;
	if ( !(dayOfMonth) )  
		goto label_cond_200;
	//    .end local v2    # "adtr":Landroid/icu/util/DateTimeRule;
	adtr = std::make_shared<android::icu::util::DateTimeRule>(month, dayOfMonth, timeInDay, 0x0);
	//    .local v2, "adtr":Landroid/icu/util/DateTimeRule;
label_goto_e3:
	cVar2 = std::make_shared<android::icu::util::AnnualTimeZoneRule>(tzname, rawOffset, dstSavings, adtr, dfields[0x0], dfields[0x0]);
	return cVar2;
	// 1162    .line 892
	// 1163    .end local v2    # "adtr":Landroid/icu/util/DateTimeRule;
	// 1164    .end local v6    # "timeInDay":I
	// 1165    .end local v15    # "startYear":I
	// 1166    .end local v16    # "endYear":I
	// 1167    .end local v21    # "dfields":[I
label_cond_f0:
	if ( month == -0x1 )
		goto label_cond_f5;
	if ( dayOfWeek )     
		goto label_cond_f7;
label_cond_f5:
	return 0x0;
	// 1181    .line 892
label_cond_f7:
	if ( !(ruleFields[0x3]) )  
		goto label_cond_f5;
	if ( dates->size() <= 0x7 )
		goto label_cond_102;
	return 0x0;
	// 1199    .line 906
label_cond_102:
	earliestMonth = month;
	//    .local v25, "earliestMonth":I
	daysCount = ( ruleFields->size() + -0x3);
	//    .local v20, "daysCount":I
	earliestDay = 0x1f;
	//    .local v24, "earliestDay":I
	i = 0x0;
	//    .restart local v29    # "i":I
label_goto_10d:
	if ( i >= daysCount )
		goto label_cond_12d;
	dom = ruleFields[( i + 0x3)];
	//    .local v23, "dom":I
	if ( dom <= 0 )
		goto label_cond_124;
label_goto_119:
	if ( dom >= earliestDay )
		goto label_cond_121;
	earliestDay = dom;
label_cond_121:
	i = ( i + 0x1);
	goto label_goto_10d;
	// 1252    .line 911
label_cond_124:
	dom = ( (android::icu::util::VTimeZone::MONTHLENGTH[month] + dom) + 0x1);
	goto label_goto_119;
	// 1264    .line 915
	// 1265    .end local v23    # "dom":I
label_cond_12d:
	anotherMonth = -0x1;
	//    .local v17, "anotherMonth":I
	i = 0x1;
label_goto_131:
	if ( i >= dates->size() )
		goto label_cond_1f3;
	rrule = dates->get(i);
	//    .end local v31    # "rrule":Ljava/lang/String;
	rrule->checkCast("java::lang::String");
	//    .restart local v31    # "rrule":Ljava/lang/String;
	unt = std::make_shared<std::vector<long long[]>>(0x1);
	//    .local v33, "unt":[J
	fields = android::icu::util::VTimeZone::parseRRULE(rrule, unt);
	//    .local v26, "fields":[I
	if ( (unt[0x0] > until[0x0]) <= 0 )
		goto label_cond_15c;
	until = unt;
label_cond_15c:
	if ( fields[0x0] == -0x1 )
		goto label_cond_167;
	if ( fields[0x1] )     
		goto label_cond_169;
label_cond_167:
	return 0x0;
	// 1351    .line 927
label_cond_169:
	if ( !(fields[0x3]) )  
		goto label_cond_167;
	count = ( fields->size() + -0x3);
	//    .local v18, "count":I
	if ( (daysCount + count) <= 0x7 )
		goto label_cond_17a;
	return 0x0;
	// 1379    .line 938
label_cond_17a:
	if ( fields[0x1] == dayOfWeek )
		goto label_cond_181;
	return 0x0;
	// 1392    .line 942
label_cond_181:
	if ( fields[0x0] == month )
		goto label_cond_1a2;
	if ( anotherMonth != -0x1 )
		goto label_cond_1d3;
	diff = (fields[0x0] - month);
	//    .local v22, "diff":I
	if ( diff == -0xb )
		goto label_cond_19b;
	if ( diff != -0x1 )
		goto label_cond_1c2;
label_cond_19b:
	anotherMonth = fields[0x0];
	earliestDay = 0x1f;
	//    .end local v22    # "diff":I
label_cond_1a2:
label_goto_1a2:
	if ( fields[0x0] != earliestMonth )
		goto label_cond_1ed;
	j = 0x0;
	//    .restart local v30    # "j":I
label_goto_1ab:
	if ( j >= count )
		goto label_cond_1ed;
	dom = fields[( j + 0x3)];
	//    .restart local v23    # "dom":I
	if ( dom <= 0 )
		goto label_cond_1e1;
label_goto_1b7:
	if ( dom >= earliestDay )
		goto label_cond_1bf;
	earliestDay = dom;
label_cond_1bf:
	j = ( j + 0x1);
	goto label_goto_1ab;
	// 1488    .line 951
	// 1489    .end local v23    # "dom":I
	// 1490    .end local v30    # "j":I
	// 1491    .restart local v22    # "diff":I
label_cond_1c2:
	if ( diff == 0xb )
		goto label_cond_1cd;
	if ( diff != 0x1 )
		goto label_cond_1d1;
label_cond_1cd:
	anotherMonth = fields[0x0];
	goto label_goto_1a2;
	// 1513    .line 956
label_cond_1d1:
	return 0x0;
	// 1519    .line 958
	// 1520    .end local v22    # "diff":I
label_cond_1d3:
	if ( fields[0x0] == month )
		goto label_cond_1a2;
	if ( fields[0x0] == anotherMonth )
		goto label_cond_1a2;
	return 0x0;
	// 1541    .line 967
	// 1542    .restart local v23    # "dom":I
	// 1543    .restart local v30    # "j":I
label_cond_1e1:
	dom = ( (android::icu::util::VTimeZone::MONTHLENGTH[fields[0x0]] + dom) + 0x1);
	goto label_goto_1b7;
	// 1559    .line 971
	// 1560    .end local v23    # "dom":I
	// 1561    .end local v30    # "j":I
label_cond_1ed:
	daysCount = (daysCount + count);
	i = ( i + 0x1);
	goto label_goto_131;
	// 1570    .line 973
	// 1571    .end local v18    # "count":I
	// 1572    .end local v26    # "fields":[I
	// 1573    .end local v33    # "unt":[J
label_cond_1f3:
	if ( daysCount == 0x7 )
		goto label_cond_1fa;
	return 0x0;
	// 1586    .line 977
label_cond_1fa:
	month = earliestMonth;
	earliestDay;
	goto label_goto_a0;
	// 1595    .line 1005
	// 1596    .end local v17    # "anotherMonth":I
	// 1597    .end local v20    # "daysCount":I
	// 1598    .end local v24    # "earliestDay":I
	// 1599    .end local v25    # "earliestMonth":I
	// 1600    .end local v29    # "i":I
	// 1601    .local v2, "adtr":Landroid/icu/util/DateTimeRule;
	// 1602    .restart local v6    # "timeInDay":I
	// 1603    .restart local v15    # "startYear":I
	// 1604    .restart local v16    # "endYear":I
	// 1605    .restart local v21    # "dfields":[I
label_cond_200:
	if ( !(dayOfWeek) )  
		goto label_cond_20e;
	if ( !(nthDayOfWeek) )  
		goto label_cond_20e;
	if ( dayOfMonth )     
		goto label_cond_20e;
	//    .end local v2    # "adtr":Landroid/icu/util/DateTimeRule;
	adtr = std::make_shared<android::icu::util::DateTimeRule>(month, nthDayOfWeek, dayOfWeek, timeInDay, 0x0);
	//    .local v2, "adtr":Landroid/icu/util/DateTimeRule;
	goto label_goto_e3;
	// 1625    .line 1008
	// 1626    .local v2, "adtr":Landroid/icu/util/DateTimeRule;
label_cond_20e:
	if ( !(dayOfWeek) )  
		goto label_cond_221;
	if ( nthDayOfWeek )     
		goto label_cond_221;
	if ( !(dayOfMonth) )  
		goto label_cond_221;
	//    .end local v2    # "adtr":Landroid/icu/util/DateTimeRule;
	var232 = adtr(month, dayOfMonth, dayOfWeek, 0x1, timeInDay, 0x0);
	//    .local v2, "adtr":Landroid/icu/util/DateTimeRule;
	goto label_goto_e3;
	// 1656    .line 1014
	// 1657    .local v2, "adtr":Landroid/icu/util/DateTimeRule;
label_cond_221:
	return 0x0;

}
// .method private static endZoneProps(Ljava/io/Writer;Z)V
void android::icu::util::VTimeZone::endZoneProps(std::shared_ptr<java::io::Writer> writer,bool isDst)
{
	
	//    .param p0, "writer"    # Ljava/io/Writer;
	//    .param p1, "isDst"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1669        value = {
	// 1670            Ljava/io/IOException;
	// 1671        }
	// 1672    .end annotation
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("END")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	if ( !(isDst) )  
		goto label_cond_1b;
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("DAYLIGHT")));
label_goto_14:
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	return;
	// 1702    .line 1819
label_cond_1b:
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("STANDARD")));
	goto label_goto_14;

}
// .method private static getDateTimeString(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::VTimeZone::getDateTimeString(long long time)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	auto fields;
	std::shared_ptr<java::lang::StringBuilder> sb;
	int t;
	
	//    .param p0, "time"    # J
	cVar0 = 0x36ee80;
	cVar1 = 0xea60;
	cVar2 = 0x2;
	fields = android::icu::impl::Grego::timeToFields(time, 0x0);
	//    .local v0, "fields":[I
	sb = std::make_shared<java::lang::StringBuilder>(0xf);
	//    .local v3, "sb":Ljava/lang/StringBuilder;
	sb->append(android::icu::util::VTimeZone::numToString(fields[0x0], 0x4));
	sb->append(android::icu::util::VTimeZone::numToString(( fields[0x1] + 0x1), cVar2));
	sb->append(android::icu::util::VTimeZone::numToString(fields[cVar2], cVar2));
	sb->append(0x54);
	t = fields[0x5];
	//    .local v5, "t":I
	//    .local v1, "hour":I
	t = (t %  cVar0);
	//    .local v2, "min":I
	//    .local v4, "sec":I
	sb->append(android::icu::util::VTimeZone::numToString((t / cVar0), cVar2));
	sb->append(android::icu::util::VTimeZone::numToString((t / cVar1), cVar2));
	sb->append(android::icu::util::VTimeZone::numToString(( (t %  cVar1) / 0x3e8), cVar2));
	return sb->toString();

}
// .method private static getDefaultTZName(Ljava/lang/String;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::VTimeZone::getDefaultTZName(std::shared_ptr<java::lang::String> tzid,bool isDST)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "tzid"    # Ljava/lang/String;
	//    .param p1, "isDST"    # Z
	if ( !(isDST) )  
		goto label_cond_17;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(tzid)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(DST)")))->toString();
	// 1861    .line 826
label_cond_17:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(tzid)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("(STD)")))->toString();

}
// .method private static getUTCDateTimeString(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::VTimeZone::getUTCDateTimeString(long long time)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "time"    # J
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(android::icu::util::VTimeZone::getDateTimeString(time))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Z")))->toString();

}
// .method private static isEquivalentDateRule(IIILandroid/icu/util/DateTimeRule;)Z
bool android::icu::util::VTimeZone::isEquivalentDateRule(int month,int weekInMonth,int dayOfWeek,std::shared_ptr<android::icu::util::DateTimeRule> dtrule)
{
	
	bool cVar0;
	bool cVar1;
	int ruleDOM;
	
	//    .param p0, "month"    # I
	//    .param p1, "weekInMonth"    # I
	//    .param p2, "dayOfWeek"    # I
	//    .param p3, "dtrule"    # Landroid/icu/util/DateTimeRule;
	cVar0 = 0x0;
	cVar1 = 0x1;
	if ( month != dtrule->getRuleMonth() )
		goto label_cond_e;
	if ( dayOfWeek == dtrule->getRuleDayOfWeek() )
		goto label_cond_f;
label_cond_e:
	return cVar0;
	// 1944    .line 1464
label_cond_f:
	if ( !(dtrule->getTimeRuleType()) )  
		goto label_cond_16;
	return cVar0;
	// 1955    .line 1468
label_cond_16:
	if ( dtrule->getDateRuleType() != cVar1 )
		goto label_cond_23;
	if ( dtrule->getRuleWeekInMonth() != weekInMonth )
		goto label_cond_23;
	return cVar1;
	// 1973    .line 1472
label_cond_23:
	ruleDOM = dtrule->getRuleDayOfMonth();
	//    .local v0, "ruleDOM":I
	if ( dtrule->getDateRuleType() != 0x2 )
		goto label_cond_53;
	if ( ( ruleDOM % 0x7) != cVar1 )
		goto label_cond_39;
	if ( ( ( ruleDOM + 0x6) / 0x7) != weekInMonth )
		goto label_cond_39;
	return cVar1;
	// 2003    .line 1477
label_cond_39:
	if ( month == cVar1 )
		goto label_cond_53;
	if ( ( (android::icu::util::VTimeZone::MONTHLENGTH[month] -  ruleDOM) % 0x7) != 0x6 )
		goto label_cond_53;
	if ( weekInMonth != ( ( ( (android::icu::util::VTimeZone::MONTHLENGTH[month] -  ruleDOM) + 0x1) / 0x7) * -0x1) )
		goto label_cond_53;
	return cVar1;
	// 2037    .line 1482
label_cond_53:
	if ( dtrule->getDateRuleType() != 0x3 )
		goto label_cond_7c;
	if ( ( ruleDOM % 0x7) )     
		goto label_cond_63;
	if ( ( ruleDOM / 0x7) != weekInMonth )
		goto label_cond_63;
	return cVar1;
	// 2059    .line 1486
label_cond_63:
	if ( month == cVar1 )
		goto label_cond_7c;
	if ( ( (android::icu::util::VTimeZone::MONTHLENGTH[month] -  ruleDOM) % 0x7) )     
		goto label_cond_7c;
	if ( weekInMonth != ( ( ( (android::icu::util::VTimeZone::MONTHLENGTH[month] -  ruleDOM) / 0x7) + 0x1) * -0x1) )
		goto label_cond_7c;
	return cVar1;
	// 2091    .line 1491
label_cond_7c:
	return cVar0;

}
// .method private load(Ljava/io/Reader;)Z
bool android::icu::util::VTimeZone::load(std::shared_ptr<java::io::Reader> reader)
{
	
	int cVar0;
	bool cVar1;
	std::shared_ptr<java::util::LinkedList> cVar2;
	int eol;
	int start;
	int success;
	std::shared_ptr<java::lang::StringBuilder> line;
	int ch;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "reader"    # Ljava/io/Reader;
	cVar0 = 0xa;
	cVar1 = 0x0;
	try {
	//label_try_start_3:
	cVar2 = std::make_shared<java::util::LinkedList>();
	this->vtzlines = cVar2;
	eol = 0x0;
	//    .local v1, "eol":Z
	start = 0x0;
	//    .local v4, "start":Z
	success = 0x0;
	//    .local v5, "success":Z
	line = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "line":Ljava/lang/StringBuilder;
label_cond_12:
label_goto_12:
	ch = reader->read();
	//    .local v0, "ch":I
	if ( ch != -0x1 )
		goto label_cond_35;
	if ( !(start) )  
		goto label_cond_32;
	if ( !(line->toString()->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("END:VTIMEZONE")))) )  
		goto label_cond_32;
	this->vtzlines->add(line->toString());
	success = 0x1;
label_cond_32:
label_goto_32:
	if ( success )     
		goto label_cond_a3;
	return cVar1;
	// 2179    .line 470
label_cond_35:
	if ( ch == 0xd )
		goto label_cond_12;
	if ( !(eol) )  
		goto label_cond_60;
	if ( ch == 0x9 )
		goto label_cond_5e;
	if ( ch == 0x20 )
		goto label_cond_5e;
	if ( !(start) )  
		goto label_cond_54;
	if ( line->length() <= 0 )
		goto label_cond_54;
	this->vtzlines->add(line->toString());
label_cond_54:
	line->setLength(0x0);
	if ( ch == cVar0 )
		goto label_cond_5e;
	line->append((char)(ch));
label_cond_5e:
	eol = 0x0;
	goto label_goto_12;
	// 2236    .line 490
label_cond_60:
	if ( ch != cVar0 )
		goto label_cond_9b;
	eol = 0x1;
	if ( !(start) )  
		goto label_cond_7d;
	if ( !(line->toString()->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("END:VTIMEZONE")))) )  
		goto label_cond_12;
	this->vtzlines->add(line->toString());
	success = 0x1;
	goto label_goto_32;
	// 2274    .line 500
label_cond_7d:
	if ( !(line->toString()->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("BEGIN:VTIMEZONE")))) )  
		goto label_cond_12;
	this->vtzlines->add(line->toString());
	line->setLength(0x0);
	start = 0x1;
	eol = 0x0;
	goto label_goto_12;
	// 2310    .line 508
label_cond_9b:
	line->append((char)(ch));
	//label_try_end_9f:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a1;
	}
	//    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_9f} :catch_a1
	goto label_goto_12;
	// 2320    .line 515
	// 2321    .end local v0    # "ch":I
	// 2322    .end local v1    # "eol":Z
	// 2323    .end local v3    # "line":Ljava/lang/StringBuilder;
	// 2324    .end local v4    # "start":Z
	// 2325    .end local v5    # "success":Z
label_catch_a1:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ioe":Ljava/io/IOException;
	return cVar1;
	// 2333    .line 520
	// 2334    .end local v2    # "ioe":Ljava/io/IOException;
	// 2335    .restart local v0    # "ch":I
	// 2336    .restart local v1    # "eol":Z
	// 2337    .restart local v3    # "line":Ljava/lang/StringBuilder;
	// 2338    .restart local v4    # "start":Z
	// 2339    .restart local v5    # "success":Z
label_cond_a3:
	return this->parse();

}
// .method private static millisToOffset(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::VTimeZone::millisToOffset(int millis)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> sb;
	int t;
	int sec;
	int millis;
	
	//    .param p0, "millis"    # I
	cVar0 = 0x2;
	sb = std::make_shared<java::lang::StringBuilder>(0x7);
	//    .local v2, "sb":Ljava/lang/StringBuilder;
	if ( millis < 0 ) 
		goto label_cond_34;
	sb->append(0x2b);
label_goto_e:
	t = ( millis / 0x3e8);
	//    .local v4, "t":I
	sec = ( t % 0x3c);
	//    .local v3, "sec":I
	t = ( (t - sec) / 0x3c);
	//    .local v1, "min":I
	//    .local v0, "hour":I
	sb->append(android::icu::util::VTimeZone::numToString(( t / 0x3c), cVar0));
	sb->append(android::icu::util::VTimeZone::numToString(( t % 0x3c), cVar0));
	sb->append(android::icu::util::VTimeZone::numToString(sec, cVar0));
	return sb->toString();
	// 2421    .line 2037
	// 2422    .end local v0    # "hour":I
	// 2423    .end local v1    # "min":I
	// 2424    .end local v3    # "sec":I
	// 2425    .end local v4    # "t":I
label_cond_34:
	sb->append(0x2d);
	millis = (0 - millis);
	goto label_goto_e;

}
// .method private static numToString(II)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::VTimeZone::numToString(int num,int width)
{
	
	std::shared_ptr<java::lang::String> str;
	int len;
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	
	//    .param p0, "num"    # I
	//    .param p1, "width"    # I
	str = java::lang::Integer::toString(num);
	//    .local v3, "str":Ljava/lang/String;
	len = str->length();
	//    .local v1, "len":I
	if ( len <  width )
		goto label_cond_11;
	return str->substring((len - width), len);
	// 2467    .line 2064
label_cond_11:
	sb = std::make_shared<java::lang::StringBuilder>(width);
	//    .local v2, "sb":Ljava/lang/StringBuilder;
	i = len;
	//    .local v0, "i":I
label_goto_17:
	if ( i >= width )
		goto label_cond_21;
	sb->append(0x30);
	i = ( i + 0x1);
	goto label_goto_17;
	// 2491    .line 2068
label_cond_21:
	sb->append(str);
	return sb->toString();

}
// .method private static offsetStrToMillis(Ljava/lang/String;)I
int android::icu::util::VTimeZone::offsetStrToMillis(std::shared_ptr<java::lang::String> str)
{
	
	int cVar0;
	int isValid;
	int sign;
	int hour;
	int min;
	int sec;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int length;
	int s;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "str"    # Ljava/lang/String;
	cVar0 = 0x7;
	isValid = 0x0;
	//    .local v1, "isValid":Z
	sign = 0x0;
	//    .local v8, "sign":I
	hour = 0x0;
	//    .local v0, "hour":I
	min = 0x0;
	//    .local v4, "min":I
	sec = 0x0;
	//    .local v7, "sec":I
	if ( str )     
		goto label_cond_14;
label_cond_9:
label_goto_9:
	if ( isValid )     
		goto label_cond_4e;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad offset string")));
	// throw
	throw cVar1;
	// 2546    .line 1994
label_cond_14:
	length = str->length();
	//    .local v2, "length":I
	if ( length == 0x5 )
		goto label_cond_1c;
	if ( length != cVar0 )
		goto label_cond_9;
label_cond_1c:
	s = str->charAt(0x0);
	//    .local v6, "s":C
	if ( s != 0x2b )
		goto label_cond_48;
	sign = 0x1;
label_goto_26:
	try {
	//label_try_start_28:
	hour = java::lang::Integer::parseInt(str->substring(0x1, 0x3));
	min = java::lang::Integer::parseInt(str->substring(0x3, 0x5));
	if ( length != cVar0 )
		goto label_cond_46;
	//label_try_end_45:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_58;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_28 .. :try_end_45} :catch_58
	sec = java::lang::Integer::parseInt(str->substring(0x5, 0x7));
label_cond_46:
	isValid = 0x1;
	goto label_goto_9;
	// 2627    .line 2003
label_cond_48:
	if ( s != 0x2d )
		goto label_cond_9;
	sign = -0x1;
	goto label_goto_26;
	// 2638    .line 2025
	// 2639    .end local v2    # "length":I
	// 2640    .end local v6    # "s":C
label_cond_4e:
	//    .local v3, "millis":I
	return ( ((( (( hour * 0x3c) +  min) * 0x3c) +  sec) *  sign) * 0x3e8);
	// 2658    .line 2016
	// 2659    .end local v3    # "millis":I
	// 2660    .restart local v2    # "length":I
	// 2661    .restart local v6    # "s":C
label_catch_58:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "nfe":Ljava/lang/NumberFormatException;
	goto label_goto_9;

}
// .method private parse()Z
bool android::icu::util::VTimeZone::parse()
{
	
	int tzid;
	int state;
	int dst;
	std::shared_ptr<java::lang::String> from;
	std::shared_ptr<java::lang::String> to;
	std::shared_ptr<java::lang::String> tzname;
	int dtstart;
	int isRRULE;
	std::shared_ptr<java::util::List> dates;
	std::shared_ptr<java::util::ArrayList> rules;
	int initialRawOffset;
	int initialDSTSavings;
	auto firstStart;
	std::shared_ptr<java::util::Iterator> line_S_iterator;
	std::shared_ptr<java::lang::String> line;
	int valueSep;
	auto name;
	auto value;
	std::shared_ptr<java::util::Date> cVar0;
	int isDST;
	int tzname;
	auto tzname;
	std::shared_ptr<java::util::LinkedList> dates;
	std::shared_ptr<java::util::StringTokenizer> st;
	int rule;
	int rawOffset;
	int dstSavings;
	auto start;
	int fromOffset;
	int toOffset;
	long long start;
	auto rule;
	std::shared_ptr<java::util::Date> actualStart;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> initialRule;
	std::shared_ptr<android::icu::util::RuleBasedTimeZone> rbtz;
	int finalRuleIdx;
	int finalRuleCount;
	int i;
	std::shared_ptr<android::icu::util::TimeZoneRule> r;
	std::shared_ptr<java::util::Iterator> r_S_iterator;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> finalRule;
	std::shared_ptr<java::util::Date> finalStart;
	std::shared_ptr<java::util::Date> start;
	std::shared_ptr<java::util::Date> lastStart;
	std::shared_ptr<android::icu::util::TimeArrayTimeZoneRule> newRule;
	std::shared_ptr<long long[]> cVar1;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> newRule;
	
	if ( !(this->vtzlines) )  
		goto label_cond_10;
	if ( this->vtzlines->size() )     
		goto label_cond_12;
label_cond_10:
	return 0x0;
	// 2696    .line 540
label_cond_12:
	tzid = 0x0;
	//    .local v53, "tzid":Ljava/lang/String;
	state = 0x0;
	//    .local v48, "state":I
	dst = 0x0;
	//    .local v21, "dst":Z
	from = 0x0;
	//    .local v27, "from":Ljava/lang/String;
	to = 0x0;
	//    .local v51, "to":Ljava/lang/String;
	tzname = 0x0;
	//    .local v5, "tzname":Ljava/lang/String;
	dtstart = 0x0;
	//    .local v22, "dtstart":Ljava/lang/String;
	isRRULE = 0x0;
	//    .local v36, "isRRULE":Z
	dates = 0x0;
	//    .local v10, "dates":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	rules = std::make_shared<java::util::ArrayList>();
	//    .local v45, "rules":Ljava/util/List;, "Ljava/util/List<Landroid/icu/util/TimeZoneRule;>;"
	initialRawOffset = 0x0;
	//    .local v33, "initialRawOffset":I
	initialDSTSavings = 0x0;
	//    .local v32, "initialDSTSavings":I
	firstStart = 0x7fffffffffffffffL;
	//    .local v28, "firstStart":J
	line_S_iterator = this->vtzlines->iterator();
	//    .end local v5    # "tzname":Ljava/lang/String;
	//    .end local v10    # "dates":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	//    .end local v21    # "dst":Z
	//    .end local v22    # "dtstart":Ljava/lang/String;
	//    .end local v27    # "from":Ljava/lang/String;
	//    .end local v51    # "to":Ljava/lang/String;
	//    .end local v53    # "tzid":Ljava/lang/String;
	//    .local v39, "line$iterator":Ljava/util/Iterator;
label_cond_38:
	if ( !(line_S_iterator->hasNext()) )  
		goto label_cond_237;
	line = line_S_iterator->next();
	line->checkCast("java::lang::String");
	//    .local v38, "line":Ljava/lang/String;
	valueSep = line->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	//    .local v55, "valueSep":I
	if ( valueSep < 0 ) 
		goto label_cond_38;
	name = line->substring(0x0, valueSep);
	//    .local v40, "name":Ljava/lang/String;
	value = line->substring(( valueSep + 0x1));
	//    .local v54, "value":Ljava/lang/String;
	// switch
	{
	auto item = ( state );
	if (item == 0) goto label_pswitch_6f;
	if (item == 1) goto label_pswitch_88;
	if (item == 2) goto label_pswitch_10b;
	}
label_cond_63:
label_goto_63:
	if ( state != 0x3 )
		goto label_cond_38;
	this->vtzlines = 0x0;
	return 0x0;
	// 2841    .line 565
label_pswitch_6f:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("BEGIN")))) )  
		goto label_cond_63;
	if ( !(value->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("VTIMEZONE")))) )  
		goto label_cond_63;
	state = 0x1;
	goto label_goto_63;
	// 2868    .line 570
label_pswitch_88:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZID")))) )  
		goto label_cond_96;
	value;
	//    .local v53, "tzid":Ljava/lang/String;
	goto label_goto_63;
	// 2886    .line 572
	// 2887    .end local v53    # "tzid":Ljava/lang/String;
label_cond_96:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZURL")))) )  
		goto label_cond_a8;
	this->tzurl = value;
	goto label_goto_63;
	// 2908    .line 574
label_cond_a8:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST-MODIFIED")))) )  
		goto label_cond_c7;
	cVar0 = std::make_shared<java::util::Date>(android::icu::util::VTimeZone::parseDateTimeString(value, 0x0));
	this->lastmod = cVar0;
	goto label_goto_63;
	// 2941    .line 578
label_cond_c7:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("BEGIN")))) )  
		goto label_cond_100;
	isDST = value->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("DAYLIGHT")));
	//    .local v35, "isDST":Z
	if ( value->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("STANDARD"))) )     
		goto label_cond_e8;
	if ( !(isDST) )  
		goto label_cond_fc;
label_cond_e8:
	if ( tzid )     
		goto label_cond_ee;
	state = 0x3;
	goto label_goto_63;
	// 2986    .line 587
label_cond_ee:
	0x0;
	//    .restart local v10    # "dates":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	0x0;
	0x0;
	//    .restart local v27    # "from":Ljava/lang/String;
	0x0;
	//    .restart local v51    # "to":Ljava/lang/String;
	tzname = 0x0;
	//    .restart local v5    # "tzname":Ljava/lang/String;
	isDST;
	//    .local v21, "dst":Z
	state = 0x2;
	goto label_goto_63;
	// 3015    .line 597
	// 3016    .end local v5    # "tzname":Ljava/lang/String;
	// 3017    .end local v10    # "dates":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 3018    .end local v21    # "dst":Z
	// 3019    .end local v27    # "from":Ljava/lang/String;
	// 3020    .end local v51    # "to":Ljava/lang/String;
label_cond_fc:
	state = 0x3;
	goto label_goto_63;
	// 3027    .line 600
	// 3028    .end local v35    # "isDST":Z
label_cond_100:
	name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("END")));
	goto label_goto_63;
	// 3040    .line 606
label_pswitch_10b:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("DTSTART")))) )  
		goto label_cond_11a;
	value;
	//    .local v22, "dtstart":Ljava/lang/String;
	goto label_goto_63;
	// 3058    .line 608
	// 3059    .end local v22    # "dtstart":Ljava/lang/String;
label_cond_11a:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZNAME")))) )  
		goto label_cond_129;
	tzname = value;
	//    .local v5, "tzname":Ljava/lang/String;
	goto label_goto_63;
	// 3077    .line 610
	// 3078    .end local v5    # "tzname":Ljava/lang/String;
label_cond_129:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZOFFSETFROM")))) )  
		goto label_cond_138;
	value;
	//    .local v27, "from":Ljava/lang/String;
	goto label_goto_63;
	// 3096    .line 612
	// 3097    .end local v27    # "from":Ljava/lang/String;
label_cond_138:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZOFFSETTO")))) )  
		goto label_cond_147;
	value;
	//    .local v51, "to":Ljava/lang/String;
	goto label_goto_63;
	// 3115    .line 614
	// 3116    .end local v51    # "to":Ljava/lang/String;
label_cond_147:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("RDATE")))) )  
		goto label_cond_179;
	if ( !(isRRULE) )  
		goto label_cond_158;
	state = 0x3;
	goto label_goto_63;
	// 3137    .line 620
label_cond_158:
	if ( dates )     
		goto label_cond_15f;
	dates = std::make_shared<java::util::LinkedList>();
label_cond_15f:
	var133 = st(value, std::make_shared<java::lang::String>(std::make_shared<char[]>(",")));
	//    .local v46, "st":Ljava/util/StringTokenizer;
label_goto_16b:
	if ( !(st->hasMoreTokens()) )  
		goto label_cond_63;
	//    .local v12, "date":Ljava/lang/String;
	dates->add(st->nextToken());
	goto label_goto_16b;
	// 3178    .line 630
	// 3179    .end local v12    # "date":Ljava/lang/String;
	// 3180    .end local v46    # "st":Ljava/util/StringTokenizer;
label_cond_179:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("RRULE")))) )  
		goto label_cond_19c;
	if ( isRRULE )     
		goto label_cond_18c;
	if ( !(dates) )  
		goto label_cond_18c;
	state = 0x3;
	goto label_goto_63;
	// 3203    .line 635
label_cond_18c:
	if ( dates )     
		goto label_cond_193;
	dates = std::make_shared<java::util::LinkedList>();
label_cond_193:
	isRRULE = 0x1;
	dates->add(value);
	goto label_goto_63;
	// 3223    .line 640
label_cond_19c:
	if ( !(name->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("END")))) )  
		goto label_cond_63;
	if ( !(dtstart) )  
		goto label_cond_1ab;
	if ( from )     
		goto label_cond_1af;
label_cond_1ab:
	state = 0x3;
	goto label_goto_63;
	// 3247    .line 642
label_cond_1af:
	if ( !(to) )  
		goto label_cond_1ab;
	if ( tzname )     
		goto label_cond_1bb;
	tzname = android::icu::util::VTimeZone::getDefaultTZName(tzid, dst);
label_cond_1bb:
	rule = 0x0;
	//    .local v44, "rule":Landroid/icu/util/TimeZoneRule;
	0x0;
	//    .local v11, "fromOffset":I
	0x0;
	//    .local v52, "toOffset":I
	rawOffset = 0x0;
	//    .local v6, "rawOffset":I
	dstSavings = 0x0;
	//    .local v7, "dstSavings":I
	start = 0x0;
	//    .local v8, "start":J
	try {
	//label_try_start_1c4:
	fromOffset = android::icu::util::VTimeZone::offsetStrToMillis(from);
	toOffset = android::icu::util::VTimeZone::offsetStrToMillis(to);
	if ( !(dst) )  
		goto label_cond_20c;
	if ( (toOffset - fromOffset) <= 0 )
		goto label_cond_203;
	rawOffset = fromOffset;
	dstSavings = (toOffset - fromOffset);
label_goto_1d5:
	start = android::icu::util::VTimeZone::parseDateTimeString(dtstart, fromOffset);
	0x0;
	//    .local v4, "actualStart":Ljava/util/Date;
	if ( !(isRRULE) )  
		goto label_cond_210;
	rule = android::icu::util::VTimeZone::createRuleByRRULE(tzname, rawOffset, dstSavings, start, dates, fromOffset);
	//    .local v44, "rule":Landroid/icu/util/TimeZoneRule;
label_goto_1e2:
	if ( !(rule) )  
		goto label_cond_1fd;
	actualStart = rule->getFirstStart(fromOffset, 0x0);
	//    .local v4, "actualStart":Ljava/util/Date;
	if ( (actualStart->getTime() > firstStart) >= 0 )
		goto label_cond_1fd;
	firstStart = actualStart->getTime();
	if ( dstSavings <= 0 )
		goto label_cond_215;
	fromOffset;
	0x0;
	//    .end local v4    # "actualStart":Ljava/util/Date;
	//    .end local v44    # "rule":Landroid/icu/util/TimeZoneRule;
label_cond_1fd:
label_goto_1fd:
	if ( rule )     
		goto label_cond_22c;
	state = 0x3;
	goto label_goto_63;
	// 3383    .line 670
	// 3384    .local v44, "rule":Landroid/icu/util/TimeZoneRule;
label_cond_203:
	rawOffset = (toOffset - 0x36ee80);
	dstSavings = 0x36ee80;
	goto label_goto_1d5;
	// 3395    .line 674
label_cond_20c:
	rawOffset = toOffset;
	dstSavings = 0x0;
	goto label_goto_1d5;
	// 3404    .line 686
	// 3405    .local v4, "actualStart":Ljava/util/Date;
label_cond_210:
	//label_try_end_213:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_389;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_1c4 .. :try_end_213} :catch_389
	rule = android::icu::util::VTimeZone::createRuleByRDATE(tzname, rawOffset, dstSavings, start, dates, fromOffset);
	//    .local v44, "rule":Landroid/icu/util/TimeZoneRule;
	goto label_goto_1e2;
	// 3416    .line 700
	// 3417    .local v4, "actualStart":Ljava/util/Date;
label_cond_215:
	if ( (fromOffset - toOffset) != 0x36ee80 )
		goto label_cond_227;
	(fromOffset - 0x36ee80);
	0x36ee80;
	goto label_goto_1fd;
	// 3437    .line 704
label_cond_227:
	fromOffset;
	0x0;
	goto label_goto_1fd;
	// 3446    .line 718
	// 3447    .end local v4    # "actualStart":Ljava/util/Date;
	// 3448    .end local v44    # "rule":Landroid/icu/util/TimeZoneRule;
label_cond_22c:
	rules->add(rule);
	state = 0x1;
	goto label_goto_63;
	// 3461    .line 731
	// 3462    .end local v6    # "rawOffset":I
	// 3463    .end local v7    # "dstSavings":I
	// 3464    .end local v8    # "start":J
	// 3465    .end local v11    # "fromOffset":I
	// 3466    .end local v38    # "line":Ljava/lang/String;
	// 3467    .end local v40    # "name":Ljava/lang/String;
	// 3468    .end local v52    # "toOffset":I
	// 3469    .end local v54    # "value":Ljava/lang/String;
	// 3470    .end local v55    # "valueSep":I
label_cond_237:
	if ( rules->size() )     
		goto label_cond_23f;
	return 0x0;
	// 3483    .line 736
label_cond_23f:
	var218 = initialRule(android::icu::util::VTimeZone::getDefaultTZName(tzid, 0x0), initialRawOffset, initialDSTSavings);
	//    .local v34, "initialRule":Landroid/icu/util/InitialTimeZoneRule;
	var223 = rbtz(tzid, initialRule);
	//    .local v43, "rbtz":Landroid/icu/util/RuleBasedTimeZone;
	finalRuleIdx = -0x1;
	//    .local v25, "finalRuleIdx":I
	finalRuleCount = 0x0;
	//    .local v24, "finalRuleCount":I
	i = 0x0;
	//    .local v30, "i":I
label_goto_262:
	if ( i >= rules->size() )
		goto label_cond_28e;
	r = rules->get(i);
	r->checkCast("android::icu::util::TimeZoneRule");
	//    .local v41, "r":Landroid/icu/util/TimeZoneRule;
	if ( !(r->instanceOf("android::icu::util::AnnualTimeZoneRule")) )  
		goto label_cond_28b;
	r->checkCast("android::icu::util::AnnualTimeZoneRule");
	//    .end local v41    # "r":Landroid/icu/util/TimeZoneRule;
	if ( r->getEndYear() != 0x7fffffff )
		goto label_cond_28b;
	finalRuleCount = ( finalRuleCount + 0x1);
	i;
label_cond_28b:
	i = ( i + 0x1);
	goto label_goto_262;
	// 3582    .line 753
label_cond_28e:
	if ( finalRuleCount <= 0x2 )
		goto label_cond_295;
	return 0x0;
	// 3595    .line 758
label_cond_295:
	if ( finalRuleCount != 0x1 )
		goto label_cond_2a7;
	if ( rules->size() != 0x1 )
		goto label_cond_2bf;
	rules->clear();
label_cond_2a7:
label_goto_2a7:
	r_S_iterator = rules->iterator();
	//    .local v42, "r$iterator":Ljava/util/Iterator;
label_goto_2ab:
	if ( !(r_S_iterator->hasNext()) )  
		goto label_cond_37a;
	r = r_S_iterator->next();
	r->checkCast("android::icu::util::TimeZoneRule");
	//    .restart local v41    # "r":Landroid/icu/util/TimeZoneRule;
	rbtz->addTransitionRule(r);
	goto label_goto_2ab;
	// 3648    .line 766
	// 3649    .end local v41    # "r":Landroid/icu/util/TimeZoneRule;
	// 3650    .end local v42    # "r$iterator":Ljava/util/Iterator;
label_cond_2bf:
	finalRule = rules->get(finalRuleIdx);
	finalRule->checkCast("android::icu::util::AnnualTimeZoneRule");
	//    .local v13, "finalRule":Landroid/icu/util/AnnualTimeZoneRule;
	//    .local v50, "tmpRaw":I
	//    .local v49, "tmpDST":I
	finalStart = finalRule->getFirstStart(initialRawOffset, initialDSTSavings);
	//    .local v26, "finalStart":Ljava/util/Date;
	start = finalStart;
	//    .local v47, "start":Ljava/util/Date;
	i = 0x0;
label_goto_2dd:
	if ( i >= rules->size() )
		goto label_cond_31f;
	if ( finalRuleIdx != i )
		goto label_cond_2ee;
label_cond_2eb:
label_goto_2eb:
	i = ( i + 0x1);
	goto label_goto_2dd;
	// 3715    .line 777
label_cond_2ee:
	r = rules->get(i);
	r->checkCast("android::icu::util::TimeZoneRule");
	//    .restart local v41    # "r":Landroid/icu/util/TimeZoneRule;
	lastStart = r->getFinalStart(finalRule->getRawOffset(), finalRule->getDSTSavings());
	//    .local v37, "lastStart":Ljava/util/Date;
	if ( !(lastStart->after(start)) )  
		goto label_cond_2eb;
	start = finalRule->getNextStart(lastStart->getTime(), r->getRawOffset(), r->getDSTSavings(), 0x0);
	goto label_goto_2eb;
	// 3776    .line 787
	// 3777    .end local v37    # "lastStart":Ljava/util/Date;
	// 3778    .end local v41    # "r":Landroid/icu/util/TimeZoneRule;
label_cond_31f:
	if ( start != finalStart )
		goto label_cond_351;
	cVar1 = std::make_shared<std::vector<long long[]>>(0x1);
	cVar1[0x0] = finalStart->getTime();
	newRule = std::make_shared<android::icu::util::TimeArrayTimeZoneRule>(finalRule->getName(), finalRule->getRawOffset(), finalRule->getDSTSavings(), cVar1, 0x2);
	//    .local v14, "newRule":Landroid/icu/util/TimeZoneRule;
label_goto_348:
	rules->set(finalRuleIdx, newRule);
	goto label_goto_2a7;
	// 3838    .line 797
	// 3839    .end local v14    # "newRule":Landroid/icu/util/TimeZoneRule;
label_cond_351:
	//    .local v23, "fields":[I
	newRule = std::make_shared<android::icu::util::AnnualTimeZoneRule>(finalRule->getName(), finalRule->getRawOffset(), finalRule->getDSTSavings(), finalRule->getRule(), finalRule->getStartYear(), android::icu::impl::Grego::timeToFields(start->getTime(), 0x0)[0x0]);
	//    .restart local v14    # "newRule":Landroid/icu/util/TimeZoneRule;
	goto label_goto_348;
	// 3893    .line 814
	// 3894    .end local v13    # "finalRule":Landroid/icu/util/AnnualTimeZoneRule;
	// 3895    .end local v14    # "newRule":Landroid/icu/util/TimeZoneRule;
	// 3896    .end local v23    # "fields":[I
	// 3897    .end local v26    # "finalStart":Ljava/util/Date;
	// 3898    .end local v47    # "start":Ljava/util/Date;
	// 3899    .end local v49    # "tmpDST":I
	// 3900    .end local v50    # "tmpRaw":I
	// 3901    .restart local v42    # "r$iterator":Ljava/util/Iterator;
label_cond_37a:
	this->tz = rbtz;
	this->setID(tzid);
	return 0x1;
	// 3921    .line 710
	// 3922    .end local v24    # "finalRuleCount":I
	// 3923    .end local v25    # "finalRuleIdx":I
	// 3924    .end local v30    # "i":I
	// 3925    .end local v34    # "initialRule":Landroid/icu/util/InitialTimeZoneRule;
	// 3926    .end local v42    # "r$iterator":Ljava/util/Iterator;
	// 3927    .end local v43    # "rbtz":Landroid/icu/util/RuleBasedTimeZone;
	// 3928    .restart local v6    # "rawOffset":I
	// 3929    .restart local v7    # "dstSavings":I
	// 3930    .restart local v8    # "start":J
	// 3931    .restart local v11    # "fromOffset":I
	// 3932    .restart local v38    # "line":Ljava/lang/String;
	// 3933    .restart local v40    # "name":Ljava/lang/String;
	// 3934    .restart local v52    # "toOffset":I
	// 3935    .restart local v54    # "value":Ljava/lang/String;
	// 3936    .restart local v55    # "valueSep":I
label_catch_389:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v31, "iae":Ljava/lang/IllegalArgumentException;
	goto label_goto_1fd;
	// 3943    .line 563
	// 3944    :pswitch_data_38c
	// 3945    .packed-switch 0x0
	// 3946        :pswitch_6f
	// 3947        :pswitch_88
	// 3948        :pswitch_10b
	// 3949    .end packed-switch

}
// .method private static parseDateTimeString(Ljava/lang/String;I)J
long long android::icu::util::VTimeZone::parseDateTimeString(std::shared_ptr<java::lang::String> str,int offset)
{
	
	int isUTC;
	int isValid;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	long long time;
	int length;
	int year;
	int month;
	int day;
	int hour;
	int min;
	std::vector<std::any> tryCatchExcetionList;
	int sec;
	
	//    .param p0, "str"    # Ljava/lang/String;
	//    .param p1, "offset"    # I
	//    .local v14, "year":I
	//    .local v9, "month":I
	//    .local v2, "day":I
	//    .local v3, "hour":I
	//    .local v8, "min":I
	//    .local v11, "sec":I
	isUTC = 0x0;
	//    .local v4, "isUTC":Z
	isValid = 0x0;
	//    .local v5, "isValid":Z
	if ( str )     
		goto label_cond_15;
label_cond_a:
label_goto_a:
	if ( isValid )     
		goto label_cond_c7;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid date time string format")));
	// throw
	throw cVar0;
	// 4002    .line 1932
label_cond_15:
	length = str->length();
	//    .local v6, "length":I
	if ( length == 0xf )
		goto label_cond_21;
	if ( length != 0x10 )
		goto label_cond_a;
label_cond_21:
	if ( str->charAt(0x8) != 0x54 )
		goto label_cond_a;
	if ( length != 0x10 )
		goto label_cond_42;
	if ( str->charAt(0xf) != 0x5a )
		goto label_cond_a;
	isUTC = 0x1;
label_cond_42:
	try {
	//label_try_start_45:
	year = java::lang::Integer::parseInt(str->substring(0x0, 0x4));
	month = ( java::lang::Integer::parseInt(str->substring(0x4, 0x6)) + -0x1);
	day = java::lang::Integer::parseInt(str->substring(0x6, 0x8));
	hour = java::lang::Integer::parseInt(str->substring(0x9, 0xb));
	min = java::lang::Integer::parseInt(str->substring(0xb, 0xd));
	//label_try_end_a0:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f0;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_45 .. :try_end_a0} :catch_f0
	sec = java::lang::Integer::parseInt(str->substring(0xd, 0xf));
	//    .local v7, "maxDayOfMonth":I
	if ( year < 0 ) 
		goto label_cond_a;
	if ( month < 0 ) 
		goto label_cond_a;
	if ( month >  0xb )
		goto label_cond_a;
	if ( day <  0x1 )
		goto label_cond_a;
	if ( day >  android::icu::impl::Grego::monthLength(year, month) )
		goto label_cond_a;
	if ( hour < 0 ) 
		goto label_cond_a;
	if ( hour >= 0x18 )
		goto label_cond_a;
	if ( min < 0 ) 
		goto label_cond_a;
	if ( min >= 0x3c )
		goto label_cond_a;
	if ( sec < 0 ) 
		goto label_cond_a;
	if ( sec >= 0x3c )
		goto label_cond_a;
	isValid = 0x1;
	goto label_goto_a;
	// 4210    .line 1975
	// 4211    .end local v6    # "length":I
	// 4212    .end local v7    # "maxDayOfMonth":I
label_cond_c7:
	//    .local v12, "time":J
	time = ((android::icu::impl::Grego::fieldsToDay(year, month, day) * 0x5265c00) + (long long)((((0x36ee80 *  hour) + (0xea60 * min)) + ( sec * 0x3e8))));
	if ( isUTC )     
		goto label_cond_ef;
label_cond_ef:
	return time;
	// 4262    .line 1957
	// 4263    .end local v12    # "time":J
	// 4264    .restart local v6    # "length":I
label_catch_f0:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v10, "nfe":Ljava/lang/NumberFormatException;
	goto label_goto_a;

}
// .method private static parseRRULE(Ljava/lang/String;[J)[I
int android::icu::util::VTimeZone::parseRRULE(std::shared_ptr<java::lang::String> rrule,std::shared_ptr<long long[]> until)
{
	
	int nthDayOfWeek;
	int dayOfMonth;
	int parseError;
	std::shared_ptr<java::util::StringTokenizer> st;
	auto prop;
	int sep;
	std::shared_ptr<java::lang::String> attr;
	std::shared_ptr<java::lang::String> value;
	std::shared_ptr<int[]> results;
	int i;
	std::vector<std::any> tryCatchExcetionList;
	int month;
	int length;
	int n;
	int wday;
	std::shared_ptr<java::util::StringTokenizer> days;
	int index;
	
	//    .param p0, "rrule"    # Ljava/lang/String;
	//    .param p1, "until"    # [J
	//    .local v14, "month":I
	//    .local v7, "dayOfWeek":I
	nthDayOfWeek = 0x0;
	//    .local v17, "nthDayOfWeek":I
	dayOfMonth = 0x0;
	//    .local v6, "dayOfMonth":[I
	//    .local v24, "untilTime":J
	//    .local v28, "yearly":Z
	parseError = 0x0;
	//    .local v18, "parseError":Z
	var11 = st(rrule, std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
	//    .end local v6    # "dayOfMonth":[I
	//    .local v23, "st":Ljava/util/StringTokenizer;
label_cond_19:
label_goto_19:
	if ( !(st->hasMoreTokens()) )  
		goto label_cond_69;
	prop = st->nextToken();
	//    .local v19, "prop":Ljava/lang/String;
	sep = prop->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")));
	//    .local v21, "sep":I
	if ( sep == -0x1 )
		goto label_cond_67;
	attr = prop->substring(0x0, sep);
	//    .local v4, "attr":Ljava/lang/String;
	value = prop->substring(( sep + 0x1));
	//    .local v26, "value":Ljava/lang/String;
	if ( !(attr->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("FREQ")))) )  
		goto label_cond_71;
	if ( !(value->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("YEARLY")))) )  
		goto label_cond_6e;
	0x1;
	goto label_goto_19;
	// 4412    .line 1056
	// 4413    .end local v4    # "attr":Ljava/lang/String;
	// 4414    .end local v26    # "value":Ljava/lang/String;
label_cond_67:
	parseError = 0x1;
	//    .end local v19    # "prop":Ljava/lang/String;
	//    .end local v21    # "sep":I
label_cond_69:
label_goto_69:
	if ( !(parseError) )  
		goto label_cond_1ae;
	return 0x0;
	// 4430    .line 1065
	// 4431    .restart local v4    # "attr":Ljava/lang/String;
	// 4432    .restart local v19    # "prop":Ljava/lang/String;
	// 4433    .restart local v21    # "sep":I
	// 4434    .restart local v26    # "value":Ljava/lang/String;
label_cond_6e:
	parseError = 0x1;
	goto label_goto_69;
	// 4441    .line 1068
label_cond_71:
	if ( !(attr->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNTIL")))) )  
		goto label_cond_8b;
	try {
	//label_try_start_7e:
	//label_try_end_85:
	}
	catch (java::lang::IllegalArgumentException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_87;
	}
	//    .catch Ljava/lang/IllegalArgumentException; {:try_start_7e .. :try_end_85} :catch_87
	android::icu::util::VTimeZone::parseDateTimeString(value, 0x0);
	goto label_goto_19;
	// 4469    .line 1072
label_catch_87:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v10, "iae":Ljava/lang/IllegalArgumentException;
	parseError = 0x1;
	goto label_goto_69;
	// 4480    .line 1076
	// 4481    .end local v10    # "iae":Ljava/lang/IllegalArgumentException;
label_cond_8b:
	if ( !(attr->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("BYMONTH")))) )  
		goto label_cond_ba;
	if ( value->length() <= 0x2 )
		goto label_cond_a5;
	parseError = 0x1;
	goto label_goto_69;
	// 4512    .line 1084
label_cond_a5:
	try {
	//label_try_start_a5:
	//label_try_end_a8:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b6;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_a5 .. :try_end_a8} :catch_b6
	month = ( java::lang::Integer::parseInt(value) + -0x1);
	if ( month < 0 ) 
		goto label_cond_b3;
	if ( month <  0xc )
		goto label_cond_19;
label_cond_b3:
	parseError = 0x1;
	goto label_goto_69;
	// 4539    .line 1089
label_catch_b6:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v16, "nfe":Ljava/lang/NumberFormatException;
	parseError = 0x1;
	goto label_goto_69;
	// 4549    .line 1093
	// 4550    .end local v16    # "nfe":Ljava/lang/NumberFormatException;
label_cond_ba:
	if ( !(attr->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("BYDAY")))) )  
		goto label_cond_177;
	length = value->length();
	//    .local v13, "length":I
	if ( length <  0x2 )
		goto label_cond_d5;
	if ( length <= 0x4 )
		goto label_cond_d8;
label_cond_d5:
	parseError = 0x1;
	goto label_goto_69;
	// 4588    .line 1104
label_cond_d8:
	if ( length <= 0x2 )
		goto label_cond_13d;
	0x1;
	//    .local v22, "sign":I
	if ( value->charAt(0x0) != 0x2b )
		goto label_cond_112;
label_cond_f4:
label_goto_f4:
	try {
	//label_try_start_f8:
	//label_try_end_105:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16b;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_f8 .. :try_end_105} :catch_16b
	n = java::lang::Integer::parseInt(value->substring(( length + -0x3), ( length + -0x2)));
	//    .local v15, "n":I
	if ( !(n) )  
		goto label_cond_10e;
	if ( n <= 0x4 )
		goto label_cond_131;
label_cond_10e:
	parseError = 0x1;
	goto label_goto_69;
	// 4663    .line 1109
	// 4664    .end local v15    # "n":I
label_cond_112:
	if ( value->charAt(0x0) != 0x2d )
		goto label_cond_127;
	-0x1;
	goto label_goto_f4;
	// 4689    .line 1111
label_cond_127:
	if ( length != 0x4 )
		goto label_cond_f4;
	parseError = 0x1;
	goto label_goto_69;
	// 4703    .line 1121
	// 4704    .restart local v15    # "n":I
label_cond_131:
	nthDayOfWeek = (n * 0x1);
	//    .end local v15    # "n":I
	//    .end local v22    # "sign":I
label_cond_13d:
	wday = 0x0;
	//    .local v27, "wday":I
label_goto_13f:
	if ( wday >= android::icu::util::VTimeZone::ICAL_DOW_NAMES->size() )
		goto label_cond_15a;
	if ( !(value->substring(( length + -0x2))->equals(android::icu::util::VTimeZone::ICAL_DOW_NAMES[wday])) )  
		goto label_cond_170;
label_cond_15a:
	if ( wday >= android::icu::util::VTimeZone::ICAL_DOW_NAMES->size() )
		goto label_cond_173;
	( wday + 0x1);
	goto label_goto_19;
	// 4777    .line 1122
	// 4778    .end local v27    # "wday":I
	// 4779    .restart local v22    # "sign":I
label_catch_16b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v16    # "nfe":Ljava/lang/NumberFormatException;
	parseError = 0x1;
	goto label_goto_69;
	// 4790    .line 1129
	// 4791    .end local v16    # "nfe":Ljava/lang/NumberFormatException;
	// 4792    .end local v22    # "sign":I
	// 4793    .restart local v27    # "wday":I
label_cond_170:
	wday = ( wday + 0x1);
	goto label_goto_13f;
	// 4799    .line 1138
label_cond_173:
	parseError = 0x1;
	goto label_goto_69;
	// 4806    .line 1141
	// 4807    .end local v13    # "length":I
	// 4808    .end local v27    # "wday":I
label_cond_177:
	if ( !(attr->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("BYMONTHDAY")))) )  
		goto label_cond_19;
	days = std::make_shared<java::util::StringTokenizer>(value, std::make_shared<java::lang::String>(std::make_shared<char[]>(",")));
	//    .local v8, "days":Ljava/util/StringTokenizer;
	//    .local v5, "count":I
	//    .local v6, "dayOfMonth":[I
	index = 0x0;
	//    .local v11, "index":I
label_goto_195:
	if ( !(days->hasMoreTokens()) )  
		goto label_cond_19;
	//    .end local v11    # "index":I
	//    .local v12, "index":I
	try {
	//label_try_start_19d:
	std::make_shared<std::vector<int[]>>(days->countTokens())[index] = java::lang::Integer::parseInt(days->nextToken());
	//label_try_end_1a7:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1a9;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_19d .. :try_end_1a7} :catch_1a9
	index = ( index + 0x1);
	//    .end local v12    # "index":I
	//    .restart local v11    # "index":I
	goto label_goto_195;
	// 4878    .line 1153
	// 4879    .end local v11    # "index":I
	// 4880    .restart local v12    # "index":I
label_catch_1a9:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v16    # "nfe":Ljava/lang/NumberFormatException;
	0x1;
	goto label_goto_19;
	// 4890    .line 1164
	// 4891    .end local v4    # "attr":Ljava/lang/String;
	// 4892    .end local v5    # "count":I
	// 4893    .end local v6    # "dayOfMonth":[I
	// 4894    .end local v8    # "days":Ljava/util/StringTokenizer;
	// 4895    .end local v12    # "index":I
	// 4896    .end local v16    # "nfe":Ljava/lang/NumberFormatException;
	// 4897    .end local v19    # "prop":Ljava/lang/String;
	// 4898    .end local v21    # "sep":I
	// 4899    .end local v26    # "value":Ljava/lang/String;
label_cond_1ae:
	if ( 0x0 )     
		goto label_cond_1b3;
	return 0x0;
	// 4908    .line 1169
label_cond_1b3:
	until[0x0] = -0x8000000000000000L;
	if ( dayOfMonth )     
		goto label_cond_1d4;
	results = std::make_shared<std::vector<int[]>>(0x4);
	//    .local v20, "results":[I
	results[0x3] = 0x0;
label_cond_1c7:
	results[0x0] = month;
	results[0x1] = 0x0;
	results[0x2] = nthDayOfWeek;
	return results;
	// 4953    .line 1176
	// 4954    .end local v20    # "results":[I
label_cond_1d4:
	results = std::make_shared<std::vector<int[]>>(( dayOfMonth->size() + 0x3));
	//    .restart local v20    # "results":[I
	i = 0x0;
	//    .local v9, "i":I
label_goto_1e0:
	if ( i >= dayOfMonth->size() )
		goto label_cond_1c7;
	results[( i + 0x3)] = dayOfMonth[i];
	i = ( i + 0x1);
	goto label_goto_1e0;

}
// .method private static toWallTimeRule(Landroid/icu/util/DateTimeRule;II)Landroid/icu/util/DateTimeRule;
std::shared_ptr<android::icu::util::DateTimeRule> android::icu::util::VTimeZone::toWallTimeRule(std::shared_ptr<android::icu::util::DateTimeRule> rule,int rawOffset,int dstSavings)
{
	
	int wallt;
	int month;
	int dom;
	int dow;
	int dtype;
	int dshift;
	int wim;
	std::shared_ptr<android::icu::util::DateTimeRule> modifiedRule;
	bool cVar0;
	
	//    .param p0, "rule"    # Landroid/icu/util/DateTimeRule;
	//    .param p1, "rawOffset"    # I
	//    .param p2, "dstSavings"    # I
	if ( rule->getTimeRuleType() )     
		goto label_cond_7;
	return rule;
	// 5012    .line 1704
label_cond_7:
	wallt = rule->getRuleMillisInDay();
	//    .local v5, "wallt":I
	if ( rule->getTimeRuleType() != 0x2 )
		goto label_cond_60;
	wallt = (wallt +  (rawOffset + dstSavings));
label_cond_15:
label_goto_15:
	month = -0x1;
	//    .local v1, "month":I
	dom = 0x0;
	//    .local v2, "dom":I
	dow = 0x0;
	//    .local v3, "dow":I
	dtype = -0x1;
	//    .local v8, "dtype":I
	dshift = 0x0;
	//    .local v7, "dshift":I
	if ( wallt >= 0 )
		goto label_cond_69;
	dshift = -0x1;
	wallt = (wallt +  0x5265c00);
label_cond_21:
label_goto_21:
	month = rule->getRuleMonth();
	dom = rule->getRuleDayOfMonth();
	dow = rule->getRuleDayOfWeek();
	dtype = rule->getDateRuleType();
	if ( !(dshift) )  
		goto label_cond_57;
	if ( dtype != 0x1 )
		goto label_cond_43;
	wim = rule->getRuleWeekInMonth();
	//    .local v9, "wim":I
	if ( wim <= 0 )
		goto label_cond_74;
	dtype = 0x2;
	dom = ( ( ( wim + -0x1) * 0x7) + 0x1);
	//    .end local v9    # "wim":I
label_cond_43:
label_goto_43:
	dom = (dom +  dshift);
	if ( dom )     
		goto label_cond_80;
	month = ( month + -0x1);
	if ( month >= 0 )
		goto label_cond_4c;
	month = 0xb;
label_cond_4c:
	dom = android::icu::util::VTimeZone::MONTHLENGTH[month];
label_cond_50:
label_goto_50:
	if ( !(dtype) )  
		goto label_cond_57;
	dow = (dow +  dshift);
	if ( dow >= 0x1 )
		goto label_cond_8f;
	dow = 0x7;
label_cond_57:
label_goto_57:
	if ( dtype )     
		goto label_cond_94;
	modifiedRule = std::make_shared<android::icu::util::DateTimeRule>(month, dom, wallt, 0x0);
	//    .local v0, "modifiedRule":Landroid/icu/util/DateTimeRule;
label_goto_5f:
	return modifiedRule;
	// 5168    .line 1707
	// 5169    .end local v0    # "modifiedRule":Landroid/icu/util/DateTimeRule;
	// 5170    .end local v1    # "month":I
	// 5171    .end local v2    # "dom":I
	// 5172    .end local v3    # "dow":I
	// 5173    .end local v7    # "dshift":I
	// 5174    .end local v8    # "dtype":I
label_cond_60:
	if ( rule->getTimeRuleType() != 0x1 )
		goto label_cond_15;
	wallt = (wallt +  dstSavings);
	goto label_goto_15;
	// 5189    .line 1716
	// 5190    .restart local v1    # "month":I
	// 5191    .restart local v2    # "dom":I
	// 5192    .restart local v3    # "dow":I
	// 5193    .restart local v7    # "dshift":I
	// 5194    .restart local v8    # "dtype":I
label_cond_69:
	if ( wallt <  0x5265c00 )
		goto label_cond_21;
	dshift = 0x1;
	wallt = (wallt -  0x5265c00);
	goto label_goto_21;
	// 5210    .line 1734
	// 5211    .restart local v9    # "wim":I
label_cond_74:
	dtype = 0x3;
	dom = (android::icu::util::VTimeZone::MONTHLENGTH[month] + ( ( wim + 0x1) * 0x7));
	goto label_goto_43;
	// 5228    .line 1745
	// 5229    .end local v9    # "wim":I
label_cond_80:
	if ( dom <= android::icu::util::VTimeZone::MONTHLENGTH[month] )
		goto label_cond_50;
	month = ( month + 0x1);
	if ( month <= 0xb )
		goto label_cond_8d;
	month = 0x0;
label_cond_8d:
	dom = 0x1;
	goto label_goto_50;
	// 5253    .line 1755
label_cond_8f:
	if ( dow <= 0x7 )
		goto label_cond_57;
	dow = 0x1;
	goto label_goto_57;
	// 5264    .line 1765
label_cond_94:
	if ( dtype != 0x2 )
		goto label_cond_9f;
	cVar0 = 0x1;
label_goto_9a:
	modifiedRule = std::make_shared<android::icu::util::DateTimeRule>(month, dom, dow, cVar0, wallt, 0x0);
	//    .restart local v0    # "modifiedRule":Landroid/icu/util/DateTimeRule;
	goto label_goto_5f;
	// 5284    .line 1766
	// 5285    .end local v0    # "modifiedRule":Landroid/icu/util/DateTimeRule;
label_cond_9f:
	cVar0 = 0x0;
	goto label_goto_9a;

}
// .method private static writeFinalRule(Ljava/io/Writer;ZLandroid/icu/util/AnnualTimeZoneRule;IIJ)V
void android::icu::util::VTimeZone::writeFinalRule(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<android::icu::util::AnnualTimeZoneRule> rule,int fromRawOffset,int fromDSTSavings,long long startTime)
{
	
	std::shared_ptr<android::icu::util::DateTimeRule> dtrule;
	int timeInDay;
	long long cVar0;
	int toOffset;
	
	//    .param p0, "writer"    # Ljava/io/Writer;
	//    .param p1, "isDst"    # Z
	//    .param p2, "rule"    # Landroid/icu/util/AnnualTimeZoneRule;
	//    .param p3, "fromRawOffset"    # I
	//    .param p4, "fromDSTSavings"    # I
	//    .param p5, "startTime"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 5301        value = {
	// 5302            Ljava/io/IOException;
	// 5303        }
	// 5304    .end annotation
	dtrule = android::icu::util::VTimeZone::toWallTimeRule(rule->getRule(), fromRawOffset, fromDSTSavings);
	//    .local v3, "dtrule":Landroid/icu/util/DateTimeRule;
	timeInDay = dtrule->getRuleMillisInDay();
	//    .local v16, "timeInDay":I
	if ( timeInDay >= 0 )
		goto label_cond_29;
	cVar0 = (startTime + (long long)(( timeInDay - 0x0)));
label_cond_17:
label_goto_17:
	toOffset = (rule->getRawOffset() + rule->getDSTSavings());
	//    .local v8, "toOffset":I
	// switch
	{
	auto item = ( dtrule->getDateRuleType() );
	if (item == 0) goto label_pswitch_39;
	if (item == 1) goto label_pswitch_56;
	if (item == 2) goto label_pswitch_77;
	if (item == 3) goto label_pswitch_98;
	}
label_goto_28:
	return;
	// 5362    .line 1672
	// 5363    .end local v8    # "toOffset":I
label_cond_29:
	if ( timeInDay <  0x5265c00 )
		goto label_cond_17;
	(startTime - (long long)((timeInDay - 0x5265bff)));
	goto label_goto_17;
	// 5382    .line 1679
	// 5383    .restart local v8    # "toOffset":I
label_pswitch_39:
	android::icu::util::VTimeZone::writeZonePropsByDOM(writer, isDst, rule->getName(), (fromRawOffset + fromDSTSavings), toOffset, dtrule->getRuleMonth(), dtrule->getRuleDayOfMonth(), cVar0, 0x7fffffffffffffffL);
	goto label_goto_28;
	// 5413    .line 1683
label_pswitch_56:
	android::icu::util::VTimeZone::writeZonePropsByDOW(writer, isDst, rule->getName(), (fromRawOffset + fromDSTSavings), toOffset, dtrule->getRuleMonth(), dtrule->getRuleWeekInMonth(), dtrule->getRuleDayOfWeek(), cVar0, 0x7fffffffffffffffL);
	goto label_goto_28;
	// 5447    .line 1687
label_pswitch_77:
	android::icu::util::VTimeZone::writeZonePropsByDOW_GEQ_DOM(writer, isDst, rule->getName(), (fromRawOffset + fromDSTSavings), toOffset, dtrule->getRuleMonth(), dtrule->getRuleDayOfMonth(), dtrule->getRuleDayOfWeek(), cVar0, 0x7fffffffffffffffL);
	goto label_goto_28;
	// 5481    .line 1691
label_pswitch_98:
	android::icu::util::VTimeZone::writeZonePropsByDOW_LEQ_DOM(writer, isDst, rule->getName(), (fromRawOffset + fromDSTSavings), toOffset, dtrule->getRuleMonth(), dtrule->getRuleDayOfMonth(), dtrule->getRuleDayOfWeek(), cVar0, 0x7fffffffffffffffL);
	goto label_goto_28;
	// 5515    .line 1677
	// 5516    :pswitch_data_ba
	// 5517    .packed-switch 0x0
	// 5518        :pswitch_39
	// 5519        :pswitch_56
	// 5520        :pswitch_77
	// 5521        :pswitch_98
	// 5522    .end packed-switch

}
// .method private static writeFooter(Ljava/io/Writer;)V
void android::icu::util::VTimeZone::writeFooter(std::shared_ptr<java::io::Writer> writer)
{
	
	//    .param p0, "writer"    # Ljava/io/Writer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5529        value = {
	// 5530            Ljava/io/IOException;
	// 5531        }
	// 5532    .end annotation
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("END")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("VTIMEZONE")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	return;

}
// .method private writeHeader(Ljava/io/Writer;)V
void android::icu::util::VTimeZone::writeHeader(std::shared_ptr<java::io::Writer> writer)
{
	
	//    .param p1, "writer"    # Ljava/io/Writer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5563        value = {
	// 5564            Ljava/io/IOException;
	// 5565        }
	// 5566    .end annotation
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("BEGIN")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("VTIMEZONE")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZID")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	writer->write(this->tz->getID());
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	if ( !(this->tzurl) )  
		goto label_cond_4e;
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZURL")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	writer->write(this->tzurl);
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
label_cond_4e:
	if ( !(this->lastmod) )  
		goto label_cond_71;
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST-MODIFIED")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	writer->write(android::icu::util::VTimeZone::getUTCDateTimeString(this->lastmod->getTime()));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
label_cond_71:
	return;

}
// .method private writeZone(Ljava/io/Writer;Landroid/icu/util/BasicTimeZone;[Ljava/lang/String;)V
void android::icu::util::VTimeZone::writeZone(std::shared_ptr<java::io::Writer> w,std::shared_ptr<android::icu::util::BasicTimeZone> basictz,std::shared_ptr<std::vector<java::lang::String>> customProperties)
{
	
	int i;
	std::shared_ptr<java::lang::Object> dstName;
	int dstFromOffset;
	int dstFromDSTSavings;
	int dstToOffset;
	int dstStartYear;
	int dstMonth;
	int dstDayOfWeek;
	int dstWeekInMonth;
	int dstMillisInDay;
	long long dstStartTime;
	long long dstUntilTime;
	int dstCount;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> finalDstRule;
	std::shared_ptr<java::lang::String> stdName;
	int stdFromOffset;
	int stdFromDSTSavings;
	int stdToOffset;
	int stdStartYear;
	int stdMonth;
	int stdDayOfWeek;
	int stdWeekInMonth;
	int stdMillisInDay;
	long long stdStartTime;
	long long stdUntilTime;
	int stdCount;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> finalStdRule;
	auto dtfields;
	int hasTransitions;
	std::shared_ptr<android::icu::util::TimeZoneTransition> tzt;
	int offset;
	bool isDst;
	std::shared_ptr<java::util::Date> nextStart;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	auto t;
	auto name;
	int fromOffset;
	int fromDSTSavings;
	int toOffset;
	int weekInMonth;
	int year;
	int sameRule;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> cVar0;
	std::shared_ptr<android::icu::util::AnnualTimeZoneRule> cVar1;
	
	//    .param p1, "w"    # Ljava/io/Writer;
	//    .param p2, "basictz"    # Landroid/icu/util/BasicTimeZone;
	//    .param p3, "customProperties"    # [Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5683        value = {
	// 5684            Ljava/io/IOException;
	// 5685        }
	// 5686    .end annotation
	this->writeHeader(w);
	if ( !(customProperties) )  
		goto label_cond_29;
	if ( customProperties->size() <= 0 )
		goto label_cond_29;
	i = 0x0;
	//    .local v72, "i":I
label_goto_c:
	if ( i >= customProperties->size() )
		goto label_cond_29;
	if ( !(customProperties[i]) )  
		goto label_cond_26;
	w->write(customProperties[i]);
	w->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
label_cond_26:
	i = ( i + 0x1);
	goto label_goto_c;
	// 5739    .line 1229
	// 5740    .end local v72    # "i":I
label_cond_29:
	//    .local v80, "t":J
	dstName = 0x0;
	//    .local v7, "dstName":Ljava/lang/String;
	dstFromOffset = 0x0;
	//    .local v8, "dstFromOffset":I
	dstFromDSTSavings = 0x0;
	//    .local v53, "dstFromDSTSavings":I
	dstToOffset = 0x0;
	//    .local v9, "dstToOffset":I
	dstStartYear = 0x0;
	//    .local v66, "dstStartYear":I
	dstMonth = 0x0;
	//    .local v17, "dstMonth":I
	dstDayOfWeek = 0x0;
	//    .local v19, "dstDayOfWeek":I
	dstWeekInMonth = 0x0;
	//    .local v18, "dstWeekInMonth":I
	dstMillisInDay = 0x0;
	//    .local v44, "dstMillisInDay":I
	dstStartTime = 0x0;
	//    .local v10, "dstStartTime":J
	dstUntilTime = 0x0;
	//    .local v22, "dstUntilTime":J
	dstCount = 0x0;
	//    .local v4, "dstCount":I
	finalDstRule = 0x0;
	//    .local v51, "finalDstRule":Landroid/icu/util/AnnualTimeZoneRule;
	stdName = 0x0;
	//    .local v27, "stdName":Ljava/lang/String;
	stdFromOffset = 0x0;
	//    .local v28, "stdFromOffset":I
	stdFromDSTSavings = 0x0;
	//    .local v77, "stdFromDSTSavings":I
	stdToOffset = 0x0;
	//    .local v29, "stdToOffset":I
	stdStartYear = 0x0;
	//    .local v79, "stdStartYear":I
	stdMonth = 0x0;
	//    .local v37, "stdMonth":I
	stdDayOfWeek = 0x0;
	//    .local v39, "stdDayOfWeek":I
	stdWeekInMonth = 0x0;
	//    .local v38, "stdWeekInMonth":I
	stdMillisInDay = 0x0;
	//    .local v78, "stdMillisInDay":I
	stdStartTime = 0x0;
	//    .local v30, "stdStartTime":J
	stdUntilTime = 0x0;
	//    .local v42, "stdUntilTime":J
	stdCount = 0x0;
	//    .local v76, "stdCount":I
	finalStdRule = 0x0;
	//    .local v68, "finalStdRule":Landroid/icu/util/AnnualTimeZoneRule;
	dtfields = std::make_shared<std::vector<int[]>>(0x6);
	//    .local v67, "dtfields":[I
	hasTransitions = 0x0;
	//    .end local v7    # "dstName":Ljava/lang/String;
	//    .end local v27    # "stdName":Ljava/lang/String;
	//    .end local v51    # "finalDstRule":Landroid/icu/util/AnnualTimeZoneRule;
	//    .end local v68    # "finalStdRule":Landroid/icu/util/AnnualTimeZoneRule;
	//    .local v71, "hasTransitions":Z
label_cond_62:
	tzt = basictz->getNextTransition(t, 0x0);
	//    .local v83, "tzt":Landroid/icu/util/TimeZoneTransition;
	if ( tzt )     
		goto label_cond_9f;
label_goto_6d:
	if ( hasTransitions )     
		goto label_cond_242;
	offset = basictz->getOffset(0x0);
	//    .local v48, "offset":I
	if ( offset == basictz->getRawOffset() )
		goto label_cond_23e;
	isDst = 0x1;
	//    .local v46, "isDst":Z
label_goto_81:
	android::icu::util::VTimeZone::writeZonePropsByTime(w, isDst, android::icu::util::VTimeZone::getDefaultTZName(basictz->getID(), isDst), offset, offset, (0x0 - (long long)(offset)), 0x0);
	//    .end local v46    # "isDst":Z
	//    .end local v48    # "offset":I
label_cond_9b:
label_goto_9b:
	android::icu::util::VTimeZone::writeFooter(w);
	return;
	// 5947    .line 1267
label_cond_9f:
	hasTransitions = 0x1;
	t = tzt->getTime();
	name = tzt->getTo()->getName();
	//    .local v73, "name":Ljava/lang/String;
	if ( !(tzt->getTo()->getDSTSavings()) )  
		goto label_cond_18c;
	//    .restart local v46    # "isDst":Z
label_goto_b9:
	fromOffset = (tzt->getFrom()->getRawOffset() + tzt->getFrom()->getDSTSavings());
	//    .local v70, "fromOffset":I
	fromDSTSavings = tzt->getFrom()->getDSTSavings();
	//    .local v69, "fromDSTSavings":I
	toOffset = (tzt->getTo()->getRawOffset() + tzt->getTo()->getDSTSavings());
	//    .local v82, "toOffset":I
	android::icu::impl::Grego::timeToFields((tzt->getTime() +  (long long)(fromOffset)), dtfields);
	weekInMonth = android::icu::impl::Grego::getDayOfWeekInMonth(dtfields[0x0], dtfields[0x1], dtfields[0x2]);
	//    .local v84, "weekInMonth":I
	year = dtfields[0x0];
	//    .local v85, "year":I
	sameRule = 0x0;
	//    .local v75, "sameRule":Z
	if ( !(isDst) )  
		goto label_cond_19d;
	if ( finalDstRule )     
		goto label_cond_125;
	if ( !(tzt->getTo()->instanceOf("android::icu::util::AnnualTimeZoneRule")) )  
		goto label_cond_125;
	cVar0 = tzt->getTo();
	cVar0->checkCast("android::icu::util::AnnualTimeZoneRule");
	if ( cVar0->getEndYear() != 0x7fffffff )
		goto label_cond_125;
	finalDstRule = tzt->getTo();
	finalDstRule->checkCast("android::icu::util::AnnualTimeZoneRule");
label_cond_125:
	if ( dstCount <= 0 )
		goto label_cond_16a;
	if ( year != (dstStartYear + dstCount) )
		goto label_cond_15e;
	if ( !(name->equals(dstName)) )  
		goto label_cond_15e;
	if ( dstFromOffset != fromOffset )
		goto label_cond_15e;
	if ( dstToOffset != toOffset )
		goto label_cond_15e;
	if ( dstMonth != dtfields[0x1] )
		goto label_cond_15e;
	if ( dstDayOfWeek != dtfields[0x3] )
		goto label_cond_15e;
	if ( dstWeekInMonth != weekInMonth )
		goto label_cond_15e;
	if ( dstMillisInDay != dtfields[0x5] )
		goto label_cond_15e;
	dstCount = ( dstCount + 0x1);
	sameRule = 0x1;
label_cond_15e:
	if ( sameRule )     
		goto label_cond_16a;
	if ( dstCount != 0x1 )
		goto label_cond_190;
	android::icu::util::VTimeZone::writeZonePropsByTime(w, 0x1, dstName, dstFromOffset, dstToOffset, dstStartTime, 0x1);
label_cond_16a:
label_goto_16a:
	if ( sameRule )     
		goto label_cond_186;
	dstName = name;
	//    .local v7, "dstName":Ljava/lang/String;
	dstFromOffset = fromOffset;
	fromDSTSavings;
	dstToOffset = toOffset;
	dstStartYear = year;
	dstMonth = dtfields[0x1];
	dstDayOfWeek = dtfields[0x3];
	dstWeekInMonth = weekInMonth;
	dstMillisInDay = dtfields[0x5];
	t;
	dstStartTime = t;
	dstCount = 0x1;
	//    .end local v7    # "dstName":Ljava/lang/String;
label_cond_186:
	if ( !(finalStdRule) )  
		goto label_cond_62;
	if ( !(finalDstRule) )  
		goto label_cond_62;
	goto label_goto_6d;
	// 6260    .line 1270
	// 6261    .end local v46    # "isDst":Z
	// 6262    .end local v69    # "fromDSTSavings":I
	// 6263    .end local v70    # "fromOffset":I
	// 6264    .end local v75    # "sameRule":Z
	// 6265    .end local v82    # "toOffset":I
	// 6266    .end local v84    # "weekInMonth":I
	// 6267    .end local v85    # "year":I
label_cond_18c:
	//    .restart local v46    # "isDst":Z
	goto label_goto_b9;
	// 6274    .line 1303
	// 6275    .restart local v69    # "fromDSTSavings":I
	// 6276    .restart local v70    # "fromOffset":I
	// 6277    .restart local v75    # "sameRule":Z
	// 6278    .restart local v82    # "toOffset":I
	// 6279    .restart local v84    # "weekInMonth":I
	// 6280    .restart local v85    # "year":I
label_cond_190:
	android::icu::util::VTimeZone::writeZonePropsByDOW(w, 0x1, dstName, dstFromOffset, dstToOffset, dstMonth, dstWeekInMonth, dstDayOfWeek, dstStartTime, t);
	goto label_goto_16a;
	// 6298    .line 1326
label_cond_19d:
	if ( finalStdRule )     
		goto label_cond_1bc;
	if ( !(tzt->getTo()->instanceOf("android::icu::util::AnnualTimeZoneRule")) )  
		goto label_cond_1bc;
	cVar1 = tzt->getTo();
	cVar1->checkCast("android::icu::util::AnnualTimeZoneRule");
	if ( cVar1->getEndYear() != 0x7fffffff )
		goto label_cond_1bc;
	finalStdRule = tzt->getTo();
	finalStdRule->checkCast("android::icu::util::AnnualTimeZoneRule");
label_cond_1bc:
	if ( stdCount <= 0 )
		goto label_cond_20b;
	if ( year != (stdStartYear + stdCount) )
		goto label_cond_1fb;
	if ( !(name->equals(stdName)) )  
		goto label_cond_1fb;
	if ( stdFromOffset != fromOffset )
		goto label_cond_1fb;
	if ( stdToOffset != toOffset )
		goto label_cond_1fb;
	if ( stdMonth != dtfields[0x1] )
		goto label_cond_1fb;
	if ( stdDayOfWeek != dtfields[0x3] )
		goto label_cond_1fb;
	if ( stdWeekInMonth != weekInMonth )
		goto label_cond_1fb;
	if ( stdMillisInDay != dtfields[0x5] )
		goto label_cond_1fb;
	stdCount = ( stdCount + 0x1);
	sameRule = 0x1;
label_cond_1fb:
	if ( sameRule )     
		goto label_cond_20b;
	if ( stdCount != 0x1 )
		goto label_cond_22e;
	android::icu::util::VTimeZone::writeZonePropsByTime(w, 0x0, stdName, stdFromOffset, stdToOffset, stdStartTime, 0x1);
label_cond_20b:
label_goto_20b:
	if ( sameRule )     
		goto label_cond_228;
	stdName = name;
	//    .local v27, "stdName":Ljava/lang/String;
	stdFromOffset = fromOffset;
	fromDSTSavings;
	stdToOffset = toOffset;
	stdStartYear = year;
	stdMonth = dtfields[0x1];
	stdDayOfWeek = dtfields[0x3];
	stdWeekInMonth = weekInMonth;
	stdMillisInDay = dtfields[0x5];
	t;
	stdStartTime = t;
	stdCount = 0x1;
	//    .end local v27    # "stdName":Ljava/lang/String;
label_cond_228:
	if ( !(finalStdRule) )  
		goto label_cond_62;
	if ( !(finalDstRule) )  
		goto label_cond_62;
	goto label_goto_6d;
	// 6490    .line 1350
label_cond_22e:
	android::icu::util::VTimeZone::writeZonePropsByDOW(w, 0x0, stdName, stdFromOffset, stdToOffset, stdMonth, stdWeekInMonth, stdDayOfWeek, stdStartTime, t);
	goto label_goto_20b;
	// 6508    .line 1377
	// 6509    .end local v46    # "isDst":Z
	// 6510    .end local v69    # "fromDSTSavings":I
	// 6511    .end local v70    # "fromOffset":I
	// 6512    .end local v73    # "name":Ljava/lang/String;
	// 6513    .end local v75    # "sameRule":Z
	// 6514    .end local v82    # "toOffset":I
	// 6515    .end local v84    # "weekInMonth":I
	// 6516    .end local v85    # "year":I
	// 6517    .restart local v48    # "offset":I
label_cond_23e:
	isDst = 0x0;
	//    .restart local v46    # "isDst":Z
	goto label_goto_81;
	// 6524    .line 1381
	// 6525    .end local v46    # "isDst":Z
	// 6526    .end local v48    # "offset":I
label_cond_242:
	if ( dstCount <= 0 )
		goto label_cond_250;
	if ( finalDstRule )     
		goto label_cond_271;
	if ( dstCount != 0x1 )
		goto label_cond_264;
	android::icu::util::VTimeZone::writeZonePropsByTime(w, 0x1, dstName, dstFromOffset, dstToOffset, dstStartTime, 0x1);
label_cond_250:
label_goto_250:
	if ( stdCount <= 0 )
		goto label_cond_9b;
	if ( finalStdRule )     
		goto label_cond_2f1;
	if ( stdCount != 0x1 )
		goto label_cond_2e0;
	android::icu::util::VTimeZone::writeZonePropsByTime(w, 0x0, stdName, stdFromOffset, stdToOffset, stdStartTime, 0x1);
	goto label_goto_9b;
	// 6577    .line 1387
label_cond_264:
	android::icu::util::VTimeZone::writeZonePropsByDOW(w, 0x1, dstName, dstFromOffset, dstToOffset, dstMonth, dstWeekInMonth, dstDayOfWeek, dstStartTime, dstUntilTime);
	goto label_goto_250;
	// 6595    .line 1391
label_cond_271:
	if ( dstCount != 0x1 )
		goto label_cond_280;
	android::icu::util::VTimeZone::writeFinalRule(w, 0x1, finalDstRule, (dstFromOffset - dstFromDSTSavings), dstFromDSTSavings, dstStartTime);
	goto label_goto_250;
	// 6615    .line 1396
label_cond_280:
	if ( !(android::icu::util::VTimeZone::isEquivalentDateRule(dstMonth, dstWeekInMonth, dstDayOfWeek, finalDstRule->getRule())) )  
		goto label_cond_2ab;
	android::icu::util::VTimeZone::writeZonePropsByDOW(w, 0x1, dstName, dstFromOffset, dstToOffset, dstMonth, dstWeekInMonth, dstDayOfWeek, dstStartTime, 0x7fffffffffffffffL);
	goto label_goto_250;
	// 6660    .line 1401
label_cond_2ab:
	android::icu::util::VTimeZone::writeZonePropsByDOW(w, 0x1, dstName, dstFromOffset, dstToOffset, dstMonth, dstWeekInMonth, dstDayOfWeek, dstStartTime, dstUntilTime);
	nextStart = finalDstRule->getNextStart(dstUntilTime, (dstFromOffset - dstFromDSTSavings), dstFromDSTSavings, 0x0);
	//    .local v74, "nextStart":Ljava/util/Date;
	if ( android::icu::util::VTimeZone::_assertionsDisabled )     
		goto label_cond_2cf;
	if ( nextStart )     
		goto label_cond_2cf;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 6704    .line 1408
label_cond_2cf:
	if ( !(nextStart) )  
		goto label_cond_250;
	android::icu::util::VTimeZone::writeFinalRule(w, 0x1, finalDstRule, (dstFromOffset - dstFromDSTSavings), dstFromDSTSavings, nextStart->getTime());
	goto label_goto_250;
	// 6724    .line 1422
	// 6725    .end local v74    # "nextStart":Ljava/util/Date;
label_cond_2e0:
	android::icu::util::VTimeZone::writeZonePropsByDOW(w, 0x0, stdName, stdFromOffset, stdToOffset, stdMonth, stdWeekInMonth, stdDayOfWeek, stdStartTime, stdUntilTime);
	goto label_goto_9b;
	// 6743    .line 1426
label_cond_2f1:
	if ( stdCount != 0x1 )
		goto label_cond_307;
	android::icu::util::VTimeZone::writeFinalRule(w, 0x0, finalStdRule, (stdFromOffset - stdFromDSTSavings), stdFromDSTSavings, stdStartTime);
	goto label_goto_9b;
	// 6769    .line 1431
label_cond_307:
	if ( !(android::icu::util::VTimeZone::isEquivalentDateRule(stdMonth, stdWeekInMonth, stdDayOfWeek, finalStdRule->getRule())) )  
		goto label_cond_333;
	android::icu::util::VTimeZone::writeZonePropsByDOW(w, 0x0, stdName, stdFromOffset, stdToOffset, stdMonth, stdWeekInMonth, stdDayOfWeek, stdStartTime, 0x7fffffffffffffffL);
	goto label_goto_9b;
	// 6814    .line 1436
label_cond_333:
	android::icu::util::VTimeZone::writeZonePropsByDOW(w, 0x0, stdName, stdFromOffset, stdToOffset, stdMonth, stdWeekInMonth, stdDayOfWeek, stdStartTime, stdUntilTime);
	nextStart = finalStdRule->getNextStart(stdUntilTime, (stdFromOffset - stdFromDSTSavings), stdFromDSTSavings, 0x0);
	//    .restart local v74    # "nextStart":Ljava/util/Date;
	if ( android::icu::util::VTimeZone::_assertionsDisabled )     
		goto label_cond_35c;
	if ( nextStart )     
		goto label_cond_35c;
	cVar3 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar3;
	// 6860    .line 1443
label_cond_35c:
	if ( !(nextStart) )  
		goto label_cond_9b;
	android::icu::util::VTimeZone::writeFinalRule(w, 0x0, finalStdRule, (stdFromOffset - stdFromDSTSavings), stdFromDSTSavings, nextStart->getTime());
	goto label_goto_9b;

}
// .method private static writeZonePropsByDOM(Ljava/io/Writer;ZLjava/lang/String;IIIIJJ)V
void android::icu::util::VTimeZone::writeZonePropsByDOM(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<java::lang::String> tzname,int fromOffset,int toOffset,int month,int dayOfMonth,long long startTime,long long untilTime)
{
	
	//    .param p0, "writer"    # Ljava/io/Writer;
	//    .param p1, "isDst"    # Z
	//    .param p2, "tzname"    # Ljava/lang/String;
	//    .param p3, "fromOffset"    # I
	//    .param p4, "toOffset"    # I
	//    .param p5, "month"    # I
	//    .param p6, "dayOfMonth"    # I
	//    .param p7, "startTime"    # J
	//    .param p9, "untilTime"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 6897        value = {
	// 6898            Ljava/io/IOException;
	// 6899        }
	// 6900    .end annotation
	android::icu::util::VTimeZone::beginZoneProps(writer, isDst, tzname, fromOffset, toOffset, startTime);
	android::icu::util::VTimeZone::beginRRULE(writer, month);
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("BYMONTHDAY")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")));
	writer->write(java::lang::Integer::toString(dayOfMonth));
	if ( !((untilTime > 0x7fffffffffffffffL)) )  
		goto label_cond_33;
	android::icu::util::VTimeZone::appendUNTIL(writer, android::icu::util::VTimeZone::getDateTimeString(((long long)(fromOffset) + untilTime)));
label_cond_33:
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	android::icu::util::VTimeZone::endZoneProps(writer, isDst);
	return;

}
// .method private static writeZonePropsByDOW(Ljava/io/Writer;ZLjava/lang/String;IIIIIJJ)V
void android::icu::util::VTimeZone::writeZonePropsByDOW(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<java::lang::String> tzname,int fromOffset,int toOffset,int month,int weekInMonth,int dayOfWeek,long long startTime,long long untilTime)
{
	
	//    .param p0, "writer"    # Ljava/io/Writer;
	//    .param p1, "isDst"    # Z
	//    .param p2, "tzname"    # Ljava/lang/String;
	//    .param p3, "fromOffset"    # I
	//    .param p4, "toOffset"    # I
	//    .param p5, "month"    # I
	//    .param p6, "weekInMonth"    # I
	//    .param p7, "dayOfWeek"    # I
	//    .param p8, "startTime"    # J
	//    .param p10, "untilTime"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 6982        value = {
	// 6983            Ljava/io/IOException;
	// 6984        }
	// 6985    .end annotation
	android::icu::util::VTimeZone::beginZoneProps(writer, isDst, tzname, fromOffset, toOffset, startTime);
	android::icu::util::VTimeZone::beginRRULE(writer, month);
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("BYDAY")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")));
	writer->write(java::lang::Integer::toString(weekInMonth));
	writer->write(android::icu::util::VTimeZone::ICAL_DOW_NAMES[( dayOfWeek + -0x1)]);
	if ( !((untilTime > 0x7fffffffffffffffL)) )  
		goto label_cond_3c;
	android::icu::util::VTimeZone::appendUNTIL(writer, android::icu::util::VTimeZone::getDateTimeString(((long long)(fromOffset) + untilTime)));
label_cond_3c:
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	android::icu::util::VTimeZone::endZoneProps(writer, isDst);
	return;

}
// .method private static writeZonePropsByDOW_GEQ_DOM(Ljava/io/Writer;ZLjava/lang/String;IIIIIJJ)V
void android::icu::util::VTimeZone::writeZonePropsByDOW_GEQ_DOM(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<java::lang::String> tzname,int fromOffset,int toOffset,int month,int dayOfMonth,int dayOfWeek,long long startTime,long long untilTime)
{
	
	int currentMonthDays;
	int prevMonthDays;
	int nextMonthDays;
	
	//    .param p0, "writer"    # Ljava/io/Writer;
	//    .param p1, "isDst"    # Z
	//    .param p2, "tzname"    # Ljava/lang/String;
	//    .param p3, "fromOffset"    # I
	//    .param p4, "toOffset"    # I
	//    .param p5, "month"    # I
	//    .param p6, "dayOfMonth"    # I
	//    .param p7, "dayOfWeek"    # I
	//    .param p8, "startTime"    # J
	//    .param p10, "untilTime"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 7076        value = {
	// 7077            Ljava/io/IOException;
	// 7078        }
	// 7079    .end annotation
	if ( ( dayOfMonth % 0x7) != 0x1 )
		goto label_cond_1f;
	android::icu::util::VTimeZone::writeZonePropsByDOW(writer, isDst, tzname, fromOffset, toOffset, month, ( ( dayOfMonth + 0x6) / 0x7), dayOfWeek, startTime, untilTime);
label_goto_1e:
	return;
	// 7119    .line 1560
label_cond_1f:
	if ( month == 0x1 )
		goto label_cond_51;
	if ( ( (android::icu::util::VTimeZone::MONTHLENGTH[month] - dayOfMonth) % 0x7) != 0x6 )
		goto label_cond_51;
	android::icu::util::VTimeZone::writeZonePropsByDOW(writer, isDst, tzname, fromOffset, toOffset, month, ( ( ( (android::icu::util::VTimeZone::MONTHLENGTH[month] - dayOfMonth) + 0x1) / 0x7) * -0x1), dayOfWeek, startTime, untilTime);
	goto label_goto_1e;
label_cond_51:
	android::icu::util::VTimeZone::beginZoneProps(writer, isDst, tzname, fromOffset, toOffset, startTime);
	//    .local v17, "startDay":I
	currentMonthDays = 0x7;
	//    .local v19, "currentMonthDays":I
	if ( dayOfMonth > 0 ) 
		goto label_cond_95;
	prevMonthDays = ( dayOfMonth - 0x1);
	//    .local v7, "prevMonthDays":I
	currentMonthDays = ( prevMonthDays - 0x7);
	if ( ( month + -0x1) >= 0 )
		goto label_cond_92;
	//    .local v4, "prevMonth":I
label_goto_70:
	android::icu::util::VTimeZone::writeZonePropsByDOW_GEQ_DOM_sub(writer, prevMonth, (0 - prevMonthDays), dayOfWeek, prevMonthDays, 0x7fffffffffffffffL, fromOffset);
	//    .end local v4    # "prevMonth":I
	//    .end local v7    # "prevMonthDays":I
label_cond_81:
label_goto_81:
	android::icu::util::VTimeZone::writeZonePropsByDOW_GEQ_DOM_sub(writer, month, dayOfMonth, dayOfWeek, currentMonthDays, untilTime, fromOffset);
	android::icu::util::VTimeZone::endZoneProps(writer, isDst);
	goto label_goto_1e;
	// 7256    .line 1577
	// 7257    .restart local v7    # "prevMonthDays":I
label_cond_92:
	//    .restart local v4    # "prevMonth":I
	goto label_goto_70;
	// 7264    .line 1586
	// 7265    .end local v4    # "prevMonth":I
	// 7266    .end local v7    # "prevMonthDays":I
label_cond_95:
	if ( ( dayOfMonth + 0x6) <= android::icu::util::VTimeZone::MONTHLENGTH[month] )
		goto label_cond_81;
	nextMonthDays = (( dayOfMonth + 0x6) - android::icu::util::VTimeZone::MONTHLENGTH[month]);
	//    .local v13, "nextMonthDays":I
	currentMonthDays = ( nextMonthDays - 0x7);
	if ( ( month + 0x1) <= 0xb )
		goto label_cond_be;
	//    .local v10, "nextMonth":I
label_goto_ae:
	android::icu::util::VTimeZone::writeZonePropsByDOW_GEQ_DOM_sub(writer, nextMonth, 0x1, dayOfWeek, nextMonthDays, 0x7fffffffffffffffL, fromOffset);
	goto label_goto_81;
	// 7315    .line 1592
	// 7316    .end local v10    # "nextMonth":I
label_cond_be:
	//    .restart local v10    # "nextMonth":I
	goto label_goto_ae;

}
// .method private static writeZonePropsByDOW_GEQ_DOM_sub(Ljava/io/Writer;IIIIJI)V
void android::icu::util::VTimeZone::writeZonePropsByDOW_GEQ_DOM_sub(std::shared_ptr<java::io::Writer> writer,int month,int dayOfMonth,int dayOfWeek,int numDays,long long untilTime,int fromOffset)
{
	
	int startDayNum;
	int i;
	
	//    .param p0, "writer"    # Ljava/io/Writer;
	//    .param p1, "month"    # I
	//    .param p2, "dayOfMonth"    # I
	//    .param p3, "dayOfWeek"    # I
	//    .param p4, "numDays"    # I
	//    .param p5, "untilTime"    # J
	//    .param p7, "fromOffset"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 7334        value = {
	// 7335            Ljava/io/IOException;
	// 7336        }
	// 7337    .end annotation
	//    .local v2, "startDayNum":I
	if ( month != 0x1 )
		goto label_cond_58;
	//    .local v1, "isFeb":Z
label_goto_5:
	if ( dayOfMonth >= 0 )
		goto label_cond_12;
	if ( !(( 0x1 ^ 0x1)) )  
		goto label_cond_12;
	startDayNum = ( (android::icu::util::VTimeZone::MONTHLENGTH[month] +  dayOfMonth) + 0x1);
label_cond_12:
	android::icu::util::VTimeZone::beginRRULE(writer, month);
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("BYDAY")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")));
	writer->write(android::icu::util::VTimeZone::ICAL_DOW_NAMES[( dayOfWeek + -0x1)]);
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("BYMONTHDAY")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")));
	writer->write(java::lang::Integer::toString(dayOfMonth));
	i = 0x1;
	//    .local v0, "i":I
label_goto_44:
	if ( i >= numDays )
		goto label_cond_5a;
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")));
	writer->write(java::lang::Integer::toString((startDayNum + i)));
	i = ( i + 0x1);
	goto label_goto_44;
	// 7440    .line 1608
	// 7441    .end local v0    # "i":I
	// 7442    .end local v1    # "isFeb":Z
label_cond_58:
	0x0;
	//    .restart local v1    # "isFeb":Z
	goto label_goto_5;
	// 7449    .line 1627
	// 7450    .restart local v0    # "i":I
label_cond_5a:
	if ( !((untilTime > 0x7fffffffffffffffL)) )  
		goto label_cond_6c;
	android::icu::util::VTimeZone::appendUNTIL(writer, android::icu::util::VTimeZone::getDateTimeString(((long long)(fromOffset) +  untilTime)));
label_cond_6c:
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	return;

}
// .method private static writeZonePropsByDOW_LEQ_DOM(Ljava/io/Writer;ZLjava/lang/String;IIIIIJJ)V
void android::icu::util::VTimeZone::writeZonePropsByDOW_LEQ_DOM(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<java::lang::String> tzname,int fromOffset,int toOffset,int month,int dayOfMonth,int dayOfWeek,long long startTime,long long untilTime)
{
	
	//    .param p0, "writer"    # Ljava/io/Writer;
	//    .param p1, "isDst"    # Z
	//    .param p2, "tzname"    # Ljava/lang/String;
	//    .param p3, "fromOffset"    # I
	//    .param p4, "toOffset"    # I
	//    .param p5, "month"    # I
	//    .param p6, "dayOfMonth"    # I
	//    .param p7, "dayOfWeek"    # I
	//    .param p8, "startTime"    # J
	//    .param p10, "untilTime"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 7492        value = {
	// 7493            Ljava/io/IOException;
	// 7494        }
	// 7495    .end annotation
	if ( ( dayOfMonth % 0x7) )     
		goto label_cond_1a;
	android::icu::util::VTimeZone::writeZonePropsByDOW(writer, isDst, tzname, fromOffset, toOffset, month, ( dayOfMonth / 0x7), dayOfWeek, startTime, untilTime);
label_goto_19:
	return;
	// 7531    .line 1643
label_cond_1a:
	if ( month == 0x1 )
		goto label_cond_49;
	if ( ( (android::icu::util::VTimeZone::MONTHLENGTH[month] - dayOfMonth) % 0x7) )     
		goto label_cond_49;
	android::icu::util::VTimeZone::writeZonePropsByDOW(writer, isDst, tzname, fromOffset, toOffset, month, ( ( ( (android::icu::util::VTimeZone::MONTHLENGTH[month] - dayOfMonth) / 0x7) + 0x1) * -0x1), dayOfWeek, startTime, untilTime);
	goto label_goto_19;
	// 7585    .line 1647
label_cond_49:
	if ( month != 0x1 )
		goto label_cond_68;
	if ( dayOfMonth != 0x1d )
		goto label_cond_68;
	android::icu::util::VTimeZone::writeZonePropsByDOW(writer, isDst, tzname, fromOffset, toOffset, 0x1, -0x1, dayOfWeek, startTime, untilTime);
	goto label_goto_19;
	// 7625    .line 1654
label_cond_68:
	android::icu::util::VTimeZone::writeZonePropsByDOW_GEQ_DOM(writer, isDst, tzname, fromOffset, toOffset, month, ( dayOfMonth + -0x6), dayOfWeek, startTime, untilTime);
	goto label_goto_19;

}
// .method private static writeZonePropsByTime(Ljava/io/Writer;ZLjava/lang/String;IIJZ)V
void android::icu::util::VTimeZone::writeZonePropsByTime(std::shared_ptr<java::io::Writer> writer,bool isDst,std::shared_ptr<java::lang::String> tzname,int fromOffset,int toOffset,long long time,bool withRDATE)
{
	
	//    .param p0, "writer"    # Ljava/io/Writer;
	//    .param p1, "isDst"    # Z
	//    .param p2, "tzname"    # Ljava/lang/String;
	//    .param p3, "fromOffset"    # I
	//    .param p4, "toOffset"    # I
	//    .param p5, "time"    # J
	//    .param p7, "withRDATE"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 7663        value = {
	// 7664            Ljava/io/IOException;
	// 7665        }
	// 7666    .end annotation
	android::icu::util::VTimeZone::beginZoneProps(writer, isDst, tzname, fromOffset, toOffset, time);
	if ( !(withRDATE) )  
		goto label_cond_20;
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("RDATE")));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	writer->write(android::icu::util::VTimeZone::getDateTimeString(((long long)(fromOffset) +  time)));
	writer->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
label_cond_20:
	android::icu::util::VTimeZone::endZoneProps(writer, isDst);
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::VTimeZone::clone()
{
	
	if ( !(this->isFrozen()) )  
		goto label_cond_7;
	return this;
	// 7725    .line 361
label_cond_7:
	return this->cloneAsThawed();

}
// .method public cloneAsThawed()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::VTimeZone::cloneAsThawed()
{
	
	std::shared_ptr<android::icu::util::VTimeZone> vtz;
	std::shared_ptr<android::icu::util::BasicTimeZone> cVar0;
	
	vtz = this->cloneAsThawed();
	vtz->checkCast("android::icu::util::VTimeZone");
	//    .local v0, "vtz":Landroid/icu/util/VTimeZone;
	cVar0 = this->tz->cloneAsThawed();
	cVar0->checkCast("android::icu::util::BasicTimeZone");
	vtz->tz = cVar0;
	vtz->isFrozen = 0x0;
	return vtz;

}
// .method public freeze()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::util::VTimeZone::freeze()
{
	
	this->isFrozen = 0x1;
	return this;

}
// .method public getLastModified()Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::VTimeZone::getLastModified()
{
	
	return this->lastmod;

}
// .method public getNextTransition(JZ)Landroid/icu/util/TimeZoneTransition;
std::shared_ptr<android::icu::util::TimeZoneTransition> android::icu::util::VTimeZone::getNextTransition(long long base,bool inclusive)
{
	
	//    .param p1, "base"    # J
	//    .param p3, "inclusive"    # Z
	return this->tz->getNextTransition(base, inclusive);

}
// .method public getOffset(IIIIII)I
int android::icu::util::VTimeZone::getOffset(int era,int year,int month,int day,int dayOfWeek,int milliseconds)
{
	
	//    .param p1, "era"    # I
	//    .param p2, "year"    # I
	//    .param p3, "month"    # I
	//    .param p4, "day"    # I
	//    .param p5, "dayOfWeek"    # I
	//    .param p6, "milliseconds"    # I
	return this->tz->getOffset(era, year, month, day, dayOfWeek, milliseconds);

}
// .method public getOffset(JZ[I)V
void android::icu::util::VTimeZone::getOffset(long long date,bool local,std::shared_ptr<int[]> offsets)
{
	
	//    .param p1, "date"    # J
	//    .param p3, "local"    # Z
	//    .param p4, "offsets"    # [I
	this->tz->getOffset(date, local, offsets);
	return;

}
// .method public getOffsetFromLocal(JII[I)V
void android::icu::util::VTimeZone::getOffsetFromLocal(long long date,int nonExistingTimeOpt,int duplicatedTimeOpt,std::shared_ptr<int[]> offsets)
{
	
	//    .param p1, "date"    # J
	//    .param p3, "nonExistingTimeOpt"    # I
	//    .param p4, "duplicatedTimeOpt"    # I
	//    .param p5, "offsets"    # [I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 7860    .end annotation
	this->tz->getOffsetFromLocal(date, nonExistingTimeOpt, duplicatedTimeOpt, offsets);
	return;

}
// .method public getPreviousTransition(JZ)Landroid/icu/util/TimeZoneTransition;
std::shared_ptr<android::icu::util::TimeZoneTransition> android::icu::util::VTimeZone::getPreviousTransition(long long base,bool inclusive)
{
	
	//    .param p1, "base"    # J
	//    .param p3, "inclusive"    # Z
	return this->tz->getPreviousTransition(base, inclusive);

}
// .method public getRawOffset()I
int android::icu::util::VTimeZone::getRawOffset()
{
	
	return this->tz->getRawOffset();

}
// .method public getTZURL()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::VTimeZone::getTZURL()
{
	
	return this->tzurl;

}
// .method public getTimeZoneRules()[Landroid/icu/util/TimeZoneRule;
std::shared_ptr<android::icu::util::TimeZoneRule> android::icu::util::VTimeZone::getTimeZoneRules()
{
	
	return this->tz->getTimeZoneRules();

}
// .method public getTimeZoneRules(J)[Landroid/icu/util/TimeZoneRule;
std::shared_ptr<android::icu::util::TimeZoneRule> android::icu::util::VTimeZone::getTimeZoneRules(long long start)
{
	
	//    .param p1, "start"    # J
	return this->tz->getTimeZoneRules(start);

}
// .method public hasEquivalentTransitions(Landroid/icu/util/TimeZone;JJ)Z
bool android::icu::util::VTimeZone::hasEquivalentTransitions(std::shared_ptr<android::icu::util::TimeZone> other,long long start,long long end)
{
	
	//    .param p1, "other"    # Landroid/icu/util/TimeZone;
	//    .param p2, "start"    # J
	//    .param p4, "end"    # J
	if ( this != other )
		goto label_cond_4;
	return 0x1;
	// 7964    .line 334
label_cond_4:
	return this->tz->hasEquivalentTransitions(other, start, end);

}
// .method public hasSameRules(Landroid/icu/util/TimeZone;)Z
bool android::icu::util::VTimeZone::hasSameRules(std::shared_ptr<android::icu::util::TimeZone> other)
{
	
	//    .param p1, "other"    # Landroid/icu/util/TimeZone;
	if ( this != other )
		goto label_cond_4;
	return 0x1;
	// 7994    .line 157
label_cond_4:
	if ( !(other->instanceOf("android::icu::util::VTimeZone")) )  
		goto label_cond_13;
	other->checkCast("android::icu::util::VTimeZone");
	//    .end local p1    # "other":Landroid/icu/util/TimeZone;
	return this->tz->hasSameRules(other->tz);
	// 8014    .line 160
	// 8015    .restart local p1    # "other":Landroid/icu/util/TimeZone;
label_cond_13:
	return this->tz->hasSameRules(other);

}
// .method public inDaylightTime(Ljava/util/Date;)Z
bool android::icu::util::VTimeZone::inDaylightTime(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	return this->tz->inDaylightTime(date);

}
// .method public isFrozen()Z
bool android::icu::util::VTimeZone::isFrozen()
{
	
	return this->isFrozen;

}
// .method public observesDaylightTime()Z
bool android::icu::util::VTimeZone::observesDaylightTime()
{
	
	return this->tz->observesDaylightTime();

}
// .method public setLastModified(Ljava/util/Date;)V
void android::icu::util::VTimeZone::setLastModified(std::shared_ptr<java::util::Date> date)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "date"    # Ljava/util/Date;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen VTimeZone instance.")));
	// throw
	throw cVar0;
	// 8086    .line 206
label_cond_f:
	this->lastmod = date;
	return;

}
// .method public setRawOffset(I)V
void android::icu::util::VTimeZone::setRawOffset(int offsetMillis)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "offsetMillis"    # I
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen VTimeZone instance.")));
	// throw
	throw cVar0;
	// 8115    .line 130
label_cond_f:
	this->tz->setRawOffset(offsetMillis);
	return;

}
// .method public setTZURL(Ljava/lang/String;)V
void android::icu::util::VTimeZone::setTZURL(std::shared_ptr<java::lang::String> url)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "url"    # Ljava/lang/String;
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify a frozen VTimeZone instance.")));
	// throw
	throw cVar0;
	// 8146    .line 183
label_cond_f:
	this->tzurl = url;
	return;

}
// .method public useDaylightTime()Z
bool android::icu::util::VTimeZone::useDaylightTime()
{
	
	return this->tz->useDaylightTime();

}
// .method public write(Ljava/io/Writer;)V
void android::icu::util::VTimeZone::write(std::shared_ptr<java::io::Writer> writer)
{
	
	std::shared_ptr<java::io::BufferedWriter> bw;
	std::shared_ptr<java::util::Iterator> line_S_iterator;
	std::shared_ptr<java::lang::String> line;
	std::shared<std::vector<std::vector<java::lang::String>>> customProperties;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "writer"    # Ljava/io/Writer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 8172        value = {
	// 8173            Ljava/io/IOException;
	// 8174        }
	// 8175    .end annotation
	bw = std::make_shared<java::io::BufferedWriter>(writer);
	//    .local v0, "bw":Ljava/io/BufferedWriter;
	if ( !(this->vtzlines) )  
		goto label_cond_7b;
	line_S_iterator = this->vtzlines->iterator();
	//    .local v3, "line$iterator":Ljava/util/Iterator;
label_cond_f:
label_goto_f:
	if ( !(line_S_iterator->hasNext()) )  
		goto label_cond_77;
	line = line_S_iterator->next();
	line->checkCast("java::lang::String");
	//    .local v2, "line":Ljava/lang/String;
	if ( !(line->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZURL:")))) )  
		goto label_cond_40;
	if ( !(this->tzurl) )  
		goto label_cond_f;
	bw->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("TZURL")));
	bw->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	bw->write(this->tzurl);
	bw->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	goto label_goto_f;
	// 8248    .line 226
label_cond_40:
	if ( !(line->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST-MODIFIED:")))) )  
		goto label_cond_6d;
	if ( !(this->lastmod) )  
		goto label_cond_f;
	bw->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST-MODIFIED")));
	bw->write(std::make_shared<java::lang::String>(std::make_shared<char[]>(":")));
	bw->write(android::icu::util::VTimeZone::getUTCDateTimeString(this->lastmod->getTime()));
	bw->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	goto label_goto_f;
	// 8293    .line 234
label_cond_6d:
	bw->write(line);
	bw->write(std::make_shared<java::lang::String>(std::make_shared<char[]>("\r\n")));
	goto label_goto_f;
	// 8304    .line 238
	// 8305    .end local v2    # "line":Ljava/lang/String;
label_cond_77:
	bw->flush();
	//    .end local v3    # "line$iterator":Ljava/util/Iterator;
label_goto_7a:
	return;
	// 8314    .line 240
label_cond_7b:
	//    .local v1, "customProperties":[Ljava/lang/String;
	if ( !(this->olsonzid) )  
		goto label_cond_b4;
	if ( !(android::icu::util::VTimeZone::ICU_TZVERSION) )  
		goto label_cond_b4;
	customProperties = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x1);
	//    .local v1, "customProperties":[Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	customProperties[0x0] = cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("X-TZINFO:")))->append(this->olsonzid)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[")))->append(android::icu::util::VTimeZone::ICU_TZVERSION)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();
	//    .end local v1    # "customProperties":[Ljava/lang/String;
label_cond_b4:
	this->writeZone(writer, this->tz, 0x0);
	goto label_goto_7a;

}
// .method public write(Ljava/io/Writer;J)V
void android::icu::util::VTimeZone::write(std::shared_ptr<java::io::Writer> writer,long long start)
{
	
	int cVar0;
	auto rules;
	std::shared_ptr<android::icu::util::RuleBasedTimeZone> rbtz;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> cVar1;
	int i;
	std::shared<std::vector<std::vector<java::lang::String>>> customProperties;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "writer"    # Ljava/io/Writer;
	//    .param p2, "start"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 8392        value = {
	// 8393            Ljava/io/IOException;
	// 8394        }
	// 8395    .end annotation
	cVar0 = 0x0;
	rules = this->tz->getTimeZoneRules(start);
	//    .local v3, "rules":[Landroid/icu/util/TimeZoneRule;
	cVar1 = rules[cVar0];
	cVar1->checkCast("android::icu::util::InitialTimeZoneRule");
	rbtz = std::make_shared<android::icu::util::RuleBasedTimeZone>(this->tz->getID(), cVar1);
	//    .local v2, "rbtz":Landroid/icu/util/RuleBasedTimeZone;
	i = 0x1;
	//    .local v1, "i":I
label_goto_17:
	if ( i >= rules->size() )
		goto label_cond_22;
	rbtz->addTransitionRule(rules[i]);
	i = ( i + 0x1);
	goto label_goto_17;
	// 8443    .line 267
label_cond_22:
	//    .local v0, "customProperties":[Ljava/lang/String;
	if ( !(this->olsonzid) )  
		goto label_cond_65;
	if ( !(android::icu::util::VTimeZone::ICU_TZVERSION) )  
		goto label_cond_65;
	customProperties = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x1);
	//    .local v0, "customProperties":[Ljava/lang/String;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	customProperties[cVar0] = cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("X-TZINFO:")))->append(this->olsonzid)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[")))->append(android::icu::util::VTimeZone::ICU_TZVERSION)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/Partial@")))->append(start)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();
	//    .end local v0    # "customProperties":[Ljava/lang/String;
label_cond_65:
	this->writeZone(writer, rbtz, 0x0);
	return;

}
// .method public writeSimple(Ljava/io/Writer;J)V
void android::icu::util::VTimeZone::writeSimple(std::shared_ptr<java::io::Writer> writer,long long time)
{
	
	int cVar0;
	auto rules;
	std::shared_ptr<android::icu::util::RuleBasedTimeZone> rbtz;
	std::shared_ptr<android::icu::util::InitialTimeZoneRule> cVar1;
	int i;
	std::shared<std::vector<std::vector<java::lang::String>>> customProperties;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "writer"    # Ljava/io/Writer;
	//    .param p2, "time"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 8532        value = {
	// 8533            Ljava/io/IOException;
	// 8534        }
	// 8535    .end annotation
	cVar0 = 0x0;
	rules = this->tz->getSimpleTimeZoneRulesNear(time);
	//    .local v3, "rules":[Landroid/icu/util/TimeZoneRule;
	cVar1 = rules[cVar0];
	cVar1->checkCast("android::icu::util::InitialTimeZoneRule");
	rbtz = std::make_shared<android::icu::util::RuleBasedTimeZone>(this->tz->getID(), cVar1);
	//    .local v2, "rbtz":Landroid/icu/util/RuleBasedTimeZone;
	i = 0x1;
	//    .local v1, "i":I
label_goto_17:
	if ( i >= rules->size() )
		goto label_cond_22;
	rbtz->addTransitionRule(rules[i]);
	i = ( i + 0x1);
	goto label_goto_17;
	// 8583    .line 299
label_cond_22:
	//    .local v0, "customProperties":[Ljava/lang/String;
	if ( !(this->olsonzid) )  
		goto label_cond_65;
	if ( !(android::icu::util::VTimeZone::ICU_TZVERSION) )  
		goto label_cond_65;
	customProperties = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x1);
	//    .local v0, "customProperties":[Ljava/lang/String;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	customProperties[cVar0] = cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("X-TZINFO:")))->append(this->olsonzid)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[")))->append(android::icu::util::VTimeZone::ICU_TZVERSION)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/Simple@")))->append(time)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();
	//    .end local v0    # "customProperties":[Ljava/lang/String;
label_cond_65:
	this->writeZone(writer, rbtz, 0x0);
	return;

}


