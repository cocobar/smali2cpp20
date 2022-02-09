// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\NameConstraintsExtension.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.pkcs.PKCS9Attribute.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AVA.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.GeneralSubtree.h"
#include "sun.security.x509.GeneralSubtrees.h"
#include "sun.security.x509.NameConstraintsExtension.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.RFC822Name.h"
#include "sun.security.x509.SubjectAlternativeNameExtension.h"
#include "sun.security.x509.X500Name.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::x509::NameConstraintsExtension::EXCLUDED_SUBTREES = std::make_shared<java::lang::String>("excluded_subtrees");
static sun::security::x509::NameConstraintsExtension::IDENT = std::make_shared<java::lang::String>("x509.info.extensions.NameConstraints");
static sun::security::x509::NameConstraintsExtension::NAME = std::make_shared<java::lang::String>("NameConstraints");
static sun::security::x509::NameConstraintsExtension::PERMITTED_SUBTREES = std::make_shared<java::lang::String>("permitted_subtrees");
static sun::security::x509::NameConstraintsExtension::TAG_EXCLUDED = 0x1t;
static sun::security::x509::NameConstraintsExtension::TAG_PERMITTED;
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::NameConstraintsExtension::NameConstraintsExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	unsigned char cVar0;
	bool cVar1;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> cVar2;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<sun::security::util::DerValue> opt;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> cVar4;
	std::shared_ptr<java::io::IOException> cVar6;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> cVar7;
	std::shared_ptr<java::io::IOException> cVar8;
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 055        value = {
	// 056            Ljava/io/IOException;
	// 057        }
	// 058    .end annotation
	cVar0 = 0x30;
	cVar1 = 0x0;
	cVar2 = 0x0;
	// 068    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->permitted = cVar2;
	this->excluded = cVar2;
	this->minMaxValid = cVar1;
	this->extensionId = sun::security::x509::PKIXExtensions::NameConstraints_Id;
	this->critical = critical->booleanValue();
	value->checkCast("unsigned char[]");
	//    .end local p2    # "value":Ljava/lang/Object;
	this->extensionValue = value;
	val = std::make_shared<sun::security::util::DerValue>(this->extensionValue);
	//    .local v1, "val":Lsun/security/util/DerValue;
	if ( val->tag == cVar0 )
		goto label_cond_2f;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for NameConstraintsExtension.")));
	// throw
	throw cVar3;
	// 119    .line 185
label_cond_2f:
	if ( val->data )     
		goto label_cond_3e;
	return;
	// 128    .line 195
	// 129    .local v0, "opt":Lsun/security/util/DerValue;
label_cond_34:
	opt->resetTag(cVar0);
	cVar4 = std::make_shared<sun::security::x509::GeneralSubtrees>(opt);
	this->permitted = cVar4;
	//    .end local v0    # "opt":Lsun/security/util/DerValue;
label_cond_3e:
label_goto_3e:
	if ( !(val->data->available()) )  
		goto label_cond_93;
	opt = val->data->getDerValue();
	//    .restart local v0    # "opt":Lsun/security/util/DerValue;
	if ( !(opt->isContextSpecific(cVar1)) )  
		goto label_cond_65;
	if ( !(opt->isConstructed()) )  
		goto label_cond_65;
	if ( !(this->permitted) )  
		goto label_cond_34;
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate permitted GeneralSubtrees in NameConstraintsExtension.")));
	// throw
	throw cVar5;
	// 187    .line 198
label_cond_65:
	if ( !(opt->isContextSpecific(0x1)) )  
		goto label_cond_8a;
	if ( !(opt->isConstructed()) )  
		goto label_cond_8a;
	if ( !(this->excluded) )  
		goto label_cond_7f;
	cVar6 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate excluded GeneralSubtrees in NameConstraintsExtension.")));
	// throw
	throw cVar6;
	// 219    .line 204
label_cond_7f:
	opt->resetTag(cVar0);
	cVar7 = std::make_shared<sun::security::x509::GeneralSubtrees>(opt);
	this->excluded = cVar7;
	goto label_goto_3e;
	// 232    .line 207
label_cond_8a:
	cVar8 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of NameConstraintsExtension.")));
	// throw
	throw cVar8;
	// 242    .line 210
	// 243    .end local v0    # "opt":Lsun/security/util/DerValue;
label_cond_93:
	this->minMaxValid = cVar1;
	return;

}
// .method public constructor <init>(Lsun/security/x509/GeneralSubtrees;Lsun/security/x509/GeneralSubtrees;)V
sun::security::x509::NameConstraintsExtension::NameConstraintsExtension(std::shared_ptr<sun::security::x509::GeneralSubtrees> permitted,std::shared_ptr<sun::security::x509::GeneralSubtrees> excluded)
{
	
	std::shared_ptr<sun::security::x509::GeneralSubtrees> cVar0;
	
	//    .param p1, "permitted"    # Lsun/security/x509/GeneralSubtrees;
	//    .param p2, "excluded"    # Lsun/security/x509/GeneralSubtrees;
	//    .annotation system Ldalvik/annotation/Throws;
	// 256        value = {
	// 257            Ljava/io/IOException;
	// 258        }
	// 259    .end annotation
	cVar0 = 0x0;
	// 265    invoke-direct {p0}, Lsun/security/x509/Extension;-><init>()V
	this->permitted = cVar0;
	this->excluded = cVar0;
	this->minMaxValid = 0x0;
	this->permitted = permitted;
	this->excluded = excluded;
	this->extensionId = sun::security::x509::PKIXExtensions::NameConstraints_Id;
	this->critical = 0x1;
	this->encodeThis();
	return;

}
// .method private calcMinMax()V
void sun::security::x509::NameConstraintsExtension::calcMinMax()
{
	
	int cVar0;
	bool cVar1;
	bool cVar2;
	int i;
	std::shared_ptr<sun::security::x509::GeneralSubtree> subtree;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 304        value = {
	// 305            Ljava/io/IOException;
	// 306        }
	// 307    .end annotation
	cVar0 = -0x1;
	cVar1 = 0x0;
	cVar2 = 0x1;
	this->hasMin = cVar1;
	this->hasMax = cVar1;
	if ( !(this->excluded) )  
		goto label_cond_2d;
	i = 0x0;
	//    .local v0, "i":I
label_goto_c:
	if ( i >= this->excluded->size() )
		goto label_cond_2d;
	subtree = this->excluded->get(i);
	//    .local v1, "subtree":Lsun/security/x509/GeneralSubtree;
	if ( !(subtree->getMinimum()) )  
		goto label_cond_22;
	this->hasMin = cVar2;
label_cond_22:
	if ( subtree->getMaximum() == cVar0 )
		goto label_cond_2a;
	this->hasMax = cVar2;
label_cond_2a:
	i = ( i + 0x1);
	goto label_goto_c;
	// 375    .line 102
	// 376    .end local v0    # "i":I
	// 377    .end local v1    # "subtree":Lsun/security/x509/GeneralSubtree;
label_cond_2d:
	if ( !(this->permitted) )  
		goto label_cond_53;
	i = 0x0;
	//    .restart local v0    # "i":I
label_goto_32:
	if ( i >= this->permitted->size() )
		goto label_cond_53;
	subtree = this->permitted->get(i);
	//    .restart local v1    # "subtree":Lsun/security/x509/GeneralSubtree;
	if ( !(subtree->getMinimum()) )  
		goto label_cond_48;
	this->hasMin = cVar2;
label_cond_48:
	if ( subtree->getMaximum() == cVar0 )
		goto label_cond_50;
	this->hasMax = cVar2;
label_cond_50:
	i = ( i + 0x1);
	goto label_goto_32;
	// 431    .line 111
	// 432    .end local v0    # "i":I
	// 433    .end local v1    # "subtree":Lsun/security/x509/GeneralSubtree;
label_cond_53:
	this->minMaxValid = cVar2;
	return;

}
// .method private encodeThis()V
void sun::security::x509::NameConstraintsExtension::encodeThis()
{
	
	bool cVar0;
	unsigned char cVar1;
	bool cVar2;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	std::shared_ptr<sun::security::util::DerOutputStream> tagged;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 444        value = {
	// 445            Ljava/io/IOException;
	// 446        }
	// 447    .end annotation
	cVar0 = 0x0;
	cVar1 = -0x80;
	cVar2 = 0x1;
	this->minMaxValid = cVar0;
	if ( this->permitted )     
		goto label_cond_12;
	if ( this->excluded )     
		goto label_cond_12;
	this->extensionValue = 0x0;
	return;
	// 476    .line 121
label_cond_12:
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "seq":Lsun/security/util/DerOutputStream;
	tagged = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tagged":Lsun/security/util/DerOutputStream;
	if ( !(this->permitted) )  
		goto label_cond_31;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "tmp":Lsun/security/util/DerOutputStream;
	this->permitted->encode(tmp);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar1, cVar2, cVar0), tmp);
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_31:
	if ( !(this->excluded) )  
		goto label_cond_46;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v2    # "tmp":Lsun/security/util/DerOutputStream;
	this->excluded->encode(tmp);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar1, cVar2, cVar2), tmp);
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_46:
	seq->write(0x30, tagged);
	this->extensionValue = seq->toByteArray();
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::NameConstraintsExtension::clone()
{
	
	std::shared_ptr<java::lang::RuntimeException> cVar2;
	std::shared_ptr<sun::security::x509::NameConstraintsExtension> newNCE;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> cVar0;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	newNCE = this->clone();
	newNCE->checkCast("sun::security::x509::NameConstraintsExtension");
	//    .local v1, "newNCE":Lsun/security/x509/NameConstraintsExtension;
	if ( !(this->permitted) )  
		goto label_cond_14;
	cVar0 = this->permitted->clone();
	cVar0->checkCast("sun::security::x509::GeneralSubtrees");
	newNCE->permitted = cVar0;
label_cond_14:
	if ( !(this->excluded) )  
		goto label_cond_22;
	cVar1 = this->excluded->clone();
	cVar1->checkCast("sun::security::x509::GeneralSubtrees");
	newNCE->excluded = cVar1;
	//label_try_end_22:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_22} :catch_23
label_cond_22:
	return newNCE;
	// 609    .line 608
	// 610    .end local v1    # "newNCE":Lsun/security/x509/NameConstraintsExtension;
label_catch_23:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "cnsee":Ljava/lang/CloneNotSupportedException;
	cVar2 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CloneNotSupportedException while cloning NameConstraintsException. This should never happen.")));
	// throw
	throw cVar2;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::NameConstraintsExtension::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::x509::GeneralSubtrees> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 629        value = {
	// 630            Ljava/io/IOException;
	// 631        }
	// 632    .end annotation
	cVar0 = 0x0;
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("permitted_subtrees")))) )  
		goto label_cond_10;
	this->permitted = cVar0;
