#ifndef __java_lang_InheritableThreadLocal__
#define __java_lang_InheritableThreadLocal__
// H L:\smali2cpp20\x64\Release\out\java\lang\InheritableThreadLocal.smali
#include "java2ctype.h"
#include "java.lang.ThreadLocal.hhh"

namespace java::lang{
template <typename T>
class InheritableThreadLocal : public java::lang::ThreadLocal<T> {
public:
	InheritableThreadLocal();
	virtual ~InheritableThreadLocal();

}; // class InheritableThreadLocal
}; // namespace java::lang

#endif //__java_lang_InheritableThreadLocal__

