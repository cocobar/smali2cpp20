// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\RelativeDateFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.RelativeDateFormat_S_RelDateFmtDataSink.h"
#include "android.icu.impl.RelativeDateFormat_S_URelativeString.h"
#include "android.icu.impl.RelativeDateFormat.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.MessageFormat.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.ArrayList.h"
#include "java.util.Date.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::RelativeDateFormat::serialVersionUID = 0xfb59e5457c57c3bL;
// .method static synthetic -get0(Landroid/icu/impl/RelativeDateFormat;)Ljava/util/List;
std::shared_ptr<java::util::List> android::icu::impl::RelativeDateFormat::_get0(std::shared_ptr<android::icu::impl::RelativeDateFormat> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/RelativeDateFormat;
	return _this->fDates;

}
// .method static synthetic -wrap0(Landroid/icu/impl/RelativeDateFormat;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::RelativeDateFormat::_wrap0(std::shared_ptr<android::icu::impl::RelativeDateFormat> _this,int day)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/RelativeDateFormat;
	//    .param p1, "day"    # I
	return _this->getStringForDay(day);

}
// .method public constructor <init>(IILandroid/icu/util/ULocale;Landroid/icu/util/Calendar;)V
android::icu::impl::RelativeDateFormat::RelativeDateFormat(int timeStyle,int dateStyle,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::Calendar> cal)
{
	
	int cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::SimpleDateFormat> cVar2;
	std::shared_ptr<android::icu::text::SimpleDateFormat> df;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	
	//    .param p1, "timeStyle"    # I
	//    .param p2, "dateStyle"    # I
	//    .param p3, "locale"    # Landroid/icu/util/ULocale;
	//    .param p4, "cal"    # Landroid/icu/util/Calendar;
	cVar0 = -0x1;
	cVar1 = 0x0;
	cVar2 = 0x0;
	// 099    invoke-direct {p0}, Landroid/icu/text/DateFormat;-><init>()V
	this->fDateTimeFormat = cVar2;
	this->fDatePattern = cVar2;
	this->fTimePattern = cVar2;
	this->fDates = cVar2;
	this->combinedFormatHasDateAtStart = cVar1;
	this->capitalizationInfoIsSet = cVar1;
	this->capitalizationOfRelativeUnitsForListOrMenu = cVar1;
	this->capitalizationOfRelativeUnitsForStandAlone = cVar1;
	this->capitalizationBrkIter = cVar2;
	this->calendar = cal;
	this->fLocale = locale;
	this->fTimeStyle = timeStyle;
	this->fDateStyle = dateStyle;
	if ( this->fDateStyle == cVar0 )
		goto label_cond_6d;
	//    .local v1, "newStyle":I
	df = android::icu::text::DateFormat::getDateInstance(( this->fDateStyle & -0x81), locale);
	//    .local v0, "df":Landroid/icu/text/DateFormat;
	if ( !(df->instanceOf("android::icu::text::SimpleDateFormat")) )  
		goto label_cond_64;
	df->checkCast("android::icu::text::SimpleDateFormat");
	//    .end local v0    # "df":Landroid/icu/text/DateFormat;
	this->fDateTimeFormat = df;
	this->fDatePattern = this->fDateTimeFormat->toPattern();
	if ( this->fTimeStyle == cVar0 )
		goto label_cond_54;
	df = android::icu::text::DateFormat::getTimeInstance(( this->fTimeStyle & -0x81), locale);
	//    .restart local v0    # "df":Landroid/icu/text/DateFormat;
	if ( !(df->instanceOf("android::icu::text::SimpleDateFormat")) )  
		goto label_cond_54;
	df->checkCast("android::icu::text::SimpleDateFormat");
	//    .end local v0    # "df":Landroid/icu/text/DateFormat;
	this->fTimePattern = df->toPattern();
label_cond_54:
label_goto_54:
	this->initializeCalendar(cVar2, this->fLocale);
	this->loadDates();
	this->initializeCombinedFormat(this->calendar, this->fLocale);
	return;
	// 228    .line 74
	// 229    .restart local v0    # "df":Landroid/icu/text/DateFormat;
label_cond_64:
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t create SimpleDateFormat for date style")));
	// throw
	throw cVar3;
	// 239    .line 86
	// 240    .end local v0    # "df":Landroid/icu/text/DateFormat;
	// 241    .end local v1    # "newStyle":I
label_cond_6d:
	//    .restart local v1    # "newStyle":I
	df = android::icu::text::DateFormat::getTimeInstance(( this->fTimeStyle & -0x81), locale);
	//    .restart local v0    # "df":Landroid/icu/text/DateFormat;
	if ( !(df->instanceOf("android::icu::text::SimpleDateFormat")) )  
		goto label_cond_86;
	df->checkCast("android::icu::text::SimpleDateFormat");
	//    .end local v0    # "df":Landroid/icu/text/DateFormat;
	this->fDateTimeFormat = df;
	this->fTimePattern = this->fDateTimeFormat->toPattern();
	goto label_goto_54;
	// 276    .line 91
	// 277    .restart local v0    # "df":Landroid/icu/text/DateFormat;
label_cond_86:
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t create SimpleDateFormat for time style")));
	// throw
	throw cVar4;

}
// .method private static dayDifference(Landroid/icu/util/Calendar;)I
int android::icu::impl::RelativeDateFormat::dayDifference(std::shared_ptr<android::icu::util::Calendar> until)
{
	
	int cVar0;
	std::shared_ptr<android::icu::util::Calendar> nowCal;
	std::shared_ptr<java::util::Date> nowDate;
	
	//    .param p0, "until"    # Landroid/icu/util/Calendar;
	cVar0 = 0x14;
	nowCal = until->clone();
	nowCal->checkCast("android::icu::util::Calendar");
	//    .local v1, "nowCal":Landroid/icu/util/Calendar;
	nowDate = std::make_shared<java::util::Date>(java::lang::System::currentTimeMillis({const[class].FS-Param}));
	//    .local v2, "nowDate":Ljava/util/Date;
	nowCal->clear();
	nowCal->setTime(nowDate);
	//    .local v0, "dayDiff":I
	return (until->get(cVar0) - nowCal->get(cVar0));

}
// .method private getStringForDay(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::RelativeDateFormat::getStringForDay(int day)
{
	
	std::shared_ptr<java::util::Iterator> dayItem_S_iterator;
	std::shared_ptr<android::icu::impl::RelativeDateFormat_S_URelativeString> dayItem;
	
	//    .param p1, "day"    # I
	if ( this->fDates )     
		goto label_cond_8;
	this->loadDates();
label_cond_8:
	dayItem_S_iterator = this->fDates->iterator();
	//    .local v1, "dayItem$iterator":Ljava/util/Iterator;
label_cond_e:
	if ( !(dayItem_S_iterator->hasNext()) )  
		goto label_cond_21;
	dayItem = dayItem_S_iterator->next();
	dayItem->checkCast("android::icu::impl::RelativeDateFormat_S_URelativeString");
	//    .local v0, "dayItem":Landroid/icu/impl/RelativeDateFormat$URelativeString;
	if ( dayItem->offset != day )
		goto label_cond_e;
	return dayItem->string;
	// 383    .line 246
	// 384    .end local v0    # "dayItem":Landroid/icu/impl/RelativeDateFormat$URelativeString;
label_cond_21:
	return 0x0;

}
// .method private initCapitalizationContextInfo(Landroid/icu/util/ULocale;)V
void android::icu::impl::RelativeDateFormat::initCapitalizationContextInfo(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	auto intVector;
	bool cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x1;
	cVar1 = 0x0;
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), locale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v2, "rb":Landroid/icu/impl/ICUResourceBundle;
	try {
	//label_try_start_b:
	//    .local v3, "rdb":Landroid/icu/impl/ICUResourceBundle;
	intVector = rb->getWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("contextTransforms/relative")))->getIntVector();
	//    .local v1, "intVector":[I
	if ( intVector->size() <  0x2 )
		goto label_cond_29;
	if ( !(intVector[0x0]) )  
		goto label_cond_2a;
	cVar2 = cVar0;
