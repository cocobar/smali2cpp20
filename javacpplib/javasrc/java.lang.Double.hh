#ifndef __java_lang_Double__
#define __java_lang_Double__
// H L:\smali2cpp20\x64\Release\out\java\lang\Double.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Number.hh"

namespace java::lang{
class Double : public java::lang::Number, public java::lang::Comparable<java::lang::Double> {
public:
	Double();
	virtual ~Double();

}; // class Double
}; // namespace java::lang

#endif //__java_lang_Double__

