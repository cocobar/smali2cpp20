// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.DateIntervalFormat_S_BestMatchInfo.h"
#include "android.icu.text.DateIntervalFormat_S_SkeletonAndItsBestMatch.h"
#include "android.icu.text.DateIntervalFormat.h"
#include "android.icu.text.DateIntervalInfo_S_PatternInfo.h"
#include "android.icu.text.DateIntervalInfo.h"
#include "android.icu.text.DateTimePatternGenerator.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.DateInterval.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Collections.h"
#include "java.util.HashMap.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

static android::icu::text::DateIntervalFormat::LOCAL_PATTERN_CACHE = nullptr;
static android::icu::text::DateIntervalFormat::serialVersionUID = 0x1L;
// .method static constructor <clinit>()V
void android::icu::text::DateIntervalFormat::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::SimpleCache> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::SimpleCache>();
	android::icu::text::DateIntervalFormat::LOCAL_PATTERN_CACHE = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::text::DateIntervalFormat::DateIntervalFormat()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	cVar0 = 0x0;
	// 090    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->fSkeleton = cVar0;
	this->fIntervalPatterns = cVar0;
	this->fDatePattern = cVar0;
	this->fTimePattern = cVar0;
	this->fDateTimeFormat = cVar0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/text/DateIntervalInfo;Landroid/icu/text/SimpleDateFormat;)V
android::icu::text::DateIntervalFormat::DateIntervalFormat(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::text::DateIntervalInfo> dtItvInfo,std::shared_ptr<android::icu::text::SimpleDateFormat> simpleDateFormat)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::util::Calendar> cVar1;
	std::shared_ptr<android::icu::util::Calendar> cVar2;
	
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "dtItvInfo"    # Landroid/icu/text/DateIntervalInfo;
	//    .param p3, "simpleDateFormat"    # Landroid/icu/text/SimpleDateFormat;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 117    .end annotation
	cVar0 = 0x0;
	// 123    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->fSkeleton = cVar0;
	this->fIntervalPatterns = cVar0;
	this->fDatePattern = cVar0;
	this->fTimePattern = cVar0;
	this->fDateTimeFormat = cVar0;
	this->fDateFormat = simpleDateFormat;
	dtItvInfo->freeze();
	this->fSkeleton = skeleton;
	this->fInfo = dtItvInfo;
	this->isDateIntervalInfoDefault = 0x0;
	cVar1 = this->fDateFormat->getCalendar()->clone();
	cVar1->checkCast("android::icu::util::Calendar");
	this->fFromCalendar = cVar1;
	cVar2 = this->fDateFormat->getCalendar()->clone();
	cVar2->checkCast("android::icu::util::Calendar");
	this->fToCalendar = cVar2;
	this->initializePattern(cVar0);
	return;

}
// .method private constructor <init>(Ljava/lang/String;Landroid/icu/util/ULocale;Landroid/icu/text/SimpleDateFormat;)V
android::icu::text::DateIntervalFormat::DateIntervalFormat(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::SimpleDateFormat> simpleDateFormat)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::text::DateIntervalInfo> cVar1;
	std::shared_ptr<android::icu::util::Calendar> cVar2;
	std::shared_ptr<android::icu::util::Calendar> cVar3;
	
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .param p3, "simpleDateFormat"    # Landroid/icu/text/SimpleDateFormat;
	cVar0 = 0x0;
	// 204    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->fSkeleton = cVar0;
	this->fIntervalPatterns = cVar0;
	this->fDatePattern = cVar0;
	this->fTimePattern = cVar0;
	this->fDateTimeFormat = cVar0;
	this->fDateFormat = simpleDateFormat;
	this->fSkeleton = skeleton;
	cVar1 = std::make_shared<android::icu::text::DateIntervalInfo>(locale);
	this->fInfo = cVar1->freeze();
	this->isDateIntervalInfoDefault = 0x1;
	cVar2 = this->fDateFormat->getCalendar()->clone();
	cVar2->checkCast("android::icu::util::Calendar");
	this->fFromCalendar = cVar2;
	cVar3 = this->fDateFormat->getCalendar()->clone();
	cVar3->checkCast("android::icu::util::Calendar");
	this->fToCalendar = cVar3;
	this->initializePattern(android::icu::text::DateIntervalFormat::LOCAL_PATTERN_CACHE);
	return;

}
// .method private static adjustFieldWidth(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateIntervalFormat::adjustFieldWidth(std::shared_ptr<java::lang::String> inputSkeleton,std::shared_ptr<java::lang::String> bestMatchSkeleton,std::shared_ptr<java::lang::String> cVar0,int differenceInfo)
{
	
	std::shared<std::vector<int[]>> inputSkeletonFieldWidth;
	std::shared<std::vector<int[]>> bestMatchSkeletonFieldWidth;
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<java::lang::StringBuilder> adjustedPtn;
	int inQuote;
	char prevCh;
	int count;
	int adjustedPtnLength;
	int i;
	int ch;
	int skeletonChar;
	int fieldCount;
	int inputFieldCount;
	int j;
	int prevCh;
	
	//    .param p0, "inputSkeleton"    # Ljava/lang/String;
	//    .param p1, "bestMatchSkeleton"    # Ljava/lang/String;
	//    .param p2, "bestMatchIntervalPattern"    # Ljava/lang/String;
	//    .param p3, "differenceInfo"    # I
	if ( cVar0 )     
		goto label_cond_5;
	return 0x0;
	// 298    .line 1708
label_cond_5:
	inputSkeletonFieldWidth = std::make_shared<std::vector<int[]>>(0x3a);
	//    .local v13, "inputSkeletonFieldWidth":[I
	bestMatchSkeletonFieldWidth = std::make_shared<std::vector<int[]>>(0x3a);
	//    .local v6, "bestMatchSkeletonFieldWidth":[I
	android::icu::text::DateIntervalInfo::parseSkeleton(inputSkeleton, inputSkeletonFieldWidth);
	android::icu::text::DateIntervalInfo::parseSkeleton(bestMatchSkeleton, bestMatchSkeletonFieldWidth);
	if ( differenceInfo != 0x2 )
		goto label_cond_31;
	cVar0 = cVar0->replace(0x76, 0x7a);
label_cond_31:
	adjustedPtn = std::make_shared<java::lang::StringBuilder>(cVar0);
	//    .local v4, "adjustedPtn":Ljava/lang/StringBuilder;
	inQuote = 0x0;
	//    .local v11, "inQuote":Z
	prevCh = 0x0;
	//    .local v15, "prevCh":C
	count = 0x0;
	//    .local v8, "count":I
	0x41;
	//    .local v3, "PATTERN_CHAR_BASE":I
	adjustedPtnLength = adjustedPtn->length();
	//    .local v5, "adjustedPtnLength":I
	i = 0x0;
	//    .end local v11    # "inQuote":Z
	//    .end local v15    # "prevCh":C
	//    .local v10, "i":I
label_goto_42:
	if ( i >= adjustedPtnLength )
		goto label_cond_b9;
	ch = adjustedPtn->charAt(i);
	//    .local v7, "ch":C
	if ( ch == prevCh )
		goto label_cond_70;
	if ( count <= 0 )
		goto label_cond_70;
	skeletonChar = prevCh;
	//    .local v16, "skeletonChar":C
	if ( prevCh != 0x4c )
		goto label_cond_56;
	skeletonChar = 0x4d;
	//    .end local v16    # "skeletonChar":C
label_cond_56:
	fieldCount = bestMatchSkeletonFieldWidth[( skeletonChar + -0x41)];
	//    .local v9, "fieldCount":I
	inputFieldCount = inputSkeletonFieldWidth[( skeletonChar + -0x41)];
	//    .local v12, "inputFieldCount":I
	if ( fieldCount != count )
		goto label_cond_6f;
	if ( inputFieldCount <= fieldCount )
		goto label_cond_6f;
	count = (inputFieldCount - fieldCount);
	j = 0x0;
	//    .local v14, "j":I
label_goto_65:
	if ( j >= count )
		goto label_cond_6d;
	adjustedPtn->insert(i, prevCh);
	j = ( j + 0x1);
	goto label_goto_65;
	// 451    .line 1757
label_cond_6d:
	i = (i +  count);
	adjustedPtnLength = (adjustedPtnLength +  count);
	//    .end local v14    # "j":I
label_cond_6f:
	count = 0x0;
	//    .end local v9    # "fieldCount":I
	//    .end local v12    # "inputFieldCount":I
label_cond_70:
	if ( ch != 0x27 )
		goto label_cond_9a;
	if ( ( i + 0x1) >= adjustedPtn->length() )
		goto label_cond_97;
	if ( adjustedPtn->charAt(( i + 0x1)) != 0x27 )
		goto label_cond_97;
	i = ( i + 0x1);
label_cond_94:
label_goto_94:
	i = ( i + 0x1);
	goto label_goto_42;
	// 512    .line 1768
label_cond_97:
	//    .local v11, "inQuote":Z
	goto label_goto_94;
	// 519    .line 1771
	// 520    .end local v11    # "inQuote":Z
label_cond_9a:
	if ( inQuote )     
		goto label_cond_94;
	if ( ch <  0x61 )
		goto label_cond_ac;
	if ( ch >  0x7a )
		goto label_cond_ac;
label_goto_a8:
	prevCh = ch;
	//    .local v15, "prevCh":C
	count = ( count + 0x1);
	goto label_goto_94;
	// 546    .line 1772
	// 547    .end local v15    # "prevCh":C
label_cond_ac:
	if ( ch <  0x41 )
		goto label_cond_94;
	if ( ch >  0x5a )
		goto label_cond_94;
	goto label_goto_a8;
	// 563    .line 1778
	// 564    .end local v7    # "ch":C
label_cond_b9:
	if ( count <= 0 )
		goto label_cond_dc;
	skeletonChar = prevCh;
	//    .restart local v16    # "skeletonChar":C
	if ( prevCh != 0x4c )
		goto label_cond_c5;
	skeletonChar = 0x4d;
	//    .end local v16    # "skeletonChar":C
label_cond_c5:
	fieldCount = bestMatchSkeletonFieldWidth[( skeletonChar + -0x41)];
	//    .restart local v9    # "fieldCount":I
	inputFieldCount = inputSkeletonFieldWidth[( skeletonChar + -0x41)];
	//    .restart local v12    # "inputFieldCount":I
	if ( fieldCount != count )
		goto label_cond_dc;
	if ( inputFieldCount <= fieldCount )
		goto label_cond_dc;
	count = (inputFieldCount - fieldCount);
	j = 0x0;
	//    .restart local v14    # "j":I
label_goto_d4:
	if ( j >= count )
		goto label_cond_dc;
	adjustedPtn->append(prevCh);
	j = ( j + 0x1);
	goto label_goto_d4;
	// 619    .line 1795
	// 620    .end local v9    # "fieldCount":I
	// 621    .end local v12    # "inputFieldCount":I
	// 622    .end local v14    # "j":I
label_cond_dc:
	return adjustedPtn->toString();

}
// .method private adjustPosition(Ljava/lang/String;Ljava/lang/String;Ljava/text/FieldPosition;Ljava/lang/String;Ljava/text/FieldPosition;Ljava/text/FieldPosition;)V
void android::icu::text::DateIntervalFormat::adjustPosition(std::shared_ptr<java::lang::String> combiningPattern,std::shared_ptr<java::lang::String> pat0,std::shared_ptr<java::text::FieldPosition> pos0,std::shared_ptr<java::lang::String> pat1,std::shared_ptr<java::text::FieldPosition> pos1,std::shared_ptr<java::text::FieldPosition> posResult)
{
	
	int index0;
	int index1;
	
	//    .param p1, "combiningPattern"    # Ljava/lang/String;
	//    .param p2, "pat0"    # Ljava/lang/String;
	//    .param p3, "pos0"    # Ljava/text/FieldPosition;
	//    .param p4, "pat1"    # Ljava/lang/String;
	//    .param p5, "pos1"    # Ljava/text/FieldPosition;
	//    .param p6, "posResult"    # Ljava/text/FieldPosition;
	index0 = combiningPattern->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0}")));
	//    .local v0, "index0":I
	index1 = combiningPattern->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("{1}")));
	//    .local v1, "index1":I
	if ( index0 < 0 ) 
		goto label_cond_12;
	if ( index1 >= 0 )
		goto label_cond_13;
