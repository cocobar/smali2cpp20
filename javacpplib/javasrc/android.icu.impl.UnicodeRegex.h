#ifndef __android_icu_impl_UnicodeRegex__
#define __android_icu_impl_UnicodeRegex__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\UnicodeRegex.smali
#include "java2ctype.h"
#include "android.icu.text.StringTransform.h"
#include "android.icu.text.SymbolTable.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.Freezable.h"
#include "java.io.InputStream.h"
#include "java.lang.Cloneable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.text.ParsePosition.h"
#include "java.util.Comparator.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.regex.Pattern.h"

namespace android::icu::impl{
class UnicodeRegex : public java::lang::Cloneable, public android::icu::util::Freezable<android::icu::impl::UnicodeRegex>, public android::icu::text::StringTransform {
protected:
private:
	static std::shared_ptr<android::icu::impl::UnicodeRegex> STANDARD;
	std::shared_ptr<java::util::Comparator<java::lang::Object>> LongestFirst;
	std::shared_ptr<java::lang::String> bnfCommentString;
	std::shared_ptr<java::lang::String> bnfLineSeparator;
	std::shared_ptr<java::lang::String> bnfVariableInfix;
	std::shared_ptr<android::icu::text::SymbolTable> symbolTable;
	std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> virtual getVariables(std::shared_ptr<java::util::List<java::lang::String>> lines);
	int virtual processSet(std::shared_ptr<java::lang::String> regex,int i,std::shared_ptr<java::lang::StringBuilder> result,std::shared_ptr<android::icu::text::UnicodeSet> temp,std::shared_ptr<java::text::ParsePosition> pos);
public:
	static void static_cinit();
	UnicodeRegex();
	static std::shared_ptr<java::util::List<java::lang::String>> appendLines(std::shared_ptr<java::util::List<java::lang::String>> result,std::shared_ptr<java::io::InputStream> inputStream,std::shared_ptr<java::lang::String> cVar1);
	static std::shared_ptr<java::util::List<java::lang::String>> appendLines(std::shared_ptr<java::util::List<java::lang::String>> result,std::shared_ptr<java::lang::String> file,std::shared_ptr<java::lang::String> encoding);
	static std::shared_ptr<java::util::regex::Pattern> compile(std::shared_ptr<java::lang::String> regex);
	static std::shared_ptr<java::util::regex::Pattern> compile(std::shared_ptr<java::lang::String> regex,int options);
	static std::shared_ptr<java::lang::String> fix(std::shared_ptr<java::lang::String> regex);
	std::shared_ptr<android::icu::impl::UnicodeRegex> virtual cloneAsThawed();
	std::shared_ptr<java::lang::String> virtual compileBnf(std::shared_ptr<java::lang::String> bnfLines);
	std::shared_ptr<java::lang::String> virtual compileBnf(std::shared_ptr<java::util::List<java::lang::String>> lines);
	std::shared_ptr<android::icu::impl::UnicodeRegex> virtual freeze();
	std::shared_ptr<java::lang::String> virtual getBnfCommentString();
	std::shared_ptr<java::lang::String> virtual getBnfLineSeparator();
	std::shared_ptr<java::lang::String> virtual getBnfVariableInfix();
	std::shared_ptr<android::icu::text::SymbolTable> virtual getSymbolTable();
	bool virtual isFrozen();
	void virtual setBnfCommentString(std::shared_ptr<java::lang::String> bnfCommentString);
	void virtual setBnfLineSeparator(std::shared_ptr<java::lang::String> bnfLineSeparator);
	void virtual setBnfVariableInfix(std::shared_ptr<java::lang::String> bnfVariableInfix);
	std::shared_ptr<android::icu::impl::UnicodeRegex> virtual setSymbolTable(std::shared_ptr<android::icu::text::SymbolTable> symbolTable);
	std::shared_ptr<java::lang::String> virtual transform(std::shared_ptr<java::lang::String> regex);
private:
	class static_init_class {
	public:
		static_init_class(){
			android::icu::impl::UnicodeRegex::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UnicodeRegex(){
	}

}; // class UnicodeRegex
}; // namespace android::icu::impl

#endif //__android_icu_impl_UnicodeRegex__

