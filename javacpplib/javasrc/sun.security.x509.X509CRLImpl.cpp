// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CRLImpl.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.Class.h"
#include "java.lang.Exception.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.security.Principal.h"
#include "java.security.PrivateKey.h"
#include "java.security.Provider.h"
#include "java.security.PublicKey.h"
#include "java.security.Signature.h"
#include "java.security.SignatureException.h"
#include "java.security.cert.CRLException.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509CRLEntry.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Date.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedList.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"
#include "java.util.TreeSet.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.provider.X509Factory.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.AuthorityKeyIdentifierExtension.h"
#include "sun.security.x509.CRLExtensions.h"
#include "sun.security.x509.CRLNumberExtension.h"
#include "sun.security.x509.CertificateIssuerExtension.h"
#include "sun.security.x509.DeltaCRLIndicatorExtension.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.IssuerAlternativeNameExtension.h"
#include "sun.security.x509.IssuingDistributionPointExtension.h"
#include "sun.security.x509.KeyIdentifier.h"
#include "sun.security.x509.OIDMap.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.X500Name.h"
#include "sun.security.x509.X509CRLEntryImpl.h"
#include "sun.security.x509.X509CRLImpl_S_X509IssuerSerial.h"
#include "sun.security.x509.X509CRLImpl.h"