label_cond_12:
	return;
	// 666    .line 799
label_cond_13:
	0x3;
	//    .local v2, "placeholderLen":I
	if ( index0 >= index1 )
		goto label_cond_4b;
	if ( pos0->getEndIndex() <= 0 )
		goto label_cond_2d;
	posResult->setBeginIndex((pos0->getBeginIndex() +  index0));
	posResult->setEndIndex((pos0->getEndIndex() +  index0));
label_cond_2c:
label_goto_2c:
	return;
	// 704    .line 804
label_cond_2d:
	if ( pos1->getEndIndex() <= 0 )
		goto label_cond_2c;
	index1 = (index1 +  ( pat0->length() + -0x3));
	posResult->setBeginIndex((pos1->getBeginIndex() +  index1));
	posResult->setEndIndex((pos1->getEndIndex() +  index1));
	goto label_goto_2c;
	// 741    .line 811
label_cond_4b:
	if ( pos1->getEndIndex() <= 0 )
		goto label_cond_62;
	posResult->setBeginIndex((pos1->getBeginIndex() +  index1));
	posResult->setEndIndex((pos1->getEndIndex() +  index1));
	goto label_goto_2c;
	// 769    .line 814
label_cond_62:
	if ( pos0->getEndIndex() <= 0 )
		goto label_cond_2c;
	index0 = (index0 +  ( pat1->length() + -0x3));
	posResult->setBeginIndex((pos0->getBeginIndex() +  index0));
	posResult->setEndIndex((pos0->getEndIndex() +  index0));
	goto label_goto_2c;

}
// .method private concatSingleDate2TimeInterval(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V
void android::icu::text::DateIntervalFormat::concatSingleDate2TimeInterval(std::shared_ptr<java::lang::String> dtfmt,std::shared_ptr<java::lang::String> datePattern,int field,std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> intervalPatterns)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> timeItvPtnInfo;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar2;
	
	//    .param p1, "dtfmt"    # Ljava/lang/String;
	//    .param p2, "datePattern"    # Ljava/lang/String;
	//    .param p3, "field"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 813        value = {
	// 814            "(",
	// 815            "Ljava/lang/String;",
	// 816            "Ljava/lang/String;",
	// 817            "I",
	// 818            "Ljava/util/Map",
	// 819            "<",
	// 820            "Ljava/lang/String;",
	// 821            "Landroid/icu/text/DateIntervalInfo$PatternInfo;",
	// 822            ">;)V"
	// 823        }
	// 824    .end annotation
	//    .local p4, "intervalPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	cVar0 = 0x2;
	timeItvPtnInfo = intervalPatterns->get(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[field]);
	timeItvPtnInfo->checkCast("android::icu::text::DateIntervalInfo_S_PatternInfo");
	//    .local v2, "timeItvPtnInfo":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	if ( !(timeItvPtnInfo) )  
		goto label_cond_41;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "timeIntervalPattern":Ljava/lang/String;
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(cVar0);
	cVar2[0x0] = cVar1->append(timeItvPtnInfo->getFirstPart())->append(timeItvPtnInfo->getSecondPart())->toString();
	cVar2[0x1] = datePattern;
	//    .local v0, "pattern":Ljava/lang/String;
	intervalPatterns->put(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[field], android::icu::text::DateIntervalInfo::genPatternInfo(android::icu::impl::SimpleFormatterImpl::formatRawPattern(dtfmt, cVar0, cVar0, cVar2), timeItvPtnInfo->firstDateInPtnIsLaterDate()));
	//    .end local v0    # "pattern":Ljava/lang/String;
	//    .end local v1    # "timeIntervalPattern":Ljava/lang/String;
label_cond_41:
	return;

}
// .method private final fallbackFormat(Landroid/icu/util/Calendar;Landroid/icu/util/Calendar;ZLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DateIntervalFormat::fallbackFormat(std::shared_ptr<android::icu::util::Calendar> fromCalendar,std::shared_ptr<android::icu::util::Calendar> toCalendar,bool fromToOnSameDay,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	int formatDatePlusTimeRange;
	std::shared_ptr<java::text::FieldPosition> otherPos;
	std::shared_ptr<java::lang::StringBuffer> earlierDate;
	std::shared_ptr<java::lang::StringBuffer> laterDate;
	std::shared_ptr<java::lang::String> fallbackPattern;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar0;
	std::shared_ptr<java::lang::String> fallbackRange;
	std::shared_ptr<java::lang::StringBuffer> datePortion;
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar1;
	
	//    .param p1, "fromCalendar"    # Landroid/icu/util/Calendar;
	//    .param p2, "toCalendar"    # Landroid/icu/util/Calendar;
	//    .param p3, "fromToOnSameDay"    # Z
	//    .param p4, "appendTo"    # Ljava/lang/StringBuffer;
	//    .param p5, "pos"    # Ljava/text/FieldPosition;
	0x0;
	//    .local v19, "fullPattern":Ljava/lang/String;
	if ( !(fromToOnSameDay) )  
		goto label_cond_e4;
	if ( !(this->fDatePattern) )  
		goto label_cond_e4;
	if ( !(this->fTimePattern) )  
		goto label_cond_e4;
	formatDatePlusTimeRange = 0x1;
	//    .local v18, "formatDatePlusTimeRange":Z
label_goto_12:
	if ( !(formatDatePlusTimeRange) )  
		goto label_cond_27;
	//    .local v19, "fullPattern":Ljava/lang/String;
	this->fDateFormat->applyPattern(this->fTimePattern);
	//    .end local v19    # "fullPattern":Ljava/lang/String;
label_cond_27:
	otherPos = std::make_shared<java::text::FieldPosition>(pos->getField());
	//    .local v8, "otherPos":Ljava/text/FieldPosition;
	var26 = earlierDate(0x40);
	//    .local v17, "earlierDate":Ljava/lang/StringBuffer;
	earlierDate = this->fDateFormat->format(fromCalendar, earlierDate, pos);
	var37 = laterDate(0x40);
	//    .local v20, "laterDate":Ljava/lang/StringBuffer;
	laterDate = this->fDateFormat->format(toCalendar, laterDate, otherPos);
	fallbackPattern = this->fInfo->getFallbackIntervalPattern();
	//    .local v4, "fallbackPattern":Ljava/lang/String;
	this->adjustPosition(fallbackPattern, earlierDate->toString(), pos, laterDate->toString(), otherPos, pos);
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x2);
	cVar0[0x0] = earlierDate;
	cVar0[0x1] = laterDate;
	fallbackRange = android::icu::impl::SimpleFormatterImpl::formatRawPattern(fallbackPattern, 0x2, 0x2, cVar0);
	//    .local v11, "fallbackRange":Ljava/lang/String;
	if ( !(formatDatePlusTimeRange) )  
		goto label_cond_d3;
	this->fDateFormat->applyPattern(this->fDatePattern);
	var72 = datePortion(0x40);
	//    .local v16, "datePortion":Ljava/lang/StringBuffer;
	otherPos->setBeginIndex(0x0);
	otherPos->setEndIndex(0x0);
	datePortion = this->fDateFormat->format(fromCalendar, datePortion, otherPos);
	this->adjustPosition(this->fDateTimeFormat, fallbackRange, pos, datePortion->toString(), otherPos, pos);
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x2);
	cVar1[0x0] = fallbackRange;
	cVar1[0x1] = datePortion;
	//    .end local v16    # "datePortion":Ljava/lang/StringBuffer;
label_cond_d3:
	appendTo->append(fallbackRange);
	if ( !(formatDatePlusTimeRange) )  
		goto label_cond_e3;
	this->fDateFormat->applyPattern(this->fDateFormat->toPattern());
