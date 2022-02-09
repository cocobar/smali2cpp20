// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$HandleTable.smali
#include "java2ctype.h"
#include "java.io.ObjectInputStream_S_HandleTable_S_HandleList.h"
#include "java.io.ObjectInputStream_S_HandleTable.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.InternalError.h"
#include "java.lang.Object.h"
#include "java.lang.System.h"
#include "java.util.Arrays.h"

static java::io::ObjectInputStream_S_HandleTable::STATUS_EXCEPTION = 0x3t;
static java::io::ObjectInputStream_S_HandleTable::STATUS_OK = 0x1t;
static java::io::ObjectInputStream_S_HandleTable::STATUS_UNKNOWN = 0x2t;
// .method constructor <init>(I)V
java::io::ObjectInputStream_S_HandleTable::ObjectInputStream_S_HandleTable(int initialCapacity)
{
	
	//    .param p1, "initialCapacity"    # I
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->lowDep = -0x1;
	this->size = 0x0;
	this->status = std::make_shared<std::vector<unsigned char[]>>(initialCapacity);
	this->entries = std::make_shared<std::vector<std::vector<java::lang::Object>>>(initialCapacity);
	this->deps = std::make_shared<std::vector<std::vector<java::io::ObjectInputStream_S_HandleTable_S_HandleList>>>(initialCapacity);
	return;

}
// .method private grow()V
void java::io::ObjectInputStream_S_HandleTable::grow()
{
	
	int cVar0;
	int newCapacity;
	std::shared<std::vector<unsigned char[]>> newStatus;
	std::shared<std::vector<std::vector<java::lang::Object>>> newEntries;
	std::shared<std::vector<std::vector<java::io::ObjectInputStream_S_HandleTable_S_HandleList>>> newDeps;
	
	cVar0 = 0x0;
	newCapacity = ( ( this->entries->size() << 0x1) + 0x1);
	//    .local v0, "newCapacity":I
	newStatus = std::make_shared<std::vector<unsigned char[]>>(newCapacity);
	//    .local v3, "newStatus":[B
	newEntries = std::make_shared<std::vector<std::vector<java::lang::Object>>>(newCapacity);
	//    .local v2, "newEntries":[Ljava/lang/Object;
	newDeps = std::make_shared<std::vector<std::vector<java::io::ObjectInputStream_S_HandleTable_S_HandleList>>>(newCapacity);
	//    .local v1, "newDeps":[Ljava/io/ObjectInputStream$HandleTable$HandleList;
	java::lang::System::arraycopy(this->status, cVar0, newStatus, cVar0, this->size);
	java::lang::System::arraycopy(this->entries, cVar0, newEntries, cVar0, this->size);
	java::lang::System::arraycopy(this->deps, cVar0, newDeps, cVar0, this->size);
	this->status = newStatus;
	this->entries = newEntries;
	this->deps = newDeps;
	return;

}
// .method assign(Ljava/lang/Object;)I
int java::io::ObjectInputStream_S_HandleTable::assign(std::shared_ptr<java::lang::Object> obj)
{
	
	int cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this->size <  this->entries->size() )
		goto label_cond_a;
	this->grow();
