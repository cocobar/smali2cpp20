#ifndef __sun_security_provider_certpath_PolicyNodeImpl__
#define __sun_security_provider_certpath_PolicyNodeImpl__
// H L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PolicyNodeImpl.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.cert.PolicyNode.h"
#include "java.security.cert.PolicyQualifierInfo.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.Set.h"

namespace sun::security::provider::certpath{
class PolicyNodeImpl : public java::security::cert::PolicyNode {
protected:
private:
	static std::shared_ptr<java::lang::String> ANY_POLICY;
	bool isImmutable;
	std::shared_ptr<java::util::HashSet<sun::security::provider::certpath::PolicyNodeImpl>> mChildren;
	bool mCriticalityIndicator;
	int mDepth;
	std::shared_ptr<java::util::HashSet<java::lang::String>> mExpectedPolicySet;
	bool mOriginalExpectedPolicySet;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> mParent;
	std::shared_ptr<java::util::HashSet<java::security::cert::PolicyQualifierInfo>> mQualifierSet;
	std::shared_ptr<java::lang::String> mValidPolicy;
	void virtual addChild(std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> child);
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> virtual copyTree(std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> parent);
	void virtual getPolicyNodes(int depth,std::shared_ptr<java::util::Set<sun::security::provider::certpath::PolicyNodeImpl>> set);
	std::shared_ptr<java::util::Set<sun::security::provider::certpath::PolicyNodeImpl>> virtual getPolicyNodesExpectedHelper(int depth,std::shared_ptr<java::lang::String> expectedOID,bool matchAny);
	static std::shared_ptr<java::lang::String> policyToString(std::shared_ptr<java::lang::String> oid);
public:
	PolicyNodeImpl(std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> parent,std::shared_ptr<java::lang::String> validPolicy,std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> qualifierSet,bool criticalityIndicator,std::shared_ptr<java::util::Set<java::lang::String>> expectedPolicySet,bool generatedByPolicyMapping);
	PolicyNodeImpl(std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> parent,std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> node);
	void virtual addExpectedPolicy(std::shared_ptr<java::lang::String> expectedPolicy);
	std::shared_ptr<java::lang::String> virtual asString();
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> virtual copyTree();
	void virtual deleteChild(std::shared_ptr<java::security::cert::PolicyNode> childNode);
	std::shared_ptr<java::util::Iterator<sun::security::provider::certpath::PolicyNodeImpl>> virtual getChildren();
	int virtual getDepth();
	std::shared_ptr<java::util::Set<java::lang::String>> virtual getExpectedPolicies();
	std::shared_ptr<java::security::cert::PolicyNode> virtual getParent();
	std::shared_ptr<java::util::Set<sun::security::provider::certpath::PolicyNodeImpl>> virtual getPolicyNodes(int depth);
	std::shared_ptr<java::util::Set<sun::security::provider::certpath::PolicyNodeImpl>> virtual getPolicyNodesExpected(int depth,std::shared_ptr<java::lang::String> expectedOID,bool matchAny);
	std::shared_ptr<java::util::Set<sun::security::provider::certpath::PolicyNodeImpl>> virtual getPolicyNodesValid(int depth,std::shared_ptr<java::lang::String> validOID);
	std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> virtual getPolicyQualifiers();
	std::shared_ptr<java::lang::String> virtual getValidPolicy();
	bool virtual isCritical();
	bool virtual isImmutable();
	void virtual prune(int depth);
	void virtual setImmutable();
	std::shared_ptr<java::lang::String> virtual toString();
public:
	virtual ~PolicyNodeImpl(){
	}

}; // class PolicyNodeImpl
}; // namespace sun::security::provider::certpath

#endif //__sun_security_provider_certpath_PolicyNodeImpl__

