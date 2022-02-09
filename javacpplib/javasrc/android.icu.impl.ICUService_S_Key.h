#ifndef __android_icu_impl_ICUService_S_Key__
#define __android_icu_impl_ICUService_S_Key__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUService$Key.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUService_S_Key : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> id;
public:
	ICUService_S_Key(std::shared_ptr<java::lang::String> id);
	std::shared_ptr<java::lang::String> virtual canonicalID();
	std::shared_ptr<java::lang::String> virtual currentDescriptor();
	std::shared_ptr<java::lang::String> virtual currentID();
	bool virtual fallback();
	std::shared_ptr<java::lang::String> virtual id();
	bool virtual isFallbackOf(std::shared_ptr<java::lang::String> idToCheck);
public:
	virtual ~ICUService_S_Key(){
	}

}; // class ICUService_S_Key
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUService_S_Key__

