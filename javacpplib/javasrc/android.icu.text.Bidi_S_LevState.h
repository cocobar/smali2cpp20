#ifndef __android_icu_text_Bidi_S_LevState__
#define __android_icu_text_Bidi_S_LevState__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Bidi$LevState.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Bidi_S_LevState : public java::lang::Object {
protected:
private:
	Bidi_S_LevState();
public:
	std::shared_ptr<short[]> impAct;
	std::shared_ptr<unsigned char[][]> impTab;
	int lastStrongRTL;
	unsigned char runLevel;
	int runStart;
	int startL2EN;
	int startON;
	short state;
	Bidi_S_LevState(std::shared_ptr<android::icu::text::Bidi_S_LevState> _this0);
public:
	virtual ~Bidi_S_LevState(){
	}

}; // class Bidi_S_LevState
}; // namespace android::icu::text

#endif //__android_icu_text_Bidi_S_LevState__

