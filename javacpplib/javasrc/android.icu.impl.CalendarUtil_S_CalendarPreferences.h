#ifndef __android_icu_impl_CalendarUtil_S_CalendarPreferences__
#define __android_icu_impl_CalendarUtil_S_CalendarPreferences__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CalendarUtil$CalendarPreferences.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class CalendarUtil_S_CalendarPreferences : public android::icu::impl::UResource_S_Sink {
protected:
private:
	static std::shared_ptr<android::icu::impl::CalendarUtil_S_CalendarPreferences> INSTANCE;
public:
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> prefs;
	static std::shared_ptr<android::icu::impl::CalendarUtil_S_CalendarPreferences> _get0();
	static void static_cinit();
	CalendarUtil_S_CalendarPreferences();
	std::shared_ptr<java::lang::String> virtual getCalendarTypeForRegion(std::shared_ptr<java::lang::String> region);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CalendarUtil_S_CalendarPreferences::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CalendarUtil_S_CalendarPreferences(){
	}

}; // class CalendarUtil_S_CalendarPreferences
}; // namespace android::icu::impl

#endif //__android_icu_impl_CalendarUtil_S_CalendarPreferences__

