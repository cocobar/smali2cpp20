#ifndef __sun_security_provider_certpath_PKIX_S_CertStoreComparator__
#define __sun_security_provider_certpath_PKIX_S_CertStoreComparator__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIX$CertStoreComparator.smali
#include "java2ctype.h"
#include "java.security.cert.CertStore.h"
#include "java.util.Comparator.h"

namespace sun::security::provider::certpath{
class PKIX_S_CertStoreComparator : public java::util::Comparator<java::security::cert::CertStore> {
public:
	PKIX_S_CertStoreComparator();
	virtual ~PKIX_S_CertStoreComparator();

}; // class PKIX_S_CertStoreComparator
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_PKIX_S_CertStoreComparator__

