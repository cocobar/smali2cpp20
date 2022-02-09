// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$HandleTable.smali
#include "java2ctype.h"
#include "java.io.ObjectOutputStream_S_HandleTable.h"
#include "java.lang.Object.h"
#include "java.lang.System.h"
#include "java.util.Arrays.h"

// .method constructor <init>(IF)V
java::io::ObjectOutputStream_S_HandleTable::ObjectOutputStream_S_HandleTable(int initialCapacity,float loadFactor)
{
	
	//    .param p1, "initialCapacity"    # I
	//    .param p2, "loadFactor"    # F
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->loadFactor = loadFactor;
	this->spine = std::make_shared<std::vector<int[]>>(initialCapacity);
	this->next = std::make_shared<std::vector<int[]>>(initialCapacity);
	this->objs = std::make_shared<std::vector<std::vector<java::lang::Object>>>(initialCapacity);
	this->threshold = (int)(( (float)(initialCapacity) * loadFactor));
	this->clear();
	return;

}
// .method private growEntries()V
void java::io::ObjectOutputStream_S_HandleTable::growEntries()
{
	
	int cVar0;
	int newLength;
	std::shared<std::vector<int[]>> newNext;
	std::shared<std::vector<std::vector<java::lang::Object>>> newObjs;
	
	cVar0 = 0x0;
	newLength = ( ( this->next->size() << 0x1) + 0x1);
	//    .local v0, "newLength":I
	newNext = std::make_shared<std::vector<int[]>>(newLength);
	//    .local v1, "newNext":[I
	java::lang::System::arraycopy(this->next, cVar0, newNext, cVar0, this->size);
	this->next = newNext;
	newObjs = std::make_shared<std::vector<std::vector<java::lang::Object>>>(newLength);
	//    .local v2, "newObjs":[Ljava/lang/Object;
	java::lang::System::arraycopy(this->objs, cVar0, newObjs, cVar0, this->size);
	this->objs = newObjs;
	return;

}
// .method private growSpine()V
void java::io::ObjectOutputStream_S_HandleTable::growSpine()
{
	
	int i;
	
	this->spine = std::make_shared<std::vector<int[]>>(( ( this->spine->size() << 0x1) + 0x1));
	this->threshold = (int)(( (float)(this->spine->size()) * this->loadFactor));
	java::util::Arrays::fill(this->spine, -0x1);
	i = 0x0;
	//    .local v0, "i":I
label_goto_1c:
	if ( i >= this->size )
		goto label_cond_2a;
	this->insert(this->objs[i], i);
	i = ( i + 0x1);
	goto label_goto_1c;
	// 183    .line 2424
label_cond_2a:
	return;

}
// .method private hash(Ljava/lang/Object;)I
int java::io::ObjectOutputStream_S_HandleTable::hash(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	return (java::lang::System::identityHashCode(obj) &  0x7fffffff);

}
// .method private insert(Ljava/lang/Object;I)V
void java::io::ObjectOutputStream_S_HandleTable::insert(std::shared_ptr<java::lang::Object> obj,int handle)
{
	
	int index;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "handle"    # I
	index = (this->hash(obj) % this->spine->size());
	//    .local v0, "index":I
	this->objs[handle] = obj;
	this->next[handle] = this->spine[index];
	this->spine[index] = handle;
	return;

}
// .method assign(Ljava/lang/Object;)I
int java::io::ObjectOutputStream_S_HandleTable::assign(std::shared_ptr<java::lang::Object> obj)
{
	
	int cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this->size <  this->next->size() )
		goto label_cond_a;
	this->growEntries();
label_cond_a:
	if ( this->size <  this->threshold )
		goto label_cond_13;
	this->growSpine();
label_cond_13:
	this->insert(obj, this->size);
	cVar0 = this->size;
	this->size = ( cVar0 + 0x1);
	return cVar0;

}
// .method clear()V
void java::io::ObjectOutputStream_S_HandleTable::clear()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	java::util::Arrays::fill(this->spine, -0x1);
	java::util::Arrays::fill(this->objs, cVar0, this->size, 0x0);
	this->size = cVar0;
	return;

}
// .method lookup(Ljava/lang/Object;)I
int java::io::ObjectOutputStream_S_HandleTable::lookup(std::shared_ptr<java::lang::Object> obj)
{
	
	int cVar0;
	int i;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = -0x1;
	if ( this->size )     
		goto label_cond_6;
	return cVar0;
	// 336    .line 2377
label_cond_6:
	//    .local v1, "index":I
	i = this->spine[(this->hash(obj) % this->spine->size())];
	//    .local v0, "i":I
label_goto_13:
	if ( i < 0 ) 
		goto label_cond_21;
	if ( this->objs[i] != obj )
		goto label_cond_1c;
	return i;
	// 368    .line 2378
label_cond_1c:
	i = this->next[i];
	goto label_goto_13;
	// 376    .line 2383
label_cond_21:
	return cVar0;

}
// .method size()I
int java::io::ObjectOutputStream_S_HandleTable::size()
{
	
	return this->size;

}


