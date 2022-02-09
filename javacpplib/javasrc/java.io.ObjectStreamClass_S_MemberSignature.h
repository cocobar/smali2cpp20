#ifndef __java_io_ObjectStreamClass_S_MemberSignature__
#define __java_io_ObjectStreamClass_S_MemberSignature__
// H L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$MemberSignature.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.reflect.Constructor.h"
#include "java.lang.reflect.Field.h"
#include "java.lang.reflect.Member.h"
#include "java.lang.reflect.Method.h"

namespace java::io{
class ObjectStreamClass_S_MemberSignature : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<java::lang::reflect::Member> member;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::String> signature;
	ObjectStreamClass_S_MemberSignature(std::shared_ptr<java::lang::reflect::Constructor<java::lang::Object>> cons);
	ObjectStreamClass_S_MemberSignature(std::shared_ptr<java::lang::reflect::Field> field);
	ObjectStreamClass_S_MemberSignature(std::shared_ptr<java::lang::reflect::Method> meth);
public:
	virtual ~ObjectStreamClass_S_MemberSignature(){
	}

}; // class ObjectStreamClass_S_MemberSignature
}; // namespace java::io

#endif //__java_io_ObjectStreamClass_S_MemberSignature__

