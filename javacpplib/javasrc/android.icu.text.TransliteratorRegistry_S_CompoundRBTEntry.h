#ifndef __android_icu_text_TransliteratorRegistry_S_CompoundRBTEntry__
#define __android_icu_text_TransliteratorRegistry_S_CompoundRBTEntry__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry$CompoundRBTEntry.smali
#include "java2ctype.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"

namespace android::icu::text{
class TransliteratorRegistry_S_CompoundRBTEntry : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::lang::String> ID;
	std::shared_ptr<android::icu::text::UnicodeSet> compoundFilter;
	std::shared_ptr<java::util::List<android::icu::text::RuleBasedTransliterator_S_Data>> dataVector;
	std::shared_ptr<java::util::List<java::lang::String>> idBlockVector;
public:
	TransliteratorRegistry_S_CompoundRBTEntry(std::shared_ptr<java::lang::String> theID,std::shared_ptr<java::util::List<java::lang::String>> theIDBlockVector,std::shared_ptr<java::util::List<android::icu::text::RuleBasedTransliterator_S_Data>> theDataVector,std::shared_ptr<android::icu::text::UnicodeSet> theCompoundFilter);
	std::shared_ptr<android::icu::text::Transliterator> virtual getInstance();
public:
	virtual ~TransliteratorRegistry_S_CompoundRBTEntry(){
	}

}; // class TransliteratorRegistry_S_CompoundRBTEntry
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorRegistry_S_CompoundRBTEntry__

