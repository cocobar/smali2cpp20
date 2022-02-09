#ifndef __sun_security_x509_X509CRLImpl__
#define __sun_security_x509_X509CRLImpl__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CRLImpl.smali
#include "java2ctype.h"
#include "java.security.cert.X509CRL.hh"
#include "sun.security.util.DerEncoder.hh"

namespace sun::security::x509{
class X509CRLImpl : public java::security::cert::X509CRL, public sun::security::util::DerEncoder {
public:
	X509CRLImpl();
	virtual ~X509CRLImpl();

}; // class X509CRLImpl
}; // namespace sun::security::x509

#endif //__sun_security_x509_X509CRLImpl__