label_cond_e3:
	return appendTo;
	// 1200    .line 845
	// 1201    .end local v4    # "fallbackPattern":Ljava/lang/String;
	// 1202    .end local v8    # "otherPos":Ljava/text/FieldPosition;
	// 1203    .end local v11    # "fallbackRange":Ljava/lang/String;
	// 1204    .end local v17    # "earlierDate":Ljava/lang/StringBuffer;
	// 1205    .end local v18    # "formatDatePlusTimeRange":Z
	// 1206    .end local v20    # "laterDate":Ljava/lang/StringBuffer;
	// 1207    .local v19, "fullPattern":Ljava/lang/String;
label_cond_e4:
	formatDatePlusTimeRange = 0x0;
	//    .restart local v18    # "formatDatePlusTimeRange":Z
	goto label_goto_12;

}
// .method private final fallbackFormat(Landroid/icu/util/Calendar;Landroid/icu/util/Calendar;ZLjava/lang/StringBuffer;Ljava/text/FieldPosition;Ljava/lang/String;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DateIntervalFormat::fallbackFormat(std::shared_ptr<android::icu::util::Calendar> fromCalendar,std::shared_ptr<android::icu::util::Calendar> toCalendar,bool fromToOnSameDay,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::text::FieldPosition> pos,std::shared_ptr<java::lang::String> fullPattern)
{
	
	//    .param p1, "fromCalendar"    # Landroid/icu/util/Calendar;
	//    .param p2, "toCalendar"    # Landroid/icu/util/Calendar;
	//    .param p3, "fromToOnSameDay"    # Z
	//    .param p4, "appendTo"    # Ljava/lang/StringBuffer;
	//    .param p5, "pos"    # Ljava/text/FieldPosition;
	//    .param p6, "fullPattern"    # Ljava/lang/String;
	//    .local v0, "originalPattern":Ljava/lang/String;
	this->fDateFormat->applyPattern(fullPattern);
	this->fallbackFormat(fromCalendar, toCalendar, fromToOnSameDay, appendTo, pos);
	this->fDateFormat->applyPattern(this->fDateFormat->toPattern());
	return appendTo;

}
// .method private static fieldExistsInSkeleton(ILjava/lang/String;)Z
bool android::icu::text::DateIntervalFormat::fieldExistsInSkeleton(int field,std::shared_ptr<java::lang::String> skeleton)
{
	
	bool cVar0;
	
	//    .param p0, "field"    # I
	//    .param p1, "skeleton"    # Ljava/lang/String;
	//    .local v0, "fieldChar":Ljava/lang/String;
	if ( skeleton->indexOf(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[field]) != -0x1 )
		goto label_cond_d;
	cVar0 = 0x0;
label_goto_c:
	return cVar0;
label_cond_d:
	cVar0 = 0x1;
	goto label_goto_c;

}
// .method private genFallbackPattern(ILjava/lang/String;Ljava/util/Map;Landroid/icu/text/DateTimePatternGenerator;)V
void android::icu::text::DateIntervalFormat::genFallbackPattern(int field,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> intervalPatterns,std::shared_ptr<android::icu::text::DateTimePatternGenerator> dtpng)
{
	
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> ptn;
	
	//    .param p1, "field"    # I
	//    .param p2, "skeleton"    # Ljava/lang/String;
	//    .param p4, "dtpng"    # Landroid/icu/text/DateTimePatternGenerator;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1288        value = {
	// 1289            "(I",
	// 1290            "Ljava/lang/String;",
	// 1291            "Ljava/util/Map",
	// 1292            "<",
	// 1293            "Ljava/lang/String;",
	// 1294            "Landroid/icu/text/DateIntervalInfo$PatternInfo;",
	// 1295            ">;",
	// 1296            "Landroid/icu/text/DateTimePatternGenerator;",
	// 1297            ")V"
	// 1298        }
	// 1299    .end annotation
	//    .local p3, "intervalPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	//    .local v0, "pattern":Ljava/lang/String;
	ptn = std::make_shared<android::icu::text::DateIntervalInfo_S_PatternInfo>(0x0, dtpng->getBestPattern(skeleton), this->fInfo->getDefaultOrder());
	//    .local v1, "ptn":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	intervalPatterns->put(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[field], ptn);
	return;

}
// .method private genIntervalPattern(ILjava/lang/String;Ljava/lang/String;ILjava/util/Map;)Landroid/icu/text/DateIntervalFormat$SkeletonAndItsBestMatch;
std::shared_ptr<android::icu::text::DateIntervalFormat_S_SkeletonAndItsBestMatch> android::icu::text::DateIntervalFormat::genIntervalPattern(int field,std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::lang::String> bestSkeleton,int differenceInfo,std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> intervalPatterns)
{
	
	auto pattern;
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> ptnInfo;
	std::shared_ptr<java::lang::Object> pattern;
	std::shared_ptr<java::lang::String> fieldLetter;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::Object> cVar2;
	std::shared_ptr<java::lang::String> tmpRetValue;
	std::shared_ptr<java::lang::String> tmpBestSkeleton;
	int cVar3;
	std::shared_ptr<java::lang::Object> cVar4;
	std::shared_ptr<android::icu::text::DateIntervalFormat_S_SkeletonAndItsBestMatch> retValue;
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> pattern;
	
	//    .param p1, "field"    # I
	//    .param p2, "skeleton"    # Ljava/lang/String;
	//    .param p3, "bestSkeleton"    # Ljava/lang/String;
	//    .param p4, "differenceInfo"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 1344        value = {
	// 1345            "(I",
	// 1346            "Ljava/lang/String;",
	// 1347            "Ljava/lang/String;",
	// 1348            "I",
	// 1349            "Ljava/util/Map",
	// 1350            "<",
	// 1351            "Ljava/lang/String;",
	// 1352            "Landroid/icu/text/DateIntervalInfo$PatternInfo;",
	// 1353            ">;)",
	// 1354            "Landroid/icu/text/DateIntervalFormat$SkeletonAndItsBestMatch;"
	// 1355        }
	// 1356    .end annotation
	//    .local p5, "intervalPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	//    .local v9, "retValue":Landroid/icu/text/DateIntervalFormat$SkeletonAndItsBestMatch;
	pattern = this->fInfo->getIntervalPattern(bestSkeleton, field);
	//    .local v6, "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	if ( pattern )     
		goto label_cond_ef;
	if ( !(android::icu::text::SimpleDateFormat::isFieldUnitIgnored(bestSkeleton, field)) )  
		goto label_cond_34;
	ptnInfo = std::make_shared<android::icu::text::DateIntervalInfo_S_PatternInfo>(this->fDateFormat->toPattern(), 0x0, this->fInfo->getDefaultOrder());
	//    .local v8, "ptnInfo":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	intervalPatterns->put(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[field], ptnInfo);
	return 0x0;
	// 1427    .line 1615
	// 1428    .end local v8    # "ptnInfo":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_cond_34:
	if ( field != 0x9 )
		goto label_cond_51;
	pattern = this->fInfo->getIntervalPattern(bestSkeleton, 0xa);
	if ( !(pattern) )  
		goto label_cond_4f;
	intervalPatterns->put(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[field], pattern);
label_cond_4f:
	return 0x0;
	// 1467    .line 1633
label_cond_51:
	fieldLetter = android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[field];
	//    .local v3, "fieldLetter":Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = cVar1->append(fieldLetter)->append(skeleton)->toString();
	pattern = this->fInfo->getIntervalPattern(cVar0->append(fieldLetter)->append(bestSkeleton)->toString(), field);
	if ( pattern )     
		goto label_cond_ac;
	if ( differenceInfo )     
		goto label_cond_ac;
	tmpRetValue = this->fInfo->getBestSkeleton(cVar2);
	//    .local v11, "tmpRetValue":Landroid/icu/text/DateIntervalFormat$BestMatchInfo;
	tmpBestSkeleton = tmpRetValue->bestMatchSkeleton;
	//    .local v10, "tmpBestSkeleton":Ljava/lang/String;
	cVar3 = tmpRetValue->bestMatchDistanceInfo;
	if ( !(tmpBestSkeleton->length()) )  
		goto label_cond_ac;
	if ( cVar3 == -0x1 )
		goto label_cond_ac;
	pattern = this->fInfo->getIntervalPattern(tmpBestSkeleton, field);
	cVar4 = tmpBestSkeleton;
	//    .end local v10    # "tmpBestSkeleton":Ljava/lang/String;
	//    .end local v11    # "tmpRetValue":Landroid/icu/text/DateIntervalFormat$BestMatchInfo;
label_cond_ac:
	if ( !(pattern) )  
		goto label_cond_ef;
	//    .end local v9    # "retValue":Landroid/icu/text/DateIntervalFormat$SkeletonAndItsBestMatch;
	retValue = std::make_shared<android::icu::text::DateIntervalFormat_S_SkeletonAndItsBestMatch>(cVar2, cVar4);
	//    .local v9, "retValue":Landroid/icu/text/DateIntervalFormat$SkeletonAndItsBestMatch;
	pattern = pattern;
	//    .end local v3    # "fieldLetter":Ljava/lang/String;
	//    .end local v6    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	//    .end local v9    # "retValue":Landroid/icu/text/DateIntervalFormat$SkeletonAndItsBestMatch;
	//    .local v7, "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_goto_b8:
	if ( !(pattern) )  
		goto label_cond_ed;
	if ( !(cVar3) )  
		goto label_cond_eb;
	//    .local v4, "part1":Ljava/lang/String;
	//    .local v5, "part2":Ljava/lang/String;
	pattern = std::make_shared<android::icu::text::DateIntervalInfo_S_PatternInfo>(android::icu::text::DateIntervalFormat::adjustFieldWidth(cVar2, cVar4, pattern->getFirstPart(), cVar3), android::icu::text::DateIntervalFormat::adjustFieldWidth(cVar2, cVar4, pattern->getSecondPart(), cVar3), pattern->firstDateInPtnIsLaterDate());
	//    .end local v4    # "part1":Ljava/lang/String;
	//    .end local v5    # "part2":Ljava/lang/String;
	//    .end local v7    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	//    .restart local v6    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_goto_e1:
	intervalPatterns->put(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[field], pattern);
label_goto_ea:
	return 0x0;
	// 1667    .end local v6    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	// 1668    .restart local v7    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_cond_eb:
	//    .end local v7    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	//    .restart local v6    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	goto label_goto_e1;
	// 1676    .end local v6    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	// 1677    .restart local v7    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_cond_ed:
	pattern;
	//    .end local v7    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	//    .restart local v6    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	goto label_goto_ea;
	// 1685    .local v9, "retValue":Landroid/icu/text/DateIntervalFormat$SkeletonAndItsBestMatch;
label_cond_ef:
	pattern = pattern;
	//    .end local v6    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	//    .restart local v7    # "pattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	goto label_goto_b8;

}
// .method private genSeparateDateTimePtn(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Landroid/icu/text/DateTimePatternGenerator;)Z
bool android::icu::text::DateIntervalFormat::genSeparateDateTimePtn(std::shared_ptr<java::lang::String> dateSkeleton,std::shared_ptr<java::lang::String> timeSkeleton,std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> intervalPatterns,std::shared_ptr<android::icu::text::DateTimePatternGenerator> dtpng)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::String> skeleton;
	std::shared_ptr<java::lang::String> retValue;
	std::shared_ptr<java::lang::String> bestSkeleton;
	int differenceInfo;
	std::shared_ptr<java::lang::String> skeletons;
	
	//    .param p1, "dateSkeleton"    # Ljava/lang/String;
	//    .param p2, "timeSkeleton"    # Ljava/lang/String;
	//    .param p4, "dtpng"    # Landroid/icu/text/DateTimePatternGenerator;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1700        value = {
	// 1701            "(",
	// 1702            "Ljava/lang/String;",
	// 1703            "Ljava/lang/String;",
	// 1704            "Ljava/util/Map",
	// 1705            "<",
	// 1706            "Ljava/lang/String;",
	// 1707            "Landroid/icu/text/DateIntervalInfo$PatternInfo;",
	// 1708            ">;",
	// 1709            "Landroid/icu/text/DateTimePatternGenerator;",
	// 1710            ")Z"
	// 1711        }
	// 1712    .end annotation
	//    .local p3, "intervalPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	cVar0 = 0x1;
	if ( !(timeSkeleton->length()) )  
		goto label_cond_2f;
	skeleton = timeSkeleton;
	//    .local v2, "skeleton":Ljava/lang/String;
