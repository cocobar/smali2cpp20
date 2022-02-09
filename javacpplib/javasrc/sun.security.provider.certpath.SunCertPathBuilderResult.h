#ifndef __sun_security_provider_certpath_SunCertPathBuilderResult__
#define __sun_security_provider_certpath_SunCertPathBuilderResult__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\SunCertPathBuilderResult.smali
#include "java2ctype.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.PKIXCertPathBuilderResult.h"
#include "java.security.cert.PolicyNode.h"
#include "java.security.cert.TrustAnchor.h"
#include "sun.security.provider.certpath.AdjacencyList.h"
#include "sun.security.util.Debug.h"

namespace sun::security::provider::certpath{
class SunCertPathBuilderResult : public java::security::cert::PKIXCertPathBuilderResult {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	std::shared_ptr<sun::security::provider::certpath::AdjacencyList> adjList;
public:
	static void static_cinit();
	SunCertPathBuilderResult(std::shared_ptr<java::security::cert::CertPath> certPath,std::shared_ptr<java::security::cert::TrustAnchor> trustAnchor,std::shared_ptr<java::security::cert::PolicyNode> policyTree,std::shared_ptr<java::security::PublicKey> subjectPublicKey,std::shared_ptr<sun::security::provider::certpath::AdjacencyList> adjList);
	std::shared_ptr<sun::security::provider::certpath::AdjacencyList> virtual getAdjacencyList();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::SunCertPathBuilderResult::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SunCertPathBuilderResult(){
	}

}; // class SunCertPathBuilderResult
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_SunCertPathBuilderResult__

