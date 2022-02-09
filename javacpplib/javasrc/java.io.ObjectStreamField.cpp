// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamField.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamField.h"
#include "java.lang.Boolean.h"
#include "java.lang.Byte.h"
#include "java.lang.Character.h"
#include "java.lang.Class.h"
#include "java.lang.Double.h"
#include "java.lang.Float.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.InternalError.h"
#include "java.lang.Long.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.Short.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Void.h"
#include "java.lang.reflect.Field.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Class;)V
java::io::ObjectStreamField::ObjectStreamField(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Class<java::lang::Object>> type)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 047        value = {
	// 048            "(",
	// 049            "Ljava/lang/String;",
	// 050            "Ljava/lang/Class",
	// 051            "<*>;)V"
	// 052        }
	// 053    .end annotation
	//    .local p2, "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	java::io::ObjectStreamField::(name, type, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Class;Z)V
java::io::ObjectStreamField::ObjectStreamField(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Class<java::lang::Object>> type,bool unshared)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p3, "unshared"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 071        value = {
	// 072            "(",
	// 073            "Ljava/lang/String;",
	// 074            "Ljava/lang/Class",
	// 075            "<*>;Z)V"
	// 076        }
	// 077    .end annotation
	//    .local p2, "type":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 084    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->offset = 0x0;
	if ( name )     
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 101    .line 92
label_cond_f:
	this->name = name;
	this->type = type;
	this->unshared = unshared;
	this->signature = java::io::ObjectStreamField::getClassSignature(type)->intern();
	this->field = 0x0;
	return;

}
// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;Z)V
java::io::ObjectStreamField::ObjectStreamField(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> signature,bool unshared)
{
	
	int cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "signature"    # Ljava/lang/String;
	//    .param p3, "unshared"    # Z
	cVar0 = 0x0;
	// 141    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->offset = cVar0;
	if ( name )     
		goto label_cond_f;
	cVar1 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar1;
	// 156    .line 107
label_cond_f:
	this->name = name;
	this->signature = signature->intern();
	this->unshared = unshared;
	this->field = 0x0;
	// switch
	{
	auto item = ( signature->charAt(cVar0) );
	if (item == 0x42) goto label_sswitch_30;
	if (item == 0x43) goto label_sswitch_35;
	if (item == 0x44) goto label_sswitch_4e;
	if (item == 0x46) goto label_sswitch_49;
	if (item == 0x49) goto label_sswitch_3f;
	if (item == 0x4a) goto label_sswitch_44;
	if (item == 0x4c) goto label_sswitch_53;
	if (item == 0x53) goto label_sswitch_3a;
	if (item == 0x5a) goto label_sswitch_2b;
	if (item == 0x5b) goto label_sswitch_53;
	}
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("illegal signature")));
	// throw
	throw cVar2;
	// 189    .line 113
label_sswitch_2b:
	this->type = java::lang::Boolean::TYPE;
label_goto_2f:
	return;
	// 199    .line 114
label_sswitch_30:
	this->type = java::lang::Byte::TYPE;
	goto label_goto_2f;
	// 207    .line 115
label_sswitch_35:
	this->type = java::lang::Character::TYPE;
	goto label_goto_2f;
	// 215    .line 116
label_sswitch_3a:
	this->type = java::lang::Short::TYPE;
	goto label_goto_2f;
	// 223    .line 117
label_sswitch_3f:
	this->type = java::lang::Integer::TYPE;
	goto label_goto_2f;
	// 231    .line 118
label_sswitch_44:
	this->type = java::lang::Long::TYPE;
	goto label_goto_2f;
	// 239    .line 119
label_sswitch_49:
	this->type = java::lang::Float::TYPE;
	goto label_goto_2f;
	// 247    .line 120
label_sswitch_4e:
	this->type = java::lang::Double::TYPE;
	goto label_goto_2f;
	// 255    .line 122
