#ifndef __android_icu_util_MeasureUnit_S_CurrencyNumericCodeSink__
#define __android_icu_util_MeasureUnit_S_CurrencyNumericCodeSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\MeasureUnit$CurrencyNumericCodeSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"

namespace android::icu::util{
class MeasureUnit_S_CurrencyNumericCodeSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	MeasureUnit_S_CurrencyNumericCodeSink();
public:
	MeasureUnit_S_CurrencyNumericCodeSink(std::shared_ptr<android::icu::util::MeasureUnit_S_CurrencyNumericCodeSink> _this0);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~MeasureUnit_S_CurrencyNumericCodeSink(){
	}

}; // class MeasureUnit_S_CurrencyNumericCodeSink
}; // namespace android::icu::util

#endif //__android_icu_util_MeasureUnit_S_CurrencyNumericCodeSink__

