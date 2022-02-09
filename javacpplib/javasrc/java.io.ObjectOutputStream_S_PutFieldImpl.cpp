// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$PutFieldImpl.smali
#include "java2ctype.h"
#include "java.io.Bits.h"
#include "java.io.IOException.h"
#include "java.io.ObjectOutput.h"
#include "java.io.ObjectOutputStream_S_BlockDataOutputStream.h"
#include "java.io.ObjectOutputStream_S_PutFieldImpl.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.ObjectStreamClass.h"
#include "java.io.ObjectStreamField.h"
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

// .method constructor <init>(Ljava/io/ObjectOutputStream;Ljava/io/ObjectStreamClass;)V
java::io::ObjectOutputStream_S_PutFieldImpl::ObjectOutputStream_S_PutFieldImpl(std::shared_ptr<java::io::ObjectOutputStream> this_S_0,std::shared_ptr<java::io::ObjectStreamClass> desc)
{
	
	//    .param p1, "this$0"    # Ljava/io/ObjectOutputStream;
	//    .param p2, "desc"    # Ljava/io/ObjectStreamClass;
	this->this_S_0 = this_S_0;
	// 038    invoke-direct {p0}, Ljava/io/ObjectOutputStream$PutField;-><init>()V
	this->desc = desc;
	this->primVals = std::make_shared<std::vector<unsigned char[]>>(desc->getPrimDataSize());
	this->objVals = std::make_shared<std::vector<std::vector<java::lang::Object>>>(desc->getNumObjFields());
	return;

}
// .method private getFieldOffset(Ljava/lang/String;Ljava/lang/Class;)I
int java::io::ObjectOutputStream_S_PutFieldImpl::getFieldOffset(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Class<java::lang::Object>> type)
{
	
	std::shared_ptr<java::io::ObjectStreamField> field;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 069        value = {
	// 070            "(",
	// 071            "Ljava/lang/String;",
	// 072            "Ljava/lang/Class",
	// 073            "<*>;)I"
	// 074        }
	// 075    .end annotation
	//    .local p2, "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	field = this->desc->getField(name, type);
	//    .local v0, "field":Ljava/io/ObjectStreamField;
	if ( field )     
		goto label_cond_2d;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("no such field ")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" with type ")))->append(type)->toString());
	// throw
	throw cVar0;
	// 127    .line 1778
