#ifndef __java_lang_CharSequence_S_1CharIterator__
#define __java_lang_CharSequence_S_1CharIterator__
// H L:\smali2cpp20\x64\Release\out\java\lang\CharSequence$1CharIterator.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.util.PrimitiveIterator_S_OfInt.h"
#include "java.util.function.IntConsumer.h"

namespace java::lang{
class CharSequence_S_1CharIterator : public java::util::PrimitiveIterator_S_OfInt {
protected:
private:
public:
	int cur;
	std::shared_ptr<java::lang::CharSequence> this_S_0;
	CharSequence_S_1CharIterator(std::shared_ptr<java::lang::CharSequence> this_S_0);
	void virtual forEachRemaining(std::shared_ptr<java::util::function::IntConsumer> block);
	bool virtual hasNext();
	int virtual nextInt();
public:
	virtual ~CharSequence_S_1CharIterator(){
	}

}; // class CharSequence_S_1CharIterator
}; // namespace java::lang

#endif //__java_lang_CharSequence_S_1CharIterator__

