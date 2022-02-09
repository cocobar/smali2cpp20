#ifndef __android_icu_impl_text_RbnfScannerProviderImpl__
#define __android_icu_impl_text_RbnfScannerProviderImpl__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\text\RbnfScannerProviderImpl.smali
#include "java2ctype.h"
#include "android.icu.text.RbnfLenientScanner.h"
#include "android.icu.text.RbnfLenientScannerProvider.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace android::icu::impl::text{
class RbnfScannerProviderImpl : public android::icu::text::RbnfLenientScannerProvider {
protected:
	std::shared_ptr<android::icu::text::RbnfLenientScanner> virtual createScanner(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> extras);
private:
	static bool DEBUG;
	std::shared_ptr<java::util::Map<java::lang::String,android::icu::text::RbnfLenientScanner>> cache;
public:
	static void static_cinit();
	RbnfScannerProviderImpl();
	std::shared_ptr<android::icu::text::RbnfLenientScanner> virtual get(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> extras);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::text::RbnfScannerProviderImpl::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RbnfScannerProviderImpl(){
	}

}; // class RbnfScannerProviderImpl
}; // namespace android::icu::impl::text

#endif //__android_icu_impl_text_RbnfScannerProviderImpl__

