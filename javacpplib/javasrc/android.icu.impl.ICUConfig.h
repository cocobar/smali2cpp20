#ifndef __android_icu_impl_ICUConfig__
#define __android_icu_impl_ICUConfig__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUConfig.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Properties.h"

namespace android::icu::impl{
class ICUConfig : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::util::Properties> CONFIG_PROPS;
public:
	static std::shared_ptr<java::lang::String> CONFIG_PROPS_FILE;
	static void static_cinit();
	ICUConfig();
	static std::shared_ptr<java::lang::String> get(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<java::lang::String> get(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> def);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::ICUConfig::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ICUConfig(){
	}

}; // class ICUConfig
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUConfig__

