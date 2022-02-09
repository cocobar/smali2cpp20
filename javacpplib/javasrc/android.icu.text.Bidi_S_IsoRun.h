#ifndef __android_icu_text_Bidi_S_IsoRun__
#define __android_icu_text_Bidi_S_IsoRun__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Bidi$IsoRun.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Bidi_S_IsoRun : public java::lang::Object {
protected:
private:
public:
	unsigned char contextDir;
	int contextPos;
	unsigned char lastBase;
	unsigned char lastStrong;
	unsigned char level;
	short limit;
	short start;
	Bidi_S_IsoRun();
public:
	virtual ~Bidi_S_IsoRun(){
	}

}; // class Bidi_S_IsoRun
}; // namespace android::icu::text

#endif //__android_icu_text_Bidi_S_IsoRun__