static sun::security::x509::X509CRLImpl::YR_2050 = 0x24bd0146400L;
static sun::security::x509::X509CRLImpl::isExplicit = true;
// .method private constructor <init>()V
sun::security::x509::X509CRLImpl::X509CRLImpl()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::util::TreeMap> cVar1;
	std::shared_ptr<java::util::LinkedList> cVar2;
	
	cVar0 = 0x0;
	// 084    invoke-direct {p0}, Ljava/security/cert/X509CRL;-><init>()V
	this->signedCRL = cVar0;
	this->signature = cVar0;
	this->tbsCertList = cVar0;
	this->sigAlgId = cVar0;
	this->issuer = cVar0;
	this->issuerPrincipal = cVar0;
	this->thisUpdate = cVar0;
	this->nextUpdate = cVar0;
	cVar1 = std::make_shared<java::util::TreeMap>();
	this->revokedMap = cVar1;
	cVar2 = std::make_shared<java::util::LinkedList>();
	this->revokedList = cVar2;
	this->extensions = cVar0;
	this->readOnly = 0x0;
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;)V
sun::security::x509::X509CRLImpl::X509CRLImpl(std::shared_ptr<java::io::InputStream> inStrm)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::util::TreeMap> cVar1;
	std::shared_ptr<java::util::LinkedList> cVar2;
	std::shared_ptr<java::security::cert::CRLException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<sun::security::util::DerValue> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "inStrm"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 140        value = {
	// 141            Ljava/security/cert/CRLException;
	// 142        }
	// 143    .end annotation
	cVar0 = 0x0;
	// 149    invoke-direct {p0}, Ljava/security/cert/X509CRL;-><init>()V
	this->signedCRL = cVar0;
	this->signature = cVar0;
	this->tbsCertList = cVar0;
	this->sigAlgId = cVar0;
	this->issuer = cVar0;
	this->issuerPrincipal = cVar0;
	this->thisUpdate = cVar0;
	this->nextUpdate = cVar0;
	cVar1 = std::make_shared<java::util::TreeMap>();
	this->revokedMap = cVar1;
	cVar2 = std::make_shared<java::util::LinkedList>();
	this->revokedList = cVar2;
	this->extensions = cVar0;
	this->readOnly = 0x0;
	try {
	//label_try_start_27:
	cVar3 = std::make_shared<sun::security::util::DerValue>(inStrm);
	this->parse(cVar3);
	//label_try_end_2f:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_30;
	}
	//    .catch Ljava/io/IOException; {:try_start_27 .. :try_end_2f} :catch_30
	return;
	// 210    .line 178
label_catch_30:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	this->signedCRL = cVar0;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar4 = std::make_shared<java::security::cert::CRLException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parsing error: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar4;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::X509CRLImpl::X509CRLImpl(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::util::TreeMap> cVar1;
	std::shared_ptr<java::util::LinkedList> cVar2;
	std::shared_ptr<java::security::cert::CRLException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 252        value = {
	// 253            Ljava/security/cert/CRLException;
	// 254        }
	// 255    .end annotation
	cVar0 = 0x0;
	// 261    invoke-direct {p0}, Ljava/security/cert/X509CRL;-><init>()V
	this->signedCRL = cVar0;
	this->signature = cVar0;
	this->tbsCertList = cVar0;
	this->sigAlgId = cVar0;
	this->issuer = cVar0;
	this->issuerPrincipal = cVar0;
	this->thisUpdate = cVar0;
	this->nextUpdate = cVar0;
	cVar1 = std::make_shared<java::util::TreeMap>();
	this->revokedMap = cVar1;
	cVar2 = std::make_shared<java::util::LinkedList>();
	this->revokedList = cVar2;
	this->extensions = cVar0;
	this->readOnly = 0x0;
	try {
	//label_try_start_27:
	this->parse(val);
	//label_try_end_2a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2b;
	}
	//    .catch Ljava/io/IOException; {:try_start_27 .. :try_end_2a} :catch_2b
	return;
	// 318    .line 162
label_catch_2b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	this->signedCRL = cVar0;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar3 = std::make_shared<java::security::cert::CRLException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parsing error: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar3;

}
// .method public constructor <init>(Lsun/security/x509/X500Name;Ljava/util/Date;Ljava/util/Date;)V
sun::security::x509::X509CRLImpl::X509CRLImpl(std::shared_ptr<sun::security::x509::X500Name> issuer,std::shared_ptr<java::util::Date> thisDate,std::shared_ptr<java::util::Date> nextDate)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::util::TreeMap> cVar1;
	std::shared_ptr<java::util::LinkedList> cVar2;
	
	//    .param p1, "issuer"    # Lsun/security/x509/X500Name;
	//    .param p2, "thisDate"    # Ljava/util/Date;
	//    .param p3, "nextDate"    # Ljava/util/Date;
	cVar0 = 0x0;
	// 366    invoke-direct {p0}, Ljava/security/cert/X509CRL;-><init>()V
	this->signedCRL = cVar0;
	this->signature = cVar0;
	this->tbsCertList = cVar0;
	this->sigAlgId = cVar0;
	this->issuer = cVar0;
	this->issuerPrincipal = cVar0;
	this->thisUpdate = cVar0;
	this->nextUpdate = cVar0;
	cVar1 = std::make_shared<java::util::TreeMap>();
	this->revokedMap = cVar1;
	cVar2 = std::make_shared<java::util::LinkedList>();
	this->revokedList = cVar2;
	this->extensions = cVar0;
	this->readOnly = 0x0;
	this->issuer = issuer;
	this->thisUpdate = thisDate;
	this->nextUpdate = nextDate;
	return;

}
// .method public constructor <init>(Lsun/security/x509/X500Name;Ljava/util/Date;Ljava/util/Date;[Ljava/security/cert/X509CRLEntry;)V
sun::security::x509::X509CRLImpl::X509CRLImpl(std::shared_ptr<sun::security::x509::X500Name> issuer,std::shared_ptr<java::util::Date> thisDate,std::shared_ptr<java::util::Date> nextDate,std::shared_ptr<std::vector<java::security::cert::X509CRLEntry>> badCerts)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::util::TreeMap> cVar1;
	std::shared_ptr<java::util::LinkedList> cVar2;
	std::shared_ptr<javax::security::auth::x500::X500Principal> crlIssuer;
	int i;
	std::shared_ptr<sun::security::x509::X509CRLEntryImpl> badCert;
	std::shared_ptr<java::security::cert::CRLException> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<javax::security::auth::x500::X500Principal> badCertIssuer;
	std::shared_ptr<sun::security::x509::X509CRLImpl_S_X509IssuerSerial> issuerSerial;
	
	//    .param p1, "issuer"    # Lsun/security/x509/X500Name;
	//    .param p2, "thisDate"    # Ljava/util/Date;
	//    .param p3, "nextDate"    # Ljava/util/Date;
	//    .param p4, "badCerts"    # [Ljava/security/cert/X509CRLEntry;
	//    .annotation system Ldalvik/annotation/Throws;
	// 434        value = {
	// 435            Ljava/security/cert/CRLException;
	// 436        }
	// 437    .end annotation
	cVar0 = 0x0;
	// 443    invoke-direct {p0}, Ljava/security/cert/X509CRL;-><init>()V
	this->signedCRL = cVar0;
	this->signature = cVar0;
	this->tbsCertList = cVar0;
	this->sigAlgId = cVar0;
	this->issuer = cVar0;
	this->issuerPrincipal = cVar0;
	this->thisUpdate = cVar0;
	this->nextUpdate = cVar0;
	cVar1 = std::make_shared<java::util::TreeMap>();
	this->revokedMap = cVar1;
	cVar2 = std::make_shared<java::util::LinkedList>();
	this->revokedList = cVar2;
	this->extensions = cVar0;
	this->readOnly = 0x0;
	this->issuer = issuer;
	this->thisUpdate = thisDate;
	this->nextUpdate = nextDate;
	if ( !(badCerts) )  
		goto label_cond_69;
	crlIssuer = this->getIssuerX500Principal();
	//    .local v2, "crlIssuer":Ljavax/security/auth/x500/X500Principal;
	//    .local v1, "badCertIssuer":Ljavax/security/auth/x500/X500Principal;
	i = 0x0;
	//    .local v3, "i":I
label_goto_35:
	if ( i >= badCerts->size() )
		goto label_cond_69;
	badCert = badCerts[i];
	badCert->checkCast("sun::security::x509::X509CRLEntryImpl");
	//    .local v0, "badCert":Lsun/security/x509/X509CRLEntryImpl;
	try {
	//label_try_start_3c:
	//label_try_end_3f:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_62;
	}
	//    .catch Ljava/io/IOException; {:try_start_3c .. :try_end_3f} :catch_62
	badCertIssuer = this->getCertIssuer(badCert, badCertIssuer);
	badCert->setCertificateIssuer(crlIssuer, badCertIssuer);
	issuerSerial = std::make_shared<sun::security::x509::X509CRLImpl_S_X509IssuerSerial>(badCertIssuer, badCert->getSerialNumber());
	//    .local v5, "issuerSerial":Lsun/security/x509/X509CRLImpl$X509IssuerSerial;
	this->revokedMap->put(issuerSerial, badCert);
	this->revokedList->add(badCert);
	if ( !(badCert->hasExtensions()) )  
		goto label_cond_5f;
	this->version = 0x1;
label_cond_5f:
	i = ( i + 0x1);
	goto label_goto_35;
	// 579    .line 221
	// 580    .end local v5    # "issuerSerial":Lsun/security/x509/X509CRLImpl$X509IssuerSerial;
label_catch_62:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v4, "ioe":Ljava/io/IOException;
	cVar3 = std::make_shared<java::security::cert::CRLException>(getCatchExcetionFromList);
	// throw
	throw cVar3;
	// 592    .line 234
	// 593    .end local v0    # "badCert":Lsun/security/x509/X509CRLEntryImpl;
	// 594    .end local v1    # "badCertIssuer":Ljavax/security/auth/x500/X500Principal;
	// 595    .end local v2    # "crlIssuer":Ljavax/security/auth/x500/X500Principal;
	// 596    .end local v3    # "i":I
	// 597    .end local v4    # "ioe":Ljava/io/IOException;
label_cond_69:
	return;

}
// .method public constructor <init>(Lsun/security/x509/X500Name;Ljava/util/Date;Ljava/util/Date;[Ljava/security/cert/X509CRLEntry;Lsun/security/x509/CRLExtensions;)V
sun::security::x509::X509CRLImpl::X509CRLImpl(std::shared_ptr<sun::security::x509::X500Name> issuer,std::shared_ptr<java::util::Date> thisDate,std::shared_ptr<java::util::Date> nextDate,std::shared_ptr<std::vector<java::security::cert::X509CRLEntry>> badCerts,std::shared_ptr<sun::security::x509::CRLExtensions> crlExts)
{
	
	//    .param p1, "issuer"    # Lsun/security/x509/X500Name;
	//    .param p2, "thisDate"    # Ljava/util/Date;
	//    .param p3, "nextDate"    # Ljava/util/Date;
	//    .param p4, "badCerts"    # [Ljava/security/cert/X509CRLEntry;
	//    .param p5, "crlExts"    # Lsun/security/x509/CRLExtensions;
	//    .annotation system Ldalvik/annotation/Throws;
	// 610        value = {
	// 611            Ljava/security/cert/CRLException;
	// 612        }
	// 613    .end annotation
	sun::security::x509::X509CRLImpl::(issuer, thisDate, nextDate, badCerts);
	if ( !(crlExts) )  
		goto label_cond_a;
	this->extensions = crlExts;
	this->version = 0x1;
label_cond_a:
	return;

}
// .method public constructor <init>([B)V
sun::security::x509::X509CRLImpl::X509CRLImpl(std::shared_ptr<unsigned char[]> crlData)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::util::TreeMap> cVar1;
	std::shared_ptr<java::util::LinkedList> cVar2;
	std::shared_ptr<java::security::cert::CRLException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<sun::security::util::DerValue> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "crlData"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 639        value = {
	// 640            Ljava/security/cert/CRLException;
	// 641        }
	// 642    .end annotation
	cVar0 = 0x0;
	// 648    invoke-direct {p0}, Ljava/security/cert/X509CRL;-><init>()V
	this->signedCRL = cVar0;
	this->signature = cVar0;
	this->tbsCertList = cVar0;
	this->sigAlgId = cVar0;
	this->issuer = cVar0;
	this->issuerPrincipal = cVar0;
	this->thisUpdate = cVar0;
	this->nextUpdate = cVar0;
	cVar1 = std::make_shared<java::util::TreeMap>();
	this->revokedMap = cVar1;
	cVar2 = std::make_shared<java::util::LinkedList>();
	this->revokedList = cVar2;
	this->extensions = cVar0;
	this->readOnly = 0x0;
	try {
	//label_try_start_27:
	cVar3 = std::make_shared<sun::security::util::DerValue>(crlData);
	this->parse(cVar3);
	//label_try_end_2f:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_30;
	}
	//    .catch Ljava/io/IOException; {:try_start_27 .. :try_end_2f} :catch_30
	return;
	// 709    .line 147
label_catch_30:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	this->signedCRL = cVar0;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar4 = std::make_shared<java::security::cert::CRLException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parsing error: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar4;

}
// .method private getCertIssuer(Lsun/security/x509/X509CRLEntryImpl;Ljavax/security/auth/x500/X500Principal;)Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::x509::X509CRLImpl::getCertIssuer(std::shared_ptr<sun::security::x509::X509CRLEntryImpl> entry,std::shared_ptr<javax::security::auth::x500::X500Principal> prevCertIssuer)
{
	
	std::shared_ptr<sun::security::x509::CertificateIssuerExtension> ciExt;
	std::shared_ptr<sun::security::x509::X500Name> issuerDN;
	
	//    .param p1, "entry"    # Lsun/security/x509/X509CRLEntryImpl;
	//    .param p2, "prevCertIssuer"    # Ljavax/security/auth/x500/X500Principal;
	//    .annotation system Ldalvik/annotation/Throws;
	// 752        value = {
	// 753            Ljava/io/IOException;
	// 754        }
	// 755    .end annotation
	ciExt = entry->getCertificateIssuerExtension();
	//    .local v0, "ciExt":Lsun/security/x509/CertificateIssuerExtension;
	if ( !(ciExt) )  
		goto label_cond_1d;
	//    .local v2, "names":Lsun/security/x509/GeneralNames;
	issuerDN = ciExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer")))->get(0x0)->getName();
	issuerDN->checkCast("sun::security::x509::X500Name");
	//    .local v1, "issuerDN":Lsun/security/x509/X500Name;
	return issuerDN->asX500Principal();
	// 796    .line 1257
	// 797    .end local v1    # "issuerDN":Lsun/security/x509/X500Name;
	// 798    .end local v2    # "names":Lsun/security/x509/GeneralNames;
label_cond_1d:
	return prevCertIssuer;

}
// .method public static getEncodedInternal(Ljava/security/cert/X509CRL;)[B
unsigned char sun::security::x509::X509CRLImpl::getEncodedInternal(std::shared_ptr<java::security::cert::X509CRL> crl)
{
	
	//    .param p0, "crl"    # Ljava/security/cert/X509CRL;
	//    .annotation system Ldalvik/annotation/Throws;
	// 807        value = {
	// 808            Ljava/security/cert/CRLException;
	// 809        }
	// 810    .end annotation
	if ( !(crl->instanceOf("sun::security::x509::X509CRLImpl")) )  
		goto label_cond_b;
	crl->checkCast("sun::security::x509::X509CRLImpl");
	//    .end local p0    # "crl":Ljava/security/cert/X509CRL;
	return crl->getEncodedInternal();
	// 828    .line 1221
	// 829    .restart local p0    # "crl":Ljava/security/cert/X509CRL;
label_cond_b:
	return crl->getEncoded();

}
// .method public static getIssuerX500Principal(Ljava/security/cert/X509CRL;)Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::x509::X509CRLImpl::getIssuerX500Principal(std::shared_ptr<java::security::cert::X509CRL> crl)
{
	
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	std::shared_ptr<sun::security::util::DerInputStream> derIn;
	std::shared_ptr<sun::security::util::DerInputStream> tbsIn;
	std::shared_ptr<javax::security::auth::x500::X500Principal> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "crl"    # Ljava/security/cert/X509CRL;
	try {
	//label_try_start_0:
	//    .local v2, "encoded":[B
	derIn = std::make_shared<sun::security::util::DerInputStream>(crl->getEncoded());
	//    .local v0, "derIn":Lsun/security/util/DerInputStream;
	//    .local v5, "tbsCert":Lsun/security/util/DerValue;
	tbsIn = derIn->getSequence(0x3)[0x0]->data;
	//    .local v6, "tbsIn":Lsun/security/util/DerInputStream;
	//    .local v3, "nextByte":B
	if ( (unsigned char)(tbsIn->peekByte()) != 0x2 )
		goto label_cond_1f;
	tbsIn->getDerValue();
label_cond_1f:
	tbsIn->getDerValue();
	//    .local v7, "tmp":Lsun/security/util/DerValue;
	//    .local v4, "principalBytes":[B
	cVar0 = std::make_shared<javax::security::auth::x500::X500Principal>(tbsIn->getDerValue()->toByteArray());
	//label_try_end_30:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_31;
	}
	//    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_30} :catch_31
	return cVar0;
	// 917    .line 1206
	// 918    .end local v0    # "derIn":Lsun/security/util/DerInputStream;
	// 919    .end local v2    # "encoded":[B
	// 920    .end local v3    # "nextByte":B
	// 921    .end local v4    # "principalBytes":[B
	// 922    .end local v5    # "tbsCert":Lsun/security/util/DerValue;
	// 923    .end local v6    # "tbsIn":Lsun/security/util/DerInputStream;
	// 924    .end local v7    # "tmp":Lsun/security/util/DerValue;
label_catch_31:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	cVar1 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not parse issuer")), getCatchExcetionFromList);
	// throw
	throw cVar1;

}
// .method private parse(Lsun/security/util/DerValue;)V
void sun::security::x509::X509CRLImpl::parse(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	std::shared_ptr<java::security::cert::CRLException> cVar0;
	std::shared_ptr<java::security::cert::CRLException> cVar1;
	std::shared<std::vector<std::vector<sun::security::util::DerValue>>> seq;
	std::shared_ptr<java::security::cert::CRLException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::security::cert::CRLException> cVar4;
	std::shared_ptr<java::security::cert::CRLException> cVar5;
	std::shared_ptr<java::security::cert::CRLException> cVar6;
	std::shared_ptr<sun::security::util::DerInputStream> derStrm;
	std::shared_ptr<java::security::cert::CRLException> cVar7;
	std::shared_ptr<sun::security::x509::AlgorithmId> tmpId;
	std::shared_ptr<java::security::cert::CRLException> cVar8;
	std::shared_ptr<sun::security::x509::X500Name> cVar9;
	std::shared_ptr<java::security::cert::CRLException> cVar10;
	int nextByte;
	unsigned char nextByte;
	auto badCerts;
	std::shared_ptr<javax::security::auth::x500::X500Principal> crlIssuer;
	int i;
	std::shared_ptr<sun::security::x509::X509CRLEntryImpl> entry;
	std::shared_ptr<javax::security::auth::x500::X500Principal> badCertIssuer;
	std::shared_ptr<sun::security::x509::X509CRLImpl_S_X509IssuerSerial> issuerSerial;
	std::shared_ptr<sun::security::util::DerValue> tmp;
	std::shared_ptr<sun::security::x509::CRLExtensions> cVar13;
	std::shared_ptr<java::security::cert::CRLException> cVar11;
	std::shared_ptr<java::lang::StringBuilder> cVar12;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 943        value = {
	// 944            Ljava/security/cert/CRLException;,
	// 945            Ljava/io/IOException;
	// 946        }
	// 947    .end annotation
	if ( !(this->readOnly) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot over-write existing CRL")));
	// throw
	throw cVar0;
	// 964    .line 1067
label_cond_d:
	if ( !(val->getData()) )  
		goto label_cond_19;
	if ( val->tag == 0x30 )
		goto label_cond_22;
label_cond_19:
	cVar1 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid DER-encoded CRL data")));
	// throw
	throw cVar1;
	// 988    .line 1070
label_cond_22:
	this->signedCRL = val->toByteArray();
	seq = std::make_shared<std::vector<std::vector<sun::security::util::DerValue>>>(0x3);
	//    .local v8, "seq":[Lsun/security/util/DerValue;
	seq[0x0] = val->data->getDerValue();
	seq[0x1] = val->data->getDerValue();
	seq[0x2] = val->data->getDerValue();
	if ( !(val->data->available()) )  
		goto label_cond_6e;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CRLException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("signed overrun, bytes = ")))->append(val->data->available())->toString());
	// throw
	throw cVar2;
	// 1077    .line 1081
