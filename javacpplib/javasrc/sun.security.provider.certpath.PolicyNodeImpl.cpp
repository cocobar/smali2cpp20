// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PolicyNodeImpl.smali
#include "java2ctype.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.PolicyNode.h"
#include "java.security.cert.PolicyQualifierInfo.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.Set.h"
#include "sun.security.provider.certpath.PolicyNodeImpl.h"

static sun::security::provider::certpath::PolicyNodeImpl::ANY_POLICY = std::make_shared<java::lang::String>("2.5.29.32.0");
// .method constructor <init>(Lsun/security/provider/certpath/PolicyNodeImpl;Ljava/lang/String;Ljava/util/Set;ZLjava/util/Set;Z)V
sun::security::provider::certpath::PolicyNodeImpl::PolicyNodeImpl(std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> parent,std::shared_ptr<java::lang::String> validPolicy,std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> qualifierSet,bool criticalityIndicator,std::shared_ptr<java::util::Set<java::lang::String>> expectedPolicySet,bool generatedByPolicyMapping)
{
	
	bool cVar0;
	std::shared_ptr<java::util::HashSet> cVar1;
	std::shared_ptr<java::util::HashSet> cVar2;
	std::shared_ptr<java::util::HashSet> cVar3;
	std::shared_ptr<java::util::HashSet> cVar5;
	std::shared_ptr<java::util::HashSet> cVar4;
	
	//    .param p1, "parent"    # Lsun/security/provider/certpath/PolicyNodeImpl;
	//    .param p2, "validPolicy"    # Ljava/lang/String;
	//    .param p4, "criticalityIndicator"    # Z
	//    .param p6, "generatedByPolicyMapping"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 068        value = {
	// 069            "(",
	// 070            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 071            "Ljava/lang/String;",
	// 072            "Ljava/util/Set",
	// 073            "<",
	// 074            "Ljava/security/cert/PolicyQualifierInfo;",
	// 075            ">;Z",
	// 076            "Ljava/util/Set",
	// 077            "<",
	// 078            "Ljava/lang/String;",
	// 079            ">;Z)V"
	// 080        }
	// 081    .end annotation
	//    .local p3, "qualifierSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/PolicyQualifierInfo;>;"
	//    .local p5, "expectedPolicySet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	cVar0 = 0x0;
	// 089    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->isImmutable = cVar0;
	this->mParent = parent;
	cVar1 = std::make_shared<java::util::HashSet>();
	this->mChildren = cVar1;
	if ( !(validPolicy) )  
		goto label_cond_3f;
	this->mValidPolicy = validPolicy;
label_goto_13:
	if ( !(qualifierSet) )  
		goto label_cond_45;
	cVar2 = std::make_shared<java::util::HashSet>(qualifierSet);
	this->mQualifierSet = cVar2;
label_goto_1c:
	this->mCriticalityIndicator = criticalityIndicator;
	if ( !(expectedPolicySet) )  
		goto label_cond_4d;
	cVar3 = std::make_shared<java::util::HashSet>(expectedPolicySet);
	this->mExpectedPolicySet = cVar3;
label_goto_27:
	this->mOriginalExpectedPolicySet = ( generatedByPolicyMapping ^ 0x1);
	if ( !(this->mParent) )  
		goto label_cond_55;
	this->mDepth = ( this->mParent->getDepth() + 0x1);
	this->mParent->addChild(this);
label_goto_3e:
	return;
	// 166    .line 99
label_cond_3f:
	this->mValidPolicy = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	goto label_goto_13;
	// 174    .line 104
label_cond_45:
	cVar4 = std::make_shared<java::util::HashSet>();
	this->mQualifierSet = cVar4;
	goto label_goto_1c;
	// 184    .line 111
label_cond_4d:
	cVar5 = std::make_shared<java::util::HashSet>();
	this->mExpectedPolicySet = cVar5;
	goto label_goto_27;
	// 194    .line 120
label_cond_55:
	this->mDepth = cVar0;
	goto label_goto_3e;

}
// .method constructor <init>(Lsun/security/provider/certpath/PolicyNodeImpl;Lsun/security/provider/certpath/PolicyNodeImpl;)V
sun::security::provider::certpath::PolicyNodeImpl::PolicyNodeImpl(std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> parent,std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> node)
{
	
	//    .param p1, "parent"    # Lsun/security/provider/certpath/PolicyNodeImpl;
	//    .param p2, "node"    # Lsun/security/provider/certpath/PolicyNodeImpl;
	sun::security::provider::certpath::PolicyNodeImpl::(parent, node->mValidPolicy, node->mQualifierSet, node->mCriticalityIndicator, node->mExpectedPolicySet, 0x0);
	return;

}
// .method private addChild(Lsun/security/provider/certpath/PolicyNodeImpl;)V
void sun::security::provider::certpath::PolicyNodeImpl::addChild(std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> child)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p1, "child"    # Lsun/security/provider/certpath/PolicyNodeImpl;
	if ( !(this->isImmutable) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyNode is immutable")));
	// throw
	throw cVar0;
	// 249    .line 218
label_cond_d:
	this->mChildren->add(child);
	return;

}
// .method private copyTree(Lsun/security/provider/certpath/PolicyNodeImpl;)Lsun/security/provider/certpath/PolicyNodeImpl;
std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> sun::security::provider::certpath::PolicyNodeImpl::copyTree(std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> parent)
{
	
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> newNode;
	std::shared_ptr<java::util::Iterator> node_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> node;
	
	//    .param p1, "parent"    # Lsun/security/provider/certpath/PolicyNodeImpl;
	newNode = std::make_shared<sun::security::provider::certpath::PolicyNodeImpl>(parent, this);
	//    .local v0, "newNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	node_S_iterator = this->mChildren->iterator();
	//    .local v2, "node$iterator":Ljava/util/Iterator;
label_goto_b:
	if ( !(node_S_iterator->hasNext()) )  
		goto label_cond_1b;
	node = node_S_iterator->next();
	node->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v1, "node":Lsun/security/provider/certpath/PolicyNodeImpl;
	node->copyTree(newNode);
	goto label_goto_b;
	// 297    .line 293
	// 298    .end local v1    # "node":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_1b:
	return newNode;

}
// .method private getPolicyNodes(ILjava/util/Set;)V
void sun::security::provider::certpath::PolicyNodeImpl::getPolicyNodes(int depth,std::shared_ptr<java::util::Set<sun::security::provider::certpath::PolicyNodeImpl>> set)
{
	
	std::shared_ptr<java::util::Iterator> node_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> node;
	
	//    .param p1, "depth"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 307        value = {
	// 308            "(I",
	// 309            "Ljava/util/Set",
	// 310            "<",
	// 311            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 312            ">;)V"
	// 313        }
	// 314    .end annotation
	//    .local p2, "set":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
	if ( this->mDepth != depth )
		goto label_cond_8;
	set->add(this);
label_cond_7:
	return;
	// 330    .line 317
label_cond_8:
	node_S_iterator = this->mChildren->iterator();
	//    .local v1, "node$iterator":Ljava/util/Iterator;
label_goto_e:
	if ( !(node_S_iterator->hasNext()) )  
		goto label_cond_7;
	node = node_S_iterator->next();
	node->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v0, "node":Lsun/security/provider/certpath/PolicyNodeImpl;
	node->getPolicyNodes(depth, set);
	goto label_goto_e;

}
// .method private getPolicyNodesExpectedHelper(ILjava/lang/String;Z)Ljava/util/Set;
std::shared_ptr<java::util::Set<sun::security::provider::certpath::PolicyNodeImpl>> sun::security::provider::certpath::PolicyNodeImpl::getPolicyNodesExpectedHelper(int depth,std::shared_ptr<java::lang::String> expectedOID,bool matchAny)
{
	
	std::shared_ptr<java::util::HashSet> set;
	std::shared_ptr<java::util::Iterator> node_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> node;
	
	//    .param p1, "depth"    # I
	//    .param p2, "expectedOID"    # Ljava/lang/String;
	//    .param p3, "matchAny"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 365        value = {
	// 366            "(I",
	// 367            "Ljava/lang/String;",
	// 368            "Z)",
	// 369            "Ljava/util/Set",
	// 370            "<",
	// 371            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 372            ">;"
	// 373        }
	// 374    .end annotation
	set = std::make_shared<java::util::HashSet>();
	//    .local v2, "set":Ljava/util/HashSet;, "Ljava/util/HashSet<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
	if ( this->mDepth >= depth )
		goto label_cond_23;
	node_S_iterator = this->mChildren->iterator();
	//    .local v1, "node$iterator":Ljava/util/Iterator;
label_goto_f:
	if ( !(node_S_iterator->hasNext()) )  
		goto label_cond_33;
	node = node_S_iterator->next();
	node->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v0, "node":Lsun/security/provider/certpath/PolicyNodeImpl;
	set->addAll(node->getPolicyNodesExpectedHelper(depth, expectedOID, matchAny));
	goto label_goto_f;
	// 419    .line 356
	// 420    .end local v0    # "node":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 421    .end local v1    # "node$iterator":Ljava/util/Iterator;
label_cond_23:
	if ( !(matchAny) )  
		goto label_cond_34;
	if ( !(this->mExpectedPolicySet->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")))) )  
		goto label_cond_33;
	set->add(this);
label_cond_33:
label_goto_33:
	return set;
	// 444    .line 360
label_cond_34:
	if ( !(this->mExpectedPolicySet->contains(expectedOID)) )  
		goto label_cond_33;
	set->add(this);
	goto label_goto_33;

}
// .method private static policyToString(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::PolicyNodeImpl::policyToString(std::shared_ptr<java::lang::String> oid)
{
	
	//    .param p0, "oid"    # Ljava/lang/String;
	if ( !(oid->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")))) )  
		goto label_cond_d;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("anyPolicy"));
	// 479    .line 395
label_cond_d:
	return oid;

}
// .method addExpectedPolicy(Ljava/lang/String;)V
void sun::security::provider::certpath::PolicyNodeImpl::addExpectedPolicy(std::shared_ptr<java::lang::String> expectedPolicy)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p1, "expectedPolicy"    # Ljava/lang/String;
	if ( !(this->isImmutable) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyNode is immutable")));
	// throw
	throw cVar0;
	// 505    .line 233
label_cond_d:
	if ( !(this->mOriginalExpectedPolicySet) )  
		goto label_cond_19;
	this->mExpectedPolicySet->clear();
	this->mOriginalExpectedPolicySet = 0x0;
label_cond_19:
	this->mExpectedPolicySet->add(expectedPolicy);
	return;

}
// .method asString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::PolicyNodeImpl::asString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	int i;
	std::shared_ptr<java::util::Iterator> policy_S_iterator;
	std::shared_ptr<java::lang::String> policy;
	
	if ( this->mParent )     
		goto label_cond_8;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("anyPolicy  ROOT\n"));
	// 545    .line 406
label_cond_8:
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "sb":Ljava/lang/StringBuilder;
	i = 0x0;
	//    .local v0, "i":I
	//    .local v1, "n":I
label_goto_12:
	if ( i >= this->getDepth() )
		goto label_cond_1d;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ")));
	i = ( i + 0x1);
	goto label_goto_12;
	// 574    .line 410
label_cond_1d:
	sb->append(sun::security::provider::certpath::PolicyNodeImpl::policyToString(this->getValidPolicy()));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  CRIT: ")));
	sb->append(this->isCritical());
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  EP: ")));
	policy_S_iterator = this->getExpectedPolicies()->iterator();
	//    .local v3, "policy$iterator":Ljava/util/Iterator;
label_goto_43:
	if ( !(policy_S_iterator->hasNext()) )  
		goto label_cond_5d;
	policy = policy_S_iterator->next();
	policy->checkCast("java::lang::String");
	//    .local v2, "policy":Ljava/lang/String;
	sb->append(sun::security::provider::certpath::PolicyNodeImpl::policyToString(policy));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" ")));
	goto label_goto_43;
	// 641    .line 418
	// 642    .end local v2    # "policy":Ljava/lang/String;
