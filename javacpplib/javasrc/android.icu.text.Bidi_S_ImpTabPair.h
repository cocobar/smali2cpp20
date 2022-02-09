#ifndef __android_icu_text_Bidi_S_ImpTabPair__
#define __android_icu_text_Bidi_S_ImpTabPair__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Bidi$ImpTabPair.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Bidi_S_ImpTabPair : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<short[][]> impact;
	std::shared_ptr<unsigned char[][][]> imptab;
	Bidi_S_ImpTabPair(std::shared_ptr<unsigned char[][]> table1,std::shared_ptr<unsigned char[][]> table2,std::shared_ptr<short[]> act1,std::shared_ptr<short[]> act2);
public:
	virtual ~Bidi_S_ImpTabPair(){
	}

}; // class Bidi_S_ImpTabPair
}; // namespace android::icu::text

#endif //__android_icu_text_Bidi_S_ImpTabPair__

