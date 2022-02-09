#ifndef __android_icu_impl_duration_BasicPeriodFormatterFactory_S_Customizations__
#define __android_icu_impl_duration_BasicPeriodFormatterFactory_S_Customizations__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\BasicPeriodFormatterFactory$Customizations.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::impl::duration{
class BasicPeriodFormatterFactory_S_Customizations : public java::lang::Object {
protected:
private:
public:
	unsigned char countVariant;
	bool displayDirection;
	bool displayLimit;
	unsigned char separatorVariant;
	unsigned char unitVariant;
	BasicPeriodFormatterFactory_S_Customizations();
	std::shared_ptr<android::icu::impl::duration::BasicPeriodFormatterFactory_S_Customizations> virtual copy();
public:
	virtual ~BasicPeriodFormatterFactory_S_Customizations(){
	}

}; // class BasicPeriodFormatterFactory_S_Customizations
}; // namespace android::icu::impl::duration

#endif //__android_icu_impl_duration_BasicPeriodFormatterFactory_S_Customizations__

