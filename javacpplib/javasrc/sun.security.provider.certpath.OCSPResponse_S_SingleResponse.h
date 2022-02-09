#ifndef __sun_security_provider_certpath_OCSPResponse_S_SingleResponse__
#define __sun_security_provider_certpath_OCSPResponse_S_SingleResponse__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSPResponse$SingleResponse.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.cert.CRLReason.h"
#include "java.security.cert.Extension.h"
#include "java.util.Date.h"
#include "java.util.Map.h"
#include "sun.security.provider.certpath.CertId.h"
#include "sun.security.provider.certpath.OCSP_S_RevocationStatus_S_CertStatus.h"
#include "sun.security.provider.certpath.OCSP_S_RevocationStatus.h"
#include "sun.security.util.DerValue.h"

namespace sun::security::provider::certpath{
class OCSPResponse_S_SingleResponse : public sun::security::provider::certpath::OCSP_S_RevocationStatus {
protected:
private:
	std::shared_ptr<sun::security::provider::certpath::CertId> certId;
	std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> certStatus;
	std::shared_ptr<java::util::Date> nextUpdate;
	std::shared_ptr<java::security::cert::CRLReason> revocationReason;
	std::shared_ptr<java::util::Date> revocationTime;
	std::shared_ptr<java::util::Map<java::lang::String,java::security::cert::Extension>> singleExtensions;
	std::shared_ptr<java::util::Date> thisUpdate;
	OCSPResponse_S_SingleResponse(std::shared_ptr<sun::security::util::DerValue> der);
	std::shared_ptr<sun::security::provider::certpath::CertId> virtual getCertId();
public:
	static std::shared_ptr<java::util::Date> _get0(std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> _this);
	static std::shared_ptr<java::util::Date> _get1(std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> _this);
	static std::shared_ptr<sun::security::provider::certpath::CertId> _wrap0(std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> _this);
	OCSPResponse_S_SingleResponse(std::shared_ptr<sun::security::util::DerValue> der,std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_SingleResponse> _this1);
	std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> virtual getCertStatus();
	std::shared_ptr<java::security::cert::CRLReason> virtual getRevocationReason();
	std::shared_ptr<java::util::Date> virtual getRevocationTime();
	std::shared_ptr<java::util::Map<java::lang::String,java::security::cert::Extension>> virtual getSingleExtensions();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~OCSPResponse_S_SingleResponse(){
	}

}; // class OCSPResponse_S_SingleResponse
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_OCSPResponse_S_SingleResponse__

