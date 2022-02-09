// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ChineseDateFormatSymbols.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.ChineseDateFormatSymbols.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ChineseCalendar.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

static android::icu::text::ChineseDateFormatSymbols::serialVersionUID = 0x5ec14695eb6891faL;
// .method public constructor <init>()V
android::icu::text::ChineseDateFormatSymbols::ChineseDateFormatSymbols()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 023    .end annotation
	android::icu::text::ChineseDateFormatSymbols::(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(Landroid/icu/util/Calendar;Landroid/icu/util/ULocale;)V
android::icu::text::ChineseDateFormatSymbols::ChineseDateFormatSymbols(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "cal"    # Landroid/icu/util/Calendar;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 044    .end annotation
	android::icu::text::DateFormatSymbols::(cal->getClass(), locale);
	return;

}
// .method public constructor <init>(Landroid/icu/util/Calendar;Ljava/util/Locale;)V
android::icu::text::ChineseDateFormatSymbols::ChineseDateFormatSymbols(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "cal"    # Landroid/icu/util/Calendar;
	//    .param p2, "locale"    # Ljava/util/Locale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 063    .end annotation
	android::icu::text::DateFormatSymbols::(cal->getClass(), locale);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::ChineseDateFormatSymbols::ChineseDateFormatSymbols(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 081    .end annotation
	android::icu::text::DateFormatSymbols::(android::icu::util::ChineseCalendar(), locale);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::text::ChineseDateFormatSymbols::ChineseDateFormatSymbols(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 097    .end annotation
	android::icu::text::DateFormatSymbols::(android::icu::util::ChineseCalendar(), android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method private initializeIsLeapMonth()V
void android::icu::text::ChineseDateFormatSymbols::initializeIsLeapMonth()
{
	
	int cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	std::shared_ptr<java::lang::String> cVar1;
	
	cVar0 = 0x0;
	this->isLeapMonth = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x2);
	this->isLeapMonth[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	if ( !(this->leapMonthPatterns) )  
		goto label_cond_25;
	cVar1 = this->leapMonthPatterns[cVar0]->replace(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0}")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
label_goto_21:
	this->isLeapMonth[0x1] = cVar1;
	return;
	// 160    .line 134
label_cond_25:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_21;

}
// .method public getLeapMonth(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::ChineseDateFormatSymbols::getLeapMonth(int leap)
{
	
	//    .param p1, "leap"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 173    .end annotation
	return this->isLeapMonth[leap];

}
// .method initializeData(Landroid/icu/text/DateFormatSymbols;)V
void android::icu::text::ChineseDateFormatSymbols::initializeData(std::shared_ptr<android::icu::text::DateFormatSymbols> dfs)
{
	
	//    .param p1, "dfs"    # Landroid/icu/text/DateFormatSymbols;
	this->initializeData(dfs);
	if ( !(dfs->instanceOf("android::icu::text::ChineseDateFormatSymbols")) )  
		goto label_cond_e;
	dfs->checkCast("android::icu::text::ChineseDateFormatSymbols");
	//    .end local p1    # "dfs":Landroid/icu/text/DateFormatSymbols;
	this->isLeapMonth = dfs->isLeapMonth;
label_goto_d:
	return;
	// 209    .line 123
	// 210    .restart local p1    # "dfs":Landroid/icu/text/DateFormatSymbols;
label_cond_e:
	this->initializeIsLeapMonth();
	goto label_goto_d;

}
// .method protected initializeData(Landroid/icu/util/ULocale;Landroid/icu/impl/ICUResourceBundle;Ljava/lang/String;)V
void android::icu::text::ChineseDateFormatSymbols::initializeData(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<android::icu::impl::ICUResourceBundle> b,std::shared_ptr<java::lang::String> calendarType)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "b"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p3, "calendarType"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 223    .end annotation
	this->initializeData(loc, b, calendarType);
	this->initializeIsLeapMonth();
	return;

}