label_goto_20:
	this->capitalizationOfRelativeUnitsForListOrMenu = cVar2;
	if ( !(intVector[0x1]) )  
		goto label_cond_2c;
label_goto_27:
	this->capitalizationOfRelativeUnitsForStandAlone = cVar0;
	//label_try_end_29:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_b .. :try_end_29} :catch_2e
	//    .end local v1    # "intVector":[I
	//    .end local v3    # "rdb":Landroid/icu/impl/ICUResourceBundle;
label_cond_29:
label_goto_29:
	return;
	// 461    .restart local v1    # "intVector":[I
	// 462    .restart local v3    # "rdb":Landroid/icu/impl/ICUResourceBundle;
label_cond_2a:
	cVar2 = cVar1;
	goto label_goto_20;
label_cond_2c:
	cVar0 = cVar1;
	goto label_goto_27;
	// 475    .line 302
	// 476    .end local v1    # "intVector":[I
	// 477    .end local v3    # "rdb":Landroid/icu/impl/ICUResourceBundle;
label_catch_2e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	goto label_goto_29;

}
// .method private initializeCalendar(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)Landroid/icu/util/Calendar;
std::shared_ptr<android::icu::util::Calendar> android::icu::impl::RelativeDateFormat::initializeCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "zone"    # Landroid/icu/util/TimeZone;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	if ( this->calendar )     
		goto label_cond_c;
	if ( zone )     
		goto label_cond_f;
	this->calendar = android::icu::util::Calendar::getInstance(locale);
