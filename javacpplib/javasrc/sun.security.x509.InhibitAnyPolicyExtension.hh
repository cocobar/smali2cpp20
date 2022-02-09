#ifndef __sun_security_x509_InhibitAnyPolicyExtension__
#define __sun_security_x509_InhibitAnyPolicyExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\InhibitAnyPolicyExtension.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.hh"

namespace sun::security::x509{
class InhibitAnyPolicyExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	InhibitAnyPolicyExtension();
	virtual ~InhibitAnyPolicyExtension();

}; // class InhibitAnyPolicyExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_InhibitAnyPolicyExtension__

