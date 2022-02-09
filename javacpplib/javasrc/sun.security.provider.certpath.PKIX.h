#ifndef __sun_security_provider_certpath_PKIX__
#define __sun_security_provider_certpath_PKIX__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIX.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathParameters.h"
#include "sun.security.provider.certpath.PKIX_S_BuilderParams.h"
#include "sun.security.provider.certpath.PKIX_S_ValidatorParams.h"
#include "sun.security.util.Debug.h"

namespace sun::security::provider::certpath{
class PKIX : public java::lang::Object {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	PKIX();
public:
	static std::shared_ptr<sun::security::util::Debug> _get0();
	static void static_cinit();
	static std::shared_ptr<sun::security::provider::certpath::PKIX_S_BuilderParams> checkBuilderParams(std::shared_ptr<java::security::cert::CertPathParameters> params);
	static std::shared_ptr<sun::security::provider::certpath::PKIX_S_ValidatorParams> checkParams(std::shared_ptr<java::security::cert::CertPath> cp,std::shared_ptr<java::security::cert::CertPathParameters> params);
	static bool isDSAPublicKeyWithoutParams(std::shared_ptr<java::security::PublicKey> publicKey);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::PKIX::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PKIX(){
	}

}; // class PKIX
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_PKIX__

