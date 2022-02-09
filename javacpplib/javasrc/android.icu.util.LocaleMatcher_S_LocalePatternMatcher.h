#ifndef __android_icu_util_LocaleMatcher_S_LocalePatternMatcher__
#define __android_icu_util_LocaleMatcher_S_LocalePatternMatcher__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleMatcher$LocalePatternMatcher.smali
#include "java2ctype.h"
#include "android.icu.util.LocaleMatcher_S_Level.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.regex.Pattern.h"

namespace android::icu::util{
class LocaleMatcher_S_LocalePatternMatcher : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> lang;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> level;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::String> script;
public:
	static std::shared_ptr<java::util::regex::Pattern> pattern;
	static std::shared_ptr<java::lang::String> _get0(std::shared_ptr<android::icu::util::LocaleMatcher_S_LocalePatternMatcher> _this);
	static void static_cinit();
	LocaleMatcher_S_LocalePatternMatcher(std::shared_ptr<java::lang::String> toMatch);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::String> virtual getLanguage();
	std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> virtual getLevel();
	std::shared_ptr<java::lang::String> virtual getRegion();
	std::shared_ptr<java::lang::String> virtual getScript();
	int virtual hashCode();
	bool virtual matches(std::shared_ptr<android::icu::util::ULocale> ulocale);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::LocaleMatcher_S_LocalePatternMatcher::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleMatcher_S_LocalePatternMatcher(){
	}

}; // class LocaleMatcher_S_LocalePatternMatcher
}; // namespace android::icu::util

#endif //__android_icu_util_LocaleMatcher_S_LocalePatternMatcher__

