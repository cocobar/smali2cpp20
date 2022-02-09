#ifndef __android_icu_text_RBBIRuleScanner__
#define __android_icu_text_RBBIRuleScanner__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIRuleScanner.smali
#include "java2ctype.h"
#include "android.icu.text.RBBINode.h"
#include "android.icu.text.RBBIRuleBuilder.h"
#include "android.icu.text.RBBIRuleScanner_S_RBBIRuleChar.h"
#include "android.icu.text.RBBIRuleScanner_S_RBBISetTableEl.h"
#include "android.icu.text.RBBISymbolTable.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"

namespace android::icu::text{
class RBBIRuleScanner : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::String> gRuleSet_digit_char_pattern;
	static std::shared_ptr<java::lang::String> gRuleSet_name_char_pattern;
	static std::shared_ptr<java::lang::String> gRuleSet_name_start_char_pattern;
	static std::shared_ptr<java::lang::String> gRuleSet_rule_char_pattern;
	static std::shared_ptr<java::lang::String> gRuleSet_white_space_pattern;
	static std::shared_ptr<java::lang::String> kAny;
	static int kStackSize;
public:
	static int chLS;
	static int chNEL;
	std::shared_ptr<android::icu::text::RBBIRuleScanner_S_RBBIRuleChar> fC;
	int fCharNum;
	int fLastChar;
	int fLineNum;
	bool fLookAheadRule;
	int fNextIndex;
	bool fNoChainInRule;
	std::shared_ptr<std::vector<android::icu::text::RBBINode>> fNodeStack;
	int fNodeStackPtr;
	int fOptionStart;
	bool fQuoteMode;
	std::shared_ptr<android::icu::text::RBBIRuleBuilder> fRB;
	bool fReverseRule;
	int fRuleNum;
	std::shared_ptr<std::vector<android::icu::text::UnicodeSet>> fRuleSets;
	int fScanIndex;
	std::shared_ptr<java::util::HashMap<java::lang::String,android::icu::text::RBBIRuleScanner_S_RBBISetTableEl>> fSetTable;
	std::shared_ptr<short[]> fStack;
	int fStackPtr;
	std::shared_ptr<android::icu::text::RBBISymbolTable> fSymbolTable;
	static void static_cinit();
	RBBIRuleScanner(std::shared_ptr<android::icu::text::RBBIRuleBuilder> rb);
	static std::shared_ptr<java::lang::String> stripRules(std::shared_ptr<java::lang::String> rules);
	bool virtual doParseActions(int action);
	void virtual error(int e);
	void virtual findSetFor(std::shared_ptr<java::lang::String> s,std::shared_ptr<android::icu::text::RBBINode> node,std::shared_ptr<android::icu::text::UnicodeSet> setToAdopt);
	void virtual fixOpStack(int p);
	void virtual nextChar(std::shared_ptr<android::icu::text::RBBIRuleScanner_S_RBBIRuleChar> c);
	int virtual nextCharLL();
	void virtual parse();
	void virtual printNodeStack(std::shared_ptr<java::lang::String> title);
	std::shared_ptr<android::icu::text::RBBINode> virtual pushNewNode(int nodeType);
	void virtual scanSet();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::text::RBBIRuleScanner::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~RBBIRuleScanner(){
	}

}; // class RBBIRuleScanner
}; // namespace android::icu::text

#endif //__android_icu_text_RBBIRuleScanner__

