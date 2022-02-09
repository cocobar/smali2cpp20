#ifndef __android_icu_util_Measure__
#define __android_icu_util_Measure__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Measure.smali
#include "java2ctype.h"
#include "android.icu.util.MeasureUnit.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class Measure : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::Number> number;
	std::shared_ptr<android::icu::util::MeasureUnit> unit;
	static bool numbersEqual(std::shared_ptr<java::lang::Number> a,std::shared_ptr<java::lang::Number> b);
public:
	Measure(std::shared_ptr<java::lang::Number> number,std::shared_ptr<android::icu::util::MeasureUnit> unit);
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	std::shared_ptr<java::lang::Number> virtual getNumber();
	std::shared_ptr<android::icu::util::MeasureUnit> virtual getUnit();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~Measure(){
	}

}; // class Measure
}; // namespace android::icu::util

#endif //__android_icu_util_Measure__

