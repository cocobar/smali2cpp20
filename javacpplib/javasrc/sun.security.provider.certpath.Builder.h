#ifndef __sun_security_provider_certpath_Builder__
#define __sun_security_provider_certpath_Builder__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\Builder.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.LinkedList.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "sun.security.provider.certpath.PKIX_S_BuilderParams.h"
#include "sun.security.provider.certpath.State.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.NameConstraintsExtension.h"

namespace sun::security::provider::certpath{
class Builder : public java::lang::Object {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	std::shared_ptr<java::util::Set<java::lang::String>> matchingPolicies;
public:
	static bool USE_AIA;
	std::shared_ptr<sun::security::provider::certpath::PKIX_S_BuilderParams> buildParams;
	std::shared_ptr<java::security::cert::X509CertSelector> targetCertConstraints;
	static void static_cinit();
	Builder(std::shared_ptr<sun::security::provider::certpath::PKIX_S_BuilderParams> buildParams);
	static int distance(std::shared_ptr<sun::security::x509::GeneralNameInterface> base,std::shared_ptr<sun::security::x509::GeneralNameInterface> test,int incomparable);
	static int hops(std::shared_ptr<sun::security::x509::GeneralNameInterface> base,std::shared_ptr<sun::security::x509::GeneralNameInterface> test,int incomparable);
	static int targetDistance(std::shared_ptr<sun::security::x509::NameConstraintsExtension> constraints,std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<sun::security::x509::GeneralNameInterface> target);
	void addCertToPath(std::shared_ptr<java::security::cert::X509Certificate> var0,std::shared_ptr<java::util::LinkedList<java::security::cert::X509Certificate>> var1);
	bool virtual addMatchingCerts(std::shared_ptr<java::security::cert::X509CertSelector> selector,std::shared_ptr<java::util::Collection<java::security::cert::CertStore>> certStores,std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> resultCerts,bool checkAll);
	std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> getMatchingCerts(std::shared_ptr<sun::security::provider::certpath::State> var0,std::shared_ptr<java::util::List<java::security::cert::CertStore>> var1);
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getMatchingPolicies();
	bool isPathCompleted(std::shared_ptr<java::security::cert::X509Certificate> var0) = 0;
	void removeFinalCertFromPath(std::shared_ptr<java::util::LinkedList<java::security::cert::X509Certificate>> var0);
	void verifyCert(std::shared_ptr<java::security::cert::X509Certificate> var0,std::shared_ptr<sun::security::provider::certpath::State> var1,std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> var2);
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::Builder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~Builder(){
	}

}; // class Builder
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_Builder__

