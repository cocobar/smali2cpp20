#ifndef __java_lang_NoClassDefFoundError__
#define __java_lang_NoClassDefFoundError__
// H L:\smali2cpp20\x64\Release\out\java\lang\NoClassDefFoundError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

namespace java::lang{
class NoClassDefFoundError : public java::lang::LinkageError {
protected:
private:
	static long long serialVersionUID;
	NoClassDefFoundError(std::shared_ptr<java::lang::String> detailMessage,std::shared_ptr<java::lang::Throwable> throwable);
public:
	NoClassDefFoundError();
	NoClassDefFoundError(std::shared_ptr<java::lang::String> s);
public:
	virtual ~NoClassDefFoundError(){
	}

}; // class NoClassDefFoundError
}; // namespace java::lang

#endif //__java_lang_NoClassDefFoundError__

