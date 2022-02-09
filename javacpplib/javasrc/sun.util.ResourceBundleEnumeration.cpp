// CPP L:\smali2cpp20\x64\Release\out\sun\util\ResourceBundleEnumeration.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.NoSuchElementException.h"
#include "java.util.Set.h"
#include "sun.util.ResourceBundleEnumeration.h"

// .method public constructor <init>(Ljava/util/Set;Ljava/util/Enumeration;)V
sun::util::ResourceBundleEnumeration::ResourceBundleEnumeration(std::shared_ptr<java::util::Set<java::lang::String>> set,std::shared_ptr<java::util::Enumeration<java::lang::String>> enumeration)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 062        value = {
	// 063            "(",
	// 064            "Ljava/util/Set",
	// 065            "<",
	// 066            "Ljava/lang/String;",
	// 067            ">;",
	// 068            "Ljava/util/Enumeration",
	// 069            "<",
	// 070            "Ljava/lang/String;",
	// 071            ">;)V"
	// 072        }
	// 073    .end annotation
	//    .local p1, "set":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .local p2, "enumeration":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Ljava/lang/String;>;"
	// 079    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->next = 0x0;
	this->set = set;
	this->iterator = set->iterator();
	this->enumeration = enumeration;
	return;

}
// .method public hasMoreElements()Z
bool sun::util::ResourceBundleEnumeration::hasMoreElements()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	
	if ( this->next )     
		goto label_cond_17;
	if ( !(this->iterator->hasNext()) )  
		goto label_cond_1d;
	cVar0 = this->iterator->next();
	cVar0->checkCast("java::lang::String");
	this->next = cVar0;
label_cond_17:
	if ( !(this->next) )  
		goto label_cond_44;
	cVar1 = 0x1;
label_goto_1c:
	return cVar1;
	// 147    .line 61
label_cond_1d:
	if ( !(this->enumeration) )  
		goto label_cond_17;
label_cond_21:
label_goto_21:
	if ( this->next )     
		goto label_cond_17;
	if ( !(this->enumeration->hasMoreElements()) )  
		goto label_cond_17;
	cVar2 = this->enumeration->nextElement();
	cVar2->checkCast("java::lang::String");
	this->next = cVar2;
	if ( !(this->set->contains(this->next)) )  
		goto label_cond_21;
	this->next = 0x0;
	goto label_goto_21;
	// 195    .line 70
label_cond_44:
	cVar1 = 0x0;
	goto label_goto_1c;

}
// .method public nextElement()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::util::ResourceBundleEnumeration::nextElement()
{
	
	std::shared_ptr<java::util::NoSuchElementException> cVar0;
	
	if ( !(this->hasMoreElements()) )  
		goto label_cond_c;
	//    .local v0, "result":Ljava/lang/String;
	this->next = 0x0;
	return this->next;
	// 237    .line 79
	// 238    .end local v0    # "result":Ljava/lang/String;
label_cond_c:
	cVar0 = std::make_shared<java::util::NoSuchElementException>();
	// throw
	throw cVar0;

}


