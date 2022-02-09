#ifndef __sun_security_provider_certpath_X509CertificatePair__
#define __sun_security_provider_certpath_X509CertificatePair__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\X509CertificatePair.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.cert.X509Certificate.h"
#include "sun.security.util.Cache.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"

namespace sun::security::provider::certpath{
class X509CertificatePair : public java::lang::Object {
protected:
private:
	static unsigned char TAG_FORWARD;
	static unsigned char TAG_REVERSE;
	static std::shared_ptr<sun::security::util::Cache<java::lang::Object,sun::security::provider::certpath::X509CertificatePair>> cache;
	std::shared_ptr<unsigned char[]> encoded;
	std::shared_ptr<java::security::cert::X509Certificate> forward;
	std::shared_ptr<java::security::cert::X509Certificate> reverse;
	X509CertificatePair(std::shared_ptr<unsigned char[]> encoded);
	void virtual checkPair();
	void virtual emit(std::shared_ptr<sun::security::util::DerOutputStream> out);
	void virtual parse(std::shared_ptr<sun::security::util::DerValue> val);
public:
	static void static_cinit();
	X509CertificatePair();
	X509CertificatePair(std::shared_ptr<java::security::cert::X509Certificate> forward,std::shared_ptr<java::security::cert::X509Certificate> reverse);
	static void clearCache();
	static std::shared_ptr<sun::security::provider::certpath::X509CertificatePair> generateCertificatePair(std::shared_ptr<unsigned char[]> encoded);
	unsigned char virtual getEncoded();
	std::shared_ptr<java::security::cert::X509Certificate> virtual getForward();
	std::shared_ptr<java::security::cert::X509Certificate> virtual getReverse();
	void virtual setForward(std::shared_ptr<java::security::cert::X509Certificate> cert);
	void virtual setReverse(std::shared_ptr<java::security::cert::X509Certificate> cert);
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::X509CertificatePair::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~X509CertificatePair(){
	}

}; // class X509CertificatePair
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_X509CertificatePair__

