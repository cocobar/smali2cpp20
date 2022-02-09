// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\DistributionPoint.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Arrays.h"
#include "java.util.Objects.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.DistributionPoint.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.RDN.h"

static sun::security::x509::DistributionPoint::AA_COMPROMISE = 0x8;
static sun::security::x509::DistributionPoint::AFFILIATION_CHANGED = 0x3;
static sun::security::x509::DistributionPoint::CA_COMPROMISE = 0x2;
static sun::security::x509::DistributionPoint::CERTIFICATE_HOLD = 0x6;
static sun::security::x509::DistributionPoint::CESSATION_OF_OPERATION = 0x5;
static sun::security::x509::DistributionPoint::KEY_COMPROMISE = 0x1;
static sun::security::x509::DistributionPoint::PRIVILEGE_WITHDRAWN = 0x7;
static sun::security::x509::DistributionPoint::REASON_STRINGS;
static sun::security::x509::DistributionPoint::SUPERSEDED = 0x4;
static sun::security::x509::DistributionPoint::TAG_DIST_PT = 0x0t;
static sun::security::x509::DistributionPoint::TAG_FULL_NAME = 0x0t;
static sun::security::x509::DistributionPoint::TAG_ISSUER = 0x2t;
static sun::security::x509::DistributionPoint::TAG_REASONS = 0x1t;
static sun::security::x509::DistributionPoint::TAG_REL_NAME = 0x1t;
// .method static constructor <clinit>()V
void sun::security::x509::DistributionPoint::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x9);
	cVar0[0x0] = 0x0;
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("key compromise"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CA compromise"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("affiliation changed"));
	cVar0[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("superseded"));
	cVar0[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("cessation of operation"));
	cVar0[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("certificate hold"));
	cVar0[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("privilege withdrawn"));
	cVar0[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("AA compromise"));
	sun::security::x509::DistributionPoint::REASON_STRINGS = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::DistributionPoint::DistributionPoint(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	unsigned char cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<sun::security::util::DerInputStream> opt;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<sun::security::util::DerValue> distPnt;
	std::shared_ptr<sun::security::x509::GeneralNames> cVar4;
	std::shared_ptr<sun::security::x509::RDN> cVar6;
	std::shared_ptr<java::io::IOException> cVar7;
	std::shared_ptr<java::io::IOException> cVar8;
	std::shared_ptr<java::io::IOException> cVar9;
	std::shared_ptr<sun::security::x509::GeneralNames> cVar10;
	std::shared_ptr<java::io::IOException> cVar11;
	std::shared_ptr<java::io::IOException> cVar12;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 132        value = {
	// 133            Ljava/io/IOException;
	// 134        }
	// 135    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x30;
	cVar2 = 0x0;
	// 145    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( val->tag == cVar1 )
		goto label_cond_30;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of DistributionPoint.")));
	// throw
	throw cVar3;
	// 161    .line 206
	// 162    .local v1, "opt":Lsun/security/util/DerValue;
label_cond_14:
	distPnt = opt->data->getDerValue();
	//    .local v0, "distPnt":Lsun/security/util/DerValue;
	if ( !(distPnt->isContextSpecific(cVar2)) )  
		goto label_cond_5f;
	if ( !(distPnt->isConstructed()) )  
		goto label_cond_5f;
	distPnt->resetTag(cVar1);
	cVar4 = std::make_shared<sun::security::x509::GeneralNames>(distPnt);
	this->fullName = cVar4;
	//    .end local v0    # "distPnt":Lsun/security/util/DerValue;
	//    .end local v1    # "opt":Lsun/security/util/DerValue;
label_cond_30:
label_goto_30:
	if ( !(val->data) )  
		goto label_cond_da;
	if ( !(val->data->available()) )  
		goto label_cond_da;
	opt = val->data->getDerValue();
	//    .restart local v1    # "opt":Lsun/security/util/DerValue;
	if ( !(opt->isContextSpecific(cVar2)) )  
		goto label_cond_81;
	if ( !(opt->isConstructed()) )  
		goto label_cond_81;
	if ( this->fullName )     
		goto label_cond_56;
	if ( !(this->relativeName) )  
		goto label_cond_14;
label_cond_56:
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate DistributionPointName in DistributionPoint.")));
	// throw
	throw cVar5;
	// 253    .line 211
	// 254    .restart local v0    # "distPnt":Lsun/security/util/DerValue;
label_cond_5f:
	if ( !(distPnt->isContextSpecific(cVar0)) )  
		goto label_cond_78;
	if ( !(distPnt->isConstructed()) )  
		goto label_cond_78;
	distPnt->resetTag(0x31);
	cVar6 = std::make_shared<sun::security::x509::RDN>(distPnt);
	this->relativeName = cVar6;
	goto label_goto_30;
	// 284    .line 216
label_cond_78:
	cVar7 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid DistributionPointName in DistributionPoint")));
	// throw
	throw cVar7;
	// 294    .line 219
	// 295    .end local v0    # "distPnt":Lsun/security/util/DerValue;
label_cond_81:
	if ( !(opt->isContextSpecific(cVar0)) )  
		goto label_cond_ab;
	if ( !(( opt->isConstructed() ^ 0x1)) )  
		goto label_cond_ab;
	if ( !(this->reasonFlags) )  
		goto label_cond_9c;
	cVar8 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate Reasons in DistributionPoint.")));
	// throw
	throw cVar8;
	// 327    .line 225
label_cond_9c:
	opt->resetTag(0x3);
	this->reasonFlags = opt->getUnalignedBitString()->toBooleanArray();
	goto label_goto_30;
	// 346    .line 227
label_cond_ab:
	if ( !(opt->isContextSpecific(0x2)) )  
		goto label_cond_d1;
	if ( !(opt->isConstructed()) )  
		goto label_cond_d1;
	if ( !(this->crlIssuer) )  
		goto label_cond_c5;
	cVar9 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Duplicate CRLIssuer in DistributionPoint.")));
	// throw
	throw cVar9;
	// 378    .line 233
label_cond_c5:
	opt->resetTag(cVar1);
	cVar10 = std::make_shared<sun::security::x509::GeneralNames>(opt);
	this->crlIssuer = cVar10;
	goto label_goto_30;
	// 391    .line 236
label_cond_d1:
	cVar11 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of DistributionPoint.")));
	// throw
	throw cVar11;
	// 401    .line 240
	// 402    .end local v1    # "opt":Lsun/security/util/DerValue;
label_cond_da:
	if ( this->crlIssuer )     
		goto label_cond_ef;
	if ( this->fullName )     
		goto label_cond_ef;
	if ( this->relativeName )     
		goto label_cond_ef;
	cVar12 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("One of fullName, relativeName,  and crlIssuer has to be set")));
	// throw
	throw cVar12;
	// 425    .line 244
label_cond_ef:
	return;

}
// .method public constructor <init>(Lsun/security/x509/GeneralNames;[ZLsun/security/x509/GeneralNames;)V
sun::security::x509::DistributionPoint::DistributionPoint(std::shared_ptr<sun::security::x509::GeneralNames> fullName,std::shared_ptr<bool[]> reasonFlags,std::shared_ptr<sun::security::x509::GeneralNames> crlIssuer)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "fullName"    # Lsun/security/x509/GeneralNames;
	//    .param p2, "reasonFlags"    # [Z
	//    .param p3, "crlIssuer"    # Lsun/security/x509/GeneralNames;
	// 438    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( fullName )     
		goto label_cond_10;
	if ( crlIssuer )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("fullName and crlIssuer may not both be null")));
	// throw
	throw cVar0;
	// 456    .line 157
