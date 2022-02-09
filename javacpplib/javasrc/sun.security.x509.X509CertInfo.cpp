// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CertInfo.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Class.h"
#include "java.lang.Exception.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertificateEncodingException.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.CertificateParsingException.h"
#include "java.util.Collection.h"
#include "java.util.Date.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CertificateAlgorithmId.h"
#include "sun.security.x509.CertificateExtensions.h"
#include "sun.security.x509.CertificateSerialNumber.h"
#include "sun.security.x509.CertificateValidity.h"
#include "sun.security.x509.CertificateVersion.h"
#include "sun.security.x509.CertificateX509Key.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.OIDMap.h"
#include "sun.security.x509.SerialNumber.h"
#include "sun.security.x509.SubjectAlternativeNameExtension.h"
#include "sun.security.x509.UniqueIdentity.h"
#include "sun.security.x509.X500Name.h"
#include "sun.security.x509.X509AttributeName.h"
#include "sun.security.x509.X509CertInfo.h"

static sun::security::x509::X509CertInfo::ALGORITHM_ID = std::make_shared<java::lang::String>("algorithmID");
static sun::security::x509::X509CertInfo::ATTR_ALGORITHM = 0x3;
static sun::security::x509::X509CertInfo::ATTR_EXTENSIONS = 0xa;
static sun::security::x509::X509CertInfo::ATTR_ISSUER = 0x4;
static sun::security::x509::X509CertInfo::ATTR_ISSUER_ID = 0x8;
static sun::security::x509::X509CertInfo::ATTR_KEY = 0x7;
static sun::security::x509::X509CertInfo::ATTR_SERIAL = 0x2;
static sun::security::x509::X509CertInfo::ATTR_SUBJECT = 0x6;
static sun::security::x509::X509CertInfo::ATTR_SUBJECT_ID = 0x9;
static sun::security::x509::X509CertInfo::ATTR_VALIDITY = 0x5;
static sun::security::x509::X509CertInfo::ATTR_VERSION = 0x1;
static sun::security::x509::X509CertInfo::DN_NAME = std::make_shared<java::lang::String>("dname");
static sun::security::x509::X509CertInfo::EXTENSIONS = std::make_shared<java::lang::String>("extensions");
static sun::security::x509::X509CertInfo::IDENT = std::make_shared<java::lang::String>("x509.info");
static sun::security::x509::X509CertInfo::ISSUER = std::make_shared<java::lang::String>("issuer");
static sun::security::x509::X509CertInfo::ISSUER_ID = std::make_shared<java::lang::String>("issuerID");
static sun::security::x509::X509CertInfo::KEY = std::make_shared<java::lang::String>("key");
static sun::security::x509::X509CertInfo::NAME = std::make_shared<java::lang::String>("info");
static sun::security::x509::X509CertInfo::SERIAL_NUMBER = std::make_shared<java::lang::String>("serialNumber");
static sun::security::x509::X509CertInfo::SUBJECT = std::make_shared<java::lang::String>("subject");
static sun::security::x509::X509CertInfo::SUBJECT_ID = std::make_shared<java::lang::String>("subjectID");
static sun::security::x509::X509CertInfo::VALIDITY = std::make_shared<java::lang::String>("validity");
static sun::security::x509::X509CertInfo::VERSION = std::make_shared<java::lang::String>("version");
static sun::security::x509::X509CertInfo::map;
// .method static constructor <clinit>()V
void sun::security::x509::X509CertInfo::static_cinit()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	cVar0 = std::make_shared<java::util::HashMap>();
	sun::security::x509::X509CertInfo::map = cVar0;
	sun::security::x509::X509CertInfo::map->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("version")), java::lang::Integer::valueOf(0x1));
	sun::security::x509::X509CertInfo::map->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("serialNumber")), java::lang::Integer::valueOf(0x2));
	sun::security::x509::X509CertInfo::map->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("algorithmID")), java::lang::Integer::valueOf(0x3));
	sun::security::x509::X509CertInfo::map->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer")), java::lang::Integer::valueOf(0x4));
	sun::security::x509::X509CertInfo::map->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("validity")), java::lang::Integer::valueOf(0x5));
	sun::security::x509::X509CertInfo::map->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject")), java::lang::Integer::valueOf(0x6));
	sun::security::x509::X509CertInfo::map->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("key")), java::lang::Integer::valueOf(0x7));
	sun::security::x509::X509CertInfo::map->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuerID")), java::lang::Integer::valueOf(0x8));
	sun::security::x509::X509CertInfo::map->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("subjectID")), java::lang::Integer::valueOf(0x9));
	sun::security::x509::X509CertInfo::map->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("extensions")), java::lang::Integer::valueOf(0xa));
	return;

}
// .method public constructor <init>()V
sun::security::x509::X509CertInfo::X509CertInfo()
{
	
	std::shared_ptr<sun::security::x509::CertificateSerialNumber> cVar0;
	std::shared_ptr<sun::security::x509::CertificateVersion> cVar1;
	
	cVar0 = 0x0;
	// 258    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar1 = std::make_shared<sun::security::x509::CertificateVersion>();
	this->version = cVar1;
	this->serialNum = cVar0;
	this->algId = cVar0;
	this->issuer = cVar0;
	this->subject = cVar0;
	this->interval = cVar0;
	this->pubKey = cVar0;
	this->issuerUniqueId = cVar0;
	this->subjectUniqueId = cVar0;
	this->extensions = cVar0;
	this->rawCertInfo = cVar0;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::X509CertInfo::X509CertInfo(std::shared_ptr<sun::security::util::DerValue> derVal)
{
	
	std::shared_ptr<sun::security::x509::CertificateSerialNumber> cVar0;
	std::shared_ptr<sun::security::x509::CertificateVersion> cVar1;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "derVal"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 305        value = {
	// 306            Ljava/security/cert/CertificateParsingException;
	// 307        }
	// 308    .end annotation
	cVar0 = 0x0;
	// 314    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar1 = std::make_shared<sun::security::x509::CertificateVersion>();
	this->version = cVar1;
	this->serialNum = cVar0;
	this->algId = cVar0;
	this->issuer = cVar0;
	this->subject = cVar0;
	this->interval = cVar0;
	this->pubKey = cVar0;
	this->issuerUniqueId = cVar0;
	this->subjectUniqueId = cVar0;
	this->extensions = cVar0;
	this->rawCertInfo = cVar0;
	try {
	//label_try_start_1f:
	this->parse(derVal);
	//label_try_end_22:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/io/IOException; {:try_start_1f .. :try_end_22} :catch_23
	return;
	// 362    .line 168
label_catch_23:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<java::security::cert::CertificateParsingException>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method public constructor <init>([B)V
sun::security::x509::X509CertInfo::X509CertInfo(std::shared_ptr<unsigned char[]> cert)
{
	
	std::shared_ptr<sun::security::x509::CertificateSerialNumber> cVar0;
	std::shared_ptr<sun::security::x509::CertificateVersion> cVar1;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar2;
	std::shared_ptr<sun::security::util::DerValue> in;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "cert"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 379        value = {
	// 380            Ljava/security/cert/CertificateParsingException;
	// 381        }
	// 382    .end annotation
	cVar0 = 0x0;
	// 388    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar1 = std::make_shared<sun::security::x509::CertificateVersion>();
	this->version = cVar1;
	this->serialNum = cVar0;
	this->algId = cVar0;
	this->issuer = cVar0;
	this->subject = cVar0;
	this->interval = cVar0;
	this->pubKey = cVar0;
	this->issuerUniqueId = cVar0;
	this->subjectUniqueId = cVar0;
	this->extensions = cVar0;
	this->rawCertInfo = cVar0;
	try {
	//label_try_start_1f:
	in = std::make_shared<sun::security::util::DerValue>(cert);
	//    .local v1, "in":Lsun/security/util/DerValue;
	this->parse(in);
	//label_try_end_27:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_28;
	}
	//    .catch Ljava/io/IOException; {:try_start_1f .. :try_end_27} :catch_28
	return;
	// 442    .line 152
	// 443    .end local v1    # "in":Lsun/security/util/DerValue;
label_catch_28:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<java::security::cert::CertificateParsingException>(getCatchExcetionFromList);
	// throw
	throw cVar2;

}
// .method private attributeMap(Ljava/lang/String;)I
int sun::security::x509::X509CertInfo::attributeMap(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::Integer> num;
	
	//    .param p1, "name"    # Ljava/lang/String;
	num = sun::security::x509::X509CertInfo::map->get(name);
	num->checkCast("java::lang::Integer");
	//    .local v0, "num":Ljava/lang/Integer;
	if ( num )     
		goto label_cond_c;
	return 0x0;
	// 479    .line 809
label_cond_c:
	return num->intValue();

}
// .method private emit(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::X509CertInfo::emit(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	unsigned char cVar0;
	int cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar2;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar3;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 492        value = {
	// 493            Ljava/security/cert/CertificateException;,
	// 494            Ljava/io/IOException;
	// 495        }
	// 496    .end annotation
	cVar0 = -0x80;
	cVar1 = 0x0;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	this->version->encode(tmp);
	this->serialNum->encode(tmp);
	this->algId->encode(tmp);
	if ( this->version->compare(cVar1) )     
		goto label_cond_30;
	if ( this->issuer->toString() )     
		goto label_cond_30;
	cVar2 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null issuer DN not allowed in v1 certificate")));
	// throw
	throw cVar2;
	// 553    .line 771
label_cond_30:
	this->issuer->encode(tmp);
	this->interval->encode(tmp);
	if ( this->version->compare(cVar1) )     
		goto label_cond_53;
	if ( this->subject->toString() )     
		goto label_cond_53;
	cVar3 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null subject DN not allowed in v1 certificate")));
	// throw
	throw cVar3;
	// 593    .line 779
label_cond_53:
	this->subject->encode(tmp);
	this->pubKey->encode(tmp);
	if ( !(this->issuerUniqueId) )  
		goto label_cond_6b;
	this->issuerUniqueId->encode(tmp, sun::security::util::DerValue::createTag(cVar0, cVar1, 0x1));
label_cond_6b:
	if ( !(this->subjectUniqueId) )  
		goto label_cond_79;
	this->subjectUniqueId->encode(tmp, sun::security::util::DerValue::createTag(cVar0, cVar1, 0x2));
label_cond_79:
	if ( !(this->extensions) )  
		goto label_cond_82;
	this->extensions->encode(tmp);
label_cond_82:
	out->write(0x30, tmp);
	return;

}
// .method private getX500Name(Ljava/lang/String;Z)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::X509CertInfo::getX500Name(std::shared_ptr<java::lang::String> name,bool getIssuer)
{
	
	std::shared_ptr<sun::security::x509::X500Name> cVar0;
	std::shared_ptr<java::lang::Object> cVar2;
	std::shared_ptr<java::io::IOException> cVar4;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "getIssuer"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 667        value = {
	// 668            Ljava/io/IOException;
	// 669        }
	// 670    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("dname")))) )  
		goto label_cond_11;
	if ( !(getIssuer) )  
		goto label_cond_e;
	cVar0 = this->issuer;
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = this->subject;
	goto label_goto_d;
	// 695    .line 612
label_cond_11:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("x500principal")))) )  
		goto label_cond_2a;
	if ( !(getIssuer) )  
		goto label_cond_23;
	cVar2 = this->issuer->asX500Principal();
label_goto_22:
	return cVar2;
	// 717    .line 614
label_cond_23:
	cVar2 = this->subject->asX500Principal();
	goto label_goto_22;
	// 727    .line 616
label_cond_2a:
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized.")));
	// throw
	throw cVar4;

}
// .method private parse(Lsun/security/util/DerValue;)V
void sun::security::x509::X509CertInfo::parse(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar2;
	std::shared_ptr<sun::security::util::DerInputStream> in;
	std::shared_ptr<sun::security::util::DerValue> tmp;
	std::shared_ptr<sun::security::x509::CertificateVersion> cVar3;
	std::shared_ptr<sun::security::x509::CertificateSerialNumber> cVar4;
	std::shared_ptr<sun::security::x509::CertificateAlgorithmId> cVar5;
	std::shared_ptr<sun::security::x509::X500Name> cVar6;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar7;
	std::shared_ptr<sun::security::x509::CertificateValidity> cVar8;
	std::shared_ptr<sun::security::x509::X500Name> cVar9;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar10;
	std::shared_ptr<sun::security::x509::CertificateX509Key> cVar11;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar12;
	std::shared_ptr<sun::security::x509::UniqueIdentity> cVar13;
	std::shared_ptr<sun::security::x509::UniqueIdentity> cVar14;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar15;
	std::shared_ptr<sun::security::x509::CertificateExtensions> cVar16;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 742        value = {
	// 743            Ljava/security/cert/CertificateParsingException;,
	// 744            Ljava/io/IOException;
	// 745        }
	// 746    .end annotation
	cVar0 = 0x2;
	cVar1 = 0x0;
	if ( val->tag == 0x30 )
		goto label_cond_11;
	cVar2 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("signed fields invalid")));
	// throw
	throw cVar2;
	// 769    .line 631
label_cond_11:
	this->rawCertInfo = val->toByteArray();
	in = val->data;
	//    .local v0, "in":Lsun/security/util/DerInputStream;
	tmp = in->getDerValue();
	//    .local v1, "tmp":Lsun/security/util/DerValue;
	if ( !(tmp->isContextSpecific(cVar1)) )  
		goto label_cond_2e;
	cVar3 = std::make_shared<sun::security::x509::CertificateVersion>(tmp);
	this->version = cVar3;
label_cond_2e:
	cVar4 = std::make_shared<sun::security::x509::CertificateSerialNumber>(tmp);
	this->serialNum = cVar4;
	cVar5 = std::make_shared<sun::security::x509::CertificateAlgorithmId>(in);
	this->algId = cVar5;
	cVar6 = std::make_shared<sun::security::x509::X500Name>(in);
	this->issuer = cVar6;
	if ( !(this->issuer->isEmpty()) )  
		goto label_cond_54;
	cVar7 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Empty issuer DN not allowed in X509Certificates")));
	// throw
	throw cVar7;
	// 848    .line 656
label_cond_54:
	cVar8 = std::make_shared<sun::security::x509::CertificateValidity>(in);
	this->interval = cVar8;
	cVar9 = std::make_shared<sun::security::x509::X500Name>(in);
	this->subject = cVar9;
	if ( this->version->compare(cVar1) )     
		goto label_cond_7b;
	if ( !(this->subject->isEmpty()) )  
		goto label_cond_7b;
	cVar10 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Empty subject DN not allowed in v1 certificate")));
	// throw
	throw cVar10;
	// 893    .line 667
label_cond_7b:
	cVar11 = std::make_shared<sun::security::x509::CertificateX509Key>(in);
	this->pubKey = cVar11;
	if ( !(in->available()) )  
		goto label_cond_99;
	if ( this->version->compare(cVar1) )     
		goto label_cond_9a;
	cVar12 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("no more data allowed for version 1 certificate")));
	// throw
	throw cVar12;
	// 928    .line 676
label_cond_99:
	return;
	// 932    .line 680
label_cond_9a:
	tmp = in->getDerValue();
	if ( !(tmp->isContextSpecific(0x1)) )  
		goto label_cond_b7;
	cVar13 = std::make_shared<sun::security::x509::UniqueIdentity>(tmp);
	this->issuerUniqueId = cVar13;
	if ( in->available() )     
		goto label_cond_b3;
	return;
	// 964    .line 685
label_cond_b3:
	tmp = in->getDerValue();
label_cond_b7:
	if ( !(tmp->isContextSpecific(cVar0)) )  
		goto label_cond_cf;
	cVar14 = std::make_shared<sun::security::x509::UniqueIdentity>(tmp);
	this->subjectUniqueId = cVar14;
	if ( in->available() )     
		goto label_cond_cb;
	return;
	// 995    .line 693
label_cond_cb:
	tmp = in->getDerValue();
label_cond_cf:
	if ( !(this->version->compare(cVar0)) )  
		goto label_cond_e0;
	cVar15 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Extensions not allowed in v2 certificate")));
	// throw
	throw cVar15;
	// 1022    .line 701
label_cond_e0:
	if ( !(tmp->isConstructed()) )  
		goto label_cond_f6;
	if ( !(tmp->isContextSpecific(0x3)) )  
		goto label_cond_f6;
	cVar16 = std::make_shared<sun::security::x509::CertificateExtensions>(tmp->data);
	this->extensions = cVar16;
label_cond_f6:
	this->verifyCert(this->subject, this->extensions);
	return;

}
// .method private setAlgorithmId(Ljava/lang/Object;)V
void sun::security::x509::X509CertInfo::setAlgorithmId(std::shared_ptr<java::lang::Object> val)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	
	//    .param p1, "val"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1063        value = {
	// 1064            Ljava/security/cert/CertificateException;
	// 1065        }
	// 1066    .end annotation
	if ( val->instanceOf("sun::security::x509::CertificateAlgorithmId") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AlgorithmId class type invalid.")));
	// throw
	throw cVar0;
	// 1085    .line 849
label_cond_d:
	val->checkCast("sun::security::x509::CertificateAlgorithmId");
	//    .end local p1    # "val":Ljava/lang/Object;
	this->algId = val;
	return;

}
// .method private setExtensions(Ljava/lang/Object;)V
void sun::security::x509::X509CertInfo::setExtensions(std::shared_ptr<java::lang::Object> val)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	std::shared_ptr<java::security::cert::CertificateException> cVar1;
	
	//    .param p1, "val"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1100        value = {
	// 1101            Ljava/security/cert/CertificateException;
	// 1102        }
	// 1103    .end annotation
	if ( this->version->compare(0x2) >= 0 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid version")));
	// throw
	throw cVar0;
	// 1126    .line 952
label_cond_12:
	if ( val->instanceOf("sun::security::x509::CertificateExtensions") )     
		goto label_cond_1f;
	cVar1 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Extensions class type invalid.")));
	// throw
	throw cVar1;
	// 1143    .line 956
label_cond_1f:
	val->checkCast("sun::security::x509::CertificateExtensions");
	//    .end local p1    # "val":Ljava/lang/Object;
	this->extensions = val;
	return;

}
// .method private setIssuer(Ljava/lang/Object;)V
void sun::security::x509::X509CertInfo::setIssuer(std::shared_ptr<java::lang::Object> val)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	
	//    .param p1, "val"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1158        value = {
	// 1159            Ljava/security/cert/CertificateException;
	// 1160        }
	// 1161    .end annotation
	if ( val->instanceOf("sun::security::x509::X500Name") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Issuer class type invalid.")));
	// throw
	throw cVar0;
	// 1180    .line 863
label_cond_d:
	val->checkCast("sun::security::x509::X500Name");
	//    .end local p1    # "val":Ljava/lang/Object;
	this->issuer = val;
	return;

}
// .method private setIssuerUniqueId(Ljava/lang/Object;)V
void sun::security::x509::X509CertInfo::setIssuerUniqueId(std::shared_ptr<java::lang::Object> val)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	std::shared_ptr<java::security::cert::CertificateException> cVar1;
	
	//    .param p1, "val"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1195        value = {
	// 1196            Ljava/security/cert/CertificateException;
	// 1197        }
	// 1198    .end annotation
	if ( this->version->compare(0x1) >= 0 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid version")));
	// throw
	throw cVar0;
	// 1221    .line 918
label_cond_12:
	if ( val->instanceOf("sun::security::x509::UniqueIdentity") )     
		goto label_cond_1f;
	cVar1 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("IssuerUniqueId class type invalid.")));
	// throw
	throw cVar1;
	// 1238    .line 922
