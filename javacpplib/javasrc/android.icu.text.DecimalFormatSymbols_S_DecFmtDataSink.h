#ifndef __android_icu_text_DecimalFormatSymbols_S_DecFmtDataSink__
#define __android_icu_text_DecimalFormatSymbols_S_DecFmtDataSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormatSymbols$DecFmtDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DecimalFormatSymbols_S_DecFmtDataSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	std::shared_ptr<std::vector<java::lang::String>> numberElements;
public:
	DecimalFormatSymbols_S_DecFmtDataSink(std::shared_ptr<std::vector<java::lang::String>> numberElements);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~DecimalFormatSymbols_S_DecFmtDataSink(){
	}

}; // class DecimalFormatSymbols_S_DecFmtDataSink
}; // namespace android::icu::text

#endif //__android_icu_text_DecimalFormatSymbols_S_DecFmtDataSink__