label_goto_9:
	retValue = this->fInfo->getBestSkeleton(skeleton);
	//    .local v6, "retValue":Landroid/icu/text/DateIntervalFormat$BestMatchInfo;
	bestSkeleton = retValue->bestMatchSkeleton;
	//    .local v3, "bestSkeleton":Ljava/lang/String;
	differenceInfo = retValue->bestMatchDistanceInfo;
	//    .local v4, "differenceInfo":I
	if ( !(dateSkeleton->length()) )  
		goto label_cond_1f;
	this->fDatePattern = dtpng->getBestPattern(dateSkeleton);
label_cond_1f:
	if ( !(timeSkeleton->length()) )  
		goto label_cond_2b;
	this->fTimePattern = dtpng->getBestPattern(timeSkeleton);
label_cond_2b:
	if ( differenceInfo != -0x1 )
		goto label_cond_31;
	return 0x0;
	// 1786    .line 1512
	// 1787    .end local v2    # "skeleton":Ljava/lang/String;
	// 1788    .end local v3    # "bestSkeleton":Ljava/lang/String;
	// 1789    .end local v4    # "differenceInfo":I
	// 1790    .end local v6    # "retValue":Landroid/icu/text/DateIntervalFormat$BestMatchInfo;
label_cond_2f:
	skeleton = dateSkeleton;
	//    .restart local v2    # "skeleton":Ljava/lang/String;
	goto label_goto_9;
	// 1797    .line 1549
	// 1798    .restart local v3    # "bestSkeleton":Ljava/lang/String;
	// 1799    .restart local v4    # "differenceInfo":I
	// 1800    .restart local v6    # "retValue":Landroid/icu/text/DateIntervalFormat$BestMatchInfo;
label_cond_31:
	if ( timeSkeleton->length() )     
		goto label_cond_51;
	this->genIntervalPattern(0x5, skeleton, bestSkeleton, differenceInfo, intervalPatterns);
	skeletons = this->genIntervalPattern(0x2, skeleton, bestSkeleton, differenceInfo, intervalPatterns);
	//    .local v7, "skeletons":Landroid/icu/text/DateIntervalFormat$SkeletonAndItsBestMatch;
	if ( !(skeletons) )  
		goto label_cond_4a;
label_cond_4a:
	this->genIntervalPattern(cVar0, skeleton, bestSkeleton, differenceInfo, intervalPatterns);
	//    .end local v7    # "skeletons":Landroid/icu/text/DateIntervalFormat$SkeletonAndItsBestMatch;
label_goto_50:
	return cVar0;
	// 1854    .line 1562
label_cond_51:
	this->genIntervalPattern(0xc, skeleton, bestSkeleton, differenceInfo, intervalPatterns);
	this->genIntervalPattern(0xa, skeleton, bestSkeleton, differenceInfo, intervalPatterns);
	this->genIntervalPattern(0x9, skeleton, bestSkeleton, differenceInfo, intervalPatterns);
	goto label_goto_50;

}
// .method private getConcatenationPattern(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateIntervalFormat::getConcatenationPattern(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> concatenationPatternRb;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), locale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v2, "rb":Landroid/icu/impl/ICUResourceBundle;
	//    .local v1, "dtPatternsRb":Landroid/icu/impl/ICUResourceBundle;
	concatenationPatternRb = rb->getWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/gregorian/DateTimePatterns")))->get(0x8);
	concatenationPatternRb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "concatenationPatternRb":Landroid/icu/impl/ICUResourceBundle;
	if ( concatenationPatternRb->getType() )     
		goto label_cond_24;
	return concatenationPatternRb->getString();
	// 1934    .line 1266
