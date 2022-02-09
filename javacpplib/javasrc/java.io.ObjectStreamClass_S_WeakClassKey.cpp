// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$WeakClassKey.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_WeakClassKey.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.System.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.lang.ref.WeakReference.h"

// .method constructor <init>(Ljava/lang/Class;Ljava/lang/ref/ReferenceQueue;)V
java::io::ObjectStreamClass_S_WeakClassKey::ObjectStreamClass_S_WeakClassKey(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,std::shared_ptr<java::lang::ref::ReferenceQueue<java::lang::Class<java::lang::Object>>> refQueue)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 034        value = {
	// 035            "(",
	// 036            "Ljava/lang/Class",
	// 037            "<*>;",
	// 038            "Ljava/lang/ref/ReferenceQueue",
	// 039            "<",
	// 040            "Ljava/lang/Class",
	// 041            "<*>;>;)V"
	// 042        }
	// 043    .end annotation
	//    .local p1, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p2, "refQueue":Ljava/lang/ref/ReferenceQueue;, "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;"
	java::lang::ref::WeakReference::(cl, refQueue);
	this->hash = java::lang::System::identityHashCode(cl);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool java::io::ObjectStreamClass_S_WeakClassKey::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	auto referent;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( obj != this )
		goto label_cond_5;
	return cVar0;
	// 079    .line 2361
label_cond_5:
	if ( !(obj->instanceOf("java::io::ObjectStreamClass_S_WeakClassKey")) )  
		goto label_cond_1c;
	referent = this->get();
	//    .local v0, "referent":Ljava/lang/Object;
	if ( !(referent) )  
		goto label_cond_1a;
	obj->checkCast("java::io::ObjectStreamClass_S_WeakClassKey");
	//    .end local p1    # "obj":Ljava/lang/Object;
	if ( referent != obj->get() )
		goto label_cond_18;
label_goto_17:
	return cVar0;
label_cond_18:
	cVar0 = cVar1;
	goto label_goto_17;
	// 114    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_1a:
	cVar0 = cVar1;
	goto label_goto_17;
	// 121    .line 2366
	// 122    .end local v0    # "referent":Ljava/lang/Object;
label_cond_1c:
	return cVar1;

}
// .method public hashCode()I
int java::io::ObjectStreamClass_S_WeakClassKey::hashCode()
{
	
	return this->hash;

}


