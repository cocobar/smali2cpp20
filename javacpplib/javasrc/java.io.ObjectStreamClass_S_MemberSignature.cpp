// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$MemberSignature.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_MemberSignature.h"
#include "java.io.ObjectStreamClass.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"
#include "java.lang.reflect.Constructor.h"
#include "java.lang.reflect.Field.h"
#include "java.lang.reflect.Method.h"

// .method public constructor <init>(Ljava/lang/reflect/Constructor;)V
java::io::ObjectStreamClass_S_MemberSignature::ObjectStreamClass_S_MemberSignature(std::shared_ptr<java::lang::reflect::Constructor<java::lang::Object>> cons)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 029        value = {
	// 030            "(",
	// 031            "Ljava/lang/reflect/Constructor",
	// 032            "<*>;)V"
	// 033        }
	// 034    .end annotation
	//    .local p1, "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->member = cons;
	this->name = cons->getName();
	this->signature = java::io::ObjectStreamClass::-wrap3(cons->getParameterTypes(), java::lang::Void::TYPE);
	return;

}
// .method public constructor <init>(Ljava/lang/reflect/Field;)V
java::io::ObjectStreamClass_S_MemberSignature::ObjectStreamClass_S_MemberSignature(std::shared_ptr<java::lang::reflect::Field> field)
{
	
	//    .param p1, "field"    # Ljava/lang/reflect/Field;
	// 075    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->member = field;
	this->name = field->getName();
	this->signature = java::io::ObjectStreamClass::-wrap2(field->getType());
	return;

}
// .method public constructor <init>(Ljava/lang/reflect/Method;)V
java::io::ObjectStreamClass_S_MemberSignature::ObjectStreamClass_S_MemberSignature(std::shared_ptr<java::lang::reflect::Method> meth)
{
	
	//    .param p1, "meth"    # Ljava/lang/reflect/Method;
	// 108    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->member = meth;
	this->name = meth->getName();
	this->signature = java::io::ObjectStreamClass::-wrap3(meth->getParameterTypes(), meth->getReturnType());
	return;

}