label_cond_24:
	return concatenationPatternRb->getString(0x0);

}
// .method private static getDateTimeSkeleton(Ljava/lang/String;Ljava/lang/StringBuilder;Ljava/lang/StringBuilder;Ljava/lang/StringBuilder;Ljava/lang/StringBuilder;)V
void android::icu::text::DateIntervalFormat::getDateTimeSkeleton(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::lang::StringBuilder> dateSkeleton,std::shared_ptr<java::lang::StringBuilder> normalizedDateSkeleton,std::shared_ptr<java::lang::StringBuilder> timeSkeleton,std::shared_ptr<java::lang::StringBuilder> normalizedTimeSkeleton)
{
	
	int ECount;
	int dCount;
	int MCount;
	int yCount;
	int hCount;
	int HCount;
	int mCount;
	int vCount;
	int zCount;
	int i;
	char ch;
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	//    .param p1, "dateSkeleton"    # Ljava/lang/StringBuilder;
	//    .param p2, "normalizedDateSkeleton"    # Ljava/lang/StringBuilder;
	//    .param p3, "timeSkeleton"    # Ljava/lang/StringBuilder;
	//    .param p4, "normalizedTimeSkeleton"    # Ljava/lang/StringBuilder;
	ECount = 0x0;
	//    .local v1, "ECount":I
	dCount = 0x0;
	//    .local v5, "dCount":I
	MCount = 0x0;
	//    .local v3, "MCount":I
	yCount = 0x0;
	//    .local v10, "yCount":I
	hCount = 0x0;
	//    .local v6, "hCount":I
	HCount = 0x0;
	//    .local v2, "HCount":I
	mCount = 0x0;
	//    .local v8, "mCount":I
	vCount = 0x0;
	//    .local v9, "vCount":I
	zCount = 0x0;
	//    .local v11, "zCount":I
	i = 0x0;
	//    .local v7, "i":I
label_goto_a:
	if ( i >= skeleton->length() )
		goto label_cond_72;
	ch = skeleton->charAt(i);
	//    .local v4, "ch":C
	// switch
	{
	auto item = ( ch );
	if (item == 65) goto label_pswitch_67;
	if (item == 66) goto label_pswitch_17;
	if (item == 67) goto label_pswitch_17;
	if (item == 68) goto label_pswitch_32;
	if (item == 69) goto label_pswitch_1a;
	if (item == 70) goto label_pswitch_32;
	if (item == 71) goto label_pswitch_32;
	if (item == 72) goto label_pswitch_47;
	if (item == 73) goto label_pswitch_17;
	if (item == 74) goto label_pswitch_17;
	if (item == 75) goto label_pswitch_67;
	if (item == 76) goto label_pswitch_32;
	if (item == 77) goto label_pswitch_26;
	if (item == 78) goto label_pswitch_17;
	if (item == 79) goto label_pswitch_17;
	if (item == 80) goto label_pswitch_17;
	if (item == 81) goto label_pswitch_32;
	if (item == 82) goto label_pswitch_17;
	if (item == 83) goto label_pswitch_67;
	if (item == 84) goto label_pswitch_17;
	if (item == 85) goto label_pswitch_32;
	if (item == 86) goto label_pswitch_67;
	if (item == 87) goto label_pswitch_32;
	if (item == 88) goto label_pswitch_17;
	if (item == 89) goto label_pswitch_32;
	if (item == 90) goto label_pswitch_67;
	if (item == 91) goto label_pswitch_17;
	if (item == 92) goto label_pswitch_17;
	if (item == 93) goto label_pswitch_17;
	if (item == 94) goto label_pswitch_17;
	if (item == 95) goto label_pswitch_17;
	if (item == 96) goto label_pswitch_17;
	if (item == 97) goto label_pswitch_39;
	if (item == 98) goto label_pswitch_17;
	if (item == 99) goto label_pswitch_32;
	if (item == 100) goto label_pswitch_20;
	if (item == 101) goto label_pswitch_32;
	if (item == 102) goto label_pswitch_17;
	if (item == 103) goto label_pswitch_32;
	if (item == 104) goto label_pswitch_3f;
	if (item == 105) goto label_pswitch_17;
	if (item == 106) goto label_pswitch_67;
	if (item == 107) goto label_pswitch_67;
	if (item == 108) goto label_pswitch_32;
	if (item == 109) goto label_pswitch_4f;
	if (item == 110) goto label_pswitch_17;
	if (item == 111) goto label_pswitch_17;
	if (item == 112) goto label_pswitch_17;
	if (item == 113) goto label_pswitch_32;
	if (item == 114) goto label_pswitch_32;
	if (item == 115) goto label_pswitch_67;
	if (item == 116) goto label_pswitch_17;
	if (item == 117) goto label_pswitch_32;
	if (item == 118) goto label_pswitch_5f;
	if (item == 119) goto label_pswitch_32;
	if (item == 120) goto label_pswitch_17;
	if (item == 121) goto label_pswitch_2c;
	if (item == 122) goto label_pswitch_57;
	}
label_goto_17:
label_pswitch_17:
	i = ( i + 0x1);
	goto label_goto_a;
	// 2015    .line 1356
label_pswitch_1a:
	dateSkeleton->append(ch);
	ECount = ( ECount + 0x1);
	goto label_goto_17;
	// 2025    .line 1360
label_pswitch_20:
	dateSkeleton->append(ch);
	dCount = ( dCount + 0x1);
	goto label_goto_17;
	// 2035    .line 1364
label_pswitch_26:
	dateSkeleton->append(ch);
	MCount = ( MCount + 0x1);
	goto label_goto_17;
	// 2045    .line 1368
label_pswitch_2c:
	dateSkeleton->append(ch);
	yCount = ( yCount + 0x1);
	goto label_goto_17;
	// 2055    .line 1387
label_pswitch_32:
	normalizedDateSkeleton->append(ch);
	dateSkeleton->append(ch);
	goto label_goto_17;
	// 2064    .line 1392
label_pswitch_39:
	timeSkeleton->append(ch);
	goto label_goto_17;
	// 2072    .line 1395
label_pswitch_3f:
	timeSkeleton->append(ch);
	hCount = ( hCount + 0x1);
	goto label_goto_17;
	// 2084    .line 1399
label_pswitch_47:
	timeSkeleton->append(ch);
	HCount = ( HCount + 0x1);
	goto label_goto_17;
	// 2096    .line 1403
label_pswitch_4f:
	timeSkeleton->append(ch);
	mCount = ( mCount + 0x1);
	goto label_goto_17;
	// 2108    .line 1407
label_pswitch_57:
	zCount = ( zCount + 0x1);
	timeSkeleton->append(ch);
	goto label_goto_17;
	// 2119    .line 1411
label_pswitch_5f:
	vCount = ( vCount + 0x1);
	timeSkeleton->append(ch);
	goto label_goto_17;
	// 2130    .line 1422
label_pswitch_67:
	timeSkeleton->append(ch);
	normalizedTimeSkeleton->append(ch);
	goto label_goto_17;
	// 2143    .line 1429
	// 2144    .end local v4    # "ch":C
label_cond_72:
	if ( !(yCount) )  
		goto label_cond_7f;
	i = 0x0;
label_goto_75:
	if ( i >= yCount )
		goto label_cond_7f;
	normalizedDateSkeleton->append(0x79);
	i = ( i + 0x1);
	goto label_goto_75;
	// 2164    .line 1434
label_cond_7f:
	if ( !(MCount) )  
		goto label_cond_89;
	if ( MCount >= 0x3 )
		goto label_cond_bf;
	normalizedDateSkeleton->append(0x4d);
label_cond_89:
	if ( !(ECount) )  
		goto label_cond_93;
	if ( ECount >  0x3 )
		goto label_cond_cd;
	normalizedDateSkeleton->append(0x45);
label_cond_93:
	if ( !(dCount) )  
		goto label_cond_9a;
	normalizedDateSkeleton->append(0x64);
label_cond_9a:
	if ( !(HCount) )  
		goto label_cond_db;
	normalizedTimeSkeleton->append(0x48);
label_cond_a3:
label_goto_a3:
	if ( !(mCount) )  
		goto label_cond_ac;
	normalizedTimeSkeleton->append(0x6d);
label_cond_ac:
	if ( !(zCount) )  
		goto label_cond_b5;
	normalizedTimeSkeleton->append(0x7a);
label_cond_b5:
	if ( !(vCount) )  
		goto label_cond_be;
	normalizedTimeSkeleton->append(0x76);
label_cond_be:
	return;
	// 2250    .line 1438
label_cond_bf:
	i = 0x0;
label_goto_c0:
	if ( i >= MCount )
		goto label_cond_89;
	if ( i >= 0x5 )
		goto label_cond_89;
	normalizedDateSkeleton->append(0x4d);
	i = ( i + 0x1);
	goto label_goto_c0;
	// 2271    .line 1447
label_cond_cd:
	i = 0x0;
label_goto_ce:
	if ( i >= ECount )
		goto label_cond_93;
	if ( i >= 0x5 )
		goto label_cond_93;
	normalizedDateSkeleton->append(0x45);
	i = ( i + 0x1);
	goto label_goto_ce;
	// 2292    .line 1460
label_cond_db:
	if ( !(hCount) )  
		goto label_cond_a3;
	normalizedTimeSkeleton->append(0x68);
	goto label_goto_a3;
	// 2305    .line 1354
	// 2306    nop
	// 2308    :pswitch_data_e6
	// 2309    .packed-switch 0x41
	// 2310        :pswitch_67
	// 2311        :pswitch_17
	// 2312        :pswitch_17
	// 2313        :pswitch_32
	// 2314        :pswitch_1a
	// 2315        :pswitch_32
	// 2316        :pswitch_32
	// 2317        :pswitch_47
	// 2318        :pswitch_17
	// 2319        :pswitch_17
	// 2320        :pswitch_67
	// 2321        :pswitch_32
	// 2322        :pswitch_26
	// 2323        :pswitch_17
	// 2324        :pswitch_17
	// 2325        :pswitch_17
	// 2326        :pswitch_32
	// 2327        :pswitch_17
	// 2328        :pswitch_67
	// 2329        :pswitch_17
	// 2330        :pswitch_32
	// 2331        :pswitch_67
	// 2332        :pswitch_32
	// 2333        :pswitch_17
	// 2334        :pswitch_32
	// 2335        :pswitch_67
	// 2336        :pswitch_17
	// 2337        :pswitch_17
	// 2338        :pswitch_17
	// 2339        :pswitch_17
	// 2340        :pswitch_17
	// 2341        :pswitch_17
	// 2342        :pswitch_39
	// 2343        :pswitch_17
	// 2344        :pswitch_32
	// 2345        :pswitch_20
	// 2346        :pswitch_32
	// 2347        :pswitch_17
	// 2348        :pswitch_32
	// 2349        :pswitch_3f
	// 2350        :pswitch_17
	// 2351        :pswitch_67
	// 2352        :pswitch_67
	// 2353        :pswitch_32
	// 2354        :pswitch_4f
	// 2355        :pswitch_17
	// 2356        :pswitch_17
	// 2357        :pswitch_17
	// 2358        :pswitch_32
	// 2359        :pswitch_32
	// 2360        :pswitch_67
	// 2361        :pswitch_17
	// 2362        :pswitch_32
	// 2363        :pswitch_5f
	// 2364        :pswitch_32
	// 2365        :pswitch_17
	// 2366        :pswitch_2c
	// 2367        :pswitch_57
	// 2368    .end packed-switch

}
// .method public static final getInstance(Ljava/lang/String;)Landroid/icu/text/DateIntervalFormat;
std::shared_ptr<android::icu::text::DateIntervalFormat> android::icu::text::DateIntervalFormat::getInstance(std::shared_ptr<java::lang::String> skeleton)
{
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	return android::icu::text::DateIntervalFormat::getInstance(skeleton, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));

}
// .method public static final getInstance(Ljava/lang/String;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;
std::shared_ptr<android::icu::text::DateIntervalFormat> android::icu::text::DateIntervalFormat::getInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::text::DateIntervalInfo> dtitvinf)
{
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	//    .param p1, "dtitvinf"    # Landroid/icu/text/DateIntervalInfo;
	return android::icu::text::DateIntervalFormat::getInstance(skeleton, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), dtitvinf);

}
// .method public static final getInstance(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/text/DateIntervalFormat;
std::shared_ptr<android::icu::text::DateIntervalFormat> android::icu::text::DateIntervalFormat::getInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::DateIntervalFormat> cVar0;
	std::shared_ptr<android::icu::text::SimpleDateFormat> cVar1;
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .local v0, "generator":Landroid/icu/text/DateTimePatternGenerator;
	cVar1 = std::make_shared<android::icu::text::SimpleDateFormat>(android::icu::text::DateTimePatternGenerator::getInstance(locale)->getBestPattern(skeleton), locale);
	cVar0 = std::make_shared<android::icu::text::DateIntervalFormat>(skeleton, locale, cVar1);
	return cVar0;

}
// .method public static final getInstance(Ljava/lang/String;Landroid/icu/util/ULocale;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;
std::shared_ptr<android::icu::text::DateIntervalFormat> android::icu::text::DateIntervalFormat::getInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::DateIntervalInfo> dtitvinf)
{
	
	std::shared_ptr<android::icu::text::DateIntervalInfo> dtitvinf;
	std::shared_ptr<android::icu::text::DateIntervalFormat> cVar0;
	std::shared_ptr<android::icu::text::SimpleDateFormat> cVar1;
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "dtitvinf"    # Landroid/icu/text/DateIntervalInfo;
	dtitvinf = dtitvinf->clone();
	//    .end local p2    # "dtitvinf":Landroid/icu/text/DateIntervalInfo;
	dtitvinf->checkCast("android::icu::text::DateIntervalInfo");
	//    .restart local p2    # "dtitvinf":Landroid/icu/text/DateIntervalInfo;
	//    .local v0, "generator":Landroid/icu/text/DateTimePatternGenerator;
	cVar1 = std::make_shared<android::icu::text::SimpleDateFormat>(android::icu::text::DateTimePatternGenerator::getInstance(locale)->getBestPattern(skeleton), locale);
	cVar0 = std::make_shared<android::icu::text::DateIntervalFormat>(skeleton, dtitvinf, cVar1);
	return cVar0;

}
// .method public static final getInstance(Ljava/lang/String;Ljava/util/Locale;)Landroid/icu/text/DateIntervalFormat;
std::shared_ptr<android::icu::text::DateIntervalFormat> android::icu::text::DateIntervalFormat::getInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	//    .param p1, "locale"    # Ljava/util/Locale;
	return android::icu::text::DateIntervalFormat::getInstance(skeleton, android::icu::util::ULocale::forLocale(locale));

}
// .method public static final getInstance(Ljava/lang/String;Ljava/util/Locale;Landroid/icu/text/DateIntervalInfo;)Landroid/icu/text/DateIntervalFormat;
std::shared_ptr<android::icu::text::DateIntervalFormat> android::icu::text::DateIntervalFormat::getInstance(std::shared_ptr<java::lang::String> skeleton,std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::DateIntervalInfo> dtitvinf)
{
	
	//    .param p0, "skeleton"    # Ljava/lang/String;
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .param p2, "dtitvinf"    # Landroid/icu/text/DateIntervalInfo;
	return android::icu::text::DateIntervalFormat::getInstance(skeleton, android::icu::util::ULocale::forLocale(locale), dtitvinf);

}
// .method private initializeIntervalPattern(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> android::icu::text::DateIntervalFormat::initializeIntervalPattern(std::shared_ptr<java::lang::String> fullPattern,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator> dtpng;
	std::shared_ptr<java::lang::String> skeleton;
	std::shared_ptr<java::util::HashMap> intervalPatterns;
	std::shared_ptr<java::lang::StringBuilder> date;
	std::shared_ptr<java::lang::StringBuilder> normalizedDate;
	std::shared_ptr<java::lang::StringBuilder> time;
	std::shared_ptr<java::lang::StringBuilder> normalizedTime;
	std::shared_ptr<java::lang::String> dateSkeleton;
	auto timeSkeleton;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> ptn;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::String> datePattern;
	
	//    .param p1, "fullPattern"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2518        value = {
	// 2519            "(",
	// 2520            "Ljava/lang/String;",
	// 2521            "Landroid/icu/util/ULocale;",
	// 2522            ")",
	// 2523            "Ljava/util/Map",
	// 2524            "<",
	// 2525            "Ljava/lang/String;",
	// 2526            "Landroid/icu/text/DateIntervalInfo$PatternInfo;",
	// 2527            ">;"
	// 2528        }
	// 2529    .end annotation
	dtpng = android::icu::text::DateTimePatternGenerator::getInstance(locale);
	//    .local v6, "dtpng":Landroid/icu/text/DateTimePatternGenerator;
	if ( this->fSkeleton )     
		goto label_cond_18;
	this->fSkeleton = dtpng->getSkeleton(fullPattern);
