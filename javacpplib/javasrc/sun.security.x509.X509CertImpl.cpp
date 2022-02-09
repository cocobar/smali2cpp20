// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CertImpl.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Exception.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.security.MessageDigest.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.Principal.h"
#include "java.security.PrivateKey.h"
#include "java.security.Provider.h"
#include "java.security.PublicKey.h"
#include "java.security.Signature.h"
#include "java.security.SignatureException.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateEncodingException.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.CertificateNotYetValidException.h"
#include "java.security.cert.CertificateParsingException.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeSet.h"
#include "java.util.concurrent.ConcurrentHashMap.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.provider.X509Factory.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.AuthorityInfoAccessExtension.h"
#include "sun.security.x509.AuthorityKeyIdentifierExtension.h"
#include "sun.security.x509.BasicConstraintsExtension.h"
#include "sun.security.x509.CRLDistributionPointsExtension.h"
#include "sun.security.x509.CertificateExtensions.h"
#include "sun.security.x509.CertificatePoliciesExtension.h"
#include "sun.security.x509.CertificateValidity.h"
#include "sun.security.x509.DNSName.h"
#include "sun.security.x509.ExtendedKeyUsageExtension.h"
#include "sun.security.x509.Extension.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.IPAddressName.h"
#include "sun.security.x509.IssuerAlternativeNameExtension.h"
#include "sun.security.x509.KeyIdentifier.h"
#include "sun.security.x509.KeyUsageExtension.h"
#include "sun.security.x509.NameConstraintsExtension.h"
#include "sun.security.x509.OIDMap.h"
#include "sun.security.x509.OIDName.h"
#include "sun.security.x509.PKIXExtensions.h"
#include "sun.security.x509.PolicyConstraintsExtension.h"
#include "sun.security.x509.PolicyMappingsExtension.h"
#include "sun.security.x509.PrivateKeyUsageExtension.h"
#include "sun.security.x509.RFC822Name.h"
#include "sun.security.x509.SerialNumber.h"
#include "sun.security.x509.SubjectAlternativeNameExtension.h"
#include "sun.security.x509.SubjectKeyIdentifierExtension.h"
#include "sun.security.x509.URIName.h"
#include "sun.security.x509.UniqueIdentity.h"
#include "sun.security.x509.X500Name.h"
#include "sun.security.x509.X509AttributeName.h"
#include "sun.security.x509.X509CertImpl.h"
#include "sun.security.x509.X509CertInfo.h"

static sun::security::x509::X509CertImpl::ALG_ID = std::make_shared<java::lang::String>("algorithm");
static sun::security::x509::X509CertImpl::AUTH_INFO_ACCESS_OID = std::make_shared<java::lang::String>("1.3.6.1.5.5.7.1.1");
static sun::security::x509::X509CertImpl::BASIC_CONSTRAINT_OID = std::make_shared<java::lang::String>("2.5.29.19");
static sun::security::x509::X509CertImpl::DOT = std::make_shared<java::lang::String>(".");
static sun::security::x509::X509CertImpl::EXTENDED_KEY_USAGE_OID = std::make_shared<java::lang::String>("2.5.29.37");
static sun::security::x509::X509CertImpl::INFO = std::make_shared<java::lang::String>("info");
static sun::security::x509::X509CertImpl::ISSUER_ALT_NAME_OID = std::make_shared<java::lang::String>("2.5.29.18");
static sun::security::x509::X509CertImpl::ISSUER_DN = std::make_shared<java::lang::String>("x509.info.issuer.dname");
static sun::security::x509::X509CertImpl::KEY_USAGE_OID = std::make_shared<java::lang::String>("2.5.29.15");
static sun::security::x509::X509CertImpl::NAME = std::make_shared<java::lang::String>("x509");
static sun::security::x509::X509CertImpl::NUM_STANDARD_KEY_USAGE = 0x9;
static sun::security::x509::X509CertImpl::PUBLIC_KEY = std::make_shared<java::lang::String>("x509.info.key.value");
static sun::security::x509::X509CertImpl::SERIAL_ID = std::make_shared<java::lang::String>("x509.info.serialNumber.number");
static sun::security::x509::X509CertImpl::SIG = std::make_shared<java::lang::String>("x509.signature");
static sun::security::x509::X509CertImpl::SIGNATURE = std::make_shared<java::lang::String>("signature");
static sun::security::x509::X509CertImpl::SIGNED_CERT = std::make_shared<java::lang::String>("signed_cert");
static sun::security::x509::X509CertImpl::SIG_ALG = std::make_shared<java::lang::String>("x509.algorithm");
static sun::security::x509::X509CertImpl::SUBJECT_ALT_NAME_OID = std::make_shared<java::lang::String>("2.5.29.17");
static sun::security::x509::X509CertImpl::SUBJECT_DN = std::make_shared<java::lang::String>("x509.info.subject.dname");
static sun::security::x509::X509CertImpl::VERSION = std::make_shared<java::lang::String>("x509.info.version.number");
static sun::security::x509::X509CertImpl::serialVersionUID = -0x2ffbe8ab06f69c16L;
// .method public constructor <init>()V
sun::security::x509::X509CertImpl::X509CertImpl()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar1;
	
	cVar0 = 0x0;
	// 135    invoke-direct {p0}, Ljava/security/cert/X509Certificate;-><init>()V
	this->readOnly = 0x0;
	this->signedCert = cVar0;
	this->info = cVar0;
	this->algId = cVar0;
	this->signature = cVar0;
	cVar1 = std::make_shared<java::util::concurrent::ConcurrentHashMap>(0x2);
	this->fingerprints = cVar1;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::X509CertImpl::X509CertImpl(std::shared_ptr<sun::security::util::DerValue> derVal)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar1;
	std::shared_ptr<java::lang::Object> e;
	std::shared_ptr<java::security::cert::CertificateException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "derVal"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 172        value = {
	// 173            Ljava/security/cert/CertificateException;
	// 174        }
	// 175    .end annotation
	cVar0 = 0x0;
	// 181    invoke-direct {p0}, Ljava/security/cert/X509Certificate;-><init>()V
	this->readOnly = 0x0;
	this->signedCert = cVar0;
	this->info = cVar0;
	this->algId = cVar0;
	this->signature = cVar0;
	cVar1 = std::make_shared<java::util::concurrent::ConcurrentHashMap>(0x2);
	this->fingerprints = cVar1;
	try {
	//label_try_start_17:
	this->parse(derVal);
	//label_try_end_1a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1b;
	}
	//    .catch Ljava/io/IOException; {:try_start_17 .. :try_end_1a} :catch_1b
	return;
	// 219    .line 307
label_catch_1b:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	this->signedCert = cVar0;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertificateException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to initialize, ")))->append(e)->toString(), e);
	// throw
	throw cVar2;

}
// .method public constructor <init>(Lsun/security/util/DerValue;[B)V
sun::security::x509::X509CertImpl::X509CertImpl(std::shared_ptr<sun::security::util::DerValue> derVal,std::shared_ptr<unsigned char[]> encoded)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar1;
	std::shared_ptr<java::lang::Object> e;
	std::shared_ptr<java::security::cert::CertificateException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "derVal"    # Lsun/security/util/DerValue;
	//    .param p2, "encoded"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 258        value = {
	// 259            Ljava/security/cert/CertificateException;
	// 260        }
	// 261    .end annotation
	cVar0 = 0x0;
	// 267    invoke-direct {p0}, Ljava/security/cert/X509Certificate;-><init>()V
	this->readOnly = 0x0;
	this->signedCert = cVar0;
	this->info = cVar0;
	this->algId = cVar0;
	this->signature = cVar0;
	cVar1 = std::make_shared<java::util::concurrent::ConcurrentHashMap>(0x2);
	this->fingerprints = cVar1;
	try {
	//label_try_start_17:
	this->parse(derVal, encoded);
	//label_try_end_1a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1b;
	}
	//    .catch Ljava/io/IOException; {:try_start_17 .. :try_end_1a} :catch_1b
	return;
	// 305    .line 326
