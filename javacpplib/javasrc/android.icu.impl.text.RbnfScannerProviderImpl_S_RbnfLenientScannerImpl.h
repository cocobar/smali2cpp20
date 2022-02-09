#ifndef __android_icu_impl_text_RbnfScannerProviderImpl_S_RbnfLenientScannerImpl__
#define __android_icu_impl_text_RbnfScannerProviderImpl_S_RbnfLenientScannerImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\text\RbnfScannerProviderImpl$RbnfLenientScannerImpl.smali
#include "java2ctype.h"
#include "android.icu.text.RbnfLenientScanner.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "java.lang.String.h"

namespace android::icu::impl::text{
class RbnfScannerProviderImpl_S_RbnfLenientScannerImpl : public android::icu::text::RbnfLenientScanner {
protected:
private:
	std::shared_ptr<android::icu::text::RuleBasedCollator> collator;
	RbnfScannerProviderImpl_S_RbnfLenientScannerImpl(std::shared_ptr<android::icu::text::RuleBasedCollator> rbc);
public:
	RbnfScannerProviderImpl_S_RbnfLenientScannerImpl(std::shared_ptr<android::icu::text::RuleBasedCollator> rbc,std::shared_ptr<android::icu::impl::text::RbnfScannerProviderImpl_S_RbnfLenientScannerImpl> _this1);
	bool virtual allIgnorable(std::shared_ptr<java::lang::String> s);
	int virtual findText(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> key,int startingAt);
	int virtual findText2(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> key,int startingAt);
	int virtual prefixLength(std::shared_ptr<java::lang::String> str,std::shared_ptr<java::lang::String> prefix);
public:
	virtual ~RbnfScannerProviderImpl_S_RbnfLenientScannerImpl(){
	}

}; // class RbnfScannerProviderImpl_S_RbnfLenientScannerImpl
}; // namespace android::icu::impl::text

#endif //__android_icu_impl_text_RbnfScannerProviderImpl_S_RbnfLenientScannerImpl__

