#ifndef __android_icu_impl_ICUCurrencyMetaInfo_S_CurrencyCollector__
#define __android_icu_impl_ICUCurrencyMetaInfo_S_CurrencyCollector__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyMetaInfo$CurrencyCollector.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCurrencyMetaInfo_S_Collector.h"
#include "android.icu.impl.ICUCurrencyMetaInfo_S_UniqueList.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::impl{
class ICUCurrencyMetaInfo_S_CurrencyCollector : public android::icu::impl::ICUCurrencyMetaInfo_S_Collector<java::lang::String> {
protected:
private:
	std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_UniqueList<java::lang::String>> result;
	ICUCurrencyMetaInfo_S_CurrencyCollector();
public:
	ICUCurrencyMetaInfo_S_CurrencyCollector(std::shared_ptr<android::icu::impl::ICUCurrencyMetaInfo_S_CurrencyCollector> _this0);
	void virtual collect(std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> currency,long long from,long long to,int priority,bool tender);
	int virtual collects();
	std::shared_ptr<java::util::List<java::lang::String>> virtual getList();
public:
	virtual ~ICUCurrencyMetaInfo_S_CurrencyCollector(){
	}

}; // class ICUCurrencyMetaInfo_S_CurrencyCollector
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUCurrencyMetaInfo_S_CurrencyCollector__

