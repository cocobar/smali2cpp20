#ifndef __java_lang_AbstractStringBuilder__
#define __java_lang_AbstractStringBuilder__
// H L:\smali2cpp20\x64\Release\out\java\lang\AbstractStringBuilder.smali
#include "java2ctype.h"
#include "java.lang.Appendable.hh"
#include "java.lang.CharSequence.hh"

namespace java::lang{
class AbstractStringBuilder : public java::lang::Appendable, public java::lang::CharSequence {
public:
	AbstractStringBuilder();
	virtual ~AbstractStringBuilder();

}; // class AbstractStringBuilder
}; // namespace java::lang

#endif //__java_lang_AbstractStringBuilder__

