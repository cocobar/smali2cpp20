#ifndef __android_icu_impl_CacheValue_S_Strength__
#define __android_icu_impl_CacheValue_S_Strength__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CacheValue$Strength.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class CacheValue_S_Strength : public java::lang::Enum<android::icu::impl::CacheValue_S_Strength> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::CacheValue_S_Strength>> _S_VALUES;
	CacheValue_S_Strength(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::CacheValue_S_Strength> SOFT;
	static std::shared_ptr<android::icu::impl::CacheValue_S_Strength> STRONG;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::CacheValue_S_Strength> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::CacheValue_S_Strength> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CacheValue_S_Strength::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CacheValue_S_Strength(){
	}

}; // class CacheValue_S_Strength
}; // namespace android::icu::impl

#endif //__android_icu_impl_CacheValue_S_Strength__

