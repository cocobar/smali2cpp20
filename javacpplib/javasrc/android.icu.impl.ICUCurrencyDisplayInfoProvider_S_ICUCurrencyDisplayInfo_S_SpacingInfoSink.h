#ifndef __android_icu_impl_ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink__
#define __android_icu_impl_ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyDisplayInfoProvider$ICUCurrencyDisplayInfo$SpacingInfoSink.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo.h"
#include "android.icu.impl.ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"

namespace android::icu::impl{
class ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink(std::shared_ptr<android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo> this_S_1);
public:
	bool hasAfterCurrency;
	bool hasBeforeCurrency;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> spacingInfo;
	std::shared_ptr<android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo> this_S_1;
	ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink(std::shared_ptr<android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo> this_S_1,std::shared_ptr<android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink> _this1);
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> virtual getSpacingInfo(bool fallback);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink(){
	}

}; // class ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink__

