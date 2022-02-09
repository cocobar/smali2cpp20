#ifndef __android_icu_text_QuantityFormatter__
#define __android_icu_text_QuantityFormatter__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\QuantityFormatter.smali
#include "java2ctype.h"
#include "android.icu.impl.StandardPlural.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.text.SimpleFormatter.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.FieldPosition.h"

namespace android::icu::text{
class QuantityFormatter : public java::lang::Object {
protected:
private:
	std::shared_ptr<std::vector<android::icu::text::SimpleFormatter>> templates;
public:
	static bool _assertionsDisabled;
	static void static_cinit();
	QuantityFormatter();
	static std::shared_ptr<java::lang::StringBuilder> format(std::shared_ptr<java::lang::String> compiledPattern,std::shared_ptr<java::lang::CharSequence> value,std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> pos);
	static std::shared_ptr<android::icu::impl::StandardPlural> selectPlural(double number,std::shared_ptr<android::icu::text::NumberFormat> numberFormat,std::shared_ptr<android::icu::text::PluralRules> rules);
	static std::shared_ptr<android::icu::impl::StandardPlural> selectPlural(std::shared_ptr<java::lang::Number> number,std::shared_ptr<android::icu::text::NumberFormat> fmt,std::shared_ptr<android::icu::text::PluralRules> rules,std::shared_ptr<java::lang::StringBuffer> formattedNumber,std::shared_ptr<java::text::FieldPosition> pos);
	void virtual addIfAbsent(std::shared_ptr<java::lang::CharSequence> variant,std::shared_ptr<java::lang::String> template);
	std::shared_ptr<java::lang::String> virtual format(double number,std::shared_ptr<android::icu::text::NumberFormat> numberFormat,std::shared_ptr<android::icu::text::PluralRules> pluralRules);
	std::shared_ptr<android::icu::text::SimpleFormatter> virtual getByVariant(std::shared_ptr<java::lang::CharSequence> variant);
	bool virtual isValid();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::QuantityFormatter::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~QuantityFormatter(){
	}

}; // class QuantityFormatter
}; // namespace android::icu::text

#endif //__android_icu_text_QuantityFormatter__

