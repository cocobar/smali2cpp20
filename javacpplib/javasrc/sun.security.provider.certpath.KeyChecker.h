#ifndef __sun_security_provider_certpath_KeyChecker__
#define __sun_security_provider_certpath_KeyChecker__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\KeyChecker.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.cert.CertSelector.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Set.h"
#include "sun.security.util.Debug.h"

namespace sun::security::provider::certpath{
class KeyChecker : public java::security::cert::PKIXCertPathChecker {
protected:
private:
	static int KEY_CERT_SIGN;
	static std::shared_ptr<sun::security::util::Debug> debug;
	int certPathLen;
	int remainingCerts;
	std::shared_ptr<java::util::Set<java::lang::String>> supportedExts;
	std::shared_ptr<java::security::cert::CertSelector> targetConstraints;
public:
	static void static_cinit();
	KeyChecker(int certPathLen,std::shared_ptr<java::security::cert::CertSelector> targetCertSel);
	static void verifyCAKeyUsage(std::shared_ptr<java::security::cert::X509Certificate> cert);
	void virtual check(std::shared_ptr<java::security::cert::Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresCritExts);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getSupportedExtensions();
	void virtual init(bool forward);
	bool virtual isForwardCheckingSupported();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::KeyChecker::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~KeyChecker(){
	}

}; // class KeyChecker
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_KeyChecker__

