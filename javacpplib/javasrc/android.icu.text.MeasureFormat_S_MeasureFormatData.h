#ifndef __android_icu_text_MeasureFormat_S_MeasureFormatData__
#define __android_icu_text_MeasureFormat_S_MeasureFormatData__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$MeasureFormatData.smali
#include "java2ctype.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.EnumMap.h"
#include "java.util.Map.h"

namespace android::icu::text{
class MeasureFormat_S_MeasureFormatData : public java::lang::Object {
protected:
private:
	MeasureFormat_S_MeasureFormatData();
public:
	static int PATTERN_COUNT;
	static int PER_UNIT_INDEX;
	std::shared_ptr<java::util::EnumMap<android::icu::text::MeasureFormat_S_FormatWidth,java::lang::String>> styleToPerPattern;
	std::shared_ptr<java::util::Map<android::icu::util::MeasureUnit,java::util::EnumMap<android::icu::text::MeasureFormat_S_FormatWidth,java::lang::String>>> unitToStyleToDnam;
	std::shared_ptr<java::util::Map<android::icu::util::MeasureUnit,java::util::EnumMap<android::icu::text::MeasureFormat_S_FormatWidth,std::vector<java::lang::String>>>> unitToStyleToPatterns;
	std::shared_ptr<std::vector<android::icu::text::MeasureFormat_S_FormatWidth>> widthFallback;
	static void static_cinit();
	MeasureFormat_S_MeasureFormatData(std::shared_ptr<android::icu::text::MeasureFormat_S_MeasureFormatData> _this0);
	bool virtual hasPerFormatter(std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> width);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::MeasureFormat_S_MeasureFormatData::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MeasureFormat_S_MeasureFormatData(){
	}

}; // class MeasureFormat_S_MeasureFormatData
}; // namespace android::icu::text

#endif //__android_icu_text_MeasureFormat_S_MeasureFormatData__

