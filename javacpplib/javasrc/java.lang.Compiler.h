#ifndef __java_lang_Compiler__
#define __java_lang_Compiler__
// H L:\smali2cpp20\x64\Release\out\java\lang\Compiler.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::lang{
class Compiler : public java::lang::Object {
protected:
private:
	Compiler();
public:
	static std::shared_ptr<java::lang::Object> command(std::shared_ptr<java::lang::Object> cmd);
	static bool compileClass(std::shared_ptr<java::lang::Class<java::lang::Object>> classToCompile);
	static bool compileClasses(std::shared_ptr<java::lang::String> nameRoot);
	static void disable();
	static void enable();
public:
	virtual ~Compiler(){
	}

}; // class Compiler
}; // namespace java::lang

#endif //__java_lang_Compiler__

