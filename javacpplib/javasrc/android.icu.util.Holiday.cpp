// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Holiday.smali
#include "java2ctype.h"
#include "android.icu.util.DateRule.h"
#include "android.icu.util.Holiday.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Date.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"
#include "java.util.ResourceBundle.h"

static android::icu::util::Holiday::noHolidays;
// .method static constructor <clinit>()V
void android::icu::util::Holiday::static_cinit()
{
	
	android::icu::util::Holiday::noHolidays = std::make_shared<std::vector<std::vector<android::icu::util::Holiday>>>(0x0);
	return;

}
// .method protected constructor <init>(Ljava/lang/String;Landroid/icu/util/DateRule;)V
android::icu::util::Holiday::Holiday(std::shared_ptr<java::lang::String> name,std::shared_ptr<android::icu::util::DateRule> rule)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "rule"    # Landroid/icu/util/DateRule;
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = name;
	this->rule = rule;
	return;

}
// .method public static getHolidays()[Landroid/icu/util/Holiday;
std::shared_ptr<android::icu::util::Holiday> android::icu::util::Holiday::getHolidays()
{
	
	return android::icu::util::Holiday::getHolidays(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));

}
// .method public static getHolidays(Landroid/icu/util/ULocale;)[Landroid/icu/util/Holiday;
std::shared_ptr<android::icu::util::Holiday> android::icu::util::Holiday::getHolidays(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<std::vector<android::icu::util::Holiday>> result;
	std::shared_ptr<std::vector<android::icu::util::Holiday>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	result = android::icu::util::Holiday::noHolidays;
	//    .local v3, "result":[Landroid/icu/util/Holiday;
	try {
	//label_try_start_2:
	//    .local v1, "bundle":Ljava/util/ResourceBundle;
	cVar0 = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.data.HolidayBundle")), locale)->getObject(std::make_shared<java::lang::String>(std::make_shared<char[]>("holidays")));
	cVar0->checkCast("std::vector<android::icu::util::Holiday>");
	result = cVar0;
	//label_try_end_14:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_15;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_2 .. :try_end_14} :catch_15
	//    .end local v1    # "bundle":Ljava/util/ResourceBundle;
label_goto_14:
	return result;
	// 110    .line 58
label_catch_15:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/util/MissingResourceException;
	goto label_goto_14;

}
// .method public static getHolidays(Ljava/util/Locale;)[Landroid/icu/util/Holiday;
std::shared_ptr<android::icu::util::Holiday> android::icu::util::Holiday::getHolidays(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::util::Holiday::getHolidays(android::icu::util::ULocale::forLocale(locale));

}
// .method public firstAfter(Ljava/util/Date;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::Holiday::firstAfter(std::shared_ptr<java::util::Date> start)
{
	
	//    .param p1, "start"    # Ljava/util/Date;
	return this->rule->firstAfter(start);

}
// .method public firstBetween(Ljava/util/Date;Ljava/util/Date;)Ljava/util/Date;
std::shared_ptr<java::util::Date> android::icu::util::Holiday::firstBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end)
{
	
	//    .param p1, "start"    # Ljava/util/Date;
	//    .param p2, "end"    # Ljava/util/Date;
	return this->rule->firstBetween(start, end);

}
// .method public getDisplayName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Holiday::getDisplayName()
{
	
	return this->getDisplayName(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getDisplayName(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Holiday::getDisplayName(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::String> dispName;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	dispName = this->name;
	//    .local v1, "dispName":Ljava/lang/String;
	try {
	//label_try_start_2:
	//    .local v0, "bundle":Ljava/util/ResourceBundle;
	//label_try_end_e:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_2 .. :try_end_e} :catch_10
	dispName = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.data.HolidayBundle")), locale)->getString(this->name);
	//    .end local v0    # "bundle":Ljava/util/ResourceBundle;
label_goto_f:
	return dispName;
	// 218    .line 185
label_catch_10:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/util/MissingResourceException;
	goto label_goto_f;

}
// .method public getDisplayName(Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::Holiday::getDisplayName(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	return this->getDisplayName(android::icu::util::ULocale::forLocale(locale));

}
// .method public getRule()Landroid/icu/util/DateRule;
std::shared_ptr<android::icu::util::DateRule> android::icu::util::Holiday::getRule()
{
	
	return this->rule;

}
// .method public isBetween(Ljava/util/Date;Ljava/util/Date;)Z
bool android::icu::util::Holiday::isBetween(std::shared_ptr<java::util::Date> start,std::shared_ptr<java::util::Date> end)
{
	
	//    .param p1, "start"    # Ljava/util/Date;
	//    .param p2, "end"    # Ljava/util/Date;
	return this->rule->isBetween(start, end);

}
// .method public isOn(Ljava/util/Date;)Z
bool android::icu::util::Holiday::isOn(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	return this->rule->isOn(date);

}
// .method public setRule(Landroid/icu/util/DateRule;)V
void android::icu::util::Holiday::setRule(std::shared_ptr<android::icu::util::DateRule> rule)
{
	
	//    .param p1, "rule"    # Landroid/icu/util/DateRule;
	this->rule = rule;
	return;

}