label_catch_1b:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	this->signedCert = cVar0;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertificateException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to initialize, ")))->append(e)->toString(), e);
	// throw
	throw cVar2;

}
// .method public constructor <init>(Lsun/security/x509/X509CertInfo;)V
sun::security::x509::X509CertImpl::X509CertImpl(std::shared_ptr<sun::security::x509::X509CertInfo> certInfo)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar1;
	
	//    .param p1, "certInfo"    # Lsun/security/x509/X509CertInfo;
	cVar0 = 0x0;
	// 347    invoke-direct {p0}, Ljava/security/cert/X509Certificate;-><init>()V
	this->readOnly = 0x0;
	this->signedCert = cVar0;
	this->info = cVar0;
	this->algId = cVar0;
	this->signature = cVar0;
	cVar1 = std::make_shared<java::util::concurrent::ConcurrentHashMap>(0x2);
	this->fingerprints = cVar1;
	this->info = certInfo;
	return;

}
// .method public constructor <init>([B)V
sun::security::x509::X509CertImpl::X509CertImpl(std::shared_ptr<unsigned char[]> certData)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar1;
	std::shared_ptr<java::lang::Object> e;
	std::shared_ptr<java::security::cert::CertificateException> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	std::shared_ptr<sun::security::util::DerValue> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "certData"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 387        value = {
	// 388            Ljava/security/cert/CertificateException;
	// 389        }
	// 390    .end annotation
	cVar0 = 0x0;
	// 396    invoke-direct {p0}, Ljava/security/cert/X509Certificate;-><init>()V
	this->readOnly = 0x0;
	this->signedCert = cVar0;
	this->info = cVar0;
	this->algId = cVar0;
	this->signature = cVar0;
	cVar1 = std::make_shared<java::util::concurrent::ConcurrentHashMap>(0x2);
	this->fingerprints = cVar1;
	try {
	//label_try_start_17:
	cVar2 = std::make_shared<sun::security::util::DerValue>(certData);
	this->parse(cVar2);
	//label_try_end_1f:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20;
	}
	//    .catch Ljava/io/IOException; {:try_start_17 .. :try_end_1f} :catch_20
	return;
	// 438    .line 189
label_catch_20:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	this->signedCert = cVar0;
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::security::cert::CertificateException>(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to initialize, ")))->append(e)->toString(), e);
	// throw
	throw cVar3;

}
// .method private static byte2hex(BLjava/lang/StringBuffer;)V
void sun::security::x509::X509CertImpl::byte2hex(unsigned char b,std::shared_ptr<java::lang::StringBuffer> buf)
{
	
	std::shared<std::vector<char[]>> hexChars;
	
	//    .param p0, "b"    # B
	//    .param p1, "buf"    # Ljava/lang/StringBuffer;
	hexChars = std::make_shared<std::vector<char[]>>(0x10);
	//    .local v0, "hexChars":[C
	?;
	//    .local v1, "high":I
	//    .local v2, "low":I
	buf->append(hexChars[_shri(( b & 0xf0),0x4)]);
	buf->append(hexChars[( b & 0xf)]);
	return;
	// 509    .line 2008
	// 510    :array_18
	// 511    .array-data 2
	// 512        0x30s
	// 513        0x31s
	// 514        0x32s
	// 515        0x33s
	// 516        0x34s
	// 517        0x35s
	// 518        0x36s
	// 519        0x37s
	// 520        0x38s
	// 521        0x39s
	// 522        0x41s
	// 523        0x42s
	// 524        0x43s
	// 525        0x44s
	// 526        0x45s
	// 527        0x46s
	// 528    .end array-data

}
// .method private static cloneAltNames(Ljava/util/Collection;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> sun::security::x509::X509CertImpl::cloneAltNames(std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> altNames)
{
	
	int cVar0;
	std::shared_ptr<java::util::Iterator> nameEntry_S_iterator;
	std::shared_ptr<java::util::List> nameEntry;
	std::shared_ptr<java::util::ArrayList> namesCopy;
	std::shared_ptr<unsigned char[]> nameObject;
	std::shared_ptr<java::util::ArrayList> nameEntryCopy;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 534        value = {
	// 535            "(",
	// 536            "Ljava/util/Collection",
	// 537            "<",
	// 538            "Ljava/util/List",
	// 539            "<*>;>;)",
	// 540            "Ljava/util/Collection",
	// 541            "<",
	// 542            "Ljava/util/List",
	// 543            "<*>;>;"
	// 544        }
	// 545    .end annotation
	//    .local p0, "altNames":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/util/List<*>;>;"
	cVar0 = 0x1;
	//    .local v0, "mustClone":Z
	nameEntry_S_iterator = altNames->iterator();
	//    .local v2, "nameEntry$iterator":Ljava/util/Iterator;
label_cond_6:
label_goto_6:
	if ( !(nameEntry_S_iterator->hasNext()) )  
		goto label_cond_1c;
	nameEntry = nameEntry_S_iterator->next();
	nameEntry->checkCast("java::util::List");
	//    .local v1, "nameEntry":Ljava/util/List;, "Ljava/util/List<*>;"
	if ( !(nameEntry->get(cVar0)->instanceOf("unsigned char[]")) )  
		goto label_cond_6;
	0x1;
	goto label_goto_6;
	// 590    .line 1623
	// 591    .end local v1    # "nameEntry":Ljava/util/List;, "Ljava/util/List<*>;"
label_cond_1c:
	if ( !(0x0) )  
		goto label_cond_5a;
	namesCopy = std::make_shared<java::util::ArrayList>();
	//    .local v5, "namesCopy":Ljava/util/List;, "Ljava/util/List<Ljava/util/List<*>;>;"
	nameEntry_S_iterator = altNames->iterator();
label_goto_27:
	if ( !(nameEntry_S_iterator->hasNext()) )  
		goto label_cond_55;
	nameEntry = nameEntry_S_iterator->next();
	nameEntry->checkCast("java::util::List");
	//    .restart local v1    # "nameEntry":Ljava/util/List;, "Ljava/util/List<*>;"
	nameObject = nameEntry->get(cVar0);
	//    .local v4, "nameObject":Ljava/lang/Object;
	if ( !(nameObject->instanceOf("unsigned char[]")) )  
		goto label_cond_51;
	nameEntryCopy = std::make_shared<java::util::ArrayList>(nameEntry);
	//    .local v3, "nameEntryCopy":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Object;>;"
	nameObject->checkCast("unsigned char[]");
	//    .end local v4    # "nameObject":Ljava/lang/Object;
	nameEntryCopy->set(cVar0, nameObject->clone());
	namesCopy->add(java::util::Collections::unmodifiableList(nameEntryCopy));
	goto label_goto_27;
	// 656    .line 1633
	// 657    .end local v3    # "nameEntryCopy":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Object;>;"
	// 658    .restart local v4    # "nameObject":Ljava/lang/Object;
label_cond_51:
	namesCopy->add(nameEntry);
	goto label_goto_27;
	// 664    .line 1636
	// 665    .end local v1    # "nameEntry":Ljava/util/List;, "Ljava/util/List<*>;"
	// 666    .end local v4    # "nameObject":Ljava/lang/Object;
label_cond_55:
	return java::util::Collections::unmodifiableCollection(namesCopy);
	// 674    .line 1638
	// 675    .end local v5    # "namesCopy":Ljava/util/List;, "Ljava/util/List<Ljava/util/List<*>;>;"
label_cond_5a:
	return altNames;

}
// .method public static getEncodedInternal(Ljava/security/cert/Certificate;)[B
unsigned char sun::security::x509::X509CertImpl::getEncodedInternal(std::shared_ptr<java::security::cert::Certificate> cert)
{
	
	//    .param p0, "cert"    # Ljava/security/cert/Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 684        value = {
	// 685            Ljava/security/cert/CertificateEncodingException;
	// 686        }
	// 687    .end annotation
	if ( !(cert->instanceOf("sun::security::x509::X509CertImpl")) )  
		goto label_cond_b;
	cert->checkCast("sun::security::x509::X509CertImpl");
	//    .end local p0    # "cert":Ljava/security/cert/Certificate;
	return cert->getEncodedInternal();
	// 705    .line 1921
	// 706    .restart local p0    # "cert":Ljava/security/cert/Certificate;
label_cond_b:
	return cert->getEncoded();

}
// .method public static getExtendedKeyUsage(Ljava/security/cert/X509Certificate;)Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> sun::security::x509::X509CertImpl::getExtendedKeyUsage(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar0;
	std::shared_ptr<unsigned char[]> ext;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<sun::security::x509::ExtendedKeyUsageExtension> ekuExt;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 719        value = {
	// 720            "(",
	// 721            "Ljava/security/cert/X509Certificate;",
	// 722            ")",
	// 723            "Ljava/util/List",
	// 724            "<",
	// 725            "Ljava/lang/String;",
	// 726            ">;"
	// 727        }
	// 728    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 731        value = {
	// 732            Ljava/security/cert/CertificateParsingException;
	// 733        }
	// 734    .end annotation
	try {
	//label_try_start_1:
	ext = cert->getExtensionValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.37")));
	//    .local v2, "ext":[B
	if ( ext )     
		goto label_cond_b;
	return 0x0;
	// 754    .line 1513
label_cond_b:
	val = std::make_shared<sun::security::util::DerValue>(ext);
	//    .local v4, "val":Lsun/security/util/DerValue;
	//    .local v0, "data":[B
	ekuExt = std::make_shared<sun::security::x509::ExtendedKeyUsageExtension>(java::lang::Boolean::FALSE, val->getOctetString());
	//    .local v1, "ekuExt":Lsun/security/x509/ExtendedKeyUsageExtension;
	//label_try_end_22:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_22} :catch_24
	return java::util::Collections::unmodifiableList(ekuExt->getExtendedKeyUsage());
	// 788    .line 1519
	// 789    .end local v0    # "data":[B
	// 790    .end local v1    # "ekuExt":Lsun/security/x509/ExtendedKeyUsageExtension;
	// 791    .end local v2    # "ext":[B
	// 792    .end local v4    # "val":Lsun/security/util/DerValue;
label_catch_24:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "ioe":Ljava/io/IOException;
	cVar0 = std::make_shared<java::security::cert::CertificateParsingException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public static getFingerprint(Ljava/lang/String;Ljava/security/cert/X509Certificate;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509CertImpl::getFingerprint(std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<java::lang::String> fingerPrint;
	auto digest;
	std::shared_ptr<java::lang::StringBuffer> buf;
	int i;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "algorithm"    # Ljava/lang/String;
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	fingerPrint = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v4, "fingerPrint":Ljava/lang/String;
	try {
	//label_try_start_3:
	//    .local v3, "encCertInfo":[B
	//    .local v6, "md":Ljava/security/MessageDigest;
	digest = java::security::MessageDigest::getInstance(algorithm)->digest(cert->getEncoded());
	//    .local v1, "digest":[B
	buf = std::make_shared<java::lang::StringBuffer>();
	//    .local v0, "buf":Ljava/lang/StringBuffer;
	i = 0x0;
	//    .local v5, "i":I
label_goto_15:
	if ( i >= digest->size() )
		goto label_cond_20;
	sun::security::x509::X509CertImpl::byte2hex(digest[i], buf);
	i = ( i + 0x1);
	goto label_goto_15;
	// 859    .line 1997
label_cond_20:
	//label_try_end_23:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	catch (java::security::cert::CertificateEncodingException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_3 .. :try_end_23} :catch_25
	//    .catch Ljava/security/cert/CertificateEncodingException; {:try_start_3 .. :try_end_23} :catch_25
	fingerPrint = buf->toString();
	//    .end local v0    # "buf":Ljava/lang/StringBuffer;
	//    .end local v1    # "digest":[B
	//    .end local v3    # "encCertInfo":[B
	//    .end local v5    # "i":I
	//    .end local v6    # "md":Ljava/security/MessageDigest;
label_goto_24:
	return fingerPrint;
	// 877    .line 1998
label_catch_25:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/security/GeneralSecurityException;
	goto label_goto_24;

}
// .method public static getIssuerAlternativeNames(Ljava/security/cert/X509Certificate;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> sun::security::x509::X509CertImpl::getIssuerAlternativeNames(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar0;
	std::shared_ptr<unsigned char[]> ext;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<sun::security::x509::IssuerAlternativeNameExtension> issuerAltNameExt;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 889        value = {
	// 890            "(",
	// 891            "Ljava/security/cert/X509Certificate;",
	// 892            ")",
	// 893            "Ljava/util/Collection",
	// 894            "<",
	// 895            "Ljava/util/List",
	// 896            "<*>;>;"
	// 897        }
	// 898    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 901        value = {
	// 902            Ljava/security/cert/CertificateParsingException;
	// 903        }
	// 904    .end annotation
	try {
	//label_try_start_1:
	ext = cert->getExtensionValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.18")));
	//    .local v1, "ext":[B
	if ( ext )     
		goto label_cond_b;
	return 0x0;
	// 924    .line 1748
label_cond_b:
	val = std::make_shared<sun::security::util::DerValue>(ext);
	//    .local v5, "val":Lsun/security/util/DerValue;
	//    .local v0, "data":[B
	issuerAltNameExt = std::make_shared<sun::security::x509::IssuerAlternativeNameExtension>(java::lang::Boolean::FALSE, val->getOctetString());
	//label_try_end_1b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2d;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1b} :catch_2d
	//    .local v3, "issuerAltNameExt":Lsun/security/x509/IssuerAlternativeNameExtension;
	try {
	//label_try_start_1b:
	//label_try_end_21:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_27;
	}
	//    .catch Ljava/io/IOException; {:try_start_1b .. :try_end_21} :catch_27
	//    .local v4, "names":Lsun/security/x509/GeneralNames;
	try {
	//label_try_start_22:
	return sun::security::x509::X509CertImpl::makeAltNames(issuerAltNameExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer_name"))));
	// 967    .line 1758
	// 968    .end local v4    # "names":Lsun/security/x509/GeneralNames;
label_catch_27:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ioe":Ljava/io/IOException;
	//label_try_end_2b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2d;
	}
	//    .catch Ljava/io/IOException; {:try_start_22 .. :try_end_2b} :catch_2d
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 982    .line 1763
	// 983    .end local v0    # "data":[B
	// 984    .end local v1    # "ext":[B
	// 985    .end local v2    # "ioe":Ljava/io/IOException;
	// 986    .end local v3    # "issuerAltNameExt":Lsun/security/x509/IssuerAlternativeNameExtension;
	// 987    .end local v5    # "val":Lsun/security/util/DerValue;
label_catch_2d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "ioe":Ljava/io/IOException;
	cVar0 = std::make_shared<java::security::cert::CertificateParsingException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public static getIssuerX500Principal(Ljava/security/cert/X509Certificate;)Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::x509::X509CertImpl::getIssuerX500Principal(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	try {
	//label_try_start_1:
	//label_try_end_4:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_4} :catch_6
	return sun::security::x509::X509CertImpl::getX500Principal(cert, 0x1);
	// 1017    .line 1905
label_catch_6:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	cVar0 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not parse issuer")), getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public static getSubjectAlternativeNames(Ljava/security/cert/X509Certificate;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> sun::security::x509::X509CertImpl::getSubjectAlternativeNames(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar0;
	std::shared_ptr<unsigned char[]> ext;
	std::shared_ptr<sun::security::util::DerValue> val;
	std::shared_ptr<sun::security::x509::SubjectAlternativeNameExtension> subjectAltNameExt;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1036        value = {
	// 1037            "(",
	// 1038            "Ljava/security/cert/X509Certificate;",
	// 1039            ")",
	// 1040            "Ljava/util/Collection",
	// 1041            "<",
	// 1042            "Ljava/util/List",
	// 1043            "<*>;>;"
	// 1044        }
	// 1045    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1048        value = {
	// 1049            Ljava/security/cert/CertificateParsingException;
	// 1050        }
	// 1051    .end annotation
	try {
	//label_try_start_1:
	ext = cert->getExtensionValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.17")));
	//    .local v1, "ext":[B
	if ( ext )     
		goto label_cond_b;
	return 0x0;
	// 1071    .line 1684
label_cond_b:
	val = std::make_shared<sun::security::util::DerValue>(ext);
	//    .local v5, "val":Lsun/security/util/DerValue;
	//    .local v0, "data":[B
	subjectAltNameExt = std::make_shared<sun::security::x509::SubjectAlternativeNameExtension>(java::lang::Boolean::FALSE, val->getOctetString());
	//label_try_end_1b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2d;
	}
	//    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1b} :catch_2d
	//    .local v4, "subjectAltNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
	try {
	//label_try_start_1b:
	//label_try_end_21:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_27;
	}
	//    .catch Ljava/io/IOException; {:try_start_1b .. :try_end_21} :catch_27
	//    .local v3, "names":Lsun/security/x509/GeneralNames;
	try {
	//label_try_start_22:
	return sun::security::x509::X509CertImpl::makeAltNames(subjectAltNameExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject_name"))));
	// 1114    .line 1695
	// 1115    .end local v3    # "names":Lsun/security/x509/GeneralNames;
label_catch_27:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ioe":Ljava/io/IOException;
	//label_try_end_2b:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2d;
	}
	//    .catch Ljava/io/IOException; {:try_start_22 .. :try_end_2b} :catch_2d
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 1129    .line 1700
	// 1130    .end local v0    # "data":[B
	// 1131    .end local v1    # "ext":[B
	// 1132    .end local v2    # "ioe":Ljava/io/IOException;
	// 1133    .end local v4    # "subjectAltNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
	// 1134    .end local v5    # "val":Lsun/security/util/DerValue;
label_catch_2d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "ioe":Ljava/io/IOException;
	cVar0 = std::make_shared<java::security::cert::CertificateParsingException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public static getSubjectX500Principal(Ljava/security/cert/X509Certificate;)Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::x509::X509CertImpl::getSubjectX500Principal(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	try {
	//label_try_start_1:
	//label_try_end_4:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_4} :catch_6
	return sun::security::x509::X509CertImpl::getX500Principal(cert, 0x0);
	// 1164    .line 1893
label_catch_6:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	cVar0 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Could not parse subject")), getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method private static getX500Principal(Ljava/security/cert/X509Certificate;Z)Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::x509::X509CertImpl::getX500Principal(std::shared_ptr<java::security::cert::X509Certificate> cert,bool getIssuer)
{
	
	unsigned char cVar0;
	std::shared_ptr<sun::security::util::DerInputStream> derIn;
	std::shared_ptr<sun::security::util::DerInputStream> tbsIn;
	std::shared_ptr<sun::security::util::DerValue> tmp;
	std::shared_ptr<javax::security::auth::x500::X500Principal> cVar1;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p1, "getIssuer"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 1184        value = {
	// 1185            Ljava/lang/Exception;
	// 1186        }
	// 1187    .end annotation
	cVar0 = 0x0;
	//    .local v1, "encoded":[B
	derIn = std::make_shared<sun::security::util::DerInputStream>(cert->getEncoded());
	//    .local v0, "derIn":Lsun/security/util/DerInputStream;
	//    .local v3, "tbsCert":Lsun/security/util/DerValue;
	tbsIn = derIn->getSequence(0x3)[cVar0]->data;
	//    .local v4, "tbsIn":Lsun/security/util/DerInputStream;
	tmp = tbsIn->getDerValue();
	//    .local v5, "tmp":Lsun/security/util/DerValue;
	if ( !(tmp->isContextSpecific(cVar0)) )  
		goto label_cond_21;
	tbsIn->getDerValue();
label_cond_21:
	tbsIn->getDerValue();
	tmp = tbsIn->getDerValue();
	if ( getIssuer )     
		goto label_cond_33;
	tbsIn->getDerValue();
	tmp = tbsIn->getDerValue();
label_cond_33:
	//    .local v2, "principalBytes":[B
	cVar1 = std::make_shared<javax::security::auth::x500::X500Principal>(tmp->toByteArray());
	return cVar1;

}
// .method public static isSelfIssued(Ljava/security/cert/X509Certificate;)Z
bool sun::security::x509::X509CertImpl::isSelfIssued(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .local v1, "subject":Ljavax/security/auth/x500/X500Principal;
	//    .local v0, "issuer":Ljavax/security/auth/x500/X500Principal;
	return cert->getSubjectX500Principal()->equals(cert->getIssuerX500Principal());

}
// .method public static isSelfSigned(Ljava/security/cert/X509Certificate;Ljava/lang/String;)Z
bool sun::security::x509::X509CertImpl::isSelfSigned(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::lang::String> sigProvider)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p1, "sigProvider"    # Ljava/lang/String;
	if ( !(sun::security::x509::X509CertImpl::isSelfIssued(cert)) )  
		goto label_cond_1a;
	if ( sigProvider )     
		goto label_cond_11;
	try {
	//label_try_start_8:
	cert->verify(cert->getPublicKey());
label_goto_f:
	return 0x1;
	// 1330    .line 1962
label_cond_11:
	cert->verify(cert->getPublicKey(), sigProvider);
	//label_try_end_18:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_18} :catch_19
	goto label_goto_f;
	// 1342    .line 1965
label_catch_19:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_1a:
	return 0x0;

}
// .method private static makeAltNames(Lsun/security/x509/GeneralNames;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> sun::security::x509::X509CertImpl::makeAltNames(std::shared_ptr<sun::security::x509::GeneralNames> names)
{
	
	std::shared_ptr<java::util::ArrayList> newNames;
	std::shared_ptr<java::util::Iterator> gname_S_iterator;
	std::shared_ptr<sun::security::x509::GeneralName> gname;
	std::shared_ptr<sun::security::x509::GeneralNameInterface> name;
	std::shared_ptr<java::util::ArrayList> nameEntry;
	std::shared_ptr<sun::security::util::DerOutputStream> derOut;
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	
	//    .param p0, "names"    # Lsun/security/x509/GeneralNames;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1357        value = {
	// 1358            "(",
	// 1359            "Lsun/security/x509/GeneralNames;",
	// 1360            ")",
	// 1361            "Ljava/util/Collection",
	// 1362            "<",
	// 1363            "Ljava/util/List",
	// 1364            "<*>;>;"
	// 1365        }
	// 1366    .end annotation
	if ( !(names->isEmpty()) )  
		goto label_cond_b;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 1383    .line 1563
label_cond_b:
	newNames = std::make_shared<java::util::ArrayList>();
	//    .local v6, "newNames":Ljava/util/List;, "Ljava/util/List<Ljava/util/List<*>;>;"
	gname_S_iterator = names->names()->iterator();
	//    .local v2, "gname$iterator":Ljava/util/Iterator;
label_goto_18:
	if ( !(gname_S_iterator->hasNext()) )  
		goto label_cond_ab;
	gname = gname_S_iterator->next();
	gname->checkCast("sun::security::x509::GeneralName");
	//    .local v1, "gname":Lsun/security/x509/GeneralName;
	name = gname->getName();
	//    .local v4, "name":Lsun/security/x509/GeneralNameInterface;
	nameEntry = std::make_shared<java::util::ArrayList>(0x2);
	//    .local v5, "nameEntry":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Object;>;"
	nameEntry->add(java::lang::Integer::valueOf(name->getType()));
	// switch
	{
	auto item = ( name->getType() );
	if (item == 1) goto label_pswitch_57;
	if (item == 2) goto label_pswitch_61;
	if (item == 3) goto label_pswitch_40;
	if (item == 4) goto label_pswitch_6b;
	if (item == 5) goto label_pswitch_40;
	if (item == 6) goto label_pswitch_75;
	if (item == 7) goto label_pswitch_7f;
	if (item == 8) goto label_pswitch_93;
	}
label_pswitch_40:
	derOut = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "derOut":Lsun/security/util/DerOutputStream;
	try {
	//label_try_start_45:
	name->encode(derOut);
	//label_try_end_48:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a1;
	}
	//    .catch Ljava/io/IOException; {:try_start_45 .. :try_end_48} :catch_a1
	nameEntry->add(derOut->toByteArray());
	//    .end local v0    # "derOut":Lsun/security/util/DerOutputStream;
	//    .end local v4    # "name":Lsun/security/x509/GeneralNameInterface;
label_goto_4f:
	newNames->add(java::util::Collections::unmodifiableList(nameEntry));
	goto label_goto_18;
	// 1478    .line 1570
	// 1479    .restart local v4    # "name":Lsun/security/x509/GeneralNameInterface;
label_pswitch_57:
	name->checkCast("sun::security::x509::RFC822Name");
	//    .end local v4    # "name":Lsun/security/x509/GeneralNameInterface;
	nameEntry->add(name->getName());
	goto label_goto_4f;
	// 1492    .line 1573
	// 1493    .restart local v4    # "name":Lsun/security/x509/GeneralNameInterface;
label_pswitch_61:
	name->checkCast("sun::security::x509::DNSName");
	//    .end local v4    # "name":Lsun/security/x509/GeneralNameInterface;
	nameEntry->add(name->getName());
	goto label_goto_4f;
	// 1506    .line 1576
	// 1507    .restart local v4    # "name":Lsun/security/x509/GeneralNameInterface;
label_pswitch_6b:
	name->checkCast("sun::security::x509::X500Name");
	//    .end local v4    # "name":Lsun/security/x509/GeneralNameInterface;
	nameEntry->add(name->getRFC2253Name());
	goto label_goto_4f;
	// 1520    .line 1579
	// 1521    .restart local v4    # "name":Lsun/security/x509/GeneralNameInterface;
label_pswitch_75:
	name->checkCast("sun::security::x509::URIName");
	//    .end local v4    # "name":Lsun/security/x509/GeneralNameInterface;
	nameEntry->add(name->getName());
	goto label_goto_4f;
	// 1534    .line 1583
	// 1535    .restart local v4    # "name":Lsun/security/x509/GeneralNameInterface;
label_pswitch_7f:
	try {
	//label_try_start_7f:
	name->checkCast("sun::security::x509::IPAddressName");
	//    .end local v4    # "name":Lsun/security/x509/GeneralNameInterface;
	nameEntry->add(name->getName());
	//label_try_end_88:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_89;
	}
	//    .catch Ljava/io/IOException; {:try_start_7f .. :try_end_88} :catch_89
	goto label_goto_4f;
	// 1551    .line 1584
label_catch_89:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "ioe":Ljava/io/IOException;
	cVar0 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("IPAddress cannot be parsed")), getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 1565    .line 1591
	// 1566    .end local v3    # "ioe":Ljava/io/IOException;
	// 1567    .restart local v4    # "name":Lsun/security/x509/GeneralNameInterface;
label_pswitch_93:
	name->checkCast("sun::security::x509::OIDName");
	//    .end local v4    # "name":Lsun/security/x509/GeneralNameInterface;
	nameEntry->add(name->getOID()->toString());
	goto label_goto_4f;
	// 1584    .line 1598
	// 1585    .restart local v0    # "derOut":Lsun/security/util/DerOutputStream;
	// 1586    .restart local v4    # "name":Lsun/security/x509/GeneralNameInterface;
label_catch_a1:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .restart local v3    # "ioe":Ljava/io/IOException;
	cVar1 = std::make_shared<java::lang::RuntimeException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("name cannot be encoded")), getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 1600    .line 1608
	// 1601    .end local v0    # "derOut":Lsun/security/util/DerOutputStream;
	// 1602    .end local v1    # "gname":Lsun/security/x509/GeneralName;
	// 1603    .end local v3    # "ioe":Ljava/io/IOException;
	// 1604    .end local v4    # "name":Lsun/security/x509/GeneralNameInterface;
	// 1605    .end local v5    # "nameEntry":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Object;>;"
label_cond_ab:
	return java::util::Collections::unmodifiableCollection(newNames);
	// 1613    .line 1568
	// 1614    :pswitch_data_b0
	// 1615    .packed-switch 0x1
	// 1616        :pswitch_57
	// 1617        :pswitch_61
	// 1618        :pswitch_40
	// 1619        :pswitch_6b
	// 1620        :pswitch_40
	// 1621        :pswitch_75
	// 1622        :pswitch_7f
	// 1623        :pswitch_93
	// 1624    .end packed-switch

}
// .method private parse(Lsun/security/util/DerValue;)V
void sun::security::x509::X509CertImpl::parse(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1631        value = {
	// 1632            Ljava/security/cert/CertificateException;,
	// 1633            Ljava/io/IOException;
	// 1634        }
	// 1635    .end annotation
	this->parse(val, 0x0);
	return;

}
// .method private parse(Lsun/security/util/DerValue;[B)V
void sun::security::x509::X509CertImpl::parse(std::shared_ptr<sun::security::util::DerValue> val,std::shared_ptr<unsigned char[]> originalEncodedForm)
{
	
	int cVar0;
	int cVar1;
	bool cVar2;
	int cVar3;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar4;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar5;
	std::shared<std::vector<std::vector<sun::security::util::DerValue>>> seq;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar6;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar9;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar10;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar11;
	std::shared_ptr<sun::security::x509::X509CertInfo> cVar12;
	std::shared_ptr<sun::security::x509::AlgorithmId> infoSigAlg;
	std::shared_ptr<java::security::cert::CertificateException> cVar13;
	std::shared_ptr<unsigned char[]> originalEncodedForm;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .param p2, "originalEncodedForm"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 1653        value = {
	// 1654            Ljava/security/cert/CertificateException;,
	// 1655            Ljava/io/IOException;
	// 1656        }
	// 1657    .end annotation
	cVar0 = 0x30;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	if ( !(this->readOnly) )  
		goto label_cond_12;
	cVar4 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot over-write existing certificate")));
	// throw
	throw cVar4;
	// 1684    .line 1813
label_cond_12:
	if ( !(val->data) )  
		goto label_cond_1a;
	if ( val->tag == cVar0 )
		goto label_cond_23;
label_cond_1a:
	cVar5 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("invalid DER-encoded certificate data")));
	// throw
	throw cVar5;
	// 1706    .line 1820
label_cond_23:
	if ( !(originalEncodedForm) )  
		goto label_cond_6a;
	//    .end local p2    # "originalEncodedForm":[B
label_goto_25:
	this->signedCert = originalEncodedForm;
	seq = std::make_shared<std::vector<std::vector<sun::security::util::DerValue>>>(0x3);
	//    .local v1, "seq":[Lsun/security/util/DerValue;
	seq[cVar3] = val->data->getDerValue();
	seq[cVar2] = val->data->getDerValue();
	seq[cVar1] = val->data->getDerValue();
	if ( !(val->data->available()) )  
		goto label_cond_6f;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	cVar6 = std::make_shared<java::security::cert::CertificateParsingException>(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("signed overrun, bytes = ")))->append(val->data->available())->toString());
	// throw
	throw cVar6;
	// 1790    .line 1821
	// 1791    .end local v1    # "seq":[Lsun/security/util/DerValue;
	// 1792    .restart local p2    # "originalEncodedForm":[B
label_cond_6a:
	originalEncodedForm = val->toByteArray();
	goto label_goto_25;
	// 1800    .line 1832
	// 1801    .end local p2    # "originalEncodedForm":[B
	// 1802    .restart local v1    # "seq":[Lsun/security/util/DerValue;
label_cond_6f:
	if ( seq[cVar3]->tag == cVar0 )
		goto label_cond_7e;
	cVar9 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("signed fields invalid")));
	// throw
	throw cVar9;
	// 1819    .line 1836
label_cond_7e:
	this->algId = sun::security::x509::AlgorithmId::parse(seq[cVar2]);
	this->signature = seq[cVar1]->getBitString();
	if ( !(seq[cVar2]->data->available()) )  
		goto label_cond_a1;
	cVar10 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("algid field overrun")));
	// throw
	throw cVar10;
	// 1858    .line 1842
label_cond_a1:
	if ( !(seq[cVar1]->data->available()) )  
		goto label_cond_b4;
	cVar11 = std::make_shared<java::security::cert::CertificateParsingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("signed fields overrun")));
	// throw
	throw cVar11;
	// 1879    .line 1846
label_cond_b4:
	cVar12 = std::make_shared<sun::security::x509::X509CertInfo>(seq[cVar3]);
	this->info = cVar12;
	infoSigAlg = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("algorithmID.algorithm")));
	infoSigAlg->checkCast("sun::security::x509::AlgorithmId");
	//    .local v0, "infoSigAlg":Lsun/security/x509/AlgorithmId;
	if ( this->algId->equals(infoSigAlg) )     
		goto label_cond_d9;
	cVar13 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature algorithm mismatch")));
	// throw
	throw cVar13;
	// 1921    .line 1855
label_cond_d9:
	this->readOnly = cVar2;
	return;

}
// .method public static toImpl(Ljava/security/cert/X509Certificate;)Lsun/security/x509/X509CertImpl;
std::shared_ptr<sun::security::x509::X509CertImpl> sun::security::x509::X509CertImpl::toImpl(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1933        value = {
	// 1934            Ljava/security/cert/CertificateException;
	// 1935        }
	// 1936    .end annotation
	if ( !(cert->instanceOf("sun::security::x509::X509CertImpl")) )  
		goto label_cond_7;
	cert->checkCast("sun::security::x509::X509CertImpl");
	//    .end local p0    # "cert":Ljava/security/cert/X509Certificate;
	return cert;
	// 1950    .line 1935
	// 1951    .restart local p0    # "cert":Ljava/security/cert/X509Certificate;
label_cond_7:
	return sun::security::provider::X509Factory::intern(cert);

}
// .method public static verify(Ljava/security/cert/X509Certificate;Ljava/security/PublicKey;Ljava/security/Provider;)V
void sun::security::x509::X509CertImpl::verify(std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::security::Provider> sigProvider)
{
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p1, "key"    # Ljava/security/PublicKey;
	//    .param p2, "sigProvider"    # Ljava/security/Provider;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1966        value = {
	// 1967            Ljava/security/cert/CertificateException;,
	// 1968            Ljava/security/NoSuchAlgorithmException;,
	// 1969            Ljava/security/InvalidKeyException;,
	// 1970            Ljava/security/SignatureException;
	// 1971        }
	// 1972    .end annotation
	cert->verify(key, sigProvider);
	return;

}
// .method public checkValidity()V
void sun::security::x509::X509CertImpl::checkValidity()
{
	
	std::shared_ptr<java::util::Date> date;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1987        value = {
	// 1988            Ljava/security/cert/CertificateExpiredException;,
	// 1989            Ljava/security/cert/CertificateNotYetValidException;
	// 1990        }
	// 1991    .end annotation
	date = std::make_shared<java::util::Date>();
	//    .local v0, "date":Ljava/util/Date;
	this->checkValidity(date);
	return;

}
// .method public checkValidity(Ljava/util/Date;)V
void sun::security::x509::X509CertImpl::checkValidity(std::shared_ptr<java::util::Date> date)
{
	
	std::shared_ptr<java::security::cert::CertificateNotYetValidException> cVar1;
	std::shared_ptr<sun::security::x509::CertificateValidity> interval;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::cert::CertificateNotYetValidException> cVar0;
	
	//    .param p1, "date"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2011        value = {
	// 2012            Ljava/security/cert/CertificateExpiredException;,
	// 2013            Ljava/security/cert/CertificateNotYetValidException;
	// 2014        }
	// 2015    .end annotation
	0x0;
	//    .local v1, "interval":Lsun/security/x509/CertificateValidity;
	try {
	//label_try_start_1:
	interval = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("validity")));
	//    .end local v1    # "interval":Lsun/security/x509/CertificateValidity;
	interval->checkCast("sun::security::x509::CertificateValidity");
	//label_try_end_c:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_c} :catch_17
	//    .local v1, "interval":Lsun/security/x509/CertificateValidity;
	if ( interval )     
		goto label_cond_21;
	cVar0 = std::make_shared<java::security::cert::CertificateNotYetValidException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null validity period")));
	// throw
	throw cVar0;
	// 2050    .line 641
	// 2051    .end local v1    # "interval":Lsun/security/x509/CertificateValidity;
label_catch_17:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	cVar1 = std::make_shared<java::security::cert::CertificateNotYetValidException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Incorrect validity period")));
	// throw
	throw cVar1;
	// 2065    .line 646
	// 2066    .end local v0    # "e":Ljava/lang/Exception;
	// 2067    .restart local v1    # "interval":Lsun/security/x509/CertificateValidity;
label_cond_21:
	interval->valid(date);
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::X509CertImpl::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::x509::X509CertInfo> cVar0;
	std::shared_ptr<java::security::cert::CertificateException> cVar1;
	std::shared_ptr<sun::security::x509::X509AttributeName> attr;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<java::security::cert::CertificateException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::security::cert::CertificateException> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2079        value = {
	// 2080            Ljava/security/cert/CertificateException;,
	// 2081            Ljava/io/IOException;
	// 2082        }
	// 2083    .end annotation
	cVar0 = 0x0;
	if ( !(this->readOnly) )  
		goto label_cond_e;
	cVar1 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot over-write existing certificate")));
	// throw
	throw cVar1;
	// 2102    .line 760
label_cond_e:
	attr = std::make_shared<sun::security::x509::X509AttributeName>(name);
	//    .local v0, "attr":Lsun/security/x509/X509AttributeName;
	id = attr->getPrefix();
	//    .local v2, "id":Ljava/lang/String;
	if ( id->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509"))) )     
		goto label_cond_3a;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertificateException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid root of attribute name, expected [x509], received ")))->append(id)->toString());
	// throw
	throw cVar2;
	// 2149    .line 767
label_cond_3a:
	attr = std::make_shared<sun::security::x509::X509AttributeName>(attr->getSuffix());
	//    .end local v0    # "attr":Lsun/security/x509/X509AttributeName;
	//    .local v1, "attr":Lsun/security/x509/X509AttributeName;
	id = attr->getPrefix();
	if ( !(id->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("info")))) )  
		goto label_cond_63;
	if ( !(attr->getSuffix()) )  
		goto label_cond_59;
	this->info = cVar0;
label_goto_58:
	return;
	// 2189    .line 774
label_cond_59:
	this->info->delete(attr->getSuffix());
	goto label_goto_58;
	// 2201    .line 776
label_cond_63:
	if ( !(id->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("algorithm")))) )  
		goto label_cond_6f;
	this->algId = cVar0;
	goto label_goto_58;
	// 2216    .line 778
label_cond_6f:
	if ( !(id->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("signature")))) )  
		goto label_cond_7b;
	this->signature = cVar0;
	goto label_goto_58;
	// 2231    .line 780
label_cond_7b:
	if ( !(id->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("signed_cert")))) )  
		goto label_cond_87;
	this->signedCert = cVar0;
	goto label_goto_58;
	// 2246    .line 783
