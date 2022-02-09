#ifndef __sun_security_provider_certpath_OCSPRequest__
#define __sun_security_provider_certpath_OCSPRequest__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSPRequest.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.cert.Extension.h"
#include "java.util.List.h"
#include "sun.security.provider.certpath.CertId.h"
#include "sun.security.util.Debug.h"

namespace sun::security::provider::certpath{
class OCSPRequest : public java::lang::Object {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	static bool dump;
	std::shared_ptr<java::util::List<sun::security::provider::certpath::CertId>> certIds;
	std::shared_ptr<java::util::List<java::security::cert::Extension>> extensions;
	std::shared_ptr<unsigned char[]> nonce;
public:
	static void static_cinit();
	OCSPRequest(std::shared_ptr<java::util::List<sun::security::provider::certpath::CertId>> certIds);
	OCSPRequest(std::shared_ptr<java::util::List<sun::security::provider::certpath::CertId>> certIds,std::shared_ptr<java::util::List<java::security::cert::Extension>> extensions);
	OCSPRequest(std::shared_ptr<sun::security::provider::certpath::CertId> certId);
	unsigned char virtual encodeBytes();
	std::shared_ptr<java::util::List<sun::security::provider::certpath::CertId>> virtual getCertIds();
	unsigned char virtual getNonce();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::OCSPRequest::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~OCSPRequest(){
	}

}; // class OCSPRequest
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_OCSPRequest__

