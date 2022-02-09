#ifndef __android_icu_impl_RelativeDateFormat__
#define __android_icu_impl_RelativeDateFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\RelativeDateFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.RelativeDateFormat_S_URelativeString.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.DateFormat.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.MessageFormat.h"
#include "android.icu.text.SimpleDateFormat.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.List.h"

namespace android::icu::impl{
class RelativeDateFormat : public android::icu::text::DateFormat {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<android::icu::text::BreakIterator> capitalizationBrkIter;
	bool capitalizationInfoIsSet;
	bool capitalizationOfRelativeUnitsForListOrMenu;
	bool capitalizationOfRelativeUnitsForStandAlone;
	bool combinedFormatHasDateAtStart;
	std::shared_ptr<android::icu::text::MessageFormat> fCombinedFormat;
	std::shared_ptr<android::icu::text::DateFormat> fDateFormat;
	std::shared_ptr<java::lang::String> fDatePattern;
	std::shared_ptr<android::icu::text::SimpleDateFormat> fDateTimeFormat;
	std::shared_ptr<java::util::List<android::icu::impl::RelativeDateFormat_S_URelativeString>> fDates;
	std::shared_ptr<android::icu::text::DateFormat> fTimeFormat;
	std::shared_ptr<java::lang::String> fTimePattern;
	static int dayDifference(std::shared_ptr<android::icu::util::Calendar> until);
	std::shared_ptr<java::lang::String> virtual getStringForDay(int day);
	void virtual initCapitalizationContextInfo(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::util::Calendar> virtual initializeCalendar(std::shared_ptr<android::icu::util::TimeZone> zone,std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<android::icu::text::MessageFormat> virtual initializeCombinedFormat(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> locale);
	void virtual loadDates();
public:
	int fDateStyle;
	std::shared_ptr<android::icu::util::ULocale> fLocale;
	int fTimeStyle;
	static std::shared_ptr<java::util::List> _get0(std::shared_ptr<android::icu::impl::RelativeDateFormat> _this);
	static std::shared_ptr<java::lang::String> _wrap0(std::shared_ptr<android::icu::impl::RelativeDateFormat> _this,int day);
	RelativeDateFormat(int timeStyle,int dateStyle,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::Calendar> cal);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition);
	void virtual parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<java::text::ParsePosition> pos);
	void virtual setContext(std::shared_ptr<android::icu::text::DisplayContext> context);
public:
	virtual ~RelativeDateFormat(){
	}

}; // class RelativeDateFormat
}; // namespace android::icu::impl

#endif //__android_icu_impl_RelativeDateFormat__

