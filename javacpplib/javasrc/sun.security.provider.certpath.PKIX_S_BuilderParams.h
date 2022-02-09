#ifndef __sun_security_provider_certpath_PKIX_S_BuilderParams__
#define __sun_security_provider_certpath_PKIX_S_BuilderParams__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIX$BuilderParams.smali
#include "java2ctype.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.PKIXBuilderParameters.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.util.List.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.PKIX_S_ValidatorParams.h"

namespace sun::security::provider::certpath{
class PKIX_S_BuilderParams : public sun::security::provider::certpath::PKIX_S_ValidatorParams {
protected:
private:
	std::shared_ptr<java::security::cert::PKIXBuilderParameters> params;
	std::shared_ptr<java::util::List<java::security::cert::CertStore>> stores;
	std::shared_ptr<javax::security::auth::x500::X500Principal> targetSubject;
	void virtual checkParams(std::shared_ptr<java::security::cert::PKIXBuilderParameters> params);
	static std::shared_ptr<javax::security::auth::x500::X500Principal> getTargetSubject(std::shared_ptr<java::util::List<java::security::cert::CertStore>> stores,std::shared_ptr<java::security::cert::X509CertSelector> sel);
public:
	PKIX_S_BuilderParams(std::shared_ptr<java::security::cert::PKIXBuilderParameters> params);
	std::shared_ptr<java::util::List<java::security::cert::CertStore>> virtual certStores();
	int virtual maxPathLength();
	std::shared_ptr<java::security::cert::PKIXBuilderParameters> virtual params();
	std::shared_ptr<javax::security::auth::x500::X500Principal> virtual targetSubject();
public:
	virtual ~PKIX_S_BuilderParams(){
	}

}; // class PKIX_S_BuilderParams
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_PKIX_S_BuilderParams__

