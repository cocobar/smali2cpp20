#ifndef __android_icu_text_RBBIRuleBuilder__
#define __android_icu_text_RBBIRuleBuilder__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIRuleBuilder.smali
#include "java2ctype.h"
#include "android.icu.text.RBBINode.h"
#include "android.icu.text.RBBIRuleScanner.h"
#include "android.icu.text.RBBISetBuilder.h"
#include "android.icu.text.RBBITableBuilder.h"
#include "java.io.OutputStream.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

namespace android::icu::text{
class RBBIRuleBuilder : public java::lang::Object {
protected:
private:
public:
	static int U_BRK_ASSIGN_ERROR;
	static int U_BRK_ERROR_LIMIT;
	static int U_BRK_ERROR_START;
	static int U_BRK_HEX_DIGITS_EXPECTED;
	static int U_BRK_INIT_ERROR;
	static int U_BRK_INTERNAL_ERROR;
	static int U_BRK_MALFORMED_RULE_TAG;
	static int U_BRK_MALFORMED_SET;
	static int U_BRK_MISMATCHED_PAREN;
	static int U_BRK_NEW_LINE_IN_QUOTED_STRING;
	static int U_BRK_RULE_EMPTY_SET;
	static int U_BRK_RULE_SYNTAX;
	static int U_BRK_SEMICOLON_EXPECTED;
	static int U_BRK_UNCLOSED_SET;
	static int U_BRK_UNDEFINED_VARIABLE;
	static int U_BRK_UNRECOGNIZED_OPTION;
	static int U_BRK_VARIABLE_REDFINITION;
	static int fForwardTree;
	static int fReverseTree;
	static int fSafeFwdTree;
	static int fSafeRevTree;
	bool fChainRules;
	std::shared_ptr<java::lang::String> fDebugEnv;
	int fDefaultTree;
	std::shared_ptr<android::icu::text::RBBITableBuilder> fForwardTables;
	bool fLBCMNoChain;
	bool fLookAheadHardBreak;
	std::shared_ptr<android::icu::text::RBBITableBuilder> fReverseTables;
	std::shared_ptr<java::util::List<java::lang::Integer>> fRuleStatusVals;
	std::shared_ptr<java::lang::String> fRules;
	std::shared_ptr<android::icu::text::RBBITableBuilder> fSafeFwdTables;
	std::shared_ptr<android::icu::text::RBBITableBuilder> fSafeRevTables;
	std::shared_ptr<android::icu::text::RBBIRuleScanner> fScanner;
	std::shared_ptr<android::icu::text::RBBISetBuilder> fSetBuilder;
	std::shared_ptr<java::util::Map<java::util::Set<java::lang::Integer>,java::lang::Integer>> fStatusSets;
	std::shared_ptr<std::vector<android::icu::text::RBBINode>> fTreeRoots;
	std::shared_ptr<java::util::List<android::icu::text::RBBINode>> fUSetNodes;
	RBBIRuleBuilder(std::shared_ptr<java::lang::String> rules);
	static int align8(int i);
	static void compileRules(std::shared_ptr<java::lang::String> rules,std::shared_ptr<java::io::OutputStream> os);
	void virtual flattenData(std::shared_ptr<java::io::OutputStream> os);
public:
	virtual ~RBBIRuleBuilder(){
	}

}; // class RBBIRuleBuilder
}; // namespace android::icu::text

#endif //__android_icu_text_RBBIRuleBuilder__

