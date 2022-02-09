#ifndef __android_icu_impl_TZDBTimeZoneNames_S_TZDBNames__
#define __android_icu_impl_TZDBTimeZoneNames_S_TZDBNames__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TZDBTimeZoneNames$TZDBNames.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class TZDBTimeZoneNames_S_TZDBNames : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_text_TimeZoneNames_S_NameTypeSwitchesValues;
	static std::shared_ptr<std::vector<java::lang::String>> KEYS;
	std::shared_ptr<std::vector<java::lang::String>> _names;
	std::shared_ptr<std::vector<java::lang::String>> _parseRegions;
	static int _getandroid_icu_text_TimeZoneNames_S_NameTypeSwitchesValues();
	TZDBTimeZoneNames_S_TZDBNames(std::shared_ptr<std::vector<java::lang::String>> names,std::shared_ptr<std::vector<java::lang::String>> parseRegions);
public:
	static std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNames> EMPTY_TZDBNAMES;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNames> getInstance(std::shared_ptr<android::icu::impl::ICUResourceBundle> zoneStrings,std::shared_ptr<java::lang::String> key);
	std::shared_ptr<java::lang::String> virtual getName(std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type);
	std::shared_ptr<java::lang::String> virtual getParseRegions();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TZDBTimeZoneNames_S_TZDBNames(){
	}

}; // class TZDBTimeZoneNames_S_TZDBNames
}; // namespace android::icu::impl

#endif //__android_icu_impl_TZDBTimeZoneNames_S_TZDBNames__

