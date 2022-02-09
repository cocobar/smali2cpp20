// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\EmulatedStackFrame$StackFrameReader.smali
#include "java2ctype.h"
#include "dalvik.system.EmulatedStackFrame_S_StackFrameReader.h"
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
dalvik::system::EmulatedStackFrame_S_StackFrameReader::EmulatedStackFrame_S_StackFrameReader()
{
	
	// 023    invoke-direct {p0}, Ldalvik/system/EmulatedStackFrame$StackFrameAccessor;-><init>()V
	return;

}
// .method public nextBoolean()Z
bool dalvik::system::EmulatedStackFrame_S_StackFrameReader::nextBoolean()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	this->checkType(java::lang::Boolean::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	if ( !(this->frameBuf->getInt()) )  
		goto label_cond_15;
	cVar1 = 0x1;
label_cond_15:
	return cVar1;

}
// .method public nextByte()B
unsigned char dalvik::system::EmulatedStackFrame_S_StackFrameReader::nextByte()
{
	
	this->checkType(java::lang::Byte::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	return (unsigned char)(this->frameBuf->getInt());

}
// .method public nextChar()C
char dalvik::system::EmulatedStackFrame_S_StackFrameReader::nextChar()
{
	
	this->checkType(java::lang::Character::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	return (char)(this->frameBuf->getInt());

}
// .method public nextDouble()D
double dalvik::system::EmulatedStackFrame_S_StackFrameReader::nextDouble()
{
	
	this->checkType(java::lang::Double::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	return this->frameBuf->getDouble();

}
// .method public nextFloat()F
float dalvik::system::EmulatedStackFrame_S_StackFrameReader::nextFloat()
{
	
	this->checkType(java::lang::Float::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	return this->frameBuf->getFloat();

}
// .method public nextInt()I
int dalvik::system::EmulatedStackFrame_S_StackFrameReader::nextInt()
{
	
	this->checkType(java::lang::Integer::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	return this->frameBuf->getInt();

}
// .method public nextLong()J
long long dalvik::system::EmulatedStackFrame_S_StackFrameReader::nextLong()
{
	
	this->checkType(java::lang::Long::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	return this->frameBuf->getLong();

}
// .method public nextReference(Ljava/lang/Class;)Ljava/lang/Object;
template <typename T>
std::shared_ptr<T> dalvik::system::EmulatedStackFrame_S_StackFrameReader::nextReference(std::shared_ptr<java::lang::Class<T>> expectedType)
{
	
	int cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 226        value = {
	// 227            "<T:",
	// 228            "Ljava/lang/Object;",
	// 229            ">(",
	// 230            "Ljava/lang/Class",
	// 231            "<TT;>;)TT;"
	// 232        }
	// 233    .end annotation
	//    .local p1, "expectedType":Ljava/lang/Class;, "Ljava/lang/Class<TT;>;"
	this->checkType(expectedType);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	cVar0 = this->referencesOffset;
	this->referencesOffset = ( cVar0 + 0x1);
	return dalvik::system::EmulatedStackFrame::-get0(this->frame)[cVar0];

}
// .method public nextShort()S
short dalvik::system::EmulatedStackFrame_S_StackFrameReader::nextShort()
{
	
	this->checkType(java::lang::Short::TYPE);
	this->argumentIdx = ( this->argumentIdx + 0x1);
	return (short)(this->frameBuf->getInt());

}


