#ifndef __java_lang_EnumConstantNotPresentException__
#define __java_lang_EnumConstantNotPresentException__
// H L:\smali2cpp20\x64\Release\out\java\lang\EnumConstantNotPresentException.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Enum.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

namespace java::lang{
class EnumConstantNotPresentException : public java::lang::RuntimeException {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<java::lang::String> constantName;
	std::shared_ptr<java::lang::Class<java::lang::Enum>> enumType;
public:
	EnumConstantNotPresentException(std::shared_ptr<java::lang::Class<java::lang::Enum>> enumType,std::shared_ptr<java::lang::String> constantName);
	std::shared_ptr<java::lang::String> virtual constantName();
	std::shared_ptr<java::lang::Class<java::lang::Enum>> virtual enumType();
public:
	virtual ~EnumConstantNotPresentException(){
	}

}; // class EnumConstantNotPresentException
}; // namespace java::lang

#endif //__java_lang_EnumConstantNotPresentException__

