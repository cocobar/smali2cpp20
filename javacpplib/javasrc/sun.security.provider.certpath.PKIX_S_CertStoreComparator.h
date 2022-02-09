#ifndef __sun_security_provider_certpath_PKIX_S_CertStoreComparator__
#define __sun_security_provider_certpath_PKIX_S_CertStoreComparator__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIX$CertStoreComparator.smali
#include "java2ctype.h"
#include "java.security.cert.CertStore.h"
#include "java.util.Comparator.h"

namespace sun::security::provider::certpath{
class PKIX_S_CertStoreComparator : public java::util::Comparator<java::security::cert::CertStore> {
protected:
private:
	PKIX_S_CertStoreComparator();
public:
	PKIX_S_CertStoreComparator(std::shared_ptr<sun::security::provider::certpath::PKIX_S_CertStoreComparator> _this0);
	int virtual compare(std::shared_ptr<java::security::cert::CertStore> store1,std::shared_ptr<java::security::cert::CertStore> store2);
public:
	virtual ~PKIX_S_CertStoreComparator(){
	}

}; // class PKIX_S_CertStoreComparator
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_PKIX_S_CertStoreComparator__

