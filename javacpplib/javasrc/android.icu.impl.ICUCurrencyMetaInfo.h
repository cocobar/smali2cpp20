#ifndef __android_icu_impl_ICUCurrencyMetaInfo__
#define __android_icu_impl_ICUCurrencyMetaInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyMetaInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCurrencyMetaInfo_S_Collector.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyDigits.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyFilter.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyInfo.h"
#include "android.icu.text.CurrencyMetaInfo.h"
#include "android.icu.util.Currency_S_CurrencyUsage.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::impl{
class ICUCurrencyMetaInfo : public android::icu::text::CurrencyMetaInfo {
protected:
private:
	static int Currency;
	static int Date;
	static int Everything;
	static long long MASK;
	static int Region;
	static int Tender;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> digitInfo;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> regionInfo;
	std::shared_ptr<java::util::List<T>> virtual collect(std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_Collector<T>> collector,std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> cVar0);
	void virtual collectRegion(std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_Collector<T>> collector,std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter,int needed,std::shared_ptr<android::icu::impl::ICUResourceBundle> b);
	long long virtual getDate(std::shared_ptr<android::icu::impl::ICUResourceBundle> b,long long defaultValue,bool endOfDay);
public:
	ICUCurrencyMetaInfo();
	std::shared_ptr<java::util::List<java::lang::String>> virtual currencies(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter);
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> virtual currencyDigits(std::shared_ptr<java::lang::String> isoCode);
	std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyDigits> virtual currencyDigits(std::shared_ptr<java::lang::String> isoCode,std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> currencyPurpose);
	std::shared_ptr<java::util::List<android::icu::text::CurrencyMetaInfo_S_CurrencyInfo>> virtual currencyInfo(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter);
	std::shared_ptr<java::util::List<java::lang::String>> virtual regions(std::shared_ptr<android::icu::text::CurrencyMetaInfo_S_CurrencyFilter> filter);
public:
	virtual ~ICUCurrencyMetaInfo(){
	}

}; // class ICUCurrencyMetaInfo
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUCurrencyMetaInfo__

