#ifndef __android_icu_impl_TimeZoneNamesImpl_S_NameInfo__
#define __android_icu_impl_TimeZoneNamesImpl_S_NameInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$NameInfo.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class TimeZoneNamesImpl_S_NameInfo : public java::lang::Object {
protected:
private:
	TimeZoneNamesImpl_S_NameInfo();
public:
	std::shared_ptr<java::lang::String> mzID;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type;
	std::shared_ptr<java::lang::String> tzID;
	TimeZoneNamesImpl_S_NameInfo(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_NameInfo> _this0);
public:
	virtual ~TimeZoneNamesImpl_S_NameInfo(){
	}

}; // class TimeZoneNamesImpl_S_NameInfo
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneNamesImpl_S_NameInfo__

