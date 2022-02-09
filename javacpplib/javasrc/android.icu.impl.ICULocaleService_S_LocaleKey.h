#ifndef __android_icu_impl_ICULocaleService_S_LocaleKey__
#define __android_icu_impl_ICULocaleService_S_LocaleKey__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICULocaleService$LocaleKey.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICULocaleService_S_LocaleKey : public android::icu::impl::ICUService_S_Key {
protected:
	ICULocaleService_S_LocaleKey(std::shared_ptr<java::lang::String> primaryID,std::shared_ptr<java::lang::String> canonicalPrimaryID,std::shared_ptr<java::lang::String> canonicalFallbackID,int kind);
private:
	std::shared_ptr<java::lang::String> currentID;
	std::shared_ptr<java::lang::String> fallbackID;
	int kind;
	std::shared_ptr<java::lang::String> primaryID;
	int varstart;
public:
	static int KIND_ANY;
	static std::shared_ptr<android::icu::impl::ICULocaleService_S_LocaleKey> createWithCanonical(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> canonicalFallbackID,int kind);
	static std::shared_ptr<android::icu::impl::ICULocaleService_S_LocaleKey> createWithCanonicalFallback(std::shared_ptr<java::lang::String> primaryID,std::shared_ptr<java::lang::String> canonicalFallbackID);
	static std::shared_ptr<android::icu::impl::ICULocaleService_S_LocaleKey> createWithCanonicalFallback(std::shared_ptr<java::lang::String> primaryID,std::shared_ptr<java::lang::String> canonicalFallbackID,int kind);
	std::shared_ptr<java::lang::String> virtual canonicalID();
	std::shared_ptr<android::icu::util::ULocale> virtual canonicalLocale();
	std::shared_ptr<java::lang::String> virtual currentDescriptor();
	std::shared_ptr<java::lang::String> virtual currentID();
	std::shared_ptr<android::icu::util::ULocale> virtual currentLocale();
	bool virtual fallback();
	bool virtual isFallbackOf(std::shared_ptr<java::lang::String> id);
	int virtual kind();
	std::shared_ptr<java::lang::String> virtual prefix();
public:
	virtual ~ICULocaleService_S_LocaleKey(){
	}

}; // class ICULocaleService_S_LocaleKey
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICULocaleService_S_LocaleKey__

