// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$FieldReflector.smali
#include "java2ctype.h"
#include "java.io.Bits.h"
#include "java.io.ObjectStreamClass_S_FieldReflector.h"
#include "java.io.ObjectStreamField.h"
#include "java.lang.Class.h"
#include "java.lang.ClassCastException.h"
#include "java.lang.InternalError.h"
#include "java.lang.Long.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.reflect.Field.h"
#include "java.util.ArrayList.h"
#include "java.util.HashSet.h"
#include "sun.misc.Unsafe.h"

static java::io::ObjectStreamClass_S_FieldReflector::unsafe;
// .method static constructor <clinit>()V
void java::io::ObjectStreamClass_S_FieldReflector::static_cinit()
{
	
	java::io::ObjectStreamClass_S_FieldReflector::unsafe = sun::misc::Unsafe::getUnsafe({const[class].FS-Param});
	return;

}
// .method constructor <init>([Ljava/io/ObjectStreamField;)V
java::io::ObjectStreamClass_S_FieldReflector::ObjectStreamClass_S_FieldReflector(std::shared_ptr<std::vector<java::io::ObjectStreamField>> fields)
{
	
	int nfields;
	std::shared_ptr<java::util::ArrayList> typeList;
	std::shared_ptr<java::util::HashSet> usedKeys;
	int i;
	std::shared_ptr<java::io::ObjectStreamField> f;
	std::shared_ptr<java::lang::reflect::Field> rf;
	long long key;
	std::shared_ptr<java::lang::Object> cVar0;
	auto key;
	std::shared_ptr<std::vector<java::lang::Class>> cVar2;
	
	//    .param p1, "fields"    # [Ljava/io/ObjectStreamField;
	// 069    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fields = fields;
	nfields = fields->size();
	//    .local v4, "nfields":I
	this->readKeys = std::make_shared<std::vector<long long[]>>(nfields);
	this->writeKeys = std::make_shared<std::vector<long long[]>>(nfields);
	this->offsets = std::make_shared<std::vector<int[]>>(nfields);
	this->typeCodes = std::make_shared<std::vector<char[]>>(nfields);
	typeList = std::make_shared<java::util::ArrayList>();
	//    .local v6, "typeList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/Class<*>;>;"
	usedKeys = std::make_shared<java::util::HashSet>();
	//    .local v7, "usedKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Long;>;"
	i = 0x0;
	//    .local v1, "i":I
label_goto_22:
	if ( i >= nfields )
		goto label_cond_6e;
	f = fields[i];
	//    .local v0, "f":Ljava/io/ObjectStreamField;
	rf = f->getField();
	//    .local v5, "rf":Ljava/lang/reflect/Field;
	if ( !(rf) )  
		goto label_cond_66;
	key = java::io::ObjectStreamClass_S_FieldReflector::unsafe->objectFieldOffset(rf);
	//    .local v2, "key":J
label_goto_32:
	this->readKeys[i] = key;
	if ( !(usedKeys->add(java::lang::Long::valueOf(key))) )  
		goto label_cond_69;
	//    .end local v2    # "key":J
label_goto_42:
	this->writeKeys[i] = key;
	this->offsets[i] = f->getOffset();
	this->typeCodes[i] = f->getTypeCode();
	if ( f->isPrimitive() )     
		goto label_cond_63;
	if ( !(rf) )  
		goto label_cond_6c;
	cVar0 = rf->getType();
label_goto_60:
	typeList->add(cVar0);
label_cond_63:
	i = ( i + 0x1);
	goto label_goto_22;
	// 202    .line 1898
label_cond_66:
	key = -0x1;
	//    .restart local v2    # "key":J
	goto label_goto_32;
	// 209    .line 1901
label_cond_69:
	key = -0x1;
	goto label_goto_42;
	// 215    .end local v2    # "key":J
label_cond_6c:
	cVar0 = 0x0;
	goto label_goto_60;
	// 222    .line 1909
	// 223    .end local v0    # "f":Ljava/io/ObjectStreamField;
	// 224    .end local v5    # "rf":Ljava/lang/reflect/Field;
label_cond_6e:
	cVar2 = typeList->toArray(std::make_shared<std::vector<std::vector<java::lang::Class>>>(typeList->size()));
	cVar2->checkCast("std::vector<java::lang::Class>");
	this->types = cVar2;
	this->numPrimFields = (nfields - this->types->size());
	return;

}
// .method getFields()[Ljava/io/ObjectStreamField;
std::shared_ptr<java::io::ObjectStreamField> java::io::ObjectStreamClass_S_FieldReflector::getFields()
{
	
	return this->fields;

}
// .method getObjFieldValues(Ljava/lang/Object;[Ljava/lang/Object;)V
void java::io::ObjectStreamClass_S_FieldReflector::getObjFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<std::vector<java::lang::Object>> vals)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	int i;
	std::shared_ptr<java::lang::InternalError> cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "vals"    # [Ljava/lang/Object;
	if ( obj )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 281    .line 2045
