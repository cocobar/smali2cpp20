#ifndef __java_lang_CharSequence_S_1CodePointIterator__
#define __java_lang_CharSequence_S_1CodePointIterator__
// H L:\smali2cpp20\x64\Release\out\java\lang\CharSequence$1CodePointIterator.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.util.PrimitiveIterator_S_OfInt.h"
#include "java.util.function.IntConsumer.h"

namespace java::lang{
class CharSequence_S_1CodePointIterator : public java::util::PrimitiveIterator_S_OfInt {
protected:
private:
public:
	int cur;
	std::shared_ptr<java::lang::CharSequence> this_S_0;
	CharSequence_S_1CodePointIterator(std::shared_ptr<java::lang::CharSequence> this_S_0);
	void virtual forEachRemaining(std::shared_ptr<java::util::function::IntConsumer> block);
	bool virtual hasNext();
	int virtual nextInt();
public:
	virtual ~CharSequence_S_1CodePointIterator(){
	}

}; // class CharSequence_S_1CodePointIterator
}; // namespace java::lang

#endif //__java_lang_CharSequence_S_1CodePointIterator__

