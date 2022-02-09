#ifndef __sun_security_provider_certpath_PKIX_S_CertStoreTypeException__
#define __sun_security_provider_certpath_PKIX_S_CertStoreTypeException__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIX$CertStoreTypeException.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.cert.CertStoreException.h"

namespace sun::security::provider::certpath{
class PKIX_S_CertStoreTypeException : public java::security::cert::CertStoreException {
protected:
private:
	static long long serialVersionUID;
	std::shared_ptr<java::lang::String> type;
public:
	PKIX_S_CertStoreTypeException(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::security::cert::CertStoreException> cse);
	std::shared_ptr<java::lang::String> virtual getType();
public:
	virtual ~PKIX_S_CertStoreTypeException(){
	}

}; // class PKIX_S_CertStoreTypeException
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_PKIX_S_CertStoreTypeException__