label_cond_2d:
	return field->getOffset();

}
// .method public put(Ljava/lang/String;B)V
void java::io::ObjectOutputStream_S_PutFieldImpl::put(std::shared_ptr<java::lang::String> name,unsigned char val)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # B
	this->primVals[this->getFieldOffset(name, java::lang::Byte::TYPE)] = val;
	return;

}
// .method public put(Ljava/lang/String;C)V
void java::io::ObjectOutputStream_S_PutFieldImpl::put(std::shared_ptr<java::lang::String> name,char val)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # C
	java::io::Bits::putChar(this->primVals, this->getFieldOffset(name, java::lang::Character::TYPE), val);
	return;

}
// .method public put(Ljava/lang/String;D)V
void java::io::ObjectOutputStream_S_PutFieldImpl::put(std::shared_ptr<java::lang::String> name,double val)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # D
	java::io::Bits::putDouble(this->primVals, this->getFieldOffset(name, java::lang::Double::TYPE), val);
	return;

}
// .method public put(Ljava/lang/String;F)V
void java::io::ObjectOutputStream_S_PutFieldImpl::put(std::shared_ptr<java::lang::String> name,float val)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # F
	java::io::Bits::putFloat(this->primVals, this->getFieldOffset(name, java::lang::Float::TYPE), val);
	return;

}
// .method public put(Ljava/lang/String;I)V
void java::io::ObjectOutputStream_S_PutFieldImpl::put(std::shared_ptr<java::lang::String> name,int val)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # I
	java::io::Bits::putInt(this->primVals, this->getFieldOffset(name, java::lang::Integer::TYPE), val);
	return;

}
// .method public put(Ljava/lang/String;J)V
void java::io::ObjectOutputStream_S_PutFieldImpl::put(std::shared_ptr<java::lang::String> name,long long val)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # J
	java::io::Bits::putLong(this->primVals, this->getFieldOffset(name, java::lang::Long::TYPE), val);
	return;

}
// .method public put(Ljava/lang/String;Ljava/lang/Object;)V
void java::io::ObjectOutputStream_S_PutFieldImpl::put(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> val)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # Ljava/lang/Object;
	this->objVals[this->getFieldOffset(name, java::lang::Object())] = val;
	return;

}
// .method public put(Ljava/lang/String;S)V
void java::io::ObjectOutputStream_S_PutFieldImpl::put(std::shared_ptr<java::lang::String> name,short val)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # S
	java::io::Bits::putShort(this->primVals, this->getFieldOffset(name, java::lang::Short::TYPE), val);
	return;

}
// .method public put(Ljava/lang/String;Z)V
void java::io::ObjectOutputStream_S_PutFieldImpl::put(std::shared_ptr<java::lang::String> name,bool val)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # Z
	java::io::Bits::putBoolean(this->primVals, this->getFieldOffset(name, java::lang::Boolean::TYPE), val);
	return;

}
// .method public write(Ljava/io/ObjectOutput;)V
void java::io::ObjectOutputStream_S_PutFieldImpl::write(std::shared_ptr<java::io::ObjectOutput> out)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	auto fields;
	int i;
	std::shared_ptr<java::io::IOException> cVar2;
	
	//    .param p1, "out"    # Ljava/io/ObjectOutput;
	//    .annotation system Ldalvik/annotation/Throws;
	// 331        value = {
	// 332            Ljava/io/IOException;
	// 333        }
	// 334    .end annotation
	cVar0 = 0x0;
	if ( this->this_S_0 == out )
		goto label_cond_e;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("wrong stream")));
	// throw
	throw cVar1;
	// 353    .line 1727
label_cond_e:
	out->write(this->primVals, cVar0, this->primVals->size());
	fields = this->desc->getFields(cVar0);
	//    .local v0, "fields":[Ljava/io/ObjectStreamField;
	//    .local v2, "numPrimFields":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_23:
	if ( i >= this->objVals->size() )
		goto label_cond_45;
	if ( !(fields[((fields->size() - this->objVals->size()) + i)]->isUnshared()) )  
		goto label_cond_3b;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot write unshared object")));
	// throw
	throw cVar2;
	// 412    .line 1736
label_cond_3b:
	out->writeObject(this->objVals[i]);
	i = ( i + 0x1);
	goto label_goto_23;
	// 425    .line 1738
label_cond_45:
	return;

}
// .method writeFields()V
void java::io::ObjectOutputStream_S_PutFieldImpl::writeFields()
{
	
	int cVar0;
	auto fields;
	int i;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 433        value = {
	// 434            Ljava/io/IOException;
	// 435        }
	// 436    .end annotation
	cVar0 = 0x0;
	java::io::ObjectOutputStream::-get0(this->this_S_0)->write(this->primVals, cVar0, this->primVals->size(), cVar0);
	fields = this->desc->getFields(cVar0);
	//    .local v0, "fields":[Ljava/io/ObjectStreamField;
	//    .local v2, "numPrimFields":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_1c:
	if ( i >= this->objVals->size() )
		goto label_cond_37;
	try {
	//label_try_start_21:
	java::io::ObjectOutputStream::-wrap2(this->this_S_0, this->objVals[i], fields[((fields->size() - this->objVals->size()) + i)]->isUnshared());
	//label_try_end_32:
	}
	catch (...){
		goto label_catchall_35;
	}
	//    .catchall {:try_start_21 .. :try_end_32} :catchall_35
	i = ( i + 0x1);
	goto label_goto_1c;
	// 512    .line 1758
label_catchall_35:
	// move-exception
	
	// throw
	throw;
	// 518    .line 1764
label_cond_37:
	return;

}