label_cond_5d:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" (")));
	sb->append(this->getDepth());
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")\n")));
	return sb->toString();

}
// .method copyTree()Lsun/security/provider/certpath/PolicyNodeImpl;
std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> sun::security::provider::certpath::PolicyNodeImpl::copyTree()
{
	
	return this->copyTree(0x0);

}
// .method deleteChild(Ljava/security/cert/PolicyNode;)V
void sun::security::provider::certpath::PolicyNodeImpl::deleteChild(std::shared_ptr<java::security::cert::PolicyNode> childNode)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	//    .param p1, "childNode"    # Ljava/security/cert/PolicyNode;
	if ( !(this->isImmutable) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyNode is immutable")));
	// throw
	throw cVar0;
	// 701    .line 273
label_cond_d:
	this->mChildren->remove(childNode);
	return;

}
// .method public getChildren()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<sun::security::provider::certpath::PolicyNodeImpl>> sun::security::provider::certpath::PolicyNodeImpl::getChildren()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 714        value = {
	// 715            "()",
	// 716            "Ljava/util/Iterator",
	// 717            "<",
	// 718            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 719            ">;"
	// 720        }
	// 721    .end annotation
	return java::util::Collections::unmodifiableSet(this->mChildren)->iterator();

}
// .method public getDepth()I
int sun::security::provider::certpath::PolicyNodeImpl::getDepth()
{
	
	return this->mDepth;

}
// .method public getExpectedPolicies()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::provider::certpath::PolicyNodeImpl::getExpectedPolicies()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 751        value = {
	// 752            "()",
	// 753            "Ljava/util/Set",
	// 754            "<",
	// 755            "Ljava/lang/String;",
	// 756            ">;"
	// 757        }
	// 758    .end annotation
	return java::util::Collections::unmodifiableSet(this->mExpectedPolicySet);

}
// .method public getParent()Ljava/security/cert/PolicyNode;
std::shared_ptr<java::security::cert::PolicyNode> sun::security::provider::certpath::PolicyNodeImpl::getParent()
{
	
	return this->mParent;

}
// .method getPolicyNodes(I)Ljava/util/Set;
std::shared_ptr<java::util::Set<sun::security::provider::certpath::PolicyNodeImpl>> sun::security::provider::certpath::PolicyNodeImpl::getPolicyNodes(int depth)
{
	
	std::shared_ptr<java::util::HashSet> set;
	
	//    .param p1, "depth"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 785        value = {
	// 786            "(I)",
	// 787            "Ljava/util/Set",
	// 788            "<",
	// 789            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 790            ">;"
	// 791        }
	// 792    .end annotation
	set = std::make_shared<java::util::HashSet>();
	//    .local v0, "set":Ljava/util/Set;, "Ljava/util/Set<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
	this->getPolicyNodes(depth, set);
	return set;

}
// .method getPolicyNodesExpected(ILjava/lang/String;Z)Ljava/util/Set;
std::shared_ptr<java::util::Set<sun::security::provider::certpath::PolicyNodeImpl>> sun::security::provider::certpath::PolicyNodeImpl::getPolicyNodesExpected(int depth,std::shared_ptr<java::lang::String> expectedOID,bool matchAny)
{
	
	//    .param p1, "depth"    # I
	//    .param p2, "expectedOID"    # Ljava/lang/String;
	//    .param p3, "matchAny"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 814        value = {
	// 815            "(I",
	// 816            "Ljava/lang/String;",
	// 817            "Z)",
	// 818            "Ljava/util/Set",
	// 819            "<",
	// 820            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 821            ">;"
	// 822        }
	// 823    .end annotation
	if ( !(expectedOID->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")))) )  
		goto label_cond_e;
	return this->getPolicyNodes(depth);
	// 842    .line 340
label_cond_e:
	return this->getPolicyNodesExpectedHelper(depth, expectedOID, matchAny);

}
// .method getPolicyNodesValid(ILjava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<sun::security::provider::certpath::PolicyNodeImpl>> sun::security::provider::certpath::PolicyNodeImpl::getPolicyNodesValid(int depth,std::shared_ptr<java::lang::String> validOID)
{
	
	std::shared_ptr<java::util::HashSet> set;
	std::shared_ptr<java::util::Iterator> node_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> node;
	
	//    .param p1, "depth"    # I
	//    .param p2, "validOID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 856        value = {
	// 857            "(I",
	// 858            "Ljava/lang/String;",
	// 859            ")",
	// 860            "Ljava/util/Set",
	// 861            "<",
	// 862            "Lsun/security/provider/certpath/PolicyNodeImpl;",
	// 863            ">;"
	// 864        }
	// 865    .end annotation
	set = std::make_shared<java::util::HashSet>();
	//    .local v2, "set":Ljava/util/HashSet;, "Ljava/util/HashSet<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
	if ( this->mDepth >= depth )
		goto label_cond_23;
	node_S_iterator = this->mChildren->iterator();
	//    .local v1, "node$iterator":Ljava/util/Iterator;
label_goto_f:
	if ( !(node_S_iterator->hasNext()) )  
		goto label_cond_2e;
	node = node_S_iterator->next();
	node->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v0, "node":Lsun/security/provider/certpath/PolicyNodeImpl;
	set->addAll(node->getPolicyNodesValid(depth, validOID));
	goto label_goto_f;
	// 910    .line 384
	// 911    .end local v0    # "node":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 912    .end local v1    # "node$iterator":Ljava/util/Iterator;
label_cond_23:
	if ( !(this->mValidPolicy->equals(validOID)) )  
		goto label_cond_2e;
	set->add(this);
label_cond_2e:
	return set;

}
// .method public getPolicyQualifiers()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> sun::security::provider::certpath::PolicyNodeImpl::getPolicyQualifiers()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 933        value = {
	// 934            "()",
	// 935            "Ljava/util/Set",
	// 936            "<",
	// 937            "Ljava/security/cert/PolicyQualifierInfo;",
	// 938            ">;"
	// 939        }
	// 940    .end annotation
	return java::util::Collections::unmodifiableSet(this->mQualifierSet);

}
// .method public getValidPolicy()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::PolicyNodeImpl::getValidPolicy()
{
	
	return this->mValidPolicy;

}
// .method public isCritical()Z
bool sun::security::provider::certpath::PolicyNodeImpl::isCritical()
{
	
	return this->mCriticalityIndicator;

}
// .method isImmutable()Z
bool sun::security::provider::certpath::PolicyNodeImpl::isImmutable()
{
	
	return this->isImmutable;

}
// .method prune(I)V
void sun::security::provider::certpath::PolicyNodeImpl::prune(int depth)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::util::Iterator> it;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> node;
	
	//    .param p1, "depth"    # I
	if ( !(this->isImmutable) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyNode is immutable")));
	// throw
	throw cVar0;
	// 1002    .line 250
label_cond_d:
	if ( this->mChildren->size() )     
		goto label_cond_16;
	return;
	// 1015    .line 253
label_cond_16:
	it = this->mChildren->iterator();
	//    .local v0, "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Lsun/security/provider/certpath/PolicyNodeImpl;>;"
label_cond_1c:
label_goto_1c:
	if ( !(it->hasNext()) )  
		goto label_cond_3d;
	node = it->next();
	node->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v1, "node":Lsun/security/provider/certpath/PolicyNodeImpl;
	node->prune(depth);
	if ( node->mChildren->size() )     
		goto label_cond_1c;
	if ( depth <= ( this->mDepth + 0x1) )
		goto label_cond_1c;
	it->remove();
	goto label_goto_1c;
	// 1064    .line 262
	// 1065    .end local v1    # "node":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_3d:
	return;

}
// .method setImmutable()V
void sun::security::provider::certpath::PolicyNodeImpl::setImmutable()
{
	
	std::shared_ptr<java::util::Iterator> node_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> node;
	
	if ( !(this->isImmutable) )  
		goto label_cond_5;
	return;
	// 1082    .line 202
label_cond_5:
	node_S_iterator = this->mChildren->iterator();
	//    .local v1, "node$iterator":Ljava/util/Iterator;
label_goto_b:
	if ( !(node_S_iterator->hasNext()) )  
		goto label_cond_1b;
	node = node_S_iterator->next();
	node->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v0, "node":Lsun/security/provider/certpath/PolicyNodeImpl;
	node->setImmutable();
	goto label_goto_b;
	// 1110    .line 205
	// 1111    .end local v0    # "node":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_1b:
	this->isImmutable = 0x1;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::PolicyNodeImpl::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buffer;
	std::shared_ptr<java::util::Iterator> node_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> node;
	
	buffer = std::make_shared<java::lang::StringBuilder>(this->asString());
	//    .local v0, "buffer":Ljava/lang/StringBuilder;
	node_S_iterator = this->mChildren->iterator();
	//    .local v2, "node$iterator":Ljava/util/Iterator;
label_goto_f:
	if ( !(node_S_iterator->hasNext()) )  
		goto label_cond_1f;
	node = node_S_iterator->next();
	node->checkCast("sun::security::provider::certpath::PolicyNodeImpl");
	//    .local v1, "node":Lsun/security/provider/certpath/PolicyNodeImpl;
	buffer->append(node);
	goto label_goto_f;
	// 1162    .line 186
	// 1163    .end local v1    # "node":Lsun/security/provider/certpath/PolicyNodeImpl;
label_cond_1f:
	return buffer->toString();

}


