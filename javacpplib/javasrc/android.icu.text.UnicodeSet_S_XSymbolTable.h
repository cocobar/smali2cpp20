#ifndef __android_icu_text_UnicodeSet_S_XSymbolTable__
#define __android_icu_text_UnicodeSet_S_XSymbolTable__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$XSymbolTable.smali
#include "java2ctype.h"
#include "android.icu.text.SymbolTable.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "android.icu.text.UnicodeSet.h"
#include "java.lang.String.h"
#include "java.text.ParsePosition.h"

namespace android::icu::text{
class UnicodeSet_S_XSymbolTable : public android::icu::text::SymbolTable {
protected:
private:
public:
	UnicodeSet_S_XSymbolTable();
	bool virtual applyPropertyAlias(std::shared_ptr<java::lang::String> propertyName,std::shared_ptr<java::lang::String> propertyValue,std::shared_ptr<android::icu::text::UnicodeSet> result);
	char virtual lookup(std::shared_ptr<java::lang::String> s);
	std::shared_ptr<android::icu::text::UnicodeMatcher> virtual lookupMatcher(int i);
	std::shared_ptr<java::lang::String> virtual parseReference(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> pos,int limit);
public:
	virtual ~UnicodeSet_S_XSymbolTable(){
	}

}; // class UnicodeSet_S_XSymbolTable
}; // namespace android::icu::text

#endif //__android_icu_text_UnicodeSet_S_XSymbolTable__

