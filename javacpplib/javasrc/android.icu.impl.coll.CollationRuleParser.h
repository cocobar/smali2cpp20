#ifndef __android_icu_impl_coll_CollationRuleParser__
#define __android_icu_impl_coll_CollationRuleParser__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\coll\CollationRuleParser.smali
#include "java2ctype.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationRuleParser_S_Importer.h"
#include "android.icu.impl.coll.CollationRuleParser_S_Position.h"
#include "android.icu.impl.coll.CollationRuleParser_S_Sink.h"
#include "android.icu.impl.coll.CollationSettings.h"
#include "android.icu.text.Normalizer2.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParseException.h"

namespace android::icu::impl::coll{
class CollationRuleParser : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> BEFORE;
	static int OFFSET_SHIFT;
	static int STARRED_FLAG;
	static int STRENGTH_MASK;
	static int UCOL_DEFAULT;
	static int UCOL_OFF;
	static int UCOL_ON;
	static int U_PARSE_CONTEXT_LEN;
	static std::shared_ptr<std::vector<java::lang::String>> gSpecialReorderCodes;
	static std::shared_ptr<std::vector<java::lang::String>> positions;
	std::shared_ptr<android::icu::impl::coll::CollationData> baseData;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Importer> importer;
	std::shared_ptr<android::icu::text::Normalizer2> nfc;
	std::shared_ptr<android::icu::text::Normalizer2> nfd;
	std::shared_ptr<java::lang::StringBuilder> rawBuilder;
	int ruleIndex;
	std::shared_ptr<java::lang::String> rules;
	std::shared_ptr<android::icu::impl::coll::CollationSettings> settings;
	std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Sink> sink;
	std::shared_ptr<java::lang::String> virtual appendErrorContext(std::shared_ptr<java::lang::String> reason);
	static int getOnOffValue(std::shared_ptr<java::lang::String> s);
	static bool isSurrogate(int c);
	static bool isSyntaxChar(int c);
	std::shared_ptr<java::text::ParseException> virtual makeParseException(std::shared_ptr<java::lang::String> reason);
	void virtual parse(std::shared_ptr<java::lang::String> ruleString);
	int virtual parseRelationOperator();
	void virtual parseRelationStrings(int strength,int i);
	void virtual parseReordering(std::shared_ptr<java::lang::CharSequence> raw);
	int virtual parseResetAndPosition();
	void virtual parseRuleChain();
	void virtual parseSetting();
	int virtual parseSpecialPosition(int i,std::shared_ptr<java::lang::StringBuilder> str);
	void virtual parseStarredCharacters(int strength,int i);
	int virtual parseString(int i,std::shared_ptr<java::lang::StringBuilder> raw);
	int virtual parseTailoringString(int i,std::shared_ptr<java::lang::StringBuilder> raw);
	int virtual parseUnicodeSet(int i,std::shared_ptr<android::icu::text::UnicodeSet> set);
	int virtual readWords(int i,std::shared_ptr<java::lang::StringBuilder> raw);
	void virtual setParseError(std::shared_ptr<java::lang::String> reason);
	void virtual setParseError(std::shared_ptr<java::lang::String> reason,std::shared_ptr<java::lang::Exception> e);
	int virtual skipComment(int i);
	int virtual skipWhiteSpace(int i);
public:
	static bool _assertionsDisabled;
	static std::shared_ptr<std::vector<android::icu::impl::coll::CollationRuleParser_S_Position>> POSITION_VALUES;
	static char POS_BASE;
	static char POS_LEAD;
	static void static_cinit();
	CollationRuleParser(std::shared_ptr<android::icu::impl::coll::CollationData> base);
	static int getReorderCode(std::shared_ptr<java::lang::String> word);
	void virtual parse(std::shared_ptr<java::lang::String> ruleString,std::shared_ptr<android::icu::impl::coll::CollationSettings> outSettings);
	void virtual setImporter(std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Importer> importerAlias);
	void virtual setSink(std::shared_ptr<android::icu::impl::coll::CollationRuleParser_S_Sink> sinkAlias);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::coll::CollationRuleParser::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CollationRuleParser(){
	}

}; // class CollationRuleParser
}; // namespace android::icu::impl::coll

#endif //__android_icu_impl_coll_CollationRuleParser__

