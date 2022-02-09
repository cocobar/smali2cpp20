#ifndef __java_lang_ClassCircularityError__
#define __java_lang_ClassCircularityError__
// H L:\smali2cpp20\x64\Release\out\java\lang\ClassCircularityError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.h"
#include "java.lang.String.h"

namespace java::lang{
class ClassCircularityError : public java::lang::LinkageError {
protected:
private:
	static long long serialVersionUID;
public:
	ClassCircularityError();
	ClassCircularityError(std::shared_ptr<java::lang::String> s);
public:
	virtual ~ClassCircularityError(){
	}

}; // class ClassCircularityError
}; // namespace java::lang

#endif //__java_lang_ClassCircularityError__