label_cond_8:
	i = this->numPrimFields;
	//    .local v0, "i":I
label_goto_a:
	if ( i >= this->fields->size() )
		goto label_cond_2f;
	// switch
	{
	auto item = ( this->typeCodes[i] );
	if (item == 0x4c) goto label_sswitch_1c;
	if (item == 0x5b) goto label_sswitch_1c;
	}
	cVar1 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar1;
	// 307    .line 2049
label_sswitch_1c:
	vals[this->offsets[i]] = java::io::ObjectStreamClass_S_FieldReflector::unsafe->getObject(obj, this->readKeys[i]);
	i = ( i + 0x1);
	goto label_goto_a;
	// 330    .line 2056
label_cond_2f:
	return;
	// 334    .line 2046
	// 335    :sswitch_data_30
	// 336    .sparse-switch
	// 337        0x4c -> :sswitch_1c
	// 338        0x5b -> :sswitch_1c
	// 339    .end sparse-switch

}
// .method getPrimFieldValues(Ljava/lang/Object;[B)V
void java::io::ObjectStreamClass_S_FieldReflector::getPrimFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<unsigned char[]> buf)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	int i;
	long long key;
	int off;
	std::shared_ptr<java::lang::InternalError> cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "buf"    # [B
	if ( obj )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 358    .line 1936
label_cond_8:
	i = 0x0;
	//    .local v0, "i":I
label_goto_9:
	if ( i >= this->numPrimFields )
		goto label_cond_73;
	key = this->readKeys[i];
	//    .local v2, "key":J
	off = this->offsets[i];
	//    .local v1, "off":I
	// switch
	{
	auto item = ( this->typeCodes[i] );
	if (item == 0x42) goto label_sswitch_2e;
	if (item == 0x43) goto label_sswitch_37;
	if (item == 0x44) goto label_sswitch_69;
	if (item == 0x46) goto label_sswitch_55;
	if (item == 0x49) goto label_sswitch_4b;
	if (item == 0x4a) goto label_sswitch_5f;
	if (item == 0x53) goto label_sswitch_41;
	if (item == 0x5a) goto label_sswitch_22;
	}
	cVar1 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar1;
	// 394    .line 1941
label_sswitch_22:
	java::io::Bits::putBoolean(buf, off, java::io::ObjectStreamClass_S_FieldReflector::unsafe->getBoolean(obj, key));
label_goto_2b:
	i = ( i + 0x1);
	goto label_goto_9;
	// 410    .line 1945
label_sswitch_2e:
	buf[off] = java::io::ObjectStreamClass_S_FieldReflector::unsafe->getByte(obj, key);
	goto label_goto_2b;
	// 422    .line 1949
label_sswitch_37:
	java::io::Bits::putChar(buf, off, java::io::ObjectStreamClass_S_FieldReflector::unsafe->getChar(obj, key));
	goto label_goto_2b;
	// 434    .line 1953
label_sswitch_41:
	java::io::Bits::putShort(buf, off, java::io::ObjectStreamClass_S_FieldReflector::unsafe->getShort(obj, key));
	goto label_goto_2b;
	// 446    .line 1957
