#ifndef __android_icu_impl_PatternTokenizer__
#define __android_icu_impl_PatternTokenizer__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\PatternTokenizer.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"

namespace android::icu::impl{
class PatternTokenizer : public java::lang::Object {
protected:
private:
	static int AFTER_QUOTE;
	static int HEX;
	static int IN_QUOTE;
	static int NONE;
	static int NORMAL_QUOTE;
	static int NO_QUOTE;
	static int SLASH_START;
	static int START_QUOTE;
	std::shared_ptr<android::icu::text::UnicodeSet> escapeCharacters;
	std::shared_ptr<android::icu::text::UnicodeSet> extraQuotingCharacters;
	std::shared_ptr<android::icu::text::UnicodeSet> ignorableCharacters;
	int limit;
	std::shared_ptr<android::icu::text::UnicodeSet> needingQuoteCharacters;
	std::shared_ptr<java::lang::String> pattern;
	int start;
	std::shared_ptr<android::icu::text::UnicodeSet> syntaxCharacters;
	bool usingQuote;
	bool usingSlash;
	void virtual appendEscaped(std::shared_ptr<java::lang::StringBuffer> result,int cp);
public:
	static char BACK_SLASH;
	static int BROKEN_ESCAPE;
	static int BROKEN_QUOTE;
	static int DONE;
	static int LITERAL;
	static char SINGLE_QUOTE;
	static int SYNTAX;
	static int UNKNOWN;
	static void static_cinit();
	PatternTokenizer();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getEscapeCharacters();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getExtraQuotingCharacters();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getIgnorableCharacters();
	int virtual getLimit();
	int virtual getStart();
	std::shared_ptr<android::icu::text::UnicodeSet> virtual getSyntaxCharacters();
	bool virtual isUsingQuote();
	bool virtual isUsingSlash();
	int virtual next(std::shared_ptr<java::lang::StringBuffer> buffer);
	std::shared_ptr<java::lang::String> virtual normalize();
	std::shared_ptr<java::lang::String> virtual quoteLiteral(std::shared_ptr<java::lang::CharSequence> string);
	std::shared_ptr<java::lang::String> virtual quoteLiteral(std::shared_ptr<java::lang::String> string);
	std::shared_ptr<android::icu::impl::PatternTokenizer> virtual setEscapeCharacters(std::shared_ptr<android::icu::text::UnicodeSet> escapeCharacters);
	std::shared_ptr<android::icu::impl::PatternTokenizer> virtual setExtraQuotingCharacters(std::shared_ptr<android::icu::text::UnicodeSet> syntaxCharacters);
	std::shared_ptr<android::icu::impl::PatternTokenizer> virtual setIgnorableCharacters(std::shared_ptr<android::icu::text::UnicodeSet> ignorableCharacters);
	std::shared_ptr<android::icu::impl::PatternTokenizer> virtual setLimit(int limit);
	std::shared_ptr<android::icu::impl::PatternTokenizer> virtual setPattern(std::shared_ptr<java::lang::CharSequence> pattern);
	std::shared_ptr<android::icu::impl::PatternTokenizer> virtual setPattern(std::shared_ptr<java::lang::String> pattern);
	std::shared_ptr<android::icu::impl::PatternTokenizer> virtual setStart(int start);
	std::shared_ptr<android::icu::impl::PatternTokenizer> virtual setSyntaxCharacters(std::shared_ptr<android::icu::text::UnicodeSet> syntaxCharacters);
	std::shared_ptr<android::icu::impl::PatternTokenizer> virtual setUsingQuote(bool usingQuote);
	std::shared_ptr<android::icu::impl::PatternTokenizer> virtual setUsingSlash(bool usingSlash);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::PatternTokenizer::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PatternTokenizer(){
	}

}; // class PatternTokenizer
}; // namespace android::icu::impl

#endif //__android_icu_impl_PatternTokenizer__

