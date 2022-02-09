#ifndef __android_icu_util_Calendar_S_PatternData__
#define __android_icu_util_Calendar_S_PatternData__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\Calendar$PatternData.smali
#include "java2ctype.h"
#include "android.icu.util.Calendar.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::util{
class Calendar_S_PatternData : public java::lang::Object {
protected:
private:
	std::shared_ptr<std::vector<java::lang::String>> overrides;
	std::shared_ptr<std::vector<java::lang::String>> patterns;
	std::shared_ptr<java::lang::String> virtual getDateTimePattern(int dateStyle);
	static std::shared_ptr<android::icu::util::Calendar_S_PatternData> make(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> loc);
	static std::shared_ptr<android::icu::util::Calendar_S_PatternData> make(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::lang::String> calType);
public:
	static std::shared_ptr<java::lang::String> _get0(std::shared_ptr<android::icu::util::Calendar_S_PatternData> _this);
	static std::shared_ptr<java::lang::String> _get1(std::shared_ptr<android::icu::util::Calendar_S_PatternData> _this);
	static std::shared_ptr<android::icu::util::Calendar_S_PatternData> _wrap0(std::shared_ptr<android::icu::util::Calendar> cal,std::shared_ptr<android::icu::util::ULocale> loc);
	static std::shared_ptr<android::icu::util::Calendar_S_PatternData> _wrap1(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<java::lang::String> calType);
	static std::shared_ptr<java::lang::String> _wrap2(std::shared_ptr<android::icu::util::Calendar_S_PatternData> _this,int dateStyle);
	Calendar_S_PatternData(std::shared_ptr<std::vector<java::lang::String>> patterns,std::shared_ptr<std::vector<java::lang::String>> overrides);
public:
	virtual ~Calendar_S_PatternData(){
	}

}; // class Calendar_S_PatternData
}; // namespace android::icu::util

#endif //__android_icu_util_Calendar_S_PatternData__

