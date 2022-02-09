#ifndef __android_icu_text_RelativeDateTimeFormatter_S_RelDateTimeDataSink__
#define __android_icu_text_RelativeDateTimeFormatter_S_RelDateTimeDataSink__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$RelDateTimeDataSink.smali
#include "java2ctype.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Sink.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_AbsoluteUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Direction.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Style.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.EnumMap.h"

namespace android::icu::text{
class RelativeDateTimeFormatter_S_RelDateTimeDataSink : public android::icu::impl::UResource_S_Sink {
protected:
private:
	static std::shared_ptr<int[]> _android_icu_text_RelativeDateTimeFormatter_S_StyleSwitchesValues;
	static int _getandroid_icu_text_RelativeDateTimeFormatter_S_StyleSwitchesValues();
	void virtual handleAlias(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
	void virtual handlePlainDirection(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> virtual styleFromAlias(std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> virtual styleFromKey(std::shared_ptr<android::icu::impl::UResource_S_Key> key);
	static int styleSuffixLength(std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style);
public:
	int pastFutureIndex;
	std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Direction,java::lang::String>>>> qualitativeUnitMap;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Style> style;
	std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit,std::vector<std::vector<java::lang::String>>>>> styleRelUnitPatterns;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_RelDateTimeDataSink_S_DateTimeUnit> unit;
	RelativeDateTimeFormatter_S_RelDateTimeDataSink();
	void virtual consumeTableRelative(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual consumeTableRelativeTime(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual consumeTimeDetail(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual consumeTimeUnit(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value);
	void virtual put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback);
public:
	virtual ~RelativeDateTimeFormatter_S_RelDateTimeDataSink(){
	}

}; // class RelativeDateTimeFormatter_S_RelDateTimeDataSink
}; // namespace android::icu::text

#endif //__android_icu_text_RelativeDateTimeFormatter_S_RelDateTimeDataSink__

