#ifndef __android_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData__
#define __android_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$RelativeDateTimeFormatterData.smali
#include "java2ctype.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_AbsoluteUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Direction.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_RelativeUnit.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Style.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.EnumMap.h"

namespace android::icu::text{
class RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> dateTimePattern;
	std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Direction,java::lang::String>>>> qualitativeUnitMap;
	std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit,std::vector<std::vector<java::lang::String>>>>> relUnitPatternMap;
	RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData(std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_AbsoluteUnit,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Direction,java::lang::String>>>> qualitativeUnitMap,std::shared_ptr<java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_Style,java::util::EnumMap<android::icu::text::RelativeDateTimeFormatter_S_RelativeUnit,std::vector<std::vector<java::lang::String>>>>> relUnitPatternMap,std::shared_ptr<java::lang::String> dateTimePattern);
public:
	virtual ~RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData(){
	}

}; // class RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData
}; // namespace android::icu::text

#endif //__android_icu_text_RelativeDateTimeFormatter_S_RelativeDateTimeFormatterData__