label_cond_c:
label_goto_c:
	return this->calendar;
	// 513    .line 331
label_cond_f:
	this->calendar = android::icu::util::Calendar::getInstance(zone, locale);
	goto label_goto_c;

}
// .method private initializeCombinedFormat(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;)Landroid/icu/text/MessageFormat;
std::shared_ptr<android::icu::text::MessageFormat> android::icu::impl::RelativeDateFormat::initializeCombinedFormat(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	auto patternsRb;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> patternsRb;
	std::shared_ptr<java::lang::String> pattern;
	std::shared_ptr<android::icu::text::MessageFormat> cVar1;
	int glueIndex;
	
	//    .param p1, "cal"    # Landroid/icu/util/Calendar;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), locale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v4, "rb":Landroid/icu/impl/ICUResourceBundle;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v5, "resourcePath":Ljava/lang/String;
	patternsRb = rb->findWithFallback(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/")))->append(cal->getType())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/DateTimePatterns")))->toString());
	//    .local v3, "patternsRb":Landroid/icu/impl/ICUResourceBundle;
	if ( patternsRb )     
		goto label_cond_47;
	if ( !(( cal->getType()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("gregorian"))) ^ 0x1)) )  
		goto label_cond_47;
	patternsRb = rb->findWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar/gregorian/DateTimePatterns")));
label_cond_47:
	if ( !(patternsRb) )  
		goto label_cond_51;
	if ( patternsRb->getSize() >= 0x9 )
		goto label_cond_67;
label_cond_51:
	pattern = std::make_shared<java::lang::String>(std::make_shared<char[]>("{1} {0}"));
	//    .local v2, "pattern":Ljava/lang/String;
label_goto_54:
	this->combinedFormatHasDateAtStart = pattern->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("{1}")));
	cVar1 = std::make_shared<android::icu::text::MessageFormat>(pattern, locale);
	this->fCombinedFormat = cVar1;
	return this->fCombinedFormat;
	// 644    .line 352
	// 645    .end local v2    # "pattern":Ljava/lang/String;
label_cond_67:
	glueIndex = 0x8;
	//    .local v1, "glueIndex":I
	if ( patternsRb->getSize() <  0xd )
		goto label_cond_80;
	if ( this->fDateStyle < 0 ) 
		goto label_cond_93;
	if ( this->fDateStyle >  0x3 )
		goto label_cond_93;
	glueIndex = ( ( this->fDateStyle + 0x1) + 0x8);
label_cond_80:
label_goto_80:
	//    .local v0, "elementType":I
	if ( patternsRb->get(glueIndex)->getType() != 0x8 )
		goto label_cond_a8;
	pattern = patternsRb->get(glueIndex)->getString(0x0);
	//    .restart local v2    # "pattern":Ljava/lang/String;
	goto label_goto_54;
	// 704    .line 357
	// 705    .end local v0    # "elementType":I
	// 706    .end local v2    # "pattern":Ljava/lang/String;
label_cond_93:
	if ( this->fDateStyle <  0x80 )
		goto label_cond_80;
	if ( this->fDateStyle >  0x83 )
		goto label_cond_80;
	glueIndex = ( ( ( this->fDateStyle + 0x1) + -0x80) + 0x8);
	goto label_goto_80;
	// 732    .line 366
	// 733    .restart local v0    # "elementType":I