label_cond_87:
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::security::cert::CertificateException>(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized or delete() not allowed for the same: ")))->append(id)->toString());
	// throw
	throw cVar4;

}
// .method public derEncode(Ljava/io/OutputStream;)V
void sun::security::x509::X509CertImpl::derEncode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<unsigned char[]> cVar1;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2277        value = {
	// 2278            Ljava/io/IOException;
	// 2279        }
	// 2280    .end annotation
	if ( this->signedCert )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null certificate to encode")));
	// throw
	throw cVar0;
	// 2297    .line 362
label_cond_d:
	cVar1 = this->signedCert->clone();
	cVar1->checkCast("unsigned char[]");
	out->write(cVar1);
	return;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::X509CertImpl::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar0;
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar2;
	std::shared_ptr<unsigned char[]> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2317        value = {
	// 2318            Ljava/security/cert/CertificateEncodingException;
	// 2319        }
	// 2320    .end annotation
	if ( this->signedCert )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CertificateEncodingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null certificate to encode")));
	// throw
	throw cVar0;
	// 2339    .line 345
label_cond_d:
	try {
	//label_try_start_d:
	cVar1 = this->signedCert->clone();
	cVar1->checkCast("unsigned char[]");
	out->write(cVar1);
	//label_try_end_18:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/io/IOException; {:try_start_d .. :try_end_18} :catch_19
	return;
	// 2357    .line 346
label_catch_19:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar2 = std::make_shared<java::security::cert::CertificateEncodingException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar2;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::X509CertImpl::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<sun::security::x509::X509AttributeName> attr;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar4;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::cert::CertificateParsingException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2378        value = {
	// 2379            Ljava/security/cert/CertificateParsingException;
	// 2380        }
	// 2381    .end annotation
	cVar0 = 0x0;
	attr = std::make_shared<sun::security::x509::X509AttributeName>(name);
	//    .local v0, "attr":Lsun/security/x509/X509AttributeName;
	id = attr->getPrefix();
	//    .local v4, "id":Ljava/lang/String;
	if ( id->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509"))) )     
		goto label_cond_34;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::security::cert::CertificateParsingException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid root of attribute name, expected [x509], received [")))->append(id)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString());
	// throw
	throw cVar1;
	// 2440    .line 668
label_cond_34:
	attr = std::make_shared<sun::security::x509::X509AttributeName>(attr->getSuffix());
	//    .end local v0    # "attr":Lsun/security/x509/X509AttributeName;
	//    .local v1, "attr":Lsun/security/x509/X509AttributeName;
	id = attr->getPrefix();
	if ( !(id->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("info")))) )  
		goto label_cond_79;
	if ( this->info )     
		goto label_cond_4f;
	return cVar0;
	// 2474    .line 675
label_cond_4f:
	if ( !(attr->getSuffix()) )  
		goto label_cond_76;
	try {
	//label_try_start_55:
	//label_try_end_5e:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6b;
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_60;
	}
	//    .catch Ljava/io/IOException; {:try_start_55 .. :try_end_5e} :catch_6b
	//    .catch Ljava/security/cert/CertificateException; {:try_start_55 .. :try_end_5e} :catch_60
	return this->info->get(attr->getSuffix());
	// 2499    .line 680
label_catch_60:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/security/cert/CertificateException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar3 = std::make_shared<java::security::cert::CertificateParsingException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar3;
	// 2515    .line 678
	// 2516    .end local v3    # "e":Ljava/security/cert/CertificateException;
label_catch_6b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/io/IOException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar4 = std::make_shared<java::security::cert::CertificateParsingException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar4;
	// 2532    .line 684
	// 2533    .end local v2    # "e":Ljava/io/IOException;
label_cond_76:
	return this->info;
	// 2539    .line 686
label_cond_79:
	if ( !(id->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("algorithm")))) )  
		goto label_cond_85;
	return this->algId;
	// 2554    .line 688
label_cond_85:
	if ( !(id->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("signature")))) )  
		goto label_cond_9a;
	if ( !(this->signature) )  
		goto label_cond_99;
	return this->signature->clone();
	// 2578    .line 692