label_cond_6e:
	if ( seq[0x0]->tag == 0x30 )
		goto label_cond_80;
	cVar4 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("signed CRL fields invalid")));
	// throw
	throw cVar4;
	// 1098    .line 1084
label_cond_80:
	this->sigAlgId = sun::security::x509::AlgorithmId::parse(seq[0x1]);
	this->signature = seq[0x2]->getBitString();
	if ( !(seq[0x1]->data->available()) )  
		goto label_cond_a6;
	cVar5 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("AlgorithmId field overrun")));
	// throw
	throw cVar5;
	// 1143    .line 1090
label_cond_a6:
	if ( !(seq[0x2]->data->available()) )  
		goto label_cond_ba;
	cVar6 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature field overrun")));
	// throw
	throw cVar6;
	// 1166    .line 1094
label_cond_ba:
	this->tbsCertList = seq[0x0]->toByteArray();
	derStrm = seq[0x0]->data;
	//    .local v3, "derStrm":Lsun/security/util/DerInputStream;
	this->version = 0x0;
	//    .local v7, "nextByte":B
	if ( (unsigned char)(derStrm->peekByte()) != 0x2 )
		goto label_cond_e7;
	this->version = derStrm->getInteger();
	if ( this->version == 0x1 )
		goto label_cond_e7;
	cVar7 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid version")));
	// throw
	throw cVar7;
	// 1227    .line 1109
label_cond_e7:
	//    .local v9, "tmp":Lsun/security/util/DerValue;
	tmpId = sun::security::x509::AlgorithmId::parse(derStrm->getDerValue());
	//    .local v10, "tmpId":Lsun/security/x509/AlgorithmId;
	if ( tmpId->equals(this->sigAlgId) )     
		goto label_cond_100;
	cVar8 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature algorithm mismatch")));
	// throw
	throw cVar8;
	// 1258    .line 1117
label_cond_100:
	this->infoSigAlgId = tmpId;
	cVar9 = std::make_shared<sun::security::x509::X500Name>(derStrm);
	this->issuer = cVar9;
	if ( !(this->issuer->isEmpty()) )  
		goto label_cond_11a;
	cVar10 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Empty issuer DN not allowed in X509CRLs")));
	// throw
	throw cVar10;
	// 1287    .line 1128
label_cond_11a:
	nextByte = (unsigned char)(derStrm->peekByte());
	if ( nextByte != 0x17 )
		goto label_cond_130;
	this->thisUpdate = derStrm->getUTCTime();
label_goto_129:
	if ( derStrm->available() )     
		goto label_cond_15c;
	return;
	// 1318    .line 1131
label_cond_130:
	if ( nextByte != 0x18 )
		goto label_cond_13b;
	this->thisUpdate = derStrm->getGeneralizedTime();
	goto label_goto_129;
	// 1333    .line 1134
