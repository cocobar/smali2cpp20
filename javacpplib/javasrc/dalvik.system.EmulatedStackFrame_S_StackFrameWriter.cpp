// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\EmulatedStackFrame$StackFrameWriter.smali
#include "java2ctype.h"
#include "dalvik.system.EmulatedStackFrame_S_StackFrameWriter.h"
#include "dalvik.system.EmulatedStackFrame.h"
#include "java.lang.Boolean.h"
#include "java.lang.Byte.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.Double.h"
#include "java.lang.Float.h"
#include "java.lang.Integer.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.Short.h"
#include "java.nio.ByteBuffer.h"

// .method public constructor <init>()V
dalvik::system::EmulatedStackFrame_S_StackFrameWriter::EmulatedStackFrame_S_StackFrameWriter()
{
	
	// 023    invoke-direct {p0}, Ldalvik/system/EmulatedStackFrame$StackFrameAccessor;-><init>()V
	return;

}
// .method public putNextBoolean(Z)V
void dalvik::system::EmulatedStackFrame_S_StackFrameWriter::putNextBoolean(bool value)
{
	
	int cVar0;
	
	//    .param p1, "value"    # Z
	this->checkType(java::lang::Boolean::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	if ( !(value) )  
		goto label_cond_14;
	cVar0 = 0x1;
label_goto_10:
	this->frameBuf->putInt(cVar0);
	return;
	// 060    .line 437
label_cond_14:
	cVar0 = 0x0;
	goto label_goto_10;

}
// .method public putNextByte(B)V
void dalvik::system::EmulatedStackFrame_S_StackFrameWriter::putNextByte(unsigned char value)
{
	
	//    .param p1, "value"    # B
	this->checkType(java::lang::Byte::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	this->frameBuf->putInt(value);
	return;

}
// .method public putNextChar(C)V
void dalvik::system::EmulatedStackFrame_S_StackFrameWriter::putNextChar(char value)
{
	
	//    .param p1, "value"    # C
	this->checkType(java::lang::Character::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	this->frameBuf->putInt(value);
	return;

}
// .method public putNextDouble(D)V
void dalvik::system::EmulatedStackFrame_S_StackFrameWriter::putNextDouble(double value)
{
	
	//    .param p1, "value"    # D
	this->checkType(java::lang::Double::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	this->frameBuf->putDouble(value);
	return;

}
// .method public putNextFloat(F)V
void dalvik::system::EmulatedStackFrame_S_StackFrameWriter::putNextFloat(float value)
{
	
	//    .param p1, "value"    # F
	this->checkType(java::lang::Float::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	this->frameBuf->putFloat(value);
	return;

}
// .method public putNextInt(I)V
void dalvik::system::EmulatedStackFrame_S_StackFrameWriter::putNextInt(int value)
{
	
	//    .param p1, "value"    # I
	this->checkType(java::lang::Integer::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	this->frameBuf->putInt(value);
	return;

}
// .method public putNextLong(J)V
void dalvik::system::EmulatedStackFrame_S_StackFrameWriter::putNextLong(long long value)
{
	
	//    .param p1, "value"    # J
	this->checkType(java::lang::Long::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	this->frameBuf->putLong(value);
	return;

}
// .method public putNextReference(Ljava/lang/Object;Ljava/lang/Class;)V
void dalvik::system::EmulatedStackFrame_S_StackFrameWriter::putNextReference(std::shared_ptr<java::lang::Object> value,std::shared_ptr<java::lang::Class<java::lang::Object>> expectedType)
{
	
	int cVar0;
	
	//    .param p1, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Signature;
	// 227        value = {
	// 228            "(",
	// 229            "Ljava/lang/Object;",
	// 230            "Ljava/lang/Class",
	// 231            "<*>;)V"
	// 232        }
	// 233    .end annotation
	//    .local p2, "expectedType":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	this->checkType(expectedType);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	cVar0 = this->referencesOffset;
	this->referencesOffset = ( cVar0 + 0x1);
	dalvik::system::EmulatedStackFrame::-get0(this->frame)[cVar0] = value;
	return;

}
// .method public putNextShort(S)V
void dalvik::system::EmulatedStackFrame_S_StackFrameWriter::putNextShort(short value)
{
	
	//    .param p1, "value"    # S
	this->checkType(java::lang::Short::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	this->frameBuf->putInt(value);
	return;

}


