#ifndef __java_lang_Byte__
#define __java_lang_Byte__
// H L:\smali2cpp20\x64\Release\out\java\lang\Byte.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Number.hh"

namespace java::lang{
class Byte : public java::lang::Number, public java::lang::Comparable<java::lang::Byte> {
public:
	Byte();
	virtual ~Byte();

}; // class Byte
}; // namespace java::lang

#endif //__java_lang_Byte__

