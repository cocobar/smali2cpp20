#ifndef __sun_security_provider_certpath_PolicyChecker__
#define __sun_security_provider_certpath_PolicyChecker__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PolicyChecker.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.PolicyNode.h"
#include "java.security.cert.PolicyQualifierInfo.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Set.h"
#include "sun.security.provider.certpath.PolicyNodeImpl.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.CertificatePoliciesExtension.h"
#include "sun.security.x509.X509CertImpl.h"

namespace sun::security::provider::certpath{
class PolicyChecker : public java::security::cert::PKIXCertPathChecker {
protected:
private:
	static std::shared_ptr<sun::security::util::Debug> debug;
	bool anyPolicyInhibited;
	int certIndex;
	int certPathLen;
	bool expPolicyRequired;
	int explicitPolicy;
	int inhibitAnyPolicy;
	std::shared_ptr<java::util::Set<java::lang::String>> initPolicies;
	bool polMappingInhibited;
	int policyMapping;
	bool rejectPolicyQualifiers;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> rootNode;
	std::shared_ptr<java::util::Set<java::lang::String>> supportedExts;
	void virtual checkPolicy(std::shared_ptr<java::security::cert::X509Certificate> currCert);
	static bool processParents(int certIndex,bool policiesCritical,bool rejectPolicyQualifiers,std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> rootNode,std::shared_ptr<java::lang::String> curPolicy,std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> pQuals,bool matchAny);
	static std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> processPolicyMappings(std::shared_ptr<sun::security::x509::X509CertImpl> currCert,int certIndex,int policyMapping,std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> cVar7,bool policiesCritical,std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> anyQuals);
	static std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> removeInvalidNodes(std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> cVar4,int certIndex,std::shared_ptr<java::util::Set<java::lang::String>> initPolicies,std::shared_ptr<sun::security::x509::CertificatePoliciesExtension> currCertPolicies);
	static std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> rewriteLeafNodes(int certIndex,std::shared_ptr<java::util::Set<java::lang::String>> initPolicies,std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> cVar0);
public:
	static std::shared_ptr<java::lang::String> ANY_POLICY;
	static void static_cinit();
	PolicyChecker(std::shared_ptr<java::util::Set<java::lang::String>> initialPolicies,int certPathLen,bool expPolicyRequired,bool polMappingInhibited,bool anyPolicyInhibited,bool rejectPolicyQualifiers,std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> rootNode);
	static int mergeExplicitPolicy(int cVar3,std::shared_ptr<sun::security::x509::X509CertImpl> currCert,bool finalCert);
	static int mergeInhibitAnyPolicy(int cVar2,std::shared_ptr<sun::security::x509::X509CertImpl> currCert);
	static int mergePolicyMapping(int cVar3,std::shared_ptr<sun::security::x509::X509CertImpl> currCert);
	static std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> processPolicies(int certIndex,std::shared_ptr<java::util::Set<java::lang::String>> initPolicies,int cVar5,int policyMapping,int inhibitAnyPolicy,bool rejectPolicyQualifiers,std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> origRootNode,std::shared_ptr<sun::security::x509::X509CertImpl> currCert,bool finalCert);
	void virtual check(std::shared_ptr<java::security::cert::Certificate> cert,std::shared_ptr<java::util::Collection<java::lang::String>> unresCritExts);
	std::shared_ptr<java::security::cert::PolicyNode> virtual getPolicyTree();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getSupportedExtensions();
	void virtual init(bool forward);
	bool virtual isForwardCheckingSupported();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::provider::certpath::PolicyChecker::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~PolicyChecker(){
	}

}; // class PolicyChecker
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_PolicyChecker__

