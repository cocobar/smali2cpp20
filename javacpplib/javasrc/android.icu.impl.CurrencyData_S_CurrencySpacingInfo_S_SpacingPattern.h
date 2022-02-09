#ifndef __android_icu_impl_CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern__
#define __android_icu_impl_CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$CurrencySpacingInfo$SpacingPattern.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern : public java::lang::Enum<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern>> _S_VALUES;
	CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern(std::shared_ptr<java::lang::String> var0,int var1);
	CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern(std::shared_ptr<java::lang::String> var0,int var1,int value);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> COUNT;
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> CURRENCY_MATCH;
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> INSERT_BETWEEN;
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> SURROUNDING_MATCH;
	static void static_cinit();
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern(){
	}

}; // class CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern
}; // namespace android::icu::impl

#endif //__android_icu_impl_CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern__

