#ifndef __sun_security_provider_certpath_URICertStore_S_UCS__
#define __sun_security_provider_certpath_URICertStore_S_UCS__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\URICertStore$UCS.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.Provider.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.CertStoreParameters.h"
#include "java.security.cert.CertStoreSpi.h"

namespace sun::security::provider::certpath{
class URICertStore_S_UCS : public java::security::cert::CertStore {
protected:
	URICertStore_S_UCS(std::shared_ptr<java::security::cert::CertStoreSpi> spi,std::shared_ptr<java::security::Provider> p,std::shared_ptr<java::lang::String> type,std::shared_ptr<java::security::cert::CertStoreParameters> params);
private:
public:
public:
	virtual ~URICertStore_S_UCS(){
	}

}; // class URICertStore_S_UCS
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_URICertStore_S_UCS__

