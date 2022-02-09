#ifndef __android_icu_text_TransliteratorParser__
#define __android_icu_text_TransliteratorParser__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\TransliteratorParser.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer_S_Mode.h"
#include "android.icu.text.RuleBasedTransliterator_S_Data.h"
#include "android.icu.text.StringMatcher.h"
#include "android.icu.text.TransliteratorParser_S_ParseData.h"
#include "android.icu.text.TransliteratorParser_S_RuleBody.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.text.ParsePosition.h"
#include "java.util.List.h"
#include "java.util.Map.h"

namespace android::icu::text{
class TransliteratorParser : public java::lang::Object {
protected:
private:
	static char ALT_FORWARD_RULE_OP;
	static char ALT_FUNCTION;
	static char ALT_FWDREV_RULE_OP;
	static char ALT_REVERSE_RULE_OP;
	static char ANCHOR_START;
	static char CONTEXT_ANTE;
	static char CONTEXT_POST;
	static char CURSOR_OFFSET;
	static char CURSOR_POS;
	static char DOT;
	static std::shared_ptr<java::lang::String> DOT_SET;
	static char END_OF_RULE;
	static char ESCAPE;
	static char FORWARD_RULE_OP;
	static char FUNCTION;
	static char FWDREV_RULE_OP;
	static std::shared_ptr<java::lang::String> HALF_ENDERS;
	static std::shared_ptr<java::lang::String> ID_TOKEN;
	static int ID_TOKEN_LEN;
	static std::shared_ptr<android::icu::text::UnicodeSet> ILLEGAL_FUNC;
	static std::shared_ptr<android::icu::text::UnicodeSet> ILLEGAL_SEG;
	static std::shared_ptr<android::icu::text::UnicodeSet> ILLEGAL_TOP;
	static char KLEENE_STAR;
	static char ONE_OR_MORE;
	static std::shared_ptr<java::lang::String> OPERATORS;
	static char QUOTE;
	static char REVERSE_RULE_OP;
	static char RULE_COMMENT_CHAR;
	static char SEGMENT_CLOSE;
	static char SEGMENT_OPEN;
	static char VARIABLE_DEF_OP;
	static char ZERO_OR_ONE;
	std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> curData;
	int direction;
	int dotStandIn;
	std::shared_ptr<android::icu::text::TransliteratorParser_S_ParseData> parseData;
	std::shared_ptr<java::util::List<android::icu::text::StringMatcher>> segmentObjects;
	std::shared_ptr<java::lang::StringBuffer> segmentStandins;
	std::shared_ptr<java::lang::String> undefinedVariableName;
	char variableLimit;
	std::shared_ptr<java::util::Map<java::lang::String,char[]>> variableNames;
	char variableNext;
	std::shared_ptr<java::util::List<java::lang::Object>> variablesVector;
	void virtual appendVariableDef(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::StringBuffer> buf);
	void virtual checkVariableRange(int ch,std::shared_ptr<java::lang::String> rule,int start);
	int virtual parsePragma(std::shared_ptr<java::lang::String> rule,int pos,int limit);
	int virtual parseRule(std::shared_ptr<java::lang::String> rule,int pos,int limit);
	char virtual parseSet(std::shared_ptr<java::lang::String> rule,std::shared_ptr<java::text::ParsePosition> pos);
	void virtual pragmaMaximumBackup(int backup);
	void virtual pragmaNormalizeRules(std::shared_ptr<android::icu::text::Normalizer_S_Mode> mode);
	void virtual setVariableRange(int start,int end);
public:
	std::shared_ptr<android::icu::text::UnicodeSet> compoundFilter;
	std::shared_ptr<java::util::List<android::icu::text::RuleBasedTransliterator_S_Data>> dataVector;
	std::shared_ptr<java::util::List<java::lang::String>> idBlockVector;
	static std::shared_ptr<android::icu::text::UnicodeSet> _get0();
	static std::shared_ptr<android::icu::text::UnicodeSet> _get1();
	static std::shared_ptr<android::icu::text::UnicodeSet> _get2();
	static std::shared_ptr<android::icu::text::RuleBasedTransliterator_S_Data> _get3(std::shared_ptr<android::icu::text::TransliteratorParser> _this);
	static std::shared_ptr<android::icu::text::TransliteratorParser_S_ParseData> _get4(std::shared_ptr<android::icu::text::TransliteratorParser> _this);
	static std::shared_ptr<java::util::Map> _get5(std::shared_ptr<android::icu::text::TransliteratorParser> _this);
	static std::shared_ptr<java::util::List> _get6(std::shared_ptr<android::icu::text::TransliteratorParser> _this);
	static char _wrap0(std::shared_ptr<android::icu::text::TransliteratorParser> _this,std::shared_ptr<java::lang::String> rule,std::shared_ptr<java::text::ParsePosition> pos);
	static void _wrap1(std::shared_ptr<android::icu::text::TransliteratorParser> _this,std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::StringBuffer> buf);
	static void _wrap2(std::shared_ptr<android::icu::text::TransliteratorParser> _this,int ch,std::shared_ptr<java::lang::String> rule,int start);
	static void static_cinit();
	TransliteratorParser();
	static bool resemblesPragma(std::shared_ptr<java::lang::String> rule,int pos,int limit);
	static int ruleEnd(std::shared_ptr<java::lang::String> rule,int start,int limit);
	static void syntaxError(std::shared_ptr<java::lang::String> msg,std::shared_ptr<java::lang::String> rule,int start);
	char virtual generateStandInFor(std::shared_ptr<java::lang::Object> obj);
	char virtual getDotStandIn();
	char virtual getSegmentStandin(int seg);
	void virtual parse(std::shared_ptr<java::lang::String> rules,int dir);
	void virtual parseRules(std::shared_ptr<android::icu::text::TransliteratorParser_S_RuleBody> ruleArray,int dir);
	void virtual setSegmentObject(int seg,std::shared_ptr<android::icu::text::StringMatcher> obj);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::TransliteratorParser::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~TransliteratorParser(){
	}

}; // class TransliteratorParser
}; // namespace android::icu::text

#endif //__android_icu_text_TransliteratorParser__

