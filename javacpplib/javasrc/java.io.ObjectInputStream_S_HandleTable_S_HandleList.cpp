// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$HandleTable$HandleList.smali
#include "java2ctype.h"
#include "java.io.ObjectInputStream_S_HandleTable_S_HandleList.h"
#include "java.lang.ArrayIndexOutOfBoundsException.h"
#include "java.lang.System.h"

// .method public constructor <init>()V
java::io::ObjectInputStream_S_HandleTable_S_HandleList::ObjectInputStream_S_HandleTable_S_HandleList()
{
	
	// 029    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->list = std::make_shared<std::vector<int[]>>(0x4);
	this->size = 0x0;
	return;

}
// .method public add(I)V
void java::io::ObjectInputStream_S_HandleTable_S_HandleList::add(int handle)
{
	
	int cVar0;
	std::shared<std::vector<int[]>> newList;
	int cVar1;
	
	//    .param p1, "handle"    # I
	cVar0 = 0x0;
	if ( this->size <  this->list->size() )
		goto label_cond_19;
	newList = std::make_shared<std::vector<int[]>>(( this->list->size() << 0x1));
	//    .local v0, "newList":[I
	java::lang::System::arraycopy(this->list, cVar0, newList, cVar0, this->list->size());
	this->list = newList;
	//    .end local v0    # "newList":[I
label_cond_19:
	cVar1 = this->size;
	this->size = ( cVar1 + 0x1);
	this->list[cVar1] = handle;
	return;

}
// .method public get(I)I
int java::io::ObjectInputStream_S_HandleTable_S_HandleList::get(int index)
{
	
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar0;
	
	//    .param p1, "index"    # I
	if ( index <  this->size )
		goto label_cond_a;
	cVar0 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>();
	// throw
	throw cVar0;
	// 121    .line 3517
label_cond_a:
	return this->list[index];

}
// .method public size()I
int java::io::ObjectInputStream_S_HandleTable_S_HandleList::size()
{
	
	return this->size;

}


