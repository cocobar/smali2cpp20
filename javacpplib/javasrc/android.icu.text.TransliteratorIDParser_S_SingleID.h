#ifndef __android_icu_text_TransliteratorIDParser_S_SingleID__
#define __android_icu_text_TransliteratorIDParser_S_SingleID__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorIDParser$SingleID.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TransliteratorIDParser_S_SingleID : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> basicID;
	std::shared_ptr<java::lang::String> canonID;
	std::shared_ptr<java::lang::String> filter;
	TransliteratorIDParser_S_SingleID(std::shared_ptr<java::lang::String> c,std::shared_ptr<java::lang::String> b);
	TransliteratorIDParser_S_SingleID(std::shared_ptr<java::lang::String> c,std::shared_ptr<java::lang::String> b,std::shared_ptr<java::lang::String> f);
	std::shared_ptr<android::icu::text::Transliterator> virtual getInstance();
public:
	virtual ~TransliteratorIDParser_S_SingleID(){
	}

}; // class TransliteratorIDParser_S_SingleID
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorIDParser_S_SingleID__