label_cond_99:
	return cVar0;
	// 2582    .line 693
label_cond_9a:
	if ( !(id->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("signed_cert")))) )  
		goto label_cond_af;
	if ( !(this->signedCert) )  
		goto label_cond_ae;
	return this->signedCert->clone();
	// 2606    .line 697
label_cond_ae:
	return cVar0;
	// 2610    .line 699
label_cond_af:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::security::cert::CertificateParsingException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized or get() not allowed for the same: ")))->append(id)->toString());
	// throw
	throw cVar5;

}
// .method public getAuthKeyId()Lsun/security/x509/KeyIdentifier;
std::shared_ptr<sun::security::x509::KeyIdentifier> sun::security::x509::X509CertImpl::getAuthKeyId()
{
	
	std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> aki;
	std::shared_ptr<sun::security::x509::KeyIdentifier> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	aki = this->getAuthorityKeyIdentifierExtension();
	//    .local v0, "aki":Lsun/security/x509/AuthorityKeyIdentifierExtension;
	if ( !(aki) )  
		goto label_cond_12;
	try {
	//label_try_start_7:
	cVar0 = aki->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")));
	cVar0->checkCast("sun::security::x509::KeyIdentifier");
	//label_try_end_10:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_11;
	}
	//    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_10} :catch_11
	return cVar0;
	// 2667    .line 1121
label_catch_11:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_12:
	return 0x0;

}
// .method public getAuthorityInfoAccessExtension()Lsun/security/x509/AuthorityInfoAccessExtension;
std::shared_ptr<sun::security::x509::AuthorityInfoAccessExtension> sun::security::x509::X509CertImpl::getAuthorityInfoAccessExtension()
{
	
	std::shared_ptr<sun::security::x509::AuthorityInfoAccessExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::AuthInfoAccess_Id);
	cVar0->checkCast("sun::security::x509::AuthorityInfoAccessExtension");
	return cVar0;

}
// .method public getAuthorityKeyIdentifierExtension()Lsun/security/x509/AuthorityKeyIdentifierExtension;
std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> sun::security::x509::X509CertImpl::getAuthorityKeyIdentifierExtension()
{
	
	std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::AuthorityKey_Id);
	cVar0->checkCast("sun::security::x509::AuthorityKeyIdentifierExtension");
	return cVar0;

}
// .method public getBasicConstraints()I
int sun::security::x509::X509CertImpl::getBasicConstraints()
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> extAlias;
	std::shared_ptr<sun::security::x509::BasicConstraintsExtension> certExt;
	std::shared_ptr<java::lang::Boolean> cVar1;
	std::shared_ptr<java::lang::Integer> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = -0x1;
	try {
	//label_try_start_1:
	extAlias = sun::security::x509::OIDMap::getName(sun::security::x509::PKIXExtensions::BasicConstraints_Id);
	//    .local v2, "extAlias":Ljava/lang/String;
	if ( extAlias )     
		goto label_cond_a;
	return cVar0;
	// 2731    .line 1535
label_cond_a:
	certExt = this->get(extAlias);
	certExt->checkCast("sun::security::x509::BasicConstraintsExtension");
	//    .local v0, "certExt":Lsun/security/x509/BasicConstraintsExtension;
	if ( certExt )     
		goto label_cond_13;
	return cVar0;
	// 2746    .line 1539
label_cond_13:
	cVar1 = certExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("is_ca")));
	cVar1->checkCast("java::lang::Boolean");
	if ( !(cVar1->booleanValue()) )  
		goto label_cond_30;
	cVar2 = certExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("path_len")));
	cVar2->checkCast("java::lang::Integer");
	//label_try_end_2e:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_31;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_2e} :catch_31
	return cVar2->intValue();
	// 2780    .line 1544
label_cond_30:
	return cVar0;
	// 2784    .line 1545
	// 2785    .end local v0    # "certExt":Lsun/security/x509/BasicConstraintsExtension;
	// 2786    .end local v2    # "extAlias":Ljava/lang/String;
