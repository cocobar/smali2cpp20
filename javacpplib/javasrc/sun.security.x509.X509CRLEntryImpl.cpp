// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CRLEntryImpl.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Boolean.h"
#include "java.lang.Class.h"
#include "java.lang.Exception.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.math.BigInteger.h"
#include "java.security.cert.CRLException.h"
#include "java.security.cert.CRLReason.h"
#include "java.security.cert.Extension.h"
#include "java.security.cert.X509CRLEntry.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"
#include "java.util.TreeSet.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CRLExtensions.h"
#include "sun.security.x509.CRLReasonCodeExtension.h"
#include "sun.security.x509.CertificateIssuerExtension.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.OIDMap.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.SerialNumber.h"
#include "sun.security.x509.X509CRLEntryImpl.h"

static sun::security::x509::X509CRLEntryImpl::YR_2050 = 0x24bd0146400L;
static sun::security::x509::X509CRLEntryImpl::isExplicit;
// .method public constructor <init>(Ljava/math/BigInteger;Ljava/util/Date;)V
sun::security::x509::X509CRLEntryImpl::X509CRLEntryImpl(std::shared_ptr<java::math::BigInteger> num,std::shared_ptr<java::util::Date> date)
{
	
	std::shared_ptr<sun::security::x509::SerialNumber> cVar0;
	std::shared_ptr<sun::security::x509::SerialNumber> cVar1;
	
	//    .param p1, "num"    # Ljava/math/BigInteger;
	//    .param p2, "date"    # Ljava/util/Date;
	cVar0 = 0x0;
	// 049    invoke-direct {p0}, Ljava/security/cert/X509CRLEntry;-><init>()V
	this->serialNumber = cVar0;
	this->revocationDate = cVar0;
	this->extensions = cVar0;
	this->revokedCert = cVar0;
	cVar1 = std::make_shared<sun::security::x509::SerialNumber>(num);
	this->serialNumber = cVar1;
	this->revocationDate = date;
	return;

}
// .method public constructor <init>(Ljava/math/BigInteger;Ljava/util/Date;Lsun/security/x509/CRLExtensions;)V
sun::security::x509::X509CRLEntryImpl::X509CRLEntryImpl(std::shared_ptr<java::math::BigInteger> num,std::shared_ptr<java::util::Date> date,std::shared_ptr<sun::security::x509::CRLExtensions> crlEntryExts)
{
	
	std::shared_ptr<sun::security::x509::SerialNumber> cVar0;
	std::shared_ptr<sun::security::x509::SerialNumber> cVar1;
	
	//    .param p1, "num"    # Ljava/math/BigInteger;
	//    .param p2, "date"    # Ljava/util/Date;
	//    .param p3, "crlEntryExts"    # Lsun/security/x509/CRLExtensions;
	cVar0 = 0x0;
	// 087    invoke-direct {p0}, Ljava/security/cert/X509CRLEntry;-><init>()V
	this->serialNumber = cVar0;
	this->revocationDate = cVar0;
	this->extensions = cVar0;
	this->revokedCert = cVar0;
	cVar1 = std::make_shared<sun::security::x509::SerialNumber>(num);
	this->serialNumber = cVar1;
	this->revocationDate = date;
	this->extensions = crlEntryExts;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::X509CRLEntryImpl::X509CRLEntryImpl(std::shared_ptr<sun::security::util::DerValue> derValue)
{
	
	std::shared_ptr<sun::security::x509::SerialNumber> cVar0;
	std::shared_ptr<java::security::cert::CRLException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "derValue"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 122        value = {
	// 123            Ljava/security/cert/CRLException;
	// 124        }
	// 125    .end annotation
	cVar0 = 0x0;
	// 131    invoke-direct {p0}, Ljava/security/cert/X509CRLEntry;-><init>()V
	this->serialNumber = cVar0;
	this->revocationDate = cVar0;
	this->extensions = cVar0;
	this->revokedCert = cVar0;
	try {
	//label_try_start_c:
	this->parse(derValue);
	//label_try_end_f:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/io/IOException; {:try_start_c .. :try_end_f} :catch_10
	return;
	// 154    .line 134
label_catch_10:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	this->revokedCert = cVar0;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::security::cert::CRLException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parsing error: ")))->append(getCatchExcetionFromList->toString())->toString());
	// throw
	throw cVar1;

}
// .method public constructor <init>([B)V
sun::security::x509::X509CRLEntryImpl::X509CRLEntryImpl(std::shared_ptr<unsigned char[]> revokedCert)
{
	
	std::shared_ptr<sun::security::x509::SerialNumber> cVar0;
	std::shared_ptr<java::security::cert::CRLException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<sun::security::util::DerValue> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "revokedCert"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 196        value = {
	// 197            Ljava/security/cert/CRLException;
	// 198        }
	// 199    .end annotation
	cVar0 = 0x0;
	// 205    invoke-direct {p0}, Ljava/security/cert/X509CRLEntry;-><init>()V
	this->serialNumber = cVar0;
	this->revocationDate = cVar0;
	this->extensions = cVar0;
	this->revokedCert = cVar0;
	try {
	//label_try_start_c:
	cVar1 = std::make_shared<sun::security::util::DerValue>(revokedCert);
	this->parse(cVar1);
	//label_try_end_14:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_15;
	}
	//    .catch Ljava/io/IOException; {:try_start_c .. :try_end_14} :catch_15
	return;
	// 232    .line 119
label_catch_15:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	this->revokedCert = cVar0;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar2 = std::make_shared<java::security::cert::CRLException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parsing error: ")))->append(getCatchExcetionFromList->toString())->toString());
	// throw
	throw cVar2;

}
// .method private getEncoded0()[B
unsigned char sun::security::x509::X509CRLEntryImpl::getEncoded0()
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 273        value = {
	// 274            Ljava/security/cert/CRLException;
	// 275        }
	// 276    .end annotation
	if ( this->revokedCert )     
		goto label_cond_c;
	cVar0 = std::make_shared<sun::security::util::DerOutputStream>();
	this->encode(cVar0);
label_cond_c:
	return this->revokedCert;

}
// .method public static getRevocationReason(Ljava/security/cert/X509CRLEntry;)Ljava/security/cert/CRLReason;
std::shared_ptr<java::security::cert::CRLReason> sun::security::x509::X509CRLEntryImpl::getRevocationReason(std::shared_ptr<java::security::cert::X509CRLEntry> crlEntry)
{
	
	std::shared_ptr<java::security::cert::CRLReason> cVar0;
	std::shared_ptr<unsigned char[]> ext;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<sun::security::x509::CRLReasonCodeExtension> rcExt;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "crlEntry"    # Ljava/security/cert/X509CRLEntry;
	cVar0 = 0x0;
	try {
	//label_try_start_1:
	ext = crlEntry->getExtensionValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.21")));
	//    .local v1, "ext":[B
	if ( ext )     
		goto label_cond_b;
	return cVar0;
	// 320    .line 260
label_cond_b:
	val = std::make_shared<sun::security::util::DerValue>(ext);
	//    .local v4, "val":Lsun/security/util/DerValue;
	//    .local v0, "data":[B
	rcExt = std::make_shared<sun::security::x509::CRLReasonCodeExtension>(java::lang::Boolean::FALSE, val->getOctetString());
	//    .local v3, "rcExt":Lsun/security/x509/CRLReasonCodeExtension;
	//label_try_end_1e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1e} :catch_20
	return rcExt->getReasonCode();
	// 350    .line 266
	// 351    .end local v0    # "data":[B
	// 352    .end local v1    # "ext":[B
	// 353    .end local v3    # "rcExt":Lsun/security/x509/CRLReasonCodeExtension;
	// 354    .end local v4    # "val":Lsun/security/util/DerValue;
label_catch_20:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ioe":Ljava/io/IOException;
	return cVar0;

}
// .method private parse(Lsun/security/util/DerValue;)V
void sun::security::x509::X509CRLEntryImpl::parse(std::shared_ptr<sun::security::util::DerValue> derVal)
{
	
	std::shared_ptr<java::security::cert::CRLException> cVar0;
	std::shared_ptr<java::security::cert::CRLException> cVar1;
	std::shared_ptr<sun::security::x509::SerialNumber> cVar2;
	int nextByte;
	std::shared_ptr<sun::security::x509::CRLExtensions> cVar4;
	std::shared_ptr<java::security::cert::CRLException> cVar3;
	
	//    .param p1, "derVal"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 367        value = {
	// 368            Ljava/security/cert/CRLException;,
	// 369            Ljava/io/IOException;
	// 370        }
	// 371    .end annotation
	if ( derVal->tag == 0x30 )
		goto label_cond_f;
	cVar0 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoded RevokedCertificate, starting sequence tag missing.")));
	// throw
	throw cVar0;
	// 390    .line 453
label_cond_f:
	if ( derVal->data->available() )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No data encoded for RevokedCertificates")));
	// throw
	throw cVar1;
	// 409    .line 456
label_cond_20:
	this->revokedCert = derVal->toByteArray();
	//    .local v0, "in":Lsun/security/util/DerInputStream;
	//    .local v2, "val":Lsun/security/util/DerValue;
	cVar2 = std::make_shared<sun::security::x509::SerialNumber>(derVal->toDerInputStream()->getDerValue());
	this->serialNumber = cVar2;
	nextByte = derVal->data->peekByte();
	//    .local v1, "nextByte":I
	if ( (unsigned char)(nextByte) != 0x17 )
		goto label_cond_51;
	this->revocationDate = derVal->data->getUTCTime();
label_goto_48:
	if ( derVal->data->available() )     
		goto label_cond_68;
	return;
	// 473    .line 466
label_cond_51:
	if ( (unsigned char)(nextByte) != 0x18 )
		goto label_cond_5f;
	this->revocationDate = derVal->data->getGeneralizedTime();
	goto label_goto_48;
	// 492    .line 469
label_cond_5f:
	cVar3 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for revocation date")));
	// throw
	throw cVar3;
	// 502    .line 475
label_cond_68:
	cVar4 = std::make_shared<sun::security::x509::CRLExtensions>(derVal->toDerInputStream());
	this->extensions = cVar4;
	return;

}
// .method public static toImpl(Ljava/security/cert/X509CRLEntry;)Lsun/security/x509/X509CRLEntryImpl;
std::shared_ptr<sun::security::x509::X509CRLEntryImpl> sun::security::x509::X509CRLEntryImpl::toImpl(std::shared_ptr<java::security::cert::X509CRLEntry> entry)
{
	
	std::shared_ptr<sun::security::x509::X509CRLEntryImpl> cVar0;
	
	//    .param p0, "entry"    # Ljava/security/cert/X509CRLEntry;
	//    .annotation system Ldalvik/annotation/Throws;
	// 522        value = {
	// 523            Ljava/security/cert/CRLException;
	// 524        }
	// 525    .end annotation
	if ( !(entry->instanceOf("sun::security::x509::X509CRLEntryImpl")) )  
		goto label_cond_7;
	entry->checkCast("sun::security::x509::X509CRLEntryImpl");
	//    .end local p0    # "entry":Ljava/security/cert/X509CRLEntry;
	return entry;
	// 539    .line 488
	// 540    .restart local p0    # "entry":Ljava/security/cert/X509CRLEntry;
label_cond_7:
	cVar0 = std::make_shared<sun::security::x509::X509CRLEntryImpl>(entry->getEncoded());
	return cVar0;

}
// .method public compareTo(Lsun/security/x509/X509CRLEntryImpl;)I
int sun::security::x509::X509CRLEntryImpl::compareTo(std::shared_ptr<sun::security::x509::X509CRLEntryImpl> that)
{
	
	int compSerial;
	auto thisEncoded;
	auto thatEncoded;
	int i;
	int a;
	int b;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "that"    # Lsun/security/x509/X509CRLEntryImpl;
	compSerial = this->getSerialNumber()->compareTo(that->getSerialNumber());
	//    .local v3, "compSerial":I
	if ( !(compSerial) )  
		goto label_cond_f;
	return compSerial;
	// 594    .line 525
label_cond_f:
	try {
	//label_try_start_f:
	thisEncoded = this->getEncoded0();
	//    .local v6, "thisEncoded":[B
	thatEncoded = that->getEncoded0();
	//    .local v5, "thatEncoded":[B
	i = 0x0;
	//    .local v4, "i":I
label_goto_18:
	if ( i >= thisEncoded->size() )
		goto label_cond_2e;
	if ( i >= thatEncoded->size() )
		goto label_cond_2e;
	a = ( thisEncoded[i] & 0xff);
	//    .local v0, "a":I
	b = ( thatEncoded[i] & 0xff);
	//    .local v1, "b":I
	if ( a == b )
		goto label_cond_2b;
	return (a - b);
	// 640    .line 527
label_cond_2b:
	i = ( i + 0x1);
	goto label_goto_18;
	// 646    .line 532
	// 647    .end local v0    # "a":I
	// 648    .end local v1    # "b":I
label_cond_2e:
	//label_try_end_30:
	}
	catch (java::security::cert::CRLException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_32;
	}
	//    .catch Ljava/security/cert/CRLException; {:try_start_f .. :try_end_30} :catch_32
	return (thisEncoded->size() -  thatEncoded->size());
	// 660    .line 533
	// 661    .end local v4    # "i":I
	// 662    .end local v5    # "thatEncoded":[B
	// 663    .end local v6    # "thisEncoded":[B
label_catch_32:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ce":Ljava/security/cert/CRLException;
	return -0x1;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::X509CRLEntryImpl::encode(std::shared_ptr<sun::security::util::DerOutputStream> outStrm)
{
	
	std::shared_ptr<java::security::cert::CRLException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "outStrm"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 678        value = {
	// 679            Ljava/security/cert/CRLException;
	// 680        }
	// 681    .end annotation
	try {
	//label_try_start_0:
	if ( this->revokedCert )     
		goto label_cond_3c;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "tmp":Lsun/security/util/DerOutputStream;
	this->serialNumber->encode(tmp);
	if ( (this->revocationDate->getTime() > 0x24bd0146400L) >= 0 )
		goto label_cond_42;
	tmp->putUTCTime(this->revocationDate);
label_goto_22:
	if ( !(this->extensions) )  
		goto label_cond_2c;
	this->extensions->encode(tmp, 0x0);
label_cond_2c:
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "seq":Lsun/security/util/DerOutputStream;
	seq->write(0x30, tmp);
	this->revokedCert = seq->toByteArray();
	//    .end local v1    # "seq":Lsun/security/util/DerOutputStream;
	//    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_3c:
	outStrm->write(this->revokedCert);
	return;
	// 762    .line 168
	// 763    .restart local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_42:
	tmp->putGeneralizedTime(this->revocationDate);
	//label_try_end_47:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_48;
	}
	//    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_47} :catch_48
	goto label_goto_22;
	// 773    .line 180
	// 774    .end local v2    # "tmp":Lsun/security/util/DerOutputStream;
label_catch_48:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<java::security::cert::CRLException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Encoding error: ")))->append(getCatchExcetionFromList->toString())->toString());
	// throw
	throw cVar0;

}
// .method public getCertificateIssuer()Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::x509::X509CRLEntryImpl::getCertificateIssuer()
{
	
	return this->certIssuer;

}
// .method getCertificateIssuerExtension()Lsun/security/x509/CertificateIssuerExtension;
std::shared_ptr<sun::security::x509::CertificateIssuerExtension> sun::security::x509::X509CRLEntryImpl::getCertificateIssuerExtension()
{
	
	std::shared_ptr<sun::security::x509::CertificateIssuerExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::CertificateIssuer_Id);
	cVar0->checkCast("sun::security::x509::CertificateIssuerExtension");
	return cVar0;

}
// .method public getCriticalExtensionOIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::x509::X509CRLEntryImpl::getCriticalExtensionOIDs()
{
	
	std::shared_ptr<java::util::TreeSet> extSet;
	std::shared_ptr<java::util::Iterator> ex_S_iterator;
	std::shared_ptr<sun::security::x509::Extension> ex;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 839        value = {
	// 840            "()",
	// 841            "Ljava/util/Set",
	// 842            "<",
	// 843            "Ljava/lang/String;",
	// 844            ">;"
	// 845        }
	// 846    .end annotation
	if ( this->extensions )     
		goto label_cond_6;
	return 0x0;
	// 859    .line 353
label_cond_6:
	extSet = std::make_shared<java::util::TreeSet>();
	//    .local v2, "extSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	ex_S_iterator = this->extensions->getAllExtensions()->iterator();
	//    .local v1, "ex$iterator":Ljava/util/Iterator;
label_cond_15:
label_goto_15:
	if ( !(ex_S_iterator->hasNext()) )  
		goto label_cond_33;
	ex = ex_S_iterator->next();
	ex->checkCast("sun::security::x509::Extension");
	//    .local v0, "ex":Lsun/security/x509/Extension;
	if ( !(ex->isCritical()) )  
		goto label_cond_15;
	extSet->add(ex->getExtensionId()->toString());
	goto label_goto_15;
	// 913    .line 359
	// 914    .end local v0    # "ex":Lsun/security/x509/Extension;
label_cond_33:
	return extSet;

}
// .method public getEncoded()[B
unsigned char sun::security::x509::X509CRLEntryImpl::getEncoded()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 922        value = {
	// 923            Ljava/security/cert/CRLException;
	// 924        }
	// 925    .end annotation
	cVar0 = this->getEncoded0()->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public getExtension(Lsun/security/util/ObjectIdentifier;)Lsun/security/x509/Extension;
std::shared_ptr<sun::security::x509::Extension> sun::security::x509::X509CRLEntryImpl::getExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	if ( this->extensions )     
		goto label_cond_6;
	return 0x0;
	// 957    .line 443
label_cond_6:
	return this->extensions->get(sun::security::x509::OIDMap::getName(oid));

}
// .method public getExtensionValue(Ljava/lang/String;)[B
unsigned char sun::security::x509::X509CRLEntryImpl::getExtensionValue(std::shared_ptr<java::lang::String> oid)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar1;
	std::shared_ptr<java::lang::String> extAlias;
	std::shared_ptr<sun::security::x509::Extension> crlExt;
	std::shared_ptr<sun::security::util::ObjectIdentifier> findOID;
	std::shared_ptr<java::util::Enumeration> e;
	std::shared_ptr<sun::security::x509::Extension> ex;
	std::shared_ptr<unsigned char[]> extData;
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "oid"    # Ljava/lang/String;
	cVar0 = 0x0;
	if ( this->extensions )     
		goto label_cond_6;
	return cVar0;
	// 987    .line 399
label_cond_6:
	try {
	//label_try_start_6:
	cVar1 = std::make_shared<sun::security::util::ObjectIdentifier>(oid);
	extAlias = sun::security::x509::OIDMap::getName(cVar1);
	//    .local v4, "extAlias":Ljava/lang/String;
	crlExt = 0x0;
	//    .local v0, "crlExt":Lsun/security/x509/Extension;
	if ( extAlias )     
		goto label_cond_38;
	findOID = std::make_shared<sun::security::util::ObjectIdentifier>(oid);
	//    .local v6, "findOID":Lsun/security/util/ObjectIdentifier;
	0x0;
	//    .local v3, "ex":Lsun/security/x509/Extension;
	e = this->extensions->getElements();
	//    .end local v3    # "ex":Lsun/security/x509/Extension;
	//    .local v2, "e":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Lsun/security/x509/Extension;>;"
label_cond_1e:
	if ( !(e->hasMoreElements()) )  
		goto label_cond_35;
	ex = e->nextElement();
	ex->checkCast("sun::security::x509::Extension");
	//    .local v3, "ex":Lsun/security/x509/Extension;
	//    .local v7, "inCertOID":Lsun/security/util/ObjectIdentifier;
	if ( !(ex->getExtensionId()->equals(findOID)) )  
		goto label_cond_1e;
	crlExt = ex;
	//    .end local v0    # "crlExt":Lsun/security/x509/Extension;
	//    .end local v2    # "e":Ljava/util/Enumeration;, "Ljava/util/Enumeration<Lsun/security/x509/Extension;>;"
	//    .end local v3    # "ex":Lsun/security/x509/Extension;
	//    .end local v6    # "findOID":Lsun/security/util/ObjectIdentifier;
	//    .end local v7    # "inCertOID":Lsun/security/util/ObjectIdentifier;
label_cond_35:
label_goto_35:
	if ( crlExt )     
		goto label_cond_3f;
	return cVar0;
	// 1071    .line 416
	// 1072    .restart local v0    # "crlExt":Lsun/security/x509/Extension;
label_cond_38:
	crlExt = this->extensions->get(extAlias);
	//    .local v0, "crlExt":Lsun/security/x509/Extension;
	goto label_goto_35;
	// 1083    .line 419
	// 1084    .end local v0    # "crlExt":Lsun/security/x509/Extension;
label_cond_3f:
	extData = crlExt->getExtensionValue();
	//    .local v5, "extData":[B
	if ( extData )     
		goto label_cond_46;
	return cVar0;
	// 1097    .line 423
label_cond_46:
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v8, "out":Lsun/security/util/DerOutputStream;
	out->putOctetString(extData);
	//label_try_end_51:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_53;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_51} :catch_53
	return out->toByteArray();
	// 1116    .line 426
	// 1117    .end local v4    # "extAlias":Ljava/lang/String;
	// 1118    .end local v5    # "extData":[B
	// 1119    .end local v8    # "out":Lsun/security/util/DerOutputStream;
label_catch_53:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getExtensions()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::security::cert::Extension>> sun::security::x509::X509CRLEntryImpl::getExtensions()
{
	
	std::shared_ptr<java::util::TreeMap> map;
	std::shared_ptr<java::util::Iterator> ext_S_iterator;
	std::shared_ptr<sun::security::x509::Extension> ext;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1131        value = {
	// 1132            "()",
	// 1133            "Ljava/util/Map",
	// 1134            "<",
	// 1135            "Ljava/lang/String;",
	// 1136            "Ljava/security/cert/Extension;",
	// 1137            ">;"
	// 1138        }
	// 1139    .end annotation
	if ( this->extensions )     
		goto label_cond_9;
	return java::util::Collections::emptyMap({const[class].FS-Param});
	// 1154    .line 510
label_cond_9:
	//    .local v2, "exts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	map = std::make_shared<java::util::TreeMap>();
	//    .local v3, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/security/cert/Extension;>;"
	ext_S_iterator = this->extensions->getAllExtensions()->iterator();
	//    .local v1, "ext$iterator":Ljava/util/Iterator;
label_goto_18:
	if ( !(ext_S_iterator->hasNext()) )  
		goto label_cond_2c;
	ext = ext_S_iterator->next();
	ext->checkCast("sun::security::x509::Extension");
	//    .local v0, "ext":Lsun/security/x509/Extension;
	map->put(ext->getId(), ext);
	goto label_goto_18;
	// 1198    .line 515
	// 1199    .end local v0    # "ext":Lsun/security/x509/Extension;
label_cond_2c:
	return map;

}
// .method public getNonCriticalExtensionOIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::x509::X509CRLEntryImpl::getNonCriticalExtensionOIDs()
{
	
	std::shared_ptr<java::util::TreeSet> extSet;
	std::shared_ptr<java::util::Iterator> ex_S_iterator;
	std::shared_ptr<sun::security::x509::Extension> ex;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1207        value = {
	// 1208            "()",
	// 1209            "Ljava/util/Set",
	// 1210            "<",
	// 1211            "Ljava/lang/String;",
	// 1212            ">;"
	// 1213        }
	// 1214    .end annotation
	if ( this->extensions )     
		goto label_cond_6;
	return 0x0;
	// 1227    .line 374
label_cond_6:
	extSet = std::make_shared<java::util::TreeSet>();
	//    .local v2, "extSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	ex_S_iterator = this->extensions->getAllExtensions()->iterator();
	//    .local v1, "ex$iterator":Ljava/util/Iterator;
label_cond_15:
label_goto_15:
	if ( !(ex_S_iterator->hasNext()) )  
		goto label_cond_33;
	ex = ex_S_iterator->next();
	ex->checkCast("sun::security::x509::Extension");
	//    .local v0, "ex":Lsun/security/x509/Extension;
	if ( ex->isCritical() )     
		goto label_cond_15;
	extSet->add(ex->getExtensionId()->toString());
	goto label_goto_15;
	// 1281    .line 380
	// 1282    .end local v0    # "ex":Lsun/security/x509/Extension;
label_cond_33:
	return extSet;

}
// .method public getReasonCode()Ljava/lang/Integer;
std::shared_ptr<java::lang::Integer> sun::security::x509::X509CRLEntryImpl::getReasonCode()
{
	
	auto obj;
	std::shared_ptr<sun::security::x509::CRLReasonCodeExtension> reasonCode;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1290        value = {
	// 1291            Ljava/io/IOException;
	// 1292        }
	// 1293    .end annotation
	obj = this->getExtension(sun::security::x509::PKIXExtensions::ReasonCode_Id);
	//    .local v0, "obj":Ljava/lang/Object;
	if ( obj )     
		goto label_cond_a;
	return 0x0;
label_cond_a:
	reasonCode = obj;
	reasonCode->checkCast("sun::security::x509::CRLReasonCodeExtension");
	//    .local v1, "reasonCode":Lsun/security/x509/CRLReasonCodeExtension;
	return reasonCode->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("reason")));

}
// .method public getRevocationDate()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::x509::X509CRLEntryImpl::getRevocationDate()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	cVar0 = std::make_shared<java::util::Date>(this->revocationDate->getTime());
	return cVar0;

}
// .method public getRevocationReason()Ljava/security/cert/CRLReason;
std::shared_ptr<java::security::cert::CRLReason> sun::security::x509::X509CRLEntryImpl::getRevocationReason()
{
	
	auto ext;
	std::shared_ptr<sun::security::x509::CRLReasonCodeExtension> rcExt;
	
	ext = this->getExtension(sun::security::x509::PKIXExtensions::ReasonCode_Id);
	//    .local v0, "ext":Lsun/security/x509/Extension;
	if ( ext )     
		goto label_cond_a;
	return 0x0;
label_cond_a:
	rcExt = ext;
	rcExt->checkCast("sun::security::x509::CRLReasonCodeExtension");
	//    .local v1, "rcExt":Lsun/security/x509/CRLReasonCodeExtension;
	return rcExt->getReasonCode();

}
// .method public getSerialNumber()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::x509::X509CRLEntryImpl::getSerialNumber()
{
	
	return this->serialNumber->getNumber();

}
// .method public hasExtensions()Z
bool sun::security::x509::X509CRLEntryImpl::hasExtensions()
{
	
	bool cVar0;
	
	if ( !(this->extensions) )  
		goto label_cond_6;
	cVar0 = 0x1;
label_goto_5:
	return cVar0;
label_cond_6:
	cVar0 = 0x0;
	goto label_goto_5;

}
// .method public hasUnsupportedCriticalExtension()Z
bool sun::security::x509::X509CRLEntryImpl::hasUnsupportedCriticalExtension()
{
	
	if ( this->extensions )     
		goto label_cond_6;
	return 0x0;
	// 1430    .line 338
label_cond_6:
	return this->extensions->hasUnsupportedCriticalExtension();

}
// .method setCertificateIssuer(Ljavax/security/auth/x500/X500Principal;Ljavax/security/auth/x500/X500Principal;)V
void sun::security::x509::X509CRLEntryImpl::setCertificateIssuer(std::shared_ptr<javax::security::auth::x500::X500Principal> crlIssuer,std::shared_ptr<javax::security::auth::x500::X500Principal> certIssuer)
{
	
	//    .param p1, "crlIssuer"    # Ljavax/security/auth/x500/X500Principal;
	//    .param p2, "certIssuer"    # Ljavax/security/auth/x500/X500Principal;
	if ( !(crlIssuer->equals(certIssuer)) )  
		goto label_cond_a;
	this->certIssuer = 0x0;
label_goto_9:
	return;
	// 1463    .line 211
label_cond_a:
	this->certIssuer = certIssuer;
	goto label_goto_9;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509CRLEntryImpl::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<std::vector<sun::security::x509::Extension>> exts;
	int i;
	std::shared_ptr<sun::security::x509::Extension> ext;
	std::shared_ptr<unsigned char[]> extValue;
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	std::shared_ptr<sun::misc::HexDumpEncoder> enc;
	std::vector<std::any> tryCatchExcetionList;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v8, "sb":Ljava/lang/StringBuilder;
	sb->append(this->serialNumber->toString());
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  On: ")))->append(this->revocationDate->toString());
	if ( !(this->certIssuer) )  
		goto label_cond_2e;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n    Certificate issuer: ")))->append(this->certIssuer);
label_cond_2e:
	if ( !(this->extensions) )  
		goto label_cond_b5;
	//    .local v0, "allEntryExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	exts = this->extensions->getAllExtensions()->toArray(std::make_shared<std::vector<std::vector<sun::security::x509::Extension>>>(0x0));
	exts->checkCast("std::vector<sun::security::x509::Extension>");
	//    .local v5, "exts":[Lsun/security/x509/Extension;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n    CRL Entry Extensions: ")))->append(exts->size());
	i = 0x0;
	//    .local v6, "i":I
label_goto_4d:
	if ( i >= exts->size() )
		goto label_cond_b5;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n    [")))->append(( i + 0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]: ")));
	ext = exts[i];
	//    .local v3, "ext":Lsun/security/x509/Extension;
	try {
	//label_try_start_65:
	if ( sun::security::x509::OIDMap::getClass(ext->getExtensionId()) )     
		goto label_cond_a5;
	sb->append(ext->toString());
	extValue = ext->getExtensionValue();
	//    .local v4, "extValue":[B
	if ( !(extValue) )  
		goto label_cond_a2;
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v7, "out":Lsun/security/util/DerOutputStream;
	out->putOctetString(extValue);
	enc = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v2, "enc":Lsun/misc/HexDumpEncoder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Extension unknown: DER encoded OCTET string =\n")))->append(enc->encodeBuffer(out->toByteArray()))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	//    .end local v2    # "enc":Lsun/misc/HexDumpEncoder;
	//    .end local v4    # "extValue":[B
	//    .end local v7    # "out":Lsun/security/util/DerOutputStream;
label_cond_a2:
label_goto_a2:
	i = ( i + 0x1);
	goto label_goto_4d;
	// 1668    .line 321
label_cond_a5:
	sb->append(ext->toString());
	//label_try_end_ac:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_ad;
	}
	//    .catch Ljava/lang/Exception; {:try_start_65 .. :try_end_ac} :catch_ad
	goto label_goto_a2;
	// 1680    .line 322
label_catch_ad:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", Error parsing this extension")));
	goto label_goto_a2;
	// 1692    .line 327
	// 1693    .end local v0    # "allEntryExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	// 1694    .end local v1    # "e":Ljava/lang/Exception;
	// 1695    .end local v3    # "ext":Lsun/security/x509/Extension;
	// 1696    .end local v5    # "exts":[Lsun/security/x509/Extension;
	// 1697    .end local v6    # "i":I
label_cond_b5:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	return sb->toString();

}


