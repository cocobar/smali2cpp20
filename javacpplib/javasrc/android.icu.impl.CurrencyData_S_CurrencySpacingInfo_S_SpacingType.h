#ifndef __android_icu_impl_CurrencyData_S_CurrencySpacingInfo_S_SpacingType__
#define __android_icu_impl_CurrencyData_S_CurrencySpacingInfo_S_SpacingType__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$CurrencySpacingInfo$SpacingType.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class CurrencyData_S_CurrencySpacingInfo_S_SpacingType : public java::lang::Enum<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType>> _S_VALUES;
	CurrencyData_S_CurrencySpacingInfo_S_SpacingType(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> AFTER;
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> BEFORE;
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> COUNT;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CurrencyData_S_CurrencySpacingInfo_S_SpacingType(){
	}

}; // class CurrencyData_S_CurrencySpacingInfo_S_SpacingType
}; // namespace android::icu::impl

#endif //__android_icu_impl_CurrencyData_S_CurrencySpacingInfo_S_SpacingType__

