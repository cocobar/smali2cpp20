#ifndef __android_icu_impl_ICUDebug__
#define __android_icu_impl_ICUDebug__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUDebug.smali
#include "java2ctype.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUDebug : public java::lang::Object {
protected:
private:
	static bool debug;
	static bool help;
	static std::shared_ptr<java::lang::String> params;
public:
	static bool isJDK14OrHigher;
	static std::shared_ptr<android::icu::util::VersionInfo> javaVersion;
	static std::shared_ptr<java::lang::String> javaVersionString;
	static void static_cinit();
	ICUDebug();
	static bool enabled();
	static bool enabled(std::shared_ptr<java::lang::String> arg);
	static std::shared_ptr<android::icu::util::VersionInfo> getInstanceLenient(std::shared_ptr<java::lang::String> s);
	static std::shared_ptr<java::lang::String> value(std::shared_ptr<java::lang::String> arg);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ICUDebug::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ICUDebug(){
	}

}; // class ICUDebug
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUDebug__