label_goto_c:
	this->encodeThis();
	return;
	// 656    .line 285
label_cond_10:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("excluded_subtrees")))) )  
		goto label_cond_1c;
	this->excluded = cVar0;
	goto label_goto_c;
	// 671    .line 288
label_cond_1c:
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:NameConstraintsExtension.")));
	// throw
	throw cVar1;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::NameConstraintsExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 686        value = {
	// 687            Ljava/io/IOException;
	// 688        }
	// 689    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	if ( this->extensionValue )     
		goto label_cond_13;
	this->extensionId = sun::security::x509::PKIXExtensions::NameConstraints_Id;
	this->critical = 0x1;
	this->encodeThis();
label_cond_13:
	this->encode(tmp);
	out->write(tmp->toByteArray());
	return;

}
// .method public get(Ljava/lang/String;)Lsun/security/x509/GeneralSubtrees;
std::shared_ptr<sun::security::x509::GeneralSubtrees> sun::security::x509::NameConstraintsExtension::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 753        value = {
	// 754            Ljava/io/IOException;
	// 755        }
	// 756    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("permitted_subtrees")))) )  
		goto label_cond_c;
	return this->permitted;
	// 773    .line 271
label_cond_c:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("excluded_subtrees")))) )  
		goto label_cond_18;
	return this->excluded;
	// 788    .line 274
