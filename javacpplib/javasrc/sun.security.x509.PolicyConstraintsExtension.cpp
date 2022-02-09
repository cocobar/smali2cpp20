// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\PolicyConstraintsExtension.smali
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
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.PolicyConstraintsExtension.h"

static sun::security::x509::PolicyConstraintsExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.PolicyConstraints");
static sun::security::x509::PolicyConstraintsExtension::INHIBIT = std::make_shared<java::lang::String>("inhibit");
static sun::security::x509::PolicyConstraintsExtension::NAME = std::make_shared<java::lang::String>("PolicyConstraints");
static sun::security::x509::PolicyConstraintsExtension::REQUIRE = std::make_shared<java::lang::String>("require");
static sun::security::x509::PolicyConstraintsExtension::TAG_INHIBIT = 0x1t;
static sun::security::x509::PolicyConstraintsExtension::TAG_REQUIRE;
// .method public constructor <init>(II)V
sun::security::x509::PolicyConstraintsExtension::PolicyConstraintsExtension(int require,int inhibit)
{
	
	//    .param p1, "require"    # I
	//    .param p2, "inhibit"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 047        value = {
	// 048            Ljava/io/IOException;
	// 049        }
	// 050    .end annotation
	sun::security::x509::PolicyConstraintsExtension::(java::lang::Boolean::FALSE, require, inhibit);
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;II)V
sun::security::x509::PolicyConstraintsExtension::PolicyConstraintsExtension(std::shared_ptr<java::lang::Boolean> critical,int require,int inhibit)
{
	
	int cVar0;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "require"    # I
	//    .param p3, "inhibit"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 068        value = {
	// 069            Ljava/io/IOException;
	// 070        }
	// 071    .end annotation
	cVar0 = -0x1;
	// 077    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->require = cVar0;
	this->inhibit = cVar0;
	this->require = require;
	this->inhibit = inhibit;
	this->extensionId = sun::security::x509::PKIXExtensions::PolicyConstraints_Id;
	this->critical = critical->booleanValue();
	this->encodeThis();
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::PolicyConstraintsExtension::PolicyConstraintsExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	unsigned char cVar0;
	int cVar1;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<sun::security::util::DerInputStream> in;
	std::shared_ptr<sun::security::util::DerValue> next;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::io::IOException> cVar5;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 115        value = {
	// 116            Ljava/io/IOException;
	// 117        }
	// 118    .end annotation
	cVar0 = 0x2;
	cVar1 = -0x1;
	// 128    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->require = cVar1;
	this->inhibit = cVar1;
	this->extensionId = sun::security::x509::PKIXExtensions::PolicyConstraints_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v2, "val":Lsun/security/util/DerValue;
	if ( val->tag == 0x30 )
		goto label_cond_2e;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Sequence tag missing for PolicyConstraint.")));
	// throw
	throw cVar2;
	// 178    .line 153
label_cond_2e:
	in = val->data;
	//    .local v0, "in":Lsun/security/util/DerInputStream;
label_goto_30:
	if ( !(in) )  
		goto label_cond_90;
	if ( !(in->available()) )  
		goto label_cond_90;
	next = in->getDerValue();
	//    .local v1, "next":Lsun/security/util/DerValue;
	if ( !(next->isContextSpecific(0x0)) )  
		goto label_cond_61;
	if ( !(( next->isConstructed() ^ 0x1)) )  
		goto label_cond_61;
	if ( this->require == cVar1 )
		goto label_cond_57;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate requireExplicitPolicyfound in the PolicyConstraintsExtension")));
	// throw
	throw cVar3;
	// 228    .line 161
label_cond_57:
	next->resetTag(cVar0);
	this->require = next->getInteger();
	goto label_goto_30;
	// 241    .line 164
label_cond_61:
	if ( !(next->isContextSpecific(0x1)) )  
		goto label_cond_87;
	if ( !(( next->isConstructed() ^ 0x1)) )  
		goto label_cond_87;
	if ( this->inhibit == cVar1 )
		goto label_cond_7d;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate inhibitPolicyMappingfound in the PolicyConstraintsExtension")));
	// throw
	throw cVar4;
	// 275    .line 169
label_cond_7d:
	next->resetTag(cVar0);
	this->inhibit = next->getInteger();
	goto label_goto_30;
	// 288    .line 172
label_cond_87:
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of PolicyConstraint")));
	// throw
	throw cVar5;
	// 298    .line 174
	// 299    .end local v1    # "next":Lsun/security/util/DerValue;
label_cond_90:
	return;

}
// .method private encodeThis()V
void sun::security::x509::PolicyConstraintsExtension::encodeThis()
{
	
	unsigned char cVar0;
	bool cVar1;
	int cVar2;
	std::shared_ptr<sun::security::util::DerOutputStream> tagged;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 307        value = {
	// 308            Ljava/io/IOException;
	// 309        }
	// 310    .end annotation
	cVar0 = -0x80;
	cVar1 = 0x0;
	cVar2 = -0x1;
	if ( this->require != cVar2 )
		goto label_cond_10;
	if ( this->inhibit != cVar2 )
		goto label_cond_10;
	this->extensionValue = 0x0;
	return;
	// 336    .line 85
label_cond_10:
	tagged = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tagged":Lsun/security/util/DerOutputStream;
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "seq":Lsun/security/util/DerOutputStream;
	if ( this->require == cVar2 )
		goto label_cond_2f;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "tmp":Lsun/security/util/DerOutputStream;
	tmp->putInteger(this->require);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar0, cVar1, cVar1), tmp);
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_2f:
	if ( this->inhibit == cVar2 )
		goto label_cond_45;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v2    # "tmp":Lsun/security/util/DerOutputStream;
	tmp->putInteger(this->inhibit);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar0, cVar1, 0x1), tmp);
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_45:
	seq->write(0x30, tagged);
	this->extensionValue = seq->toByteArray();
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::PolicyConstraintsExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 424        value = {
	// 425            Ljava/io/IOException;
	// 426        }
	// 427    .end annotation
	cVar0 = -0x1;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("require")))) )  
		goto label_cond_10;
	this->require = cVar0;
