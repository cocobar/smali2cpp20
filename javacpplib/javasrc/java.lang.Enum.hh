#ifndef __java_lang_Enum__
#define __java_lang_Enum__
// H L:\smali2cpp20\x64\Release\out\java\lang\Enum.smali
#include "java2ctype.h"
#include "java.io.Serializable.h"
#include "java.lang.Comparable.h"

namespace java::lang{
template <typename E>
class Enum : public java::lang::Comparable<E>, public java::io::Serializable {
public:
	Enum();
	virtual ~Enum();

}; // class Enum
}; // namespace java::lang

#endif //__java_lang_Enum__

