#ifndef __android_icu_text_MeasureFormat_S_FormatWidth__
#define __android_icu_text_MeasureFormat_S_FormatWidth__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$FormatWidth.smali
#include "java2ctype.h"
#include "android.icu.text.ListFormatter_S_Style.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MeasureFormat_S_FormatWidth : public java::lang::Enum<android::icu::text::MeasureFormat_S_FormatWidth> {
protected:
private:
	static std::shared_ptr<std::vector<android::icu::text::MeasureFormat_S_FormatWidth>> _S_VALUES;
	static int INDEX_COUNT;
	int currencyStyle;
	std::shared_ptr<android::icu::text::ListFormatter_S_Style> listFormatterStyle;
	MeasureFormat_S_FormatWidth(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<android::icu::text::ListFormatter_S_Style> style,int currencyStyle);
public:
	static std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> NARROW;
	static std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> NUMERIC;
	static std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> SHORT;
	static std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> WIDE;
	static void static_cinit();
	static std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> values();
	int virtual getCurrencyStyle();
	std::shared_ptr<android::icu::text::ListFormatter_S_Style> virtual getListFormatterStyle();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::MeasureFormat_S_FormatWidth::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~MeasureFormat_S_FormatWidth(){
	}

}; // class MeasureFormat_S_FormatWidth
}; // namespace android::icu::text

#endif //__android_icu_text_MeasureFormat_S_FormatWidth__

