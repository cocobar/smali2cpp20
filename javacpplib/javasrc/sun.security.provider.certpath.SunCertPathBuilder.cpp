// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\SunCertPathBuilder.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Exception.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.security.GeneralSecurityException.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathBuilderException.h"
#include "java.security.cert.CertPathBuilderResult.h"
#include "java.security.cert.CertPathChecker.h"
#include "java.security.cert.CertPathParameters.h"
#include "java.security.cert.CertPathValidatorException_S_BasicReason.h"
#include "java.security.cert.CertPathValidatorException_S_Reason.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.CertSelector.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.CertificateFactory.h"
#include "java.security.cert.PKIXCertPathBuilderResult.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.PKIXReason.h"
#include "java.security.cert.PKIXRevocationChecker.h"
#include "java.security.cert.PolicyNode.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedList.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.AdjacencyList.h"
#include "sun.security.provider.certpath.AlgorithmChecker.h"
#include "sun.security.provider.certpath.BasicChecker.h"
#include "sun.security.provider.certpath.ForwardBuilder.h"
#include "sun.security.provider.certpath.ForwardState.h"
#include "sun.security.provider.certpath.PKIX_S_BuilderParams.h"
#include "sun.security.provider.certpath.PKIX.h"
#include "sun.security.provider.certpath.PolicyChecker.h"
#include "sun.security.provider.certpath.PolicyNodeImpl.h"
#include "sun.security.provider.certpath.RevocationChecker.h"
#include "sun.security.provider.certpath.State.h"
#include "sun.security.provider.certpath.SunCertPathBuilder.h"
#include "sun.security.provider.certpath.SunCertPathBuilderException.h"
#include "sun.security.provider.certpath.SunCertPathBuilderResult.h"
#include "sun.security.provider.certpath.Vertex.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::provider::certpath::SunCertPathBuilder::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::SunCertPathBuilder::static_cinit()
{
	
	sun::security::provider::certpath::SunCertPathBuilder::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method public constructor <init>()V
sun::security::provider::certpath::SunCertPathBuilder::SunCertPathBuilder()
{
	
	std::shared_ptr<java::security::cert::CertPathBuilderException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 045        value = {
	// 046            Ljava/security/cert/CertPathBuilderException;
	// 047        }
	// 048    .end annotation
	// 052    invoke-direct {p0}, Ljava/security/cert/CertPathBuilderSpi;-><init>()V
	this->pathCompleted = 0x0;
	try {
	//label_try_start_6:
	this->cf = java::security::cert::CertificateFactory::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509")));
	//label_try_end_f:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_10;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_6 .. :try_end_f} :catch_10
	return;
	// 074    .line 89
label_catch_10:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/security/cert/CertificateException;
	cVar0 = std::make_shared<java::security::cert::CertPathBuilderException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method private static addVertices(Ljava/util/Collection;Ljava/util/List;)Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::provider::certpath::Vertex>> sun::security::provider::certpath::SunCertPathBuilder::addVertices(std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> certs,std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> adjList)
{
	
	std::shared_ptr<java::util::List> l;
	std::shared_ptr<java::util::Iterator> cert_S_iterator;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	std::shared_ptr<sun::security::provider::certpath::Vertex> v;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 090        value = {
	// 091            "(",
	// 092            "Ljava/util/Collection",
	// 093            "<",
	// 094            "Ljava/security/cert/X509Certificate;",
	// 095            ">;",
	// 096            "Ljava/util/List",
	// 097            "<",
	// 098            "Ljava/util/List",
	// 099            "<",
	// 100            "Lsun/security/provider/certpath/Vertex;",
	// 101            ">;>;)",
	// 102            "Ljava/util/List",
	// 103            "<",
	// 104            "Lsun/security/provider/certpath/Vertex;",
	// 105            ">;"
	// 106        }
	// 107    .end annotation
	//    .local p0, "certs":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;"
	//    .local p1, "adjList":Ljava/util/List;, "Ljava/util/List<Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;>;"
	l = adjList->get(( adjList->size() + -0x1));
	l->checkCast("java::util::List");
	//    .local v2, "l":Ljava/util/List;, "Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;"
	cert_S_iterator = certs->iterator();
	//    .local v1, "cert$iterator":Ljava/util/Iterator;
label_goto_10:
	if ( !(cert_S_iterator->hasNext()) )  
		goto label_cond_25;
	cert = cert_S_iterator->next();
	cert->checkCast("java::security::cert::X509Certificate");
	//    .local v0, "cert":Ljava/security/cert/X509Certificate;
	v = std::make_shared<sun::security::provider::certpath::Vertex>(cert);
	//    .local v3, "v":Lsun/security/provider/certpath/Vertex;
	l->add(v);
	goto label_goto_10;
	// 157    .line 565
	// 158    .end local v0    # "cert":Ljava/security/cert/X509Certificate;
	// 159    .end local v3    # "v":Lsun/security/provider/certpath/Vertex;
label_cond_25:
	return l;

}
// .method private static anchorIsTarget(Ljava/security/cert/TrustAnchor;Ljava/security/cert/CertSelector;)Z
bool sun::security::provider::certpath::SunCertPathBuilder::anchorIsTarget(std::shared_ptr<java::security::cert::TrustAnchor> anchor,std::shared_ptr<java::security::cert::CertSelector> sel)
{
	
	std::shared_ptr<java::security::cert::Certificate> anchorCert;
	
	//    .param p0, "anchor"    # Ljava/security/cert/TrustAnchor;
	//    .param p1, "sel"    # Ljava/security/cert/CertSelector;
	anchorCert = anchor->getTrustedCert();
	//    .local v0, "anchorCert":Ljava/security/cert/X509Certificate;
	if ( !(anchorCert) )  
		goto label_cond_b;
	return sel->match(anchorCert);
	// 186    .line 579
label_cond_b:
	return 0x0;

}
// .method private build()Ljava/security/cert/PKIXCertPathBuilderResult;
std::shared_ptr<java::security::cert::PKIXCertPathBuilderResult> sun::security::provider::certpath::SunCertPathBuilder::build()
{
	
	std::shared_ptr<java::util::ArrayList> adjList;
	std::shared_ptr<java::security::cert::PKIXCertPathBuilderResult> result;
	std::shared_ptr<sun::security::provider::certpath::SunCertPathBuilderException> cVar0;
	std::shared_ptr<sun::security::provider::certpath::AdjacencyList> cVar1;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 196        value = {
	// 197            Ljava/security/cert/CertPathBuilderException;
	// 198        }
	// 199    .end annotation
	adjList = std::make_shared<java::util::ArrayList>();
	//    .local v0, "adjList":Ljava/util/List;, "Ljava/util/List<Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;>;"
	result = this->buildCertPath(0x0, adjList);
	//    .local v1, "result":Ljava/security/cert/PKIXCertPathBuilderResult;
	if ( result )     
		goto label_cond_30;
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_18;
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.engineBuild: 2nd pass; try building again searching all certstores")));
label_cond_18:
	adjList->clear();
	result = this->buildCertPath(0x1, adjList);
	if ( result )     
		goto label_cond_30;
	cVar1 = std::make_shared<sun::security::provider::certpath::AdjacencyList>(adjList);
	cVar0 = std::make_shared<sun::security::provider::certpath::SunCertPathBuilderException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unable to find valid certification path to requested target")), cVar1);
	// throw
	throw cVar0;
	// 260    .line 146
label_cond_30:
	return result;

}
// .method private buildCertPath(ZLjava/util/List;)Ljava/security/cert/PKIXCertPathBuilderResult;
std::shared_ptr<java::security::cert::PKIXCertPathBuilderResult> sun::security::provider::certpath::SunCertPathBuilder::buildCertPath(bool searchAllCertStores,std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> adjList)
{
	
	std::shared_ptr<java::security::cert::TrustAnchor> cVar0;
	std::shared_ptr<java::util::LinkedList> certPathList;
	std::shared_ptr<java::lang::Exception> e;
	std::shared_ptr<sun::security::provider::certpath::SunCertPathBuilderException> cVar3;
	std::shared_ptr<sun::security::provider::certpath::AdjacencyList> cVar4;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::cert::CertificateException> e;
	std::shared_ptr<sun::security::provider::certpath::SunCertPathBuilderException> cVar5;
	std::shared_ptr<sun::security::provider::certpath::AdjacencyList> cVar6;
	std::shared_ptr<sun::security::provider::certpath::SunCertPathBuilderResult> cVar1;
	std::shared_ptr<sun::security::provider::certpath::AdjacencyList> cVar2;
	
	//    .param p1, "searchAllCertStores"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 269        value = {
	// 270            "(Z",
	// 271            "Ljava/util/List",
	// 272            "<",
	// 273            "Ljava/util/List",
	// 274            "<",
	// 275            "Lsun/security/provider/certpath/Vertex;",
	// 276            ">;>;)",
	// 277            "Ljava/security/cert/PKIXCertPathBuilderResult;"
	// 278        }
	// 279    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 282        value = {
	// 283            Ljava/security/cert/CertPathBuilderException;
	// 284        }
	// 285    .end annotation
	//    .local p2, "adjList":Ljava/util/List;, "Ljava/util/List<Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;>;"
	cVar0 = 0x0;
	this->pathCompleted = 0x0;
	this->trustAnchor = cVar0;
	this->finalPublicKey = cVar0;
	this->policyTreeResult = cVar0;
	certPathList = std::make_shared<java::util::LinkedList>();
	//    .local v6, "certPathList":Ljava/util/LinkedList;, "Ljava/util/LinkedList<Ljava/security/cert/X509Certificate;>;"
	try {
	//label_try_start_f:
	this->buildForward(adjList, certPathList, searchAllCertStores);
	//label_try_end_12:
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3c;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3c;
	}
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_f .. :try_end_12} :catch_3c
	//    .catch Ljava/io/IOException; {:try_start_f .. :try_end_12} :catch_3c
	try {
	//label_try_start_12:
	if ( !(this->pathCompleted) )  
		goto label_cond_78;
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_22;
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.engineBuild() pathCompleted")));
label_cond_22:
	java::util::Collections::reverse(certPathList);
	cVar2 = std::make_shared<sun::security::provider::certpath::AdjacencyList>(adjList);
	cVar1 = std::make_shared<sun::security::provider::certpath::SunCertPathBuilderResult>(this->cf->generateCertPath(certPathList), this->trustAnchor, this->policyTreeResult, this->finalPublicKey, cVar2);
	//label_try_end_3b:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5a;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_12 .. :try_end_3b} :catch_5a
	return cVar1;
	// 369    .line 161
label_catch_3c:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v7, "e":Ljava/lang/Exception;
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_4c;
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.engineBuild() exception in build")));
	e->printStackTrace();
label_cond_4c:
	cVar4 = std::make_shared<sun::security::provider::certpath::AdjacencyList>(adjList);
	cVar3 = std::make_shared<sun::security::provider::certpath::SunCertPathBuilderException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unable to find valid certification path to requested target")), e, cVar4);
	// throw
	throw cVar3;
	// 405    .line 189
	// 406    .end local v7    # "e":Ljava/lang/Exception;
label_catch_5a:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v8, "e":Ljava/security/cert/CertificateException;
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_6a;
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.engineBuild() exception in wrap-up")));
	e->printStackTrace();
label_cond_6a:
	cVar6 = std::make_shared<sun::security::provider::certpath::AdjacencyList>(adjList);
	cVar5 = std::make_shared<sun::security::provider::certpath::SunCertPathBuilderException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unable to find valid certification path to requested target")), e, cVar6);
	// throw
	throw cVar5;
	// 442    .line 200
	// 443    .end local v8    # "e":Ljava/security/cert/CertificateException;
label_cond_78:
	return cVar0;

}
// .method private buildForward(Ljava/util/List;Ljava/util/LinkedList;Z)V
void sun::security::provider::certpath::SunCertPathBuilder::buildForward(std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> adjacencyList,std::shared_ptr<java::util::LinkedList<java::security::cert::X509Certificate>> certPathList,bool searchAllCertStores)
{
	
	std::shared_ptr<sun::security::provider::certpath::ForwardState> currentState;
	std::shared_ptr<java::util::LinkedList> cVar0;
	std::shared_ptr<sun::security::provider::certpath::ForwardBuilder> cVar1;
	
	//    .param p3, "searchAllCertStores"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 452        value = {
	// 453            "(",
	// 454            "Ljava/util/List",
	// 455            "<",
	// 456            "Ljava/util/List",
	// 457            "<",
	// 458            "Lsun/security/provider/certpath/Vertex;",
	// 459            ">;>;",
	// 460            "Ljava/util/LinkedList",
	// 461            "<",
	// 462            "Ljava/security/cert/X509Certificate;",
	// 463            ">;Z)V"
	// 464        }
	// 465    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 468        value = {
	// 469            Ljava/security/GeneralSecurityException;,
	// 470            Ljava/io/IOException;
	// 471        }
	// 472    .end annotation
	//    .local p1, "adjacencyList":Ljava/util/List;, "Ljava/util/List<Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;>;"
	//    .local p2, "certPathList":Ljava/util/LinkedList;, "Ljava/util/LinkedList<Ljava/security/cert/X509Certificate;>;"
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_c;
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.buildForward()...")));
label_cond_c:
	currentState = std::make_shared<sun::security::provider::certpath::ForwardState>();
	//    .local v2, "currentState":Lsun/security/provider/certpath/ForwardState;
	currentState->initState(this->buildParams->certPathCheckers());
	adjacencyList->clear();
	cVar0 = std::make_shared<java::util::LinkedList>();
	adjacencyList->add(cVar0);
	cVar1 = std::make_shared<sun::security::provider::certpath::ForwardBuilder>(this->buildParams, searchAllCertStores);
	this->depthFirstSearchForward(this->buildParams->targetSubject(), currentState, cVar1, adjacencyList, certPathList);
	return;

}
// .method private depthFirstSearchForward(Ljavax/security/auth/x500/X500Principal;Lsun/security/provider/certpath/ForwardState;Lsun/security/provider/certpath/ForwardBuilder;Ljava/util/List;Ljava/util/LinkedList;)V
void sun::security::provider::certpath::SunCertPathBuilder::depthFirstSearchForward(std::shared_ptr<javax::security::auth::x500::X500Principal> dN,std::shared_ptr<sun::security::provider::certpath::ForwardState> currentState,std::shared_ptr<sun::security::provider::certpath::ForwardBuilder> builder,std::shared_ptr<java::util::List<java::util::List<sun::security::provider::certpath::Vertex>>> adjList,std::shared_ptr<java::util::LinkedList<java::security::cert::X509Certificate>> cpList)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::List> vertices;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::Iterator> vertex_S_iterator;
	std::shared_ptr<sun::security::provider::certpath::Vertex> vertex;
	std::shared_ptr<sun::security::provider::certpath::ForwardState> nextState;
	std::shared_ptr<java::security::cert::X509Certificate> cert;
	std::shared_ptr<java::security::GeneralSecurityException> gse;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::ArrayList> appendedCerts;
	std::shared_ptr<sun::security::provider::certpath::PolicyNodeImpl> rootNode;
	std::shared_ptr<java::util::ArrayList> checkers;
	std::shared_ptr<sun::security::provider::certpath::PolicyChecker> policyChecker;
	std::shared_ptr<sun::security::provider::certpath::AlgorithmChecker> cVar2;
	std::shared_ptr<java::lang::Object> rootKey;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::security::cert::TrustAnchor> anchor;
	std::shared_ptr<sun::security::provider::certpath::BasicChecker> basicChecker;
	int revCheckerAdded;
	std::shared_ptr<java::lang::Iterable> ckrs;
	std::shared_ptr<java::util::Iterator> ckr_S_iterator;
	std::shared_ptr<java::security::cert::PKIXCertPathChecker> ckr;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar4;
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker> cVar6;
	int i;
	std::shared_ptr<java::security::cert::X509Certificate> currCert;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::util::Set> unresCritExts;
	std::shared_ptr<java::util::Iterator> currChecker_S_iterator;
	std::shared_ptr<java::security::cert::PKIXCertPathChecker> currChecker;
	std::shared_ptr<sun::security::provider::certpath::AlgorithmChecker> cVar8;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cpve;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::util::Iterator> checker_S_iterator;
	std::shared_ptr<java::security::cert::PKIXCertPathChecker> checker;
	auto suppExts;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar10;
	std::shared_ptr<java::security::cert::Certificate> finalCert;
	std::shared_ptr<java::util::LinkedList> cVar11;
	
	//    .param p1, "dN"    # Ljavax/security/auth/x500/X500Principal;
	//    .param p2, "currentState"    # Lsun/security/provider/certpath/ForwardState;
	//    .param p3, "builder"    # Lsun/security/provider/certpath/ForwardBuilder;
	//    .annotation system Ldalvik/annotation/Signature;
	// 548        value = {
	// 549            "(",
	// 550            "Ljavax/security/auth/x500/X500Principal;",
	// 551            "Lsun/security/provider/certpath/ForwardState;",
	// 552            "Lsun/security/provider/certpath/ForwardBuilder;",
	// 553            "Ljava/util/List",
	// 554            "<",
	// 555            "Ljava/util/List",
	// 556            "<",
	// 557            "Lsun/security/provider/certpath/Vertex;",
	// 558            ">;>;",
	// 559            "Ljava/util/LinkedList",
	// 560            "<",
	// 561            "Ljava/security/cert/X509Certificate;",
	// 562            ">;)V"
	// 563        }
	// 564    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 567        value = {
	// 568            Ljava/security/GeneralSecurityException;,
	// 569            Ljava/io/IOException;
	// 570        }
	// 571    .end annotation
	//    .local p4, "adjList":Ljava/util/List;, "Ljava/util/List<Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;>;"
	//    .local p5, "cpList":Ljava/util/LinkedList;, "Ljava/util/LinkedList<Ljava/security/cert/X509Certificate;>;"
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_35;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.depthFirstSearchForward(")))->append(dN)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(currentState->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
label_cond_35:
	//    .local v22, "certs":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;"
	vertices = sun::security::provider::certpath::SunCertPathBuilder::addVertices(builder->getMatchingCerts(currentState, this->buildParams->certStores()), adjList);
	//    .local v43, "vertices":Ljava/util/List;, "Ljava/util/List<Lsun/security/provider/certpath/Vertex;>;"
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_6e;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.depthFirstSearchForward(): certs.size=")))->append(vertices->size())->toString());
label_cond_6e:
	vertex_S_iterator = vertices->iterator();
	//    .local v42, "vertex$iterator":Ljava/util/Iterator;
label_goto_72:
	if ( !(vertex_S_iterator->hasNext()) )  
		goto label_cond_44d;
	vertex = vertex_S_iterator->next();
	vertex->checkCast("sun::security::provider::certpath::Vertex");
	//    .local v41, "vertex":Lsun/security/provider/certpath/Vertex;
	nextState = currentState->clone();
	nextState->checkCast("sun::security::provider::certpath::ForwardState");
	//    .local v36, "nextState":Lsun/security/provider/certpath/ForwardState;
	cert = vertex->getCertificate();
	//    .local v21, "cert":Ljava/security/cert/X509Certificate;
	try {
	//label_try_start_88:
	builder->verifyCert(cert, nextState, cpList);
	//label_try_end_93:
	}
	catch (java::security::GeneralSecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1cc;
	}
	//    .catch Ljava/security/GeneralSecurityException; {:try_start_88 .. :try_end_93} :catch_1cc
	if ( !(builder->isPathCompleted(cert)) )  
		goto label_cond_3fb;
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_a9;
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.depthFirstSearchForward(): commencing final verification")));
label_cond_a9:
	var78 = appendedCerts(cpList);
	//    .local v19, "appendedCerts":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	if ( builder->trustAnchor->getTrustedCert() )     
		goto label_cond_c4;
	appendedCerts->add(0x0, cert);
label_cond_c4:
	//    .local v9, "initExpPolSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	rootNode = std::make_shared<sun::security::provider::certpath::PolicyNodeImpl>(0x0, std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")), 0x0, 0x0, java::util::Collections::singleton(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0"))), 0x0);
	//    .local v4, "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	checkers = std::make_shared<java::util::ArrayList>();
	//    .local v25, "checkers":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;"
	policyChecker = std::make_shared<sun::security::provider::certpath::PolicyChecker>(this->buildParams->initialPolicies(), appendedCerts->size(), this->buildParams->explicitPolicyRequired(), this->buildParams->policyMappingInhibited(), this->buildParams->anyPolicyInhibited(), this->buildParams->policyQualifiersRejected(), rootNode);
	//    .local v10, "policyChecker":Lsun/security/provider/certpath/PolicyChecker;
	checkers->add(policyChecker);
	cVar2 = std::make_shared<sun::security::provider::certpath::AlgorithmChecker>(builder->trustAnchor);
	checkers->add(cVar2);
	//    .local v20, "basicChecker":Lsun/security/provider/certpath/BasicChecker;
	if ( !(nextState->keyParamsNeeded()) )  
		goto label_cond_190;
	//    .local v38, "rootKey":Ljava/security/PublicKey;
	if ( builder->trustAnchor->getTrustedCert() )     
		goto label_cond_161;
	rootKey = builder->trustAnchor->getCAPublicKey();
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_161;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.depthFirstSearchForward using buildParams public key: ")))->append(rootKey->toString())->toString());
label_cond_161:
	var165 = anchor(cert->getSubjectX500Principal(), cert->getPublicKey(), 0x0);
	//    .local v18, "anchor":Ljava/security/cert/TrustAnchor;
	//    .end local v20    # "basicChecker":Lsun/security/provider/certpath/BasicChecker;
	var178 = basicChecker(anchor, this->buildParams->date(), this->buildParams->sigProvider(), 0x1);
	//    .local v20, "basicChecker":Lsun/security/provider/certpath/BasicChecker;
	checkers->add(basicChecker);
	//    .end local v18    # "anchor":Ljava/security/cert/TrustAnchor;
	//    .end local v20    # "basicChecker":Lsun/security/provider/certpath/BasicChecker;
	//    .end local v38    # "rootKey":Ljava/security/PublicKey;
label_cond_190:
	this->buildParams->setCertPath(this->cf->generateCertPath(appendedCerts));
	revCheckerAdded = 0x0;
	//    .local v37, "revCheckerAdded":Z
	ckrs = this->buildParams->certPathCheckers();
	//    .local v28, "ckrs":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;"
	ckr_S_iterator = ckrs->iterator();
	//    .local v27, "ckr$iterator":Ljava/util/Iterator;
label_cond_1af:
label_goto_1af:
	if ( !(ckr_S_iterator->hasNext()) )  
		goto label_cond_210;
	ckr = ckr_S_iterator->next();
	ckr->checkCast("java::security::cert::PKIXCertPathChecker");
	//    .local v26, "ckr":Ljava/security/cert/PKIXCertPathChecker;
	if ( !(ckr->instanceOf("java::security::cert::PKIXRevocationChecker")) )  
		goto label_cond_1af;
	if ( !(revCheckerAdded) )  
		goto label_cond_1f8;
	cVar4 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Only one PKIXRevocationChecker can be specified")));
	// throw
	throw cVar4;
	// 1117    .line 292
	// 1118    .end local v4    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 1119    .end local v9    # "initExpPolSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1120    .end local v10    # "policyChecker":Lsun/security/provider/certpath/PolicyChecker;
	// 1121    .end local v19    # "appendedCerts":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	// 1122    .end local v25    # "checkers":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;"
	// 1123    .end local v26    # "ckr":Ljava/security/cert/PKIXCertPathChecker;
	// 1124    .end local v27    # "ckr$iterator":Ljava/util/Iterator;
	// 1125    .end local v28    # "ckrs":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;"
	// 1126    .end local v37    # "revCheckerAdded":Z
label_catch_1cc:
	// move-exception
	gse = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v34, "gse":Ljava/security/GeneralSecurityException;
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_1ef;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(cVar5->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.depthFirstSearchForward(): validation failed: ")))->append(gse)->toString());
	gse->printStackTrace();
label_cond_1ef:
	vertex->setThrowable(gse);
	goto label_goto_72;
	// 1174    .line 380
	// 1175    .end local v34    # "gse":Ljava/security/GeneralSecurityException;
	// 1176    .restart local v4    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 1177    .restart local v9    # "initExpPolSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1178    .restart local v10    # "policyChecker":Lsun/security/provider/certpath/PolicyChecker;
	// 1179    .restart local v19    # "appendedCerts":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	// 1180    .restart local v25    # "checkers":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;"
	// 1181    .restart local v26    # "ckr":Ljava/security/cert/PKIXCertPathChecker;
	// 1182    .restart local v27    # "ckr$iterator":Ljava/util/Iterator;
	// 1183    .restart local v28    # "ckrs":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;"
	// 1184    .restart local v37    # "revCheckerAdded":Z
label_cond_1f8:
	revCheckerAdded = 0x1;
	if ( !(ckr->instanceOf("sun::security::provider::certpath::RevocationChecker")) )  
		goto label_cond_1af;
	ckr->checkCast("sun::security::provider::certpath::RevocationChecker");
	//    .end local v26    # "ckr":Ljava/security/cert/PKIXCertPathChecker;
	ckr->init(builder->trustAnchor, this->buildParams);
	goto label_goto_1af;
	// 1215    .line 390
label_cond_210:
	if ( !(this->buildParams->revocationEnabled()) )  
		goto label_cond_230;
	if ( !(( revCheckerAdded ^ 0x1)) )  
		goto label_cond_230;
	cVar6 = std::make_shared<sun::security::provider::certpath::RevocationChecker>(builder->trustAnchor, this->buildParams);
	checkers->add(cVar6);
label_cond_230:
	checkers->addAll(ckrs);
	i = 0x0;
	//    .local v35, "i":I
label_goto_239:
	if ( i >= appendedCerts->size() )
		goto label_cond_39e;
	currCert = appendedCerts->get(i);
	currCert->checkCast("java::security::cert::X509Certificate");
	//    .local v30, "currCert":Ljava/security/cert/X509Certificate;
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_26c;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(cVar7->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("current subject = ")))->append(currCert->getSubjectX500Principal())->toString());
label_cond_26c:
	unresCritExts = currCert->getCriticalExtensionOIDs();
	//    .local v40, "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( unresCritExts )     
		goto label_cond_276;
	unresCritExts = java::util::Collections::emptySet({const[class].FS-Param});
label_cond_276:
	currChecker_S_iterator = checkers->iterator();
	//    .local v32, "currChecker$iterator":Ljava/util/Iterator;
label_cond_27a:
label_goto_27a:
	if ( !(currChecker_S_iterator->hasNext()) )  
		goto label_cond_2f1;
	currChecker = currChecker_S_iterator->next();
	currChecker->checkCast("java::security::cert::PKIXCertPathChecker");
	//    .local v31, "currChecker":Ljava/security/cert/PKIXCertPathChecker;
	if ( currChecker->isForwardCheckingSupported() )     
		goto label_cond_27a;
	if ( i )     
		goto label_cond_2a5;
	currChecker->init(0x0);
	if ( !(currChecker->instanceOf("sun::security::provider::certpath::AlgorithmChecker")) )  
		goto label_cond_2a5;
	cVar8 = currChecker;
	cVar8->checkCast("sun::security::provider::certpath::AlgorithmChecker");
	cVar8->trySetTrustAnchor(builder->trustAnchor);
label_cond_2a5:
	try {
	//label_try_start_2a5:
	currChecker->check(currCert, unresCritExts);
	//label_try_end_2ae:
	}
	catch (java::security::cert::CertPathValidatorException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2af;
	}
	//    .catch Ljava/security/cert/CertPathValidatorException; {:try_start_2a5 .. :try_end_2ae} :catch_2af
	goto label_goto_27a;
	// 1406    .line 427
label_catch_2af:
	// move-exception
	cpve = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v29, "cpve":Ljava/security/cert/CertPathValidatorException;
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_2cf;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(cVar9->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.depthFirstSearchForward(): final verification failed: ")))->append(cpve)->toString());
label_cond_2cf:
	if ( !(this->buildParams->targetCertConstraints()->match(currCert)) )  
		goto label_cond_2e8;
	if ( cpve->getReason() != java::security::cert::CertPathValidatorException_S_BasicReason::REVOKED )
		goto label_cond_2e8;
	// throw
	throw cpve;
	// 1473    .line 438
label_cond_2e8:
	vertex->setThrowable(cpve);
	goto label_goto_72;
	// 1483    .line 451
	// 1484    .end local v29    # "cpve":Ljava/security/cert/CertPathValidatorException;
	// 1485    .end local v31    # "currChecker":Ljava/security/cert/PKIXCertPathChecker;
label_cond_2f1:
	checker_S_iterator = this->buildParams->certPathCheckers()->iterator();
	//    .local v24, "checker$iterator":Ljava/util/Iterator;
label_cond_2fd:
label_goto_2fd:
	if ( !(checker_S_iterator->hasNext()) )  
		goto label_cond_31d;
	checker = checker_S_iterator->next();
	checker->checkCast("java::security::cert::PKIXCertPathChecker");
	//    .local v23, "checker":Ljava/security/cert/PKIXCertPathChecker;
	if ( !(checker->isForwardCheckingSupported()) )  
		goto label_cond_2fd;
	suppExts = checker->getSupportedExtensions();
	//    .local v39, "suppExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( !(suppExts) )  
		goto label_cond_2fd;
	unresCritExts->removeAll(suppExts);
	goto label_goto_2fd;
	// 1541    .line 462
	// 1542    .end local v23    # "checker":Ljava/security/cert/PKIXCertPathChecker;
	// 1543    .end local v39    # "suppExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_31d:
	if ( unresCritExts->isEmpty() )     
		goto label_cond_39a;
	unresCritExts->remove(sun::security::x509::PKIXExtensions::BasicConstraints_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::NameConstraints_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::CertificatePolicies_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::PolicyMappings_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::PolicyConstraints_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::InhibitAnyPolicy_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::SubjectAlternativeName_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::KeyUsage_Id->toString());
	unresCritExts->remove(sun::security::x509::PKIXExtensions::ExtendedKeyUsage_Id->toString());
	if ( unresCritExts->isEmpty() )     
		goto label_cond_39a;
	cVar10 = std::make_shared<java::security::cert::CertPathValidatorException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unrecognized critical extension(s)")), 0x0, 0x0, -0x1, java::security::cert::PKIXReason::UNRECOGNIZED_CRIT_EXT);
	// throw
	throw cVar10;
	// 1680    .line 400
label_cond_39a:
	i = ( i + 0x1);
	goto label_goto_239;
	// 1686    .line 481
	// 1687    .end local v24    # "checker$iterator":Ljava/util/Iterator;
	// 1688    .end local v30    # "currCert":Ljava/security/cert/X509Certificate;
	// 1689    .end local v32    # "currChecker$iterator":Ljava/util/Iterator;
	// 1690    .end local v40    # "unresCritExts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_39e:
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_3aa;
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.depthFirstSearchForward(): final verification succeeded - path completed!")));
label_cond_3aa:
	this->pathCompleted = 0x1;
	if ( builder->trustAnchor->getTrustedCert() )     
		goto label_cond_3c2;
	builder->addCertToPath(cert, cpList);
label_cond_3c2:
	this->trustAnchor = builder->trustAnchor;
	if ( !(0x0) )  
		goto label_cond_3dd;
	this->finalPublicKey = basicChecker->getPublicKey();
label_goto_3d4:
	this->policyTreeResult = policyChecker->getPolicyTree();
	return;
	// 1766    .line 503
label_cond_3dd:
	if ( !(cpList->isEmpty()) )  
		goto label_cond_3f4;
	//    .local v33, "finalCert":Ljava/security/cert/Certificate;
label_goto_3eb:
	this->finalPublicKey = finalCert->getPublicKey();
	goto label_goto_3d4;
	// 1796    .line 506
	// 1797    .end local v33    # "finalCert":Ljava/security/cert/Certificate;
label_cond_3f4:
	finalCert = cpList->getLast();
	finalCert->checkCast("java::security::cert::Certificate");
	//    .restart local v33    # "finalCert":Ljava/security/cert/Certificate;
	goto label_goto_3eb;
	// 1808    .line 514
	// 1809    .end local v4    # "rootNode":Lsun/security/provider/certpath/PolicyNodeImpl;
	// 1810    .end local v9    # "initExpPolSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 1811    .end local v10    # "policyChecker":Lsun/security/provider/certpath/PolicyChecker;
	// 1812    .end local v19    # "appendedCerts":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	// 1813    .end local v25    # "checkers":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;"
	// 1814    .end local v27    # "ckr$iterator":Ljava/util/Iterator;
	// 1815    .end local v28    # "ckrs":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;"
	// 1816    .end local v33    # "finalCert":Ljava/security/cert/Certificate;
	// 1817    .end local v35    # "i":I
	// 1818    .end local v37    # "revCheckerAdded":Z
label_cond_3fb:
	builder->addCertToPath(cert, cpList);
	nextState->updateState(cert);
	cVar11 = std::make_shared<java::util::LinkedList>();
	adjList->add(cVar11);
	vertex->setIndex(( adjList->size() + -0x1));
	this->depthFirstSearchForward(cert->getIssuerX500Principal(), nextState, builder, adjList, cpList);
	if ( !(this->pathCompleted) )  
		goto label_cond_438;
	return;
	// 1882    .line 543
label_cond_438:
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_444;
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.depthFirstSearchForward(): backtracking")));
label_cond_444:
	builder->removeFinalCertFromPath(cpList);
	goto label_goto_72;
	// 1905    .line 549
	// 1906    .end local v21    # "cert":Ljava/security/cert/X509Certificate;
	// 1907    .end local v36    # "nextState":Lsun/security/provider/certpath/ForwardState;
	// 1908    .end local v41    # "vertex":Lsun/security/provider/certpath/Vertex;
label_cond_44d:
	return;

}
// .method public engineBuild(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;
std::shared_ptr<java::security::cert::CertPathBuilderResult> sun::security::provider::certpath::SunCertPathBuilder::engineBuild(std::shared_ptr<java::security::cert::CertPathParameters> params)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p1, "params"    # Ljava/security/cert/CertPathParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1919        value = {
	// 1920            Ljava/security/cert/CertPathBuilderException;,
	// 1921            Ljava/security/InvalidAlgorithmParameterException;
	// 1922        }
	// 1923    .end annotation
	if ( !(sun::security::provider::certpath::SunCertPathBuilder::debug) )  
		goto label_cond_24;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::SunCertPathBuilder::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SunCertPathBuilder.engineBuild(")))->append(params)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(")")))->toString());
label_cond_24:
	this->buildParams = sun::security::provider::certpath::PKIX::checkBuilderParams(params);
	return this->build();

}
// .method public engineGetRevocationChecker()Ljava/security/cert/CertPathChecker;
std::shared_ptr<java::security::cert::CertPathChecker> sun::security::provider::certpath::SunCertPathBuilder::engineGetRevocationChecker()
{
	
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker> cVar0;
	
	cVar0 = std::make_shared<sun::security::provider::certpath::RevocationChecker>();
	return cVar0;

}


