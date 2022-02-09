#ifndef __sun_security_x509_PolicyMappingsExtension__
#define __sun_security_x509_PolicyMappingsExtension__
// H L:\smali2cpp20\x64\Release\out\sun\security\x509\PolicyMappingsExtension.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.security.x509.CertAttrSet.h"
#include "sun.security.x509.Extension.hh"

namespace sun::security::x509{
class PolicyMappingsExtension : public sun::security::x509::Extension, public sun::security::x509::CertAttrSet<java::lang::String> {
public:
	PolicyMappingsExtension();
	virtual ~PolicyMappingsExtension();

}; // class PolicyMappingsExtension
}; // namespace sun::security::x509

#endif //__sun_security_x509_PolicyMappingsExtension__

