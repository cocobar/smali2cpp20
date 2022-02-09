#ifndef __sun_security_provider_certpath_ConstraintsChecker__
#define __sun_security_provider_certpath_ConstraintsChecker__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\ConstraintsChecker.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Set.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.NameConstraintsExtension.h"

namespace sun::security::provider::certpath{
class ConstraintsChecker : public java::security::cert::PKIXCertPathChecker {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	int certPathLength;
	int i;
	int maxPathLength;
	std::shared_ptr<sun::security::x509::NameConstraintsExtension> prevNC;
	std::shared_ptr<java::util::Set<java::lang::String>> supportedExts;
	void virtual checkBasicConstraints(std::shared_ptr<java::security::cert::X509Certificate> currCert);
	void virtual verifyNameConstraints(std::shared_ptr<java::security::cert::X509Certificate> currCert);
public:
	static void static_cinit();
	ConstraintsChecker(int certPathLength);
	static int mergeBasicConstraints(std::shared_ptr<java::security::cert::X509Certificate> cert,int cVar1);
	static std::shared_ptr<sun::security::x509::NameConstraintsExtension> mergeNameConstraints(std::shared_ptr<java::security::cert::X509Certificate> currCert,std::shared_ptr<sun::security::x509::NameConstraintsExtension> prevNC);
	void virtual check(std::shared_ptr<java::security::cert::Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresCritExts);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getSupportedExtensions();
	void virtual init(bool forward);
	bool virtual isForwardCheckingSupported();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::ConstraintsChecker::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ConstraintsChecker(){
	}

}; // class ConstraintsChecker
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_ConstraintsChecker__

