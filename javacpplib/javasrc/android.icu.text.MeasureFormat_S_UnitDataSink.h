#ifndef __android_icu_text_MeasureFormat_S_UnitDataSink__
#define __android_icu_text_MeasureFormat_S_UnitDataSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$UnitDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "android.icu.text.MeasureFormat_S_MeasureFormatData.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

namespace android::icu::text{
class MeasureFormat_S_UnitDataSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
public:
	std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> cacheData;
	std::shared_ptr<std::vector<java::lang::String>> patterns;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::lang::String> type;
	std::shared_ptr<android::icu::util::MeasureUnit> unit;
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width;
	MeasureFormat_S_UnitDataSink(std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> outputData);
	static std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> widthFromAlias(std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	static std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> widthFromKey(std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	void virtual consumeAlias(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual consumeCompoundPattern(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual consumePattern(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual consumeSubtypeTable(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual consumeTable(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual consumeUnitTypesTable(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
	void virtual setDnamIfAbsent(std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual setFormatterIfAbsent(int index,std::shared_ptr<android::icu::impl::UResource_S_Value> value,int minPlaceholders);
public:
	virtual ~MeasureFormat_S_UnitDataSink(){
	}

}; // class MeasureFormat_S_UnitDataSink
}; // namespace android::icu::text

#endif //__android_icu_text_MeasureFormat_S_UnitDataSink__

