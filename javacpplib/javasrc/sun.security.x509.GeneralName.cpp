// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\GeneralName.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.DNSName.h"
#include "sun.security.x509.EDIPartyName.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.IPAddressName.h"
#include "sun.security.x509.OIDName.h"
#include "sun.security.x509.OtherName.h"
#include "sun.security.x509.RFC822Name.h"
#include "sun.security.x509.URIName.h"
#include "sun.security.x509.X500Name.h"

// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::GeneralName::GeneralName(std::shared_ptr<sun::security::util::DerValue> encName)
{
	
	//    .param p1, "encName"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 015        value = {
	// 016            Ljava/io/IOException;
	// 017        }
	// 018    .end annotation
	sun::security::x509::GeneralName::(encName, 0x0);
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;Z)V
sun::security::x509::GeneralName::GeneralName(std::shared_ptr<sun::security::util::DerValue> encName,bool nameConstraint)
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	int tag;
	std::shared_ptr<java::io::IOException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<sun::security::x509::OtherName> cVar4;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<sun::security::x509::RFC822Name> cVar6;
	std::shared_ptr<java::io::IOException> cVar7;
	std::shared_ptr<sun::security::x509::DNSName> cVar8;
	std::shared_ptr<java::io::IOException> cVar9;
	std::shared_ptr<sun::security::x509::X500Name> cVar17;
	std::shared_ptr<java::io::IOException> cVar18;
	std::shared_ptr<sun::security::x509::EDIPartyName> cVar19;
	std::shared_ptr<java::io::IOException> cVar20;
	std::shared_ptr<sun::security::x509::GeneralNameInterface> cVar10;
	std::shared_ptr<sun::security::x509::URIName> cVar10;
	std::shared_ptr<java::io::IOException> cVar12;
	std::shared_ptr<sun::security::x509::IPAddressName> cVar13;
	std::shared_ptr<java::io::IOException> cVar14;
	std::shared_ptr<sun::security::x509::OIDName> cVar15;
	std::shared_ptr<java::io::IOException> cVar16;
	
	//    .param p1, "encName"    # Lsun/security/util/DerValue;
	//    .param p2, "nameConstraint"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 035        value = {
	// 036            Ljava/io/IOException;
	// 037        }
	// 038    .end annotation
	cVar0 = 0x30;
	cVar1 = 0x16;
	// 046    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = 0x0;
	tag = (short)((unsigned char)(( encName->tag & 0x1f)));
	//    .local v0, "tag":S
	// switch
	{
	auto item = ( tag );
	if (item == 0) goto label_pswitch_34;
	if (item == 1) goto label_pswitch_54;
	if (item == 2) goto label_pswitch_76;
	if (item == 3) goto label_pswitch_13;
	if (item == 4) goto label_pswitch_109;
	if (item == 5) goto label_pswitch_12b;
	if (item == 6) goto label_pswitch_98;
	if (item == 7) goto label_pswitch_c1;
	if (item == 8) goto label_pswitch_e5;
	}
