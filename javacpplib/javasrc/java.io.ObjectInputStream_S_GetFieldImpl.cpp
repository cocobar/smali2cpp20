// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$GetFieldImpl.smali
#include "java2ctype.h"
#include "java.io.Bits.h"
#include "java.io.ObjectInputStream_S_BlockDataInputStream.h"
#include "java.io.ObjectInputStream_S_GetFieldImpl.h"
#include "java.io.ObjectInputStream_S_HandleTable.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectStreamClass.h"
#include "java.io.ObjectStreamField.h"
#include "java.lang.Boolean.h"
#include "java.lang.Byte.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.Double.h"
#include "java.lang.Float.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.Short.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method constructor <init>(Ljava/io/ObjectInputStream;Ljava/io/ObjectStreamClass;)V
java::io::ObjectInputStream_S_GetFieldImpl::ObjectInputStream_S_GetFieldImpl(std::shared_ptr<java::io::ObjectInputStream> this_S_0,std::shared_ptr<java::io::ObjectStreamClass> desc)
{
	
	//    .param p1, "this$0"    # Ljava/io/ObjectInputStream;
	//    .param p2, "desc"    # Ljava/io/ObjectStreamClass;
	this->this_S_0 = this_S_0;
	// 040    invoke-direct {p0}, Ljava/io/ObjectInputStream$GetField;-><init>()V
	this->desc = desc;
	this->primVals = std::make_shared<std::vector<unsigned char[]>>(desc->getPrimDataSize());
	this->objVals = std::make_shared<std::vector<std::vector<java::lang::Object>>>(desc->getNumObjFields());
	this->objHandles = std::make_shared<std::vector<int[]>>(this->objVals->size());
	return;

}
// .method private getFieldOffset(Ljava/lang/String;Ljava/lang/Class;)I
int java::io::ObjectInputStream_S_GetFieldImpl::getFieldOffset(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Class<java::lang::Object>> type)
{
	
	std::shared_ptr<java::io::ObjectStreamField> field;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 080        value = {
	// 081            "(",
	// 082            "Ljava/lang/String;",
	// 083            "Ljava/lang/Class",
	// 084            "<*>;)I"
	// 085        }
	// 086    .end annotation
	//    .local p2, "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	field = this->desc->getField(name, type);
	//    .local v0, "field":Ljava/io/ObjectStreamField;
	if ( !(field) )  
		goto label_cond_d;
	return field->getOffset();
	// 108    .line 2190
label_cond_d:
	if ( !(this->desc->getLocalDesc()->getField(name, type)) )  
		goto label_cond_1b;
	return -0x1;
	// 127    .line 2193
label_cond_1b:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("no such field ")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" with type ")))->append(type)->toString());
	// throw
	throw cVar0;

}
// .method public defaulted(Ljava/lang/String;)Z
bool java::io::ObjectInputStream_S_GetFieldImpl::defaulted(std::shared_ptr<java::lang::String> name)
{
	
	bool cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 172        value = {
	// 173            Ljava/io/IOException;
	// 174        }
	// 175    .end annotation
	cVar1 = 0x0;
	if ( this->getFieldOffset(name, 0x0) >= 0 )
		goto label_cond_9;
	cVar1 = 0x1;
label_cond_9:
	return cVar1;

}
// .method public get(Ljava/lang/String;B)B
unsigned char java::io::ObjectInputStream_S_GetFieldImpl::get(std::shared_ptr<java::lang::String> name,unsigned char cVar0)
{
	
	int off;
	unsigned char cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # B
	//    .annotation system Ldalvik/annotation/Throws;
	// 200        value = {
	// 201            Ljava/io/IOException;
	// 202        }
	// 203    .end annotation
	off = this->getFieldOffset(name, java::lang::Byte::TYPE);
	//    .local v0, "off":I
	if ( off < 0 ) 
		goto label_cond_c;
	cVar0 = this->primVals[off];
	//    .end local p2    # "val":B
label_cond_c:
	return cVar0;

}
// .method public get(Ljava/lang/String;C)C
char java::io::ObjectInputStream_S_GetFieldImpl::get(std::shared_ptr<java::lang::String> name,char cVar0)
{
	
	int off;
	char cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # C
	//    .annotation system Ldalvik/annotation/Throws;
	// 231        value = {
	// 232            Ljava/io/IOException;
	// 233        }
	// 234    .end annotation
	off = this->getFieldOffset(name, java::lang::Character::TYPE);
	//    .local v0, "off":I
	if ( off < 0 ) 
		goto label_cond_e;
	cVar0 = java::io::Bits::getChar(this->primVals, off);
	//    .end local p2    # "val":C
label_cond_e:
	return cVar0;

}
// .method public get(Ljava/lang/String;D)D
double java::io::ObjectInputStream_S_GetFieldImpl::get(std::shared_ptr<java::lang::String> name,double cVar0)
{
	
	int off;
	double cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # D
	//    .annotation system Ldalvik/annotation/Throws;
	// 264        value = {
	// 265            Ljava/io/IOException;
	// 266        }
	// 267    .end annotation
	off = this->getFieldOffset(name, java::lang::Double::TYPE);
	//    .local v0, "off":I
	if ( off < 0 ) 
		goto label_cond_e;
	cVar0 = java::io::Bits::getDouble(this->primVals, off);
	//    .end local p2    # "val":D
label_cond_e:
	return cVar0;

}
// .method public get(Ljava/lang/String;F)F
float java::io::ObjectInputStream_S_GetFieldImpl::get(std::shared_ptr<java::lang::String> name,float cVar0)
{
	
	int off;
	float cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # F
	//    .annotation system Ldalvik/annotation/Throws;
	// 297        value = {
	// 298            Ljava/io/IOException;
	// 299        }
	// 300    .end annotation
	off = this->getFieldOffset(name, java::lang::Float::TYPE);
	//    .local v0, "off":I
	if ( off < 0 ) 
		goto label_cond_e;
	cVar0 = java::io::Bits::getFloat(this->primVals, off);
	//    .end local p2    # "val":F
label_cond_e:
	return cVar0;

}
// .method public get(Ljava/lang/String;I)I
int java::io::ObjectInputStream_S_GetFieldImpl::get(std::shared_ptr<java::lang::String> name,int cVar0)
{
	
	int off;
	int cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 330        value = {
	// 331            Ljava/io/IOException;
	// 332        }
	// 333    .end annotation
	off = this->getFieldOffset(name, java::lang::Integer::TYPE);
	//    .local v0, "off":I
	if ( off < 0 ) 
		goto label_cond_e;
	cVar0 = java::io::Bits::getInt(this->primVals, off);
	//    .end local p2    # "val":I
label_cond_e:
	return cVar0;

}
// .method public get(Ljava/lang/String;J)J
long long java::io::ObjectInputStream_S_GetFieldImpl::get(std::shared_ptr<java::lang::String> name,long long cVar0)
{
	
	int off;
	long long cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 363        value = {
	// 364            Ljava/io/IOException;
	// 365        }
	// 366    .end annotation
	off = this->getFieldOffset(name, java::lang::Long::TYPE);
	//    .local v0, "off":I
	if ( off < 0 ) 
		goto label_cond_e;
	cVar0 = java::io::Bits::getLong(this->primVals, off);
	//    .end local p2    # "val":J
label_cond_e:
	return cVar0;

}
// .method public get(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::io::ObjectInputStream_S_GetFieldImpl::get(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> val)
{
	
	std::shared_ptr<java::lang::Object> cVar1;
	int off;
	int objHandle;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 396        value = {
	// 397            Ljava/io/IOException;
	// 398        }
	// 399    .end annotation
	cVar1 = 0x0;
	off = this->getFieldOffset(name, java::lang::Object());
	//    .local v1, "off":I
	if ( off < 0 ) 
		goto label_cond_2d;
	objHandle = this->objHandles[off];
	//    .local v0, "objHandle":I
	java::io::ObjectInputStream::-get2(this->this_S_0)->markDependency(java::io::ObjectInputStream::-get3(this->this_S_0), objHandle);
	if ( java::io::ObjectInputStream::-get2(this->this_S_0)->lookupException(objHandle) )     
		goto label_cond_2c;
	cVar1 = this->objVals[off];
label_cond_2c:
	return cVar1;
	// 458    .line 2156
	// 459    .end local v0    # "objHandle":I
label_cond_2d:
	return val;

}
// .method public get(Ljava/lang/String;S)S
short java::io::ObjectInputStream_S_GetFieldImpl::get(std::shared_ptr<java::lang::String> name,short cVar0)
{
	
	int off;
	short cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # S
	//    .annotation system Ldalvik/annotation/Throws;
	// 469        value = {
	// 470            Ljava/io/IOException;
	// 471        }
	// 472    .end annotation
	off = this->getFieldOffset(name, java::lang::Short::TYPE);
	//    .local v0, "off":I
	if ( off < 0 ) 
		goto label_cond_e;
	cVar0 = java::io::Bits::getShort(this->primVals, off);
	//    .end local p2    # "val":S
label_cond_e:
	return cVar0;

}
// .method public get(Ljava/lang/String;Z)Z
bool java::io::ObjectInputStream_S_GetFieldImpl::get(std::shared_ptr<java::lang::String> name,bool cVar0)
{
	
	int off;
	bool cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 502        value = {
	// 503            Ljava/io/IOException;
	// 504        }
	// 505    .end annotation
	off = this->getFieldOffset(name, java::lang::Boolean::TYPE);
	//    .local v0, "off":I
	if ( off < 0 ) 
		goto label_cond_e;
	cVar0 = java::io::Bits::getBoolean(this->primVals, off);
	//    .end local p2    # "val":Z
label_cond_e:
	return cVar0;

}
// .method public getObjectStreamClass()Ljava/io/ObjectStreamClass;
std::shared_ptr<java::io::ObjectStreamClass> java::io::ObjectInputStream_S_GetFieldImpl::getObjectStreamClass()
{
	
	return this->desc;

}
// .method readFields()V
void java::io::ObjectInputStream_S_GetFieldImpl::readFields()
{
	
	int cVar0;
	auto fields;
	int i;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 543        value = {
	// 544            Ljava/io/IOException;
	// 545        }
	// 546    .end annotation
	cVar0 = 0x0;
	java::io::ObjectInputStream::-get0(this->this_S_0)->readFully(this->primVals, cVar0, this->primVals->size(), cVar0);
	//    .local v3, "oldHandle":I
	fields = this->desc->getFields(cVar0);
	//    .local v0, "fields":[Ljava/io/ObjectStreamField;
	//    .local v2, "numPrimFields":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_22:
	if ( i >= this->objVals->size() )
		goto label_cond_46;
	this->objVals[i] = java::io::ObjectInputStream::-wrap0(this->this_S_0, fields[((fields->size() - this->objVals->size()) + i)]->isUnshared());
	this->objHandles[i] = java::io::ObjectInputStream::-get3(this->this_S_0);
	i = ( i + 0x1);
	goto label_goto_22;
	// 640    .line 2174
label_cond_46:
	java::io::ObjectInputStream::-set0(this->this_S_0, java::io::ObjectInputStream::-get3(this->this_S_0));
	return;

}