label_cond_a:
	this->status[this->size] = 0x2;
	this->entries[this->size] = obj;
	cVar0 = this->size;
	this->size = ( cVar0 + 0x1);
	return cVar0;

}
// .method clear()V
void java::io::ObjectInputStream_S_HandleTable::clear()
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	
	cVar0 = 0x0;
	cVar1 = 0x0;
	java::util::Arrays::fill(this->status, cVar1, this->size, cVar1);
	java::util::Arrays::fill(this->entries, cVar1, this->size, cVar0);
	java::util::Arrays::fill(this->deps, cVar1, this->size, cVar0);
	this->lowDep = -0x1;
	this->size = cVar1;
	return;

}
// .method finish(I)V
void java::io::ObjectInputStream_S_HandleTable::finish(int handle)
{
	
	int i;
	std::shared_ptr<java::lang::InternalError> cVar0;
	
	//    .param p1, "handle"    # I
	if ( this->lowDep >= 0 )
		goto label_cond_16;
	//    .local v0, "end":I
label_goto_6:
	i = handle;
	//    .local v1, "i":I
label_goto_7:
	if ( i >= end )
		goto label_cond_2e;
	// switch
	{
	auto item = ( this->status[i] );
	if (item == 1) goto label_pswitch_2b;
	if (item == 2) goto label_pswitch_21;
	if (item == 3) goto label_pswitch_2b;
	}
	cVar0 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar0;
	// 266    .line 3387
	// 267    .end local v0    # "end":I
	// 268    .end local v1    # "i":I
label_cond_16:
	if ( this->lowDep <  handle )
		goto label_cond_20;
	//    .restart local v0    # "end":I
	this->lowDep = -0x1;
	goto label_goto_6;
	// 285    .line 3393
	// 286    .end local v0    # "end":I
label_cond_20:
	return;
	// 290    .line 3400
	// 291    .restart local v0    # "end":I
	// 292    .restart local v1    # "i":I
label_pswitch_21:
	this->status[i] = 0x1;
	this->deps[i] = 0x0;
label_pswitch_2b:
	i = ( i + 0x1);
	goto label_goto_7;
	// 313    .line 3412
label_cond_2e:
	return;
	// 317    .line 3398
	// 318    nop
	// 320    :pswitch_data_30
	// 321    .packed-switch 0x1
	// 322        :pswitch_2b
	// 323        :pswitch_21
	// 324        :pswitch_2b
	// 325    .end packed-switch

}
// .method lookupException(I)Ljava/lang/ClassNotFoundException;
std::shared_ptr<java::lang::ClassNotFoundException> java::io::ObjectInputStream_S_HandleTable::lookupException(int handle)
{
	
	std::shared_ptr<java::lang::ClassNotFoundException> cVar0;
	
	//    .param p1, "handle"    # I
	if ( handle == -0x1 )
		goto label_cond_11;
	if ( this->status[handle] != 0x3 )
		goto label_cond_11;
	cVar0 = this->entries[handle];
	cVar0->checkCast("java::lang::ClassNotFoundException");
label_goto_10:
	return cVar0;
	// 358    .line 3454
label_cond_11:
	cVar0 = 0x0;
	goto label_goto_10;

}
// .method lookupObject(I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream_S_HandleTable::lookupObject(int handle)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "handle"    # I
	if ( handle == -0x1 )
		goto label_cond_f;
	if ( this->status[handle] == 0x3 )
		goto label_cond_f;
	cVar0 = this->entries[handle];
label_goto_e:
	return cVar0;
	// 393    .line 3443
