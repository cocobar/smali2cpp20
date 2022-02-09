#ifndef __android_icu_impl_CurrencyData__
#define __android_icu_impl_CurrencyData__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfoProvider.h"
#include "java.lang.Object.h"

namespace android::icu::impl{
class CurrencyData : public java::lang::Object {
protected:
private:
	CurrencyData();
public:
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfoProvider> provider;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CurrencyData::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CurrencyData(){
	}

}; // class CurrencyData
}; // namespace android::icu::impl

#endif //__android_icu_impl_CurrencyData__

