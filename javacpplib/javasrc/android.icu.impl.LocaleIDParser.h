#ifndef __android_icu_impl_LocaleIDParser__
#define __android_icu_impl_LocaleIDParser__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleIDParser.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Comparator.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"

namespace android::icu::impl{
class LocaleIDParser : public java::lang::Object {
protected:
private:
	static char COMMA;
	static char DONE;
	static char DOT;
	static char HYPHEN;
	static char ITEM_SEPARATOR;
	static char KEYWORD_ASSIGN;
	static char KEYWORD_SEPARATOR;
	static char UNDERSCORE;
	std::shared_ptr<java::lang::StringBuilder> buffer;
	bool canonicalize;
	bool hadCountry;
	std::shared_ptr<char[]> id;
	int index;
	void virtual addSeparator();
	void virtual append(char c);
	void virtual append(std::shared_ptr<java::lang::String> s);
	bool virtual atTerminator();
	std::shared_ptr<java::util::Comparator<java::lang::String>> virtual getKeyComparator();
	std::shared_ptr<java::lang::String> virtual getKeyword();
	std::shared_ptr<java::lang::String> virtual getString(int start);
	std::shared_ptr<java::lang::String> virtual getValue();
	bool virtual haveExperimentalLanguagePrefix();
	bool virtual haveKeywordAssign();
	static bool isDoneOrItemSeparator(char c);
	static bool isDoneOrKeywordAssign(char c);
	bool virtual isTerminator(char c);
	bool virtual isTerminatorOrIDSeparator(char c);
	char virtual next();
	int virtual parseCountry();
	int virtual parseKeywords();
	int virtual parseLanguage();
	int virtual parseScript();
	int virtual parseVariant();
	void virtual reset();
	void virtual set(int pos,std::shared_ptr<java::lang::String> s);
	void virtual setKeywordValue(std::shared_ptr<java::lang::String> keywordName,std::shared_ptr<java::lang::String> cVar2,bool reset);
	bool virtual setToKeywordStart();
	void virtual skipCountry();
	void virtual skipLanguage();
	void virtual skipScript();
	void virtual skipUntilTerminatorOrIDSeparator();
public:
	std::shared_ptr<java::lang::String> baseName;
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> keywords;
	LocaleIDParser(std::shared_ptr<java::lang::String> localeID);
	LocaleIDParser(std::shared_ptr<java::lang::String> localeID,bool canonicalize);
	void virtual defaultKeywordValue(std::shared_ptr<java::lang::String> keywordName,std::shared_ptr<java::lang::String> value);
	std::shared_ptr<java::lang::String> virtual getBaseName();
	std::shared_ptr<java::lang::String> virtual getCountry();
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual getKeywordMap();
	std::shared_ptr<java::lang::String> virtual getKeywordValue(std::shared_ptr<java::lang::String> keywordName);
	std::shared_ptr<java::util::Iterator<java::lang::String>> virtual getKeywords();
	std::shared_ptr<java::lang::String> virtual getLanguage();
	std::shared_ptr<java::lang::String> virtual getLanguageScriptCountryVariant();
	std::shared_ptr<java::lang::String> virtual getName();
	std::shared_ptr<java::lang::String> virtual getScript();
	std::shared_ptr<java::lang::String> virtual getVariant();
	void virtual parseBaseName();
	void virtual setBaseName(std::shared_ptr<java::lang::String> baseName);
	void virtual setKeywordValue(std::shared_ptr<java::lang::String> keywordName,std::shared_ptr<java::lang::String> value);
public:
	virtual ~LocaleIDParser(){
	}

}; // class LocaleIDParser
}; // namespace android::icu::impl

#endif //__android_icu_impl_LocaleIDParser__

