// CPP L:\smali2cpp20\x64\Release\out\java\lang\Compiler.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Compiler.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

// .method private constructor <init>()V
java::lang::Compiler::Compiler()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static command(Ljava/lang/Object;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::lang::Compiler::command(std::shared_ptr<java::lang::Object> cmd)
{
	
	//    .param p0, "cmd"    # Ljava/lang/Object;
	return 0x0;

}
// .method public static compileClass(Ljava/lang/Class;)Z
bool java::lang::Compiler::compileClass(std::shared_ptr<java::lang::Class<java::lang::Object>> classToCompile)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 031        value = {
	// 032            "(",
	// 033            "Ljava/lang/Class",
	// 034            "<*>;)Z"
	// 035        }
	// 036    .end annotation
	//    .local p0, "classToCompile":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return 0x0;

}
// .method public static compileClasses(Ljava/lang/String;)Z
bool java::lang::Compiler::compileClasses(std::shared_ptr<java::lang::String> nameRoot)
{
	
	//    .param p0, "nameRoot"    # Ljava/lang/String;
	return 0x0;

}
// .method public static disable()V
void java::lang::Compiler::disable()
{
	
	return;

}
// .method public static enable()V
void java::lang::Compiler::enable()
{
	
	return;

}