label_goto_c:
	this->encodeThis();
	return;
	// 451    .line 251
label_cond_10:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("inhibit")))) )  
		goto label_cond_1c;
	this->inhibit = cVar0;
	goto label_goto_c;
	// 466    .line 254
label_cond_1c:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:PolicyConstraints.")));
	// throw
	throw cVar1;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::PolicyConstraintsExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 481        value = {
	// 482            Ljava/io/IOException;
	// 483        }
	// 484    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::PolicyConstraints_Id;
	this->critical = 0x0;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> sun::security::x509::PolicyConstraintsExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::Integer> cVar0;
	std::shared_ptr<java::lang::Integer> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 530        value = {
	// 531            Ljava/io/IOException;
	// 532        }
	// 533    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("require")))) )  
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::Integer>(this->require);
	return cVar0;
	// 554    .line 237
label_cond_11:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("inhibit")))) )  
		goto label_cond_22;
	cVar1 = std::make_shared<java::lang::Integer>(this->inhibit);
	return cVar1;
	// 573    .line 240
label_cond_22:
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:PolicyConstraints.")));
	// throw
	throw cVar2;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::PolicyConstraintsExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 605        value = {
	// 606            "()",
	// 607            "Ljava/util/Enumeration",
	// 608            "<",
	// 609            "Ljava/lang/String;",
	// 610            ">;"
	// 611        }
	// 612    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("require")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("inhibit")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::PolicyConstraintsExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyConstraints"));

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::PolicyConstraintsExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 654        value = {
	// 655            Ljava/io/IOException;
	// 656        }
	// 657    .end annotation
	if ( obj->instanceOf("java::lang::Integer") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type Integer.")));
	// throw
	throw cVar0;
	// 674    .line 219
label_cond_d:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("require")))) )  
		goto label_cond_22;
	obj->checkCast("java::lang::Integer");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->require = obj->intValue();
label_goto_1e:
	this->encodeThis();
	return;
	// 701    .line 221
	// 702    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_22:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("inhibit")))) )  
		goto label_cond_34;
	obj->checkCast("java::lang::Integer");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->inhibit = obj->intValue();
	goto label_goto_1e;
	// 724    .line 224
	// 725    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_34:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" not recognized by ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertAttrSet:PolicyConstraints.")))->toString());
	// throw
	throw cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::PolicyConstraintsExtension::toString()
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> s;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	cVar0 = -0x1;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	s = cVar1->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyConstraints: [")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Require: ")))->toString();
	//    .local v0, "s":Ljava/lang/String;
	if ( this->require != cVar0 )
		goto label_cond_79;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	s = cVar2->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unspecified;")))->toString();
label_goto_38:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	s = cVar3->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\tInhibit: ")))->toString();
	if ( this->inhibit != cVar0 )
		goto label_cond_94;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	s = cVar4->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unspecified")))->toString();
label_goto_64:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	s = cVar5->append(s)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ]\n")))->toString();
	return s;
	// 901    .line 185
label_cond_79:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	s = cVar6->append(s)->append(this->require)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")))->toString();
	goto label_goto_38;
	// 929    .line 190
label_cond_94:
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	s = cVar7->append(s)->append(this->inhibit)->toString();
	goto label_goto_64;

}


