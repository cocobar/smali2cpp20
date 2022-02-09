#ifndef __java_lang_Character__
#define __java_lang_Character__
// H L:\smali2cpp20\x64\Release\out\java\lang\Character.smali
#include "java2ctype.h"
#include "java.io.Serializable.hh"
#include "java.lang.Comparable.hh"

namespace java::lang{
class Character : public java::io::Serializable, public java::lang::Comparable<java::lang::Character> {
public:
	Character();
	virtual ~Character();

}; // class Character
}; // namespace java::lang

#endif //__java_lang_Character__