label_cond_1f:
	val->checkCast("sun::security::x509::UniqueIdentity");
	//    .end local p1    # "val":Ljava/lang/Object;
	this->issuerUniqueId = val;
	return;

}
// .method private setKey(Ljava/lang/Object;)V
void sun::security::x509::X509CertInfo::setKey(std::shared_ptr<java::lang::Object> val)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	
	//    .param p1, "val"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1253        value = {
	// 1254            Ljava/security/cert/CertificateException;
	// 1255        }
	// 1256    .end annotation
	if ( val->instanceOf("sun::security::x509::CertificateX509Key") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Key class type invalid.")));
	// throw
	throw cVar0;
	// 1275    .line 905
label_cond_d:
	val->checkCast("sun::security::x509::CertificateX509Key");
	//    .end local p1    # "val":Ljava/lang/Object;
	this->pubKey = val;
	return;

}
// .method private setSerialNumber(Ljava/lang/Object;)V
void sun::security::x509::X509CertInfo::setSerialNumber(std::shared_ptr<java::lang::Object> val)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	
	//    .param p1, "val"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1290        value = {
	// 1291            Ljava/security/cert/CertificateException;
	// 1292        }
	// 1293    .end annotation
	if ( val->instanceOf("sun::security::x509::CertificateSerialNumber") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SerialNumber class type invalid.")));
	// throw
	throw cVar0;
	// 1310    .line 835
label_cond_d:
	val->checkCast("sun::security::x509::CertificateSerialNumber");
	//    .end local p1    # "val":Ljava/lang/Object;
	this->serialNum = val;
	return;

}
// .method private setSubject(Ljava/lang/Object;)V
void sun::security::x509::X509CertInfo::setSubject(std::shared_ptr<java::lang::Object> val)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	
	//    .param p1, "val"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1325        value = {
	// 1326            Ljava/security/cert/CertificateException;
	// 1327        }
	// 1328    .end annotation
	if ( val->instanceOf("sun::security::x509::X500Name") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Subject class type invalid.")));
	// throw
	throw cVar0;
	// 1347    .line 891
label_cond_d:
	val->checkCast("sun::security::x509::X500Name");
	//    .end local p1    # "val":Ljava/lang/Object;
	this->subject = val;
	return;

}
// .method private setSubjectUniqueId(Ljava/lang/Object;)V
void sun::security::x509::X509CertInfo::setSubjectUniqueId(std::shared_ptr<java::lang::Object> val)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	std::shared_ptr<java::security::cert::CertificateException> cVar1;
	
	//    .param p1, "val"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1362        value = {
	// 1363            Ljava/security/cert/CertificateException;
	// 1364        }
	// 1365    .end annotation
	if ( this->version->compare(0x1) >= 0 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid version")));
	// throw
	throw cVar0;
	// 1388    .line 935
label_cond_12:
	if ( val->instanceOf("sun::security::x509::UniqueIdentity") )     
		goto label_cond_1f;
	cVar1 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SubjectUniqueId class type invalid.")));
	// throw
	throw cVar1;
	// 1405    .line 939
label_cond_1f:
	val->checkCast("sun::security::x509::UniqueIdentity");
	//    .end local p1    # "val":Ljava/lang/Object;
	this->subjectUniqueId = val;
	return;

}
// .method private setValidity(Ljava/lang/Object;)V
void sun::security::x509::X509CertInfo::setValidity(std::shared_ptr<java::lang::Object> val)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	
	//    .param p1, "val"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1420        value = {
	// 1421            Ljava/security/cert/CertificateException;
	// 1422        }
	// 1423    .end annotation
	if ( val->instanceOf("sun::security::x509::CertificateValidity") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertificateValidity class type invalid.")));
	// throw
	throw cVar0;
	// 1442    .line 877
label_cond_d:
	val->checkCast("sun::security::x509::CertificateValidity");
	//    .end local p1    # "val":Ljava/lang/Object;
	this->interval = val;
	return;

}
// .method private setVersion(Ljava/lang/Object;)V
void sun::security::x509::X509CertInfo::setVersion(std::shared_ptr<java::lang::Object> val)
{
	
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	
	//    .param p1, "val"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1457        value = {
	// 1458            Ljava/security/cert/CertificateException;
	// 1459        }
	// 1460    .end annotation
	if ( val->instanceOf("sun::security::x509::CertificateVersion") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Version class type invalid.")));
	// throw
	throw cVar0;
	// 1477    .line 822
label_cond_d:
	val->checkCast("sun::security::x509::CertificateVersion");
	//    .end local p1    # "val":Ljava/lang/Object;
	this->version = val;
	return;

}
// .method private verifyCert(Lsun/security/x509/X500Name;Lsun/security/x509/CertificateExtensions;)V
void sun::security::x509::X509CertInfo::verifyCert(std::shared_ptr<sun::security::x509::X500Name> subject,std::shared_ptr<sun::security::x509::CertificateExtensions> extensions)
{
	
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar0;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar3;
	std::shared_ptr<sun::security::x509::SubjectAlternativeNameExtension> cVar1;
	std::shared_ptr<sun::security::x509::SubjectAlternativeNameExtension> subjectAltNameExt;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::x509::GeneralNames> names;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar2;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar4;
	
	//    .param p1, "subject"    # Lsun/security/x509/X500Name;
	//    .param p2, "extensions"    # Lsun/security/x509/CertificateExtensions;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1493        value = {
	// 1494            Ljava/security/cert/CertificateParsingException;,
	// 1495            Ljava/io/IOException;
	// 1496        }
	// 1497    .end annotation
	if ( !(subject->isEmpty()) )  
		goto label_cond_50;
	if ( extensions )     
		goto label_cond_11;
	cVar0 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509 Certificate is incomplete: subject field is empty, and certificate has no extensions")));
	// throw
	throw cVar0;
	// 1519    .line 724
label_cond_11:
	0x0;
	//    .local v4, "subjectAltNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
	0x0;
	//    .local v2, "extValue":Lsun/security/x509/SubjectAlternativeNameExtension;
	0x0;
	//    .local v3, "names":Lsun/security/x509/GeneralNames;
	try {
	//label_try_start_14:
	cVar1 = extensions->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("SubjectAlternativeName")));
	cVar1->checkCast("sun::security::x509::SubjectAlternativeNameExtension");
	subjectAltNameExt = cVar1;
	//    .local v4, "subjectAltNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
	//label_try_end_25:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/io/IOException; {:try_start_14 .. :try_end_25} :catch_37
	names = subjectAltNameExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject_name")));
	//    .local v3, "names":Lsun/security/x509/GeneralNames;
	if ( !(names) )  
		goto label_cond_2e;
	if ( !(names->isEmpty()) )  
		goto label_cond_41;
label_cond_2e:
	cVar2 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509 Certificate is incomplete: subject field is empty, and SubjectAlternativeName extension is empty")));
	// throw
	throw cVar2;
	// 1578    .line 732
	// 1579    .end local v4    # "subjectAltNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
	// 1580    .local v3, "names":Lsun/security/x509/GeneralNames;
label_catch_37:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/io/IOException;
	cVar3 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509 Certificate is incomplete: subject field is empty, and SubjectAlternativeName extension is absent")));
	// throw
	throw cVar3;
	// 1594    .line 743
	// 1595    .end local v1    # "e":Ljava/io/IOException;
	// 1596    .local v3, "names":Lsun/security/x509/GeneralNames;
	// 1597    .restart local v4    # "subjectAltNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
label_cond_41:
	if ( subjectAltNameExt->isCritical() )     
		goto label_cond_50;
	cVar4 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509 Certificate is incomplete: SubjectAlternativeName extension MUST be marked critical when subject field is empty")));
	// throw
	throw cVar4;
	// 1614    .line 749
	// 1615    .end local v2    # "extValue":Lsun/security/x509/SubjectAlternativeNameExtension;
	// 1616    .end local v3    # "names":Lsun/security/x509/GeneralNames;
	// 1617    .end local v4    # "subjectAltNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
label_cond_50:
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::X509CertInfo::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<sun::security::x509::X509AttributeName> attrName;
	int attr;
	std::shared_ptr<java::security::cert::CertificateException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::String> suffix;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1628        value = {
	// 1629            Ljava/security/cert/CertificateException;,
	// 1630            Ljava/io/IOException;
	// 1631        }
	// 1632    .end annotation
	cVar0 = 0x0;
	attrName = std::make_shared<sun::security::x509::X509AttributeName>(name);
	//    .local v1, "attrName":Lsun/security/x509/X509AttributeName;
	attr = this->attributeMap(attrName->getPrefix());
	//    .local v0, "attr":I
	if ( attr )     
		goto label_cond_2a;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::security::cert::CertificateException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized: ")))->append(name)->toString());
	// throw
	throw cVar1;
	// 1681    .line 463
label_cond_2a:
	this->rawCertInfo = cVar0;
	suffix = attrName->getSuffix();
	//    .local v2, "suffix":Ljava/lang/String;
	// switch
	{
	auto item = ( attr );
	if (item == 1) goto label_pswitch_34;
	if (item == 2) goto label_pswitch_3f;
	if (item == 3) goto label_pswitch_4a;
	if (item == 4) goto label_pswitch_55;
	if (item == 5) goto label_pswitch_58;
	if (item == 6) goto label_pswitch_63;
	if (item == 7) goto label_pswitch_66;
	if (item == 8) goto label_pswitch_71;
	if (item == 9) goto label_pswitch_74;
	if (item == 10) goto label_pswitch_77;
	}
label_cond_33:
label_goto_33:
	return;
	// 1699    .line 468
label_pswitch_34:
	if ( suffix )     
		goto label_cond_39;
	this->version = cVar0;
	goto label_goto_33;
	// 1708    .line 471
label_cond_39:
	this->version->delete(suffix);
	goto label_goto_33;
	// 1716    .line 475
label_pswitch_3f:
	if ( suffix )     
		goto label_cond_44;
	this->serialNum = cVar0;
	goto label_goto_33;
	// 1725    .line 478
label_cond_44:
	this->serialNum->delete(suffix);
	goto label_goto_33;
	// 1733    .line 482
label_pswitch_4a:
	if ( suffix )     
		goto label_cond_4f;
	this->algId = cVar0;
	goto label_goto_33;
	// 1742    .line 485
label_cond_4f:
	this->algId->delete(suffix);
	goto label_goto_33;
	// 1750    .line 489
label_pswitch_55:
	this->issuer = cVar0;
	goto label_goto_33;
	// 1756    .line 492
label_pswitch_58:
	if ( suffix )     
		goto label_cond_5d;
	this->interval = cVar0;
	goto label_goto_33;
	// 1765    .line 495
label_cond_5d:
	this->interval->delete(suffix);
	goto label_goto_33;
	// 1773    .line 499
label_pswitch_63:
	this->subject = cVar0;
	goto label_goto_33;
	// 1779    .line 502
label_pswitch_66:
	if ( suffix )     
		goto label_cond_6b;
	this->pubKey = cVar0;
	goto label_goto_33;
	// 1788    .line 505
label_cond_6b:
	this->pubKey->delete(suffix);
	goto label_goto_33;
	// 1796    .line 509
label_pswitch_71:
	this->issuerUniqueId = cVar0;
	goto label_goto_33;
	// 1802    .line 512
label_pswitch_74:
	this->subjectUniqueId = cVar0;
	goto label_goto_33;
	// 1808    .line 515
label_pswitch_77:
	if ( suffix )     
		goto label_cond_7c;
	this->extensions = cVar0;
	goto label_goto_33;
	// 1817    .line 518
label_cond_7c:
	if ( !(this->extensions) )  
		goto label_cond_33;
	this->extensions->delete(suffix);
	goto label_goto_33;
	// 1830    .line 466
	// 1831    :pswitch_data_86
	// 1832    .packed-switch 0x1
	// 1833        :pswitch_34
	// 1834        :pswitch_3f
	// 1835        :pswitch_4a
	// 1836        :pswitch_55
	// 1837        :pswitch_58
	// 1838        :pswitch_63
	// 1839        :pswitch_66
	// 1840        :pswitch_71
	// 1841        :pswitch_74
	// 1842        :pswitch_77
	// 1843    .end packed-switch

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::X509CertInfo::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1850        value = {
	// 1851            Ljava/security/cert/CertificateException;,
	// 1852            Ljava/io/IOException;
	// 1853        }
	// 1854    .end annotation
	if ( this->rawCertInfo )     
		goto label_cond_12;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	this->emit(tmp);
	this->rawCertInfo = tmp->toByteArray();
	//    .end local v0    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_12:
	cVar0 = this->rawCertInfo->clone();
	cVar0->checkCast("unsigned char[]");
	out->write(cVar0);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::X509CertInfo::equals(std::shared_ptr<java::lang::Object> other)
{
	
	//    .param p1, "other"    # Ljava/lang/Object;
	if ( !(other->instanceOf("sun::security::x509::X509CertInfo")) )  
		goto label_cond_b;
	other->checkCast("sun::security::x509::X509CertInfo");
	//    .end local p1    # "other":Ljava/lang/Object;
	return this->equals(other);
	// 1915    .line 249
	// 1916    .restart local p1    # "other":Ljava/lang/Object;
label_cond_b:
	return 0x0;

}
// .method public equals(Lsun/security/x509/X509CertInfo;)Z
bool sun::security::x509::X509CertInfo::equals(std::shared_ptr<sun::security::x509::X509CertInfo> other)
{
	
	bool cVar0;
	bool cVar1;
	int i;
	
	//    .param p1, "other"    # Lsun/security/x509/X509CertInfo;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_5;
	return cVar0;
	// 1938    .line 263
label_cond_5:
	if ( !(this->rawCertInfo) )  
		goto label_cond_d;
	if ( other->rawCertInfo )     
		goto label_cond_e;
label_cond_d:
	return cVar1;
	// 1952    .line 265
label_cond_e:
	if ( this->rawCertInfo->size() == other->rawCertInfo->size() )
		goto label_cond_17;
	return cVar1;
	// 1967    .line 268
label_cond_17:
	i = 0x0;
	//    .local v0, "i":I
label_goto_18:
	if ( i >= this->rawCertInfo->size() )
		goto label_cond_2b;
	if ( this->rawCertInfo[i] == other->rawCertInfo[i] )
		goto label_cond_28;
	return cVar1;
	// 1993    .line 268
label_cond_28:
	i = ( i + 0x1);
	goto label_goto_18;
	// 1999    .line 273
label_cond_2b:
	return cVar0;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::X509CertInfo::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<sun::security::x509::X509AttributeName> attrName;
	int attr;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::String> suffix;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2008        value = {
	// 2009            Ljava/security/cert/CertificateException;,
	// 2010            Ljava/io/IOException;
	// 2011        }
	// 2012    .end annotation
	cVar0 = 0x0;
	attrName = std::make_shared<sun::security::x509::X509AttributeName>(name);
	//    .local v1, "attrName":Lsun/security/x509/X509AttributeName;
	attr = this->attributeMap(attrName->getPrefix());
	//    .local v0, "attr":I
	if ( attr )     
		goto label_cond_2b;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::security::cert::CertificateParsingException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized: ")))->append(name)->toString());
	// throw
	throw cVar1;
	// 2065    .line 542
label_cond_2b:
	suffix = attrName->getSuffix();
	//    .local v2, "suffix":Ljava/lang/String;
	// switch
	{
	auto item = ( attr );
	if (item == 1) goto label_pswitch_7d;
	if (item == 2) goto label_pswitch_89;
	if (item == 3) goto label_pswitch_65;
	if (item == 4) goto label_pswitch_4e;
	if (item == 5) goto label_pswitch_71;
	if (item == 6) goto label_pswitch_44;
	if (item == 7) goto label_pswitch_59;
	if (item == 8) goto label_pswitch_95;
	if (item == 9) goto label_pswitch_98;
	if (item == 10) goto label_pswitch_33;
	}
	return cVar0;
	// 2078    .line 546
label_pswitch_33:
	if ( suffix )     
		goto label_cond_38;
	return this->extensions;
	// 2087    .line 549
label_cond_38:
	if ( this->extensions )     
		goto label_cond_3d;
	return cVar0;
	// 2096    .line 552
label_cond_3d:
	return this->extensions->get(suffix);
	// 2106    .line 556
label_pswitch_44:
	if ( suffix )     
		goto label_cond_49;
	return this->subject;
	// 2115    .line 559
label_cond_49:
	return this->getX500Name(suffix, 0x0);
	// 2123    .line 562
label_pswitch_4e:
	if ( suffix )     
		goto label_cond_53;
	return this->issuer;
	// 2132    .line 565
label_cond_53:
	return this->getX500Name(suffix, 0x1);
	// 2142    .line 568
label_pswitch_59:
	if ( suffix )     
		goto label_cond_5e;
	return this->pubKey;
	// 2151    .line 571
label_cond_5e:
	return this->pubKey->get(suffix);
	// 2161    .line 574
label_pswitch_65:
	if ( suffix )     
		goto label_cond_6a;
	return this->algId;
	// 2170    .line 577
label_cond_6a:
	return this->algId->get(suffix);
	// 2180    .line 580
label_pswitch_71:
	if ( suffix )     
		goto label_cond_76;
	return this->interval;
	// 2189    .line 583
label_cond_76:
	return this->interval->get(suffix);
	// 2199    .line 586
label_pswitch_7d:
	if ( suffix )     
		goto label_cond_82;
	return this->version;
	// 2208    .line 589
label_cond_82:
	return this->version->get(suffix);
	// 2218    .line 592
label_pswitch_89:
	if ( suffix )     
		goto label_cond_8e;
	return this->serialNum;
	// 2227    .line 595
label_cond_8e:
	return this->serialNum->get(suffix);
	// 2237    .line 598
label_pswitch_95:
	return this->issuerUniqueId;
	// 2243    .line 600
label_pswitch_98:
	return this->subjectUniqueId;
	// 2249    .line 544
	// 2250    nop
	// 2252    :pswitch_data_9c
	// 2253    .packed-switch 0x1
	// 2254        :pswitch_7d
	// 2255        :pswitch_89
	// 2256        :pswitch_65
	// 2257        :pswitch_4e
	// 2258        :pswitch_71
	// 2259        :pswitch_44
	// 2260        :pswitch_59
	// 2261        :pswitch_95
	// 2262        :pswitch_98
	// 2263        :pswitch_33
	// 2264    .end packed-switch

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::X509CertInfo::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2270        value = {
	// 2271            "()",
	// 2272            "Ljava/util/Enumeration",
	// 2273            "<",
	// 2274            "Ljava/lang/String;",
	// 2275            ">;"
	// 2276        }
	// 2277    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("version")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("serialNumber")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("algorithmID")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("validity")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("key")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuerID")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("subjectID")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("extensions")));
	return elements->elements();

}
// .method public getEncodedInfo()[B
unsigned char sun::security::x509::X509CertInfo::getEncodedInfo()
{
	
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar2;
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<unsigned char[]> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2347        value = {
	// 2348            Ljava/security/cert/CertificateEncodingException;
	// 2349        }
	// 2350    .end annotation
	try {
	//label_try_start_0:
	if ( this->rawCertInfo )     
		goto label_cond_12;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "tmp":Lsun/security/util/DerOutputStream;
	this->emit(tmp);
	this->rawCertInfo = tmp->toByteArray();
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_12:
	cVar0 = this->rawCertInfo->clone();
	cVar0->checkCast("unsigned char[]");
	//label_try_end_1a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_26;
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1b;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_1a} :catch_26
	//    .catch Ljava/security/cert/CertificateException; {:try_start_0 .. :try_end_1a} :catch_1b
	return cVar0;
	// 2391    .line 232
label_catch_1b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/cert/CertificateException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::security::cert::CertificateEncodingException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar1;
	// 2407    .line 230
	// 2408    .end local v1    # "e":Ljava/security/cert/CertificateException;
label_catch_26:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar2 = std::make_shared<java::security::cert::CertificateEncodingException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar2;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509CertInfo::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("info"));

}
// .method public hashCode()I
int sun::security::x509::X509CertInfo::hashCode()
{
	
	int retval;
	int i;
	
	retval = 0x0;
	//    .local v1, "retval":I
	i = 0x1;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= this->rawCertInfo->size() )
		goto label_cond_10;
	retval = (retval +  (this->rawCertInfo[i] *  i));
	i = ( i + 0x1);
	goto label_goto_2;
	// 2468    .line 286
label_cond_10:
	return retval;

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::X509CertInfo::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> val)
{
	
	std::shared_ptr<sun::security::x509::X509AttributeName> attrName;
	int attr;
	std::shared_ptr<java::security::cert::CertificateException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> suffix;
	std::shared_ptr<sun::security::x509::CertificateExtensions> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "val"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2478        value = {
	// 2479            Ljava/security/cert/CertificateException;,
	// 2480            Ljava/io/IOException;
	// 2481        }
	// 2482    .end annotation
	attrName = std::make_shared<sun::security::x509::X509AttributeName>(name);
	//    .local v1, "attrName":Lsun/security/x509/X509AttributeName;
	attr = this->attributeMap(attrName->getPrefix());
	//    .local v0, "attr":I
	if ( attr )     
		goto label_cond_2a;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::security::cert::CertificateException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized: ")))->append(name)->toString());
	// throw
	throw cVar0;
	// 2531    .line 374
label_cond_2a:
	this->rawCertInfo = 0x0;
	suffix = attrName->getSuffix();
	//    .local v2, "suffix":Ljava/lang/String;
	// switch
	{
	auto item = ( attr );
	if (item == 1) goto label_pswitch_34;
	if (item == 2) goto label_pswitch_40;
	if (item == 3) goto label_pswitch_4c;
	if (item == 4) goto label_pswitch_58;
	if (item == 5) goto label_pswitch_5c;
	if (item == 6) goto label_pswitch_68;
	if (item == 7) goto label_pswitch_6c;
	if (item == 8) goto label_pswitch_78;
	if (item == 9) goto label_pswitch_7c;
	if (item == 10) goto label_pswitch_80;
	}
label_goto_33:
	return;
	// 2548    .line 379
label_pswitch_34:
	if ( suffix )     
		goto label_cond_3a;
	this->setVersion(val);
	goto label_goto_33;
	// 2557    .line 382
label_cond_3a:
	this->version->set(suffix, val);
	goto label_goto_33;
	// 2565    .line 387
label_pswitch_40:
	if ( suffix )     
		goto label_cond_46;
	this->setSerialNumber(val);
	goto label_goto_33;
	// 2574    .line 390
label_cond_46:
	this->serialNum->set(suffix, val);
	goto label_goto_33;
	// 2582    .line 395
label_pswitch_4c:
	if ( suffix )     
		goto label_cond_52;
	this->setAlgorithmId(val);
	goto label_goto_33;
	// 2591    .line 398
label_cond_52:
	this->algId->set(suffix, val);
	goto label_goto_33;
	// 2599    .line 403
label_pswitch_58:
	this->setIssuer(val);
	goto label_goto_33;
	// 2605    .line 407
label_pswitch_5c:
	if ( suffix )     
		goto label_cond_62;
	this->setValidity(val);
	goto label_goto_33;
	// 2614    .line 410
label_cond_62:
	this->interval->set(suffix, val);
	goto label_goto_33;
	// 2622    .line 415
label_pswitch_68:
	this->setSubject(val);
	goto label_goto_33;
	// 2628    .line 419
label_pswitch_6c:
	if ( suffix )     
		goto label_cond_72;
	this->setKey(val);
	goto label_goto_33;
	// 2637    .line 422
label_cond_72:
	this->pubKey->set(suffix, val);
	goto label_goto_33;
	// 2645    .line 427
label_pswitch_78:
	this->setIssuerUniqueId(val);
	goto label_goto_33;
	// 2651    .line 431
label_pswitch_7c:
	this->setSubjectUniqueId(val);
	goto label_goto_33;
	// 2657    .line 435
label_pswitch_80:
	if ( suffix )     
		goto label_cond_86;
	this->setExtensions(val);
	goto label_goto_33;
	// 2666    .line 438
label_cond_86:
	if ( this->extensions )     
		goto label_cond_91;
	cVar2 = std::make_shared<sun::security::x509::CertificateExtensions>();
	this->extensions = cVar2;
label_cond_91:
	this->extensions->set(suffix, val);
	goto label_goto_33;
	// 2687    .line 377
	// 2688    nop
	// 2690    :pswitch_data_98
	// 2691    .packed-switch 0x1
	// 2692        :pswitch_34
	// 2693        :pswitch_40
	// 2694        :pswitch_4c
	// 2695        :pswitch_58
	// 2696        :pswitch_5c
	// 2697        :pswitch_68
	// 2698        :pswitch_6c
	// 2699        :pswitch_78
	// 2700        :pswitch_7c
	// 2701        :pswitch_80
	// 2702    .end packed-switch

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509CertInfo::toString()
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<std::vector<sun::security::x509::Extension>> exts;
	int i;
	std::shared_ptr<sun::security::x509::Extension> ext;
	std::shared_ptr<unsigned char[]> extValue;
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	std::shared_ptr<sun::misc::HexDumpEncoder> enc;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::Map> invalid;
	std::shared_ptr<java::util::Iterator> ext_S_iterator;
	
	if ( !(this->subject) )  
		goto label_cond_8;
	if ( this->pubKey )     
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509 cert is incomplete")));
	// throw
	throw cVar0;
	// 2728    .line 294
label_cond_11:
	if ( !(this->interval) )  
		goto label_cond_8;
	if ( !(this->issuer) )  
		goto label_cond_8;
	if ( !(this->algId) )  
		goto label_cond_8;
	if ( !(this->serialNum) )  
		goto label_cond_8;
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v11, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->append(this->version->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Subject: ")))->append(this->subject->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Signature Algorithm: ")))->append(this->algId->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Key:  ")))->append(this->pubKey->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->append(this->interval->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Issuer: ")))->append(this->issuer->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")))->append(this->serialNum->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	if ( !(this->issuerUniqueId) )  
		goto label_cond_e8;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Issuer Id:\n")))->append(this->issuerUniqueId->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_e8:
	if ( !(this->subjectUniqueId) )  
		goto label_cond_103;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Subject Id:\n")))->append(this->subjectUniqueId->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_103:
	if ( !(this->extensions) )  
		goto label_cond_1d1;
	//    .local v0, "allExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	exts = this->extensions->getAllExtensions()->toArray(std::make_shared<std::vector<std::vector<sun::security::x509::Extension>>>(0x0));
	exts->checkCast("std::vector<sun::security::x509::Extension>");
	//    .local v6, "exts":[Lsun/security/x509/Extension;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nCertificate Extensions: ")))->append(exts->size());
	i = 0x0;
	//    .local v7, "i":I
label_goto_122:
	if ( i >= exts->size() )
		goto label_cond_18a;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n[")))->append(( i + 0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]: ")));
	ext = exts[i];
	//    .local v3, "ext":Lsun/security/x509/Extension;
	try {
	//label_try_start_13a:
	if ( sun::security::x509::OIDMap::getClass(ext->getExtensionId()) )     
		goto label_cond_17a;
	sb->append(ext->toString());
	extValue = ext->getExtensionValue();
	//    .local v5, "extValue":[B
	if ( !(extValue) )  
		goto label_cond_177;
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v10, "out":Lsun/security/util/DerOutputStream;
	out->putOctetString(extValue);
	enc = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v2, "enc":Lsun/misc/HexDumpEncoder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Extension unknown: DER encoded OCTET string =\n")))->append(enc->encodeBuffer(out->toByteArray()))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	//    .end local v2    # "enc":Lsun/misc/HexDumpEncoder;
	//    .end local v5    # "extValue":[B
	//    .end local v10    # "out":Lsun/security/util/DerOutputStream;
label_cond_177:
label_goto_177:
	i = ( i + 0x1);
	goto label_goto_122;
	// 3106    .line 337
label_cond_17a:
	sb->append(ext->toString());
	//label_try_end_181:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_182;
	}
	//    .catch Ljava/lang/Exception; {:try_start_13a .. :try_end_181} :catch_182
	goto label_goto_177;
	// 3118    .line 338
label_catch_182:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", Error parsing this extension")));
	goto label_goto_177;
	// 3130    .line 342
	// 3131    .end local v1    # "e":Ljava/lang/Exception;
	// 3132    .end local v3    # "ext":Lsun/security/x509/Extension;
