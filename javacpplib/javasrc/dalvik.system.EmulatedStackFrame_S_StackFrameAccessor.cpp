// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\EmulatedStackFrame$StackFrameAccessor.smali
#include "java2ctype.h"
#include "dalvik.system.EmulatedStackFrame_S_StackFrameAccessor.h"
#include "dalvik.system.EmulatedStackFrame_S_StackFrameReader.h"
#include "dalvik.system.EmulatedStackFrame_S_StackFrameWriter.h"
#include "dalvik.system.EmulatedStackFrame.h"
#include "java.lang.Boolean.h"
#include "java.lang.Byte.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.Double.h"
#include "java.lang.Float.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.Short.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.invoke.MethodType.h"
#include "java.nio.Buffer.h"
#include "java.nio.ByteBuffer.h"
#include "java.nio.ByteOrder.h"

static dalvik::system::EmulatedStackFrame_S_StackFrameAccessor::RETURN_VALUE_IDX = -0x2;
// .method protected constructor <init>()V
dalvik::system::EmulatedStackFrame_S_StackFrameAccessor::EmulatedStackFrame_S_StackFrameAccessor()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	// 041    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->referencesOffset = cVar0;
	this->argumentIdx = cVar0;
	this->frameBuf = 0x0;
	this->numArgs = cVar0;
	return;

}
// .method public static copyNext(Ldalvik/system/EmulatedStackFrame$StackFrameReader;Ldalvik/system/EmulatedStackFrame$StackFrameWriter;Ljava/lang/Class;)V
void dalvik::system::EmulatedStackFrame_S_StackFrameAccessor::copyNext(std::shared_ptr<dalvik::system::EmulatedStackFrame_S_StackFrameReader> reader,std::shared_ptr<dalvik::system::EmulatedStackFrame_S_StackFrameWriter> writer,std::shared_ptr<java::lang::Class<java::lang::Object>> type)
{
	
	//    .param p0, "reader"    # Ldalvik/system/EmulatedStackFrame$StackFrameReader;
	//    .param p1, "writer"    # Ldalvik/system/EmulatedStackFrame$StackFrameWriter;
	//    .annotation system Ldalvik/annotation/Signature;
	// 066        value = {
	// 067            "(",
	// 068            "Ldalvik/system/EmulatedStackFrame$StackFrameReader;",
	// 069            "Ldalvik/system/EmulatedStackFrame$StackFrameWriter;",
	// 070            "Ljava/lang/Class",
	// 071            "<*>;)V"
	// 072        }
	// 073    .end annotation
	//    .local p2, "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( type->isPrimitive() )     
		goto label_cond_e;
	writer->putNextReference(reader->nextReference(type), type);
label_cond_d:
label_goto_d:
	return;
	// 096    .line 385
label_cond_e:
	if ( type != java::lang::Boolean::TYPE )
		goto label_cond_1a;
	writer->putNextBoolean(reader->nextBoolean());
	goto label_goto_d;
	// 111    .line 387
label_cond_1a:
	if ( type != java::lang::Byte::TYPE )
		goto label_cond_26;
	writer->putNextByte(reader->nextByte());
	goto label_goto_d;
	// 126    .line 389
label_cond_26:
	if ( type != java::lang::Character::TYPE )
		goto label_cond_32;
	writer->putNextChar(reader->nextChar());
	goto label_goto_d;
	// 141    .line 391
label_cond_32:
	if ( type != java::lang::Short::TYPE )
		goto label_cond_3e;
	writer->putNextShort(reader->nextShort());
	goto label_goto_d;
	// 156    .line 393
label_cond_3e:
	if ( type != java::lang::Integer::TYPE )
		goto label_cond_4a;
	writer->putNextInt(reader->nextInt());
	goto label_goto_d;
	// 171    .line 395
label_cond_4a:
	if ( type != java::lang::Long::TYPE )
		goto label_cond_56;
	writer->putNextLong(reader->nextLong());
	goto label_goto_d;
	// 186    .line 397
label_cond_56:
	if ( type != java::lang::Float::TYPE )
		goto label_cond_62;
	writer->putNextFloat(reader->nextFloat());
	goto label_goto_d;
	// 201    .line 399
label_cond_62:
	if ( type != java::lang::Double::TYPE )
		goto label_cond_d;
	writer->putNextDouble(reader->nextDouble());
	goto label_goto_d;

}
// .method public attach(Ldalvik/system/EmulatedStackFrame;)Ldalvik/system/EmulatedStackFrame$StackFrameAccessor;
std::shared_ptr<dalvik::system::EmulatedStackFrame_S_StackFrameAccessor> dalvik::system::EmulatedStackFrame_S_StackFrameAccessor::attach(std::shared_ptr<dalvik::system::EmulatedStackFrame> stackFrame)
{
	
	int cVar0;
	
	//    .param p1, "stackFrame"    # Ldalvik/system/EmulatedStackFrame;
	cVar0 = 0x0;
	return this->attach(stackFrame, cVar0, cVar0, cVar0);

}
// .method public attach(Ldalvik/system/EmulatedStackFrame;III)Ldalvik/system/EmulatedStackFrame$StackFrameAccessor;
std::shared_ptr<dalvik::system::EmulatedStackFrame_S_StackFrameAccessor> dalvik::system::EmulatedStackFrame_S_StackFrameAccessor::attach(std::shared_ptr<dalvik::system::EmulatedStackFrame> stackFrame,int argumentIdx,int referencesOffset,int frameOffset)
{
	
	//    .param p1, "stackFrame"    # Ldalvik/system/EmulatedStackFrame;
	//    .param p2, "argumentIdx"    # I
	//    .param p3, "referencesOffset"    # I
	//    .param p4, "frameOffset"    # I
	this->frame = stackFrame;
	this->frameBuf = java::nio::ByteBuffer::wrap(dalvik::system::EmulatedStackFrame::-get1(this->frame))->order(java::nio::ByteOrder::LITTLE_ENDIAN);
	this->numArgs = dalvik::system::EmulatedStackFrame::-get2(this->frame)->ptypes()->size();
	if ( !(frameOffset) )  
		goto label_cond_28;
	this->frameBuf->position(frameOffset);
label_cond_28:
	this->referencesOffset = referencesOffset;
	this->argumentIdx = argumentIdx;
	return this;

}
// .method protected checkType(Ljava/lang/Class;)V
void dalvik::system::EmulatedStackFrame_S_StackFrameAccessor::checkType(std::shared_ptr<java::lang::Class<java::lang::Object>> type)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::Object> expectedType;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 301        value = {
	// 302            "(",
	// 303            "Ljava/lang/Class",
	// 304            "<*>;)V"
	// 305        }
	// 306    .end annotation
	//    .local p1, "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( this->argumentIdx >= this->numArgs )
		goto label_cond_b;
	if ( this->argumentIdx != -0x1 )
		goto label_cond_27;
label_cond_b:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid argument index: ")))->append(this->argumentIdx)->toString());
	// throw
	throw cVar0;
	// 351    .line 354
label_cond_27:
	if ( this->argumentIdx != -0x2 )
		goto label_cond_5d;
	expectedType = dalvik::system::EmulatedStackFrame::-get2(this->frame)->rtype();
	//    .local v0, "expectedType":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_36:
	if ( expectedType == type )
		goto label_cond_6c;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incorrect type: ")))->append(type)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", expected: ")))->append(expectedType)->toString());
	// throw
	throw cVar2;
	// 412    .line 355
	// 413    .end local v0    # "expectedType":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_5d:
	//    .restart local v0    # "expectedType":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	goto label_goto_36;
	// 432    .line 361
label_cond_6c:
	return;

}
// .method public makeReturnValueAccessor()V
void dalvik::system::EmulatedStackFrame_S_StackFrameAccessor::makeReturnValueAccessor()
{
	
	std::shared_ptr<java::lang::Class> rtype;
	
	rtype = dalvik::system::EmulatedStackFrame::-get2(this->frame)->rtype();
	//    .local v0, "rtype":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	this->argumentIdx = -0x2;
	if ( !(rtype->isPrimitive()) )  
		goto label_cond_24;
	this->frameBuf->position((this->frameBuf->capacity() -  dalvik::system::EmulatedStackFrame::getSize(rtype)));
label_goto_23:
	return;
	// 486    .line 377
label_cond_24:
	this->referencesOffset = ( dalvik::system::EmulatedStackFrame::-get0(this->frame)->size() + -0x1);
	goto label_goto_23;

}