label_sswitch_4b:
	java::io::Bits::putInt(buf, off, java::io::ObjectStreamClass_S_FieldReflector::unsafe->getInt(obj, key));
	goto label_goto_2b;
	// 458    .line 1961
label_sswitch_55:
	java::io::Bits::putFloat(buf, off, java::io::ObjectStreamClass_S_FieldReflector::unsafe->getFloat(obj, key));
	goto label_goto_2b;
	// 470    .line 1965
label_sswitch_5f:
	java::io::Bits::putLong(buf, off, java::io::ObjectStreamClass_S_FieldReflector::unsafe->getLong(obj, key));
	goto label_goto_2b;
	// 482    .line 1969
label_sswitch_69:
	java::io::Bits::putDouble(buf, off, java::io::ObjectStreamClass_S_FieldReflector::unsafe->getDouble(obj, key));
	goto label_goto_2b;
	// 494    .line 1976
	// 495    .end local v1    # "off":I
	// 496    .end local v2    # "key":J
label_cond_73:
	return;
	// 500    .line 1939
	// 501    :sswitch_data_74
	// 502    .sparse-switch
	// 503        0x42 -> :sswitch_2e
	// 504        0x43 -> :sswitch_37
	// 505        0x44 -> :sswitch_69
	// 506        0x46 -> :sswitch_55
	// 507        0x49 -> :sswitch_4b
	// 508        0x4a -> :sswitch_5f
	// 509        0x53 -> :sswitch_41
	// 510        0x5a -> :sswitch_22
	// 511    .end sparse-switch

}
// .method setObjFieldValues(Ljava/lang/Object;[Ljava/lang/Object;)V
void java::io::ObjectStreamClass_S_FieldReflector::setObjFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<std::vector<java::lang::Object>> vals)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	int i;
	long long key;
	std::shared_ptr<java::lang::InternalError> cVar1;
	std::shared_ptr<java::lang::Object> val;
	std::shared_ptr<java::lang::reflect::Field> f;
	std::shared_ptr<java::lang::ClassCastException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "vals"    # [Ljava/lang/Object;
	if ( obj )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 530    .line 2069
label_cond_8:
	i = this->numPrimFields;
	//    .local v1, "i":I
label_goto_a:
	if ( i >= this->fields->size() )
		goto label_cond_ba;
	key = this->writeKeys[i];
	//    .local v2, "key":J
	if ( (key > -0x1) )     
		goto label_cond_1c;
label_goto_19:
	i = ( i + 0x1);
	goto label_goto_a;
	// 561    .line 2074
label_cond_1c:
	// switch
	{
	auto item = ( this->typeCodes[i] );
	if (item == 0x4c) goto label_sswitch_29;
	if (item == 0x5b) goto label_sswitch_29;
	}
	cVar1 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar1;
	// 576    .line 2077
label_sswitch_29:
	val = vals[this->offsets[i]];
	//    .local v4, "val":Ljava/lang/Object;
	if ( !(val) )  
		goto label_cond_b3;
	if ( !(( this->types[(i - this->numPrimFields)]->isInstance(val) ^ 0x1)) )  
		goto label_cond_b3;
	f = this->fields[i]->getField();
	//    .local v0, "f":Ljava/lang/reflect/Field;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::ClassCastException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot assign instance of ")))->append(val->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" to field ")))->append(f->getDeclaringClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(".")))->append(f->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" of type ")))->append(f->getType()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in instance of ")))->append(obj->getClass()->getName())->toString());
	// throw
	throw cVar2;
	// 737    .line 2090
	// 738    .end local v0    # "f":Ljava/lang/reflect/Field;
label_cond_b3:
	java::io::ObjectStreamClass_S_FieldReflector::unsafe->putObject(obj, key, val);
	goto label_goto_19;
	// 746    .line 2097
	// 747    .end local v2    # "key":J
	// 748    .end local v4    # "val":Ljava/lang/Object;