label_cond_18:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:NameConstraintsExtension.")));
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::NameConstraintsExtension::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 802        value = {
	// 803            "()",
	// 804            "Ljava/util/Enumeration",
	// 805            "<",
	// 806            "Ljava/lang/String;",
	// 807            ">;"
	// 808        }
	// 809    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("permitted_subtrees")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("excluded_subtrees")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::NameConstraintsExtension::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("NameConstraints"));

}
// .method public merge(Lsun/security/x509/NameConstraintsExtension;)V
void sun::security::x509::NameConstraintsExtension::merge(std::shared_ptr<sun::security::x509::NameConstraintsExtension> newConstraints)
{
	
	int cVar0;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> newExcluded;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> cVar1;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> newPermitted;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> cVar2;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> cVar5;
	
	//    .param p1, "newConstraints"    # Lsun/security/x509/NameConstraintsExtension;
	//    .annotation system Ldalvik/annotation/Throws;
	// 850        value = {
	// 851            Ljava/io/IOException;
	// 852        }
	// 853    .end annotation
	cVar0 = 0x0;
	if ( newConstraints )     
		goto label_cond_4;
	return;
	// 864    .line 349
label_cond_4:
	newExcluded = newConstraints->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("excluded_subtrees")));
	//    .local v0, "newExcluded":Lsun/security/x509/GeneralSubtrees;
	if ( this->excluded )     
		goto label_cond_3f;
	if ( !(newExcluded) )  
		goto label_cond_3d;
	cVar1 = newExcluded->clone();
	cVar1->checkCast("sun::security::x509::GeneralSubtrees");
