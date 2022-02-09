#ifndef __java_lang_Float__
#define __java_lang_Float__
// H L:\smali2cpp20\x64\Release\out\java\lang\Float.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Number.hh"

namespace java::lang{
class Float : public java::lang::Number, public java::lang::Comparable<java::lang::Float> {
public:
	Float();
	virtual ~Float();

}; // class Float
}; // namespace java::lang

#endif //__java_lang_Float__

