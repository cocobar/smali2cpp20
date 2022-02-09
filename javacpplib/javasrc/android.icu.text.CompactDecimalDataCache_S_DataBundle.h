#ifndef __android_icu_text_CompactDecimalDataCache_S_DataBundle__
#define __android_icu_text_CompactDecimalDataCache_S_DataBundle__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CompactDecimalDataCache$DataBundle.smali
#include "java2ctype.h"
#include "android.icu.text.CompactDecimalDataCache_S_Data.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class CompactDecimalDataCache_S_DataBundle : public java::lang::Object {
protected:
private:
	CompactDecimalDataCache_S_DataBundle(std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> shortData,std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> longData,std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> shortCurrencyData);
	static std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> createEmpty();
public:
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> longData;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> shortCurrencyData;
	std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_Data> shortData;
	static std::shared_ptr<android::icu::text::CompactDecimalDataCache_S_DataBundle> _wrap0();
public:
	virtual ~CompactDecimalDataCache_S_DataBundle(){
	}

}; // class CompactDecimalDataCache_S_DataBundle
}; // namespace android::icu::text

#endif //__android_icu_text_CompactDecimalDataCache_S_DataBundle__