label_goto_17:
	this->excluded = cVar1;
label_cond_19:
label_goto_19:
	newPermitted = newConstraints->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("permitted_subtrees")));
	//    .local v1, "newPermitted":Lsun/security/x509/GeneralSubtrees;
	if ( this->permitted )     
		goto label_cond_49;
	if ( !(newPermitted) )  
		goto label_cond_47;
	cVar2 = newPermitted->clone();
	cVar2->checkCast("sun::security::x509::GeneralSubtrees");
label_goto_2c:
	this->permitted = cVar2;
label_cond_2e:
label_goto_2e:
	if ( !(this->permitted) )  
		goto label_cond_39;
	this->permitted->reduce(this->excluded);
label_cond_39:
	this->encodeThis();
	return;
	// 942    .end local v1    # "newPermitted":Lsun/security/x509/GeneralSubtrees;
label_cond_3d:
	cVar1 = cVar0;
	goto label_goto_17;
	// 949    .line 354
label_cond_3f:
	if ( !(newExcluded) )  
		goto label_cond_19;
	this->excluded->union(newExcluded);
	goto label_goto_19;
	// 960    .restart local v1    # "newPermitted":Lsun/security/x509/GeneralSubtrees;
label_cond_47:
	cVar2 = cVar0;
	goto label_goto_2c;
	// 967    .line 371
label_cond_49:
	if ( !(newPermitted) )  
		goto label_cond_2e;
	newExcluded = this->permitted->intersect(newPermitted);
	if ( !(newExcluded) )  
		goto label_cond_2e;
	if ( !(this->excluded) )  
		goto label_cond_5d;
	this->excluded->union(newExcluded);
	goto label_goto_2e;
	// 993    .line 380
label_cond_5d:
	cVar5 = newExcluded->clone();
	cVar5->checkCast("sun::security::x509::GeneralSubtrees");
	this->excluded = cVar5;
	goto label_goto_2e;

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::NameConstraintsExtension::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1011        value = {
	// 1012            Ljava/io/IOException;
	// 1013        }
	// 1014    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("permitted_subtrees")))) )  
		goto label_cond_1e;
	if ( obj->instanceOf("sun::security::x509::GeneralSubtrees") )     
		goto label_cond_16;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type GeneralSubtrees.")));
	// throw
	throw cVar0;
	// 1040    .line 251
label_cond_16:
	obj->checkCast("sun::security::x509::GeneralSubtrees");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->permitted = obj;
label_goto_1a:
	this->encodeThis();
	return;
	// 1054    .line 252
	// 1055    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_1e:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("excluded_subtrees")))) )  
		goto label_cond_39;
	if ( obj->instanceOf("sun::security::x509::GeneralSubtrees") )     
		goto label_cond_34;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type GeneralSubtrees.")));
	// throw
	throw cVar1;
	// 1079    .line 257
label_cond_34:
	obj->checkCast("sun::security::x509::GeneralSubtrees");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->excluded = obj;
	goto label_goto_1a;
	// 1088    .line 259
	// 1089    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_39:
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized by CertAttrSet:NameConstraintsExtension.")));
	// throw
	throw cVar2;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::NameConstraintsExtension::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( this->permitted )     
		goto label_cond_36;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_1b:
	if ( this->excluded )     
		goto label_cond_51;
	cVar2 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_26:
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NameConstraints: [")))->append(cVar1)->append(cVar2)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   ]\n")))->toString();
	// 1163    .line 219
