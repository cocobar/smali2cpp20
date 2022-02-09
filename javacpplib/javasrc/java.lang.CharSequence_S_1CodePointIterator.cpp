// CPP L:\smali2cpp20\x64\Release\out\java\lang\CharSequence$1CodePointIterator.smali
#include "java2ctype.h"
#include "java.lang.CharSequence_S_1CodePointIterator.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Character.h"
#include "java.lang.Object.h"
#include "java.util.NoSuchElementException.h"
#include "java.util.function.IntConsumer.h"

// .method constructor <init>(Ljava/lang/CharSequence;)V
java::lang::CharSequence_S_1CodePointIterator::CharSequence_S_1CodePointIterator(std::shared_ptr<java::lang::CharSequence> this_S_0)
{
	
	//    .param p1, "this$0"    # Ljava/lang/CharSequence;
	this->this_S_0 = this_S_0;
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->cur = 0x0;
	return;

}
// .method public forEachRemaining(Ljava/util/function/IntConsumer;)V
void java::lang::CharSequence_S_1CodePointIterator::forEachRemaining(std::shared_ptr<java::util::function::IntConsumer> block)
{
	
	int length;
	int i;
	std::shared_ptr<java::lang::Object> catchall;
	char c1;
	char c2;
	
	//    .param p1, "block"    # Ljava/util/function/IntConsumer;
	length = this->this_S_0->length();
	//    .local v4, "length":I
	i = this->cur;
	//    .local v2, "i":I
	i = i;
	//    .end local v2    # "i":I
	//    .local v3, "i":I
label_goto_9:
	if ( i >= length )
		goto label_cond_3e;
	try {
	//label_try_start_b:
	//label_try_end_d:
	}
	catch (...){
		goto label_catchall_41;
	}
	//    .catchall {:try_start_b .. :try_end_d} :catchall_41
	i = ( i + 0x1);
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	try {
	//label_try_start_f:
	c1 = this->this_S_0->charAt(i);
	//    .local v0, "c1":C
	if ( !(java::lang::Character::isHighSurrogate(c1)) )  
		goto label_cond_1b;
	if ( i <  length )
		goto label_cond_20;
label_cond_1b:
	block->accept(c1);
label_goto_1e:
	i = i;
	//    .end local v2    # "i":I
	//    .restart local v3    # "i":I
	goto label_goto_9;
	// 121    .line 191
	// 122    .end local v3    # "i":I
	// 123    .restart local v2    # "i":I
label_cond_20:
	c2 = this->this_S_0->charAt(i);
	//    .local v1, "c2":C
	if ( !(java::lang::Character::isLowSurrogate(c2)) )  
		goto label_cond_3a;
	i = ( i + 0x1);
	block->accept(java::lang::Character::toCodePoint(c1, c2));
	//label_try_end_35:
	}
	catch (...){
		goto label_catchall_36;
	}
	//    .catchall {:try_start_f .. :try_end_35} :catchall_36
	goto label_goto_1e;
	// 153    .line 200
	// 154    .end local v0    # "c1":C
	// 155    .end local v1    # "c2":C
label_catchall_36:
	// move-exception
	catchall = tryCatchExcetionList.back();
label_goto_37:
	this->cur = i;
	// throw
	throw;
	// 166    .line 196
	// 167    .restart local v0    # "c1":C
	// 168    .restart local v1    # "c2":C
label_cond_3a:
	try {
	//label_try_start_3a:
	block->accept(c1);
	//label_try_end_3d:
	}
	catch (...){
		goto label_catchall_36;
	}
	//    .catchall {:try_start_3a .. :try_end_3d} :catchall_36
	goto label_goto_1e;
	// 177    .line 201
	// 178    .end local v0    # "c1":C
	// 179    .end local v1    # "c2":C
	// 180    .end local v2    # "i":I
	// 181    .restart local v3    # "i":I
label_cond_3e:
	this->cur = i;
	return;
	// 188    .line 200
label_catchall_41:
	// move-exception
	catchall = tryCatchExcetionList.back();
	i = i;
	//    .end local v3    # "i":I
	//    .restart local v2    # "i":I
	goto label_goto_37;

}
// .method public hasNext()Z
bool java::lang::CharSequence_S_1CodePointIterator::hasNext()
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
int java::lang::CharSequence_S_1CodePointIterator::nextInt()
{
	
	int length;
	std::shared_ptr<java::util::NoSuchElementException> cVar0;
	int cVar1;
	char c1;
	char c2;
	
	length = this->this_S_0->length();
	//    .local v2, "length":I
	if ( this->cur <  length )
		goto label_cond_10;
	cVar0 = std::make_shared<java::util::NoSuchElementException>();
	// throw
	throw cVar0;
	// 261    .line 215
label_cond_10:
	cVar1 = this->cur;
	this->cur = ( cVar1 + 0x1);
	c1 = this->this_S_0->charAt(cVar1);
	//    .local v0, "c1":C
	if ( !(java::lang::Character::isHighSurrogate(c1)) )  
		goto label_cond_3f;
	if ( this->cur >= length )
		goto label_cond_3f;
	c2 = this->this_S_0->charAt(this->cur);
	//    .local v1, "c2":C
	if ( !(java::lang::Character::isLowSurrogate(c2)) )  
		goto label_cond_3f;
	this->cur = ( this->cur + 0x1);
	return java::lang::Character::toCodePoint(c1, c2);
	// 318    .line 223
	// 319    .end local v1    # "c2":C
label_cond_3f:
	return c1;

}