label_cond_10:
	this->fullName = fullName;
	this->reasonFlags = reasonFlags;
	this->crlIssuer = crlIssuer;
	return;

}
// .method public constructor <init>(Lsun/security/x509/RDN;[ZLsun/security/x509/GeneralNames;)V
sun::security::x509::DistributionPoint::DistributionPoint(std::shared_ptr<sun::security::x509::RDN> relativeName,std::shared_ptr<bool[]> reasonFlags,std::shared_ptr<sun::security::x509::GeneralNames> crlIssuer)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "relativeName"    # Lsun/security/x509/RDN;
	//    .param p2, "reasonFlags"    # [Z
	//    .param p3, "crlIssuer"    # Lsun/security/x509/GeneralNames;
	// 478    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( relativeName )     
		goto label_cond_10;
	if ( crlIssuer )     
		goto label_cond_10;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("relativeName and crlIssuer may not both be null")));
	// throw
	throw cVar0;
	// 496    .line 179
label_cond_10:
	this->relativeName = relativeName;
	this->reasonFlags = reasonFlags;
	this->crlIssuer = crlIssuer;
	return;

}
// .method private static reasonToString(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::DistributionPoint::reasonToString(int reason)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "reason"    # I
	if ( reason <= 0 )
		goto label_cond_c;
	if ( reason >= sun::security::x509::DistributionPoint::REASON_STRINGS->size() )
		goto label_cond_c;
	return sun::security::x509::DistributionPoint::REASON_STRINGS[reason];
	// 531    .line 375
