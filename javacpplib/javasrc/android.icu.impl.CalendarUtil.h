#ifndef __android_icu_impl_CalendarUtil__
#define __android_icu_impl_CalendarUtil__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarUtil.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class CalendarUtil : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> CALKEY;
	static std::shared_ptr<java::lang::String> DEFCAL;
public:
	CalendarUtil();
	static std::shared_ptr<java::lang::String> getCalendarType(std::shared_ptr<android::icu::util::ULocale> loc);
public:
	virtual ~CalendarUtil(){
	}

}; // class CalendarUtil
}; // namespace android::icu::impl

#endif //__android_icu_impl_CalendarUtil__

