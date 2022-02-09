#ifndef __sun_security_provider_certpath_ForwardState__
#define __sun_security_provider_certpath_ForwardState__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\ForwardState.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.HashSet.h"
#include "java.util.List.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.State.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.X509CertImpl.h"

namespace sun::security::provider::certpath{
class ForwardState : public sun::security::provider::certpath::State {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	bool init;
public:
	std::shared_ptr<sun::security::x509::X509CertImpl> cert;
	std::shared_ptr<java::util::ArrayList<java::security::cert::PKIXCertPathChecker>> forwardCheckers;
	std::shared_ptr<javax::security::auth::x500::X500Principal> issuerDN;
	bool keyParamsNeededFlag;
	std::shared_ptr<java::util::HashSet<sun::security::x509::GeneralNameInterface>> subjectNamesTraversed;
	int traversedCACerts;
	static void static_cinit();
	ForwardState();
	std::shared_ptr<java::lang::Object> virtual clone();
	void virtual initState(std::shared_ptr<java::util::List<java::security::cert::PKIXCertPathChecker>> certPathCheckers);
	bool virtual isInitial();
	bool virtual keyParamsNeeded();
	std::shared_ptr<java::lang::String> virtual toString();
	void virtual updateState(std::shared_ptr<java::security::cert::X509Certificate> cert);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::ForwardState::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~ForwardState(){
	}

}; // class ForwardState
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_ForwardState__

