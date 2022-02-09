#ifndef __sun_security_provider_certpath_CertStoreHelper_S_1__
#define __sun_security_provider_certpath_CertStoreHelper_S_1__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\CertStoreHelper$1.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.PrivilegedExceptionAction.h"
#include "sun.security.provider.certpath.CertStoreHelper.h"

namespace sun::security::provider::certpath{
class CertStoreHelper_S_1 : public java::security::PrivilegedExceptionAction<sun::security::provider::certpath::CertStoreHelper> {
protected:
private:
public:
	std::shared_ptr<java::lang::String> val_S_cl;
	std::shared_ptr<java::lang::String> val_S_type;
	CertStoreHelper_S_1(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::lang::String> var1);
	std::shared_ptr<sun::security::provider::certpath::CertStoreHelper> virtual run();
public:
	virtual ~CertStoreHelper_S_1(){
	}

}; // class CertStoreHelper_S_1
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_CertStoreHelper_S_1__

