// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\EDIPartyName.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.EDIPartyName.h"
#include "sun.security.x509.GeneralNameInterface.h"

static sun::security::x509::EDIPartyName::TAG_ASSIGNER = 0x0t;
static sun::security::x509::EDIPartyName::TAG_PARTYNAME = 0x1t;
// .method public constructor <init>(Ljava/lang/String;)V
sun::security::x509::EDIPartyName::EDIPartyName(std::shared_ptr<java::lang::String> partyName)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "partyName"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 032    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->assigner = cVar0;
	this->party = cVar0;
	this->myhash = -0x1;
	this->party = partyName;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
sun::security::x509::EDIPartyName::EDIPartyName(std::shared_ptr<java::lang::String> assignerName,std::shared_ptr<java::lang::String> partyName)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "assignerName"    # Ljava/lang/String;
	//    .param p2, "partyName"    # Ljava/lang/String;
	cVar0 = 0x0;
	// 061    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->assigner = cVar0;
	this->party = cVar0;
	this->myhash = -0x1;
	this->assigner = assignerName;
	this->party = partyName;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::EDIPartyName::EDIPartyName(std::shared_ptr<sun::security::util::DerValue> derValue)
{
	
	int cVar0;
	unsigned char cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<sun::security::util::DerInputStream> in;
	auto seq;
	int len;
	std::shared_ptr<java::io::IOException> cVar3;
	int i;
	std::shared_ptr<sun::security::util::DerValue> opt;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::io::IOException> cVar5;
	
	//    .param p1, "derValue"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 088        value = {
	// 089            Ljava/io/IOException;
	// 090        }
	// 091    .end annotation
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	// 101    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->assigner = cVar2;
	this->party = cVar2;
	this->myhash = -0x1;
	in = std::make_shared<sun::security::util::DerInputStream>(derValue->toByteArray());
	//    .local v1, "in":Lsun/security/util/DerInputStream;
	seq = in->getSequence(cVar0);
	//    .local v4, "seq":[Lsun/security/util/DerValue;
	len = seq->size();
	//    .local v2, "len":I
	if ( len <  cVar1 )
		goto label_cond_1f;
	if ( len <= cVar0 )
		goto label_cond_28;
label_cond_1f:
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of EDIPartyName")));
	// throw
	throw cVar3;
	// 149    .line 90
label_cond_28:
	i = 0x0;
	//    .local v0, "i":I
label_goto_29:
	if ( i >= len )
		goto label_cond_7f;
	opt = seq[i];
	//    .local v3, "opt":Lsun/security/util/DerValue;
	if ( !(opt->isContextSpecific(0x0)) )  
		goto label_cond_55;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_55;
	if ( !(this->assigner) )  
		goto label_cond_49;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate nameAssigner found in EDIPartyName")));
	// throw
	throw cVar4;
	// 194    .line 97
label_cond_49:
	opt = opt->data->getDerValue();
	this->assigner = opt->getAsString();
label_cond_55:
	if ( !(opt->isContextSpecific(cVar1)) )  
		goto label_cond_7c;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_7c;
	if ( !(this->party) )  
		goto label_cond_70;
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate partyName found in EDIPartyName")));
	// throw
	throw cVar5;
	// 241    .line 105
label_cond_70:
	this->party = opt->data->getDerValue()->getAsString();
label_cond_7c:
	i = ( i + 0x1);
	goto label_goto_29;
	// 262    .line 109
	// 263    .end local v3    # "opt":Lsun/security/util/DerValue;
label_cond_7f:
	return;

}
// .method public constrains(Lsun/security/x509/GeneralNameInterface;)I
int sun::security::x509::EDIPartyName::constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "inputName"    # Lsun/security/x509/GeneralNameInterface;
	//    .annotation system Ldalvik/annotation/Throws;
	// 274        value = {
	// 275            Ljava/lang/UnsupportedOperationException;
	// 276        }
	// 277    .end annotation
	if ( inputName )     
		goto label_cond_4;
	//    .local v0, "constraintType":I
label_goto_3:
	return constraintType;
	// 291    .line 237
	// 292    .end local v0    # "constraintType":I
label_cond_4:
	if ( inputName->getType() == 0x5 )
		goto label_cond_d;
	//    .restart local v0    # "constraintType":I
	goto label_goto_3;
	// 308    .line 240
	// 309    .end local v0    # "constraintType":I
