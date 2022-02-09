// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\AuthorityKeyIdentifierExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.AuthorityKeyIdentifierExtension.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.KeyIdentifier.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.SerialNumber.h"

static sun::security::x509::AuthorityKeyIdentifierExtension::AUTH_NAME = std::make_shared<java::lang::String>("auth_name");
static sun::security::x509::AuthorityKeyIdentifierExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.AuthorityKeyIdentifier");
static sun::security::x509::AuthorityKeyIdentifierExtension::KEY_ID = std::make_shared<java::lang::String>("key_id");
static sun::security::x509::AuthorityKeyIdentifierExtension::NAME = std::make_shared<java::lang::String>("AuthorityKeyIdentifier");
static sun::security::x509::AuthorityKeyIdentifierExtension::SERIAL_NUMBER = std::make_shared<java::lang::String>("serial_number");
static sun::security::x509::AuthorityKeyIdentifierExtension::TAG_ID = 0x0t;
static sun::security::x509::AuthorityKeyIdentifierExtension::TAG_NAMES = 0x1t;
static sun::security::x509::AuthorityKeyIdentifierExtension::TAG_SERIAL_NUM = 0x2t;
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::AuthorityKeyIdentifierExtension::AuthorityKeyIdentifierExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	std::shared_ptr<sun::security::x509::KeyIdentifier> cVar2;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<sun::security::util::DerValue> opt;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<sun::security::x509::KeyIdentifier> cVar4;
	std::shared_ptr<java::io::IOException> cVar6;
	std::shared_ptr<sun::security::x509::GeneralNames> cVar7;
	std::shared_ptr<java::io::IOException> cVar8;
	std::shared_ptr<sun::security::x509::SerialNumber> cVar9;
	std::shared_ptr<java::io::IOException> cVar10;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 053        value = {
	// 054            Ljava/io/IOException;
	// 055        }
	// 056    .end annotation
	cVar0 = 0x30;
	cVar1 = 0x2;
	cVar2 = 0x0;
	// 068    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->id = cVar2;
	this->names = cVar2;
	this->serialNum = cVar2;
	this->extensionId = sun::security::x509::PKIXExtensions::AuthorityKey_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v1, "val":Lsun/security/util/DerValue;
	if ( val->tag == cVar0 )
		goto label_cond_3b;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for AuthorityKeyIdentifierExtension.")));
	// throw
	throw cVar3;
	// 119    .line 171
	// 120    .local v0, "opt":Lsun/security/util/DerValue;
label_cond_30:
	opt->resetTag(0x4);
	cVar4 = std::make_shared<sun::security::x509::KeyIdentifier>(opt);
	this->id = cVar4;
	//    .end local v0    # "opt":Lsun/security/util/DerValue;
label_cond_3b:
label_goto_3b:
	if ( !(val->data) )  
		goto label_cond_bc;
	if ( !(val->data->available()) )  
		goto label_cond_bc;
	opt = val->data->getDerValue();
	//    .restart local v0    # "opt":Lsun/security/util/DerValue;
	if ( !(opt->isContextSpecific(0x0)) )  
		goto label_cond_68;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_68;
	if ( !(this->id) )  
		goto label_cond_30;
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate KeyIdentifier in AuthorityKeyIdentifier.")));
	// throw
	throw cVar5;
	// 186    .line 174
label_cond_68:
	if ( !(opt->isContextSpecific(0x1)) )  
		goto label_cond_8d;
	if ( !(opt->isConstructed()) )  
		goto label_cond_8d;
	if ( !(this->names) )  
		goto label_cond_82;
	cVar6 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate GeneralNames in AuthorityKeyIdentifier.")));
	// throw
	throw cVar6;
	// 218    .line 179
label_cond_82:
	opt->resetTag(cVar0);
	cVar7 = std::make_shared<sun::security::x509::GeneralNames>(opt);
	this->names = cVar7;
	goto label_goto_3b;
	// 231    .line 182
label_cond_8d:
	if ( !(opt->isContextSpecific(cVar1)) )  
		goto label_cond_b3;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_b3;
	if ( !(this->serialNum) )  
		goto label_cond_a8;
	cVar8 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate SerialNumber in AuthorityKeyIdentifier.")));
	// throw
	throw cVar8;
	// 263    .line 187
label_cond_a8:
	opt->resetTag(cVar1);
	cVar9 = std::make_shared<sun::security::x509::SerialNumber>(opt);
	this->serialNum = cVar9;
	goto label_goto_3b;
	// 276    .line 190
label_cond_b3:
	cVar10 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of AuthorityKeyIdentifierExtension.")));
	// throw
	throw cVar10;
	// 286    .line 193
	// 287    .end local v0    # "opt":Lsun/security/util/DerValue;
label_cond_bc:
	return;

}
// .method public constructor <init>(Lsun/security/x509/KeyIdentifier;Lsun/security/x509/GeneralNames;Lsun/security/x509/SerialNumber;)V
sun::security::x509::AuthorityKeyIdentifierExtension::AuthorityKeyIdentifierExtension(std::shared_ptr<sun::security::x509::KeyIdentifier> kid,std::shared_ptr<sun::security::x509::GeneralNames> name,std::shared_ptr<sun::security::x509::SerialNumber> sn)
{
	
	std::shared_ptr<sun::security::x509::KeyIdentifier> cVar0;
	
	//    .param p1, "kid"    # Lsun/security/x509/KeyIdentifier;
	//    .param p2, "name"    # Lsun/security/x509/GeneralNames;
	//    .param p3, "sn"    # Lsun/security/x509/SerialNumber;
	//    .annotation system Ldalvik/annotation/Throws;
	// 298        value = {
	// 299            Ljava/io/IOException;
	// 300        }
	// 301    .end annotation
	cVar0 = 0x0;
	// 307    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->id = cVar0;
	this->names = cVar0;
	this->serialNum = cVar0;
	this->id = kid;
	this->names = name;
	this->serialNum = sn;
	this->extensionId = sun::security::x509::PKIXExtensions::AuthorityKey_Id;
	this->critical = 0x0;
	this->encodeThis();
	return;

}
// .method private encodeThis()V
void sun::security::x509::AuthorityKeyIdentifierExtension::encodeThis()
{
	
	bool cVar0;
	unsigned char cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 347        value = {
	// 348            Ljava/io/IOException;
	// 349        }
	// 350    .end annotation
	cVar0 = 0x0;
	cVar1 = -0x80;
	if ( this->id )     
		goto label_cond_13;
	if ( this->names )     
		goto label_cond_13;
	if ( this->serialNum )     
		goto label_cond_13;
	this->extensionValue = 0x0;
	return;
	// 378    .line 88
label_cond_13:
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "seq":Lsun/security/util/DerOutputStream;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "tmp":Lsun/security/util/DerOutputStream;
	if ( !(this->id) )  
		goto label_cond_32;
	tmp1 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v3, "tmp1":Lsun/security/util/DerOutputStream;
	this->id->encode(tmp1);
	tmp->writeImplicit(sun::security::util::DerValue::createTag(cVar1, cVar0, cVar0), tmp1);
	//    .end local v3    # "tmp1":Lsun/security/util/DerOutputStream;
label_cond_32:
	try {
	//label_try_start_32:
	if ( !(this->names) )  
		goto label_cond_4b;
	tmp1 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v3    # "tmp1":Lsun/security/util/DerOutputStream;
	this->names->encode(tmp1);
	tmp->writeImplicit(sun::security::util::DerValue::createTag(-0x80, 0x1, 0x1), tmp1);
	//label_try_end_4b:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6d;
	}
	//    .catch Ljava/lang/Exception; {:try_start_32 .. :try_end_4b} :catch_6d
	//    .end local v3    # "tmp1":Lsun/security/util/DerOutputStream;
label_cond_4b:
	if ( !(this->serialNum) )  
		goto label_cond_61;
	tmp1 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v3    # "tmp1":Lsun/security/util/DerOutputStream;
	this->serialNum->encode(tmp1);
	tmp->writeImplicit(sun::security::util::DerValue::createTag(cVar1, cVar0, 0x2), tmp1);
	//    .end local v3    # "tmp1":Lsun/security/util/DerOutputStream;
label_cond_61:
	seq->write(0x30, tmp);
	this->extensionValue = seq->toByteArray();
	return;
	// 495    .line 103
label_catch_6d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar2 = std::make_shared<java::io::IOException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar2;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::AuthorityKeyIdentifierExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::x509::KeyIdentifier> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 518        value = {
	// 519            Ljava/io/IOException;
	// 520        }
	// 521    .end annotation
	cVar0 = 0x0;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")))) )  
		goto label_cond_10;
	this->id = cVar0;
label_goto_c:
	this->encodeThis();
	return;
	// 545    .line 280
label_cond_10:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("auth_name")))) )  
		goto label_cond_1c;
	this->names = cVar0;
	goto label_goto_c;
	// 560    .line 282