label_pswitch_13:
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::io::IOException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unrecognized GeneralName tag, (")))->append(tag)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
	// throw
	throw cVar2;
	// 100    .line 93
label_pswitch_34:
	if ( !(encName->isContextSpecific()) )  
		goto label_cond_4b;
	if ( !(encName->isConstructed()) )  
		goto label_cond_4b;
	encName->resetTag(cVar0);
	cVar4 = std::make_shared<sun::security::x509::OtherName>(encName);
	this->name = cVar4;
label_goto_4a:
	return;
	// 128    .line 97
label_cond_4b:
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of Other-Name")));
	// throw
	throw cVar5;
	// 138    .line 102
label_pswitch_54:
	if ( !(encName->isContextSpecific()) )  
		goto label_cond_6d;
	if ( !(( encName->isConstructed() ^ 0x1)) )  
		goto label_cond_6d;
	encName->resetTag(cVar1);
	cVar6 = std::make_shared<sun::security::x509::RFC822Name>(encName);
	this->name = cVar6;
	goto label_goto_4a;
	// 166    .line 106
label_cond_6d:
	cVar7 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of RFC822 name")));
	// throw
	throw cVar7;
	// 176    .line 111
label_pswitch_76:
	if ( !(encName->isContextSpecific()) )  
		goto label_cond_8f;
	if ( !(( encName->isConstructed() ^ 0x1)) )  
		goto label_cond_8f;
	encName->resetTag(cVar1);
	cVar8 = std::make_shared<sun::security::x509::DNSName>(encName);
	this->name = cVar8;
	goto label_goto_4a;
	// 204    .line 115
label_cond_8f:
	cVar9 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of DNS name")));
	// throw
	throw cVar9;
	// 214    .line 120
label_pswitch_98:
	if ( !(encName->isContextSpecific()) )  
		goto label_cond_b8;
	if ( !(( encName->isConstructed() ^ 0x1)) )  
		goto label_cond_b8;
	encName->resetTag(cVar1);
	if ( !(nameConstraint) )  
		goto label_cond_b2;
	cVar10 = sun::security::x509::URIName::nameConstraint(encName);
label_goto_af:
	this->name = cVar10;
	goto label_goto_4a;
	// 245    .line 123
label_cond_b2:
	cVar10 = std::make_shared<sun::security::x509::URIName>(encName);
	goto label_goto_af;
	// 253    .line 125
label_cond_b8:
	cVar12 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of URI")));
	// throw
	throw cVar12;
	// 263    .line 130
label_pswitch_c1:
	if ( !(encName->isContextSpecific()) )  
		goto label_cond_dc;
	if ( !(( encName->isConstructed() ^ 0x1)) )  
		goto label_cond_dc;
	encName->resetTag(0x4);
	cVar13 = std::make_shared<sun::security::x509::IPAddressName>(encName);
	this->name = cVar13;
	goto label_goto_4a;
	// 293    .line 134
label_cond_dc:
	cVar14 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of IP address")));
	// throw
	throw cVar14;
	// 303    .line 139
label_pswitch_e5:
	if ( !(encName->isContextSpecific()) )  
		goto label_cond_100;
	if ( !(( encName->isConstructed() ^ 0x1)) )  
		goto label_cond_100;
	encName->resetTag(0x6);
	cVar15 = std::make_shared<sun::security::x509::OIDName>(encName);
	this->name = cVar15;
	goto label_goto_4a;
	// 333    .line 143
label_cond_100:
	cVar16 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of OID name")));
	// throw
	throw cVar16;
	// 343    .line 148
label_pswitch_109:
	if ( !(encName->isContextSpecific()) )  
		goto label_cond_122;
	if ( !(encName->isConstructed()) )  
		goto label_cond_122;
	cVar17 = std::make_shared<sun::security::x509::X500Name>(encName->getData());
	this->name = cVar17;
	goto label_goto_4a;
	// 370    .line 151
label_cond_122:
	cVar18 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of Directory name")));
	// throw
	throw cVar18;
	// 380    .line 156
label_pswitch_12b:
	if ( !(encName->isContextSpecific()) )  
		goto label_cond_143;
	if ( !(encName->isConstructed()) )  
		goto label_cond_143;
	encName->resetTag(cVar0);
	cVar19 = std::make_shared<sun::security::x509::EDIPartyName>(encName);
	this->name = cVar19;
	goto label_goto_4a;
	// 406    .line 160
label_cond_143:
	cVar20 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of EDI name")));
	// throw
	throw cVar20;
	// 416    .line 91
	// 417    :pswitch_data_14c
	// 418    .packed-switch 0x0
	// 419        :pswitch_34
	// 420        :pswitch_54
	// 421        :pswitch_76
	// 422        :pswitch_13
	// 423        :pswitch_109
	// 424        :pswitch_12b
	// 425        :pswitch_98
	// 426        :pswitch_c1
	// 427        :pswitch_e5
	// 428    .end packed-switch

}
// .method public constructor <init>(Lsun/security/x509/GeneralNameInterface;)V
sun::security::x509::GeneralName::GeneralName(std::shared_ptr<sun::security::x509::GeneralNameInterface> name)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "name"    # Lsun/security/x509/GeneralNameInterface;
	// 439    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->name = 0x0;
	if ( name )     
		goto label_cond_11;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GeneralName must not be null")));
	// throw
	throw cVar0;
	// 456    .line 67
label_cond_11:
	this->name = name;
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::GeneralName::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	bool cVar0;
	unsigned char cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	int nameType;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 470        value = {
	// 471            Ljava/io/IOException;
	// 472        }
	// 473    .end annotation
	cVar0 = 0x1;
	cVar1 = -0x80;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tmp":Lsun/security/util/DerOutputStream;
	this->name->encode(tmp);
	nameType = this->name->getType();
	//    .local v0, "nameType":I
	if ( !(nameType) )  
		goto label_cond_19;
	if ( nameType != 0x3 )
		goto label_cond_22;
label_cond_19:
	out->writeImplicit(sun::security::util::DerValue::createTag(cVar1, cVar0, (unsigned char)(nameType)), tmp);
label_goto_21:
	return;
	// 524    .line 233
label_cond_22:
	if ( nameType == 0x5 )
		goto label_cond_19;
	if ( nameType != 0x4 )
		goto label_cond_31;
	out->write(sun::security::util::DerValue::createTag(cVar1, cVar0, (unsigned char)(nameType)), tmp);
	goto label_goto_21;
	// 547    .line 246
label_cond_31:
	out->writeImplicit(sun::security::util::DerValue::createTag(cVar1, 0x0, (unsigned char)(nameType)), tmp);
	goto label_goto_21;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::GeneralName::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	bool cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 576    .line 202
label_cond_5:
	if ( other->instanceOf("sun::security::x509::GeneralName") )     
		goto label_cond_a;
	return cVar1;
	// 585    .line 204
label_cond_a:
	other->checkCast("sun::security::x509::GeneralName");
	//    .end local p1    # "other":Ljava/lang/Object;
	//    .local v1, "otherGNI":Lsun/security/x509/GeneralNameInterface;
	try {
	//label_try_start_e:
	//label_try_end_13:
	}
	catch (java::lang::UnsupportedOperationException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/lang/UnsupportedOperationException; {:try_start_e .. :try_end_13} :catch_19
	if ( this->name->constrains(other->name) )     
		goto label_cond_17;
label_goto_16:
	return cVar0;
label_cond_17:
	cVar0 = cVar1;
	goto label_goto_16;
	// 613    .line 207
label_catch_19:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ioe":Ljava/lang/UnsupportedOperationException;
	return cVar1;

}
// .method public getName()Lsun/security/x509/GeneralNameInterface;
std::shared_ptr<sun::security::x509::GeneralNameInterface> sun::security::x509::GeneralName::getName()
{
	
	return this->name;

}
// .method public getType()I
int sun::security::x509::GeneralName::getType()
{
	
	return this->name->getType();

}
// .method public hashCode()I
int sun::security::x509::GeneralName::hashCode()
{
	
	return this->name->hashCode();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::GeneralName::toString()
{
	
	return this->name->toString();

}


