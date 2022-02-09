#ifndef __android_icu_text_TimeZoneNames_S_MatchInfo__
#define __android_icu_text_TimeZoneNames_S_MatchInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneNames$MatchInfo.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TimeZoneNames_S_MatchInfo : public java::lang::Object {
protected:
private:
	int _matchLength;
	std::shared_ptr<java::lang::String> _mzID;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> _nameType;
	std::shared_ptr<java::lang::String> _tzID;
public:
	TimeZoneNames_S_MatchInfo(std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> nameType,std::shared_ptr<java::lang::String> tzID,std::shared_ptr<java::lang::String> mzID,int matchLength);
	int virtual matchLength();
	std::shared_ptr<java::lang::String> virtual mzID();
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> virtual nameType();
	std::shared_ptr<java::lang::String> virtual tzID();
public:
	virtual ~TimeZoneNames_S_MatchInfo(){
	}

}; // class TimeZoneNames_S_MatchInfo
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneNames_S_MatchInfo__

