#ifndef __java_lang_InheritableThreadLocal__
#define __java_lang_InheritableThreadLocal__
// H L:\smali2cpp20\x64\Release\out\java\lang\InheritableThreadLocal.smali
#include "java2ctype.h"
#include "java.lang.Thread.h"
#include "java.lang.ThreadLocal_S_ThreadLocalMap.h"
#include "java.lang.ThreadLocal.h"

namespace java::lang{
template <typename T>
class InheritableThreadLocal : public java::lang::ThreadLocal<T> {
protected:
	std::shared_ptr<T> childValue(std::shared_ptr<T> parentValue);
private:
public:
	InheritableThreadLocal();
	void createMap(std::shared_ptr<java::lang::Thread> t,std::shared_ptr<T> firstValue);
	std::shared_ptr<java::lang::ThreadLocal_S_ThreadLocalMap> getMap(std::shared_ptr<java::lang::Thread> t);
public:
	virtual ~InheritableThreadLocal(){
	}

}; // class InheritableThreadLocal
}; // namespace java::lang
// .method public constructor <init>()V
template <typename T>
java::lang::InheritableThreadLocal<T>::InheritableThreadLocal()
{
	
	//    .local p0, "this":Ljava/lang/InheritableThreadLocal;, "Ljava/lang/InheritableThreadLocal<TT;>;"
	// 025    invoke-direct {p0}, Ljava/lang/ThreadLocal;-><init>()V
	return;

}
// .method protected childValue(Ljava/lang/Object;)Ljava/lang/Object;
template <typename T>
std::shared_ptr<T> java::lang::InheritableThreadLocal<T>::childValue(std::shared_ptr<T> parentValue)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 035        value = {
	// 036            "(TT;)TT;"
	// 037        }
	// 038    .end annotation
	//    .local p0, "this":Ljava/lang/InheritableThreadLocal;, "Ljava/lang/InheritableThreadLocal<TT;>;"
	//    .local p1, "parentValue":Ljava/lang/Object;, "TT;"
	return parentValue;

}
// .method createMap(Ljava/lang/Thread;Ljava/lang/Object;)V
template <typename T>
void java::lang::InheritableThreadLocal<T>::createMap(std::shared_ptr<java::lang::Thread> t,std::shared_ptr<T> firstValue)
{
	
	std::shared_ptr<java::lang::ThreadLocal_S_ThreadLocalMap> cVar0;
	
	//    .param p1, "t"    # Ljava/lang/Thread;
	//    .annotation system Ldalvik/annotation/Signature;
	// 051        value = {
	// 052            "(",
	// 053            "Ljava/lang/Thread;",
	// 054            "TT;)V"
	// 055        }
	// 056    .end annotation
	//    .local p0, "this":Ljava/lang/InheritableThreadLocal;, "Ljava/lang/InheritableThreadLocal<TT;>;"
	//    .local p2, "firstValue":Ljava/lang/Object;, "TT;"
	cVar0 = std::make_shared<java::lang::ThreadLocal_S_ThreadLocalMap>(this, firstValue);
	t->inheritableThreadLocals = cVar0;
	return;

}
// .method getMap(Ljava/lang/Thread;)Ljava/lang/ThreadLocal$ThreadLocalMap;
template <typename T>
std::shared_ptr<java::lang::ThreadLocal_S_ThreadLocalMap> java::lang::InheritableThreadLocal<T>::getMap(std::shared_ptr<java::lang::Thread> t)
{
	
	//    .param p1, "t"    # Ljava/lang/Thread;
	//    .local p0, "this":Ljava/lang/InheritableThreadLocal;, "Ljava/lang/InheritableThreadLocal<TT;>;"
	return t->inheritableThreadLocals;

}

#endif //__java_lang_InheritableThreadLocal__

