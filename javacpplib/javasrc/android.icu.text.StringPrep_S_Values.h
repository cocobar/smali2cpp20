#ifndef __android_icu_text_StringPrep_S_Values__
#define __android_icu_text_StringPrep_S_Values__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\StringPrep$Values.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class StringPrep_S_Values : public java::lang::Object {
protected:
private:
	StringPrep_S_Values();
public:
	bool isIndex;
	int type;
	int value;
	StringPrep_S_Values(std::shared_ptr<android::icu::text::StringPrep_S_Values> _this0);
	void virtual reset();
public:
	virtual ~StringPrep_S_Values(){
	}

}; // class StringPrep_S_Values
}; // namespace android::icu::text

#endif //__android_icu_text_StringPrep_S_Values__