label_cond_18:
	skeleton = this->fSkeleton;
	//    .local v15, "skeleton":Ljava/lang/String;
	intervalPatterns = std::make_shared<java::util::HashMap>();
	//    .local v8, "intervalPatterns":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	date = std::make_shared<java::lang::StringBuilder>(skeleton->length());
	//    .local v3, "date":Ljava/lang/StringBuilder;
	normalizedDate = std::make_shared<java::lang::StringBuilder>(skeleton->length());
	//    .local v9, "normalizedDate":Ljava/lang/StringBuilder;
	var29 = time(skeleton->length());
	//    .local v16, "time":Ljava/lang/StringBuilder;
	normalizedTime = std::make_shared<java::lang::StringBuilder>(skeleton->length());
	//    .local v11, "normalizedTime":Ljava/lang/StringBuilder;
	android::icu::text::DateIntervalFormat::getDateTimeSkeleton(skeleton, date, normalizedDate, time, normalizedTime);
	dateSkeleton = date->toString();
	//    .local v5, "dateSkeleton":Ljava/lang/String;
	timeSkeleton = time->toString();
	//    .local v17, "timeSkeleton":Ljava/lang/String;
	//    .local v10, "normalizedDateSkeleton":Ljava/lang/String;
	//    .local v12, "normalizedTimeSkeleton":Ljava/lang/String;
	if ( !(time->length()) )  
		goto label_cond_7e;
	if ( !(date->length()) )  
		goto label_cond_7e;
	this->fDateTimeFormat = this->getConcatenationPattern(locale);
label_cond_7e:
	//    .local v7, "found":Z
	if ( this->genSeparateDateTimePtn(normalizedDate->toString(), normalizedTime->toString(), intervalPatterns, dtpng) )     
		goto label_cond_e7;
	if ( !(time->length()) )  
		goto label_cond_e6;
	if ( date->length() )     
		goto label_cond_e6;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v13, "pattern":Ljava/lang/String;
	ptn = std::make_shared<android::icu::text::DateIntervalInfo_S_PatternInfo>(0x0, dtpng->getBestPattern(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("yMd")))->append(timeSkeleton)->toString()), this->fInfo->getDefaultOrder());
	//    .local v14, "ptn":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	intervalPatterns->put(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0x5], ptn);
	intervalPatterns->put(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0x2], ptn);
	intervalPatterns->put(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0x1], ptn);
	//    .end local v13    # "pattern":Ljava/lang/String;
	//    .end local v14    # "ptn":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_cond_e6:
	return intervalPatterns;
	// 2806    .line 1178
label_cond_e7:
	if ( time->length() )     
		goto label_cond_ee;
label_goto_ed:
	return intervalPatterns;
	// 2818    .line 1180
label_cond_ee:
	if ( date->length() )     
		goto label_cond_149;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .restart local v13    # "pattern":Ljava/lang/String;
	ptn = std::make_shared<android::icu::text::DateIntervalInfo_S_PatternInfo>(0x0, dtpng->getBestPattern(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("yMd")))->append(timeSkeleton)->toString()), this->fInfo->getDefaultOrder());
	//    .restart local v14    # "ptn":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	intervalPatterns->put(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0x5], ptn);
	intervalPatterns->put(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0x2], ptn);
	intervalPatterns->put(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0x1], ptn);
	goto label_goto_ed;
	// 2922    .line 1219
	// 2923    .end local v13    # "pattern":Ljava/lang/String;
	// 2924    .end local v14    # "ptn":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_cond_149:
	if ( android::icu::text::DateIntervalFormat::fieldExistsInSkeleton(0x5, dateSkeleton) )     
		goto label_cond_175;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	skeleton = cVar2->append(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0x5])->append(skeleton)->toString();
	this->genFallbackPattern(0x5, skeleton, intervalPatterns, dtpng);
label_cond_175:
	if ( android::icu::text::DateIntervalFormat::fieldExistsInSkeleton(0x2, dateSkeleton) )     
		goto label_cond_1a1;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	skeleton = cVar3->append(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0x2])->append(skeleton)->toString();
	this->genFallbackPattern(0x2, skeleton, intervalPatterns, dtpng);
label_cond_1a1:
	if ( android::icu::text::DateIntervalFormat::fieldExistsInSkeleton(0x1, dateSkeleton) )     
		goto label_cond_1cd;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	this->genFallbackPattern(0x1, cVar4->append(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[0x1])->append(skeleton)->toString(), intervalPatterns, dtpng);
label_cond_1cd:
	if ( this->fDateTimeFormat )     
		goto label_cond_1de;
	this->fDateTimeFormat = std::make_shared<java::lang::String>(std::make_shared<char[]>("{1} {0}"));
label_cond_1de:
	datePattern = dtpng->getBestPattern(dateSkeleton);
	//    .local v4, "datePattern":Ljava/lang/String;
	this->concatSingleDate2TimeInterval(this->fDateTimeFormat, datePattern, 0x9, intervalPatterns);
	this->concatSingleDate2TimeInterval(this->fDateTimeFormat, datePattern, 0xa, intervalPatterns);
	this->concatSingleDate2TimeInterval(this->fDateTimeFormat, datePattern, 0xc, intervalPatterns);
	goto label_goto_ed;

}
// .method private initializePattern(Landroid/icu/impl/ICUCache;)V
void android::icu::text::DateIntervalFormat::initializePattern(std::shared_ptr<android::icu::impl::ICUCache<java::lang::String,java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>>> cache)
{
	
	std::shared_ptr<java::lang::String> fullPattern;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<java::util::Map> patterns;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<java::lang::Object> patterns;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3151        value = {
	// 3152            "(",
	// 3153            "Landroid/icu/impl/ICUCache",
	// 3154            "<",
	// 3155            "Ljava/lang/String;",
	// 3156            "Ljava/util/Map",
	// 3157            "<",
	// 3158            "Ljava/lang/String;",
	// 3159            "Landroid/icu/text/DateIntervalInfo$PatternInfo;",
	// 3160            ">;>;)V"
	// 3161        }
	// 3162    .end annotation
	//    .local p1, "cache":Landroid/icu/impl/ICUCache;, "Landroid/icu/impl/ICUCache<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;>;"
	fullPattern = this->fDateFormat->toPattern();
	//    .local v0, "fullPattern":Ljava/lang/String;
	locale = this->fDateFormat->getLocale();
	//    .local v3, "locale":Landroid/icu/util/ULocale;
	0x0;
	//    .local v2, "key":Ljava/lang/String;
	patterns = 0x0;
	//    .local v4, "patterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	if ( !(cache) )  
		goto label_cond_43;
	if ( !(this->fSkeleton) )  
		goto label_cond_55;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	key = cVar0->append(locale->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("+")))->append(fullPattern)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("+")))->append(this->fSkeleton)->toString();
	//    .local v2, "key":Ljava/lang/String;