label_cond_c:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unknown reason ")))->append(reason)->toString();

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::DistributionPoint::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	bool cVar2;
	std::shared_ptr<sun::security::util::DerOutputStream> tagged;
	std::shared_ptr<sun::security::util::DerOutputStream> distributionPoint;
	std::shared_ptr<sun::security::util::DerOutputStream> derOut;
	std::shared_ptr<sun::security::util::DerOutputStream> reasons;
	std::shared_ptr<sun::security::util::BitArray> rf;
	std::shared_ptr<sun::security::util::DerOutputStream> issuer;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 560        value = {
	// 561            Ljava/io/IOException;
	// 562        }
	// 563    .end annotation
	cVar0 = 0x0;
	cVar1 = -0x80;
	cVar2 = 0x1;
	tagged = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v5, "tagged":Lsun/security/util/DerOutputStream;
	if ( this->fullName )     
		goto label_cond_11;
	if ( !(this->relativeName) )  
		goto label_cond_32;
label_cond_11:
	distributionPoint = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "distributionPoint":Lsun/security/util/DerOutputStream;
	if ( !(this->fullName) )  
		goto label_cond_68;
	derOut = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "derOut":Lsun/security/util/DerOutputStream;
	this->fullName->encode(derOut);
	distributionPoint->writeImplicit(sun::security::util::DerValue::createTag(cVar1, cVar2, cVar0), derOut);
	//    .end local v0    # "derOut":Lsun/security/util/DerOutputStream;
label_cond_2b:
label_goto_2b:
	tagged->write(sun::security::util::DerValue::createTag(cVar1, cVar2, cVar0), distributionPoint);
	//    .end local v1    # "distributionPoint":Lsun/security/util/DerOutputStream;
label_cond_32:
	if ( !(this->reasonFlags) )  
		goto label_cond_4c;
	reasons = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v3, "reasons":Lsun/security/util/DerOutputStream;
	rf = std::make_shared<sun::security::util::BitArray>(this->reasonFlags);
	//    .local v4, "rf":Lsun/security/util/BitArray;
	reasons->putTruncatedUnalignedBitString(rf);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar1, cVar0, cVar2), reasons);
	//    .end local v3    # "reasons":Lsun/security/util/DerOutputStream;
	//    .end local v4    # "rf":Lsun/security/util/BitArray;
label_cond_4c:
	if ( !(this->crlIssuer) )  
		goto label_cond_62;
	issuer = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "issuer":Lsun/security/util/DerOutputStream;
	this->crlIssuer->encode(issuer);
	tagged->writeImplicit(sun::security::util::DerValue::createTag(cVar1, cVar2, 0x2), issuer);
	//    .end local v2    # "issuer":Lsun/security/util/DerOutputStream;
label_cond_62:
	out->write(0x30, tagged);
	return;
	// 700    .line 292
	// 701    .restart local v1    # "distributionPoint":Lsun/security/util/DerOutputStream;
label_cond_68:
	if ( !(this->relativeName) )  
		goto label_cond_2b;
	derOut = std::make_shared<sun::security::util::DerOutputStream>();
	//    .restart local v0    # "derOut":Lsun/security/util/DerOutputStream;
	this->relativeName->encode(derOut);
	distributionPoint->writeImplicit(sun::security::util::DerValue::createTag(cVar1, cVar2, cVar2), derOut);
	goto label_goto_2b;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::DistributionPoint::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<sun::security::x509::DistributionPoint> other;
	bool cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 742    .line 331
