#ifndef __android_icu_text_TransliteratorIDParser_S_Specs__
#define __android_icu_text_TransliteratorIDParser_S_Specs__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorIDParser$Specs.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TransliteratorIDParser_S_Specs : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> filter;
	bool sawSource;
	std::shared_ptr<java::lang::String> source;
	std::shared_ptr<java::lang::String> target;
	std::shared_ptr<java::lang::String> variant;
	TransliteratorIDParser_S_Specs(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::String> t,std::shared_ptr<java::lang::String> v,bool sawS,std::shared_ptr<java::lang::String> f);
public:
	virtual ~TransliteratorIDParser_S_Specs(){
	}

}; // class TransliteratorIDParser_S_Specs
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorIDParser_S_Specs__

