#ifndef __android_icu_text_TransliteratorRegistry__
#define __android_icu_text_TransliteratorRegistry__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorRegistry.smali
#include "java2ctype.h"
#include "android.icu.text.Transliterator_S_Factory.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.TransliteratorRegistry_S_Spec.h"
#include "android.icu.util.CaseInsensitiveString.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.util.Enumeration.h"
#include "java.util.List.h"
#include "java.util.Map.h"

namespace android::icu::text{
class TransliteratorRegistry : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> ANY;
	static bool DEBUG;
	static char LOCALE_SEP;
	static std::shared_ptr<java::lang::String> NO_VARIANT;
	std::shared_ptr<java::util::List<android::icu::util::CaseInsensitiveString>> availableIDs;
	std::shared_ptr<java::util::Map<android::icu::util::CaseInsensitiveString,std::vector<java::lang::Object>>> registry;
	std::shared_ptr<java::util::Map<android::icu::util::CaseInsensitiveString,java::util::Map<android::icu::util::CaseInsensitiveString,java::util::List<android::icu::util::CaseInsensitiveString>>>> specDAG;
	std::shared_ptr<java::lang::Object> virtual find(std::shared_ptr<java::lang::String> ID);
	std::shared_ptr<java::lang::Object> virtual find(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> variant);
	std::shared_ptr<java::lang::Object> virtual findInBundle(std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> specToOpen,std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> specToFind,std::shared_ptr<java::lang::String> variant,int direction);
	std::shared_ptr<java::lang::Object> virtual findInDynamicStore(std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> src,std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> trg,std::shared_ptr<java::lang::String> variant);
	std::shared_ptr<java::lang::Object> virtual findInStaticStore(std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> src,std::shared_ptr<android::icu::text::TransliteratorRegistry_S_Spec> trg,std::shared_ptr<java::lang::String> variant);
	std::shared_ptr<android::icu::text::Transliterator> virtual instantiateEntry(std::shared_ptr<java::lang::String> ID,std::shared_ptr<std::vector<java::lang::Object>> entryWrapper,std::shared_ptr<java::lang::StringBuffer> aliasReturn);
	void virtual registerEntry(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::Object> entry,bool visible);
	void virtual registerEntry(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> variant,std::shared_ptr<java::lang::Object> entry,bool visible);
	void virtual registerEntry(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> variant,std::shared_ptr<java::lang::Object> entry,bool visible);
	void virtual registerSTV(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> variant);
	void virtual removeSTV(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target,std::shared_ptr<java::lang::String> variant);
public:
	TransliteratorRegistry();
	std::shared_ptr<android::icu::text::Transliterator> virtual get(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::StringBuffer> aliasReturn);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getAvailableIDs();
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getAvailableSources();
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getAvailableTargets(std::shared_ptr<java::lang::String> source);
	std::shared_ptr<java::util::Enumeration<java::lang::String>> virtual getAvailableVariants(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target);
	void virtual put(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::Transliterator_S_Factory> factory,bool visible);
	void virtual put(std::shared_ptr<java::lang::String> ID,std::shared_ptr<android::icu::text::Transliterator> trans,bool visible);
	void virtual put(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::Class<android::icu::text::Transliterator>> transliteratorSubclass,bool visible);
	void virtual put(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::String> resourceName,int dir,bool visible);
	void virtual put(std::shared_ptr<java::lang::String> ID,std::shared_ptr<java::lang::String> alias,bool visible);
	void virtual remove(std::shared_ptr<java::lang::String> ID);
public:
	virtual ~TransliteratorRegistry(){
	}

}; // class TransliteratorRegistry
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorRegistry__

