#ifndef __android_icu_impl_RuleCharacterIterator__
#define __android_icu_impl_RuleCharacterIterator__
// H L:\smali2cpp20\x64\Release\out\android\icu\impl\RuleCharacterIterator.smali
#include "java2ctype.h"
#include "android.icu.text.SymbolTable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.text.ParsePosition.h"

namespace android::icu::impl{
class RuleCharacterIterator : public java::lang::Object {
protected:
private:
	std::shared_ptr<char[]> buf;
	int bufPos;
	bool isEscaped;
	std::shared_ptr<java::text::ParsePosition> pos;
	std::shared_ptr<android::icu::text::SymbolTable> sym;
	std::shared_ptr<java::lang::String> text;
	void virtual _advance(int count);
	int virtual _current();
public:
	static int DONE;
	static int PARSE_ESCAPES;
	static int PARSE_VARIABLES;
	static int SKIP_WHITESPACE;
	RuleCharacterIterator(std::shared_ptr<java::lang::String> text,std::shared_ptr<android::icu::text::SymbolTable> sym,std::shared_ptr<java::text::ParsePosition> pos);
	bool virtual atEnd();
	std::shared_ptr<java::lang::Object> virtual getPos(std::shared_ptr<java::lang::Object> p);
	bool virtual inVariable();
	bool virtual isEscaped();
	void virtual jumpahead(int count);
	std::shared_ptr<java::lang::String> virtual lookahead();
	int virtual next(int options);
	void virtual setPos(std::shared_ptr<java::lang::Object> p);
	void virtual skipIgnored(int options);
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~RuleCharacterIterator(){
	}

}; // class RuleCharacterIterator
}; // namespace android::icu::impl

#endif //__android_icu_impl_RuleCharacterIterator__

