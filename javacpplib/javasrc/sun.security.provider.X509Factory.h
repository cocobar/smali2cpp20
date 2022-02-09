#ifndef __sun_security_provider_X509Factory__
#define __sun_security_provider_X509Factory__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\X509Factory.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.security.cert.X509CRL.h"
#include "java.security.cert.X509Certificate.h"
#include "sun.security.util.Cache.h"
#include "sun.security.x509.X509CRLImpl.h"
#include "sun.security.x509.X509CertImpl.h"

namespace sun::security::provider{
class X509Factory : public java::lang::Object {
protected:
private:
	static int ENC_MAX_LENGTH;
	static std::shared_ptr<sun::security::util::Cache<java::lang::Object,sun::security::x509::X509CertImpl>> certCache;
	static std::shared_ptr<sun::security::util::Cache<java::lang::Object,sun::security::x509::X509CRLImpl>> crlCache;
	static void addToCache(std::shared_ptr<sun::security::util::Cache<java::lang::Object,V>> cache,std::shared_ptr<unsigned char[]> encoding,std::shared_ptr<V> value);
	static std::shared_ptr<V> getFromCache(std::shared_ptr<sun::security::util::Cache<K,V>> cache,std::shared_ptr<unsigned char[]> encoding);
public:
	static void static_cinit();
	X509Factory();
	static std::shared_ptr<sun::security::x509::X509CRLImpl> intern(std::shared_ptr<java::security::cert::X509CRL> c);
	static std::shared_ptr<sun::security::x509::X509CertImpl> intern(std::shared_ptr<java::security::cert::X509Certificate> c);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::X509Factory::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~X509Factory(){
	}

}; // class X509Factory
}; // namespace sun::security::provider

#endif //__sun_security_provider_X509Factory__

