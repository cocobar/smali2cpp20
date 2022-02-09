#ifndef __android_icu_text_ChineseDateFormatSymbols__
#define __android_icu_text_ChineseDateFormatSymbols__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ChineseDateFormatSymbols.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class ChineseDateFormatSymbols : public android::icu::text::DateFormatSymbols {
protected:
	void virtual initializeData(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<android::icu::impl::ICUResourceBundle> b,std::shared_ptr<java::lang::String> calendarType);
private:
	void virtual initializeIsLeapMonth();
public:
	static long long serialVersionUID;
	std::shared_ptr<std::vector<java::lang::String>> isLeapMonth;
	ChineseDateFormatSymbols();
	ChineseDateFormatSymbols(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> locale);
	ChineseDateFormatSymbols(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::util::Locale> locale);
	ChineseDateFormatSymbols(std::shared_ptr<android::icu::util::ULocale> locale);
	ChineseDateFormatSymbols(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<java::lang::String> virtual getLeapMonth(int leap);
	void virtual initializeData(std::shared_ptr<android::icu::text::DateFormatSymbols> dfs);
public:
	virtual ~ChineseDateFormatSymbols(){
	}

}; // class ChineseDateFormatSymbols
}; // namespace android::icu::text

#endif //__android_icu_text_ChineseDateFormatSymbols__

