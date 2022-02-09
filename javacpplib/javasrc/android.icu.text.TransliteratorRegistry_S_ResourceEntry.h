#ifndef __android_icu_text_TransliteratorRegistry_S_ResourceEntry__
#define __android_icu_text_TransliteratorRegistry_S_ResourceEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry$ResourceEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TransliteratorRegistry_S_ResourceEntry : public java::lang::Object {
protected:
private:
public:
	int direction;
	std::shared_ptr<java::lang::String> resource;
	TransliteratorRegistry_S_ResourceEntry(std::shared_ptr<java::lang::String> n,int d);
public:
	virtual ~TransliteratorRegistry_S_ResourceEntry(){
	}

}; // class TransliteratorRegistry_S_ResourceEntry
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorRegistry_S_ResourceEntry__

