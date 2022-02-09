#ifndef __android_icu_text_BreakIterator__
#define __android_icu_text_BreakIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\BreakIterator.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheValue.h"
#include "android.icu.text.BreakIterator_S_BreakIteratorServiceShim.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.CharacterIterator.h"
#include "java.util.Locale.h"

namespace android::icu::text{
class BreakIterator : public java::lang::Cloneable {
protected:
	BreakIterator();
private:
	static bool DEBUG;
	static int KIND_COUNT;
	static std::shared_ptr<std::vector<android::icu::impl::CacheValue<java::lang::Object>>> iterCache;
	static std::shared_ptr<android::icu::text::BreakIterator_S_BreakIteratorServiceShim> shim;
	std::shared_ptr<android::icu::util::ULocale> actualLocale;
	std::shared_ptr<android::icu::util::ULocale> validLocale;
	static std::shared_ptr<android::icu::text::BreakIterator_S_BreakIteratorServiceShim> getShim();
public:
	static int DONE;
	static int KIND_CHARACTER;
	static int KIND_LINE;
	static int KIND_SENTENCE;
	static int KIND_TITLE;
	static int KIND_WORD;
	static int WORD_IDEO;
	static int WORD_IDEO_LIMIT;
	static int WORD_KANA;
	static int WORD_KANA_LIMIT;
	static int WORD_LETTER;
	static int WORD_LETTER_LIMIT;
	static int WORD_NONE;
	static int WORD_NONE_LIMIT;
	static int WORD_NUMBER;
	static int WORD_NUMBER_LIMIT;
	static void static_cinit();
	static std::shared_ptr<java::util::Locale> getAvailableLocales();
	static std::shared_ptr<android::icu::util::ULocale> getAvailableULocales();
	static std::shared_ptr<android::icu::text::BreakIterator> getBreakInstance(std::shared_ptr<android::icu::util::ULocale> where,int kind);
	static std::shared_ptr<android::icu::text::BreakIterator> getCharacterInstance();
	static std::shared_ptr<android::icu::text::BreakIterator> getCharacterInstance(std::shared_ptr<android::icu::util::ULocale> where);
	static std::shared_ptr<android::icu::text::BreakIterator> getCharacterInstance(std::shared_ptr<java::util::Locale> where);
	static std::shared_ptr<android::icu::text::BreakIterator> getLineInstance();
	static std::shared_ptr<android::icu::text::BreakIterator> getLineInstance(std::shared_ptr<android::icu::util::ULocale> where);
	static std::shared_ptr<android::icu::text::BreakIterator> getLineInstance(std::shared_ptr<java::util::Locale> where);
	static std::shared_ptr<android::icu::text::BreakIterator> getSentenceInstance();
	static std::shared_ptr<android::icu::text::BreakIterator> getSentenceInstance(std::shared_ptr<android::icu::util::ULocale> where);
	static std::shared_ptr<android::icu::text::BreakIterator> getSentenceInstance(std::shared_ptr<java::util::Locale> where);
	static std::shared_ptr<android::icu::text::BreakIterator> getTitleInstance();
	static std::shared_ptr<android::icu::text::BreakIterator> getTitleInstance(std::shared_ptr<android::icu::util::ULocale> where);
	static std::shared_ptr<android::icu::text::BreakIterator> getTitleInstance(std::shared_ptr<java::util::Locale> where);
	static std::shared_ptr<android::icu::text::BreakIterator> getWordInstance();
	static std::shared_ptr<android::icu::text::BreakIterator> getWordInstance(std::shared_ptr<android::icu::util::ULocale> where);
	static std::shared_ptr<android::icu::text::BreakIterator> getWordInstance(std::shared_ptr<java::util::Locale> where);
	static std::shared_ptr<java::lang::Object> registerInstance(std::shared_ptr<android::icu::text::BreakIterator> iter,std::shared_ptr<android::icu::util::ULocale> locale,int kind);
	static std::shared_ptr<java::lang::Object> registerInstance(std::shared_ptr<android::icu::text::BreakIterator> iter,std::shared_ptr<java::util::Locale> locale,int kind);
	static bool unregister(std::shared_ptr<java::lang::Object> key);
	std::shared_ptr<java::lang::Object> virtual clone();
	int current() = 0;
	int first() = 0;
	int following(int var0) = 0;
	std::shared_ptr<android::icu::util::ULocale> virtual getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type);
	int virtual getRuleStatus();
	int virtual getRuleStatusVec(std::shared_ptr<int[]> fillInArray);
	std::shared_ptr<java::text::CharacterIterator> getText() = 0;
	bool virtual isBoundary(int offset);
	int last() = 0;
	int next() = 0;
	int next(int var0) = 0;
	int virtual preceding(int offset);
	int previous() = 0;
	void virtual setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual);
	void virtual setText(std::shared_ptr<java::lang::String> newText);
	void setText(std::shared_ptr<java::text::CharacterIterator> var0) = 0;
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::BreakIterator::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BreakIterator(){
	}

}; // class BreakIterator
}; // namespace android::icu::text

#endif //__android_icu_text_BreakIterator__

