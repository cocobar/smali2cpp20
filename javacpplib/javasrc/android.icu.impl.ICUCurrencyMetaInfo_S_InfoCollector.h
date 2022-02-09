#ifndef __android_icu_impl_ICUCurrencyMetaInfo_S_InfoCollector__
#define __android_icu_impl_ICUCurrencyMetaInfo_S_InfoCollector__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyMetaInfo$InfoCollector.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCurrencyMetaInfo_S_Collector.h"
#include "android.icu.text.CurrencyMetaInfo_S_CurrencyInfo.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::impl{
class ICUCurrencyMetaInfo_S_InfoCollector : public android::icu::impl::ICUCurrencyMetaInfo_S_Collector<android::icu::text::CurrencyMetaInfo_S_CurrencyInfo> {
protected:
private:
	std::shared_ptr<java::util::List<android::icu::text::CurrencyMetaInfo_S_CurrencyInfo>> result;
	ICUCurrencyMetaInfo_S_InfoCollector();
public:
	ICUCurrencyMetaInfo_S_InfoCollector(std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_InfoCollector> _this0);
	void virtual collect(std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> currency,long long from,long long to,int priority,bool tender);
	int virtual collects();
	std::shared_ptr<java::util::List<android::icu::text::CurrencyMetaInfo_S_CurrencyInfo>> virtual getList();
public:
	virtual ~ICUCurrencyMetaInfo_S_InfoCollector(){
	}

}; // class ICUCurrencyMetaInfo_S_InfoCollector
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUCurrencyMetaInfo_S_InfoCollector__

