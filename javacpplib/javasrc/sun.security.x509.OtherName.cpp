// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\OtherName.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Class.h"
#include "java.lang.Exception.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.lang.reflect.Constructor.h"
#include "java.util.Arrays.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.OIDMap.h"
#include "sun.security.x509.OtherName.h"

static sun::security::x509::OtherName::TAG_VALUE;
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::OtherName::OtherName(std::shared_ptr<sun::security::util::DerValue> derValue)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<sun::security::util::DerInputStream> in;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "derValue"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 030        value = {
	// 031            Ljava/io/IOException;
	// 032        }
	// 033    .end annotation
	cVar0 = 0x0;
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->nameValue = cVar0;
	this->gni = cVar0;
	this->myhash = -0x1;
	in = derValue->toDerInputStream();
	//    .local v0, "in":Lsun/security/util/DerInputStream;
	this->oid = in->getOID();
	//    .local v1, "val":Lsun/security/util/DerValue;
	this->nameValue = in->getDerValue()->toByteArray();
	this->gni = this->getGNI(this->oid, this->nameValue);
	if ( !(this->gni) )  
		goto label_cond_36;
	this->name = this->gni->toString();
label_goto_35:
	return;
	// 107    .line 98
label_cond_36:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	this->name = cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unrecognized ObjectIdentifier: ")))->append(this->oid->toString())->toString();
	goto label_goto_35;

}
// .method public constructor <init>(Lsun/security/util/ObjectIdentifier;[B)V
sun::security::x509::OtherName::OtherName(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<unsigned char[]> value)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "value"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 143        value = {
	// 144            Ljava/io/IOException;
	// 145        }
	// 146    .end annotation
	cVar0 = 0x0;
	// 152    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->nameValue = cVar0;
	this->gni = cVar0;
	this->myhash = -0x1;
	if ( !(oid) )  
		goto label_cond_f;
	if ( value )     
		goto label_cond_18;
label_cond_f:
	cVar1 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("parameters may not be null")));
	// throw
	throw cVar1;
	// 180    .line 72
label_cond_18:
	this->oid = oid;
	this->nameValue = value;
	this->gni = this->getGNI(oid, value);
	if ( !(this->gni) )  
		goto label_cond_2f;
	this->name = this->gni->toString();
label_goto_2e:
	return;
	// 212    .line 78
label_cond_2f:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	this->name = cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unrecognized ObjectIdentifier: ")))->append(oid->toString())->toString();
	goto label_goto_2e;

}
// .method private getGNI(Lsun/security/util/ObjectIdentifier;[B)Lsun/security/x509/GeneralNameInterface;
std::shared_ptr<sun::security::x509::GeneralNameInterface> sun::security::x509::OtherName::getGNI(std::shared_ptr<sun::security::util::ObjectIdentifier> oid,std::shared_ptr<unsigned char[]> nameValue)
{
	
	std::shared_ptr<java::lang::Object> e;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::Class> extClass;
	std::shared<std::vector<std::vector<java::lang::Class>>> params;
	std::shared<std::vector<std::vector<java::lang::Object>>> passed;
	std::shared_ptr<sun::security::x509::GeneralNameInterface> gni;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	//    .param p2, "nameValue"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 246        value = {
	// 247            Ljava/io/IOException;
	// 248        }
	// 249    .end annotation
	try {
	//label_try_start_1:
	extClass = sun::security::x509::OIDMap::getClass(oid);
	//    .local v2, "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( extClass )     
		goto label_cond_8;
	return 0x0;
	// 267    .line 127
label_cond_8:
	params = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x1);
	params[0x0] = java::lang::Object();
	//    .local v4, "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	//    .local v0, "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	passed = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x1);
	passed[0x0] = nameValue;
	//    .local v5, "passed":[Ljava/lang/Object;
	gni = extClass->getConstructor(params)->newInstance(passed);
	gni->checkCast("sun::security::x509::GeneralNameInterface");
	//label_try_end_20:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_21;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_20} :catch_21
	//    .local v3, "gni":Lsun/security/x509/GeneralNameInterface;
	return gni;
	// 309    .line 134
	// 310    .end local v0    # "cons":Ljava/lang/reflect/Constructor;, "Ljava/lang/reflect/Constructor<*>;"
	// 311    .end local v2    # "extClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 312    .end local v3    # "gni":Lsun/security/x509/GeneralNameInterface;
	// 313    .end local v4    # "params":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	// 314    .end local v5    # "passed":[Ljava/lang/Object;
label_catch_21:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Instantiation error: ")))->append(e)->toString(), e);
	// throw
	throw cVar0;

}
// .method public constrains(Lsun/security/x509/GeneralNameInterface;)I
int sun::security::x509::OtherName::constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "inputName"    # Lsun/security/x509/GeneralNameInterface;
	if ( inputName )     
		goto label_cond_4;
	//    .local v0, "constraintType":I
