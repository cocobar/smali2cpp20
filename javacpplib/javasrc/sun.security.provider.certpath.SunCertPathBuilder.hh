#ifndef __sun_security_provider_certpath_SunCertPathBuilder__
#define __sun_security_provider_certpath_SunCertPathBuilder__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\SunCertPathBuilder.smali
#include "java2ctype.h"
#include "java.security.cert.CertPathBuilderSpi.hh"

namespace sun::security::provider::certpath{
class SunCertPathBuilder : public java::security::cert::CertPathBuilderSpi {
public:
	SunCertPathBuilder();
	virtual ~SunCertPathBuilder();

}; // class SunCertPathBuilder
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_SunCertPathBuilder__

