#ifndef __android_icu_text_MeasureFormat_S_ImmutableNumberFormat__
#define __android_icu_text_MeasureFormat_S_ImmutableNumberFormat__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$ImmutableNumberFormat.smali
#include "java2ctype.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.util.CurrencyAmount.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.FieldPosition.h"

namespace android::icu::text{
class MeasureFormat_S_ImmutableNumberFormat : public java::lang::Object {
protected:
private:
	std::shared_ptr<android::icu::text::NumberFormat> nf;
public:
	static std::shared_ptr<android::icu::text::NumberFormat> _get0(std::shared_ptr<android::icu::text::MeasureFormat_S_ImmutableNumberFormat> _this);
	MeasureFormat_S_ImmutableNumberFormat(std::shared_ptr<android::icu::text::NumberFormat> nf);
	std::shared_ptr<java::lang::String> virtual format(std::shared_ptr<java::lang::Number> number);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<android::icu::util::CurrencyAmount> n,std::shared_ptr<java::lang::StringBuffer> buffer,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<java::lang::StringBuffer> virtual format(std::shared_ptr<java::lang::Number> n,std::shared_ptr<java::lang::StringBuffer> buffer,std::shared_ptr<java::text::FieldPosition> pos);
	std::shared_ptr<android::icu::text::NumberFormat> virtual get();
	std::shared_ptr<java::lang::String> virtual getPrefix(bool positive);
	std::shared_ptr<java::lang::String> virtual getSuffix(bool positive);
public:
	virtual ~MeasureFormat_S_ImmutableNumberFormat(){
	}

}; // class MeasureFormat_S_ImmutableNumberFormat
}; // namespace android::icu::text

#endif //__android_icu_text_MeasureFormat_S_ImmutableNumberFormat__

