#ifndef __java_lang_Character_S_Subset__
#define __java_lang_Character_S_Subset__
// H L:\smali2cpp20\x64\Release\out\java\lang\Character$Subset.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace java::lang{
class Character_S_Subset : public java::lang::Object {
protected:
	Character_S_Subset(std::shared_ptr<java::lang::String> name);
private:
	std::shared_ptr<java::lang::String> name;
public:
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~Character_S_Subset(){
	}

}; // class Character_S_Subset
}; // namespace java::lang

#endif //__java_lang_Character_S_Subset__

