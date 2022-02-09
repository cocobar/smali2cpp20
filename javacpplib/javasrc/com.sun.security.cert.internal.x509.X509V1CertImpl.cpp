// CPP L:\smali2cpp20\x64\Release\out\com\sun\security\cert\internal\x509\X509V1CertImpl.smali
#include "java2ctype.h"
#include "com.sun.security.cert.internal.x509.X509V1CertImpl.h"
#include "java.io.ByteArrayInputStream.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.math.BigInteger.h"
#include "java.security.Principal.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateEncodingException.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.CertificateExpiredException.h"
#include "java.security.cert.CertificateFactory.h"
#include "java.security.cert.CertificateNotYetValidException.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Date.h"
#include "javax.security.cert.CertificateEncodingException.h"
#include "javax.security.cert.CertificateException.h"
#include "javax.security.cert.CertificateExpiredException.h"
#include "javax.security.cert.CertificateNotYetValidException.h"

static com::sun::security::cert::internal::x509::X509V1CertImpl::serialVersionUID = -0x1c6d8776efacf2edL;
// .method public constructor <init>()V
com::sun::security::cert::internal::x509::X509V1CertImpl::X509V1CertImpl()
{
	
	// 023    invoke-direct {p0}, Ljavax/security/cert/X509Certificate;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;)V
com::sun::security::cert::internal::x509::X509V1CertImpl::X509V1CertImpl(std::shared_ptr<java::io::InputStream> in)
{
	
	std::shared_ptr<javax::security::cert::CertificateException> cVar1;
	std::shared_ptr<java::security::cert::X509Certificate> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 032        value = {
	// 033            Ljavax/security/cert/CertificateException;
	// 034        }
	// 035    .end annotation
	// 039    invoke-direct {p0}, Ljavax/security/cert/X509Certificate;-><init>()V
	try {
	//label_try_start_3:
	cVar0 = com::sun::security::cert::internal::x509::X509V1CertImpl::getFactory({const[class].FS-Param})->generateCertificate(in);
	cVar0->checkCast("java::security::cert::X509Certificate");
	this->wrappedCert = cVar0;
	//label_try_end_f:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_3 .. :try_end_f} :catch_10
	return;
	// 061    .line 102
label_catch_10:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/cert/CertificateException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<javax::security::cert::CertificateException>(getCatchExcetionFromList->getMessage());
	// throw
	throw cVar1;

}
// .method public constructor <init>([B)V
com::sun::security::cert::internal::x509::X509V1CertImpl::X509V1CertImpl(std::shared_ptr<unsigned char[]> certData)
{
	
	std::shared_ptr<javax::security::cert::CertificateException> cVar1;
	std::shared_ptr<java::io::ByteArrayInputStream> bs;
	std::shared_ptr<java::security::cert::X509Certificate> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "certData"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 082        value = {
	// 083            Ljavax/security/cert/CertificateException;
	// 084        }
	// 085    .end annotation
	// 089    invoke-direct {p0}, Ljavax/security/cert/X509Certificate;-><init>()V
	try {
	//label_try_start_3:
	bs = std::make_shared<java::io::ByteArrayInputStream>(certData);
	//    .local v0, "bs":Ljava/io/ByteArrayInputStream;
	cVar0 = com::sun::security::cert::internal::x509::X509V1CertImpl::getFactory({const[class].FS-Param})->generateCertificate(bs);
	cVar0->checkCast("java::security::cert::X509Certificate");
	this->wrappedCert = cVar0;
	//label_try_end_14:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_15;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_3 .. :try_end_14} :catch_15
	return;
	// 117    .line 86
	// 118    .end local v0    # "bs":Ljava/io/ByteArrayInputStream;
label_catch_15:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/cert/CertificateException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<javax::security::cert::CertificateException>(getCatchExcetionFromList->getMessage());
	// throw
	throw cVar1;

}
// .method private static declared-synchronized getFactory()Ljava/security/cert/CertificateFactory;
std::shared_ptr<java::security::cert::CertificateFactory> com::sun::security::cert::internal::x509::X509V1CertImpl::getFactory()
{
	
	std::shared_ptr<com::sun::security::cert::internal::x509::X509V1CertImpl> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 138        value = {
	// 139            Ljava/security/cert/CertificateException;
	// 140        }
	// 141    .end annotation
	cVar0 = com::sun::security::cert::internal::x509::X509V1CertImpl();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_c;
	}
	//    .catchall {:try_start_3 .. :try_end_9} :catchall_c
	cVar0->monitor_exit();
	return java::security::cert::CertificateFactory::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509")));
label_catchall_c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method private declared-synchronized readObject(Ljava/io/ObjectInputStream;)V
void com::sun::security::cert::internal::x509::X509V1CertImpl::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::security::cert::X509Certificate> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 174        value = {
	// 175            Ljava/io/IOException;
	// 176        }
	// 177    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	cVar0 = com::sun::security::cert::internal::x509::X509V1CertImpl::getFactory({const[class].FS-Param})->generateCertificate(stream);
	cVar0->checkCast("java::security::cert::X509Certificate");
	this->wrappedCert = cVar0;
	//label_try_end_d:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f;
	}
	catch (...){
		goto label_catchall_2e;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_1 .. :try_end_d} :catch_f
	//    .catchall {:try_start_1 .. :try_end_d} :catchall_2e
	this->monitor_exit();
	return;
	// 205    .line 318
label_catch_f:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/cert/CertificateException;
	try {
	//label_try_start_10:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("generateCertificate failed: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar1;
	// 239    :try_end_2e
	// 240    .catchall {:try_start_10 .. :try_end_2e} :catchall_2e
	// 242    .end local v0    # "e":Ljava/security/cert/CertificateException;
label_catchall_2e:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private declared-synchronized writeObject(Ljava/io/ObjectOutputStream;)V
void com::sun::security::cert::internal::x509::X509V1CertImpl::writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "stream"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 255        value = {
	// 256            Ljava/io/IOException;
	// 257        }
	// 258    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	stream->write(this->getEncoded());
	//label_try_end_8:
	}
	catch (javax::security::cert::CertificateEncodingException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a;
	}
	catch (...){
		goto label_catchall_29;
	}
	//    .catch Ljavax/security/cert/CertificateEncodingException; {:try_start_1 .. :try_end_8} :catch_a
	//    .catchall {:try_start_1 .. :try_end_8} :catchall_29
	this->monitor_exit();
	return;
	// 279    .line 308
label_catch_a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljavax/security/cert/CertificateEncodingException;
	try {
	//label_try_start_b:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("getEncoded failed: ")))->append(getCatchExcetionFromList->getMessage())->toString());
	// throw
	throw cVar0;
	// 313    :try_end_29
	// 314    .catchall {:try_start_b .. :try_end_29} :catchall_29
	// 316    .end local v0    # "e":Ljavax/security/cert/CertificateEncodingException;
label_catchall_29:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public checkValidity()V
void com::sun::security::cert::internal::x509::X509V1CertImpl::checkValidity()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 330        value = {
	// 331            Ljavax/security/cert/CertificateExpiredException;,
	// 332            Ljavax/security/cert/CertificateNotYetValidException;
	// 333        }
	// 334    .end annotation
	cVar0 = std::make_shared<java::util::Date>();
	this->checkValidity(cVar0);
	return;

}
// .method public checkValidity(Ljava/util/Date;)V
void com::sun::security::cert::internal::x509::X509V1CertImpl::checkValidity(std::shared_ptr<java::util::Date> date)
{
	
	std::shared_ptr<javax::security::cert::CertificateNotYetValidException> cVar1;
	std::shared_ptr<javax::security::cert::CertificateExpiredException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "date"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Throws;
	// 352        value = {
	// 353            Ljavax/security/cert/CertificateExpiredException;,
	// 354            Ljavax/security/cert/CertificateNotYetValidException;
	// 355        }
	// 356    .end annotation
	try {
	//label_try_start_0:
	this->wrappedCert->checkValidity(date);
	//label_try_end_5:
	}
	catch (java::security::cert::CertificateNotYetValidException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_11;
	}
	catch (java::security::cert::CertificateExpiredException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Ljava/security/cert/CertificateNotYetValidException; {:try_start_0 .. :try_end_5} :catch_11
	//    .catch Ljava/security/cert/CertificateExpiredException; {:try_start_0 .. :try_end_5} :catch_6
	return;
	// 371    .line 185
label_catch_6:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/cert/CertificateExpiredException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<javax::security::cert::CertificateExpiredException>(getCatchExcetionFromList->getMessage());
	// throw
	throw cVar0;
	// 387    .line 183
	// 388    .end local v0    # "e":Ljava/security/cert/CertificateExpiredException;
label_catch_11:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/cert/CertificateNotYetValidException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<javax::security::cert::CertificateNotYetValidException>(getCatchExcetionFromList->getMessage());
	// throw
	throw cVar1;

}
// .method public getEncoded()[B
unsigned char com::sun::security::cert::internal::x509::X509V1CertImpl::getEncoded()
{
	
	std::shared_ptr<javax::security::cert::CertificateEncodingException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 408        value = {
	// 409            Ljavax/security/cert/CertificateEncodingException;
	// 410        }
	// 411    .end annotation
	try {
	//label_try_start_0:
	//label_try_end_5:
	}
	catch (java::security::cert::CertificateEncodingException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7;
	}
	//    .catch Ljava/security/cert/CertificateEncodingException; {:try_start_0 .. :try_end_5} :catch_7
	return this->wrappedCert->getEncoded();
	// 426    .line 116
label_catch_7:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/cert/CertificateEncodingException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<javax::security::cert::CertificateEncodingException>(getCatchExcetionFromList->getMessage());
	// throw
	throw cVar0;

}
// .method public getIssuerDN()Ljava/security/Principal;
std::shared_ptr<java::security::Principal> com::sun::security::cert::internal::x509::X509V1CertImpl::getIssuerDN()
{
	
	return this->wrappedCert->getIssuerDN();

}
// .method public getNotAfter()Ljava/util/Date;
std::shared_ptr<java::util::Date> com::sun::security::cert::internal::x509::X509V1CertImpl::getNotAfter()
{
	
	return this->wrappedCert->getNotAfter();

}
// .method public getNotBefore()Ljava/util/Date;
std::shared_ptr<java::util::Date> com::sun::security::cert::internal::x509::X509V1CertImpl::getNotBefore()
{
	
	return this->wrappedCert->getNotBefore();

}
// .method public getPublicKey()Ljava/security/PublicKey;
std::shared_ptr<java::security::PublicKey> com::sun::security::cert::internal::x509::X509V1CertImpl::getPublicKey()
{
	
	//    .local v0, "key":Ljava/security/PublicKey;
	return this->wrappedCert->getPublicKey();

}
// .method public getSerialNumber()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> com::sun::security::cert::internal::x509::X509V1CertImpl::getSerialNumber()
{
	
	return this->wrappedCert->getSerialNumber();

}
// .method public getSigAlgName()Ljava/lang/String;
std::shared_ptr<java::lang::String> com::sun::security::cert::internal::x509::X509V1CertImpl::getSigAlgName()
{
	
	return this->wrappedCert->getSigAlgName();

}
// .method public getSigAlgOID()Ljava/lang/String;
std::shared_ptr<java::lang::String> com::sun::security::cert::internal::x509::X509V1CertImpl::getSigAlgOID()
{
	
	return this->wrappedCert->getSigAlgOID();

}
// .method public getSigAlgParams()[B
unsigned char com::sun::security::cert::internal::x509::X509V1CertImpl::getSigAlgParams()
{
	
	return this->wrappedCert->getSigAlgParams();

}
// .method public getSubjectDN()Ljava/security/Principal;
std::shared_ptr<java::security::Principal> com::sun::security::cert::internal::x509::X509V1CertImpl::getSubjectDN()
{
	
	return this->wrappedCert->getSubjectDN();

}
// .method public getVersion()I
int com::sun::security::cert::internal::x509::X509V1CertImpl::getVersion()
{
	
	return ( this->wrappedCert->getVersion() + -0x1);

}
// .method public getX509Certificate()Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> com::sun::security::cert::internal::x509::X509V1CertImpl::getX509Certificate()
{
	
	return this->wrappedCert;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> com::sun::security::cert::internal::x509::X509V1CertImpl::toString()
{
	
	return this->wrappedCert->toString();

}
// .method public verify(Ljava/security/PublicKey;)V
void com::sun::security::cert::internal::x509::X509V1CertImpl::verify(std::shared_ptr<java::security::PublicKey> key)
{
	
	std::shared_ptr<javax::security::cert::CertificateException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "key"    # Ljava/security/PublicKey;
	//    .annotation system Ldalvik/annotation/Throws;
	// 615        value = {
	// 616            Ljavax/security/cert/CertificateException;,
	// 617            Ljava/security/NoSuchAlgorithmException;,
	// 618            Ljava/security/InvalidKeyException;,
	// 619            Ljava/security/NoSuchProviderException;,
	// 620            Ljava/security/SignatureException;
	// 621        }
	// 622    .end annotation
	try {
	//label_try_start_0:
	this->wrappedCert->verify(key);
	//label_try_end_5:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_0 .. :try_end_5} :catch_6
	return;
	// 636    .line 136
label_catch_6:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/cert/CertificateException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<javax::security::cert::CertificateException>(getCatchExcetionFromList->getMessage());
	// throw
	throw cVar0;

}
// .method public verify(Ljava/security/PublicKey;Ljava/lang/String;)V
void com::sun::security::cert::internal::x509::X509V1CertImpl::verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::lang::String> sigProvider)
{
	
	std::shared_ptr<javax::security::cert::CertificateException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "key"    # Ljava/security/PublicKey;
	//    .param p2, "sigProvider"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 658        value = {
	// 659            Ljavax/security/cert/CertificateException;,
	// 660            Ljava/security/NoSuchAlgorithmException;,
	// 661            Ljava/security/InvalidKeyException;,
	// 662            Ljava/security/NoSuchProviderException;,
	// 663            Ljava/security/SignatureException;
	// 664        }
	// 665    .end annotation
	try {
	//label_try_start_0:
	this->wrappedCert->verify(key, sigProvider);
	//label_try_end_5:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_0 .. :try_end_5} :catch_6
	return;
	// 679    .line 157
label_catch_6:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/cert/CertificateException;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar0 = std::make_shared<javax::security::cert::CertificateException>(getCatchExcetionFromList->getMessage());
	// throw
	throw cVar0;

}


