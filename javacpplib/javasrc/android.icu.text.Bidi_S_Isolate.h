#ifndef __android_icu_text_Bidi_S_Isolate__
#define __android_icu_text_Bidi_S_Isolate__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Bidi$Isolate.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Bidi_S_Isolate : public java::lang::Object {
protected:
private:
public:
	int start1;
	int startON;
	short state;
	short stateImp;
	Bidi_S_Isolate();
public:
	virtual ~Bidi_S_Isolate(){
	}

}; // class Bidi_S_Isolate
}; // namespace android::icu::text

#endif //__android_icu_text_Bidi_S_Isolate__

