#ifndef __sun_security_x509_X509CRLImpl_S_X509IssuerSerial__
#define __sun_security_x509_X509CRLImpl_S_X509IssuerSerial__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CRLImpl$X509IssuerSerial.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.lang.Object.h"
#include "java.math.BigInteger.h"
#include "java.security.cert.X509Certificate.h"
#include "javax.security.auth.x500.X500Principal.h"

namespace sun::security::x509{
class X509CRLImpl_S_X509IssuerSerial : public java::lang::Comparable<sun::security::x509::X509CRLImpl_S_X509IssuerSerial> {
protected:
private:
public:
	int hashcode;
	std::shared_ptr<javax::security::auth::x500::X500Principal> issuer;
	std::shared_ptr<java::math::BigInteger> serial;
	X509CRLImpl_S_X509IssuerSerial(std::shared_ptr<java::security::cert::X509Certificate> cert);
	X509CRLImpl_S_X509IssuerSerial(std::shared_ptr<javax::security::auth::x500::X500Principal> issuer,std::shared_ptr<java::math::BigInteger> serial);
	int virtual compareTo(std::shared_ptr<sun::security::x509::X509CRLImpl_S_X509IssuerSerial> another);
	bool virtual equals(std::shared_ptr<java::lang::Object> o);
	std::shared_ptr<javax::security::auth::x500::X500Principal> virtual getIssuer();
	std::shared_ptr<java::math::BigInteger> virtual getSerial();
	int virtual hashCode();
public:
	virtual ~X509CRLImpl_S_X509IssuerSerial(){
	}

}; // class X509CRLImpl_S_X509IssuerSerial
}; // namespace sun::security::x509

#endif //__sun_security_x509_X509CRLImpl_S_X509IssuerSerial__

