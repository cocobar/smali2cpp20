#ifndef __android_icu_text_Bidi_S_BracketData__
#define __android_icu_text_Bidi_S_BracketData__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Bidi$BracketData.smali
#include "java2ctype.h"
#include "android.icu.text.Bidi_S_IsoRun.h"
#include "android.icu.text.Bidi_S_Opening.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Bidi_S_BracketData : public java::lang::Object {
protected:
private:
public:
	bool isNumbersSpecial;
	int isoRunLast;
	std::shared_ptr<std::vector<android::icu::text::Bidi_S_IsoRun>> isoRuns;
	std::shared_ptr<std::vector<android::icu::text::Bidi_S_Opening>> openings;
	Bidi_S_BracketData();
public:
	virtual ~Bidi_S_BracketData(){
	}

}; // class Bidi_S_BracketData
}; // namespace android::icu::text

#endif //__android_icu_text_Bidi_S_BracketData__

