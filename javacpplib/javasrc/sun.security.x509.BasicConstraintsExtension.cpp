// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\BasicConstraintsExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Enumeration.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.BasicConstraintsExtension.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::BasicConstraintsExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.BasicConstraints");
static sun::security::x509::BasicConstraintsExtension::IS_CA = std::make_shared<java::lang::String>("is_ca");
static sun::security::x509::BasicConstraintsExtension::NAME = std::make_shared<java::lang::String>("BasicConstraints");
static sun::security::x509::BasicConstraintsExtension::PATH_LEN = std::make_shared<java::lang::String>("path_len");
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::BasicConstraintsExtension::BasicConstraintsExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::io::IOException> cVar0;
	unsigned char opt;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 043        value = {
	// 044            Ljava/io/IOException;
	// 045        }
	// 046    .end annotation
	// 052    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->ca = 0x0;
	this->pathLen = -0x1;
	this->extensionId = sun::security::x509::PKIXExtensions::BasicConstraints_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v1, "val":Lsun/security/util/DerValue;
	if ( val->tag == 0x30 )
		goto label_cond_2d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of BasicConstraints")));
	// throw
	throw cVar0;
	// 104    .line 134
label_cond_2d:
	if ( !(val->data) )  
		goto label_cond_39;
	if ( val->data->available() )     
		goto label_cond_3a;
label_cond_39:
	return;
	// 122    .line 138
label_cond_3a:
	opt = val->data->getDerValue();
	//    .local v0, "opt":Lsun/security/util/DerValue;
	if ( opt->tag == 0x1 )
		goto label_cond_46;
	return;
	// 141    .line 144
label_cond_46:
	this->ca = opt->getBoolean();
	if ( val->data->available() )     
		goto label_cond_5a;
	this->pathLen = 0x7fffffff;
	return;
	// 166    .line 153
label_cond_5a:
	opt = val->data->getDerValue();
	if ( opt->tag == 0x2 )
		goto label_cond_6e;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of BasicConstraints")));
	// throw
	throw cVar1;
	// 190    .line 157
label_cond_6e:
	this->pathLen = opt->getInteger();
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;ZI)V
sun::security::x509::BasicConstraintsExtension::BasicConstraintsExtension(std::shared_ptr<java::lang::Boolean> critical,bool ca,int len)
{
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "ca"    # Z
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 208        value = {
	// 209            Ljava/io/IOException;
	// 210        }
	// 211    .end annotation
	// 215    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->ca = 0x0;
	this->pathLen = -0x1;
	this->ca = ca;
	this->pathLen = len;
	this->extensionId = sun::security::x509::PKIXExtensions::BasicConstraints_Id;
	this->critical = critical->booleanValue();
	this->encodeThis();
	return;

}
// .method public constructor <init>(ZI)V
sun::security::x509::BasicConstraintsExtension::BasicConstraintsExtension(bool ca,int len)
{
	
	//    .param p1, "ca"    # Z
	//    .param p2, "len"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 257        value = {
	// 258            Ljava/io/IOException;
	// 259        }
	// 260    .end annotation
	sun::security::x509::BasicConstraintsExtension::(java::lang::Boolean::valueOf(ca), ca, len);
	return;

}
// .method private encodeThis()V
void sun::security::x509::BasicConstraintsExtension::encodeThis()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 277        value = {
	// 278            Ljava/io/IOException;
	// 279        }
	// 280    .end annotation
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "out":Lsun/security/util/DerOutputStream;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tmp":Lsun/security/util/DerOutputStream;
	if ( !(this->ca) )  
		goto label_cond_1c;
	tmp->putBoolean(this->ca);
	if ( this->pathLen < 0 ) 
		goto label_cond_1c;
	tmp->putInteger(this->pathLen);
label_cond_1c:
	out->write(0x30, tmp);
	this->extensionValue = out->toByteArray();
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::BasicConstraintsExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 338        value = {
	// 339            Ljava/io/IOException;
	// 340        }
	// 341    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("is_ca")))) )  
		goto label_cond_10;
	this->ca = 0x0;
label_goto_c:
	this->encodeThis();
	return;
	// 365    .line 247
label_cond_10:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("path_len")))) )  
		goto label_cond_1d;
	this->pathLen = -0x1;
	goto label_goto_c;
	// 382    .line 250
label_cond_1d:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:BasicConstraints.")));
	// throw
	throw cVar0;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::BasicConstraintsExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 397        value = {
	// 398            Ljava/io/IOException;
	// 399        }
	// 400    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_17;
	this->extensionId = sun::security::x509::PKIXExtensions::BasicConstraints_Id;
	if ( !(this->ca) )  
		goto label_cond_22;
	this->critical = 0x1;
label_goto_14:
	this->encodeThis();
label_cond_17:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;
	// 447    .line 197
label_cond_22:
	this->critical = 0x0;
	goto label_goto_14;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::BasicConstraintsExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 460        value = {
	// 461            Ljava/io/IOException;
	// 462        }
	// 463    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("is_ca")))) )  
		goto label_cond_10;
	return java::lang::Boolean::valueOf(this->ca);
	// 484    .line 233
label_cond_10:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("path_len")))) )  
		goto label_cond_20;
	return java::lang::Integer::valueOf(this->pathLen);
	// 503    .line 236
label_cond_20:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:BasicConstraints.")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::BasicConstraintsExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 517        value = {
	// 518            "()",
	// 519            "Ljava/util/Enumeration",
	// 520            "<",
	// 521            "Ljava/lang/String;",
	// 522            ">;"
	// 523        }
	// 524    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("is_ca")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("path_len")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::BasicConstraintsExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("BasicConstraints"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::BasicConstraintsExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 566        value = {
	// 567            Ljava/io/IOException;
	// 568        }
	// 569    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("is_ca")))) )  
		goto label_cond_22;
	if ( obj->instanceOf("java::lang::Boolean") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type Boolean.")));
	// throw
	throw cVar0;
	// 595    .line 214
label_cond_16:
	obj->checkCast("java::lang::Boolean");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->ca = obj->booleanValue();
label_goto_1e:
	this->encodeThis();
	return;
	// 613    .line 215
	// 614    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_22:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("path_len")))) )  
		goto label_cond_41;
	if ( obj->instanceOf("java::lang::Integer") )     
		goto label_cond_38;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type Integer.")));
	// throw
	throw cVar1;
	// 638    .line 219
label_cond_38:
	obj->checkCast("java::lang::Integer");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->pathLen = obj->intValue();
	goto label_goto_1e;
	// 651    .line 221
	// 652    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_41:
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:BasicConstraints.")));
	// throw
	throw cVar2;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::BasicConstraintsExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	s = cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("BasicConstraints:[\n")))->toString();
	//    .local v0, "s":Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	if ( !(this->ca) )  
		goto label_cond_71;
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>("  CA:true"));
label_goto_28:
	s = cVar1->append(s)->append(cVar2)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
	if ( this->pathLen < 0 ) 
		goto label_cond_75;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	s = cVar3->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  PathLen:")))->append(this->pathLen)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();
label_goto_5c:
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	return cVar4->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")))->toString();
	// 779    .line 176
label_cond_71:
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>("  CA:false"));
	goto label_goto_28;
	// 785    .line 180
label_cond_75:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	s = cVar6->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  PathLen: undefined\n")))->toString();
	goto label_goto_5c;

}


