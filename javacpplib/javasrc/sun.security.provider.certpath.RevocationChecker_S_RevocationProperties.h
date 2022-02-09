#ifndef __sun_security_provider_certpath_RevocationChecker_S_RevocationProperties__
#define __sun_security_provider_certpath_RevocationChecker_S_RevocationProperties__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\RevocationChecker$RevocationProperties.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

namespace sun::security::provider::certpath{
class RevocationChecker_S_RevocationProperties : public java::lang::Object {
protected:
private:
	RevocationChecker_S_RevocationProperties();
public:
	bool crlDPEnabled;
	bool ocspEnabled;
	std::shared_ptr<java::lang::String> ocspIssuer;
	std::shared_ptr<java::lang::String> ocspSerial;
	std::shared_ptr<java::lang::String> ocspSubject;
	std::shared_ptr<java::lang::String> ocspUrl;
	bool onlyEE;
	RevocationChecker_S_RevocationProperties(std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_RevocationProperties> _this0);
public:
	virtual ~RevocationChecker_S_RevocationProperties(){
	}

}; // class RevocationChecker_S_RevocationProperties
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_RevocationChecker_S_RevocationProperties__

