#ifndef __android_icu_util_MeasureUnit_S_MeasureUnitSink__
#define __android_icu_util_MeasureUnit_S_MeasureUnitSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\MeasureUnit$MeasureUnitSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"

namespace android::icu::util{
class MeasureUnit_S_MeasureUnitSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	MeasureUnit_S_MeasureUnitSink();
public:
	MeasureUnit_S_MeasureUnitSink(std::shared_ptr<android::icu::util::MeasureUnit_S_MeasureUnitSink> _this0);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~MeasureUnit_S_MeasureUnitSink(){
	}

}; // class MeasureUnit_S_MeasureUnitSink
}; // namespace android::icu::util

#endif //__android_icu_util_MeasureUnit_S_MeasureUnitSink__

