#ifndef __sun_security_provider_certpath_OCSP_S_RevocationStatus_S_CertStatus__
#define __sun_security_provider_certpath_OCSP_S_RevocationStatus_S_CertStatus__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSP$RevocationStatus$CertStatus.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace sun::security::provider::certpath{
class OCSP_S_RevocationStatus_S_CertStatus : public java::lang::Enum<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> {
protected:
private:
	static std::shared_ptr<std::vector<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus>> _S_VALUES;
	OCSP_S_RevocationStatus_S_CertStatus(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> GOOD;
	static std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> REVOKED;
	static std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> UNKNOWN;
	static void static_cinit();
	static std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~OCSP_S_RevocationStatus_S_CertStatus(){
	}

}; // class OCSP_S_RevocationStatus_S_CertStatus
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_OCSP_S_RevocationStatus_S_CertStatus__

