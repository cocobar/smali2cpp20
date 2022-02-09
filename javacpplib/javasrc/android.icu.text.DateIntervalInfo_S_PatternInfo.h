#ifndef __android_icu_text_DateIntervalInfo_S_PatternInfo__
#define __android_icu_text_DateIntervalInfo_S_PatternInfo__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\DateIntervalInfo$PatternInfo.smali
#include "java2ctype.h"
#include "java.io.Serializable.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class DateIntervalInfo_S_PatternInfo : public java::lang::Cloneable, public java::io::Serializable {
protected:
private:
	static long long serialVersionUID;
	bool fFirstDateInPtnIsLaterDate;
	std::shared_ptr<java::lang::String> fIntervalPatternFirstPart;
	std::shared_ptr<java::lang::String> fIntervalPatternSecondPart;
public:
	static int currentSerialVersion;
	DateIntervalInfo_S_PatternInfo(std::shared_ptr<java::lang::String> firstPart,std::shared_ptr<java::lang::String> secondPart,bool firstDateInPtnIsLaterDate);
	bool virtual equals(std::shared_ptr<java::lang::Object> a);
	bool virtual firstDateInPtnIsLaterDate();
	std::shared_ptr<java::lang::String> virtual getFirstPart();
	std::shared_ptr<java::lang::String> virtual getSecondPart();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~DateIntervalInfo_S_PatternInfo(){
	}

}; // class DateIntervalInfo_S_PatternInfo
}; // namespace android::icu::text

#endif //__android_icu_text_DateIntervalInfo_S_PatternInfo__

