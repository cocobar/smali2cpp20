#ifndef __android_icu_text_RBBIRuleParseTable__
#define __android_icu_text_RBBIRuleParseTable__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIRuleParseTable.smali
#include "java2ctype.h"
#include "android.icu.text.RBBIRuleParseTable_S_RBBIRuleTableElement.h"
#include "java.lang.Object.h"

namespace android::icu::text{
class RBBIRuleParseTable : public java::lang::Object {
protected:
private:
public:
	static short doCheckVarDef;
	static short doDotAny;
	static short doEndAssign;
	static short doEndOfRule;
	static short doEndVariableName;
	static short doExit;
	static short doExprCatOperator;
	static short doExprFinished;
	static short doExprOrOperator;
	static short doExprRParen;
	static short doExprStart;
	static short doLParen;
	static short doNOP;
	static short doNoChain;
	static short doOptionEnd;
	static short doOptionStart;
	static short doReverseDir;
	static short doRuleChar;
	static short doRuleError;
	static short doRuleErrorAssignExpr;
	static short doScanUnicodeSet;
	static short doSlash;
	static short doStartAssign;
	static short doStartTagValue;
	static short doStartVariableName;
	static short doTagDigit;
	static short doTagExpectedError;
	static short doTagValue;
	static short doUnaryOpPlus;
	static short doUnaryOpQuestion;
	static short doUnaryOpStar;
	static short doVariableNameExpectedErr;
	static std::shared_ptr<std::vector<android::icu::text::RBBIRuleParseTable_S_RBBIRuleTableElement>> gRuleParseStateTable;
	static short kRuleSet_default;
	static short kRuleSet_digit_char;
	static short kRuleSet_eof;
	static short kRuleSet_escaped;
	static short kRuleSet_name_char;
	static short kRuleSet_name_start_char;
	static short kRuleSet_rule_char;
	static short kRuleSet_white_space;
	static void static_cinit();
	RBBIRuleParseTable();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RBBIRuleParseTable::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RBBIRuleParseTable(){
	}

}; // class RBBIRuleParseTable
}; // namespace android::icu::text

#endif //__android_icu_text_RBBIRuleParseTable__

