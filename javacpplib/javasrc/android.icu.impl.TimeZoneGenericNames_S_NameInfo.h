#ifndef __android_icu_impl_TimeZoneGenericNames_S_NameInfo__
#define __android_icu_impl_TimeZoneGenericNames_S_NameInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$NameInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameType.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class TimeZoneGenericNames_S_NameInfo : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> type;
	std::shared_ptr<java::lang::String> tzID;
	TimeZoneGenericNames_S_NameInfo(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> type);
public:
	virtual ~TimeZoneGenericNames_S_NameInfo(){
	}

}; // class TimeZoneGenericNames_S_NameInfo
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneGenericNames_S_NameInfo__

