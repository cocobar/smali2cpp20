// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\VMStack.smali
#include "java2ctype.h"
#include "dalvik.system.VMStack.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.StackTraceElement.h"
#include "java.lang.Thread.h"

// .method public constructor <init>()V
dalvik::system::VMStack::VMStack()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static native fillStackTraceElements(Ljava/lang/Thread;[Ljava/lang/StackTraceElement;)I
int dalvik::system::VMStack::fillStackTraceElements(std::shared_ptr<java::lang::Thread> var0,std::shared_ptr<std::vector<java::lang::StackTraceElement>> var1)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 019    .end annotation

}
// .method public static native getCallingClassLoader()Ljava/lang/ClassLoader;
std::shared_ptr<java::lang::ClassLoader> dalvik::system::VMStack::getCallingClassLoader()
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 024    .end annotation

}
// .method public static native getClosestUserClassLoader()Ljava/lang/ClassLoader;
std::shared_ptr<java::lang::ClassLoader> dalvik::system::VMStack::getClosestUserClassLoader()
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 029    .end annotation

}
// .method public static getStackClass1()Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> dalvik::system::VMStack::getStackClass1()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 035        value = {
	// 036            "()",
	// 037            "Ljava/lang/Class",
	// 038            "<*>;"
	// 039        }
	// 040    .end annotation
	return dalvik::system::VMStack::getStackClass2({const[class].FS-Param});

}
// .method public static native getStackClass2()Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> dalvik::system::VMStack::getStackClass2()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 053        value = {
	// 054            "()",
	// 055            "Ljava/lang/Class",
	// 056            "<*>;"
	// 057        }
	// 058    .end annotation
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 061    .end annotation

}
// .method public static native getThreadStackTrace(Ljava/lang/Thread;)[Ljava/lang/StackTraceElement;
std::shared_ptr<java::lang::StackTraceElement> dalvik::system::VMStack::getThreadStackTrace(std::shared_ptr<java::lang::Thread> var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 066    .end annotation

}


