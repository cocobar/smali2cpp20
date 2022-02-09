#ifndef __sun_security_provider_certpath_OCSPResponse_S_ResponseStatus__
#define __sun_security_provider_certpath_OCSPResponse_S_ResponseStatus__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSPResponse$ResponseStatus.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

namespace sun::security::provider::certpath{
class OCSPResponse_S_ResponseStatus : public java::lang::Enum<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> {
protected:
private:
	static std::shared_ptr<std::vector<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus>> _S_VALUES;
	OCSPResponse_S_ResponseStatus(std::shared_ptr<java::lang::String> var0,int var1);
public:
	static std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> INTERNAL_ERROR;
	static std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> MALFORMED_REQUEST;
	static std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> SIG_REQUIRED;
	static std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> SUCCESSFUL;
	static std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> TRY_LATER;
	static std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> UNAUTHORIZED;
	static std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> UNUSED;
	static void static_cinit();
	static std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> valueOf(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> values();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~OCSPResponse_S_ResponseStatus(){
	}

}; // class OCSPResponse_S_ResponseStatus
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_OCSPResponse_S_ResponseStatus__

