// CPP L:\smali2cpp20\x64\Release\out\java\lang\CharSequence$1CharIterator.smali
#include "java2ctype.h"
#include "java.lang.CharSequence_S_1CharIterator.h"
#include "java.lang.CharSequence.h"
#include "java.util.NoSuchElementException.h"
#include "java.util.function.IntConsumer.h"

// .method constructor <init>(Ljava/lang/CharSequence;)V
java::lang::CharSequence_S_1CharIterator::CharSequence_S_1CharIterator(std::shared_ptr<java::lang::CharSequence> this_S_0)
{
	
	//    .param p1, "this$0"    # Ljava/lang/CharSequence;
	this->this_S_0 = this_S_0;
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->cur = 0x0;
	return;

}
// .method public forEachRemaining(Ljava/util/function/IntConsumer;)V
void java::lang::CharSequence_S_1CharIterator::forEachRemaining(std::shared_ptr<java::util::function::IntConsumer> block)
{
	
	//    .param p1, "block"    # Ljava/util/function/IntConsumer;
label_goto_0:
	if ( this->cur >= this->this_S_0->length() )
		goto label_cond_1c;
	block->accept(this->this_S_0->charAt(this->cur));
	this->cur = ( this->cur + 0x1);
	goto label_goto_0;
	// 097    .line 151
label_cond_1c:
	return;

}
// .method public hasNext()Z
bool java::lang::CharSequence_S_1CharIterator::hasNext()
{
	
	bool cVar0;
	
	if ( this->cur >= this->this_S_0->length() )
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method public nextInt()I
int java::lang::CharSequence_S_1CharIterator::nextInt()
{
	
	int cVar0;
	std::shared_ptr<java::util::NoSuchElementException> cVar1;
	
	if ( !(this->hasNext()) )  
		goto label_cond_13;
	cVar0 = this->cur;
	this->cur = ( cVar0 + 0x1);
	return this->this_S_0->charAt(cVar0);
	// 166    .line 142
label_cond_13:
	cVar1 = std::make_shared<java::util::NoSuchElementException>();
	// throw
	throw cVar1;

}


