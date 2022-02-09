#ifndef __android_icu_impl_TZDBTimeZoneNames_S_TZDBNameInfo__
#define __android_icu_impl_TZDBTimeZoneNames_S_TZDBNameInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\TZDBTimeZoneNames$TZDBNameInfo.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::impl{
class TZDBTimeZoneNames_S_TZDBNameInfo : public java::lang::Object {
protected:
private:
public:
	bool ambiguousType;
	std::shared_ptr<java::lang::String> mzID;
	std::shared_ptr<std::vector<java::lang::String>> parseRegions;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type;
	TZDBTimeZoneNames_S_TZDBNameInfo(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type,bool ambiguousType,std::shared_ptr<std::vector<java::lang::String>> parseRegions);
public:
	virtual ~TZDBTimeZoneNames_S_TZDBNameInfo(){
	}

}; // class TZDBTimeZoneNames_S_TZDBNameInfo
}; // namespace android::icu::impl

#endif //__android_icu_impl_TZDBTimeZoneNames_S_TZDBNameInfo__