label_goto_3d:
	patterns = cache->get(key);
	//    .end local v4    # "patterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	patterns->checkCast("java::util::Map");
	//    .end local v2    # "key":Ljava/lang/String;
label_cond_43:
	if ( patterns )     
		goto label_cond_52;
	//    .local v1, "intervalPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	patterns = java::util::Collections::unmodifiableMap(this->initializeIntervalPattern(fullPattern, locale));
	//    .local v4, "patterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	if ( !(cache) )  
		goto label_cond_52;
	cache->put(key, patterns);
	//    .end local v1    # "intervalPatterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
	//    .end local v4    # "patterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
label_cond_52:
	this->fIntervalPatterns = patterns;
	return;
	// 3279    .line 1035
	// 3280    .local v2, "key":Ljava/lang/String;
	// 3281    .local v4, "patterns":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/text/DateIntervalInfo$PatternInfo;>;"
label_cond_55:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "key":Ljava/lang/String;
	goto label_goto_3d;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::DateIntervalFormat::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	std::shared_ptr<android::icu::impl::ICUCache> cVar0;
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3317        value = {
	// 3318            Ljava/io/IOException;,
	// 3319            Ljava/lang/ClassNotFoundException;
	// 3320        }
	// 3321    .end annotation
	stream->defaultReadObject();
	if ( !(this->isDateIntervalInfoDefault) )  
		goto label_cond_d;
	cVar0 = android::icu::text::DateIntervalFormat::LOCAL_PATTERN_CACHE;
label_goto_9:
	this->initializePattern(cVar0);
	return;
	// 3340    .line 1852
label_cond_d:
	cVar0 = 0x0;
	goto label_goto_9;

}
// .method public declared-synchronized clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DateIntervalFormat::clone()
{
	
	std::shared_ptr<android::icu::text::DateIntervalFormat> other;
	std::shared_ptr<android::icu::text::SimpleDateFormat> cVar0;
	std::shared_ptr<android::icu::text::DateIntervalInfo> cVar1;
	std::shared_ptr<android::icu::util::Calendar> cVar2;
	std::shared_ptr<android::icu::util::Calendar> cVar3;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	other = this->clone();
	other->checkCast("android::icu::text::DateIntervalFormat");
	//    .local v0, "other":Landroid/icu/text/DateIntervalFormat;
	cVar0 = this->fDateFormat->clone();
	cVar0->checkCast("android::icu::text::SimpleDateFormat");
	other->fDateFormat = cVar0;
	cVar1 = this->fInfo->clone();
	cVar1->checkCast("android::icu::text::DateIntervalInfo");
	other->fInfo = cVar1;
	cVar2 = this->fFromCalendar->clone();
	cVar2->checkCast("android::icu::util::Calendar");
	other->fFromCalendar = cVar2;
	cVar3 = this->fToCalendar->clone();
	cVar3->checkCast("android::icu::util::Calendar");
	other->fToCalendar = cVar3;
	other->fDatePattern = this->fDatePattern;
	other->fTimePattern = this->fTimePattern;
	other->fDateTimeFormat = this->fDateTimeFormat;
	//label_try_end_3b:
	}
	catch (...){
		goto label_catchall_3d;
	}
	//    .catchall {:try_start_1 .. :try_end_3b} :catchall_3d
	this->monitor_exit();
	return other;
	// 3430    .end local v0    # "other":Landroid/icu/text/DateIntervalFormat;
label_catchall_3d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public final declared-synchronized format(Landroid/icu/util/Calendar;Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DateIntervalFormat::format(std::shared_ptr<android::icu::util::Calendar> fromCalendar,std::shared_ptr<android::icu::util::Calendar> toCalendar,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int field;
	bool fromToOnSameDay;
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> intervalPattern;
	std::shared_ptr<java::text::FieldPosition> otherPos;
	
	//    .param p1, "fromCalendar"    # Landroid/icu/util/Calendar;
	//    .param p2, "toCalendar"    # Landroid/icu/util/Calendar;
	//    .param p3, "appendTo"    # Ljava/lang/StringBuffer;
	//    .param p4, "pos"    # Ljava/text/FieldPosition;
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( fromCalendar->isEquivalentTo(toCalendar) )     
		goto label_cond_13;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("can not format on two different calendars")));
	// throw
	throw cVar0;
	// 3465    :try_end_10
	// 3466    .catchall {:try_start_1 .. :try_end_10} :catchall_10
