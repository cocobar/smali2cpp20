#ifndef __sun_security_provider_certpath_OCSP_S_RevocationStatus__
#define __sun_security_provider_certpath_OCSP_S_RevocationStatus__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSP$RevocationStatus.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.cert.CRLReason.h"
#include "java.security.cert.Extension.h"
#include "java.util.Date.h"
#include "java.util.Map.h"
#include "sun.security.provider.certpath.OCSP_S_RevocationStatus_S_CertStatus.h"

namespace sun::security::provider::certpath{
class OCSP_S_RevocationStatus : public java::lang::Object {
protected:
private:
public:
	std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> getCertStatus() = 0;
	std::shared_ptr<java::security::cert::CRLReason> getRevocationReason() = 0;
	std::shared_ptr<java::util::Date> getRevocationTime() = 0;
	std::shared_ptr<java::util::Map<java::lang::String,java::security::cert::Extension>> getSingleExtensions();
	OCSP_S_RevocationStatus(){ };
	virtual ~OCSP_S_RevocationStatus(){ };

}; // class OCSP_S_RevocationStatus
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_OCSP_S_RevocationStatus__

