#ifndef __android_icu_impl_CurrencyData_S_CurrencySpacingInfo__
#define __android_icu_impl_CurrencyData_S_CurrencySpacingInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$CurrencySpacingInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo_S_SpacingType.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class CurrencyData_S_CurrencySpacingInfo : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> DEFAULT_CTX_MATCH;
	static std::shared_ptr<java::lang::String> DEFAULT_CUR_MATCH;
	static std::shared_ptr<java::lang::String> DEFAULT_INSERT;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> symbols;
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> DEFAULT;
	static void static_cinit();
	CurrencyData_S_CurrencySpacingInfo();
	CurrencyData_S_CurrencySpacingInfo(std::shared_ptr<std::vector<java::lang::String>> strings);
	std::shared_ptr<java::lang::String> virtual getAfterSymbols();
	std::shared_ptr<java::lang::String> virtual getBeforeSymbols();
	void virtual setSymbolIfNull(std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> type,std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> pattern,std::shared_ptr<java::lang::String> value);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::CurrencyData_S_CurrencySpacingInfo::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CurrencyData_S_CurrencySpacingInfo(){
	}

}; // class CurrencyData_S_CurrencySpacingInfo
}; // namespace android::icu::impl

#endif //__android_icu_impl_CurrencyData_S_CurrencySpacingInfo__

