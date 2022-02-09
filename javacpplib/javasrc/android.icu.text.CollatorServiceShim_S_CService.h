#ifndef __android_icu_text_CollatorServiceShim_S_CService__
#define __android_icu_text_CollatorServiceShim_S_CService__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\CollatorServiceShim$CService.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class CollatorServiceShim_S_CService : public android::icu::impl::ICULocaleService {
protected:
	std::shared_ptr<java::lang::Object> virtual handleDefault(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<std::vector<java::lang::String>> actualIDReturn);
private:
public:
	CollatorServiceShim_S_CService();
	std::shared_ptr<java::lang::String> virtual validateFallbackLocale();
public:
	virtual ~CollatorServiceShim_S_CService(){
	}

}; // class CollatorServiceShim_S_CService
}; // namespace android::icu::text

#endif //__android_icu_text_CollatorServiceShim_S_CService__

