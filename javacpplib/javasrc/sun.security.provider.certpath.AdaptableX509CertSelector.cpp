// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\AdaptableX509CertSelector.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.math.BigInteger.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Arrays.h"
#include "java.util.Date.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.AdaptableX509CertSelector.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.x509.AuthorityKeyIdentifierExtension.h"
#include "sun.security.x509.SerialNumber.h"

static sun::security::provider::certpath::AdaptableX509CertSelector::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::AdaptableX509CertSelector::static_cinit()
{
	
	sun::security::provider::certpath::AdaptableX509CertSelector::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method constructor <init>()V
sun::security::provider::certpath::AdaptableX509CertSelector::AdaptableX509CertSelector()
{
	
	// 043    invoke-direct {p0}, Ljava/security/cert/X509CertSelector;-><init>()V
	return;

}
// .method private matchSubjectKeyID(Ljava/security/cert/X509Certificate;)Z
bool sun::security::provider::certpath::AdaptableX509CertSelector::matchSubjectKeyID(std::shared_ptr<java::security::cert::X509Certificate> xcert)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<unsigned char[]> extVal;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::security::util::DerInputStream> in;
	std::shared_ptr<unsigned char[]> certSubjectKeyID;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "xcert"    # Ljava/security/cert/X509Certificate;
	cVar0 = 0x0;
	cVar1 = 0x1;
	if ( this->ski )     
		goto label_cond_7;
	return cVar1;
	// 065    .line 215
label_cond_7:
	try {
	//label_try_start_7:
	extVal = xcert->getExtensionValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.14")));
	//    .local v2, "extVal":[B
	if ( extVal )     
		goto label_cond_32;
	if ( !(sun::security::provider::certpath::AdaptableX509CertSelector::debug) )  
		goto label_cond_31;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::AdaptableX509CertSelector::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("AdaptableX509CertSelector.match: no subject key ID extension. Subject: ")))->append(xcert->getSubjectX500Principal())->toString());
label_cond_31:
	return cVar1;
	// 116    .line 224
label_cond_32:
	in = std::make_shared<sun::security::util::DerInputStream>(extVal);
	//    .local v3, "in":Lsun/security/util/DerInputStream;
	certSubjectKeyID = in->getOctetString();
	//    .local v0, "certSubjectKeyID":[B
	if ( !(certSubjectKeyID) )  
		goto label_cond_47;
	if ( !(( java::util::Arrays::equals(this->ski, certSubjectKeyID) ^ 0x1)) )  
		goto label_cond_8f;
label_cond_47:
	if ( !(sun::security::provider::certpath::AdaptableX509CertSelector::debug) )  
		goto label_cond_80;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::AdaptableX509CertSelector::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("AdaptableX509CertSelector.match: subject key IDs don\'t match. Expected: ")))->append(java::util::Arrays::toString(this->ski))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cert\'s: ")))->append(java::util::Arrays::toString(certSubjectKeyID))->toString());
	//label_try_end_80:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_81;
	}
	//    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_80} :catch_81
label_cond_80:
	return cVar0;
	// 213    .line 236
	// 214    .end local v0    # "certSubjectKeyID":[B
	// 215    .end local v2    # "extVal":[B
	// 216    .end local v3    # "in":Lsun/security/util/DerInputStream;
label_catch_81:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/io/IOException;
	if ( !(sun::security::provider::certpath::AdaptableX509CertSelector::debug) )  
		goto label_cond_8e;
	sun::security::provider::certpath::AdaptableX509CertSelector::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("AdaptableX509CertSelector.match: exception in subject key ID check")));
label_cond_8e:
	return cVar0;
	// 237    .line 243
	// 238    .end local v1    # "ex":Ljava/io/IOException;
	// 239    .restart local v0    # "certSubjectKeyID":[B
	// 240    .restart local v2    # "extVal":[B
	// 241    .restart local v3    # "in":Lsun/security/util/DerInputStream;