label_catchall_10:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 3475    .line 706
label_cond_13:
	field = -0x1;
	//    .local v10, "field":I
	try {
	//label_try_start_15:
	if ( fromCalendar->get(0x0) == toCalendar->get(0x0) )
		goto label_cond_58;
	field = 0x0;
label_goto_25:
	if ( field == 0x9 )
		goto label_cond_2d;
	if ( field != 0xa )
		goto label_cond_f5;
label_cond_2d:
	fromToOnSameDay = 0x1;
	//    .local v6, "fromToOnSameDay":Z
label_goto_2e:
	intervalPattern = this->fIntervalPatterns->get(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[field]);
	intervalPattern->checkCast("android::icu::text::DateIntervalInfo_S_PatternInfo");
	//    .local v12, "intervalPattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	if ( intervalPattern )     
		goto label_cond_110;
	if ( !(this->fDateFormat->isFieldUnitIgnored(field)) )  
		goto label_cond_100;
	//label_try_end_55:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_15 .. :try_end_55} :catchall_10
	this->monitor_exit();
	return this->fDateFormat->format(fromCalendar, appendTo, pos);
	// 3571    .line 710
	// 3572    .end local v6    # "fromToOnSameDay":Z
	// 3573    .end local v12    # "intervalPattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_cond_58:
	try {
	//label_try_start_59:
	if ( fromCalendar->get(0x1) == toCalendar->get(0x1) )
		goto label_cond_6a;
	field = 0x1;
	goto label_goto_25;
	// 3601    .line 713
label_cond_6a:
	if ( fromCalendar->get(0x2) == toCalendar->get(0x2) )
		goto label_cond_7c;
	field = 0x2;
	goto label_goto_25;
	// 3628    .line 716
label_cond_7c:
	if ( fromCalendar->get(0x5) == toCalendar->get(0x5) )
		goto label_cond_8e;
	field = 0x5;
	goto label_goto_25;
	// 3655    .line 719
label_cond_8e:
	if ( fromCalendar->get(0x9) == toCalendar->get(0x9) )
		goto label_cond_a3;
	field = 0x9;
	goto label_goto_25;
	// 3682    .line 722
label_cond_a3:
	if ( fromCalendar->get(0xa) == toCalendar->get(0xa) )
		goto label_cond_b9;
	field = 0xa;
	goto label_goto_25;
	// 3709    .line 725
label_cond_b9:
	if ( fromCalendar->get(0xc) == toCalendar->get(0xc) )
		goto label_cond_cf;
	field = 0xc;
	goto label_goto_25;
	// 3736    .line 728
label_cond_cf:
	if ( fromCalendar->get(0xd) == toCalendar->get(0xd) )
		goto label_cond_e5;
	field = 0xd;
	goto label_goto_25;
	// 3763    .line 735
label_cond_e5:
	//label_try_end_f2:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_59 .. :try_end_f2} :catchall_10
	this->monitor_exit();
	return this->fDateFormat->format(fromCalendar, appendTo, pos);
	// 3785    .line 737
label_cond_f5:
	if ( field == 0xc )
		goto label_cond_2d;
	if ( field == 0xd )
		goto label_cond_2d;
	0x0;
	//    .restart local v6    # "fromToOnSameDay":Z
	goto label_goto_2e;
	// 3800    .restart local v12    # "intervalPattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_cond_100:
	try {
	//label_try_start_10a:
	//label_try_end_10d:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_10a .. :try_end_10d} :catchall_10
	this->monitor_exit();
	return this->fallbackFormat(fromCalendar, toCalendar, fromToOnSameDay, appendTo, pos);
	// 3824    .line 758
label_cond_110:
	try {
	//label_try_start_110:
	if ( intervalPattern->getFirstPart() )     
		goto label_cond_12a;
	//label_try_end_127:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_110 .. :try_end_127} :catchall_10
	this->monitor_exit();
	return this->fallbackFormat(fromCalendar, toCalendar, fromToOnSameDay, appendTo, pos, intervalPattern->getSecondPart());
	// 3859    .line 765
label_cond_12a:
	try {
	//label_try_start_12a:
	if ( !(intervalPattern->firstDateInPtnIsLaterDate()) )  
		goto label_cond_19c;
	//    .local v11, "firstCal":Landroid/icu/util/Calendar;
	//    .local v15, "secondCal":Landroid/icu/util/Calendar;
label_goto_134:
	//    .local v13, "originalPattern":Ljava/lang/String;
	this->fDateFormat->applyPattern(intervalPattern->getFirstPart());
	this->fDateFormat->format(firstCal, appendTo, pos);
	if ( !(intervalPattern->getSecondPart()) )  
		goto label_cond_193;
	this->fDateFormat->applyPattern(intervalPattern->getSecondPart());
	otherPos = std::make_shared<java::text::FieldPosition>(pos->getField());
	//    .local v14, "otherPos":Ljava/text/FieldPosition;
	this->fDateFormat->format(fromCalendar, appendTo, otherPos);
	if ( pos->getEndIndex() )     
		goto label_cond_193;
	if ( otherPos->getEndIndex() <= 0 )
		goto label_cond_193;
	pos->setBeginIndex(otherPos->getBeginIndex());
	pos->setEndIndex(otherPos->getEndIndex());
	//    .end local v14    # "otherPos":Ljava/text/FieldPosition;
label_cond_193:
	this->fDateFormat->applyPattern(this->fDateFormat->toPattern());
	//label_try_end_19a:
	}
	catch (...){
		goto label_catchall_10;
	}
	//    .catchall {:try_start_12a .. :try_end_19a} :catchall_10
	this->monitor_exit();
	return appendTo;
	// 3993    .line 769
	// 3994    .end local v11    # "firstCal":Landroid/icu/util/Calendar;
	// 3995    .end local v13    # "originalPattern":Ljava/lang/String;
	// 3996    .end local v15    # "secondCal":Landroid/icu/util/Calendar;
label_cond_19c:
	//    .restart local v11    # "firstCal":Landroid/icu/util/Calendar;
	toCalendar;
	//    .restart local v15    # "secondCal":Landroid/icu/util/Calendar;
	goto label_goto_134;

}
// .method public final declared-synchronized format(Landroid/icu/util/DateInterval;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DateIntervalFormat::format(std::shared_ptr<android::icu::util::DateInterval> dtInterval,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition)
{
	
	//    .param p1, "dtInterval"    # Landroid/icu/util/DateInterval;
	//    .param p2, "appendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->fFromCalendar->setTimeInMillis(dtInterval->getFromDate());
	this->fToCalendar->setTimeInMillis(dtInterval->getToDate());
	//label_try_end_1a:
	}
	catch (...){
		goto label_catchall_1d;
	}
	//    .catchall {:try_start_1 .. :try_end_1a} :catchall_1d
	this->monitor_exit();
	return this->format(this->fFromCalendar, this->fToCalendar, appendTo, fieldPosition);
label_catchall_1d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public final format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::DateIntervalFormat::format(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::StringBuffer> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "appendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	if ( !(obj->instanceOf("android::icu::util::DateInterval")) )  
		goto label_cond_b;
	obj->checkCast("android::icu::util::DateInterval");
	//    .end local p1    # "obj":Ljava/lang/Object;
	return this->format(obj, appendTo, fieldPosition);
	// 4081    .line 610
	// 4082    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_b:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cannot format given Object (")))->append(obj->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(") as a DateInterval")))->toString());
	// throw
	throw cVar0;

}
// .method public declared-synchronized getDateFormat()Landroid/icu/text/DateFormat;
std::shared_ptr<android::icu::text::DateFormat> android::icu::text::DateIntervalFormat::getDateFormat()
{
	
	std::shared_ptr<android::icu::text::DateFormat> cVar0;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	cVar0 = this->fDateFormat->clone();
	cVar0->checkCast("android::icu::text::DateFormat");
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_1 .. :try_end_9} :catchall_b
	this->monitor_exit();
	return cVar0;
label_catchall_b:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public getDateIntervalInfo()Landroid/icu/text/DateIntervalInfo;
std::shared_ptr<android::icu::text::DateIntervalInfo> android::icu::text::DateIntervalFormat::getDateIntervalInfo()
{
	
	std::shared_ptr<android::icu::text::DateIntervalInfo> cVar0;
	
	cVar0 = this->fInfo->clone();
	cVar0->checkCast("android::icu::text::DateIntervalInfo");
	return cVar0;

}
// .method public getPatterns(Landroid/icu/util/Calendar;Landroid/icu/util/Calendar;Landroid/icu/util/Output;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DateIntervalFormat::getPatterns(std::shared_ptr<android::icu::util::Calendar> fromCalendar,std::shared_ptr<android::icu::util::Calendar> toCalendar,std::shared_ptr<android::icu::util::Output<java::lang::String>> part2)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::DateIntervalInfo_S_PatternInfo> intervalPattern;
	
	//    .param p1, "fromCalendar"    # Landroid/icu/util/Calendar;
	//    .param p2, "toCalendar"    # Landroid/icu/util/Calendar;
	//    .annotation system Ldalvik/annotation/Signature;
	// 4174        value = {
	// 4175            "(",
	// 4176            "Landroid/icu/util/Calendar;",
	// 4177            "Landroid/icu/util/Calendar;",
	// 4178            "Landroid/icu/util/Output",
	// 4179            "<",
	// 4180            "Ljava/lang/String;",
	// 4181            ">;)",
	// 4182            "Ljava/lang/String;"
	// 4183        }
	// 4184    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4187    .end annotation
	//    .local p3, "part2":Landroid/icu/util/Output;, "Landroid/icu/util/Output<Ljava/lang/String;>;"
	cVar0 = 0x9;
	cVar1 = 0x5;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	if ( fromCalendar->get(cVar4) == toCalendar->get(cVar4) )
		goto label_cond_28;
	//    .local v0, "field":I
label_goto_11:
	intervalPattern = this->fIntervalPatterns->get(android::icu::text::DateIntervalInfo::CALENDAR_FIELD_TO_PATTERN_LETTER[field]);
	intervalPattern->checkCast("android::icu::text::DateIntervalInfo_S_PatternInfo");
	//    .local v1, "intervalPattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
	part2->value = intervalPattern->getSecondPart();
	return intervalPattern->getFirstPart();
	// 4247    .line 649
	// 4248    .end local v0    # "field":I
	// 4249    .end local v1    # "intervalPattern":Landroid/icu/text/DateIntervalInfo$PatternInfo;
label_cond_28:
	if ( fromCalendar->get(cVar3) == toCalendar->get(cVar3) )
		goto label_cond_34;
	//    .restart local v0    # "field":I
	goto label_goto_11;
	// 4269    .line 652
	// 4270    .end local v0    # "field":I
label_cond_34:
	if ( fromCalendar->get(cVar2) == toCalendar->get(cVar2) )
		goto label_cond_40;
	//    .restart local v0    # "field":I
	goto label_goto_11;
	// 4290    .line 655
	// 4291    .end local v0    # "field":I
label_cond_40:
	if ( fromCalendar->get(cVar1) == toCalendar->get(cVar1) )
		goto label_cond_4c;
	//    .restart local v0    # "field":I
	goto label_goto_11;
	// 4311    .line 658
	// 4312    .end local v0    # "field":I
label_cond_4c:
	if ( fromCalendar->get(cVar0) == toCalendar->get(cVar0) )
		goto label_cond_59;
	//    .restart local v0    # "field":I
	goto label_goto_11;
	// 4332    .line 661
	// 4333    .end local v0    # "field":I
label_cond_59:
	if ( fromCalendar->get(0xa) == toCalendar->get(0xa) )
		goto label_cond_6a;
	//    .restart local v0    # "field":I
	goto label_goto_11;
	// 4357    .line 664
	// 4358    .end local v0    # "field":I
label_cond_6a:
	if ( fromCalendar->get(0xc) == toCalendar->get(0xc) )
		goto label_cond_7b;
	//    .restart local v0    # "field":I
	goto label_goto_11;
	// 4382    .line 667
	// 4383    .end local v0    # "field":I
label_cond_7b:
	if ( fromCalendar->get(0xd) == toCalendar->get(0xd) )
		goto label_cond_8c;
	//    .restart local v0    # "field":I
	goto label_goto_11;
	// 4407    .line 671
	// 4408    .end local v0    # "field":I
label_cond_8c:
	return 0x0;

}
// .method public getRawPatterns()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::DateIntervalInfo_S_PatternInfo>> android::icu::text::DateIntervalFormat::getRawPatterns()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4418        value = {
	// 4419            "()",
	// 4420            "Ljava/util/Map",
	// 4421            "<",
	// 4422            "Ljava/lang/String;",
	// 4423            "Landroid/icu/text/DateIntervalInfo$PatternInfo;",
	// 4424            ">;"
	// 4425        }
	// 4426    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4429    .end annotation
	return this->fIntervalPatterns;

}
// .method public getTimeZone()Landroid/icu/util/TimeZone;
std::shared_ptr<android::icu::util::TimeZone> android::icu::text::DateIntervalFormat::getTimeZone()
{
	
	std::shared_ptr<android::icu::util::TimeZone> cVar0;
	
	if ( !(this->fDateFormat) )  
		goto label_cond_11;
	cVar0 = this->fDateFormat->getTimeZone()->clone();
	cVar0->checkCast("android::icu::util::TimeZone");
	return cVar0;
	// 4462    .line 983
label_cond_11:
	return android::icu::util::TimeZone::getDefault({const[class].FS-Param});

}
// .method public parseObject(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DateIntervalFormat::parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> parse_pos)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "parse_pos"    # Ljava/text/ParsePosition;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4476    .end annotation
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("parsing is not supported")));
	// throw
	throw cVar0;

}
// .method public setDateIntervalInfo(Landroid/icu/text/DateIntervalInfo;)V
void android::icu::text::DateIntervalFormat::setDateIntervalInfo(std::shared_ptr<android::icu::text::DateIntervalInfo> newItvPattern)
{
	
	std::shared_ptr<android::icu::text::DateIntervalInfo> cVar0;
	
	//    .param p1, "newItvPattern"    # Landroid/icu/text/DateIntervalInfo;
	cVar0 = newItvPattern->clone();
	cVar0->checkCast("android::icu::text::DateIntervalInfo");
	this->fInfo = cVar0;
	this->isDateIntervalInfoDefault = 0x0;
	this->fInfo->freeze();
	if ( !(this->fDateFormat) )  
		goto label_cond_18;
	this->initializePattern(0x0);
label_cond_18:
	return;

}
// .method public setTimeZone(Landroid/icu/util/TimeZone;)V
void android::icu::text::DateIntervalFormat::setTimeZone(std::shared_ptr<android::icu::util::TimeZone> zone)
{
	
	std::shared_ptr<android::icu::util::TimeZone> zoneToSet;
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	zoneToSet = zone->clone();
	zoneToSet->checkCast("android::icu::util::TimeZone");
	//    .local v0, "zoneToSet":Landroid/icu/util/TimeZone;
	if ( !(this->fDateFormat) )  
		goto label_cond_f;
	this->fDateFormat->setTimeZone(zoneToSet);
label_cond_f:
	if ( !(this->fFromCalendar) )  
		goto label_cond_18;
	this->fFromCalendar->setTimeZone(zoneToSet);
label_cond_18:
	if ( !(this->fToCalendar) )  
		goto label_cond_21;
	this->fToCalendar->setTimeZone(zoneToSet);
label_cond_21:
	return;

}


