#ifndef __java_lang_CloneNotSupportedException__
#define __java_lang_CloneNotSupportedException__
// H L:\smali2cpp20\x64\Release\out\java\lang\CloneNotSupportedException.smali
#include "java2ctype.h"
#include "java.lang.Exception.h"
#include "java.lang.String.h"

namespace java::lang{
class CloneNotSupportedException : public java::lang::Exception {
protected:
private:
	static long long serialVersionUID;
public:
	CloneNotSupportedException();
	CloneNotSupportedException(std::shared_ptr<java::lang::String> s);
public:
	virtual ~CloneNotSupportedException(){
	}

}; // class CloneNotSupportedException
}; // namespace java::lang

#endif //__java_lang_CloneNotSupportedException__