label_cond_f:
	cVar0 = 0x0;
	goto label_goto_e;

}
// .method markDependency(II)V
void java::io::ObjectInputStream_S_HandleTable::markDependency(int dependent,int target)
{
	
	int cVar0;
	std::shared_ptr<java::lang::InternalError> cVar1;
	std::shared_ptr<java::lang::InternalError> cVar2;
	std::shared_ptr<java::io::ObjectInputStream_S_HandleTable_S_HandleList> cVar4;
	std::shared_ptr<java::lang::ClassNotFoundException> cVar3;
	
	//    .param p1, "dependent"    # I
	//    .param p2, "target"    # I
	cVar0 = -0x1;
	if ( dependent == cVar0 )
		goto label_cond_5;
	if ( target != cVar0 )
		goto label_cond_6;
label_cond_5:
	return;
	// 417    .line 3306
label_cond_6:
	// switch
	{
	auto item = ( this->status[dependent] );
	if (item == 2) goto label_pswitch_13;
	if (item == 3) goto label_pswitch_29;
	}
	cVar1 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar1;
	// 432    .line 3309
label_pswitch_13:
	// switch
	{
	auto item = ( this->status[target] );
	if (item == 1) goto label_pswitch_29;
	if (item == 2) goto label_pswitch_2a;
	if (item == 3) goto label_pswitch_20;
	}
	cVar2 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar2;
	// 447    .line 3317
label_pswitch_20:
	cVar3 = this->entries[target];
	cVar3->checkCast("java::lang::ClassNotFoundException");
	this->markException(dependent, cVar3);
label_cond_29:
label_goto_29:
label_pswitch_29:
	return;
	// 464    .line 3322
label_pswitch_2a:
	if ( this->deps[target] )     
		goto label_cond_39;
	cVar4 = std::make_shared<java::io::ObjectInputStream_S_HandleTable_S_HandleList>();
	this->deps[target] = cVar4;
label_cond_39:
	this->deps[target]->add(dependent);
	if ( this->lowDep < 0 ) 
		goto label_cond_48;
	if ( this->lowDep <= target )
		goto label_cond_29;
label_cond_48:
	this->lowDep = target;
	goto label_goto_29;
	// 504    .line 3306
	// 505    nop
	// 507    :pswitch_data_4c
	// 508    .packed-switch 0x2
	// 509        :pswitch_13
	// 510        :pswitch_29
	// 511    .end packed-switch
	// 513    .line 3309
	// 514    :pswitch_data_54
	// 515    .packed-switch 0x1
	// 516        :pswitch_29
	// 517        :pswitch_2a
	// 518        :pswitch_20
	// 519    .end packed-switch

}
// .method markException(ILjava/lang/ClassNotFoundException;)V
void java::io::ObjectInputStream_S_HandleTable::markException(int handle,std::shared_ptr<java::lang::ClassNotFoundException> ex)
{
	
	std::shared_ptr<java::lang::InternalError> cVar0;
	std::shared_ptr<java::io::ObjectInputStream_S_HandleTable_S_HandleList> dlist;
	int i;
	
	//    .param p1, "handle"    # I
	//    .param p2, "ex"    # Ljava/lang/ClassNotFoundException;
	// switch
	{
	auto item = ( this->status[handle] );
	if (item == 2) goto label_pswitch_e;
	if (item == 3) goto label_pswitch_32;
	}
	cVar0 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar0;
	// 544    .line 3355
label_pswitch_e:
	this->status[handle] = 0x3;
	this->entries[handle] = ex;
	dlist = this->deps[handle];
	//    .local v0, "dlist":Ljava/io/ObjectInputStream$HandleTable$HandleList;
	if ( !(dlist) )  
		goto label_cond_32;
	//    .local v2, "ndeps":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_22:
	if ( i >= dlist->size() )
		goto label_cond_2e;
	this->markException(dlist->get(i), ex);
	i = ( i + 0x1);
	goto label_goto_22;
	// 591    .line 3365
label_cond_2e:
	this->deps[handle] = 0x0;
	//    .end local v0    # "dlist":Ljava/io/ObjectInputStream$HandleTable$HandleList;
	//    .end local v1    # "i":I
	//    .end local v2    # "ndeps":I
label_cond_32:
label_pswitch_32:
	return;
	// 605    .line 3353
	// 606    nop
	// 608    :pswitch_data_34
	// 609    .packed-switch 0x2
	// 610        :pswitch_e
	// 611        :pswitch_32
	// 612    .end packed-switch

}
// .method setObject(ILjava/lang/Object;)V
void java::io::ObjectInputStream_S_HandleTable::setObject(int handle,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::lang::InternalError> cVar0;
	
	//    .param p1, "handle"    # I
	//    .param p2, "obj"    # Ljava/lang/Object;
	// switch
	{
	auto item = ( this->status[handle] );
	if (item == 1) goto label_pswitch_d;
	if (item == 2) goto label_pswitch_d;
	if (item == 3) goto label_pswitch_11;
	}
	cVar0 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar0;
	// 635    .line 3424
label_pswitch_d:
	this->entries[handle] = obj;
label_pswitch_11:
	return;
	// 645    .line 3421
	// 646    :pswitch_data_12
	// 647    .packed-switch 0x1
	// 648        :pswitch_d
	// 649        :pswitch_d
	// 650        :pswitch_11
	// 651    .end packed-switch

}
// .method size()I
int java::io::ObjectInputStream_S_HandleTable::size()
{
	
	return this->size;

}


