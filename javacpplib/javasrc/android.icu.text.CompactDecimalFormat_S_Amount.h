#ifndef __android_icu_text_CompactDecimalFormat_S_Amount__
#define __android_icu_text_CompactDecimalFormat_S_Amount__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalFormat$Amount.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormat_S_Unit.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class CompactDecimalFormat_S_Amount : public java::lang::Object {
protected:
private:
	double qty;
	std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> unit;
public:
	CompactDecimalFormat_S_Amount(double qty,std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> unit);
	double virtual getQty();
	std::shared_ptr<android::icu::text::DecimalFormat_S_Unit> virtual getUnit();
public:
	virtual ~CompactDecimalFormat_S_Amount(){
	}

}; // class CompactDecimalFormat_S_Amount
}; // namespace android::icu::text

#endif //__android_icu_text_CompactDecimalFormat_S_Amount__

