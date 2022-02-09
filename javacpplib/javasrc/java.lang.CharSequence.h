#ifndef __java_lang_CharSequence__
#define __java_lang_CharSequence__
// H L:\smali2cpp20\x64\Release\out\java\lang\CharSequence.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Spliterator_S_OfInt.h"
#include "java.util.stream.IntStream.h"

namespace java::lang{
class CharSequence : public java::lang::Object {
protected:
private:
public:
	char charAt(int var0) = 0;
	std::shared_ptr<java::util::stream::IntStream> virtual chars();
	std::shared_ptr<java::util::stream::IntStream> virtual codePoints();
	std::shared_ptr<java::util::Spliterator_S_OfInt> virtual lambda_S__java_lang_CharSequence_6032();
	std::shared_ptr<java::util::Spliterator_S_OfInt> virtual lambda_S__java_lang_CharSequence_8746();
	int length() = 0;
	std::shared_ptr<java::lang::CharSequence> subSequence(int var0,int var1) = 0;
	std::shared_ptr<java::lang::String> toString() = 0;
	CharSequence(){ };
	virtual ~CharSequence(){ };

}; // class CharSequence
}; // namespace java::lang

#endif //__java_lang_CharSequence__

