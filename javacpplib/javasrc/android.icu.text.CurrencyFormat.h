#ifndef __android_icu_text_CurrencyFormat__
#define __android_icu_text_CurrencyFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyFormat.smali
#include "java2ctype.h"
#include "android.icu.text.MeasureFormat_S_FormatWidth.h"
#include "android.icu.text.MeasureFormat.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.util.CurrencyAmount.h"
#include "android.icu.util.Measure.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"

namespace android::icu::text{
class CurrencyFormat : public android::icu::text::MeasureFormat {
protected:
private:
	std::shared_ptr<android::icu::text::NumberFormat> fmt;
	std::shared_ptr<android::icu::text::MeasureFormat> mf;
	std::shared_ptr<java::lang::Object> virtual readResolve();
	std::shared_ptr<java::lang::Object> virtual writeReplace();
public:
	static long long serialVersionUID;
	CurrencyFormat(std::shared_ptr<android::icu::util::ULocale> locale);
	std::shared_ptr<java::lang::Object> virtual clone();
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuilder> virtual formatMeasures(std::shared_ptr<java::lang::StringBuilder> appendTo,std::shared_ptr<java::text::FieldPosition> fieldPosition,std::shared_ptr<std::vector<android::icu::util::Measure>> measures);
	std::shared_ptr<android::icu::text::NumberFormat> virtual getNumberFormat();
	std::shared_ptr<android::icu::text::MeasureFormat_S_FormatWidth> virtual getWidth();
	std::shared_ptr<android::icu::util::CurrencyAmount> virtual parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> pos);
public:
	virtual ~CurrencyFormat(){
	}

}; // class CurrencyFormat
}; // namespace android::icu::text

#endif //__android_icu_text_CurrencyFormat__

