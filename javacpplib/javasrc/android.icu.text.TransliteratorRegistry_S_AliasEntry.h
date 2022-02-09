#ifndef __android_icu_text_TransliteratorRegistry_S_AliasEntry__
#define __android_icu_text_TransliteratorRegistry_S_AliasEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry$AliasEntry.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace android::icu::text{
class TransliteratorRegistry_S_AliasEntry : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::String> alias;
	TransliteratorRegistry_S_AliasEntry(std::shared_ptr<java::lang::String> a);
public:
	virtual ~TransliteratorRegistry_S_AliasEntry(){
	}

}; // class TransliteratorRegistry_S_AliasEntry
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorRegistry_S_AliasEntry__

