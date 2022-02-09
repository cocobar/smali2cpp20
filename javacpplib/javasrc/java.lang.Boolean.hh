#ifndef __java_lang_Boolean__
#define __java_lang_Boolean__
// H L:\smali2cpp20\x64\Release\out\java\lang\Boolean.smali
#include "java2ctype.h"
#include "java.io.Serializable.hh"
#include "java.lang.Comparable.hh"

namespace java::lang{
class Boolean : public java::io::Serializable, public java::lang::Comparable<java::lang::Boolean> {
public:
	Boolean();
	virtual ~Boolean();

}; // class Boolean
}; // namespace java::lang

#endif //__java_lang_Boolean__