label_cond_13b:
	cVar12 = std::make_shared<java::lang::StringBuilder>();
	cVar11 = std::make_shared<java::security::cert::CRLException>(cVar12->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for thisUpdate (tag=")))->append(nextByte)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
	// throw
	throw cVar11;
	// 1367    .line 1142
label_cond_15c:
	nextByte = (unsigned char)(derStrm->peekByte());
	if ( nextByte != 0x17 )
		goto label_cond_172;
	this->nextUpdate = derStrm->getUTCTime();
label_cond_16b:
label_goto_16b:
	if ( derStrm->available() )     
		goto label_cond_17d;
	return;
	// 1399    .line 1145
label_cond_172:
	if ( nextByte != 0x18 )
		goto label_cond_16b;
	this->nextUpdate = derStrm->getGeneralizedTime();
	goto label_goto_16b;
	// 1414    .line 1153
label_cond_17d:
	nextByte = (unsigned char)(derStrm->peekByte());
	if ( nextByte != 0x30 )
		goto label_cond_1be;
	if ( ( nextByte & 0xc0) == 0x80 )
		goto label_cond_1be;
	badCerts = derStrm->getSequence(0x4);
	//    .local v1, "badCerts":[Lsun/security/util/DerValue;
	crlIssuer = this->getIssuerX500Principal();
	//    .local v2, "crlIssuer":Ljavax/security/auth/x500/X500Principal;
	//    .local v0, "badCertIssuer":Ljavax/security/auth/x500/X500Principal;
	i = 0x0;
	//    .local v5, "i":I
label_goto_197:
	if ( i >= badCerts->size() )
		goto label_cond_1be;
	entry = std::make_shared<sun::security::x509::X509CRLEntryImpl>(badCerts[i]);
	//    .local v4, "entry":Lsun/security/x509/X509CRLEntryImpl;
	badCertIssuer = this->getCertIssuer(entry, badCertIssuer);
	entry->setCertificateIssuer(crlIssuer, badCertIssuer);
	issuerSerial = std::make_shared<sun::security::x509::X509CRLImpl_S_X509IssuerSerial>(badCertIssuer, entry->getSerialNumber());
	//    .local v6, "issuerSerial":Lsun/security/x509/X509CRLImpl$X509IssuerSerial;
	this->revokedMap->put(issuerSerial, entry);
	this->revokedList->add(entry);
	i = ( i + 0x1);
	goto label_goto_197;
	// 1504    .line 1171
	// 1505    .end local v0    # "badCertIssuer":Ljavax/security/auth/x500/X500Principal;
	// 1506    .end local v1    # "badCerts":[Lsun/security/util/DerValue;
	// 1507    .end local v2    # "crlIssuer":Ljavax/security/auth/x500/X500Principal;
	// 1508    .end local v4    # "entry":Lsun/security/x509/X509CRLEntryImpl;
	// 1509    .end local v5    # "i":I
	// 1510    .end local v6    # "issuerSerial":Lsun/security/x509/X509CRLImpl$X509IssuerSerial;
label_cond_1be:
	if ( derStrm->available() )     
		goto label_cond_1c5;
	return;
	// 1521    .line 1175
label_cond_1c5:
	tmp = derStrm->getDerValue();
	if ( !(tmp->isConstructed()) )  
		goto label_cond_1df;
	if ( !(tmp->isContextSpecific(0x0)) )  
		goto label_cond_1df;
	cVar13 = std::make_shared<sun::security::x509::CRLExtensions>(tmp->data);
	this->extensions = cVar13;
label_cond_1df:
	this->readOnly = 0x1;
	return;

}
// .method public static toImpl(Ljava/security/cert/X509CRL;)Lsun/security/x509/X509CRLImpl;
std::shared_ptr<sun::security::x509::X509CRLImpl> sun::security::x509::X509CRLImpl::toImpl(std::shared_ptr<java::security::cert::X509CRL> crl)
{
	
	//    .param p0, "crl"    # Ljava/security/cert/X509CRL;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1565        value = {
	// 1566            Ljava/security/cert/CRLException;
	// 1567        }
	// 1568    .end annotation
	if ( !(crl->instanceOf("sun::security::x509::X509CRLImpl")) )  
		goto label_cond_7;
	crl->checkCast("sun::security::x509::X509CRLImpl");
	//    .end local p0    # "crl":Ljava/security/cert/X509CRL;
	return crl;
	// 1582    .line 1235
	// 1583    .restart local p0    # "crl":Ljava/security/cert/X509CRL;
label_cond_7:
	return sun::security::provider::X509Factory::intern(crl);

}
// .method public derEncode(Ljava/io/OutputStream;)V
void sun::security::x509::X509CRLImpl::derEncode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<unsigned char[]> cVar1;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1598        value = {
	// 1599            Ljava/io/IOException;
	// 1600        }
	// 1601    .end annotation
	if ( this->signedCRL )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null CRL to encode")));
	// throw
	throw cVar0;
	// 1618    .line 1265
label_cond_d:
	cVar1 = this->signedCRL->clone();
	cVar1->checkCast("unsigned char[]");
	out->write(cVar1);
	return;

}
// .method public encodeInfo(Ljava/io/OutputStream;)V
void sun::security::x509::X509CRLImpl::encodeInfo(std::shared_ptr<java::io::OutputStream> out)
{
	
	long long cVar0;
	std::shared_ptr<java::security::cert::CRLException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<sun::security::util::DerOutputStream> rCerts;
	std::shared_ptr<sun::security::util::DerOutputStream> seq;
	std::shared_ptr<java::security::cert::CRLException> cVar1;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::security::cert::X509CRLEntry> entry;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1638        value = {
	// 1639            Ljava/security/cert/CRLException;
	// 1640        }
	// 1641    .end annotation
	cVar0 = 0x24bd0146400L;
	try {
	//label_try_start_5:
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v5, "tmp":Lsun/security/util/DerOutputStream;
	rCerts = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v3, "rCerts":Lsun/security/util/DerOutputStream;
	seq = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v4, "seq":Lsun/security/util/DerOutputStream;
	if ( !(this->version) )  
		goto label_cond_1d;
	tmp->putInteger(this->version);
label_cond_1d:
	this->infoSigAlgId->encode(tmp);
	if ( this->version )     
		goto label_cond_56;
	if ( this->issuer->toString() )     
		goto label_cond_56;
	cVar1 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null Issuer DN not allowed in v1 CRL")));
	// throw
	throw cVar1;
	// 1702    :try_end_37
	// 1703    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_37} :catch_37
	// 1705    .line 324
	// 1706    .end local v3    # "rCerts":Lsun/security/util/DerOutputStream;
	// 1707    .end local v4    # "seq":Lsun/security/util/DerOutputStream;
	// 1708    .end local v5    # "tmp":Lsun/security/util/DerOutputStream;
label_catch_37:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar2 = std::make_shared<java::security::cert::CRLException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Encoding error: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar2;
	// 1742    .line 296
	// 1743    .end local v0    # "e":Ljava/io/IOException;
	// 1744    .restart local v3    # "rCerts":Lsun/security/util/DerOutputStream;
	// 1745    .restart local v4    # "seq":Lsun/security/util/DerOutputStream;
	// 1746    .restart local v5    # "tmp":Lsun/security/util/DerOutputStream;
label_cond_56:
	try {
	//label_try_start_56:
	this->issuer->encode(tmp);
	if ( (this->thisUpdate->getTime() > cVar0) >= 0 )
		goto label_cond_9d;
	tmp->putUTCTime(this->thisUpdate);
label_goto_6a:
	if ( !(this->nextUpdate) )  
		goto label_cond_7d;
	if ( (this->nextUpdate->getTime() > cVar0) >= 0 )
		goto label_cond_a3;
	tmp->putUTCTime(this->nextUpdate);
label_cond_7d:
label_goto_7d:
	if ( this->revokedList->isEmpty() )     
		goto label_cond_ae;
	entry_S_iterator = this->revokedList->iterator();
	//    .local v2, "entry$iterator":Ljava/util/Iterator;
label_goto_8b:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_a9;
	entry = entry_S_iterator->next();
	entry->checkCast("java::security::cert::X509CRLEntry");
	//    .local v1, "entry":Ljava/security/cert/X509CRLEntry;
	entry->checkCast("sun::security::x509::X509CRLEntryImpl");
	//    .end local v1    # "entry":Ljava/security/cert/X509CRLEntry;
	entry->encode(rCerts);
	goto label_goto_8b;
	// 1832    .line 301
	// 1833    .end local v2    # "entry$iterator":Ljava/util/Iterator;
label_cond_9d:
	tmp->putGeneralizedTime(this->thisUpdate);
	goto label_goto_6a;
	// 1841    .line 307
label_cond_a3:
	tmp->putGeneralizedTime(this->nextUpdate);
	goto label_goto_7d;
	// 1849    .line 314
	// 1850    .restart local v2    # "entry$iterator":Ljava/util/Iterator;
label_cond_a9:
	tmp->write(0x30, rCerts);
	//    .end local v2    # "entry$iterator":Ljava/util/Iterator;
label_cond_ae:
	if ( !(this->extensions) )  
		goto label_cond_b8;
	this->extensions->encode(tmp, 0x1);
label_cond_b8:
	seq->write(0x30, tmp);
	this->tbsCertList = seq->toByteArray();
	out->write(this->tbsCertList);
	//label_try_end_c8:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/io/IOException; {:try_start_56 .. :try_end_c8} :catch_37
	return;

}
// .method public getAuthKeyId()Lsun/security/x509/KeyIdentifier;
std::shared_ptr<sun::security::x509::KeyIdentifier> sun::security::x509::X509CRLImpl::getAuthKeyId()
{
	
	std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> aki;
	std::shared_ptr<sun::security::x509::KeyIdentifier> keyId;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1897        value = {
	// 1898            Ljava/io/IOException;
	// 1899        }
	// 1900    .end annotation
	aki = this->getAuthKeyIdExtension();
	//    .local v0, "aki":Lsun/security/x509/AuthorityKeyIdentifierExtension;
	if ( !(aki) )  
		goto label_cond_11;
	keyId = aki->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")));
	keyId->checkCast("sun::security::x509::KeyIdentifier");
	//    .local v1, "keyId":Lsun/security/x509/KeyIdentifier;
	return keyId;
	// 1928    .line 848
	// 1929    .end local v1    # "keyId":Lsun/security/x509/KeyIdentifier;
label_cond_11:
	return 0x0;

}
// .method public getAuthKeyIdExtension()Lsun/security/x509/AuthorityKeyIdentifierExtension;
std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> sun::security::x509::X509CRLImpl::getAuthKeyIdExtension()
{
	
	std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> obj;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1937        value = {
	// 1938            Ljava/io/IOException;
	// 1939        }
	// 1940    .end annotation
	obj = this->getExtension(sun::security::x509::PKIXExtensions::AuthorityKey_Id);
	//    .local v0, "obj":Ljava/lang/Object;
	obj->checkCast("sun::security::x509::AuthorityKeyIdentifierExtension");
	//    .end local v0    # "obj":Ljava/lang/Object;
	return obj;

}
// .method public getBaseCRLNumber()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::x509::X509CRLImpl::getBaseCRLNumber()
{
	
	std::shared_ptr<sun::security::x509::DeltaCRLIndicatorExtension> dciExt;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1961        value = {
	// 1962            Ljava/io/IOException;
	// 1963        }
	// 1964    .end annotation
	dciExt = this->getDeltaCRLIndicatorExtension();
	//    .local v0, "dciExt":Lsun/security/x509/DeltaCRLIndicatorExtension;
	if ( !(dciExt) )  
		goto label_cond_f;
	//    .local v1, "num":Ljava/math/BigInteger;
	return dciExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("value")));
	// 1989    .line 916
	// 1990    .end local v1    # "num":Ljava/math/BigInteger;
label_cond_f:
	return 0x0;

}
// .method public getCRLNumber()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::x509::X509CRLImpl::getCRLNumber()
{
	
	std::shared_ptr<sun::security::x509::CRLNumberExtension> numExt;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1998        value = {
	// 1999            Ljava/io/IOException;
	// 2000        }
	// 2001    .end annotation
	numExt = this->getCRLNumberExtension();
	//    .local v1, "numExt":Lsun/security/x509/CRLNumberExtension;
	if ( !(numExt) )  
		goto label_cond_f;
	//    .local v0, "num":Ljava/math/BigInteger;
	return numExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("value")));
	// 2026    .line 887
	// 2027    .end local v0    # "num":Ljava/math/BigInteger;
label_cond_f:
	return 0x0;

}
// .method public getCRLNumberExtension()Lsun/security/x509/CRLNumberExtension;
std::shared_ptr<sun::security::x509::CRLNumberExtension> sun::security::x509::X509CRLImpl::getCRLNumberExtension()
{
	
	std::shared_ptr<sun::security::x509::CRLNumberExtension> obj;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2035        value = {
	// 2036            Ljava/io/IOException;
	// 2037        }
	// 2038    .end annotation
	obj = this->getExtension(sun::security::x509::PKIXExtensions::CRLNumber_Id);
	//    .local v0, "obj":Ljava/lang/Object;
	obj->checkCast("sun::security::x509::CRLNumberExtension");
	//    .end local v0    # "obj":Ljava/lang/Object;
	return obj;

}
// .method public getCriticalExtensionOIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::x509::X509CRLImpl::getCriticalExtensionOIDs()
{
	
	std::shared_ptr<java::util::TreeSet> extSet;
	std::shared_ptr<java::util::Iterator> ex_S_iterator;
	std::shared_ptr<sun::security::x509::Extension> ex;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2059        value = {
	// 2060            "()",
	// 2061            "Ljava/util/Set",
	// 2062            "<",
	// 2063            "Ljava/lang/String;",
	// 2064            ">;"
	// 2065        }
	// 2066    .end annotation
	if ( this->extensions )     
		goto label_cond_6;
	return 0x0;
	// 2079    .line 968
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
	// 2133    .line 974
	// 2134    .end local v0    # "ex":Lsun/security/x509/Extension;
label_cond_33:
	return extSet;

}
// .method public getDeltaCRLIndicatorExtension()Lsun/security/x509/DeltaCRLIndicatorExtension;
std::shared_ptr<sun::security::x509::DeltaCRLIndicatorExtension> sun::security::x509::X509CRLImpl::getDeltaCRLIndicatorExtension()
{
	
	std::shared_ptr<sun::security::x509::DeltaCRLIndicatorExtension> obj;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2142        value = {
	// 2143            Ljava/io/IOException;
	// 2144        }
	// 2145    .end annotation
	obj = this->getExtension(sun::security::x509::PKIXExtensions::DeltaCRLIndicator_Id);
	//    .local v0, "obj":Ljava/lang/Object;
	obj->checkCast("sun::security::x509::DeltaCRLIndicatorExtension");
	//    .end local v0    # "obj":Ljava/lang/Object;
	return obj;

}
// .method public getEncoded()[B
unsigned char sun::security::x509::X509CRLImpl::getEncoded()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2166        value = {
	// 2167            Ljava/security/cert/CRLException;
	// 2168        }
	// 2169    .end annotation
	cVar0 = this->getEncodedInternal()->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public getEncodedInternal()[B
unsigned char sun::security::x509::X509CRLImpl::getEncodedInternal()
{
	
	std::shared_ptr<java::security::cert::CRLException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2189        value = {
	// 2190            Ljava/security/cert/CRLException;
	// 2191        }
	// 2192    .end annotation
	if ( this->signedCRL )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null CRL to encode")));
	// throw
	throw cVar0;
	// 2209    .line 267
label_cond_d:
	return this->signedCRL;

}
// .method public getExtension(Lsun/security/util/ObjectIdentifier;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::X509CRLImpl::getExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	if ( this->extensions )     
		goto label_cond_6;
	return 0x0;
	// 2231    .line 1056
label_cond_6:
	return this->extensions->get(sun::security::x509::OIDMap::getName(oid));

}
// .method public getExtensionValue(Ljava/lang/String;)[B
unsigned char sun::security::x509::X509CRLImpl::getExtensionValue(std::shared_ptr<java::lang::String> oid)
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
	// 2261    .line 1013
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
	// 2345    .line 1030
	// 2346    .restart local v0    # "crlExt":Lsun/security/x509/Extension;
label_cond_38:
	crlExt = this->extensions->get(extAlias);
	//    .local v0, "crlExt":Lsun/security/x509/Extension;
	goto label_goto_35;
	// 2357    .line 1033
	// 2358    .end local v0    # "crlExt":Lsun/security/x509/Extension;
label_cond_3f:
	extData = crlExt->getExtensionValue();
	//    .local v5, "extData":[B
	if ( extData )     
		goto label_cond_46;
	return cVar0;
	// 2371    .line 1036
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
	// 2390    .line 1039
	// 2391    .end local v4    # "extAlias":Ljava/lang/String;
	// 2392    .end local v5    # "extData":[B
	// 2393    .end local v8    # "out":Lsun/security/util/DerOutputStream;
label_catch_53:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getIssuerAltNameExtension()Lsun/security/x509/IssuerAlternativeNameExtension;
std::shared_ptr<sun::security::x509::IssuerAlternativeNameExtension> sun::security::x509::X509CRLImpl::getIssuerAltNameExtension()
{
	
	std::shared_ptr<sun::security::x509::IssuerAlternativeNameExtension> obj;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2405        value = {
	// 2406            Ljava/io/IOException;
	// 2407        }
	// 2408    .end annotation
	obj = this->getExtension(sun::security::x509::PKIXExtensions::IssuerAlternativeName_Id);
	//    .local v0, "obj":Ljava/lang/Object;
	obj->checkCast("sun::security::x509::IssuerAlternativeNameExtension");
	//    .end local v0    # "obj":Ljava/lang/Object;
	return obj;

}
// .method public getIssuerDN()Ljava/security/Principal;
std::shared_ptr<java::security::Principal> sun::security::x509::X509CRLImpl::getIssuerDN()
{
	
	return this->issuer;

}
// .method public getIssuerX500Principal()Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::x509::X509CRLImpl::getIssuerX500Principal()
{
	
	if ( this->issuerPrincipal )     
		goto label_cond_c;
	this->issuerPrincipal = this->issuer->asX500Principal();
label_cond_c:
	return this->issuerPrincipal;

}
// .method public getIssuingDistributionPointExtension()Lsun/security/x509/IssuingDistributionPointExtension;
std::shared_ptr<sun::security::x509::IssuingDistributionPointExtension> sun::security::x509::X509CRLImpl::getIssuingDistributionPointExtension()
{
	
	std::shared_ptr<sun::security::x509::IssuingDistributionPointExtension> obj;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2464        value = {
	// 2465            Ljava/io/IOException;
	// 2466        }
	// 2467    .end annotation
	obj = this->getExtension(sun::security::x509::PKIXExtensions::IssuingDistributionPoint_Id);
	//    .local v0, "obj":Ljava/lang/Object;
	obj->checkCast("sun::security::x509::IssuingDistributionPointExtension");
	//    .end local v0    # "obj":Ljava/lang/Object;
	return obj;

}
// .method public getNextUpdate()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::x509::X509CRLImpl::getNextUpdate()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	if ( this->nextUpdate )     
		goto label_cond_6;
	return 0x0;
	// 2499    .line 693
label_cond_6:
	cVar0 = std::make_shared<java::util::Date>(this->nextUpdate->getTime());
	return cVar0;

}
// .method public getNonCriticalExtensionOIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::x509::X509CRLImpl::getNonCriticalExtensionOIDs()
{
	
	std::shared_ptr<java::util::TreeSet> extSet;
	std::shared_ptr<java::util::Iterator> ex_S_iterator;
	std::shared_ptr<sun::security::x509::Extension> ex;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2517        value = {
	// 2518            "()",
	// 2519            "Ljava/util/Set",
	// 2520            "<",
	// 2521            "Ljava/lang/String;",
	// 2522            ">;"
	// 2523        }
	// 2524    .end annotation
	if ( this->extensions )     
		goto label_cond_6;
	return 0x0;
	// 2537    .line 989
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
	// 2591    .line 995
	// 2592    .end local v0    # "ex":Lsun/security/x509/Extension;
label_cond_33:
	return extSet;

}
// .method public getRevokedCertificate(Ljava/math/BigInteger;)Ljava/security/cert/X509CRLEntry;
std::shared_ptr<java::security::cert::X509CRLEntry> sun::security::x509::X509CRLImpl::getRevokedCertificate(std::shared_ptr<java::math::BigInteger> serialNumber)
{
	
	std::shared_ptr<sun::security::x509::X509CRLImpl_S_X509IssuerSerial> issuerSerial;
	std::shared_ptr<java::security::cert::X509CRLEntry> cVar0;
	
	//    .param p1, "serialNumber"    # Ljava/math/BigInteger;
	if ( !(this->revokedMap->isEmpty()) )  
		goto label_cond_a;
	return 0x0;
	// 2616    .line 708
label_cond_a:
	issuerSerial = std::make_shared<sun::security::x509::X509CRLImpl_S_X509IssuerSerial>(this->getIssuerX500Principal(), serialNumber);
	//    .local v0, "issuerSerial":Lsun/security/x509/X509CRLImpl$X509IssuerSerial;
	cVar0 = this->revokedMap->get(issuerSerial);
	cVar0->checkCast("java::security::cert::X509CRLEntry");
	return cVar0;

}
// .method public getRevokedCertificate(Ljava/security/cert/X509Certificate;)Ljava/security/cert/X509CRLEntry;
std::shared_ptr<java::security::cert::X509CRLEntry> sun::security::x509::X509CRLImpl::getRevokedCertificate(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<sun::security::x509::X509CRLImpl_S_X509IssuerSerial> issuerSerial;
	std::shared_ptr<java::security::cert::X509CRLEntry> cVar0;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	if ( !(this->revokedMap->isEmpty()) )  
		goto label_cond_a;
	return 0x0;
	// 2660    .line 720
label_cond_a:
	issuerSerial = std::make_shared<sun::security::x509::X509CRLImpl_S_X509IssuerSerial>(cert);
	//    .local v0, "issuerSerial":Lsun/security/x509/X509CRLImpl$X509IssuerSerial;
	cVar0 = this->revokedMap->get(issuerSerial);
	cVar0->checkCast("java::security::cert::X509CRLEntry");
	return cVar0;

}
// .method public getRevokedCertificates()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::security::cert::X509CRLEntry>> sun::security::x509::X509CRLImpl::getRevokedCertificates()
{
	
	std::shared_ptr<java::util::TreeSet> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2682        value = {
	// 2683            "()",
	// 2684            "Ljava/util/Set",
	// 2685            "<",
	// 2686            "Ljava/security/cert/X509CRLEntry;",
	// 2687            ">;"
	// 2688        }
	// 2689    .end annotation
	if ( !(this->revokedList->isEmpty()) )  
		goto label_cond_a;
	return 0x0;
	// 2706    .line 736
label_cond_a:
	cVar0 = std::make_shared<java::util::TreeSet>(this->revokedList);
	return cVar0;

}
// .method public getSigAlgId()Lsun/security/x509/AlgorithmId;
std::shared_ptr<sun::security::x509::AlgorithmId> sun::security::x509::X509CRLImpl::getSigAlgId()
{
	
	return this->sigAlgId;

}
// .method public getSigAlgName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509CRLImpl::getSigAlgName()
{
	
	if ( this->sigAlgId )     
		goto label_cond_6;
	return 0x0;
	// 2741    .line 783
label_cond_6:
	return this->sigAlgId->getName();

}
// .method public getSigAlgOID()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509CRLImpl::getSigAlgOID()
{
	
	if ( this->sigAlgId )     
		goto label_cond_6;
	return 0x0;
	// 2766    .line 802
label_cond_6:
	//    .local v0, "oid":Lsun/security/util/ObjectIdentifier;
	return this->sigAlgId->getOID()->toString();

}
// .method public getSigAlgParams()[B
unsigned char sun::security::x509::X509CRLImpl::getSigAlgParams()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->sigAlgId )     
		goto label_cond_6;
	return cVar0;
	// 2797    .line 819
label_cond_6:
	try {
	//label_try_start_6:
	//label_try_end_b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_b} :catch_d
	return this->sigAlgId->getEncodedParams();
	// 2810    .line 820
label_catch_d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	return cVar0;

}
// .method public getSignature()[B
unsigned char sun::security::x509::X509CRLImpl::getSignature()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	if ( this->signature )     
		goto label_cond_6;
	return 0x0;
	// 2833    .line 762
label_cond_6:
	cVar0 = this->signature->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public getTBSCertList()[B
unsigned char sun::security::x509::X509CRLImpl::getTBSCertList()
{
	
	std::shared_ptr<java::security::cert::CRLException> cVar0;
	std::shared_ptr<unsigned char[]> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2849        value = {
	// 2850            Ljava/security/cert/CRLException;
	// 2851        }
	// 2852    .end annotation
	if ( this->tbsCertList )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Uninitialized CRL")));
	// throw
	throw cVar0;
	// 2869    .line 751
label_cond_d:
	cVar1 = this->tbsCertList->clone();
	cVar1->checkCast("unsigned char[]");
	return cVar1;

}
// .method public getThisUpdate()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::x509::X509CRLImpl::getThisUpdate()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	cVar0 = std::make_shared<java::util::Date>(this->thisUpdate->getTime());
	return cVar0;

}
// .method public getVersion()I
int sun::security::x509::X509CRLImpl::getVersion()
{
	
	return ( this->version + 0x1);

}
// .method public hasUnsupportedCriticalExtension()Z
bool sun::security::x509::X509CRLImpl::hasUnsupportedCriticalExtension()
{
	
	if ( this->extensions )     
		goto label_cond_6;
	return 0x0;
	// 2926    .line 953
label_cond_6:
	return this->extensions->hasUnsupportedCriticalExtension();

}
// .method public isRevoked(Ljava/security/cert/Certificate;)Z
bool sun::security::x509::X509CRLImpl::isRevoked(std::shared_ptr<java::security::cert::Certificate> cert)
{
	
	std::shared_ptr<java::security::cert::X509Certificate> xcert;
	std::shared_ptr<sun::security::x509::X509CRLImpl_S_X509IssuerSerial> issuerSerial;
	
	//    .param p1, "cert"    # Ljava/security/cert/Certificate;
	if ( this->revokedMap->isEmpty() )     
		goto label_cond_e;
	if ( !(( cert->instanceOf("java::security::cert::X509Certificate") ^ 0x1)) )  
		goto label_cond_10;
label_cond_e:
	return 0x0;
label_cond_10:
	xcert = cert;
	xcert->checkCast("java::security::cert::X509Certificate");
	//    .local v1, "xcert":Ljava/security/cert/X509Certificate;
	issuerSerial = std::make_shared<sun::security::x509::X509CRLImpl_S_X509IssuerSerial>(xcert);
	//    .local v0, "issuerSerial":Lsun/security/x509/X509CRLImpl$X509IssuerSerial;
	return this->revokedMap->containsKey(issuerSerial);

}
// .method public sign(Ljava/security/PrivateKey;Ljava/lang/String;)V
void sun::security::x509::X509CRLImpl::sign(std::shared_ptr<java::security::PrivateKey> key,std::shared_ptr<java::lang::String> algorithm)
{
	
	//    .param p1, "key"    # Ljava/security/PrivateKey;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2991        value = {
	// 2992            Ljava/security/cert/CRLException;,
	// 2993            Ljava/security/NoSuchAlgorithmException;,
	// 2994            Ljava/security/InvalidKeyException;,
	// 2995            Ljava/security/NoSuchProviderException;,
	// 2996            Ljava/security/SignatureException;
	// 2997        }
	// 2998    .end annotation
	this->sign(key, algorithm, 0x0);
	return;

}
// .method public sign(Ljava/security/PrivateKey;Ljava/lang/String;Ljava/lang/String;)V
void sun::security::x509::X509CRLImpl::sign(std::shared_ptr<java::security::PrivateKey> key,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::String> provider)
{
	
	std::shared_ptr<java::security::cert::CRLException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::security::cert::CRLException> cVar0;
	std::shared_ptr<java::security::Signature> sigEngine;
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "key"    # Ljava/security/PrivateKey;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .param p3, "provider"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3016        value = {
	// 3017            Ljava/security/cert/CRLException;,
	// 3018            Ljava/security/NoSuchAlgorithmException;,
	// 3019            Ljava/security/InvalidKeyException;,
	// 3020            Ljava/security/NoSuchProviderException;,
	// 3021            Ljava/security/SignatureException;
	// 3022        }
	// 3023    .end annotation
	try {
	//label_try_start_0:
	if ( !(this->readOnly) )  
		goto label_cond_2c;
	cVar0 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot over-write existing CRL")));
	// throw
	throw cVar0;
	// 3040    :try_end_d
	// 3041    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_d} :catch_d
	// 3043    .line 533
label_catch_d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::security::cert::CRLException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Error while encoding data: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar1;
	// 3079    .line 502
	// 3080    .end local v0    # "e":Ljava/io/IOException;
label_cond_2c:
	0x0;
	//    .local v2, "sigEngine":Ljava/security/Signature;
	if ( !(provider) )  
		goto label_cond_35;
	try {
	//label_try_start_2f:
	if ( provider->length() )     
		goto label_cond_7f;
label_cond_35:
	sigEngine = java::security::Signature::getInstance(algorithm);
	//    .local v2, "sigEngine":Ljava/security/Signature;
label_goto_39:
	sigEngine->initSign(key);
	this->sigAlgId = sun::security::x509::AlgorithmId::get(sigEngine->getAlgorithm());
	this->infoSigAlgId = this->sigAlgId;
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "out":Lsun/security/util/DerOutputStream;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v3, "tmp":Lsun/security/util/DerOutputStream;
	this->encodeInfo(tmp);
	this->sigAlgId->encode(tmp);
	sigEngine->update(this->tbsCertList, 0x0, this->tbsCertList->size());
	this->signature = sigEngine->sign();
	tmp->putBitString(this->signature);
	out->write(0x30, tmp);
	this->signedCRL = out->toByteArray();
	this->readOnly = 0x1;
	return;
	// 3185    .line 506
	// 3186    .end local v1    # "out":Lsun/security/util/DerOutputStream;
	// 3187    .end local v3    # "tmp":Lsun/security/util/DerOutputStream;
	// 3188    .local v2, "sigEngine":Ljava/security/Signature;
label_cond_7f:
	//label_try_end_82:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Ljava/io/IOException; {:try_start_2f .. :try_end_82} :catch_d
	sigEngine = java::security::Signature::getInstance(algorithm, provider);
	//    .local v2, "sigEngine":Ljava/security/Signature;
	goto label_goto_39;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509CRLImpl::toString()
{
	
	std::shared_ptr<java::lang::StringBuffer> sb;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	auto objs;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	int i;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	std::shared_ptr<sun::security::x509::Extension> ext;
	std::shared_ptr<unsigned char[]> extValue;
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	std::shared_ptr<sun::misc::HexDumpEncoder> enc;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::misc::HexDumpEncoder> encoder;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::security::cert::X509CRLEntry> entry;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	
	sb = std::make_shared<java::lang::StringBuffer>();
	//    .local v12, "sb":Ljava/lang/StringBuffer;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sb->append(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509 CRL v")))->append(( this->version + 0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString());
	if ( !(this->sigAlgId) )  
		goto label_cond_64;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sb->append(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature Algorithm: ")))->append(this->sigAlgId->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", OID=")))->append(this->sigAlgId->getOID()->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString());
label_cond_64:
	if ( !(this->issuer) )  
		goto label_cond_8c;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sb->append(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Issuer: ")))->append(this->issuer->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString());
label_cond_8c:
	if ( !(this->thisUpdate) )  
		goto label_cond_b4;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sb->append(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nThis Update: ")))->append(this->thisUpdate->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString());
label_cond_b4:
	if ( !(this->nextUpdate) )  
		goto label_cond_dc;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	sb->append(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Next Update: ")))->append(this->nextUpdate->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString());
label_cond_dc:
	if ( !(this->revokedList->isEmpty()) )  
		goto label_cond_185;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nNO certificates have been revoked\n")));
label_cond_ea:
	if ( !(this->extensions) )  
		goto label_cond_1ef;
	//    .local v0, "allExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	objs = this->extensions->getAllExtensions()->toArray();
	//    .local v10, "objs":[Ljava/lang/Object;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	sb->append(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nCRL Extensions: ")))->append(objs->size())->toString());
	i = 0x0;
	//    .local v8, "i":I
label_goto_111:
	if ( i >= objs->size() )
		goto label_cond_1ef;
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	sb->append(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n[")))->append(( i + 0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]: ")))->toString());
	ext = objs[i];
	ext->checkCast("sun::security::x509::Extension");
	//    .local v6, "ext":Lsun/security/x509/Extension;
	try {
	//label_try_start_138:
	if ( sun::security::x509::OIDMap::getClass(ext->getExtensionId()) )     
		goto label_cond_1df;
	sb->append(ext->toString());
	extValue = ext->getExtensionValue();
	//    .local v7, "extValue":[B
	if ( !(extValue) )  
		goto label_cond_182;
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v11, "out":Lsun/security/util/DerOutputStream;
	out->putOctetString(extValue);
	enc = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v2, "enc":Lsun/misc/HexDumpEncoder;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	sb->append(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Extension unknown: DER encoded OCTET string =\n")))->append(enc->encodeBuffer(out->toByteArray()))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString());
	//label_try_end_182:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e7;
	}
	//    .catch Ljava/lang/Exception; {:try_start_138 .. :try_end_182} :catch_1e7
	//    .end local v2    # "enc":Lsun/misc/HexDumpEncoder;
	//    .end local v7    # "extValue":[B
	//    .end local v11    # "out":Lsun/security/util/DerOutputStream;
label_cond_182:
label_goto_182:
	i = ( i + 0x1);
	goto label_goto_111;
	// 3619    .line 559
	// 3620    .end local v0    # "allExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	// 3621    .end local v6    # "ext":Lsun/security/x509/Extension;
	// 3622    .end local v8    # "i":I
	// 3623    .end local v10    # "objs":[Ljava/lang/Object;
label_cond_185:
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	sb->append(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nRevoked Certificates: ")))->append(this->revokedList->size())->toString());
	i = 0x1;
	//    .restart local v8    # "i":I
	entry_S_iterator = this->revokedList->iterator();
	//    .local v5, "entry$iterator":Ljava/util/Iterator;
label_goto_1a9:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_ea;
	entry = entry_S_iterator->next();
	entry->checkCast("java::security::cert::X509CRLEntry");
	//    .local v4, "entry":Ljava/security/cert/X509CRLEntry;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	i = ( i + 0x1);
	//    .end local v8    # "i":I
	//    .local v9, "i":I
	sb->append(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n[")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] ")))->append(entry->toString())->toString());
	i = i;
	//    .end local v9    # "i":I
	//    .restart local v8    # "i":I
	goto label_goto_1a9;
	// 3722    .line 586
	// 3723    .end local v4    # "entry":Ljava/security/cert/X509CRLEntry;
	// 3724    .end local v5    # "entry$iterator":Ljava/util/Iterator;
	// 3725    .restart local v0    # "allExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	// 3726    .restart local v6    # "ext":Lsun/security/x509/Extension;
	// 3727    .restart local v10    # "objs":[Ljava/lang/Object;
label_cond_1df:
	try {
	//label_try_start_1df:
	sb->append(ext->toString());
	//label_try_end_1e6:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e7;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1df .. :try_end_1e6} :catch_1e7
	goto label_goto_182;
	// 3740    .line 587
label_catch_1e7:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", Error parsing this extension")));
	goto label_goto_182;
	// 3752    .line 592
	// 3753    .end local v0    # "allExts":Ljava/util/Collection;, "Ljava/util/Collection<Lsun/security/x509/Extension;>;"
	// 3754    .end local v1    # "e":Ljava/lang/Exception;
	// 3755    .end local v6    # "ext":Lsun/security/x509/Extension;
	// 3756    .end local v8    # "i":I
	// 3757    .end local v10    # "objs":[Ljava/lang/Object;
label_cond_1ef:
	if ( !(this->signature) )  
		goto label_cond_221;
	encoder = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v3, "encoder":Lsun/misc/HexDumpEncoder;
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	sb->append(cVar10->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\nSignature:\n")))->append(encoder->encodeBuffer(this->signature))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString());
	//    .end local v3    # "encoder":Lsun/misc/HexDumpEncoder;
label_goto_21c:
	return sb->toString();
	// 3813    .line 597
label_cond_221:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NOT signed yet\n")));
	goto label_goto_21c;

}
// .method public verify(Ljava/security/PublicKey;)V
void sun::security::x509::X509CRLImpl::verify(std::shared_ptr<java::security::PublicKey> key)
{
	
	//    .param p1, "key"    # Ljava/security/PublicKey;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3826        value = {
	// 3827            Ljava/security/cert/CRLException;,
	// 3828            Ljava/security/NoSuchAlgorithmException;,
	// 3829            Ljava/security/InvalidKeyException;,
	// 3830            Ljava/security/NoSuchProviderException;,
	// 3831            Ljava/security/SignatureException;
	// 3832        }
	// 3833    .end annotation
	this->verify(key, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	return;

}
// .method public declared-synchronized verify(Ljava/security/PublicKey;Ljava/lang/String;)V
void sun::security::x509::X509CRLImpl::verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::lang::String> cVar0)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::security::cert::CRLException> cVar1;
	std::shared_ptr<java::security::Signature> sigVerf;
	std::shared_ptr<java::security::cert::CRLException> cVar2;
	std::shared_ptr<java::security::SignatureException> cVar3;
	
	//    .param p1, "key"    # Ljava/security/PublicKey;
	//    .param p2, "sigProvider"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 3850        value = {
	// 3851            Ljava/security/cert/CRLException;,
	// 3852            Ljava/security/NoSuchAlgorithmException;,
	// 3853            Ljava/security/InvalidKeyException;,
	// 3854            Ljava/security/NoSuchProviderException;,
	// 3855            Ljava/security/SignatureException;
	// 3856        }
	// 3857    .end annotation
	this->monitor_enter();
	if ( cVar0 )     
		goto label_cond_6;
	try {
	//label_try_start_3:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_cond_6:
	if ( !(this->verifiedPublicKey) )  
		goto label_cond_1c;
	if ( !(this->verifiedPublicKey->equals(key)) )  
		goto label_cond_1c;
	//label_try_end_17:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_3 .. :try_end_17} :catchall_29
	if ( !(cVar0->equals(this->verifiedProvider)) )  
		goto label_cond_1c;
	this->monitor_exit();
	return;
	// 3899    .line 378
label_cond_1c:
	try {
	//label_try_start_1c:
	if ( this->signedCRL )     
		goto label_cond_2c;
	cVar1 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Uninitialized CRL")));
	// throw
	throw cVar1;
	// 3914    :try_end_29
	// 3915    .catchall {:try_start_1c .. :try_end_29} :catchall_29
label_catchall_29:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 3924    .line 381
label_cond_2c:
	0x0;
	//    .local v0, "sigVerf":Ljava/security/Signature;
	try {
	//label_try_start_2d:
	if ( cVar0->length() )     
		goto label_cond_4d;
	sigVerf = java::security::Signature::getInstance(this->sigAlgId->getName());
	//    .local v0, "sigVerf":Ljava/security/Signature;
label_goto_3d:
	sigVerf->initVerify(key);
	if ( this->tbsCertList )     
		goto label_cond_58;
	cVar2 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Uninitialized CRL")));
	// throw
	throw cVar2;
	// 3967    .line 385
	// 3968    .local v0, "sigVerf":Ljava/security/Signature;
label_cond_4d:
	sigVerf = java::security::Signature::getInstance(this->sigAlgId->getName(), cVar0);
	//    .local v0, "sigVerf":Ljava/security/Signature;
	goto label_goto_3d;
	// 3983    .line 393
label_cond_58:
	sigVerf->update(this->tbsCertList, 0x0, this->tbsCertList->size());
	if ( sigVerf->verify(this->signature) )     
		goto label_cond_72;
	cVar3 = std::make_shared<java::security::SignatureException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature does not match.")));
	// throw
	throw cVar3;
	// 4013    .line 398
label_cond_72:
	this->verifiedPublicKey = key;
	this->verifiedProvider = cVar0;
	//label_try_end_76:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_2d .. :try_end_76} :catchall_29
	this->monitor_exit();
	return;

}
// .method public declared-synchronized verify(Ljava/security/PublicKey;Ljava/security/Provider;)V
void sun::security::x509::X509CRLImpl::verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::security::Provider> sigProvider)
{
	
	std::shared_ptr<java::security::cert::CRLException> cVar0;
	std::shared_ptr<java::security::Signature> sigVerf;
	std::shared_ptr<java::security::cert::CRLException> cVar1;
	std::shared_ptr<java::security::SignatureException> cVar2;
	
	//    .param p1, "key"    # Ljava/security/PublicKey;
	//    .param p2, "sigProvider"    # Ljava/security/Provider;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4033        value = {
	// 4034            Ljava/security/cert/CRLException;,
	// 4035            Ljava/security/NoSuchAlgorithmException;,
	// 4036            Ljava/security/InvalidKeyException;,
	// 4037            Ljava/security/SignatureException;
	// 4038        }
	// 4039    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->signedCRL )     
		goto label_cond_11;
	cVar0 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Uninitialized CRL")));
	// throw
	throw cVar0;
	// 4058    :try_end_e
	// 4059    .catchall {:try_start_1 .. :try_end_e} :catchall_e
label_catchall_e:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 4068    .line 425
label_cond_11:
	0x0;
	//    .local v0, "sigVerf":Ljava/security/Signature;
	if ( sigProvider )     
		goto label_cond_2e;
	try {
	//label_try_start_14:
	sigVerf = java::security::Signature::getInstance(this->sigAlgId->getName());
	//    .local v0, "sigVerf":Ljava/security/Signature;
label_goto_1e:
	sigVerf->initVerify(key);
	if ( this->tbsCertList )     
		goto label_cond_39;
	cVar1 = std::make_shared<java::security::cert::CRLException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Uninitialized CRL")));
	// throw
	throw cVar1;
	// 4107    .line 429
	// 4108    .local v0, "sigVerf":Ljava/security/Signature;
label_cond_2e:
	sigVerf = java::security::Signature::getInstance(this->sigAlgId->getName(), sigProvider);
	//    .local v0, "sigVerf":Ljava/security/Signature;
	goto label_goto_1e;
	// 4123    .line 437
label_cond_39:
	sigVerf->update(this->tbsCertList, 0x0, this->tbsCertList->size());
	if ( sigVerf->verify(this->signature) )     
		goto label_cond_53;
	cVar2 = std::make_shared<java::security::SignatureException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature does not match.")));
	// throw
	throw cVar2;
	// 4153    .line 442
label_cond_53:
	this->verifiedPublicKey = key;
	//label_try_end_55:
	}
	catch (...){
		goto label_catchall_e;
	}
	//    .catchall {:try_start_14 .. :try_end_55} :catchall_e
	this->monitor_exit();
	return;

}


