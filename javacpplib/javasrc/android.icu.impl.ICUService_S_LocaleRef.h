#ifndef __android_icu_impl_ICUService_S_LocaleRef__
#define __android_icu_impl_ICUService_S_LocaleRef__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUService$LocaleRef.smali
#include "java2ctype.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Comparator.h"
#include "java.util.SortedMap.h"

namespace android::icu::impl{
class ICUService_S_LocaleRef : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::util::Comparator<java::lang::Object>> com;
	std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> dnCache;
	std::shared_ptr<android::icu::util::ULocale> locale;
public:
	ICUService_S_LocaleRef(std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> dnCache,std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::util::Comparator<java::lang::Object>> com);
	std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> virtual get(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::util::Comparator<java::lang::Object>> comp);
public:
	virtual ~ICUService_S_LocaleRef(){
	}

}; // class ICUService_S_LocaleRef
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUService_S_LocaleRef__