label_catch_31:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getBasicConstraintsExtension()Lsun/security/x509/BasicConstraintsExtension;
std::shared_ptr<sun::security::x509::BasicConstraintsExtension> sun::security::x509::X509CertImpl::getBasicConstraintsExtension()
{
	
	std::shared_ptr<sun::security::x509::BasicConstraintsExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::BasicConstraints_Id);
	cVar0->checkCast("sun::security::x509::BasicConstraintsExtension");
	return cVar0;

}
// .method public getCRLDistributionPointsExtension()Lsun/security/x509/CRLDistributionPointsExtension;
std::shared_ptr<sun::security::x509::CRLDistributionPointsExtension> sun::security::x509::X509CertImpl::getCRLDistributionPointsExtension()
{
	
	std::shared_ptr<sun::security::x509::CRLDistributionPointsExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::CRLDistributionPoints_Id);
	cVar0->checkCast("sun::security::x509::CRLDistributionPointsExtension");
	return cVar0;

}
// .method public getCertificatePoliciesExtension()Lsun/security/x509/CertificatePoliciesExtension;
std::shared_ptr<sun::security::x509::CertificatePoliciesExtension> sun::security::x509::X509CertImpl::getCertificatePoliciesExtension()
{
	
	std::shared_ptr<sun::security::x509::CertificatePoliciesExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::CertificatePolicies_Id);
	cVar0->checkCast("sun::security::x509::CertificatePoliciesExtension");
	return cVar0;

}
// .method public getCriticalExtensionOIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::x509::X509CertImpl::getCriticalExtensionOIDs()
{
	
	std::shared_ptr<java::util::Set> cVar0;
	std::shared_ptr<sun::security::x509::CertificateExtensions> exts;
	std::shared_ptr<java::util::TreeSet> extSet;
	std::shared_ptr<java::util::Iterator> ex_S_iterator;
	std::shared_ptr<sun::security::x509::Extension> ex;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2849        value = {
	// 2850            "()",
	// 2851            "Ljava/util/Set",
	// 2852            "<",
	// 2853            "Ljava/lang/String;",
	// 2854            ">;"
	// 2855        }
	// 2856    .end annotation
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 2869    .line 1291
label_cond_6:
	try {
	//label_try_start_6:
	exts = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("extensions")));
	exts->checkCast("sun::security::x509::CertificateExtensions");
	//    .local v4, "exts":Lsun/security/x509/CertificateExtensions;
	if ( exts )     
		goto label_cond_14;
	return cVar0;
	// 2891    .line 1296
label_cond_14:
	extSet = std::make_shared<java::util::TreeSet>();
	//    .local v3, "extSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	ex_S_iterator = exts->getAllExtensions()->iterator();
	//    .local v2, "ex$iterator":Ljava/util/Iterator;
label_cond_21:
label_goto_21:
	if ( !(ex_S_iterator->hasNext()) )  
		goto label_cond_41;
	ex = ex_S_iterator->next();
	ex->checkCast("sun::security::x509::Extension");
	//    .local v1, "ex":Lsun/security/x509/Extension;
	if ( !(ex->isCritical()) )  
		goto label_cond_21;
	extSet->add(ex->getExtensionId()->toString());
	//label_try_end_3e:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3f;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_3e} :catch_3f
	goto label_goto_21;
	// 2945    .line 1303
	// 2946    .end local v1    # "ex":Lsun/security/x509/Extension;
	// 2947    .end local v2    # "ex$iterator":Ljava/util/Iterator;
	// 2948    .end local v3    # "extSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2949    .end local v4    # "exts":Lsun/security/x509/CertificateExtensions;
label_catch_3f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar0;
	// 2957    .line 1302
	// 2958    .end local v0    # "e":Ljava/lang/Exception;
	// 2959    .restart local v2    # "ex$iterator":Ljava/util/Iterator;
	// 2960    .restart local v3    # "extSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 2961    .restart local v4    # "exts":Lsun/security/x509/CertificateExtensions;
label_cond_41:
	return extSet;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::X509CertImpl::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2969        value = {
	// 2970            "()",
	// 2971            "Ljava/util/Enumeration",
	// 2972            "<",
	// 2973            "Ljava/lang/String;",
	// 2974            ">;"
	// 2975        }
	// 2976    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.info")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.algorithm")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.signature")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509.signed_cert")));
	return elements->elements();

}
// .method public getEncoded()[B
unsigned char sun::security::x509::X509CertImpl::getEncoded()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3016        value = {
	// 3017            Ljava/security/cert/CertificateEncodingException;
	// 3018        }
	// 3019    .end annotation
	cVar0 = this->getEncodedInternal()->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public getEncodedInternal()[B
unsigned char sun::security::x509::X509CertImpl::getEncodedInternal()
{
	
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 3039        value = {
	// 3040            Ljava/security/cert/CertificateEncodingException;
	// 3041        }
	// 3042    .end annotation
	if ( this->signedCert )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::cert::CertificateEncodingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Null certificate to encode")));
	// throw
	throw cVar0;
	// 3061    .line 387
label_cond_d:
	return this->signedCert;

}
// .method public declared-synchronized getExtendedKeyUsage()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> sun::security::x509::X509CertImpl::getExtendedKeyUsage()
{
	
	std::shared_ptr<sun::security::x509::ExtendedKeyUsageExtension> ext;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3071        value = {
	// 3072            "()",
	// 3073            "Ljava/util/List",
	// 3074            "<",
	// 3075            "Ljava/lang/String;",
	// 3076            ">;"
	// 3077        }
	// 3078    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 3081        value = {
	// 3082            Ljava/security/cert/CertificateParsingException;
	// 3083        }
	// 3084    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_2:
	if ( !(this->readOnly) )  
		goto label_cond_e;
	if ( !(this->extKeyUsage) )  
		goto label_cond_e;
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_24;
	}
	//    .catchall {:try_start_2 .. :try_end_c} :catchall_24
	this->monitor_exit();
	return this->extKeyUsage;
	// 3110    .line 1491
label_cond_e:
	try {
	//label_try_start_e:
	//label_try_end_11:
	}
	catch (...){
		goto label_catchall_24;
	}
	//    .catchall {:try_start_e .. :try_end_11} :catchall_24
	ext = this->getExtendedKeyUsageExtension();
	//    .local v0, "ext":Lsun/security/x509/ExtendedKeyUsageExtension;
	if ( ext )     
		goto label_cond_16;
	this->monitor_exit();
	return 0x0;
	// 3128    .line 1496
label_cond_16:
	try {
	//label_try_start_16:
	this->extKeyUsage = java::util::Collections::unmodifiableList(ext->getExtendedKeyUsage());
	//label_try_end_22:
	}
	catch (...){
		goto label_catchall_24;
	}
	//    .catchall {:try_start_16 .. :try_end_22} :catchall_24
	this->monitor_exit();
	return this->extKeyUsage;
	// 3151    .end local v0    # "ext":Lsun/security/x509/ExtendedKeyUsageExtension;
label_catchall_24:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public getExtendedKeyUsageExtension()Lsun/security/x509/ExtendedKeyUsageExtension;
std::shared_ptr<sun::security::x509::ExtendedKeyUsageExtension> sun::security::x509::X509CertImpl::getExtendedKeyUsageExtension()
{
	
	std::shared_ptr<sun::security::x509::ExtendedKeyUsageExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::ExtendedKeyUsage_Id);
	cVar0->checkCast("sun::security::x509::ExtendedKeyUsageExtension");
	return cVar0;

}
// .method public getExtension(Lsun/security/util/ObjectIdentifier;)Lsun/security/x509/Extension;
std::shared_ptr<sun::security::x509::Extension> sun::security::x509::X509CertImpl::getExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	std::shared_ptr<sun::security::x509::Extension> cVar0;
	std::shared_ptr<sun::security::x509::CertificateExtensions> extensions;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::x509::Extension> ex;
	std::shared_ptr<java::util::Iterator> ex2_S_iterator;
	std::shared_ptr<sun::security::x509::Extension> ex2;
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 3192    .line 1353
label_cond_6:
	try {
	//label_try_start_6:
	extensions = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("extensions")));
	extensions->checkCast("sun::security::x509::CertificateExtensions");
	//label_try_end_11:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_14;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_41;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_6 .. :try_end_11} :catch_14
	//    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_11} :catch_41
	//    .local v4, "extensions":Lsun/security/x509/CertificateExtensions;
	if ( extensions )     
		goto label_cond_16;
	return cVar0;
	// 3215    .line 1354
	// 3216    .end local v4    # "extensions":Lsun/security/x509/CertificateExtensions;
label_catch_14:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ce":Ljava/security/cert/CertificateException;
	return cVar0;
	// 3224    .line 1360
	// 3225    .end local v0    # "ce":Ljava/security/cert/CertificateException;
	// 3226    .restart local v4    # "extensions":Lsun/security/x509/CertificateExtensions;
label_cond_16:
	try {
	//label_try_start_16:
	ex = extensions->getExtension(oid->toString());
	//    .local v1, "ex":Lsun/security/x509/Extension;
	if ( !(ex) )  
		goto label_cond_21;
	return ex;
	// 3244    .line 1364
label_cond_21:
	ex2_S_iterator = extensions->getAllExtensions()->iterator();
	//    .local v3, "ex2$iterator":Ljava/util/Iterator;
label_cond_29:
	if ( !(ex2_S_iterator->hasNext()) )  
		goto label_cond_40;
	ex2 = ex2_S_iterator->next();
	ex2->checkCast("sun::security::x509::Extension");
	//    .local v2, "ex2":Lsun/security/x509/Extension;
	//label_try_end_3c:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_41;
	}
	//    .catch Ljava/io/IOException; {:try_start_16 .. :try_end_3c} :catch_41
	if ( !(ex2->getExtensionId()->equals(oid)) )  
		goto label_cond_29;
	return ex2;
	// 3285    .line 1371
	// 3286    .end local v2    # "ex2":Lsun/security/x509/Extension;
label_cond_40:
	return cVar0;
	// 3290    .line 1373
	// 3291    .end local v1    # "ex":Lsun/security/x509/Extension;
	// 3292    .end local v3    # "ex2$iterator":Ljava/util/Iterator;
	// 3293    .end local v4    # "extensions":Lsun/security/x509/CertificateExtensions;
label_catch_41:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "ioe":Ljava/io/IOException;
	return cVar0;

}
// .method public getExtensionValue(Ljava/lang/String;)[B
unsigned char sun::security::x509::X509CertImpl::getExtensionValue(std::shared_ptr<java::lang::String> oid)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<sun::security::util::ObjectIdentifier> findOID;
	std::shared_ptr<java::lang::String> extAlias;
	std::shared_ptr<sun::security::x509::Extension> certExt;
	std::shared_ptr<sun::security::x509::CertificateExtensions> exts;
	std::shared_ptr<java::util::Iterator> ex_S_iterator;
	std::shared_ptr<sun::security::x509::Extension> ex;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<unsigned char[]> extData;
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	std::shared_ptr<sun::security::x509::Extension> cVar1;
	
	//    .param p1, "oid"    # Ljava/lang/String;
	cVar0 = 0x0;
	try {
	//label_try_start_1:
	findOID = std::make_shared<sun::security::util::ObjectIdentifier>(oid);
	//    .local v9, "findOID":Lsun/security/util/ObjectIdentifier;
	extAlias = sun::security::x509::OIDMap::getName(findOID);
	//    .local v6, "extAlias":Ljava/lang/String;
	certExt = 0x0;
	//    .local v1, "certExt":Lsun/security/x509/Extension;
	exts = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("extensions")));
	exts->checkCast("sun::security::x509::CertificateExtensions");
	//    .local v8, "exts":Lsun/security/x509/CertificateExtensions;
	if ( extAlias )     
		goto label_cond_4f;
	if ( exts )     
		goto label_cond_1d;
	return cVar0;
	// 3351    .line 1419
label_cond_1d:
	ex_S_iterator = exts->getAllExtensions()->iterator();
	//    .local v5, "ex$iterator":Ljava/util/Iterator;
label_cond_25:
	if ( !(ex_S_iterator->hasNext()) )  
		goto label_cond_3c;
	ex = ex_S_iterator->next();
	ex->checkCast("sun::security::x509::Extension");
	//    .local v4, "ex":Lsun/security/x509/Extension;
	//    .local v10, "inCertOID":Lsun/security/util/ObjectIdentifier;
	if ( !(ex->getExtensionId()->equals(findOID)) )  
		goto label_cond_25;
	certExt = ex;
	//    .end local v1    # "certExt":Lsun/security/x509/Extension;
	//    .end local v4    # "ex":Lsun/security/x509/Extension;
	//    .end local v5    # "ex$iterator":Ljava/util/Iterator;
	//    .end local v10    # "inCertOID":Lsun/security/util/ObjectIdentifier;
label_cond_3c:
label_goto_3c:
	if ( certExt )     
		goto label_cond_58;
	if ( !(exts) )  
		goto label_cond_4c;
	certExt = exts->getUnparseableExtensions()->get(oid);
	certExt->checkCast("sun::security::x509::Extension");
	//label_try_end_4c:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6c;
	}
	//    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_4c} :catch_6c
label_cond_4c:
	if ( certExt )     
		goto label_cond_58;
	return cVar0;
	// 3426    .line 1428
	// 3427    .restart local v1    # "certExt":Lsun/security/x509/Extension;
label_cond_4f:
	try {
	//label_try_start_4f:
	cVar1 = this->get(extAlias);
	cVar1->checkCast("sun::security::x509::Extension");
	certExt = cVar1;
	//label_try_end_57:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6e;
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6c;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_4f .. :try_end_57} :catch_6e
	//    .catch Ljava/lang/Exception; {:try_start_4f .. :try_end_57} :catch_6c
	//    .local v1, "certExt":Lsun/security/x509/Extension;
	goto label_goto_3c;
	// 3446    .line 1441
	// 3447    .end local v1    # "certExt":Lsun/security/x509/Extension;
