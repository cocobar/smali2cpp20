#ifndef __sun_reflect_Reflection__
#define __sun_reflect_Reflection__
// H L:\smali2cpp20\x64\Release\out\sun\reflect\Reflection.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::reflect{
class Reflection : public java::lang::Object {
protected:
private:
	static bool isSameClassPackage(std::shared_ptr<java::lang::Class<java::lang::Object>> c1,std::shared_ptr<java::lang::Class<java::lang::Object>> c2);
	static bool isSameClassPackage(std::shared_ptr<java::lang::ClassLoader> loader1,std::shared_ptr<java::lang::String> name1,std::shared_ptr<java::lang::ClassLoader> loader2,std::shared_ptr<java::lang::String> name2);
public:
	Reflection();
	static void ensureMemberAccess(std::shared_ptr<java::lang::Class<java::lang::Object>> currentClass,std::shared_ptr<java::lang::Class<java::lang::Object>> memberClass,std::shared_ptr<java::lang::Object> target,int modifiers);
	static bool isSubclassOf(std::shared_ptr<java::lang::Class<java::lang::Object>> queryClass,std::shared_ptr<java::lang::Class<java::lang::Object>> ofClass);
	static bool verifyMemberAccess(std::shared_ptr<java::lang::Class<java::lang::Object>> currentClass,std::shared_ptr<java::lang::Class<java::lang::Object>> memberClass,std::shared_ptr<java::lang::Object> target,int modifiers);
public:
	virtual ~Reflection(){
	}

}; // class Reflection
}; // namespace sun::reflect

#endif //__sun_reflect_Reflection__

