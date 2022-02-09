#ifndef __android_icu_text_RBBISymbolTable__
#define __android_icu_text_RBBISymbolTable__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\RBBISymbolTable.smali
#include "java2ctype.h"
#include "android.icu.text.RBBINode.h"
#include "android.icu.text.RBBIRuleScanner.h"
#include "android.icu.text.RBBISymbolTable_S_RBBISymbolTableEntry.h"
#include "android.icu.text.SymbolTable.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"
#include "java.text.ParsePosition.h"
#include "java.util.HashMap.h"

namespace android::icu::text{
class RBBISymbolTable : public android::icu::text::SymbolTable {
protected:
private:
public:
	std::shared_ptr<android::icu::text::UnicodeSet> fCachedSetLookup;
	std::shared_ptr<java::util::HashMap<java::lang::String,android::icu::text::RBBISymbolTable_S_RBBISymbolTableEntry>> fHashTable;
	std::shared_ptr<android::icu::text::RBBIRuleScanner> fRuleScanner;
	std::shared_ptr<java::lang::String> ffffString;
	RBBISymbolTable(std::shared_ptr<android::icu::text::RBBIRuleScanner> rs);
	void virtual addEntry(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::text::RBBINode> val);
	char virtual lookup(std::shared_ptr<java::lang::String> s);
	std::shared_ptr<android::icu::text::UnicodeMatcher> virtual lookupMatcher(int ch);
	std::shared_ptr<android::icu::text::RBBINode> virtual lookupNode(std::shared_ptr<java::lang::String> key);
	std::shared_ptr<java::lang::String> virtual parseReference(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,int limit);
	void virtual rbbiSymtablePrint();
public:
	virtual ~RBBISymbolTable(){
	}

}; // class RBBISymbolTable
}; // namespace android::icu::text

#endif //__android_icu_text_RBBISymbolTable__

