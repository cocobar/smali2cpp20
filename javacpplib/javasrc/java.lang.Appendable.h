#ifndef __java_lang_Appendable__
#define __java_lang_Appendable__
// H L:\smali2cpp20\x64\Release\out\java\lang\Appendable.smali
#include "java2ctype.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Object.h"

namespace java::lang{
class Appendable : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::Appendable> append(char var0);
	std::shared_ptr<java::lang::Appendable> append(std::shared_ptr<java::lang::CharSequence> var0);
	std::shared_ptr<java::lang::Appendable> append(std::shared_ptr<java::lang::CharSequence> var0,int var1,int var2);
	Appendable(){ };
	virtual ~Appendable(){ };

}; // class Appendable
}; // namespace java::lang

#endif //__java_lang_Appendable__

