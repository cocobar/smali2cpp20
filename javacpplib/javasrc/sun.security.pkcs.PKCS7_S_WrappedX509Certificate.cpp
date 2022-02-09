// CPP L:\smali2cpp20\x64\Release\out\sun\security\pkcs\PKCS7$WrappedX509Certificate.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.security.Principal.h"
#include "java.security.Provider.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Date.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.pkcs.PKCS7_S_WrappedX509Certificate.h"

// .method public constructor <init>(Ljava/security/cert/X509Certificate;)V
sun::security::pkcs::PKCS7_S_WrappedX509Certificate::PKCS7_S_WrappedX509Certificate(std::shared_ptr<java::security::cert::X509Certificate> wrapped)
{
	
	//    .param p1, "wrapped"    # Ljava/security/cert/X509Certificate;
	// 028    invoke-direct {p0}, Ljava/security/cert/X509Certificate;-><init>()V
	this->wrapped = wrapped;
	return;

}
// .method public checkValidity()V
void sun::security::pkcs::PKCS7_S_WrappedX509Certificate::checkValidity()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 042        value = {
	// 043            Ljava/security/cert/CertificateExpiredException;,
	// 044            Ljava/security/cert/CertificateNotYetValidException;
	// 045        }
	// 046    .end annotation
	this->wrapped->checkValidity();
	return;

}
// .method public checkValidity(Ljava/util/Date;)V
void sun::security::pkcs::PKCS7_S_WrappedX509Certificate::checkValidity(std::shared_ptr<java::util::Date> date)
{
	
	//    .param p1, "date"    # Ljava/util/Date;
	//    .annotation system Ldalvik/annotation/Throws;
	// 062        value = {
	// 063            Ljava/security/cert/CertificateExpiredException;,
	// 064            Ljava/security/cert/CertificateNotYetValidException;
	// 065        }
	// 066    .end annotation
	this->wrapped->checkValidity(date);
	return;

}
// .method public getBasicConstraints()I
int sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getBasicConstraints()
{
	
	return this->wrapped->getBasicConstraints();

}
// .method public getCriticalExtensionOIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getCriticalExtensionOIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 095        value = {
	// 096            "()",
	// 097            "Ljava/util/Set",
	// 098            "<",
	// 099            "Ljava/lang/String;",
	// 100            ">;"
	// 101        }
	// 102    .end annotation
	return this->wrapped->getCriticalExtensionOIDs();

}
// .method public getEncoded()[B
unsigned char sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getEncoded()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 118        value = {
	// 119            Ljava/security/cert/CertificateEncodingException;
	// 120        }
	// 121    .end annotation
	return this->wrapped->getEncoded();

}
// .method public getExtendedKeyUsage()Ljava/util/List;
std::shared_ptr<java::util::List<java::lang::String>> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getExtendedKeyUsage()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 137        value = {
	// 138            "()",
	// 139            "Ljava/util/List",
	// 140            "<",
	// 141            "Ljava/lang/String;",
	// 142            ">;"
	// 143        }
	// 144    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 147        value = {
	// 148            Ljava/security/cert/CertificateParsingException;
	// 149        }
	// 150    .end annotation
	return this->wrapped->getExtendedKeyUsage();

}
// .method public getExtensionValue(Ljava/lang/String;)[B
unsigned char sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getExtensionValue(std::shared_ptr<java::lang::String> oid)
{
	
	//    .param p1, "oid"    # Ljava/lang/String;
	return this->wrapped->getExtensionValue(oid);

}
// .method public getIssuerAlternativeNames()Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getIssuerAlternativeNames()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 181        value = {
	// 182            "()",
	// 183            "Ljava/util/Collection",
	// 184            "<",
	// 185            "Ljava/util/List",
	// 186            "<*>;>;"
	// 187        }
	// 188    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 191        value = {
	// 192            Ljava/security/cert/CertificateParsingException;
	// 193        }
	// 194    .end annotation
	return this->wrapped->getIssuerAlternativeNames();

}
// .method public getIssuerDN()Ljava/security/Principal;
std::shared_ptr<java::security::Principal> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getIssuerDN()
{
	
	return this->wrapped->getIssuerDN();

}
// .method public getIssuerUniqueID()[Z
bool sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getIssuerUniqueID()
{
	
	return this->wrapped->getIssuerUniqueID();

}
// .method public getIssuerX500Principal()Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getIssuerX500Principal()
{
	
	return this->wrapped->getIssuerX500Principal();

}
// .method public getKeyUsage()[Z
bool sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getKeyUsage()
{
	
	return this->wrapped->getKeyUsage();

}
// .method public getNonCriticalExtensionOIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getNonCriticalExtensionOIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 266        value = {
	// 267            "()",
	// 268            "Ljava/util/Set",
	// 269            "<",
	// 270            "Ljava/lang/String;",
	// 271            ">;"
	// 272        }
	// 273    .end annotation
	return this->wrapped->getNonCriticalExtensionOIDs();

}
// .method public getNotAfter()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getNotAfter()
{
	
	return this->wrapped->getNotAfter();

}
// .method public getNotBefore()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getNotBefore()
{
	
	return this->wrapped->getNotBefore();

}
// .method public getPublicKey()Ljava/security/PublicKey;
std::shared_ptr<java::security::PublicKey> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getPublicKey()
{
	
	return this->wrapped->getPublicKey();

}
// .method public getSerialNumber()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getSerialNumber()
{
	
	return this->wrapped->getSerialNumber();

}
// .method public getSigAlgName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getSigAlgName()
{
	
	return this->wrapped->getSigAlgName();

}
// .method public getSigAlgOID()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getSigAlgOID()
{
	
	return this->wrapped->getSigAlgOID();

}
// .method public getSigAlgParams()[B
unsigned char sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getSigAlgParams()
{
	
	return this->wrapped->getSigAlgParams();

}
// .method public getSignature()[B
unsigned char sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getSignature()
{
	
	return this->wrapped->getSignature();

}
// .method public getSubjectAlternativeNames()Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::util::List<java::lang::Object>>> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getSubjectAlternativeNames()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 401        value = {
	// 402            "()",
	// 403            "Ljava/util/Collection",
	// 404            "<",
	// 405            "Ljava/util/List",
	// 406            "<*>;>;"
	// 407        }
	// 408    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 411        value = {
	// 412            Ljava/security/cert/CertificateParsingException;
	// 413        }
	// 414    .end annotation
	return this->wrapped->getSubjectAlternativeNames();

}
// .method public getSubjectDN()Ljava/security/Principal;
std::shared_ptr<java::security::Principal> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getSubjectDN()
{
	
	return this->wrapped->getSubjectDN();

}
// .method public getSubjectUniqueID()[Z
bool sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getSubjectUniqueID()
{
	
	return this->wrapped->getSubjectUniqueID();

}
// .method public getSubjectX500Principal()Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getSubjectX500Principal()
{
	
	return this->wrapped->getSubjectX500Principal();

}
// .method public getTBSCertificate()[B
unsigned char sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getTBSCertificate()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 472        value = {
	// 473            Ljava/security/cert/CertificateEncodingException;
	// 474        }
	// 475    .end annotation
	return this->wrapped->getTBSCertificate();

}
// .method public getVersion()I
int sun::security::pkcs::PKCS7_S_WrappedX509Certificate::getVersion()
{
	
	return this->wrapped->getVersion();

}
// .method public hasUnsupportedCriticalExtension()Z
bool sun::security::pkcs::PKCS7_S_WrappedX509Certificate::hasUnsupportedCriticalExtension()
{
	
	return this->wrapped->hasUnsupportedCriticalExtension();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::PKCS7_S_WrappedX509Certificate::toString()
{
	
	return this->wrapped->toString();

}
// .method public verify(Ljava/security/PublicKey;)V
void sun::security::pkcs::PKCS7_S_WrappedX509Certificate::verify(std::shared_ptr<java::security::PublicKey> key)
{
	
	//    .param p1, "key"    # Ljava/security/PublicKey;
	//    .annotation system Ldalvik/annotation/Throws;
	// 534        value = {
	// 535            Ljava/security/cert/CertificateException;,
	// 536            Ljava/security/NoSuchAlgorithmException;,
	// 537            Ljava/security/InvalidKeyException;,
	// 538            Ljava/security/NoSuchProviderException;,
	// 539            Ljava/security/SignatureException;
	// 540        }
	// 541    .end annotation
	this->wrapped->verify(key);
	return;

}
// .method public verify(Ljava/security/PublicKey;Ljava/lang/String;)V
void sun::security::pkcs::PKCS7_S_WrappedX509Certificate::verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::lang::String> sigProvider)
{
	
	//    .param p1, "key"    # Ljava/security/PublicKey;
	//    .param p2, "sigProvider"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 558        value = {
	// 559            Ljava/security/cert/CertificateException;,
	// 560            Ljava/security/NoSuchAlgorithmException;,
	// 561            Ljava/security/InvalidKeyException;,
	// 562            Ljava/security/NoSuchProviderException;,
	// 563            Ljava/security/SignatureException;
	// 564        }
	// 565    .end annotation
	this->wrapped->verify(key, sigProvider);
	return;

}
// .method public verify(Ljava/security/PublicKey;Ljava/security/Provider;)V
void sun::security::pkcs::PKCS7_S_WrappedX509Certificate::verify(std::shared_ptr<java::security::PublicKey> key,std::shared_ptr<java::security::Provider> sigProvider)
{
	
	//    .param p1, "key"    # Ljava/security/PublicKey;
	//    .param p2, "sigProvider"    # Ljava/security/Provider;
	//    .annotation system Ldalvik/annotation/Throws;
	// 582        value = {
	// 583            Ljava/security/cert/CertificateException;,
	// 584            Ljava/security/NoSuchAlgorithmException;,
	// 585            Ljava/security/InvalidKeyException;,
	// 586            Ljava/security/SignatureException;
	// 587        }
	// 588    .end annotation
	this->wrapped->verify(key, sigProvider);
	return;

}


