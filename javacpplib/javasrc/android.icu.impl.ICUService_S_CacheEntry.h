#ifndef __android_icu_impl_ICUService_S_CacheEntry__
#define __android_icu_impl_ICUService_S_CacheEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUService$CacheEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUService_S_CacheEntry : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> actualDescriptor;
	std::shared_ptr<java::lang::Object> service;
	ICUService_S_CacheEntry(std::shared_ptr<java::lang::String> actualDescriptor,std::shared_ptr<java::lang::Object> service);
public:
	virtual ~ICUService_S_CacheEntry(){
	}

}; // class ICUService_S_CacheEntry
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUService_S_CacheEntry__

