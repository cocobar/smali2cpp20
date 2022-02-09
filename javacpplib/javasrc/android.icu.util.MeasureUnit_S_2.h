#ifndef __android_icu_util_MeasureUnit_S_2__
#define __android_icu_util_MeasureUnit_S_2__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\MeasureUnit$2.smali
#include "java2ctype.h"
#include "android.icu.util.MeasureUnit_S_Factory.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.lang.String.h"

namespace android::icu::util{
class MeasureUnit_S_2 : public android::icu::util::MeasureUnit_S_Factory {
protected:
private:
public:
	MeasureUnit_S_2();
	std::shared_ptr<android::icu::util::MeasureUnit> virtual create(std::shared_ptr<java::lang::String> unusedType,std::shared_ptr<java::lang::String> subType);
public:
	virtual ~MeasureUnit_S_2(){
	}

}; // class MeasureUnit_S_2
}; // namespace android::icu::util

#endif //__android_icu_util_MeasureUnit_S_2__

