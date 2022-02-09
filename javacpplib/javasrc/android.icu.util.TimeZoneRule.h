#ifndef __android_icu_util_TimeZoneRule__
#define __android_icu_util_TimeZoneRule__
// H L:\smali2cpp20\x64\Release\out\android\icu\util\TimeZoneRule.smali
#include "java2ctype.h"
#include "java.io.Serializable.h"
#include "java.lang.String.h"
#include "java.util.Date.h"

namespace android::icu::util{
class TimeZoneRule : public java::io::Serializable {
protected:
private:
	static long long serialVersionUID;
	int dstSavings;
	std::shared_ptr<java::lang::String> name;
	int rawOffset;
public:
	TimeZoneRule(std::shared_ptr<java::lang::String> name,int rawOffset,int dstSavings);
	int virtual getDSTSavings();
	std::shared_ptr<java::util::Date> getFinalStart(int var0,int var1) = 0;
	std::shared_ptr<java::util::Date> getFirstStart(int var0,int var1) = 0;
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<java::util::Date> getNextStart(long long var0,int var1,int var2,bool var3) = 0;
	std::shared_ptr<java::util::Date> getPreviousStart(long long var0,int var1,int var2,bool var3) = 0;
	int virtual getRawOffset();
	bool virtual isEquivalentTo(std::shared_ptr<android::icu::util::TimeZoneRule> other);
	bool isTransitionRule() = 0;
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~TimeZoneRule(){
	}

}; // class TimeZoneRule
}; // namespace android::icu::util

#endif //__android_icu_util_TimeZoneRule__

