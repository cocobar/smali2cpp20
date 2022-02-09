#ifndef __android_icu_text_SimpleDateFormat_S_PatternItem__
#define __android_icu_text_SimpleDateFormat_S_PatternItem__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SimpleDateFormat$PatternItem.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class SimpleDateFormat_S_PatternItem : public java::lang::Object {
protected:
private:
public:
	bool isNumeric;
	int length;
	char type;
	SimpleDateFormat_S_PatternItem(char type,int length);
public:
	virtual ~SimpleDateFormat_S_PatternItem(){
	}

}; // class SimpleDateFormat_S_PatternItem
}; // namespace android::icu::text

#endif //__android_icu_text_SimpleDateFormat_S_PatternItem__

