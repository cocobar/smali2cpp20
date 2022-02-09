#ifndef __sun_security_x509_X509CRLEntryImpl__
#define __sun_security_x509_X509CRLEntryImpl__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\X509CRLEntryImpl.smali
#include "java2ctype.h"
#include "java.lang.Comparable.h"
#include "java.security.cert.X509CRLEntry.hh"

namespace sun::security::x509{
class X509CRLEntryImpl : public java::security::cert::X509CRLEntry, public java::lang::Comparable<sun::security::x509::X509CRLEntryImpl> {
public:
	X509CRLEntryImpl();
	virtual ~X509CRLEntryImpl();

}; // class X509CRLEntryImpl
}; // namespace sun::security::x509

#endif //__sun_security_x509_X509CRLEntryImpl__

