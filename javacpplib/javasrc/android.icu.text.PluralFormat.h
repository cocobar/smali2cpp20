#ifndef __android_icu_text_PluralFormat__
#define __android_icu_text_PluralFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\PluralFormat.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralFormat_S_PluralSelector.h"
#include "android.icu.text.PluralFormat_S_PluralSelectorAdapter.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.text.RbnfLenientScanner.h"
#include "android.icu.text.UFormat.h"
#include "android.icu.util.ULocale.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"

namespace android::icu::text{
class PluralFormat : public android::icu::text::UFormat {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<android::icu::text::MessagePattern> msgPattern;
	std::shared_ptr<android::icu::text::NumberFormat> numberFormat;
	double offset;
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> parsedValues;
	std::shared_ptr<java::lang::String> pattern;
	std::shared_ptr<android::icu::text::PluralRules> pluralRules;
	std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelectorAdapter> pluralRulesWrapper;
	std::shared_ptr<android::icu::util::ULocale> ulocale;
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<java::lang::Number> numberObject,double number);
	void virtual init(std::shared_ptr<android::icu::text::PluralRules> cVar0,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::NumberFormat> cVar1);
	void virtual readObject(std::shared_ptr<java::io::ObjectInputStream> in);
	void virtual resetPattern();
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<android::icu::text::PluralRules> _get0(std::shared_ptr<android::icu::text::PluralFormat> _this);
	static void static_cinit();
	PluralFormat();
	PluralFormat(std::shared_ptr<android::icu::text::PluralRules> rules);
	PluralFormat(std::shared_ptr<android::icu::text::PluralRules> rules,std::shared_ptr<java::lang::String> pattern);
	PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale);
	PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type);
	PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type,std::shared_ptr<java::lang::String> pattern);
	PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type,std::shared_ptr<java::lang::String> pattern,std::shared_ptr<android::icu::text::NumberFormat> numberFormat);
	PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<android::icu::text::PluralRules> rules);
	PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<android::icu::text::PluralRules> rules,std::shared_ptr<java::lang::String> pattern);
	PluralFormat(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<java::lang::String> pattern);
	PluralFormat(std::shared_ptr<java::lang::String> pattern);
	PluralFormat(std::shared_ptr<java::util::Locale> locale);
	PluralFormat(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::PluralRules_S_PluralType> type);
	PluralFormat(std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::text::PluralRules> rules);
	static int findSubMessage(std::shared_ptr<android::icu::text::MessagePattern> pattern,int cVar0,std::shared_ptr<android::icu::text::PluralFormat_S_PluralSelector> selector,std::shared_ptr<java::lang::Object> context,double number);
	void virtual applyPattern(std::shared_ptr<java::lang::String> pattern);
	bool virtual equals(std::shared_ptr<android::icu::text::PluralFormat> rhs);
	bool virtual equals(std::shared_ptr<java::lang::Object> rhs);
	std::shared_ptr<java::lang::String> virtual format(double number);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::lang::Object> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	int virtual hashCode();
	std::shared_ptr<java::lang::Number> virtual parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition);
	std::shared_ptr<java::lang::Object> virtual parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos);
	std::shared_ptr<java::lang::String> virtual parseType(std::shared_ptr<java::lang::String> source,std::shared_ptr<android::icu::text::RbnfLenientScanner> scanner,std::shared_ptr<java::text::FieldPosition> pos);
	void virtual setLocale(std::shared_ptr<android::icu::util::ULocale> cVar1);
	void virtual setNumberFormat(std::shared_ptr<android::icu::text::NumberFormat> format);
	std::shared_ptr<java::lang::String> virtual toPattern();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::PluralFormat::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PluralFormat(){
	}

}; // class PluralFormat
}; // namespace android::icu::text

#endif //__android_icu_text_PluralFormat__