label_cond_8f:
	return cVar1;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::provider::certpath::AdaptableX509CertSelector::clone()
{
	
	std::shared_ptr<sun::security::provider::certpath::AdaptableX509CertSelector> copy;
	std::shared_ptr<java::util::Date> cVar0;
	std::shared_ptr<java::util::Date> cVar1;
	std::shared_ptr<unsigned char[]> cVar2;
	
	copy = this->clone();
	copy->checkCast("sun::security::provider::certpath::AdaptableX509CertSelector");
	//    .local v0, "copy":Lsun/security/provider/certpath/AdaptableX509CertSelector;
	if ( !(this->startDate) )  
		goto label_cond_14;
	cVar0 = this->startDate->clone();
	cVar0->checkCast("java::util::Date");
	copy->startDate = cVar0;
label_cond_14:
	if ( !(this->endDate) )  
		goto label_cond_22;
	cVar1 = this->endDate->clone();
	cVar1->checkCast("java::util::Date");
	copy->endDate = cVar1;
label_cond_22:
	if ( !(this->ski) )  
		goto label_cond_30;
	cVar2 = this->ski->clone();
	cVar2->checkCast("unsigned char[]");
	copy->ski = cVar2;
label_cond_30:
	return copy;

}
// .method public match(Ljava/security/cert/Certificate;)Z
bool sun::security::provider::certpath::AdaptableX509CertSelector::match(std::shared_ptr<java::security::cert::Certificate> cert)
{
	
	bool cVar0;
	std::shared_ptr<java::security::cert::X509Certificate> xcert;
	int version;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "cert"    # Ljava/security/cert/Certificate;
	cVar0 = 0x0;
	xcert = cert;
	xcert->checkCast("java::security::cert::X509Certificate");
	//    .local v2, "xcert":Ljava/security/cert/X509Certificate;
	if ( this->matchSubjectKeyID(xcert) )     
		goto label_cond_b;
	return cVar0;
	// 338    .line 172
label_cond_b:
	version = xcert->getVersion();
	//    .local v1, "version":I
	if ( !(this->serial) )  
		goto label_cond_23;
	if ( version <= 0x2 )
		goto label_cond_23;
	if ( this->serial->equals(xcert->getSerialNumber()) )     
		goto label_cond_23;
	return cVar0;
	// 370    .line 180
label_cond_23:
	if ( version >= 0x3 )
		goto label_cond_38;
	if ( !(this->startDate) )  
		goto label_cond_2f;
	try {
	//label_try_start_2a:
	xcert->checkValidity(this->startDate);
	//label_try_end_2f:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3f;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_2a .. :try_end_2f} :catch_3f
label_cond_2f:
	if ( !(this->endDate) )  
		goto label_cond_38;
	try {
	//label_try_start_33:
	xcert->checkValidity(this->endDate);
	//label_try_end_38:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_41;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_33 .. :try_end_38} :catch_41
label_cond_38:
	if ( this->match(cert) )     
		goto label_cond_43;
	return cVar0;
	// 414    .line 184
label_catch_3f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ce":Ljava/security/cert/CertificateException;
	return cVar0;
	// 422    .line 191
	// 423    .end local v0    # "ce":Ljava/security/cert/CertificateException;
label_catch_41:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "ce":Ljava/security/cert/CertificateException;
	return cVar0;
	// 431    .line 202
	// 432    .end local v0    # "ce":Ljava/security/cert/CertificateException;
label_cond_43:
	return 0x1;

}
// .method public setSerialNumber(Ljava/math/BigInteger;)V
void sun::security::provider::certpath::AdaptableX509CertSelector::setSerialNumber(std::shared_ptr<java::math::BigInteger> serial)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "serial"    # Ljava/math/BigInteger;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;

}
// .method setSkiAndSerialNumber(Lsun/security/x509/AuthorityKeyIdentifierExtension;)V
void sun::security::provider::certpath::AdaptableX509CertSelector::setSkiAndSerialNumber(std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> ext)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<sun::security::x509::SerialNumber> asn;
	
	//    .param p1, "ext"    # Lsun/security/x509/AuthorityKeyIdentifierExtension;
	//    .annotation system Ldalvik/annotation/Throws;
	// 456        value = {
	// 457            Ljava/io/IOException;
	// 458        }
	// 459    .end annotation
	cVar0 = 0x0;
	this->ski = cVar0;
	this->serial = cVar0;
	if ( !(ext) )  
		goto label_cond_1e;
	this->ski = ext->getEncodedKeyIdentifier();
	asn = ext->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("serial_number")));
	asn->checkCast("sun::security::x509::SerialNumber");
	//    .local v0, "asn":Lsun/security/x509/SerialNumber;
	if ( !(asn) )  
		goto label_cond_1e;
	this->serial = asn->getNumber();
	//    .end local v0    # "asn":Lsun/security/x509/SerialNumber;
label_cond_1e:
	return;

}
// .method public setSubjectKeyIdentifier([B)V
void sun::security::provider::certpath::AdaptableX509CertSelector::setSubjectKeyIdentifier(std::shared_ptr<unsigned char[]> subjectKeyID)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "subjectKeyID"    # [B
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;

}
// .method setValidityPeriod(Ljava/util/Date;Ljava/util/Date;)V
void sun::security::provider::certpath::AdaptableX509CertSelector::setValidityPeriod(std::shared_ptr<java::util::Date> startDate,std::shared_ptr<java::util::Date> endDate)
{
	
	//    .param p1, "startDate"    # Ljava/util/Date;
	//    .param p2, "endDate"    # Ljava/util/Date;
	this->startDate = startDate;
	this->endDate = endDate;
	return;

}