label_goto_3:
	return constraintType;
	// 363    .line 248
	// 364    .end local v0    # "constraintType":I
label_cond_4:
	if ( !(inputName->getType()) )  
		goto label_cond_c;
	//    .restart local v0    # "constraintType":I
	goto label_goto_3;
	// 378    .line 251
	// 379    .end local v0    # "constraintType":I
label_cond_c:
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Narrowing, widening, and matching are not supported for OtherName.")));
	// throw
	throw cVar0;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::OtherName::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 394        value = {
	// 395            Ljava/io/IOException;
	// 396        }
	// 397    .end annotation
	if ( !(this->gni) )  
		goto label_cond_a;
	this->gni->encode(out);
	return;
	// 413    .line 159
label_cond_a:
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	tmp->putOID(this->oid);
	tmp->write(sun::security::util::DerValue::createTag(-0x80, 0x1, 0x0), this->nameValue);
	out->write(0x30, tmp);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::OtherName::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<sun::security::x509::OtherName> otherOther;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::x509::GeneralNameInterface> otherGNI;
	bool result;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return 0x1;
	// 464    .line 175
label_cond_5:
	if ( other->instanceOf("sun::security::x509::OtherName") )     
		goto label_cond_a;
	return cVar0;
label_cond_a:
	otherOther = other;
	otherOther->checkCast("sun::security::x509::OtherName");
	//    .local v3, "otherOther":Lsun/security/x509/OtherName;
	if ( otherOther->oid->equals(this->oid) )     
		goto label_cond_18;
	return cVar0;
	// 494    .line 182
label_cond_18:
	0x0;
	//    .local v2, "otherGNI":Lsun/security/x509/GeneralNameInterface;
	try {
	//label_try_start_19:
	//label_try_end_20:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2b;
	}
	//    .catch Ljava/io/IOException; {:try_start_19 .. :try_end_20} :catch_2b
	otherGNI = this->getGNI(otherOther->oid, otherOther->nameValue);
	//    .local v2, "otherGNI":Lsun/security/x509/GeneralNameInterface;
	if ( !(otherGNI) )  
		goto label_cond_32;
	try {
	//label_try_start_23:
	//label_try_end_26:
	}
	catch (java::lang::UnsupportedOperationException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2f;
	}
	//    .catch Ljava/lang/UnsupportedOperationException; {:try_start_23 .. :try_end_26} :catch_2f
	if ( otherGNI->constrains(this) )     
		goto label_cond_2d;
	result = 0x1;
label_goto_2a:
	return result;
	// 531    .line 185
	// 532    .local v2, "otherGNI":Lsun/security/x509/GeneralNameInterface;
label_catch_2b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ioe":Ljava/io/IOException;
	return cVar0;
	// 540    .line 192
	// 541    .end local v0    # "ioe":Ljava/io/IOException;
	// 542    .local v2, "otherGNI":Lsun/security/x509/GeneralNameInterface;
label_cond_2d:
	result = 0x0;
	//    .local v4, "result":Z
	goto label_goto_2a;
	// 549    .line 193
	// 550    .end local v4    # "result":Z
label_catch_2f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ioe":Ljava/lang/UnsupportedOperationException;
	result = 0x0;
	//    .restart local v4    # "result":Z
	goto label_goto_2a;
	// 561    .line 197
	// 562    .end local v1    # "ioe":Ljava/lang/UnsupportedOperationException;
	// 563    .end local v4    # "result":Z
label_cond_32:
	result = java::util::Arrays::equals(this->nameValue, otherOther->nameValue);
	//    .local v4, "result":Z
	goto label_goto_2a;

}
// .method public getNameValue()[B
unsigned char sun::security::x509::OtherName::getNameValue()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	cVar0 = this->nameValue->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public getOID()Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::x509::OtherName::getOID()
{
	
	return this->oid;

}
// .method public getType()I
int sun::security::x509::OtherName::getType()
{
	
	return 0x0;

}
// .method public hashCode()I
int sun::security::x509::OtherName::hashCode()
{
	
	int i;
	
	if ( this->myhash != -0x1 )
		goto label_cond_23;
	this->myhash = ( this->oid->hashCode() + 0x25);
	i = 0x0;
	//    .local v0, "i":I
label_goto_10:
	if ( i >= this->nameValue->size() )
		goto label_cond_23;
	this->myhash = (( this->myhash * 0x25) +  this->nameValue[i]);
	i = ( i + 0x1);
	goto label_goto_10;
	// 664    .line 215
	// 665    .end local v0    # "i":I
label_cond_23:
	return this->myhash;

}
// .method public subtreeDepth()I
int sun::security::x509::OtherName::subtreeDepth()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("subtreeDepth() not supported for generic OtherName")));
	// throw
	throw cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::OtherName::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Other-Name: ")))->append(this->name)->toString();

}


