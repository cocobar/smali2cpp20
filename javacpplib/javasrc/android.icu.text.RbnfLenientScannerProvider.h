#ifndef __android_icu_text_RbnfLenientScannerProvider__
#define __android_icu_text_RbnfLenientScannerProvider__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RbnfLenientScannerProvider.smali
#include "java2ctype.h"
#include "android.icu.text.RbnfLenientScanner.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class RbnfLenientScannerProvider : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::text::RbnfLenientScanner> get(std::shared_ptr<android::icu::util::ULocale> var0,std::shared_ptr<java::lang::String> var1);
	RbnfLenientScannerProvider(){ };
	virtual ~RbnfLenientScannerProvider(){ };

}; // class RbnfLenientScannerProvider
}; // namespace android::icu::text

#endif //__android_icu_text_RbnfLenientScannerProvider__