label_cond_58:
	try {
	//label_try_start_58:
	extData = certExt->getExtensionValue();
	//    .local v7, "extData":[B
	if ( extData )     
		goto label_cond_5f;
	return cVar0;
	// 3461    .line 1445
label_cond_5f:
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v11, "out":Lsun/security/util/DerOutputStream;
	out->putOctetString(extData);
	//label_try_end_6a:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6c;
	}
	//    .catch Ljava/lang/Exception; {:try_start_58 .. :try_end_6a} :catch_6c
	return out->toByteArray();
	// 3480    .line 1448
	// 3481    .end local v6    # "extAlias":Ljava/lang/String;
	// 3482    .end local v7    # "extData":[B
	// 3483    .end local v8    # "exts":Lsun/security/x509/CertificateExtensions;
	// 3484    .end local v9    # "findOID":Lsun/security/util/ObjectIdentifier;
	// 3485    .end local v11    # "out":Lsun/security/util/DerOutputStream;
label_catch_6c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/Exception;
	return cVar0;
	// 3493    .line 1429
	// 3494    .end local v2    # "e":Ljava/lang/Exception;
	// 3495    .local v1, "certExt":Lsun/security/x509/Extension;
	// 3496    .restart local v6    # "extAlias":Ljava/lang/String;
	// 3497    .restart local v8    # "exts":Lsun/security/x509/CertificateExtensions;
	// 3498    .restart local v9    # "findOID":Lsun/security/util/ObjectIdentifier;
