#ifndef __android_icu_text_SpoofChecker_S_RestrictionLevel__
#define __android_icu_text_SpoofChecker_S_RestrictionLevel__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SpoofChecker$RestrictionLevel.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class SpoofChecker_S_RestrictionLevel : public java::lang::Enum<android::icu::text::SpoofChecker_S_RestrictionLevel> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::SpoofChecker_S_RestrictionLevel>> _S_VALUES;
	SpoofChecker_S_RestrictionLevel(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> ASCII;
	static std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> HIGHLY_RESTRICTIVE;
	static std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> MINIMALLY_RESTRICTIVE;
	static std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> MODERATELY_RESTRICTIVE;
	static std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> SINGLE_SCRIPT_RESTRICTIVE;
	static std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> UNRESTRICTIVE;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::SpoofChecker_S_RestrictionLevel> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::SpoofChecker_S_RestrictionLevel::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SpoofChecker_S_RestrictionLevel(){
	}

}; // class SpoofChecker_S_RestrictionLevel
}; // namespace android::icu::text

#endif //__android_icu_text_SpoofChecker_S_RestrictionLevel__