label_sswitch_53:
	this->type = java::lang::Object();
	goto label_goto_2f;
	// 263    .line 112
	// 264    :sswitch_data_58
	// 265    .sparse-switch
	// 266        0x42 -> :sswitch_30
	// 267        0x43 -> :sswitch_35
	// 268        0x44 -> :sswitch_4e
	// 269        0x46 -> :sswitch_49
	// 270        0x49 -> :sswitch_3f
	// 271        0x4a -> :sswitch_44
	// 272        0x4c -> :sswitch_53
	// 273        0x53 -> :sswitch_3a
	// 274        0x5a -> :sswitch_2b
	// 275        0x5b -> :sswitch_53
	// 276    .end sparse-switch

}
// .method constructor <init>(Ljava/lang/reflect/Field;ZZ)V
java::io::ObjectStreamField::ObjectStreamField(std::shared_ptr<java::lang::reflect::Field> field,bool unshared,bool showType)
{
	
	std::shared_ptr<java::lang::Class> ftype;
	std::shared_ptr<java::lang::Class> cVar0;
	std::shared_ptr<java::lang::Object> cVar0;
	
	//    .param p1, "field"    # Ljava/lang/reflect/Field;
	//    .param p2, "unshared"    # Z
	//    .param p3, "showType"    # Z
	// 287    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->offset = 0x0;
	this->field = field;
	this->unshared = unshared;
	this->name = field->getName();
	ftype = field->getType();
	//    .local v0, "ftype":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( showType )     
		goto label_cond_1c;
	if ( !(ftype->isPrimitive()) )  
		goto label_cond_2a;
label_cond_1c:
	cVar0 = ftype;
label_goto_1d:
	this->type = cVar0;
	this->signature = java::io::ObjectStreamField::getClassSignature(ftype)->intern();
	return;
	// 342    .line 140
label_cond_2a:
	cVar0 = java::lang::Object();
	goto label_goto_1d;

}
// .method private static getClassSignature(Ljava/lang/Class;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectStreamField::getClassSignature(std::shared_ptr<java::lang::Class<java::lang::Object>> cl)
{
	
	std::shared_ptr<java::lang::StringBuilder> sbuf;
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<java::lang::InternalError> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 352        value = {
	// 353            "(",
	// 354            "Ljava/lang/Class",
	// 355            "<*>;)",
	// 356            "Ljava/lang/String;"
	// 357        }
	// 358    .end annotation
	//    .local p0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	sbuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sbuf":Ljava/lang/StringBuilder;
label_goto_5:
	if ( !(cl->isArray()) )  
		goto label_cond_15;
	sbuf->append(0x5b);
	cl = cl->getComponentType();
	goto label_goto_5;
	// 388    .line 294
label_cond_15:
	if ( !(cl->isPrimitive()) )  
		goto label_cond_7f;
	if ( cl != java::lang::Integer::TYPE )
		goto label_cond_29;
	sbuf->append(0x49);
label_goto_24:
	return sbuf->toString();
	// 414    .line 297
label_cond_29:
	if ( cl != java::lang::Byte::TYPE )
		goto label_cond_33;
	sbuf->append(0x42);
	goto label_goto_24;
	// 427    .line 299
label_cond_33:
	if ( cl != java::lang::Long::TYPE )
		goto label_cond_3d;
	sbuf->append(0x4a);
	goto label_goto_24;
	// 440    .line 301
label_cond_3d:
	if ( cl != java::lang::Float::TYPE )
		goto label_cond_47;
	sbuf->append(0x46);
	goto label_goto_24;
	// 453    .line 303
label_cond_47:
	if ( cl != java::lang::Double::TYPE )
		goto label_cond_51;
	sbuf->append(0x44);
	goto label_goto_24;
	// 466    .line 305
label_cond_51:
	if ( cl != java::lang::Short::TYPE )
		goto label_cond_5b;
	sbuf->append(0x53);
	goto label_goto_24;
	// 479    .line 307
label_cond_5b:
	if ( cl != java::lang::Character::TYPE )
		goto label_cond_65;
	sbuf->append(0x43);
	goto label_goto_24;
	// 492    .line 309
label_cond_65:
	if ( cl != java::lang::Boolean::TYPE )
		goto label_cond_6f;
	sbuf->append(0x5a);
	goto label_goto_24;
	// 505    .line 311
label_cond_6f:
	if ( cl != java::lang::Void::TYPE )
		goto label_cond_79;
	sbuf->append(0x56);
	goto label_goto_24;
	// 518    .line 314
label_cond_79:
	cVar0 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar0;
	// 526    .line 317
label_cond_7f:
	sbuf->append(0x4c)->append(cl->getName()->replace(0x2e, 0x2f))->append(0x3b);
	goto label_goto_24;

}
// .method public compareTo(Ljava/lang/Object;)I
int java::io::ObjectStreamField::compareTo(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::ObjectStreamField> other;
	int isPrim;
	int cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	other = obj;
	other->checkCast("java::io::ObjectStreamField");
	//    .local v1, "other":Ljava/io/ObjectStreamField;
	isPrim = this->isPrimitive();
	//    .local v0, "isPrim":Z
	if ( isPrim == other->isPrimitive() )
		goto label_cond_13;
	if ( !(isPrim) )  
		goto label_cond_11;
	cVar0 = -0x1;
label_goto_10:
	return cVar0;
label_cond_11:
	cVar0 = 0x1;
	goto label_goto_10;
	// 596    .line 259
label_cond_13:
	return this->name->compareTo(other->name);

}
// .method getField()Ljava/lang/reflect/Field;
std::shared_ptr<java::lang::reflect::Field> java::io::ObjectStreamField::getField()
{
	
	return this->field;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectStreamField::getName()
{
	
	return this->name;

}
// .method public getOffset()I
int java::io::ObjectStreamField::getOffset()
{
	
	return this->offset;

}
// .method getSignature()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectStreamField::getSignature()
{
	
	return this->signature;

}
// .method public getType()Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::io::ObjectStreamField::getType()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 652        value = {
	// 653            "()",
	// 654            "Ljava/lang/Class",
	// 655            "<*>;"
	// 656        }
	// 657    .end annotation
	//    .annotation runtime Lsun/reflect/CallerSensitive;
	// 660    .end annotation
	return this->type;

}
// .method public getTypeCode()C
char java::io::ObjectStreamField::getTypeCode()
{
	
	return this->signature->charAt(0x0);

}
// .method public getTypeString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectStreamField::getTypeString()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	if ( !(this->isPrimitive()) )  
		goto label_cond_8;
	cVar0 = 0x0;
label_goto_7:
	return cVar0;
label_cond_8:
	cVar0 = this->signature;
	goto label_goto_7;

}
// .method public isPrimitive()Z
bool java::io::ObjectStreamField::isPrimitive()
{
	
	int cVar1;
	int tcode;
	bool cVar1;
	
	cVar1 = 0x0;
	tcode = this->signature->charAt(cVar1);
	//    .local v0, "tcode":C
	if ( tcode == 0x4c )
		goto label_cond_10;
	if ( tcode == 0x5b )
		goto label_cond_10;
	cVar1 = 0x1;
label_cond_10:
	return cVar1;

}
// .method public isUnshared()Z
bool java::io::ObjectStreamField::isUnshared()
{
	
	return this->unshared;

}
// .method protected setOffset(I)V
void java::io::ObjectStreamField::setOffset(int offset)
{
	
	//    .param p1, "offset"    # I
	this->offset = offset;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::ObjectStreamField::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->signature)->append(0x20)->append(this->name)->toString();

}


