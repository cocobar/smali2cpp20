// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CRLImpl$X509IssuerSerial.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "java.security.cert.X509Certificate.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.x509.X509CRLImpl_S_X509IssuerSerial.h"

// .method constructor <init>(Ljava/security/cert/X509Certificate;)V
sun::security::x509::X509CRLImpl_S_X509IssuerSerial::X509CRLImpl_S_X509IssuerSerial(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	sun::security::x509::X509CRLImpl_S_X509IssuerSerial::(cert->getIssuerX500Principal(), cert->getSerialNumber());
	return;

}
// .method constructor <init>(Ljavax/security/auth/x500/X500Principal;Ljava/math/BigInteger;)V
sun::security::x509::X509CRLImpl_S_X509IssuerSerial::X509CRLImpl_S_X509IssuerSerial(std::shared_ptr<javax::security::auth::x500::X500Principal> issuer,std::shared_ptr<java::math::BigInteger> serial)
{
	
	//    .param p1, "issuer"    # Ljavax/security/auth/x500/X500Principal;
	//    .param p2, "serial"    # Ljava/math/BigInteger;
	// 066    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->hashcode = 0x0;
	this->issuer = issuer;
	this->serial = serial;
	return;

}
// .method public compareTo(Lsun/security/x509/X509CRLImpl$X509IssuerSerial;)I
int sun::security::x509::X509CRLImpl_S_X509IssuerSerial::compareTo(std::shared_ptr<sun::security::x509::X509CRLImpl_S_X509IssuerSerial> another)
{
	
	int cissuer;
	
	//    .param p1, "another"    # Lsun/security/x509/X509CRLImpl$X509IssuerSerial;
	cissuer = this->issuer->toString()->compareTo(another->issuer->toString());
	//    .local v0, "cissuer":I
	if ( !(cissuer) )  
		goto label_cond_13;
	return cissuer;
	// 129    .line 1357
label_cond_13:
	return this->serial->compareTo(another->serial);

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::X509CRLImpl_S_X509IssuerSerial::equals(std::shared_ptr<java::lang::Object> o)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<sun::security::x509::X509CRLImpl_S_X509IssuerSerial> other;
	
	//    .param p1, "o"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( o != this )
		goto label_cond_5;
	return cVar0;
	// 157    .line 1325
label_cond_5:
	if ( o->instanceOf("sun::security::x509::X509CRLImpl_S_X509IssuerSerial") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	other = o;
	other->checkCast("sun::security::x509::X509CRLImpl_S_X509IssuerSerial");
	//    .local v0, "other":Lsun/security/x509/X509CRLImpl$X509IssuerSerial;
	if ( !(this->serial->equals(other->getSerial())) )  
		goto label_cond_26;
	if ( !(this->issuer->equals(other->getIssuer())) )  
		goto label_cond_26;
	return cVar0;
	// 203    .line 1334
label_cond_26:
	return cVar1;

}
// .method getIssuer()Ljavax/security/auth/x500/X500Principal;
std::shared_ptr<javax::security::auth::x500::X500Principal> sun::security::x509::X509CRLImpl_S_X509IssuerSerial::getIssuer()
{
	
	return this->issuer;

}
// .method getSerial()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::x509::X509CRLImpl_S_X509IssuerSerial::getSerial()
{
	
	return this->serial;

}
// .method public hashCode()I
int sun::security::x509::X509CRLImpl_S_X509IssuerSerial::hashCode()
{
	
	if ( this->hashcode )     
		goto label_cond_1a;
	0x11;
	//    .local v0, "result":I
	this->hashcode = (( ( this->issuer->hashCode() + 0x275) * 0x25) + this->serial->hashCode());
	//    .end local v0    # "result":I
label_cond_1a:
	return this->hashcode;

}


