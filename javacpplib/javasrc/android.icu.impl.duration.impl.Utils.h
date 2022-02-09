#ifndef __android_icu_impl_duration_impl_Utils__
#define __android_icu_impl_duration_impl_Utils__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\Utils.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.Utils_S_ChineseDigits.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"

namespace android::icu::impl::duration::impl{
class Utils : public java::lang::Object {
protected:
private:
public:
	Utils();
	static std::shared_ptr<java::lang::String> chineseNumber(long long cVar0,std::shared_ptr<android::icu::impl::duration::impl::Utils_S_ChineseDigits> zh);
	static std::shared_ptr<java::util::Locale> localeFromString(std::shared_ptr<java::lang::String> s);
public:
	virtual ~Utils(){
	}

}; // class Utils
}; // namespace android::icu::impl::duration::impl

#endif //__android_icu_impl_duration_impl_Utils__