label_cond_ba:
	return;
	// 752    .line 2074
	// 753    nop
	// 755    :sswitch_data_bc
	// 756    .sparse-switch
	// 757        0x4c -> :sswitch_29
	// 758        0x5b -> :sswitch_29
	// 759    .end sparse-switch

}
// .method setPrimFieldValues(Ljava/lang/Object;[B)V
void java::io::ObjectStreamClass_S_FieldReflector::setPrimFieldValues(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<unsigned char[]> buf)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	int i;
	long long key;
	int off;
	std::shared_ptr<java::lang::InternalError> cVar1;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "buf"    # [B
	if ( obj )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 778    .line 1987
label_cond_8:
	i = 0x0;
	//    .local v6, "i":I
label_goto_9:
	if ( i >= this->numPrimFields )
		goto label_cond_7b;
	key = this->writeKeys[i];
	//    .local v2, "key":J
	if ( (key > -0x1) )     
		goto label_cond_1a;
label_goto_17:
	i = ( i + 0x1);
	goto label_goto_9;
	// 807    .line 1992
label_cond_1a:
	off = this->offsets[i];
	//    .local v7, "off":I
	// switch
	{
	auto item = ( this->typeCodes[i] );
	if (item == 0x42) goto label_sswitch_35;
	if (item == 0x43) goto label_sswitch_3d;
	if (item == 0x44) goto label_sswitch_70;
	if (item == 0x46) goto label_sswitch_5b;
	if (item == 0x49) goto label_sswitch_51;
	if (item == 0x4a) goto label_sswitch_65;
	if (item == 0x53) goto label_sswitch_47;
	if (item == 0x5a) goto label_sswitch_2b;
	}
	cVar1 = std::make_shared<java::lang::InternalError>();
	// throw
	throw cVar1;
	// 828    .line 1995
label_sswitch_2b:
	java::io::ObjectStreamClass_S_FieldReflector::unsafe->putBoolean(obj, key, java::io::Bits::getBoolean(buf, off));
	goto label_goto_17;
	// 840    .line 1999
label_sswitch_35:
	java::io::ObjectStreamClass_S_FieldReflector::unsafe->putByte(obj, key, buf[off]);
	goto label_goto_17;
	// 850    .line 2003
label_sswitch_3d:
	java::io::ObjectStreamClass_S_FieldReflector::unsafe->putChar(obj, key, java::io::Bits::getChar(buf, off));
	goto label_goto_17;
	// 862    .line 2007
label_sswitch_47:
	java::io::ObjectStreamClass_S_FieldReflector::unsafe->putShort(obj, key, java::io::Bits::getShort(buf, off));
	goto label_goto_17;
	// 874    .line 2011
label_sswitch_51:
	java::io::ObjectStreamClass_S_FieldReflector::unsafe->putInt(obj, key, java::io::Bits::getInt(buf, off));
	goto label_goto_17;
	// 886    .line 2015
label_sswitch_5b:
	java::io::ObjectStreamClass_S_FieldReflector::unsafe->putFloat(obj, key, java::io::Bits::getFloat(buf, off));
	goto label_goto_17;
	// 898    .line 2019
label_sswitch_65:
	java::io::ObjectStreamClass_S_FieldReflector::unsafe->putLong(obj, key, java::io::Bits::getLong(buf, off));
	goto label_goto_17;
	// 912    .line 2023
label_sswitch_70:
	java::io::ObjectStreamClass_S_FieldReflector::unsafe->putDouble(obj, key, java::io::Bits::getDouble(buf, off));
	goto label_goto_17;
	// 926    .line 2030
	// 927    .end local v2    # "key":J
	// 928    .end local v7    # "off":I
label_cond_7b:
	return;
	// 932    .line 1993
	// 933    :sswitch_data_7c
	// 934    .sparse-switch
	// 935        0x42 -> :sswitch_35
	// 936        0x43 -> :sswitch_3d
	// 937        0x44 -> :sswitch_70
	// 938        0x46 -> :sswitch_5b
	// 939        0x49 -> :sswitch_51
	// 940        0x4a -> :sswitch_65
	// 941        0x53 -> :sswitch_47
	// 942        0x5a -> :sswitch_2b
	// 943    .end sparse-switch

}