label_cond_d:
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Narrowing, widening, and matching of names not supported for EDIPartyName")));
	// throw
	throw cVar0;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::EDIPartyName::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	unsigned char cVar0;
	bool cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> tagged;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp2;
	std::shared_ptr<java::io::IOException> cVar2;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 324        value = {
	// 325            Ljava/io/IOException;
	// 326        }
	// 327    .end annotation
	cVar0 = -0x80;
	cVar1 = 0x0;
	tagged = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tagged":Lsun/security/util/DerOutputStream;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tmp":Lsun/security/util/DerOutputStream;
	if ( !(this->assigner) )  
		goto label_cond_22;
	tmp2 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "tmp2":Lsun/security/util/DerOutputStream;
	tmp2->putPrintableString(this->assigner);
	tagged->write(sun::security::util::DerValue::createTag(cVar0, cVar1, cVar1), tmp2);
	//    .end local v2    # "tmp2":Lsun/security/util/DerOutputStream;
label_cond_22:
	if ( this->party )     
		goto label_cond_2f;
	cVar2 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cannot have null partyName")));
	// throw
	throw cVar2;
	// 385    .line 139
label_cond_2f:
	tmp->putPrintableString(this->party);
	tagged->write(sun::security::util::DerValue::createTag(cVar0, cVar1, 0x1), tmp);
	out->write(0x30, tagged);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::EDIPartyName::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<sun::security::x509::EDIPartyName> cVar1;
	std::shared_ptr<java::lang::String> otherAssigner;
	std::shared_ptr<java::lang::String> otherParty;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( other->instanceOf("sun::security::x509::EDIPartyName") )     
		goto label_cond_6;
	return cVar0;
label_cond_6:
	cVar1 = other;
	cVar1->checkCast("sun::security::x509::EDIPartyName");
	otherAssigner = cVar1->assigner;
	//    .local v0, "otherAssigner":Ljava/lang/String;
	if ( this->assigner )     
		goto label_cond_12;
	if ( !(otherAssigner) )  
		goto label_cond_1b;
	return cVar0;
	// 445    .line 179
label_cond_12:
	if ( this->assigner->equals(otherAssigner) )     
		goto label_cond_1b;
	return cVar0;
	// 458    .line 182
label_cond_1b:
	other->checkCast("sun::security::x509::EDIPartyName");
	//    .end local p1    # "other":Ljava/lang/Object;
	otherParty = other->party;
	//    .local v1, "otherParty":Ljava/lang/String;
	if ( this->party )     
		goto label_cond_26;
	if ( !(otherParty) )  
		goto label_cond_2f;
	return cVar0;
	// 477    .line 187
label_cond_26:
	if ( this->party->equals(otherParty) )     
		goto label_cond_2f;
	return cVar0;
	// 490    .line 190
label_cond_2f:
	return 0x1;

}
// .method public getAssignerName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::EDIPartyName::getAssignerName()
{
	
	return this->assigner;

}
// .method public getPartyName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::EDIPartyName::getPartyName()
{
	
	return this->party;

}
// .method public getType()I
int sun::security::x509::EDIPartyName::getType()
{
	
	return 0x5;

}
// .method public hashCode()I
int sun::security::x509::EDIPartyName::hashCode()
{
	
	int cVar0;
	
	if ( this->myhash != -0x1 )
		goto label_cond_1f;
	if ( this->party )     
		goto label_cond_22;
	cVar0 = 0x1;
label_goto_a:
	this->myhash = ( cVar0 + 0x25);
	if ( !(this->assigner) )  
		goto label_cond_1f;
	this->myhash = (( this->myhash * 0x25) +  this->assigner->hashCode());
label_cond_1f:
	return this->myhash;
	// 576    .line 200
label_cond_22:
	cVar0 = this->party->hashCode();
	goto label_goto_a;

}
// .method public subtreeDepth()I
int sun::security::x509::EDIPartyName::subtreeDepth()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 590        value = {
	// 591            Ljava/lang/UnsupportedOperationException;
	// 592        }
	// 593    .end annotation
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("subtreeDepth() not supported for EDIPartyName")));
	// throw
	throw cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::EDIPartyName::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( this->assigner )     
		goto label_cond_29;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_13:
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("EDIPartyName: ")))->append(cVar1)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  partyName = ")))->append(this->party)->toString();
	// 656    .line 214
label_cond_29:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  nameAssigner = ")))->append(this->assigner)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")))->toString();
	goto label_goto_13;

}


