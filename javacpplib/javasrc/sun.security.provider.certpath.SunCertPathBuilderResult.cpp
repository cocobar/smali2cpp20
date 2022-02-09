// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\SunCertPathBuilderResult.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.PKIXCertPathBuilderResult.h"
#include "java.security.cert.PolicyNode.h"
#include "java.security.cert.TrustAnchor.h"
#include "sun.security.provider.certpath.AdjacencyList.h"
#include "sun.security.provider.certpath.SunCertPathBuilderResult.h"
#include "sun.security.util.Debug.h"

static sun::security::provider::certpath::SunCertPathBuilderResult::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::SunCertPathBuilderResult::static_cinit()
{
	
	sun::security::provider::certpath::SunCertPathBuilderResult::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method constructor <init>(Ljava/security/cert/CertPath;Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;Lsun/security/provider/certpath/AdjacencyList;)V
sun::security::provider::certpath::SunCertPathBuilderResult::SunCertPathBuilderResult(std::shared_ptr<java::security::cert::CertPath> certPath,std::shared_ptr<java::security::cert::TrustAnchor> trustAnchor,std::shared_ptr<java::security::cert::PolicyNode> policyTree,std::shared_ptr<java::security::PublicKey> subjectPublicKey,std::shared_ptr<sun::security::provider::certpath::AdjacencyList> adjList)
{
	
	//    .param p1, "certPath"    # Ljava/security/cert/CertPath;
	//    .param p2, "trustAnchor"    # Ljava/security/cert/TrustAnchor;
	//    .param p3, "policyTree"    # Ljava/security/cert/PolicyNode;
	//    .param p4, "subjectPublicKey"    # Ljava/security/PublicKey;
	//    .param p5, "adjList"    # Lsun/security/provider/certpath/AdjacencyList;
	java::security::cert::PKIXCertPathBuilderResult::(certPath, trustAnchor, policyTree, subjectPublicKey);
	this->adjList = adjList;
	return;

}
// .method public getAdjacencyList()Lsun/security/provider/certpath/AdjacencyList;
std::shared_ptr<sun::security::provider::certpath::AdjacencyList> sun::security::provider::certpath::SunCertPathBuilderResult::getAdjacencyList()
{
	
	return this->adjList;

}


