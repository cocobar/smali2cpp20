#ifndef __android_icu_util_GenderInfo__
#define __android_icu_util_GenderInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\GenderInfo.smali
#include "java2ctype.h"
#include "android.icu.util.GenderInfo_S_Cache.h"
#include "android.icu.util.GenderInfo_S_Gender.h"
#include "android.icu.util.GenderInfo_S_ListGenderStyle.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.util.List.h"
#include "java.util.Locale.h"

namespace android::icu::util{
class GenderInfo : public java::lang::Object {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_util_GenderInfo_S_GenderSwitchesValues;
	static std::shared_ptr<int[]> _android_icu_util_GenderInfo_S_ListGenderStyleSwitchesValues;
	static std::shared_ptr<android::icu::util::GenderInfo_S_Cache> genderInfoCache;
	static std::shared_ptr<android::icu::util::GenderInfo> neutral;
	std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> style;
	static int _getandroid_icu_util_GenderInfo_S_GenderSwitchesValues();
	static int _getandroid_icu_util_GenderInfo_S_ListGenderStyleSwitchesValues();
public:
	static std::shared_ptr<android::icu::util::GenderInfo> _get0();
	static void static_cinit();
	GenderInfo(std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> genderStyle);
	static std::shared_ptr<android::icu::util::GenderInfo> getInstance(std::shared_ptr<android::icu::util::ULocale> uLocale);
	static std::shared_ptr<android::icu::util::GenderInfo> getInstance(std::shared_ptr<java::util::Locale> locale);
	std::shared_ptr<android::icu::util::GenderInfo_S_Gender> virtual getListGender(std::shared_ptr<java::util::List<android::icu::util::GenderInfo_S_Gender>> genders);
	std::shared_ptr<android::icu::util::GenderInfo_S_Gender> virtual getListGender(std::shared_ptr<std::vector<android::icu::util::GenderInfo_S_Gender>> genders);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::GenderInfo::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~GenderInfo(){
	}

}; // class GenderInfo
}; // namespace android::icu::util

#endif //__android_icu_util_GenderInfo__