label_cond_4:
	if ( obj->instanceOf("sun::security::x509::DistributionPoint") )     
		goto label_cond_a;
	return 0x0;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::x509::DistributionPoint");
	//    .local v1, "other":Lsun/security/x509/DistributionPoint;
	if ( !(java::util::Objects::equals(this->fullName, other->fullName)) )  
		goto label_cond_34;
	if ( !(java::util::Objects::equals(this->relativeName, other->relativeName)) )  
		goto label_cond_34;
	if ( !(java::util::Objects::equals(this->crlIssuer, other->crlIssuer)) )  
		goto label_cond_34;
	cVar0 = java::util::Arrays::equals(this->reasonFlags, other->reasonFlags);
label_goto_33:
	return cVar0;
	// 808    .line 336
label_cond_34:
	cVar0 = 0x0;
	//    .local v0, "equal":Z
	goto label_goto_33;

}
// .method public getCRLIssuer()Lsun/security/x509/GeneralNames;
std::shared_ptr<sun::security::x509::GeneralNames> sun::security::x509::DistributionPoint::getCRLIssuer()
{
	
	return this->crlIssuer;

}
// .method public getFullName()Lsun/security/x509/GeneralNames;
std::shared_ptr<sun::security::x509::GeneralNames> sun::security::x509::DistributionPoint::getFullName()
{
	
	return this->fullName;

}
// .method public getReasonFlags()[Z
bool sun::security::x509::DistributionPoint::getReasonFlags()
{
	
	return this->reasonFlags;

}
// .method public getRelativeName()Lsun/security/x509/RDN;
std::shared_ptr<sun::security::x509::RDN> sun::security::x509::DistributionPoint::getRelativeName()
{
	
	return this->relativeName;

}
// .method public hashCode()I
int sun::security::x509::DistributionPoint::hashCode()
{
	
	int hash;
	int i;
	
	hash = this->hashCode;
	//    .local v0, "hash":I
	if ( hash )     
		goto label_cond_3d;
	hash = 0x1;
	if ( !(this->fullName) )  
		goto label_cond_11;
	hash = ( this->fullName->hashCode() + 0x1);
label_cond_11:
	if ( !(this->relativeName) )  
		goto label_cond_1c;
	hash = (hash +  this->relativeName->hashCode());
label_cond_1c:
	if ( !(this->crlIssuer) )  
		goto label_cond_27;
	hash = (hash +  this->crlIssuer->hashCode());
label_cond_27:
	if ( !(this->reasonFlags) )  
		goto label_cond_3b;
	i = 0x0;
	//    .local v1, "i":I
label_goto_2c:
	if ( i >= this->reasonFlags->size() )
		goto label_cond_3b;
	if ( !(this->reasonFlags[i]) )  
		goto label_cond_38;
	hash = (hash +  i);
label_cond_38:
	i = ( i + 0x1);
	goto label_goto_2c;
	// 947    .line 363
	// 948    .end local v1    # "i":I
label_cond_3b:
	this->hashCode = hash;
label_cond_3d:
	return hash;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::DistributionPoint::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sb":Ljava/lang/StringBuilder;
	if ( !(this->fullName) )  
		goto label_cond_1c;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DistributionPoint:\n     ")))->append(this->fullName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_1c:
	if ( !(this->relativeName) )  
		goto label_cond_33;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DistributionPoint:\n     ")))->append(this->relativeName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_33:
	if ( !(this->reasonFlags) )  
		goto label_cond_61;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   ReasonFlags:\n")));
	i = 0x0;
	//    .local v0, "i":I
label_goto_3e:
	if ( i >= this->reasonFlags->size() )
		goto label_cond_61;
	if ( !(this->reasonFlags[i]) )  
		goto label_cond_5e;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("    ")))->append(sun::security::x509::DistributionPoint::reasonToString(i))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_5e:
	i = ( i + 0x1);
	goto label_goto_3e;
	// 1066    .line 398
	// 1067    .end local v0    # "i":I
label_cond_61:
	if ( !(this->crlIssuer) )  
		goto label_cond_78;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("   CRLIssuer:")))->append(this->crlIssuer)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_78:
	return sb->toString();

}