label_catch_6e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/security/cert/CertificateException;
	goto label_goto_3c;

}
// .method public getIssuerAlternativeNameExtension()Lsun/security/x509/IssuerAlternativeNameExtension;
std::shared_ptr<sun::security::x509::IssuerAlternativeNameExtension> sun::security::x509::X509CertImpl::getIssuerAlternativeNameExtension()
{
	
	std::shared_ptr<sun::security::x509::IssuerAlternativeNameExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::IssuerAlternativeName_Id);
	cVar0->checkCast("sun::security::x509::IssuerAlternativeNameExtension");
	return cVar0;

}
// .method public declared-synchronized getIssuerAlternativeNames()Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> sun::security::x509::X509CertImpl::getIssuerAlternativeNames()
{
	
	std::shared_ptr<sun::security::x509::IssuerAlternativeNameExtension> issuerAltNameExt;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3526        value = {
	// 3527            "()",
	// 3528            "Ljava/util/Collection",
	// 3529            "<",
	// 3530            "Ljava/util/List",
	// 3531            "<*>;>;"
	// 3532        }
	// 3533    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 3536        value = {
	// 3537            Ljava/security/cert/CertificateParsingException;
	// 3538        }
	// 3539    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_2:
	if ( !(this->readOnly) )  
		goto label_cond_12;
	if ( !(this->issuerAlternativeNames) )  
		goto label_cond_12;
	//label_try_end_f:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_2 .. :try_end_f} :catchall_32
	this->monitor_exit();
	return sun::security::x509::X509CertImpl::cloneAltNames(this->issuerAlternativeNames);
	// 3569    .line 1718
label_cond_12:
	try {
	//label_try_start_12:
	//label_try_end_15:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_12 .. :try_end_15} :catchall_32
	issuerAltNameExt = this->getIssuerAlternativeNameExtension();
	//    .local v1, "issuerAltNameExt":Lsun/security/x509/IssuerAlternativeNameExtension;
	if ( issuerAltNameExt )     
		goto label_cond_1a;
	this->monitor_exit();
	return 0x0;
	// 3587    .line 1725
label_cond_1a:
	try {
	//label_try_start_1a:
	//label_try_end_20:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2b;
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catch Ljava/io/IOException; {:try_start_1a .. :try_end_20} :catch_2b
	//    .catchall {:try_start_1a .. :try_end_20} :catchall_32
	//    .local v2, "names":Lsun/security/x509/GeneralNames;
	try {
	//label_try_start_21:
	this->issuerAlternativeNames = sun::security::x509::X509CertImpl::makeAltNames(issuerAltNameExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer_name"))));
	//label_try_end_29:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_21 .. :try_end_29} :catchall_32
	this->monitor_exit();
	return this->issuerAlternativeNames;
	// 3618    .line 1726
	// 3619    .end local v2    # "names":Lsun/security/x509/GeneralNames;
label_catch_2b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ioe":Ljava/io/IOException;
	try {
	//label_try_start_2c:
	//label_try_end_2f:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_2c .. :try_end_2f} :catchall_32
	this->monitor_exit();
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 3636    .end local v0    # "ioe":Ljava/io/IOException;
	// 3637    .end local v1    # "issuerAltNameExt":Lsun/security/x509/IssuerAlternativeNameExtension;
label_catchall_32:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public getIssuerDN()Ljava/security/Principal;
std::shared_ptr<java::security::Principal> sun::security::x509::X509CertImpl::getIssuerDN()
{
	
	std::shared_ptr<java::security::Principal> cVar0;
	std::shared_ptr<java::security::Principal> issuer;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 3660    .line 944
label_cond_6:
	try {
	//label_try_start_6:
	issuer = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer.dname")));
	issuer->checkCast("java::security::Principal");
	//label_try_end_11:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_11} :catch_12
	//    .local v1, "issuer":Ljava/security/Principal;
	return issuer;
	// 3679    .line 947
	// 3680    .end local v1    # "issuer":Ljava/security/Principal;
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getIssuerUniqueID()[Z
bool sun::security::x509::X509CertImpl::getIssuerUniqueID()
{
	
	std::shared_ptr<bool[]> cVar0;
	std::shared_ptr<sun::security::x509::UniqueIdentity> id;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 3703    .line 1083
label_cond_6:
	try {
	//label_try_start_6:
	id = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuerID")));
	id->checkCast("sun::security::x509::UniqueIdentity");
	//    .local v1, "id":Lsun/security/x509/UniqueIdentity;
	if ( id )     
		goto label_cond_14;
	return cVar0;
	// 3725    .line 1088
label_cond_14:
	//label_try_end_17:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_17} :catch_19
	return id->getId();
	// 3735    .line 1089
	// 3736    .end local v1    # "id":Lsun/security/x509/UniqueIdentity;
label_catch_19:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getIssuerX500Principal()Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::x509::X509CertImpl::getIssuerX500Principal()
{
	
	std::shared_ptr<javax::security::auth::x500::X500Principal> cVar0;
	std::shared_ptr<javax::security::auth::x500::X500Principal> issuer;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 3759    .line 962
label_cond_6:
	try {
	//label_try_start_6:
	issuer = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("issuer.x500principal")));
	issuer->checkCast("javax::security::auth::x500::X500Principal");
	//label_try_end_11:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_11} :catch_12
	//    .local v1, "issuer":Ljavax/security/auth/x500/X500Principal;
	return issuer;
	// 3780    .line 966
	// 3781    .end local v1    # "issuer":Ljavax/security/auth/x500/X500Principal;
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getKeyUsage()[Z
bool sun::security::x509::X509CertImpl::getKeyUsage()
{
	
	std::shared_ptr<bool[]> cVar0;
	std::shared_ptr<java::lang::String> extAlias;
	std::shared_ptr<sun::security::x509::KeyUsageExtension> certExt;
	std::shared_ptr<bool[]> ret;
	std::shared<std::vector<bool[]>> usageBits;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	try {
	//label_try_start_3:
	extAlias = sun::security::x509::OIDMap::getName(sun::security::x509::PKIXExtensions::KeyUsage_Id);
	//    .local v2, "extAlias":Ljava/lang/String;
	if ( extAlias )     
		goto label_cond_c;
	return cVar0;
	// 3813    .line 1464
label_cond_c:
	certExt = this->get(extAlias);
	certExt->checkCast("sun::security::x509::KeyUsageExtension");
	//    .local v0, "certExt":Lsun/security/x509/KeyUsageExtension;
	if ( certExt )     
		goto label_cond_15;
	return cVar0;
	// 3828    .line 1468
label_cond_15:
	ret = certExt->getBits();
	//    .local v3, "ret":[Z
	if ( ret->size() >= 0x9 )
		goto label_cond_27;
	usageBits = std::make_shared<std::vector<bool[]>>(0x9);
	//    .local v4, "usageBits":[Z
	java::lang::System::arraycopy(ret, 0x0, usageBits, 0x0, ret->size());
	//label_try_end_26:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_28;
	}
	//    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_26} :catch_28
	//    .end local v4    # "usageBits":[Z
label_cond_27:
	return ret;
	// 3865    .line 1475
	// 3866    .end local v0    # "certExt":Lsun/security/x509/KeyUsageExtension;
	// 3867    .end local v2    # "extAlias":Ljava/lang/String;
	// 3868    .end local v3    # "ret":[Z
label_catch_28:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509CertImpl::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("x509"));

}
// .method public getNameConstraintsExtension()Lsun/security/x509/NameConstraintsExtension;
std::shared_ptr<sun::security::x509::NameConstraintsExtension> sun::security::x509::X509CertImpl::getNameConstraintsExtension()
{
	
	std::shared_ptr<sun::security::x509::NameConstraintsExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::NameConstraints_Id);
	cVar0->checkCast("sun::security::x509::NameConstraintsExtension");
	return cVar0;

}
// .method public getNonCriticalExtensionOIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::x509::X509CertImpl::getNonCriticalExtensionOIDs()
{
	
	std::shared_ptr<java::util::Set> cVar0;
	std::shared_ptr<sun::security::x509::CertificateExtensions> exts;
	std::shared_ptr<java::util::TreeSet> extSet;
	std::shared_ptr<java::util::Iterator> ex_S_iterator;
	std::shared_ptr<sun::security::x509::Extension> ex;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 3907        value = {
	// 3908            "()",
	// 3909            "Ljava/util/Set",
	// 3910            "<",
	// 3911            "Ljava/lang/String;",
	// 3912            ">;"
	// 3913        }
	// 3914    .end annotation
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 3927    .line 1321
label_cond_6:
	try {
	//label_try_start_6:
	exts = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("extensions")));
	exts->checkCast("sun::security::x509::CertificateExtensions");
	//    .local v4, "exts":Lsun/security/x509/CertificateExtensions;
	if ( exts )     
		goto label_cond_14;
	return cVar0;
	// 3949    .line 1326
label_cond_14:
	extSet = std::make_shared<java::util::TreeSet>();
	//    .local v3, "extSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	ex_S_iterator = exts->getAllExtensions()->iterator();
	//    .local v2, "ex$iterator":Ljava/util/Iterator;
label_cond_21:
label_goto_21:
	if ( !(ex_S_iterator->hasNext()) )  
		goto label_cond_41;
	ex = ex_S_iterator->next();
	ex->checkCast("sun::security::x509::Extension");
	//    .local v1, "ex":Lsun/security/x509/Extension;
	if ( ex->isCritical() )     
		goto label_cond_21;
	extSet->add(ex->getExtensionId()->toString());
	goto label_goto_21;
	// 4001    .line 1334
	// 4002    .end local v1    # "ex":Lsun/security/x509/Extension;
	// 4003    .end local v2    # "ex$iterator":Ljava/util/Iterator;
	// 4004    .end local v3    # "extSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 4005    .end local v4    # "exts":Lsun/security/x509/CertificateExtensions;
label_catch_3f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar0;
	// 4013    .line 1332
	// 4014    .end local v0    # "e":Ljava/lang/Exception;
	// 4015    .restart local v2    # "ex$iterator":Ljava/util/Iterator;
	// 4016    .restart local v3    # "extSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 4017    .restart local v4    # "exts":Lsun/security/x509/CertificateExtensions;
label_cond_41:
	extSet->addAll(exts->getUnparseableExtensions()->keySet());
	//label_try_end_4c:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3f;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_4c} :catch_3f
	return extSet;

}
// .method public getNotAfter()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::x509::X509CertImpl::getNotAfter()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	std::shared_ptr<java::util::Date> d;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 4049    .line 997
label_cond_6:
	try {
	//label_try_start_6:
	d = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("validity.notAfter")));
	d->checkCast("java::util::Date");
	//label_try_end_11:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_11} :catch_12
	//    .local v0, "d":Ljava/util/Date;
	return d;
	// 4068    .line 1000
	// 4069    .end local v0    # "d":Ljava/util/Date;
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getNotBefore()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::x509::X509CertImpl::getNotBefore()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	std::shared_ptr<java::util::Date> d;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 4092    .line 980
label_cond_6:
	try {
	//label_try_start_6:
	d = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("validity.notBefore")));
	d->checkCast("java::util::Date");
	//label_try_end_11:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_11} :catch_12
	//    .local v0, "d":Ljava/util/Date;
	return d;
	// 4111    .line 983
	// 4112    .end local v0    # "d":Ljava/util/Date;
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getPolicyConstraintsExtension()Lsun/security/x509/PolicyConstraintsExtension;
std::shared_ptr<sun::security::x509::PolicyConstraintsExtension> sun::security::x509::X509CertImpl::getPolicyConstraintsExtension()
{
	
	std::shared_ptr<sun::security::x509::PolicyConstraintsExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::PolicyConstraints_Id);
	cVar0->checkCast("sun::security::x509::PolicyConstraintsExtension");
	return cVar0;

}
// .method public getPolicyMappingsExtension()Lsun/security/x509/PolicyMappingsExtension;
std::shared_ptr<sun::security::x509::PolicyMappingsExtension> sun::security::x509::X509CertImpl::getPolicyMappingsExtension()
{
	
	std::shared_ptr<sun::security::x509::PolicyMappingsExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::PolicyMappings_Id);
	cVar0->checkCast("sun::security::x509::PolicyMappingsExtension");
	return cVar0;

}
// .method public getPrivateKeyUsageExtension()Lsun/security/x509/PrivateKeyUsageExtension;
std::shared_ptr<sun::security::x509::PrivateKeyUsageExtension> sun::security::x509::X509CertImpl::getPrivateKeyUsageExtension()
{
	
	std::shared_ptr<sun::security::x509::PrivateKeyUsageExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::PrivateKeyUsage_Id);
	cVar0->checkCast("sun::security::x509::PrivateKeyUsageExtension");
	return cVar0;

}
// .method public getPublicKey()Ljava/security/PublicKey;
std::shared_ptr<java::security::PublicKey> sun::security::x509::X509CertImpl::getPublicKey()
{
	
	std::shared_ptr<java::security::PublicKey> cVar0;
	std::shared_ptr<java::security::PublicKey> key;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 4186    .line 843
label_cond_6:
	try {
	//label_try_start_6:
	key = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("key.value")));
	key->checkCast("java::security::PublicKey");
	//label_try_end_11:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_11} :catch_12
	//    .local v1, "key":Ljava/security/PublicKey;
	return key;
	// 4205    .line 846
	// 4206    .end local v1    # "key":Ljava/security/PublicKey;
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getSerialNumber()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::x509::X509CertImpl::getSerialNumber()
{
	
	std::shared_ptr<java::math::BigInteger> cVar1;
	std::shared_ptr<sun::security::x509::SerialNumber> ser;
	
	cVar1 = 0x0;
	ser = this->getSerialNumberObject();
	//    .local v0, "ser":Lsun/security/x509/SerialNumber;
	if ( !(ser) )  
		goto label_cond_b;
	cVar1 = ser->getNumber();
label_cond_b:
	return cVar1;

}
// .method public getSerialNumberObject()Lsun/security/x509/SerialNumber;
std::shared_ptr<sun::security::x509::SerialNumber> sun::security::x509::X509CertImpl::getSerialNumberObject()
{
	
	std::shared_ptr<sun::security::x509::SerialNumber> cVar0;
	std::shared_ptr<sun::security::x509::SerialNumber> ser;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 4252    .line 889
label_cond_6:
	try {
	//label_try_start_6:
	ser = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("serialNumber.number")));
	ser->checkCast("sun::security::x509::SerialNumber");
	//label_try_end_11:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_11} :catch_12
	//    .local v1, "ser":Lsun/security/x509/SerialNumber;
	return ser;
	// 4273    .line 893
	// 4274    .end local v1    # "ser":Lsun/security/x509/SerialNumber;
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getSigAlgName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509CertImpl::getSigAlgName()
{
	
	if ( this->algId )     
		goto label_cond_6;
	return 0x0;
	// 4297    .line 1041
label_cond_6:
	return this->algId->getName();

}
// .method public getSigAlgOID()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509CertImpl::getSigAlgOID()
{
	
	if ( this->algId )     
		goto label_cond_6;
	return 0x0;
	// 4322    .line 1053
label_cond_6:
	//    .local v0, "oid":Lsun/security/util/ObjectIdentifier;
	return this->algId->getOID()->toString();

}
// .method public getSigAlgParams()[B
unsigned char sun::security::x509::X509CertImpl::getSigAlgParams()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->algId )     
		goto label_cond_6;
	return cVar0;
	// 4353    .line 1068
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
	return this->algId->getEncodedParams();
	// 4366    .line 1069
label_catch_d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	return cVar0;

}
// .method public getSignature()[B
unsigned char sun::security::x509::X509CertImpl::getSignature()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	if ( this->signature )     
		goto label_cond_6;
	return 0x0;
	// 4389    .line 1028
label_cond_6:
	cVar0 = this->signature->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public getSubjectAlternativeNameExtension()Lsun/security/x509/SubjectAlternativeNameExtension;
std::shared_ptr<sun::security::x509::SubjectAlternativeNameExtension> sun::security::x509::X509CertImpl::getSubjectAlternativeNameExtension()
{
	
	std::shared_ptr<sun::security::x509::SubjectAlternativeNameExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::SubjectAlternativeName_Id);
	cVar0->checkCast("sun::security::x509::SubjectAlternativeNameExtension");
	return cVar0;

}
// .method public declared-synchronized getSubjectAlternativeNames()Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> sun::security::x509::X509CertImpl::getSubjectAlternativeNames()
{
	
	std::shared_ptr<sun::security::x509::SubjectAlternativeNameExtension> subjectAltNameExt;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 4422        value = {
	// 4423            "()",
	// 4424            "Ljava/util/Collection",
	// 4425            "<",
	// 4426            "Ljava/util/List",
	// 4427            "<*>;>;"
	// 4428        }
	// 4429    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 4432        value = {
	// 4433            Ljava/security/cert/CertificateParsingException;
	// 4434        }
	// 4435    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_2:
	if ( !(this->readOnly) )  
		goto label_cond_12;
	if ( !(this->subjectAlternativeNames) )  
		goto label_cond_12;
	//label_try_end_f:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_2 .. :try_end_f} :catchall_32
	this->monitor_exit();
	return sun::security::x509::X509CertImpl::cloneAltNames(this->subjectAlternativeNames);
	// 4465    .line 1655
label_cond_12:
	try {
	//label_try_start_12:
	//label_try_end_15:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_12 .. :try_end_15} :catchall_32
	subjectAltNameExt = this->getSubjectAlternativeNameExtension();
	//    .local v2, "subjectAltNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
	if ( subjectAltNameExt )     
		goto label_cond_1a;
	this->monitor_exit();
	return 0x0;
	// 4483    .line 1662
label_cond_1a:
	try {
	//label_try_start_1a:
	//label_try_end_20:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2b;
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catch Ljava/io/IOException; {:try_start_1a .. :try_end_20} :catch_2b
	//    .catchall {:try_start_1a .. :try_end_20} :catchall_32
	//    .local v1, "names":Lsun/security/x509/GeneralNames;
	try {
	//label_try_start_21:
	this->subjectAlternativeNames = sun::security::x509::X509CertImpl::makeAltNames(subjectAltNameExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject_name"))));
	//label_try_end_29:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_21 .. :try_end_29} :catchall_32
	this->monitor_exit();
	return this->subjectAlternativeNames;
	// 4514    .line 1663
	// 4515    .end local v1    # "names":Lsun/security/x509/GeneralNames;
label_catch_2b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ioe":Ljava/io/IOException;
	try {
	//label_try_start_2c:
	//label_try_end_2f:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_2c .. :try_end_2f} :catchall_32
	this->monitor_exit();
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 4532    .end local v0    # "ioe":Ljava/io/IOException;
	// 4533    .end local v2    # "subjectAltNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
label_catchall_32:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public getSubjectDN()Ljava/security/Principal;
std::shared_ptr<java::security::Principal> sun::security::x509::X509CertImpl::getSubjectDN()
{
	
	std::shared_ptr<java::security::Principal> cVar0;
	std::shared_ptr<java::security::Principal> subject;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 4556    .line 908
label_cond_6:
	try {
	//label_try_start_6:
	subject = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject.dname")));
	subject->checkCast("java::security::Principal");
	//label_try_end_11:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_11} :catch_12
	//    .local v1, "subject":Ljava/security/Principal;
	return subject;
	// 4575    .line 911
	// 4576    .end local v1    # "subject":Ljava/security/Principal;
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getSubjectKeyId()Lsun/security/x509/KeyIdentifier;
std::shared_ptr<sun::security::x509::KeyIdentifier> sun::security::x509::X509CertImpl::getSubjectKeyId()
{
	
	std::shared_ptr<sun::security::x509::SubjectKeyIdentifierExtension> ski;
	std::vector<std::any> tryCatchExcetionList;
	
	ski = this->getSubjectKeyIdentifierExtension();
	//    .local v1, "ski":Lsun/security/x509/SubjectKeyIdentifierExtension;
	if ( !(ski) )  
		goto label_cond_10;
	try {
	//label_try_start_7:
	//label_try_end_d:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f;
	}
	//    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_d} :catch_f
	return ski->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")));
	// 4613    .line 1135
label_catch_f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_10:
	return 0x0;

}
// .method public getSubjectKeyIdentifierExtension()Lsun/security/x509/SubjectKeyIdentifierExtension;
std::shared_ptr<sun::security::x509::SubjectKeyIdentifierExtension> sun::security::x509::X509CertImpl::getSubjectKeyIdentifierExtension()
{
	
	std::shared_ptr<sun::security::x509::SubjectKeyIdentifierExtension> cVar0;
	
	cVar0 = this->getExtension(sun::security::x509::PKIXExtensions::SubjectKey_Id);
	cVar0->checkCast("sun::security::x509::SubjectKeyIdentifierExtension");
	return cVar0;

}
// .method public getSubjectUniqueID()[Z
bool sun::security::x509::X509CertImpl::getSubjectUniqueID()
{
	
	std::shared_ptr<bool[]> cVar0;
	std::shared_ptr<sun::security::x509::UniqueIdentity> id;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 4653    .line 1103
label_cond_6:
	try {
	//label_try_start_6:
	id = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("subjectID")));
	id->checkCast("sun::security::x509::UniqueIdentity");
	//    .local v1, "id":Lsun/security/x509/UniqueIdentity;
	if ( id )     
		goto label_cond_14;
	return cVar0;
	// 4675    .line 1108
label_cond_14:
	//label_try_end_17:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_17} :catch_19
	return id->getId();
	// 4685    .line 1109
	// 4686    .end local v1    # "id":Lsun/security/x509/UniqueIdentity;
label_catch_19:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getSubjectX500Principal()Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::x509::X509CertImpl::getSubjectX500Principal()
{
	
	std::shared_ptr<javax::security::auth::x500::X500Principal> cVar0;
	std::shared_ptr<javax::security::auth::x500::X500Principal> subject;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 4709    .line 926
label_cond_6:
	try {
	//label_try_start_6:
	subject = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject.x500principal")));
	subject->checkCast("javax::security::auth::x500::X500Principal");
	//label_try_end_11:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_11} :catch_12
	//    .local v1, "subject":Ljavax/security/auth/x500/X500Principal;
	return subject;
	// 4730    .line 930
	// 4731    .end local v1    # "subject":Ljavax/security/auth/x500/X500Principal;
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public getTBSCertificate()[B
unsigned char sun::security::x509::X509CertImpl::getTBSCertificate()
{
	
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 4743        value = {
	// 4744            Ljava/security/cert/CertificateEncodingException;
	// 4745        }
	// 4746    .end annotation
	if ( !(this->info) )  
		goto label_cond_b;
	return this->info->getEncodedInfo();
	// 4763    .line 1017
label_cond_b:
	cVar0 = std::make_shared<java::security::cert::CertificateEncodingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Uninitialized certificate")));
	// throw
	throw cVar0;

}
// .method public getUnparseableExtension(Lsun/security/util/ObjectIdentifier;)Lsun/security/x509/Extension;
std::shared_ptr<sun::security::x509::Extension> sun::security::x509::X509CertImpl::getUnparseableExtension(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	std::shared_ptr<sun::security::x509::Extension> cVar0;
	std::shared_ptr<sun::security::x509::CertificateExtensions> extensions;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::x509::Extension> cVar1;
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 4789    .line 1385
label_cond_6:
	try {
	//label_try_start_6:
	extensions = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("extensions")));
	extensions->checkCast("sun::security::x509::CertificateExtensions");
	//label_try_end_11:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_14;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_6 .. :try_end_11} :catch_14
	//    .catch Ljava/io/IOException; {:try_start_6 .. :try_end_11} :catch_25
	//    .local v1, "extensions":Lsun/security/x509/CertificateExtensions;
	if ( extensions )     
		goto label_cond_16;
	return cVar0;
	// 4812    .line 1386
	// 4813    .end local v1    # "extensions":Lsun/security/x509/CertificateExtensions;
label_catch_14:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ce":Ljava/security/cert/CertificateException;
	return cVar0;
	// 4821    .line 1392
	// 4822    .end local v0    # "ce":Ljava/security/cert/CertificateException;
	// 4823    .restart local v1    # "extensions":Lsun/security/x509/CertificateExtensions;
label_cond_16:
	try {
	//label_try_start_16:
	cVar1 = extensions->getUnparseableExtensions()->get(oid->toString());
	cVar1->checkCast("sun::security::x509::Extension");
	//label_try_end_24:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Ljava/io/IOException; {:try_start_16 .. :try_end_24} :catch_25
	return cVar1;
	// 4844    .line 1394
	// 4845    .end local v1    # "extensions":Lsun/security/x509/CertificateExtensions;
label_catch_25:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ioe":Ljava/io/IOException;
	return cVar0;

}
// .method public getVersion()I
int sun::security::x509::X509CertImpl::getVersion()
{
	
	int cVar0;
	std::shared_ptr<java::lang::Integer> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = -0x1;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 4868    .line 860
label_cond_6:
	try {
	//label_try_start_6:
	cVar1 = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("version.number")));
	cVar1->checkCast("java::lang::Integer");
	//label_try_end_14:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_18;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_14} :catch_18
	//    .local v1, "vers":I
	return ( cVar1->intValue() + 0x1);
	// 4893    .line 863
	// 4894    .end local v1    # "vers":I
label_catch_18:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public hasUnsupportedCriticalExtension()Z
bool sun::security::x509::X509CertImpl::hasUnsupportedCriticalExtension()
{
	
	bool cVar0;
	std::shared_ptr<sun::security::x509::CertificateExtensions> exts;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x0;
	if ( this->info )     
		goto label_cond_6;
	return cVar0;
	// 4917    .line 1268
label_cond_6:
	try {
	//label_try_start_6:
	exts = this->info->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("extensions")));
	exts->checkCast("sun::security::x509::CertificateExtensions");
	//    .local v1, "exts":Lsun/security/x509/CertificateExtensions;
	if ( exts )     
		goto label_cond_14;
	return cVar0;
	// 4939    .line 1272
label_cond_14:
	//label_try_end_17:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_17} :catch_19
	return exts->hasUnsupportedCriticalExtension();
	// 4949    .line 1273
	// 4950    .end local v1    # "exts":Lsun/security/x509/CertificateExtensions;
label_catch_19:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	return cVar0;

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::X509CertImpl::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<java::security::cert::CertificateException> cVar1;
	std::shared_ptr<sun::security::x509::X509AttributeName> attr;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<java::security::cert::CertificateException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::security::cert::CertificateException> cVar4;
	std::shared_ptr<java::security::cert::CertificateException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 4964        value = {
	// 4965            Ljava/security/cert/CertificateException;,
	// 4966            Ljava/io/IOException;
	// 4967        }
	// 4968    .end annotation
	cVar0 = 0x0;
	if ( !(this->readOnly) )  
		goto label_cond_e;
	cVar1 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot over-write existing certificate")));
	// throw
	throw cVar1;
	// 4987    .line 719
label_cond_e:
	attr = std::make_shared<sun::security::x509::X509AttributeName>(name);
	//    .local v0, "attr":Lsun/security/x509/X509AttributeName;
	id = attr->getPrefix();
	//    .local v2, "id":Ljava/lang/String;
	if ( id->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("x509"))) )     
		goto label_cond_3a;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::security::cert::CertificateException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid root of attribute name, expected [x509], received ")))->append(id)->toString());
	// throw
	throw cVar2;
	// 5034    .line 725
label_cond_3a:
	attr = std::make_shared<sun::security::x509::X509AttributeName>(attr->getSuffix());
	//    .end local v0    # "attr":Lsun/security/x509/X509AttributeName;
	//    .local v1, "attr":Lsun/security/x509/X509AttributeName;
	id = attr->getPrefix();
	if ( !(id->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("info")))) )  
		goto label_cond_76;
	if ( attr->getSuffix() )     
		goto label_cond_6a;
	if ( obj->instanceOf("sun::security::x509::X509CertInfo") )     
		goto label_cond_63;
	cVar4 = std::make_shared<java::security::cert::CertificateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value should be of type X509CertInfo.")));
	// throw
	throw cVar4;
	// 5081    .line 734
label_cond_63:
	obj->checkCast("sun::security::x509::X509CertInfo");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->info = obj;
	this->signedCert = cVar0;
label_goto_69:
	return;
	// 5095    .line 737
	// 5096    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_6a:
	this->info->set(attr->getSuffix(), obj);
	this->signedCert = cVar0;
	goto label_goto_69;
	// 5111    .line 741
label_cond_76:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::security::cert::CertificateException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name not recognized or set() not allowed for the same: ")))->append(id)->toString());
	// throw
	throw cVar5;

}
// .method public sign(Ljava/security/PrivateKey;Ljava/lang/String;)V
void sun::security::x509::X509CertImpl::sign(std::shared_ptr<java::security::PrivateKey> key,std::shared_ptr<java::lang::String> algorithm)
{
	
	//    .param p1, "key"    # Ljava/security/PrivateKey;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5143        value = {
	// 5144            Ljava/security/cert/CertificateException;,
	// 5145            Ljava/security/NoSuchAlgorithmException;,
	// 5146            Ljava/security/InvalidKeyException;,
	// 5147            Ljava/security/NoSuchProviderException;,
	// 5148            Ljava/security/SignatureException;
	// 5149        }
	// 5150    .end annotation
	this->sign(key, algorithm, 0x0);
	return;

}
// .method public sign(Ljava/security/PrivateKey;Ljava/lang/String;Ljava/lang/String;)V
void sun::security::x509::X509CertImpl::sign(std::shared_ptr<java::security::PrivateKey> key,std::shared_ptr<java::lang::String> algorithm,std::shared_ptr<java::lang::String> provider)
{
	
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar1;
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar0;
	std::shared_ptr<java::security::Signature> sigEngine;
	std::shared_ptr<sun::security::util::DerOutputStream> out;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<unsigned char[]> rawCert;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "key"    # Ljava/security/PrivateKey;
	//    .param p2, "algorithm"    # Ljava/lang/String;
	//    .param p3, "provider"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5168        value = {
	// 5169            Ljava/security/cert/CertificateException;,
	// 5170            Ljava/security/NoSuchAlgorithmException;,
	// 5171            Ljava/security/InvalidKeyException;,
	// 5172            Ljava/security/NoSuchProviderException;,
	// 5173            Ljava/security/SignatureException;
	// 5174        }
	// 5175    .end annotation
	try {
	//label_try_start_0:
	if ( !(this->readOnly) )  
		goto label_cond_18;
	cVar0 = std::make_shared<java::security::cert::CertificateEncodingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot over-write existing certificate")));
	// throw
	throw cVar0;
	// 5194    :try_end_d
	// 5195    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_d} :catch_d
	// 5197    .line 603
label_catch_d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::security::cert::CertificateEncodingException>(getCatchExcetionFromList->toString());
	// throw
	throw cVar1;
	// 5213    .line 572
	// 5214    .end local v0    # "e":Ljava/io/IOException;
label_cond_18:
	0x0;
	//    .local v3, "sigEngine":Ljava/security/Signature;
	if ( !(provider) )  
		goto label_cond_21;
	try {
	//label_try_start_1b:
	if ( provider->length() )     
		goto label_cond_69;
label_cond_21:
	sigEngine = java::security::Signature::getInstance(algorithm);
	//    .local v3, "sigEngine":Ljava/security/Signature;
label_goto_25:
	sigEngine->initSign(key);
	this->algId = sun::security::x509::AlgorithmId::get(sigEngine->getAlgorithm());
	out = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "out":Lsun/security/util/DerOutputStream;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v4, "tmp":Lsun/security/util/DerOutputStream;
	this->info->encode(tmp);
	rawCert = tmp->toByteArray();
	//    .local v2, "rawCert":[B
	this->algId->encode(tmp);
	sigEngine->update(rawCert, 0x0, rawCert->size());
	this->signature = sigEngine->sign();
	tmp->putBitString(this->signature);
	out->write(0x30, tmp);
	this->signedCert = out->toByteArray();
	this->readOnly = 0x1;
	return;
	// 5318    .line 576
	// 5319    .end local v1    # "out":Lsun/security/util/DerOutputStream;
	// 5320    .end local v2    # "rawCert":[B
	// 5321    .end local v4    # "tmp":Lsun/security/util/DerOutputStream;
	// 5322    .local v3, "sigEngine":Ljava/security/Signature;
label_cond_69:
	//label_try_end_6c:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_d;
	}
	//    .catch Ljava/io/IOException; {:try_start_1b .. :try_end_6c} :catch_d
	sigEngine = java::security::Signature::getInstance(algorithm, provider);
	//    .local v3, "sigEngine":Ljava/security/Signature;
	goto label_goto_25;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X509CertImpl::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<sun::misc::HexDumpEncoder> encoder;
	
	if ( !(this->info) )  
		goto label_cond_8;
	if ( this->algId )     
		goto label_cond_c;
label_cond_8:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 5353    .line 816
label_cond_c:
	if ( !(this->signature) )  
		goto label_cond_8;
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[\n")));
	sb->append(this->info->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Algorithm: [")))->append(this->algId->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")));
	encoder = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v0, "encoder":Lsun/misc/HexDumpEncoder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  Signature:\n")))->append(encoder->encodeBuffer(this->signature));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n]")));
	return sb->toString();

}
// .method public verify(Ljava/security/PublicKey;)V
void sun::security::x509::X509CertImpl::verify(std::shared_ptr<java::security::PublicKey> key)
{
	
	//    .param p1, "key"    # Ljava/security/PublicKey;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5444        value = {
	// 5445            Ljava/security/cert/CertificateException;,
	// 5446            Ljava/security/NoSuchAlgorithmException;,
	// 5447            Ljava/security/InvalidKeyException;,
	// 5448            Ljava/security/NoSuchProviderException;,
	// 5449            Ljava/security/SignatureException;
	// 5450        }
	// 5451    .end annotation
	this->verify(key, std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	return;

}
// .method public declared-synchronized verify(Ljava/security/PublicKey;Ljava/lang/String;)V
void sun::security::x509::X509CertImpl::verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::lang::String> cVar0)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::security::SignatureException> cVar1;
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar2;
	std::shared_ptr<java::security::Signature> sigVerf;
	std::shared_ptr<unsigned char[]> rawCert;
	std::shared_ptr<java::security::SignatureException> cVar3;
	
	//    .param p1, "key"    # Ljava/security/PublicKey;
	//    .param p2, "sigProvider"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5468        value = {
	// 5469            Ljava/security/cert/CertificateException;,
	// 5470            Ljava/security/NoSuchAlgorithmException;,
	// 5471            Ljava/security/InvalidKeyException;,
	// 5472            Ljava/security/NoSuchProviderException;,
	// 5473            Ljava/security/SignatureException;
	// 5474        }
	// 5475    .end annotation
	this->monitor_enter();
	if ( cVar0 )     
		goto label_cond_6;
	try {
	//label_try_start_3:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_cond_6:
	if ( !(this->verifiedPublicKey) )  
		goto label_cond_2c;
	if ( !(this->verifiedPublicKey->equals(key)) )  
		goto label_cond_2c;
	if ( !(cVar0->equals(this->verifiedProvider)) )  
		goto label_cond_2c;
	//label_try_end_1c:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_3 .. :try_end_1c} :catchall_29
	if ( !(this->verificationResult) )  
		goto label_cond_20;
	this->monitor_exit();
	return;
	// 5522    .line 441
label_cond_20:
	try {
	//label_try_start_20:
	cVar1 = std::make_shared<java::security::SignatureException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature does not match.")));
	// throw
	throw cVar1;
	// 5532    :try_end_29
	// 5533    .catchall {:try_start_20 .. :try_end_29} :catchall_29
label_catchall_29:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 5542    .line 445
label_cond_2c:
	try {
	//label_try_start_2c:
	if ( this->signedCert )     
		goto label_cond_39;
	cVar2 = std::make_shared<java::security::cert::CertificateEncodingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Uninitialized certificate")));
	// throw
	throw cVar2;
	// 5558    .line 449
label_cond_39:
	0x0;
	//    .local v1, "sigVerf":Ljava/security/Signature;
	if ( cVar0->length() )     
		goto label_cond_71;
	sigVerf = java::security::Signature::getInstance(this->algId->getName());
	//    .local v1, "sigVerf":Ljava/security/Signature;
label_goto_4a:
	sigVerf->initVerify(key);
	rawCert = this->info->getEncodedInfo();
	//    .local v0, "rawCert":[B
	sigVerf->update(rawCert, 0x0, rawCert->size());
	this->verificationResult = sigVerf->verify(this->signature);
	this->verifiedPublicKey = key;
	this->verifiedProvider = cVar0;
	if ( this->verificationResult )     
		goto label_cond_7c;
	cVar3 = std::make_shared<java::security::SignatureException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature does not match.")));
	// throw
	throw cVar3;
	// 5630    .line 453
	// 5631    .end local v0    # "rawCert":[B
	// 5632    .local v1, "sigVerf":Ljava/security/Signature;
label_cond_71:
	//label_try_end_7a:
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catchall {:try_start_2c .. :try_end_7a} :catchall_29
	sigVerf = java::security::Signature::getInstance(this->algId->getName(), cVar0);
	//    .local v1, "sigVerf":Ljava/security/Signature;
	goto label_goto_4a;
	// 5649    .restart local v0    # "rawCert":[B
label_cond_7c:
	this->monitor_exit();
	return;

}
// .method public declared-synchronized verify(Ljava/security/PublicKey;Ljava/security/Provider;)V
void sun::security::x509::X509CertImpl::verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::security::Provider> sigProvider)
{
	
	std::shared_ptr<java::security::cert::CertificateEncodingException> cVar0;
	std::shared_ptr<java::security::Signature> sigVerf;
	std::shared_ptr<unsigned char[]> rawCert;
	std::shared_ptr<java::security::SignatureException> cVar1;
	
	//    .param p1, "key"    # Ljava/security/PublicKey;
	//    .param p2, "sigProvider"    # Ljava/security/Provider;
	//    .annotation system Ldalvik/annotation/Throws;
	// 5662        value = {
	// 5663            Ljava/security/cert/CertificateException;,
	// 5664            Ljava/security/NoSuchAlgorithmException;,
	// 5665            Ljava/security/InvalidKeyException;,
	// 5666            Ljava/security/SignatureException;
	// 5667        }
	// 5668    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	if ( this->signedCert )     
		goto label_cond_11;
	cVar0 = std::make_shared<java::security::cert::CertificateEncodingException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Uninitialized certificate")));
	// throw
	throw cVar0;
	// 5687    :try_end_e
	// 5688    .catchall {:try_start_1 .. :try_end_e} :catchall_e
label_catchall_e:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 5697    .line 494
label_cond_11:
	0x0;
	//    .local v1, "sigVerf":Ljava/security/Signature;
	if ( sigProvider )     
		goto label_cond_43;
	try {
	//label_try_start_14:
	sigVerf = java::security::Signature::getInstance(this->algId->getName());
	//    .local v1, "sigVerf":Ljava/security/Signature;
label_goto_1e:
	sigVerf->initVerify(key);
	rawCert = this->info->getEncodedInfo();
	//    .local v0, "rawCert":[B
	sigVerf->update(rawCert, 0x0, rawCert->size());
	this->verificationResult = sigVerf->verify(this->signature);
	this->verifiedPublicKey = key;
	if ( this->verificationResult )     
		goto label_cond_4e;
	cVar1 = std::make_shared<java::security::SignatureException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Signature does not match.")));
	// throw
	throw cVar1;
	// 5763    .line 498
	// 5764    .end local v0    # "rawCert":[B
	// 5765    .local v1, "sigVerf":Ljava/security/Signature;
label_cond_43:
	//label_try_end_4c:
	}
	catch (...){
		goto label_catchall_e;
	}
	//    .catchall {:try_start_14 .. :try_end_4c} :catchall_e
	sigVerf = java::security::Signature::getInstance(this->algId->getName(), sigProvider);
	//    .local v1, "sigVerf":Ljava/security/Signature;
	goto label_goto_1e;
	// 5782    .restart local v0    # "rawCert":[B
label_cond_4e:
	this->monitor_exit();
	return;

}


