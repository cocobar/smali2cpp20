#ifndef __android_icu_util_MeasureUnit_S_Factory__
#define __android_icu_util_MeasureUnit_S_Factory__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\MeasureUnit$Factory.smali
#include "java2ctype.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class MeasureUnit_S_Factory : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::util::MeasureUnit> create(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1);
	MeasureUnit_S_Factory(){ };
	virtual ~MeasureUnit_S_Factory(){ };

}; // class MeasureUnit_S_Factory
}; // namespace android::icu::util

#endif //__android_icu_util_MeasureUnit_S_Factory__