label_cond_1c:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("serial_number")))) )  
		goto label_cond_28;
	this->serialNum = cVar0;
	goto label_goto_c;
	// 575    .line 285
label_cond_28:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:AuthorityKeyIdentifier.")));
	// throw
	throw cVar1;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::AuthorityKeyIdentifierExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 590        value = {
	// 591            Ljava/io/IOException;
	// 592        }
	// 593    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::AuthorityKey_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::AuthorityKeyIdentifierExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 639        value = {
	// 640            Ljava/io/IOException;
	// 641        }
	// 642    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")))) )  
		goto label_cond_c;
	return this->id;
	// 659    .line 264
label_cond_c:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("auth_name")))) )  
		goto label_cond_18;
	return this->names;
	// 674    .line 266
label_cond_18:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("serial_number")))) )  
		goto label_cond_24;
	return this->serialNum;
	// 689    .line 269
label_cond_24:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:AuthorityKeyIdentifier.")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::AuthorityKeyIdentifierExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 703        value = {
	// 704            "()",
	// 705            "Ljava/util/Enumeration",
	// 706            "<",
	// 707            "Ljava/lang/String;",
	// 708            ">;"
	// 709        }
	// 710    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("auth_name")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("serial_number")));
	return elements->elements();

}
// .method public getEncodedKeyIdentifier()[B
unsigned char sun::security::x509::AuthorityKeyIdentifierExtension::getEncodedKeyIdentifier()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> derOut;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 745        value = {
	// 746            Ljava/io/IOException;
	// 747        }
	// 748    .end annotation
	if ( !(this->id) )  
		goto label_cond_14;
	derOut = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "derOut":Lsun/security/util/DerOutputStream;
	this->id->encode(derOut);
	return derOut->toByteArray();
	// 776    .line 320
	// 777    .end local v0    # "derOut":Lsun/security/util/DerOutputStream;
label_cond_14:
	return 0x0;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AuthorityKeyIdentifierExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("AuthorityKeyIdentifier"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::AuthorityKeyIdentifierExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 797        value = {
	// 798            Ljava/io/IOException;
	// 799        }
	// 800    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("sun::security::x509::KeyIdentifier") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type KeyIdentifier.")));
	// throw
	throw cVar0;
	// 826    .line 238
label_cond_16:
	obj->checkCast("sun::security::x509::KeyIdentifier");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->id = obj;
label_goto_1a:
	this->encodeThis();
	return;
	// 840    .line 239
	// 841    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("auth_name")))) )  
		goto label_cond_39;
	if ( obj->instanceOf("sun::security::x509::GeneralNames") )     
		goto label_cond_34;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type GeneralNames.")));
	// throw
	throw cVar1;
	// 865    .line 244
label_cond_34:
	obj->checkCast("sun::security::x509::GeneralNames");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->names = obj;
	goto label_goto_1a;
	// 874    .line 245
	// 875    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_39:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("serial_number")))) )  
		goto label_cond_54;
	if ( obj->instanceOf("sun::security::x509::SerialNumber") )     
		goto label_cond_4f;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type SerialNumber.")));
	// throw
	throw cVar2;
	// 899    .line 250
label_cond_4f:
	obj->checkCast("sun::security::x509::SerialNumber");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->serialNum = obj;
	goto label_goto_1a;
	// 908    .line 252
	// 909    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_54:
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:AuthorityKeyIdentifier.")));
	// throw
	throw cVar3;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::AuthorityKeyIdentifierExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	s = cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("AuthorityKeyIdentifier [\n")))->toString();
	//    .local v0, "s":Ljava/lang/String;
	if ( !(this->id) )  
		goto label_cond_33;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	s = cVar1->append(s)->append(this->id->toString())->toString();
label_cond_33:
	if ( !(this->names) )  
		goto label_cond_55;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	s = cVar2->append(s)->append(this->names->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
label_cond_55:
	if ( !(this->serialNum) )  
		goto label_cond_77;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
label_cond_77:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	return cVar4->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")))->toString();

}


