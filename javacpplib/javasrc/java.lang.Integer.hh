#ifndef __java_lang_Integer__
#define __java_lang_Integer__
// H L:\smali2cpp20\x64\Release\out\java\lang\Integer.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Number.hh"

namespace java::lang{
class Integer : public java::lang::Number, public java::lang::Comparable<java::lang::Integer> {
public:
	Integer();
	virtual ~Integer();

}; // class Integer
}; // namespace java::lang

#endif //__java_lang_Integer__

