#ifndef __sun_security_x509_X509CertImpl__
#define __sun_security_x509_X509CertImpl__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CertImpl.smali
#include "java2ctype.h"
#include "java.security.cert.X509Certificate.hh"
#include "sun.security.util.DerEncoder.hh"

namespace sun::security::x509{
class X509CertImpl : public java::security::cert::X509Certificate, public sun::security::util::DerEncoder {
public:
	X509CertImpl();
	virtual ~X509CertImpl();

}; // class X509CertImpl
}; // namespace sun::security::x509

#endif //__sun_security_x509_X509CertImpl__

