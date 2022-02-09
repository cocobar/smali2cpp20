#ifndef __sun_security_provider_certpath_SunCertPathBuilder__
#define __sun_security_provider_certpath_SunCertPathBuilder__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\SunCertPathBuilder.smali
#include "java2ctype.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertPathBuilderResult.h"
#include "java.security.cert.CertPathBuilderSpi.h"
#include "java.security.cert.CertPathChecker.h"
#include "java.security.cert.CertPathParameters.h"
#include "java.security.cert.CertSelector.h"
#include "java.security.cert.CertificateFactory.h"
#include "java.security.cert.PKIXCertPathBuilderResult.h"
#include "java.security.cert.PolicyNode.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.LinkedList.h"
#include "java.util.List.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.ForwardBuilder.h"
#include "sun.security.provider.certpath.ForwardState.h"
#include "sun.security.provider.certpath.PKIX_S_BuilderParams.h"
#include "sun.security.provider.certpath.Vertex.h"
#include "sun.security.util.Debug.h"

namespace sun::security::provider::certpath{
class SunCertPathBuilder : public java::security::cert::CertPathBuilderSpi {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	std::shared_ptr<sun::security::provider::certpath::PKIX_S_BuilderParams> buildParams;
	std::shared_ptr<java::security::cert::CertificateFactory> cf;
	std::shared_ptr<java::security::PublicKey> finalPublicKey;
	bool pathCompleted;
	std::shared_ptr<java::security::cert::PolicyNode> policyTreeResult;
	std::shared_ptr<java::security::cert::TrustAnchor> trustAnchor;
	static std::shared_ptr<java::util::List<sun::security::provider::certpath::Vertex>> addVertices(std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> certs,std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> adjList);
	static bool anchorIsTarget(std::shared_ptr<java::security::cert::TrustAnchor> anchor,std::shared_ptr<java::security::cert::CertSelector> sel);
	std::shared_ptr<java::security::cert::PKIXCertPathBuilderResult> virtual build();
	std::shared_ptr<java::security::cert::PKIXCertPathBuilderResult> virtual buildCertPath(bool searchAllCertStores,std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> adjList);
	void virtual buildForward(std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> adjacencyList,std::shared_ptr<java::util::LinkedList<java::security::cert::X509Certificate>> certPathList,bool searchAllCertStores);
	void virtual depthFirstSearchForward(std::shared_ptr<javax::security::auth::x500::X500Principal> dN,std::shared_ptr<sun::security::provider::certpath::ForwardState> currentState,std::shared_ptr<sun::security::provider::certpath::ForwardBuilder> builder,std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> adjList,std::shared_ptr<java::util::LinkedList<java::security::cert::X509Certificate>> cpList);
public:
	static void static_cinit();
	SunCertPathBuilder();
	std::shared_ptr<java::security::cert::CertPathBuilderResult> virtual engineBuild(std::shared_ptr<java::security::cert::CertPathParameters> params);
	std::shared_ptr<java::security::cert::CertPathChecker> virtual engineGetRevocationChecker();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::SunCertPathBuilder::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SunCertPathBuilder(){
	}

}; // class SunCertPathBuilder
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_SunCertPathBuilder__

