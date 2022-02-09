#ifndef __android_icu_text_SymbolTable__
#define __android_icu_text_SymbolTable__
// H L:\smali2cpp20\x64\Release\out\android\icu\text\SymbolTable.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeMatcher.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.ParsePosition.h"

namespace android::icu::text{
class SymbolTable : public java::lang::Object {
protected:
private:
public:
	static char SYMBOL_REF;
	char lookup(std::shared_ptr<java::lang::String> var0) = 0;
	std::shared_ptr<android::icu::text::UnicodeMatcher> lookupMatcher(int var0) = 0;
	std::shared_ptr<java::lang::String> parseReference(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::text::ParsePosition> var1,int var2) = 0;
	SymbolTable(){ };
	virtual ~SymbolTable(){ };

}; // class SymbolTable
}; // namespace android::icu::text

#endif //__android_icu_text_SymbolTable__

