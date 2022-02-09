#ifndef __android_icu_text_CurrencyMetaInfo__
#define __android_icu_text_CurrencyMetaInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyMetaInfo.smali
#include "java2ctype.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyDigits.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyFilter.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyInfo.h"
#include "android.icu.util.Currency_S_CurrencyUsage.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::text{
class CurrencyMetaInfo : public java::lang::Object {
protected:
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> defaultDigits;
	CurrencyMetaInfo();
private:
	static bool hasData;
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo> impl;
	static std::shared_ptr<java::lang::String> dateString(long long date);
	static std::shared_ptr<java::lang::String> debugString(std::shared_ptr<java::lang::Object> o);
public:
	static std::shared_ptr<java::lang::String> _wrap0(std::shared_ptr<java::lang::Object> o);
	static void static_cinit();
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo> getInstance();
	static std::shared_ptr<android::icu::text::CurrencyMetaInfo> getInstance(bool noSubstitute);
	static bool hasData();
	std::shared_ptr<java::util::List<java::lang::String>> virtual currencies(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter);
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> virtual currencyDigits(std::shared_ptr<java::lang::String> isoCode);
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> virtual currencyDigits(std::shared_ptr<java::lang::String> isoCode,std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> currencyUsage);
	std::shared_ptr<java::util::List<android::icu::text::CurrencyMetaInfo_S_CurrencyInfo>> virtual currencyInfo(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter);
	std::shared_ptr<java::util::List<java::lang::String>> virtual regions(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::CurrencyMetaInfo::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CurrencyMetaInfo(){
	}

}; // class CurrencyMetaInfo
}; // namespace android::icu::text

#endif //__android_icu_text_CurrencyMetaInfo__