label_cond_18a:
	invalid = this->extensions->getUnparseableExtensions();
	//    .local v9, "invalid":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Lsun/security/x509/Extension;>;"
	if ( invalid->isEmpty() )     
		goto label_cond_1d1;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nUnparseable certificate extensions: ")))->append(invalid->size());
	i = 0x1;
	ext_S_iterator = invalid->values()->iterator();
	//    .local v4, "ext$iterator":Ljava/util/Iterator;
label_goto_1ad:
	if ( !(ext_S_iterator->hasNext()) )  
		goto label_cond_1d1;
	ext = ext_S_iterator->next();
	ext->checkCast("sun::security::x509::Extension");
	//    .restart local v3    # "ext":Lsun/security/x509/Extension;
	i = ( i + 0x1);
	//    .end local v7    # "i":I
	//    .local v8, "i":I
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n[")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]: ")));
	sb->append(ext);
	i = i;
	//    .end local v8    # "i":I
	//    .restart local v7    # "i":I
	goto label_goto_1ad;
	// 3216    .line 352
	// 3217    .end local v0    # "allExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	// 3218    .end local v3    # "ext":Lsun/security/x509/Extension;
	// 3219    .end local v4    # "ext$iterator":Ljava/util/Iterator;
	// 3220    .end local v6    # "exts":[Lsun/security/x509/Extension;
	// 3221    .end local v7    # "i":I
	// 3222    .end local v9    # "invalid":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Lsun/security/x509/Extension;>;"
label_cond_1d1:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n]")));
	return sb->toString();

}


