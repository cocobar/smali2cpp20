#ifndef __sun_security_provider_certpath_CertStoreHelper__
#define __sun_security_provider_certpath_CertStoreHelper__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\CertStoreHelper.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.net.URI.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.CertStoreException.h"
#include "java.security.cert.X509CRLSelector.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.util.Collection.h"
#include "java.util.Map.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.util.Cache.h"

namespace sun::security::provider::certpath{
class CertStoreHelper : public java::lang::Object {
protected:
private:
	static int NUM_TYPES;
	static std::shared_ptr<sun::security::util::Cache<java::lang::String,sun::security::provider::certpath::CertStoreHelper>> cache;
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> classMap;
public:
	static std::shared_ptr<sun::security::util::Cache> _get0();
	static void static_cinit();
	CertStoreHelper();
	static std::shared_ptr<sun::security::provider::certpath::CertStoreHelper> getInstance(std::shared_ptr<java::lang::String> type);
	static bool isCausedByNetworkIssue(std::shared_ptr<java::lang::String> type,std::shared_ptr<java::security::cert::CertStoreException> cse);
	std::shared_ptr<java::security::cert::CertStore> getCertStore(std::shared_ptr<java::net::URI> var0);
	bool isCausedByNetworkIssue(std::shared_ptr<java::security::cert::CertStoreException> var0) = 0;
	std::shared_ptr<java::security::cert::X509CRLSelector> wrap(std::shared_ptr<java::security::cert::X509CRLSelector> var0,std::shared_ptr<java::util::Collection<javax::security::auth::x500::X500Principal>> var1,std::shared_ptr<java::lang::String> var2);
	std::shared_ptr<java::security::cert::X509CertSelector> wrap(std::shared_ptr<java::security::cert::X509CertSelector> var0,std::shared_ptr<javax::security::auth::x500::X500Principal> var1,std::shared_ptr<java::lang::String> var2);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::CertStoreHelper::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~CertStoreHelper(){
	}

}; // class CertStoreHelper
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_CertStoreHelper__

