#ifndef __sun_util_locale_provider_CalendarDataUtility__
#define __sun_util_locale_provider_CalendarDataUtility__
// H L:\smali2cpp20\x64\Release\out\sun\util\locale\provider\CalendarDataUtility.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormatSymbols.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

namespace sun::util::locale::provider{
class CalendarDataUtility : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> BUDDHIST_CALENDAR;
	static std::shared_ptr<java::lang::String> GREGORIAN_CALENDAR;
	static std::shared_ptr<java::lang::String> ISLAMIC_CALENDAR;
	static std::shared_ptr<java::lang::String> JAPANESE_CALENDAR;
	static std::shared_ptr<int[]> REST_OF_STYLES;
	CalendarDataUtility();
	static std::shared_ptr<android::icu::text::DateFormatSymbols> getDateFormatSymbols(std::shared_ptr<java::lang::String> id,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<java::lang::String> getNames(std::shared_ptr<java::lang::String> id,int field,int style,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<java::lang::String> normalizeCalendarType(std::shared_ptr<java::lang::String> requestID);
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::Integer>> retrieveFieldValueNamesImpl(std::shared_ptr<java::lang::String> id,int field,int style,std::shared_ptr<java::util::Locale> locale);
	static int toContext(int style);
	static int toWidth(int style);
public:
	static void static_cinit();
	static std::shared_ptr<java::lang::String> retrieveFieldValueName(std::shared_ptr<java::lang::String> id,int field,int cVar2,int style,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::Integer>> retrieveFieldValueNames(std::shared_ptr<java::lang::String> id,int field,int style,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<java::lang::String> retrieveJavaTimeFieldValueName(std::shared_ptr<java::lang::String> id,int field,int value,int style,std::shared_ptr<java::util::Locale> locale);
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::Integer>> retrieveJavaTimeFieldValueNames(std::shared_ptr<java::lang::String> id,int field,int style,std::shared_ptr<java::util::Locale> locale);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::util::locale::provider::CalendarDataUtility::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CalendarDataUtility(){
	}

}; // class CalendarDataUtility
}; // namespace sun::util::locale::provider

#endif //__sun_util_locale_provider_CalendarDataUtility__

