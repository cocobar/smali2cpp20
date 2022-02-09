#ifndef __android_icu_text_CompactDecimalDataCache_S_CompactDecimalDataSink__
#define __android_icu_text_CompactDecimalDataCache_S_CompactDecimalDataSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalDataCache$CompactDecimalDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.CompactDecimalDataCache_S_DataBundle.h"
#include "android.icu.util.ULocale.h"

namespace android::icu::text{
class CompactDecimalDataCache_S_CompactDecimalDataSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> dataBundle;
	bool isFallback;
	bool isLatin;
	std::shared_ptr<android::icu::util::ULocale> locale;
public:
	static bool _set0(std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink> _this,bool _value);
	static bool _set1(std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_CompactDecimalDataSink> _this,bool _value);
	CompactDecimalDataCache_S_CompactDecimalDataSink(std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> dataBundle,std::shared_ptr<android::icu::util::ULocale> locale);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool isRoot);
public:
	virtual ~CompactDecimalDataCache_S_CompactDecimalDataSink(){
	}

}; // class CompactDecimalDataCache_S_CompactDecimalDataSink
}; // namespace android::icu::text

#endif //__android_icu_text_CompactDecimalDataCache_S_CompactDecimalDataSink__

