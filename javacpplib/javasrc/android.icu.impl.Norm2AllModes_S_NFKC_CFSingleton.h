#ifndef __android_icu_impl_Norm2AllModes_S_NFKC_CFSingleton__
#define __android_icu_impl_Norm2AllModes_S_NFKC_CFSingleton__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$NFKC_CFSingleton.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_Norm2AllModesSingleton.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class Norm2AllModes_S_NFKC_CFSingleton : public java::lang::Object {
protected:
private:
	static std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> INSTANCE;
	Norm2AllModes_S_NFKC_CFSingleton();
public:
	static std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> _get0();
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::Norm2AllModes_S_NFKC_CFSingleton::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Norm2AllModes_S_NFKC_CFSingleton(){
	}

}; // class Norm2AllModes_S_NFKC_CFSingleton
}; // namespace android::icu::impl

#endif //__android_icu_impl_Norm2AllModes_S_NFKC_CFSingleton__

