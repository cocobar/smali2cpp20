#ifndef __java_lang_Enum_S_1__
#define __java_lang_Enum_S_1__
// H L:\smali2cpp20\x64\Release\out\java\lang\Enum$1.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Enum.h"
#include "java.lang.Object.h"
#include "libcore.util.BasicLruCache.h"

namespace java::lang{
class Enum_S_1 : public libcore::util::BasicLruCache<java::lang::Class<java::lang::Enum>,std::vector<java::lang::Object>> {
protected:
	std::shared_ptr<java::lang::Object> virtual create(std::shared_ptr<java::lang::Class<java::lang::Enum>> enumType);
private:
public:
	Enum_S_1(int _S_anonymous0);
public:
	virtual ~Enum_S_1(){
	}

}; // class Enum_S_1
}; // namespace java::lang

#endif //__java_lang_Enum_S_1__

