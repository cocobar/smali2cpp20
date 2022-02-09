#ifndef __com_sun_security_cert_internal_x509_X509V1CertImpl__
#define __com_sun_security_cert_internal_x509_X509V1CertImpl__
// H L:\smali2cpp20\x64\Release\out\com\sun\security\cert\internal\x509\X509V1CertImpl.smali
#include "java2ctype.h"
#include "java.io.Serializable.hh"
#include "javax.security.cert.X509Certificate.hh"

namespace com::sun::security::cert::internal::x509{
class X509V1CertImpl : public javax::security::cert::X509Certificate, public java::io::Serializable {
public:
	X509V1CertImpl();
	virtual ~X509V1CertImpl();

}; // class X509V1CertImpl
}; // namespace com::sun::security::cert::internal::x509

#endif //__com_sun_security_cert_internal_x509_X509V1CertImpl__

