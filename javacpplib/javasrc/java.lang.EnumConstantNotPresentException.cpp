// CPP L:\smali2cpp20\x64\Release\out\java\lang\EnumConstantNotPresentException.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Enum.h"
#include "java.lang.EnumConstantNotPresentException.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

static java::lang::EnumConstantNotPresentException::serialVersionUID = -0x53eb411e0ac4dd94L;
// .method public constructor <init>(Ljava/lang/Class;Ljava/lang/String;)V
java::lang::EnumConstantNotPresentException::EnumConstantNotPresentException(std::shared_ptr<java::lang::Class<java::lang::Enum>> enumType,std::shared_ptr<java::lang::String> constantName)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p2, "constantName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 030        value = {
	// 031            "(",
	// 032            "Ljava/lang/Class",
	// 033            "<+",
	// 034            "Ljava/lang/Enum;",
	// 035            ">;",
	// 036            "Ljava/lang/String;",
	// 037            ")V"
	// 038        }
	// 039    .end annotation
	//    .local p1, "enumType":Ljava/lang/Class;, "Ljava/lang/Class<+Ljava/lang/Enum;>;"
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::RuntimeException::(cVar0->append(enumType->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))->append(constantName)->toString());
	this->enumType = enumType;
	this->constantName = constantName;
	return;

}
// .method public constantName()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::EnumConstantNotPresentException::constantName()
{
	
	return this->constantName;

}
// .method public enumType()Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Enum>> java::lang::EnumConstantNotPresentException::enumType()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 097        value = {
	// 098            "()",
	// 099            "Ljava/lang/Class",
	// 100            "<+",
	// 101            "Ljava/lang/Enum;",
	// 102            ">;"
	// 103        }
	// 104    .end annotation
	return this->enumType;

}