label_cond_36:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n    Permitted:")))->append(this->permitted->toString())->toString();
	goto label_goto_1b;
	// 1191    .line 221
label_cond_51:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n    Excluded:")))->append(this->excluded->toString())->toString();
	goto label_goto_26;

}
// .method public verify(Ljava/security/cert/X509Certificate;)Z
bool sun::security::x509::NameConstraintsExtension::verify(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	bool cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<sun::security::x509::X500Name> subject;
	std::shared_ptr<sun::security::x509::GeneralNames> altNames;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<sun::security::x509::SubjectAlternativeNameExtension> altNameExt;
	std::vector<std::any> tryCatchExcetionList;
	int i;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1224        value = {
	// 1225            Ljava/io/IOException;
	// 1226        }
	// 1227    .end annotation
	cVar0 = 0x0;
	if ( cert )     
		goto label_cond_c;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Certificate is null")));
	// throw
	throw cVar1;
	// 1244    .line 419
label_cond_c:
	if ( this->minMaxValid )     
		goto label_cond_13;
	this->calcMinMax();
label_cond_13:
	if ( !(this->hasMin) )  
		goto label_cond_20;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Non-zero minimum BaseDistance in name constraints not supported")));
	// throw
	throw cVar2;
	// 1268    .line 428
label_cond_20:
	if ( !(this->hasMax) )  
		goto label_cond_2d;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Maximum BaseDistance in name constraints not supported")));
	// throw
	throw cVar3;
	// 1283    .line 433
label_cond_2d:
	//    .local v7, "subjectPrincipal":Ljavax/security/auth/x500/X500Principal;
	subject = sun::security::x509::X500Name::asX500Name(cert->getSubjectX500Principal());
	//    .local v6, "subject":Lsun/security/x509/X500Name;
	if ( subject->isEmpty() )     
		goto label_cond_42;
	if ( this->verify(subject) )     
		goto label_cond_42;
	return cVar0;
	// 1313    .line 442
label_cond_42:
	altNames = 0x0;
	//    .local v2, "altNames":Lsun/security/x509/GeneralNames;
	try {
	//label_try_start_43:
	//    .local v4, "certImpl":Lsun/security/x509/X509CertImpl;
	altNameExt = sun::security::x509::X509CertImpl::toImpl(cert)->getSubjectAlternativeNameExtension();
	//    .local v1, "altNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
	if ( !(altNameExt) )  
		goto label_cond_54;
	//label_try_end_53:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5b;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_43 .. :try_end_53} :catch_5b
	altNames = altNameExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject_name")));
	//    .end local v2    # "altNames":Lsun/security/x509/GeneralNames;
label_cond_54:
	if ( altNames )     
		goto label_cond_7a;
	return this->verifyRFC822SpecialCase(subject);
	// 1356    .line 456
	// 1357    .end local v1    # "altNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
	// 1358    .end local v4    # "certImpl":Lsun/security/x509/X509CertImpl;
	// 1359    .restart local v2    # "altNames":Lsun/security/x509/GeneralNames;
label_catch_5b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "ce":Ljava/security/cert/CertificateException;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar4 = std::make_shared<java::io::IOException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to extract extensions from certificate: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar4;
	// 1395    .line 470
	// 1396    .end local v2    # "altNames":Lsun/security/x509/GeneralNames;
	// 1397    .end local v3    # "ce":Ljava/security/cert/CertificateException;
	// 1398    .restart local v1    # "altNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
	// 1399    .restart local v4    # "certImpl":Lsun/security/x509/X509CertImpl;
label_cond_7a:
	i = 0x0;
	//    .local v5, "i":I
label_goto_7b:
	if ( i >= altNames->size() )
		goto label_cond_93;
	//    .local v0, "altGNI":Lsun/security/x509/GeneralNameInterface;
	if ( this->verify(altNames->get(i)->getName()) )     
		goto label_cond_90;
	return cVar0;
	// 1431    .line 470
label_cond_90:
	i = ( i + 0x1);
	goto label_goto_7b;
	// 1437    .line 478
	// 1438    .end local v0    # "altGNI":Lsun/security/x509/GeneralNameInterface;
label_cond_93:
	return 0x1;

}
// .method public verify(Lsun/security/x509/GeneralNameInterface;)Z
bool sun::security::x509::NameConstraintsExtension::verify(std::shared_ptr<sun::security::x509::GeneralNameInterface> name)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::io::IOException> cVar2;
	int i;
	std::shared_ptr<sun::security::x509::GeneralSubtree> gs;
	std::shared_ptr<sun::security::x509::GeneralName> gn;
	std::shared_ptr<sun::security::x509::GeneralNameInterface> exName;
	std::shared_ptr<sun::security::x509::GeneralNameInterface> perName;
	
	//    .param p1, "name"    # Lsun/security/x509/GeneralNameInterface;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1449        value = {
	// 1450            Ljava/io/IOException;
	// 1451        }
	// 1452    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( name )     
		goto label_cond_d;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("name is null")));
	// throw
	throw cVar2;
	// 1471    .line 496
