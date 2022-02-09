#ifndef __android_icu_text_CompactDecimalDataCache_S_Data__
#define __android_icu_text_CompactDecimalDataCache_S_Data__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalDataCache$Data.smali
#include "java2ctype.h"
#include "android.icu.text.DecimalFormat_S_Unit.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::text{
class CompactDecimalDataCache_S_Data : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<long long[]> divisors;
	bool fromFallback;
	std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> units;
	CompactDecimalDataCache_S_Data(std::shared_ptr<long long[]> divisors,std::shared_ptr<java::util::Map<java::lang::String,std::vector<android::icu::text::DecimalFormat_S_Unit>>> units);
	bool virtual isEmpty();
public:
	virtual ~CompactDecimalDataCache_S_Data(){
	}

}; // class CompactDecimalDataCache_S_Data
}; // namespace android::icu::text

#endif //__android_icu_text_CompactDecimalDataCache_S_Data__

