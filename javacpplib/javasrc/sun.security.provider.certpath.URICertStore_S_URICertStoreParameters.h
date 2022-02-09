#ifndef __sun_security_provider_certpath_URICertStore_S_URICertStoreParameters__
#define __sun_security_provider_certpath_URICertStore_S_URICertStoreParameters__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\URICertStore$URICertStoreParameters.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.net.URI.h"
#include "java.security.cert.CertStoreParameters.h"

namespace sun::security::provider::certpath{
class URICertStore_S_URICertStoreParameters : public java::security::cert::CertStoreParameters {
protected:
private:
	int hashCode;
	std::shared_ptr<java::net::URI> uri;
public:
	static std::shared_ptr<java::net::URI> _get0(std::shared_ptr<sun::security::provider::certpath::URICertStore_S_URICertStoreParameters> _this);
	URICertStore_S_URICertStoreParameters(std::shared_ptr<java::net::URI> uri);
	std::shared_ptr<java::lang::Object> virtual clone();
	bool virtual equals(std::shared_ptr<java::lang::Object> obj);
	int virtual hashCode();
public:
	virtual ~URICertStore_S_URICertStoreParameters(){
	}

}; // class URICertStore_S_URICertStoreParameters
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_URICertStore_S_URICertStoreParameters__

