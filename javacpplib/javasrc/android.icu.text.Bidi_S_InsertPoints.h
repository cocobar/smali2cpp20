#ifndef __android_icu_text_Bidi_S_InsertPoints__
#define __android_icu_text_Bidi_S_InsertPoints__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\Bidi$InsertPoints.smali
#include "java2ctype.h"
#include "android.icu.text.Bidi_S_Point.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class Bidi_S_InsertPoints : public java::lang::Object {
protected:
private:
public:
	int confirmed;
	std::shared_ptr<std::vector<android::icu::text::Bidi_S_Point>> points;
	int size;
	Bidi_S_InsertPoints();
public:
	virtual ~Bidi_S_InsertPoints(){
	}

}; // class Bidi_S_InsertPoints
}; // namespace android::icu::text

#endif //__android_icu_text_Bidi_S_InsertPoints__

