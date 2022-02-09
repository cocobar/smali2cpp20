// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$ReplaceTable.smali
#include "java2ctype.h"
#include "java.io.ObjectOutputStream_S_HandleTable.h"
#include "java.io.ObjectOutputStream_S_ReplaceTable.h"
#include "java.lang.Object.h"
#include "java.lang.System.h"
#include "java.util.Arrays.h"

// .method constructor <init>(IF)V
java::io::ObjectOutputStream_S_ReplaceTable::ObjectOutputStream_S_ReplaceTable(int initialCapacity,float loadFactor)
{
	
	std::shared_ptr<java::io::ObjectOutputStream_S_HandleTable> cVar0;
	
	//    .param p1, "initialCapacity"    # I
	//    .param p2, "loadFactor"    # F
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::io::ObjectOutputStream_S_HandleTable>(initialCapacity, loadFactor);
	this->htab = cVar0;
	this->reps = std::make_shared<std::vector<std::vector<java::lang::Object>>>(initialCapacity);
	return;

}
// .method private grow()V
void java::io::ObjectOutputStream_S_ReplaceTable::grow()
{
	
	int cVar0;
	std::shared<std::vector<std::vector<java::lang::Object>>> newReps;
	
	cVar0 = 0x0;
	newReps = std::make_shared<std::vector<std::vector<java::lang::Object>>>(( ( this->reps->size() << 0x1) + 0x1));
	//    .local v0, "newReps":[Ljava/lang/Object;
	java::lang::System::arraycopy(this->reps, cVar0, newReps, cVar0, this->reps->size());
	this->reps = newReps;
	return;

}
// .method assign(Ljava/lang/Object;Ljava/lang/Object;)V
void java::io::ObjectOutputStream_S_ReplaceTable::assign(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::Object> rep)
{
	
	int index;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "rep"    # Ljava/lang/Object;
	index = this->htab->assign(obj);
	//    .local v0, "index":I
label_goto_6:
	if ( index <  this->reps->size() )
		goto label_cond_f;
	this->grow();
	goto label_goto_6;
	// 112    .line 2475
label_cond_f:
	this->reps[index] = rep;
	return;

}
// .method clear()V
void java::io::ObjectOutputStream_S_ReplaceTable::clear()
{
	
	java::util::Arrays::fill(this->reps, 0x0, this->htab->size(), 0x0);
	this->htab->clear();
	return;

}
// .method lookup(Ljava/lang/Object;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectOutputStream_S_ReplaceTable::lookup(std::shared_ptr<java::lang::Object> cVar0)
{
	
	int index;
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	index = this->htab->lookup(cVar0);
	//    .local v0, "index":I
	if ( index < 0 ) 
		goto label_cond_c;
	cVar0 = this->reps[index];
	//    .end local p1    # "obj":Ljava/lang/Object;
label_cond_c:
	return cVar0;

}
// .method size()I
int java::io::ObjectOutputStream_S_ReplaceTable::size()
{
	
	return this->htab->size();

}