label_cond_d:
	if ( !(this->excluded) )  
		goto label_cond_42;
	if ( this->excluded->size() <= 0 )
		goto label_cond_42;
	i = 0x0;
	//    .local v3, "i":I
label_goto_1a:
	if ( i >= this->excluded->size() )
		goto label_cond_42;
	gs = this->excluded->get(i);
	//    .local v2, "gs":Lsun/security/x509/GeneralSubtree;
	if ( gs )     
		goto label_cond_2d;
label_cond_2a:
label_goto_2a:
label_pswitch_2a:
	i = ( i + 0x1);
	goto label_goto_1a;
	// 1517    .line 502
label_cond_2d:
	gn = gs->getName();
	//    .local v1, "gn":Lsun/security/x509/GeneralName;
	if ( !(gn) )  
		goto label_cond_2a;
	exName = gn->getName();
	//    .local v0, "exName":Lsun/security/x509/GeneralNameInterface;
	if ( !(exName) )  
		goto label_cond_2a;
	// switch
	{
	auto item = ( exName->constrains(name) );
	if (item == -1) goto label_pswitch_2a;
	if (item == 0) goto label_pswitch_41;
	if (item == 1) goto label_pswitch_41;
	if (item == 2) goto label_pswitch_2a;
	if (item == 3) goto label_pswitch_2a;
	}
	goto label_goto_2a;
	// 1545    .line 518
label_pswitch_41:
	return cVar1;
	// 1549    .line 524
	// 1550    .end local v0    # "exName":Lsun/security/x509/GeneralNameInterface;
	// 1551    .end local v1    # "gn":Lsun/security/x509/GeneralName;
	// 1552    .end local v2    # "gs":Lsun/security/x509/GeneralSubtree;
	// 1553    .end local v3    # "i":I
label_cond_42:
	if ( !(this->permitted) )  
		goto label_cond_7d;
	if ( this->permitted->size() <= 0 )
		goto label_cond_7d;
	//    .local v5, "sameType":Z
	i = 0x0;
	//    .restart local v3    # "i":I
label_goto_50:
	if ( i >= this->permitted->size() )
		goto label_cond_7a;
	gs = this->permitted->get(i);
	//    .restart local v2    # "gs":Lsun/security/x509/GeneralSubtree;
	if ( gs )     
		goto label_cond_63;
label_cond_60:
label_goto_60:
label_pswitch_60:
	i = ( i + 0x1);
	goto label_goto_50;
	// 1603    .line 532
label_cond_63:
	gn = gs->getName();
	//    .restart local v1    # "gn":Lsun/security/x509/GeneralName;
	if ( !(gn) )  
		goto label_cond_60;
	perName = gn->getName();
	//    .local v4, "perName":Lsun/security/x509/GeneralNameInterface;
	if ( !(perName) )  
		goto label_cond_60;
	// switch
	{
	auto item = ( perName->constrains(name) );
	if (item == -1) goto label_pswitch_60;
	if (item == 0) goto label_pswitch_77;
	if (item == 1) goto label_pswitch_77;
	if (item == 2) goto label_pswitch_78;
	if (item == 3) goto label_pswitch_78;
	}
	goto label_goto_60;
	// 1631    .line 552
