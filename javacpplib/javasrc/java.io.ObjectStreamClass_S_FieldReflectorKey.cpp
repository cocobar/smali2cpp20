// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$FieldReflectorKey.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass_S_FieldReflectorKey.h"
#include "java.io.ObjectStreamField.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.ref.ReferenceQueue.h"
#include "java.lang.ref.WeakReference.h"

// .method constructor <init>(Ljava/lang/Class;[Ljava/io/ObjectStreamField;Ljava/lang/ref/ReferenceQueue;)V
java::io::ObjectStreamClass_S_FieldReflectorKey::ObjectStreamClass_S_FieldReflectorKey(std::shared_ptr<java::lang::Class<java::lang::Object>> cl,std::shared_ptr<std::vector<java::io::ObjectStreamField>> fields,std::shared_ptr<java::lang::ref::ReferenceQueue<java::lang::Class<java::lang::Object>>> queue)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::StringBuilder> sbuf;
	int i;
	std::shared_ptr<java::io::ObjectStreamField> f;
	
	//    .param p2, "fields"    # [Ljava/io/ObjectStreamField;
	//    .annotation system Ldalvik/annotation/Signature;
	// 039        value = {
	// 040            "(",
	// 041            "Ljava/lang/Class",
	// 042            "<*>;[",
	// 043            "Ljava/io/ObjectStreamField;",
	// 044            "Ljava/lang/ref/ReferenceQueue",
	// 045            "<",
	// 046            "Ljava/lang/Class",
	// 047            "<*>;>;)V"
	// 048        }
	// 049    .end annotation
	//    .local p1, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p3, "queue":Ljava/lang/ref/ReferenceQueue;, "Ljava/lang/ref/ReferenceQueue<Ljava/lang/Class<*>;>;"
	java::lang::ref::WeakReference::(cl, queue);
	if ( cl )     
		goto label_cond_25;
	cVar0 = 0x1;
label_goto_6:
	this->nullClass = cVar0;
	sbuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "sbuf":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v1, "i":I
label_goto_e:
	if ( i >= fields->size() )
		goto label_cond_27;
	f = fields[i];
	//    .local v0, "f":Ljava/io/ObjectStreamField;
	sbuf->append(f->getName())->append(f->getSignature());
	i = ( i + 0x1);
	goto label_goto_e;
	// 104    .line 2183
	// 105    .end local v0    # "f":Ljava/io/ObjectStreamField;
	// 106    .end local v1    # "i":I
	// 107    .end local v2    # "sbuf":Ljava/lang/StringBuilder;
label_cond_25:
	cVar0 = 0x0;
	goto label_goto_6;
	// 113    .line 2189
	// 114    .restart local v1    # "i":I
	// 115    .restart local v2    # "sbuf":Ljava/lang/StringBuilder;
label_cond_27:
	this->sigs = sbuf->toString();
	this->hash = (java::lang::System::identityHashCode(cl) +  this->sigs->hashCode());
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool java::io::ObjectStreamClass_S_FieldReflectorKey::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<java::io::ObjectStreamClass_S_FieldReflectorKey> other;
	std::shared_ptr<java::lang::Class> referent;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( obj != this )
		goto label_cond_5;
	return 0x1;
	// 159    .line 2202
label_cond_5:
	if ( !(obj->instanceOf("java::io::ObjectStreamClass_S_FieldReflectorKey")) )  
		goto label_cond_2c;
	other = obj;
	other->checkCast("java::io::ObjectStreamClass_S_FieldReflectorKey");
	//    .local v0, "other":Ljava/io/ObjectStreamClass$FieldReflectorKey;
	if ( !(this->nullClass) )  
		goto label_cond_1d;
	if ( !(other->nullClass) )  
		goto label_cond_1c;
label_goto_14:
	cVar1 = this->sigs->equals(other->sigs);
label_cond_1c:
	return cVar1;
	// 194    .line 2206
label_cond_1d:
	referent = this->get();
	referent->checkCast("java::lang::Class");
	//    .local v1, "referent":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(referent) )  
		goto label_cond_1c;
	if ( referent != other->get() )
		goto label_cond_1c;
	goto label_goto_14;
	// 214    .line 2210
	// 215    .end local v0    # "other":Ljava/io/ObjectStreamClass$FieldReflectorKey;
	// 216    .end local v1    # "referent":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_2c:
	return cVar1;

}
// .method public hashCode()I
int java::io::ObjectStreamClass_S_FieldReflectorKey::hashCode()
{
	
	return this->hash;

}