label_cond_a8:
	pattern = patternsRb->getString(glueIndex);
	//    .restart local v2    # "pattern":Ljava/lang/String;
	goto label_goto_54;

}
// .method private declared-synchronized loadDates()V
void android::icu::impl::RelativeDateFormat::loadDates()
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<android::icu::impl::RelativeDateFormat_S_RelDateFmtDataSink> sink;
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), this->fLocale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "rb":Landroid/icu/impl/ICUResourceBundle;
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->fDates = cVar0;
	sink = std::make_shared<android::icu::impl::RelativeDateFormat_S_RelDateFmtDataSink>(this, 0x0);
	//    .local v1, "sink":Landroid/icu/impl/RelativeDateFormat$RelDateFmtDataSink;
	rb->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("fields/day/relative")), sink);
	//label_try_end_1f:
	}
	catch (...){
		goto label_catchall_21;
	}
	//    .catchall {:try_start_1 .. :try_end_1f} :catchall_21
	this->monitor_exit();
	return;
	// 789    .end local v0    # "rb":Landroid/icu/impl/ICUResourceBundle;
	// 790    .end local v1    # "sink":Landroid/icu/impl/RelativeDateFormat$RelDateFmtDataSink;
label_catchall_21:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public format(Landroid/icu/util/Calendar;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::impl::RelativeDateFormat::format(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext;
	std::shared_ptr<java::lang::String> relativeDayString;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuffer> combinedPattern;
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar2;
	std::shared_ptr<java::text::FieldPosition> cVar3;
	
	//    .param p1, "cal"    # Landroid/icu/util/Calendar;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "fieldPosition"    # Ljava/text/FieldPosition;
	cVar0 = 0x0;
	0x0;
	//    .local v4, "relativeDayString":Ljava/lang/String;
	capitalizationContext = this->getContext(android::icu::text::DisplayContext_S_Type::CAPITALIZATION);
	//    .local v0, "capitalizationContext":Landroid/icu/text/DisplayContext;
	if ( this->fDateStyle == -0x1 )
		goto label_cond_15;
	//    .local v3, "dayDiff":I
	relativeDayString = this->getStringForDay(android::icu::impl::RelativeDateFormat::dayDifference(cal));
	//    .end local v3    # "dayDiff":I
	//    .end local v4    # "relativeDayString":Ljava/lang/String;
label_cond_15:
	if ( !(this->fDateTimeFormat) )  
		goto label_cond_68;
	if ( !(relativeDayString) )  
		goto label_cond_89;
	if ( !(this->fDatePattern) )  
		goto label_cond_89;
	if ( !(this->fTimePattern) )  
		goto label_cond_27;
	if ( this->fCombinedFormat )     
		goto label_cond_85;
label_cond_27:
	if ( relativeDayString->length() <= 0 )
		goto label_cond_61;
	if ( !(android::icu::lang::UCharacter::isLowerCase(relativeDayString->codePointAt(cVar0))) )  
		goto label_cond_61;
	if ( capitalizationContext == android::icu::text::DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE )
		goto label_cond_4b;
	if ( capitalizationContext != android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU )
		goto label_cond_43;
	if ( this->capitalizationOfRelativeUnitsForListOrMenu )     
		goto label_cond_4b;
label_cond_43:
	if ( capitalizationContext != android::icu::text::DisplayContext::CAPITALIZATION_FOR_STANDALONE )
		goto label_cond_61;
	if ( !(this->capitalizationOfRelativeUnitsForStandAlone) )  
		goto label_cond_61;
label_cond_4b:
	if ( this->capitalizationBrkIter )     
		goto label_cond_57;
	this->capitalizationBrkIter = android::icu::text::BreakIterator::getSentenceInstance(this->fLocale);
label_cond_57:
	relativeDayString = android::icu::lang::UCharacter::toTitleCase(this->fLocale, relativeDayString, this->capitalizationBrkIter, 0x300);
label_cond_61:
	this->fDateTimeFormat->setContext(android::icu::text::DisplayContext::CAPITALIZATION_NONE);
label_cond_68:
label_goto_68:
	if ( !(this->fDateTimeFormat) )  
		goto label_cond_fa;
	if ( this->fDatePattern )     
		goto label_cond_74;
	if ( !(this->fTimePattern) )  
		goto label_cond_fa;
label_cond_74:
	if ( this->fDatePattern )     
		goto label_cond_8f;
	this->fDateTimeFormat->applyPattern(this->fTimePattern);
	this->fDateTimeFormat->format(cal, toAppendTo, fieldPosition);
label_cond_84:
label_goto_84:
	return toAppendTo;
	// 983    .line 126
label_cond_85:
	if ( this->combinedFormatHasDateAtStart )     
		goto label_cond_27;
label_cond_89:
	this->fDateTimeFormat->setContext(capitalizationContext);
	goto label_goto_68;
	// 998    .line 152
label_cond_8f:
	if ( this->fTimePattern )     
		goto label_cond_a6;
	if ( !(relativeDayString) )  
		goto label_cond_99;
	toAppendTo->append(relativeDayString);
	goto label_goto_84;
	// 1012    .line 157
label_cond_99:
	this->fDateTimeFormat->applyPattern(this->fDatePattern);
	this->fDateTimeFormat->format(cal, toAppendTo, fieldPosition);
	goto label_goto_84;
	// 1027    .line 161
label_cond_a6:
	//    .local v2, "datePattern":Ljava/lang/String;
	if ( !(relativeDayString) )  
		goto label_cond_cf;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
label_cond_cf:
	combinedPattern = std::make_shared<java::lang::StringBuffer>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	//    .local v1, "combinedPattern":Ljava/lang/StringBuffer;
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar2[cVar0] = this->fTimePattern;
	cVar2[0x1] = this->fDatePattern;
	cVar3 = std::make_shared<java::text::FieldPosition>(cVar0);
	this->fCombinedFormat->format(cVar2, combinedPattern, cVar3);
	this->fDateTimeFormat->applyPattern(combinedPattern->toString());
	this->fDateTimeFormat->format(cal, toAppendTo, fieldPosition);
	goto label_goto_84;
	// 1114    .line 171
	// 1115    .end local v1    # "combinedPattern":Ljava/lang/StringBuffer;
	// 1116    .end local v2    # "datePattern":Ljava/lang/String;
label_cond_fa:
	if ( !(this->fDateFormat) )  
		goto label_cond_84;
	if ( !(relativeDayString) )  
		goto label_cond_104;
	toAppendTo->append(relativeDayString);
	goto label_goto_84;
	// 1130    .line 177
label_cond_104:
	this->fDateFormat->format(cal, toAppendTo, fieldPosition);
	goto label_goto_84;

}
// .method public parse(Ljava/lang/String;Landroid/icu/util/Calendar;Ljava/text/ParsePosition;)V
void android::icu::impl::RelativeDateFormat::parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "cal"    # Landroid/icu/util/Calendar;
	//    .param p3, "pos"    # Ljava/text/ParsePosition;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Relative Date parse is not implemented yet")));
	// throw
	throw cVar0;

}
// .method public setContext(Landroid/icu/text/DisplayContext;)V
void android::icu::impl::RelativeDateFormat::setContext(std::shared_ptr<android::icu::text::DisplayContext> context)
{
	
	//    .param p1, "context"    # Landroid/icu/text/DisplayContext;
	this->setContext(context);
	if ( this->capitalizationInfoIsSet )     
		goto label_cond_17;
	if ( context == android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU )
		goto label_cond_f;
	if ( context != android::icu::text::DisplayContext::CAPITALIZATION_FOR_STANDALONE )
		goto label_cond_17;
label_cond_f:
	this->initCapitalizationContextInfo(this->fLocale);
	this->capitalizationInfoIsSet = 0x1;
label_cond_17:
	if ( this->capitalizationBrkIter )     
		goto label_cond_37;
	if ( context == android::icu::text::DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE )
		goto label_cond_2f;
	if ( context != android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU )
		goto label_cond_27;
	if ( this->capitalizationOfRelativeUnitsForListOrMenu )     
		goto label_cond_2f;
label_cond_27:
	if ( context != android::icu::text::DisplayContext::CAPITALIZATION_FOR_STANDALONE )
		goto label_cond_37;
	if ( !(this->capitalizationOfRelativeUnitsForStandAlone) )  
		goto label_cond_37;
label_cond_2f:
	this->capitalizationBrkIter = android::icu::text::BreakIterator::getSentenceInstance(this->fLocale);
label_cond_37:
	return;

}