label_pswitch_77:
	return cVar0;
	// 1635    .line 547
label_pswitch_78:
	0x1;
	goto label_goto_60;
	// 1642    .line 555
	// 1643    .end local v1    # "gn":Lsun/security/x509/GeneralName;
	// 1644    .end local v2    # "gs":Lsun/security/x509/GeneralSubtree;
	// 1645    .end local v4    # "perName":Lsun/security/x509/GeneralNameInterface;
label_cond_7a:
	if ( !(0x0) )  
		goto label_cond_7d;
	return cVar1;
	// 1652    .line 559
	// 1653    .end local v3    # "i":I
	// 1654    .end local v5    # "sameType":Z
label_cond_7d:
	return cVar0;
	// 1658    .line 511
	// 1659    :pswitch_data_7e
	// 1660    .packed-switch -0x1
	// 1661        :pswitch_2a
	// 1662        :pswitch_41
	// 1663        :pswitch_41
	// 1664        :pswitch_2a
	// 1665        :pswitch_2a
	// 1666    .end packed-switch
	// 1668    .line 542
	// 1669    :pswitch_data_8c
	// 1670    .packed-switch -0x1
	// 1671        :pswitch_60
	// 1672        :pswitch_77
	// 1673        :pswitch_77
	// 1674        :pswitch_78
	// 1675        :pswitch_78
	// 1676    .end packed-switch

}
// .method public verifyRFC822SpecialCase(Lsun/security/x509/X500Name;)Z
bool sun::security::x509::NameConstraintsExtension::verifyRFC822SpecialCase(std::shared_ptr<sun::security::x509::X500Name> subject)
{
	
	std::shared_ptr<java::util::Iterator> ava_S_iterator;
	std::shared_ptr<sun::security::x509::AVA> ava;
	std::shared_ptr<java::lang::String> attrValue;
	std::shared_ptr<sun::security::x509::RFC822Name> emailName;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "subject"    # Lsun/security/x509/X500Name;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1683        value = {
	// 1684            Ljava/io/IOException;
	// 1685        }
	// 1686    .end annotation
	ava_S_iterator = subject->allAvas()->iterator();
	//    .local v3, "ava$iterator":Ljava/util/Iterator;
label_cond_8:
label_goto_8:
	if ( !(ava_S_iterator->hasNext()) )  
		goto label_cond_33;
	ava = ava_S_iterator->next();
	ava->checkCast("sun::security::x509::AVA");
	//    .local v2, "ava":Lsun/security/x509/AVA;
	//    .local v0, "attrOID":Lsun/security/util/ObjectIdentifier;
	if ( !(ava->getObjectIdentifier()->equals(sun::security::pkcs::PKCS9Attribute::EMAIL_ADDRESS_OID)) )  
		goto label_cond_8;
	attrValue = ava->getValueString();
	//    .local v1, "attrValue":Ljava/lang/String;
	if ( !(attrValue) )  
		goto label_cond_8;
	try {
	//label_try_start_26:
	emailName = std::make_shared<sun::security::x509::RFC822Name>(attrValue);
	//label_try_end_2b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	//    .catch Ljava/io/IOException; {:try_start_26 .. :try_end_2b} :catch_35
	//    .local v4, "emailName":Lsun/security/x509/RFC822Name;
	if ( this->verify(emailName) )     
		goto label_cond_8;
	return 0x0;
	// 1759    .line 590
	// 1760    .end local v0    # "attrOID":Lsun/security/util/ObjectIdentifier;
	// 1761    .end local v1    # "attrValue":Ljava/lang/String;
	// 1762    .end local v2    # "ava":Lsun/security/x509/AVA;
	// 1763    .end local v4    # "emailName":Lsun/security/x509/RFC822Name;
label_cond_33:
	return 0x1;
	// 1769    .line 581
	// 1770    .restart local v0    # "attrOID":Lsun/security/util/ObjectIdentifier;
	// 1771    .restart local v1    # "attrValue":Ljava/lang/String;
	// 1772    .restart local v2    # "ava":Lsun/security/x509/AVA;
label_catch_35:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "ioe":Ljava/io/IOException;
	goto label_goto_8;

}


