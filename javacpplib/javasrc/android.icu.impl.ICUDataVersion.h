#ifndef __android_icu_impl_ICUDataVersion__
#define __android_icu_impl_ICUDataVersion__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUDataVersion.smali
#include "java2ctype.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class ICUDataVersion : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> U_ICU_DATA_KEY;
	static std::shared_ptr<java::lang::String> U_ICU_VERSION_BUNDLE;
public:
	ICUDataVersion();
	static std::shared_ptr<android::icu::util::VersionInfo> getDataVersion();
public:
	virtual ~ICUDataVersion(){
	}

}; // class ICUDataVersion
}; // namespace android::icu::impl

#endif //__android_icu_impl_ICUDataVersion__

