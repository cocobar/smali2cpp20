#ifndef __android_icu_text_UnicodeNameTransliterator__
#define __android_icu_text_UnicodeNameTransliterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeNameTransliterator.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.Transliterator_S_Position.h"
#include "android.icu.text.Transliterator.h"
#include "android.icu.text.UnicodeFilter.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"

namespace android::icu::text{
class UnicodeNameTransliterator : public android::icu::text::Transliterator {
protected:
	void virtual handleTransliterate(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<android::icu::text::Transliterator_S_Position> offsets,bool isIncremental);
private:
public:
	static char CLOSE_DELIM;
	static std::shared_ptr<java::lang::String> OPEN_DELIM;
	static int OPEN_DELIM_LEN;
	static std::shared_ptr<java::lang::String> _ID;
	UnicodeNameTransliterator(std::shared_ptr<android::icu::text::UnicodeFilter> filter);
	static void register();
	void virtual addSourceTargetSet(std::shared_ptr<android::icu::text::UnicodeSet> inputFilter,std::shared_ptr<android::icu::text::UnicodeSet> sourceSet,std::shared_ptr<android::icu::text::UnicodeSet> targetSet);
public:
	virtual ~UnicodeNameTransliterator(){
	}

}; // class UnicodeNameTransliterator
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeNameTransliterator__

