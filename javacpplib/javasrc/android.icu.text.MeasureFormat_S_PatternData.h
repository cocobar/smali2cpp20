#ifndef __android_icu_text_MeasureFormat_S_PatternData__
#define __android_icu_text_MeasureFormat_S_PatternData__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\MeasureFormat$PatternData.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class MeasureFormat_S_PatternData : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> prefix;
	std::shared_ptr<java::lang::String> suffix;
	MeasureFormat_S_PatternData(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~MeasureFormat_S_PatternData(){
	}

}; // class MeasureFormat_S_PatternData
}; // namespace android::icu::text

#endif //__android_icu_text_MeasureFormat_S_PatternData__

