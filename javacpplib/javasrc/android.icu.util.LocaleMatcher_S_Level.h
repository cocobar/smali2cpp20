#ifndef __android_icu_util_LocaleMatcher_S_Level__
#define __android_icu_util_LocaleMatcher_S_Level__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleMatcher$Level.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::util{
class LocaleMatcher_S_Level : public java::lang::Enum<android::icu::util::LocaleMatcher_S_Level> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::util::LocaleMatcher_S_Level>> _S_VALUES;
	LocaleMatcher_S_Level(std::shared_ptr<java::lang::String> var0,int var1,double d);
public:
	static std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> language;
	static std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> region;
	static std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> script;
	double worst;
	static void static_cinit();
	static std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::util::LocaleMatcher_S_Level> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::util::LocaleMatcher_S_Level::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~LocaleMatcher_S_Level(){
	}

}; // class LocaleMatcher_S_Level
}; // namespace android::icu::util

#endif //__android_icu_util_LocaleMatcher_S_Level__

