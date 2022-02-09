#ifndef __sun_security_provider_certpath_AdaptableX509CertSelector__
#define __sun_security_provider_certpath_AdaptableX509CertSelector__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\AdaptableX509CertSelector.smali
#include "java2ctype.h"
#include "java.security.cert.X509CertSelector.hh"

namespace sun::security::provider::certpath{
class AdaptableX509CertSelector : public java::security::cert::X509CertSelector {
public:
	AdaptableX509CertSelector();
	virtual ~AdaptableX509CertSelector();

}; // class AdaptableX509CertSelector
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_AdaptableX509CertSelector__

