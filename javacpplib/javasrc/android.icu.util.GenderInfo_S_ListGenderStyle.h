#ifndef __android_icu_util_GenderInfo_S_ListGenderStyle__
#define __android_icu_util_GenderInfo_S_ListGenderStyle__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\GenderInfo$ListGenderStyle.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::util{
class GenderInfo_S_ListGenderStyle : public java::lang::Enum<android::icu::util::GenderInfo_S_ListGenderStyle> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::GenderInfo_S_ListGenderStyle>> _S_VALUES;
	static std::shared_ptr<java::util::Map<java::lang::String,android::icu::util::GenderInfo_S_ListGenderStyle>> fromNameMap;
	GenderInfo_S_ListGenderStyle(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> MALE_TAINTS;
	static std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> MIXED_NEUTRAL;
	static std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> NEUTRAL;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> fromName(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::GenderInfo_S_ListGenderStyle> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::GenderInfo_S_ListGenderStyle::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~GenderInfo_S_ListGenderStyle(){
	}

}; // class GenderInfo_S_ListGenderStyle
}; // namespace android::icu::util

#endif //__android_icu_util_GenderInfo_S_ListGenderStyle__

