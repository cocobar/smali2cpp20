#ifndef __android_icu_text_AnyTransliterator__
#define __android_icu_text_AnyTransliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\AnyTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

namespace android::icu::text{
class AnyTransliterator : public android::icu::text::Transliterator {
protected:
	void virtual handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> pos,bool isIncremental);
private:
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap<java::lang::Integer,android::icu::text::Transliterator>> cache;
	std::shared_ptr<java::lang::String> target;
	int targetScript;
	std::shared_ptr<android::icu::text::Transliterator> widthFix;
	AnyTransliterator(std::shared_ptr<java::lang::String> id,std::shared_ptr<java::lang::String> theTarget,std::shared_ptr<java::lang::String> theVariant,int theTargetScript);
	std::shared_ptr<android::icu::text::Transliterator> virtual getTransliterator(int source);
	bool virtual isWide(int script);
	static int scriptNameToCode(std::shared_ptr<java::lang::String> name);
public:
	static std::shared_ptr<java::lang::String> ANY;
	static std::shared_ptr<java::lang::String> LATIN_PIVOT;
	static std::shared_ptr<java::lang::String> NULL_ID;
	static char TARGET_SEP;
	static char VARIANT_SEP;
	AnyTransliterator(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::text::UnicodeFilter> filter,std::shared_ptr<java::lang::String> target2,int targetScript2,std::shared_ptr<android::icu::text::Transliterator> widthFix2,std::shared_ptr<java::util::concurrent::ConcurrentHashMap<java::lang::Integer,android::icu::text::Transliterator>> cache2);
	static void register();
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
	std::shared_ptr<android::icu::text::Transliterator> virtual safeClone();
public:
	virtual ~AnyTransliterator(){
	}

}; // class AnyTransliterator
}; // namespace android::icu::text

#endif //__android_icu_text_AnyTransliterator__

