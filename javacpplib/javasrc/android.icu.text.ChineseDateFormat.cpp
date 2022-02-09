// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ChineseDateFormat.smali
#include "java2ctype.h"
#include "android.icu.text.ChineseDateFormat.h"
#include "android.icu.text.ChineseDateFormatSymbols.h"
#include "android.icu.text.DateFormat_S_Field.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ChineseCalendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.FieldPosition.h"
#include "java.util.Locale.h"

static android::icu::text::ChineseDateFormat::serialVersionUID = -0x3ffb141bc87c5a3bL;
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/util/ULocale;)V
android::icu::text::ChineseDateFormat::ChineseDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 027    .end annotation
	android::icu::text::ChineseDateFormat::(pattern, 0x0, locale);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)V
android::icu::text::ChineseDateFormat::ChineseDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::lang::String> override,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::ChineseDateFormatSymbols> cVar0;
	std::shared_ptr<android::icu::util::ChineseCalendar> cVar1;
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "override"    # Ljava/lang/String;
	//    .param p3, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 045    .end annotation
	cVar0 = std::make_shared<android::icu::text::ChineseDateFormatSymbols>(locale);
	cVar1 = std::make_shared<android::icu::util::ChineseCalendar>(android::icu::util::TimeZone::getDefault({const[class].FS-Param}), locale);
	android::icu::text::SimpleDateFormat::(pattern, cVar0, cVar1, locale, 0x1, override);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/util/Locale;)V
android::icu::text::ChineseDateFormat::ChineseDateFormat(std::shared_ptr<java::lang::String> pattern,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "pattern"    # Ljava/lang/String;
	//    .param p2, "locale"    # Ljava/util/Locale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 084    .end annotation
	android::icu::text::ChineseDateFormat::(pattern, android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method protected patternCharToDateFormatField(C)Landroid/icu/text/DateFormat$Field;
std::shared_ptr<android::icu::text::DateFormat_S_Field> android::icu::text::ChineseDateFormat::patternCharToDateFormatField(char ch)
{
	
	//    .param p1, "ch"    # C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 104    .end annotation
	return this->patternCharToDateFormatField(ch);

}
// .method protected subFormat(Ljava/lang/StringBuffer;CIIILandroid/icu/text/DisplayContext;Ljava/text/FieldPosition;Landroid/icu/util/Calendar;)V
void android::icu::text::ChineseDateFormat::subFormat(std::shared_ptr<java::lang::StringBuffer> buf,char ch,int count,int beginOffset,int fieldNum,std::shared_ptr<android::icu::text::DisplayContext> capitalizationContext,std::shared_ptr<java::text::FieldPosition> pos,std::shared_ptr<android::icu::util::Calendar> cal)
{
	
	//    .param p1, "buf"    # Ljava/lang/StringBuffer;
	//    .param p2, "ch"    # C
	//    .param p3, "count"    # I
	//    .param p4, "beginOffset"    # I
	//    .param p5, "fieldNum"    # I
	//    .param p6, "capitalizationContext"    # Landroid/icu/text/DisplayContext;
	//    .param p7, "pos"    # Ljava/text/FieldPosition;
	//    .param p8, "cal"    # Landroid/icu/util/Calendar;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 126    .end annotation
	this->subFormat(buf, ch, count, beginOffset, fieldNum, capitalizationContext, pos, cal);
	return;

}
// .method protected subParse(Ljava/lang/String;ICIZZ[ZLandroid/icu/util/Calendar;)I
int android::icu::text::ChineseDateFormat::subParse(std::shared_ptr<java::lang::String> text,int start,char ch,int count,bool obeyCount,bool allowNegative,std::shared_ptr<bool[]> ambiguousYear,std::shared_ptr<android::icu::util::Calendar> cal)
{
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "start"    # I
	//    .param p3, "ch"    # C
	//    .param p4, "count"    # I
	//    .param p5, "obeyCount"    # Z
	//    .param p6, "allowNegative"    # Z
	//    .param p7, "ambiguousYear"    # [Z
	//    .param p8, "cal"    # Landroid/icu/util/Calendar;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 147    .end annotation
	return this->subParse(text, start, ch, count, obeyCount, allowNegative, ambiguousYear, cal);

}


