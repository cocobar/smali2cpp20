#ifndef __sun_security_provider_certpath_ForwardBuilder_S_PKIXCertComparator__
#define __sun_security_provider_certpath_ForwardBuilder_S_PKIXCertComparator__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\ForwardBuilder$PKIXCertComparator.smali
#include "java2ctype.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Comparator.h"

namespace sun::security::provider::certpath{
class ForwardBuilder_S_PKIXCertComparator : public java::util::Comparator<java::security::cert::X509Certificate> {
public:
	ForwardBuilder_S_PKIXCertComparator();
	virtual ~ForwardBuilder_S_PKIXCertComparator();

}; // class ForwardBuilder_S_PKIXCertComparator
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_ForwardBuilder_S_PKIXCertComparator__

