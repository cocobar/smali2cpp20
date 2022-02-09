#ifndef __android_icu_text_ScientificNumberFormatter__
#define __android_icu_text_ScientificNumberFormatter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\ScientificNumberFormatter.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.ScientificNumberFormatter_S_Style.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class ScientificNumberFormatter : public java::lang::Object {
protected:
private:
	static std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_Style> SUPER_SCRIPT;
	std::shared_ptr<android::icu::text::DecimalFormat> fmt;
	std::shared_ptr<java::lang::String> preExponent;
	std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_Style> style;
	ScientificNumberFormatter(std::shared_ptr<android::icu::text::DecimalFormat> decimalFormat,std::shared_ptr<java::lang::String> preExponent,std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_Style> style);
	static std::shared_ptr<android::icu::text::ScientificNumberFormatter> getInstance(std::shared_ptr<android::icu::text::DecimalFormat> decimalFormat,std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_Style> style);
	static std::shared_ptr<android::icu::text::ScientificNumberFormatter> getInstanceForLocale(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::ScientificNumberFormatter_S_Style> style);
	static std::shared_ptr<java::lang::String> getPreExponent(std::shared_ptr<android::icu::text::DecimalFormatSymbols> dfs);
public:
	static void static_cinit();
	static std::shared_ptr<android::icu::text::ScientificNumberFormatter> getMarkupInstance(std::shared_ptr<android::icu::text::DecimalFormat> df,std::shared_ptr<java::lang::String> beginMarkup,std::shared_ptr<java::lang::String> endMarkup);
	static std::shared_ptr<android::icu::text::ScientificNumberFormatter> getMarkupInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> beginMarkup,std::shared_ptr<java::lang::String> endMarkup);
	static std::shared_ptr<android::icu::text::ScientificNumberFormatter> getSuperscriptInstance(std::shared_ptr<android::icu::text::DecimalFormat> df);
	static std::shared_ptr<android::icu::text::ScientificNumberFormatter> getSuperscriptInstance(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<java::lang::Object> number);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::ScientificNumberFormatter::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ScientificNumberFormatter(){
	}

}; // class ScientificNumberFormatter
}; // namespace android::icu::text

#endif //__android_icu_text_ScientificNumberFormatter__

