#ifndef __java_lang_AutoCloseable__
#define __java_lang_AutoCloseable__
// H L:\smali2cpp20\x64\Release\out\java\lang\AutoCloseable.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace java::lang{
class AutoCloseable : public java::lang::Object {
protected:
private:
public:
	void close();
	AutoCloseable(){ };
	virtual ~AutoCloseable(){ };

}; // class AutoCloseable
}; // namespace java::lang

#endif //__java_lang_AutoCloseable__

