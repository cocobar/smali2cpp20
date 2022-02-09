// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$DebugTraceInfoStack.smali
#include "java2ctype.h"
#include "java.io.ObjectOutputStream_S_DebugTraceInfoStack.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.List.h"

// .method constructor <init>()V
java::io::ObjectOutputStream_S_DebugTraceInfoStack::ObjectOutputStream_S_DebugTraceInfoStack()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::ArrayList>();
	this->stack = cVar0;
	return;

}
// .method clear()V
void java::io::ObjectOutputStream_S_DebugTraceInfoStack::clear()
{
	
	this->stack->clear();
	return;

}
// .method pop()V
void java::io::ObjectOutputStream_S_DebugTraceInfoStack::pop()
{
	
	this->stack->remove(( this->stack->size() + -0x1));
	return;

}
// .method push(Ljava/lang/String;)V
void java::io::ObjectOutputStream_S_DebugTraceInfoStack::push(std::shared_ptr<java::lang::String> entry)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "entry"    # Ljava/lang/String;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	this->stack->add(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\t- ")))->append(entry)->toString());
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectOutputStream_S_DebugTraceInfoStack::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buffer;
	int i;
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	buffer = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	if ( this->stack->isEmpty() )     
		goto label_cond_33;
	i = this->stack->size();
	//    .local v1, "i":I
label_goto_13:
	if ( i <= 0 )
		goto label_cond_33;
	cVar0 = this->stack->get(( i + -0x1));
	cVar0->checkCast("java::lang::String");
	if ( i == 0x1 )
		goto label_cond_2f;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>("\n"));
label_goto_29:
	buffer->append(cVar0)->append(cVar1);
	i = ( i + -0x1);
	goto label_goto_13;
	// 176    .line 2551
label_cond_2f:
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_29;
	// 182    .line 2554
	// 183    .end local v1    # "i":I
label_cond_33:
	return buffer->toString();

}


