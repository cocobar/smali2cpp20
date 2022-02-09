#ifndef __android_icu_text_TimeZoneFormat_S_GMTOffsetField__
#define __android_icu_text_TimeZoneFormat_S_GMTOffsetField__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$GMTOffsetField.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class TimeZoneFormat_S_GMTOffsetField : public java::lang::Object {
protected:
private:
public:
	char _type;
	int _width;
	TimeZoneFormat_S_GMTOffsetField(char type,int width);
	static bool isValid(char type,int width);
	char virtual getType();
	int virtual getWidth();
public:
	virtual ~TimeZoneFormat_S_GMTOffsetField(){
	}

}; // class TimeZoneFormat_S_GMTOffsetField
}; // namespace android::icu::text

#endif //__android_icu_text_TimeZoneFormat_S_GMTOffsetField__

