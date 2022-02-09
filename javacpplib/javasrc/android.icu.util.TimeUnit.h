#ifndef __android_icu_util_TimeUnit__
#define __android_icu_util_TimeUnit__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\TimeUnit.smali
#include "java2ctype.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class TimeUnit : public android::icu::util::MeasureUnit {
protected:
private:
	static long long serialVersionUID;
	int index;
	std::shared_ptr<java::lang::Object> virtual readResolve();
	std::shared_ptr<java::lang::Object> virtual writeReplace();
public:
	TimeUnit(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::lang::String> code);
	static std::shared_ptr<android::icu::util::TimeUnit> values();
public:
	virtual ~TimeUnit(){
	}

}; // class TimeUnit
}; // namespace android::icu::util

#endif //__android_icu_util_TimeUnit__

