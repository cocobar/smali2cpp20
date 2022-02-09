#ifndef __android_icu_impl_TimeZoneGenericNames_S_GenericMatchInfo__
#define __android_icu_impl_TimeZoneGenericNames_S_GenericMatchInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$GenericMatchInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameType.h"
#include "android.icu.text.TimeZoneFormat_S_TimeType.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class TimeZoneGenericNames_S_GenericMatchInfo : public java::lang::Object {
protected:
private:
	TimeZoneGenericNames_S_GenericMatchInfo(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> nameType,std::shared_ptr<java::lang::String> tzID,int matchLength);
	TimeZoneGenericNames_S_GenericMatchInfo(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> nameType,std::shared_ptr<java::lang::String> tzID,int matchLength,std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> timeType);
public:
	int matchLength;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> nameType;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> timeType;
	std::shared_ptr<java::lang::String> tzID;
	TimeZoneGenericNames_S_GenericMatchInfo(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> nameType,std::shared_ptr<java::lang::String> tzID,int matchLength,std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> _this3);
	TimeZoneGenericNames_S_GenericMatchInfo(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> nameType,std::shared_ptr<java::lang::String> tzID,int matchLength,std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> timeType,std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericMatchInfo> _this4);
	int virtual matchLength();
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> virtual nameType();
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_TimeType> virtual timeType();
	std::shared_ptr<java::lang::String> virtual tzID();
public:
	virtual ~TimeZoneGenericNames_S_GenericMatchInfo(){
	}

}; // class TimeZoneGenericNames_S_GenericMatchInfo
}; // namespace android::icu::impl

#endif //__android_icu_impl_TimeZoneGenericNames_S_GenericMatchInfo__

