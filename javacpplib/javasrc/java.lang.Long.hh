#ifndef __java_lang_Long__
#define __java_lang_Long__
// H L:\smali2cpp20\x64\Release\out\java\lang\Long.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Number.hh"

namespace java::lang{
class Long : public java::lang::Number, public java::lang::Comparable<java::lang::Long> {
public:
	Long();
	virtual ~Long();

}; // class Long
}; // namespace java::lang

#endif //__java_lang_Long__

