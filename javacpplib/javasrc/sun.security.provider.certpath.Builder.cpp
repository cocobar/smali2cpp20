// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\Builder.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Boolean.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.security.AccessController.h"
#include "java.security.cert.CertSelector.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.CertStoreException.h"
#include "java.security.cert.Certificate.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.X509CertSelector.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedList.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.action.GetBooleanAction.h"
#include "sun.security.provider.certpath.Builder.h"
#include "sun.security.provider.certpath.PKIX_S_BuilderParams.h"
#include "sun.security.provider.certpath.State.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.GeneralSubtree.h"
#include "sun.security.x509.GeneralSubtrees.h"
#include "sun.security.x509.NameConstraintsExtension.h"
#include "sun.security.x509.SubjectAlternativeNameExtension.h"
#include "sun.security.x509.X500Name.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::Builder::USE_AIA;
static sun::security::provider::certpath::Builder::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::Builder::static_cinit()
{
	
	std::shared_ptr<sun::security::action::GetBooleanAction> cVar0;
	std::shared_ptr<java::lang::Boolean> cVar1;
	
	sun::security::provider::certpath::Builder::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	cVar0 = std::make_shared<sun::security::action::GetBooleanAction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("com.sun.security.enableAIAcaIssuers")));
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("java::lang::Boolean");
	sun::security::provider::certpath::Builder::USE_AIA = cVar1->booleanValue();
	return;

}
// .method constructor <init>(Lsun/security/provider/certpath/PKIX$BuilderParams;)V
sun::security::provider::certpath::Builder::Builder(std::shared_ptr<sun::security::provider::certpath::PKIX_S_BuilderParams> buildParams)
{
	
	std::shared_ptr<java::security::cert::X509CertSelector> cVar0;
	
	//    .param p1, "buildParams"    # Lsun/security/provider/certpath/PKIX$BuilderParams;
	// 073    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->buildParams = buildParams;
	cVar0 = buildParams->targetCertConstraints();
	cVar0->checkCast("java::security::cert::X509CertSelector");
	this->targetCertConstraints = cVar0;
	return;

}
// .method static distance(Lsun/security/x509/GeneralNameInterface;Lsun/security/x509/GeneralNameInterface;I)I
int sun::security::provider::certpath::Builder::distance(std::shared_ptr<sun::security::x509::GeneralNameInterface> base,std::shared_ptr<sun::security::x509::GeneralNameInterface> test,int incomparable)
{
	
	//    .param p0, "base"    # Lsun/security/x509/GeneralNameInterface;
	//    .param p1, "test"    # Lsun/security/x509/GeneralNameInterface;
	//    .param p2, "incomparable"    # I
	// switch
	{
	auto item = ( base->constrains(test) );
	if (item == -1) goto label_pswitch_8;
	if (item == 0) goto label_pswitch_22;
	if (item == 1) goto label_pswitch_24;
	if (item == 2) goto label_pswitch_24;
	if (item == 3) goto label_pswitch_15;
	}
	return incomparable;
	// 109    .line 148
label_pswitch_8:
	if ( !(sun::security::provider::certpath::Builder::debug) )  
		goto label_cond_14;
	sun::security::provider::certpath::Builder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Builder.distance(): Names are different types")));
label_cond_14:
	return incomparable;
	// 126    .line 153
label_pswitch_15:
	if ( !(sun::security::provider::certpath::Builder::debug) )  
		goto label_cond_21;
	sun::security::provider::certpath::Builder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Builder.distance(): Names are same type but in different subtrees")));
label_cond_21:
	return incomparable;
	// 143    .line 159
label_pswitch_22:
	return 0x0;
	// 149    .line 169
label_pswitch_24:
	return (test->subtreeDepth() -  base->subtreeDepth());
	// 163    .line 146
	// 164    :pswitch_data_2e
	// 165    .packed-switch -0x1
	// 166        :pswitch_8
	// 167        :pswitch_22
	// 168        :pswitch_24
	// 169        :pswitch_24
	// 170        :pswitch_15
	// 171    .end packed-switch

}
// .method static hops(Lsun/security/x509/GeneralNameInterface;Lsun/security/x509/GeneralNameInterface;I)I
int sun::security::provider::certpath::Builder::hops(std::shared_ptr<sun::security::x509::GeneralNameInterface> base,std::shared_ptr<sun::security::x509::GeneralNameInterface> test,int incomparable)
{
	
	std::shared_ptr<sun::security::x509::X500Name> baseName;
	std::shared_ptr<sun::security::x509::X500Name> testName;
	std::shared_ptr<sun::security::x509::X500Name> commonName;
	
	//    .param p0, "base"    # Lsun/security/x509/GeneralNameInterface;
	//    .param p1, "test"    # Lsun/security/x509/GeneralNameInterface;
	//    .param p2, "incomparable"    # I
	//    .local v2, "baseRtest":I
	// switch
	{
	auto item = ( base->constrains(test) );
	if (item == -1) goto label_pswitch_8;
	if (item == 0) goto label_pswitch_15;
	if (item == 1) goto label_pswitch_21;
	if (item == 2) goto label_pswitch_17;
	if (item == 3) goto label_pswitch_2b;
	}
	return incomparable;
	// 193    .line 195
label_pswitch_8:
	if ( !(sun::security::provider::certpath::Builder::debug) )  
		goto label_cond_14;
	sun::security::provider::certpath::Builder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Builder.hops(): Names are different types")));
label_cond_14:
	return incomparable;
	// 210    .line 204
label_pswitch_15:
	return 0x0;
	// 216    .line 207
label_pswitch_17:
	return (test->subtreeDepth() -  base->subtreeDepth());
	// 230    .line 210
label_pswitch_21:
	return (test->subtreeDepth() -  base->subtreeDepth());
	// 244    .line 216
label_pswitch_2b:
	if ( base->getType() == 0x4 )
		goto label_cond_3f;
	if ( !(sun::security::provider::certpath::Builder::debug) )  
		goto label_cond_3e;
	sun::security::provider::certpath::Builder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Builder.hops(): hopDistance not implemented for this name type")));
label_cond_3e:
	return incomparable;
label_cond_3f:
	baseName = base;
	baseName->checkCast("sun::security::x509::X500Name");
	//    .local v1, "baseName":Lsun/security/x509/X500Name;
	testName = test;
	testName->checkCast("sun::security::x509::X500Name");
	//    .local v6, "testName":Lsun/security/x509/X500Name;
	commonName = baseName->commonAncestor(testName);
	//    .local v4, "commonName":Lsun/security/x509/X500Name;
	if ( commonName )     
		goto label_cond_58;
	if ( !(sun::security::provider::certpath::Builder::debug) )  
		goto label_cond_57;
	sun::security::provider::certpath::Builder::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Builder.hops(): Names are in different namespaces")));
label_cond_57:
	return incomparable;
	// 308    .line 233
label_cond_58:
	//    .local v3, "commonDistance":I
	//    .local v0, "baseDistance":I
	//    .local v5, "testDistance":I
	return ((baseName->subtreeDepth() + testName->subtreeDepth()) -  ( commonName->subtreeDepth() * 0x2));
	// 336    .line 193
	// 337    :pswitch_data_6a
	// 338    .packed-switch -0x1
	// 339        :pswitch_8
	// 340        :pswitch_15
	// 341        :pswitch_21
	// 342        :pswitch_17
	// 343        :pswitch_2b
	// 344    .end packed-switch

}
// .method static targetDistance(Lsun/security/x509/NameConstraintsExtension;Ljava/security/cert/X509Certificate;Lsun/security/x509/GeneralNameInterface;)I
int sun::security::provider::certpath::Builder::targetDistance(std::shared_ptr<sun::security::x509::NameConstraintsExtension> constraints,std::shared_ptr<java::security::cert::X509Certificate> cert,std::shared_ptr<sun::security::x509::GeneralNameInterface> target)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::x509::X509CertImpl> certImpl;
	std::shared_ptr<sun::security::x509::SubjectAlternativeNameExtension> altNameExt;
	std::shared_ptr<sun::security::x509::GeneralNames> altNames;
	int j;
	std::shared_ptr<sun::security::x509::NameConstraintsExtension> ncExt;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::security::x509::GeneralSubtrees> permitted;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::io::IOException> cVar4;
	int i;
	int distance;
	std::shared_ptr<sun::security::x509::NameConstraintsExtension> constraints;
	
	//    .param p0, "constraints"    # Lsun/security/x509/NameConstraintsExtension;
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .param p2, "target"    # Lsun/security/x509/GeneralNameInterface;
	//    .annotation system Ldalvik/annotation/Throws;
	// 353        value = {
	// 354            Ljava/io/IOException;
	// 355        }
	// 356    .end annotation
	if ( !(constraints) )  
		goto label_cond_13;
	if ( !(( constraints->verify(cert) ^ 0x1)) )  
		goto label_cond_13;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("certificate does not satisfy existing name constraints")));
	// throw
	throw cVar0;
	// 379    .line 292
label_cond_13:
	try {
	//label_try_start_13:
	//label_try_end_16:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_13 .. :try_end_16} :catch_2a
	certImpl = sun::security::x509::X509CertImpl::toImpl(cert);
	//    .local v5, "certImpl":Lsun/security/x509/X509CertImpl;
	//    .local v15, "subject":Lsun/security/x509/X500Name;
	if ( !(sun::security::x509::X500Name::asX500Name(certImpl->getSubjectX500Principal())->equals(target)) )  
		goto label_cond_38;
	return 0x0;
	// 413    .line 293
	// 414    .end local v5    # "certImpl":Lsun/security/x509/X509CertImpl;
	// 415    .end local v15    # "subject":Lsun/security/x509/X500Name;
label_catch_2a:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v7, "e":Ljava/security/cert/CertificateException;
	var22 = cVar1(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid certificate")), getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 433    .line 304
	// 434    .end local v7    # "e":Ljava/security/cert/CertificateException;
	// 435    .restart local v5    # "certImpl":Lsun/security/x509/X509CertImpl;
	// 436    .restart local v15    # "subject":Lsun/security/x509/X500Name;
label_cond_38:
	altNameExt = certImpl->getSubjectAlternativeNameExtension();
	//    .local v3, "altNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
	if ( !(altNameExt) )  
		goto label_cond_66;
	altNames = altNameExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject_name")));
	//    .local v4, "altNames":Lsun/security/x509/GeneralNames;
	if ( !(altNames) )  
		goto label_cond_66;
	j = 0x0;
	//    .local v10, "j":I
	//    .local v11, "n":I
label_goto_4e:
	if ( j >= altNames->size() )
		goto label_cond_66;
	//    .local v2, "altName":Lsun/security/x509/GeneralNameInterface;
	if ( !(altNames->get(j)->getName()->equals(target)) )  
		goto label_cond_63;
	return 0x0;
	// 496    .line 310
label_cond_63:
	j = ( j + 0x1);
	goto label_goto_4e;
	// 502    .line 323
	// 503    .end local v2    # "altName":Lsun/security/x509/GeneralNameInterface;
	// 504    .end local v4    # "altNames":Lsun/security/x509/GeneralNames;
	// 505    .end local v10    # "j":I
	// 506    .end local v11    # "n":I
label_cond_66:
	ncExt = certImpl->getNameConstraintsExtension();
	//    .local v12, "ncExt":Lsun/security/x509/NameConstraintsExtension;
	if ( ncExt )     
		goto label_cond_6f;
	return -0x1;
	// 521    .line 329
label_cond_6f:
	if ( !(constraints) )  
		goto label_cond_e4;
	constraints->merge(ncExt);
label_goto_76:
	if ( !(sun::security::provider::certpath::Builder::debug) )  
		goto label_cond_97;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::Builder::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Builder.targetDistance() merged constraints: ")))->append(java::lang::String::valueOf(constraints))->toString());
label_cond_97:
	permitted = constraints->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("permitted_subtrees")));
	//    .local v14, "permitted":Lsun/security/x509/GeneralSubtrees;
	//    .local v8, "excluded":Lsun/security/x509/GeneralSubtrees;
	if ( !(permitted) )  
		goto label_cond_b2;
	permitted->reduce(constraints->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("excluded_subtrees"))));
label_cond_b2:
	if ( !(sun::security::provider::certpath::Builder::debug) )  
		goto label_cond_d1;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::Builder::debug->println(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Builder.targetDistance() reduced constraints: ")))->append(permitted)->toString());
label_cond_d1:
	if ( constraints->verify(target) )     
		goto label_cond_eb;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("New certificate not allowed to sign certificate for target")));
	// throw
	throw cVar4;
	// 648    .line 335
	// 649    .end local v8    # "excluded":Lsun/security/x509/GeneralSubtrees;
	// 650    .end local v14    # "permitted":Lsun/security/x509/GeneralSubtrees;
label_cond_e4:
	constraints = ncExt->clone();
	//    .end local p0    # "constraints":Lsun/security/x509/NameConstraintsExtension;
	constraints->checkCast("sun::security::x509::NameConstraintsExtension");
	//    .restart local p0    # "constraints":Lsun/security/x509/NameConstraintsExtension;
	goto label_goto_76;
	// 662    .line 360
	// 663    .restart local v8    # "excluded":Lsun/security/x509/GeneralSubtrees;
	// 664    .restart local v14    # "permitted":Lsun/security/x509/GeneralSubtrees;
label_cond_eb:
	if ( permitted )     
		goto label_cond_f0;
	return -0x1;
	// 673    .line 364
label_cond_f0:
	i = 0x0;
	//    .local v9, "i":I
	//    .restart local v11    # "n":I
label_goto_f5:
	if ( i >= permitted->size() )
		goto label_cond_115;
	//    .local v13, "perName":Lsun/security/x509/GeneralNameInterface;
	distance = sun::security::provider::certpath::Builder::distance(permitted->get(i)->getName()->getName(), target, -0x1);
	//    .local v6, "distance":I
	if ( distance < 0 ) 
		goto label_cond_112;
	return ( distance + 0x1);
	// 720    .line 364
label_cond_112:
	i = ( i + 0x1);
	goto label_goto_f5;
	// 726    .line 372
	// 727    .end local v6    # "distance":I
	// 728    .end local v13    # "perName":Lsun/security/x509/GeneralNameInterface;
label_cond_115:
	return -0x1;

}
// .method abstract addCertToPath(Ljava/security/cert/X509Certificate;Ljava/util/LinkedList;)V
void sun::security::provider::certpath::Builder::addCertToPath(std::shared_ptr<java::security::cert::X509Certificate> var0,std::shared_ptr<java::util::LinkedList<java::security::cert::X509Certificate>> var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 739        value = {
	// 740            "(",
	// 741            "Ljava/security/cert/X509Certificate;",
	// 742            "Ljava/util/LinkedList",
	// 743            "<",
	// 744            "Ljava/security/cert/X509Certificate;",
	// 745            ">;)V"
	// 746        }
	// 747    .end annotation

}
// .method addMatchingCerts(Ljava/security/cert/X509CertSelector;Ljava/util/Collection;Ljava/util/Collection;Z)Z
bool sun::security::provider::certpath::Builder::addMatchingCerts(std::shared_ptr<java::security::cert::X509CertSelector> selector,std::shared_ptr<java::util::Collection<java::security::cert::CertStore>> certStores,std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> resultCerts,bool checkAll)
{
	
	std::shared_ptr<java::security::cert::Certificate> targetCert;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	bool add;
	std::shared_ptr<java::util::Iterator> store_S_iterator;
	std::shared_ptr<java::security::cert::CertStore> store;
	std::shared_ptr<java::lang::Object> cse;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::util::Iterator> cert_S_iterator;
	std::shared_ptr<java::security::cert::Certificate> cert;
	std::shared_ptr<java::security::cert::X509Certificate> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "selector"    # Ljava/security/cert/X509CertSelector;
	//    .param p4, "checkAll"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 755        value = {
	// 756            "(",
	// 757            "Ljava/security/cert/X509CertSelector;",
	// 758            "Ljava/util/Collection",
	// 759            "<",
	// 760            "Ljava/security/cert/CertStore;",
	// 761            ">;",
	// 762            "Ljava/util/Collection",
	// 763            "<",
	// 764            "Ljava/security/cert/X509Certificate;",
	// 765            ">;Z)Z"
	// 766        }
	// 767    .end annotation
	//    .local p2, "certStores":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/CertStore;>;"
	//    .local p3, "resultCerts":Ljava/util/Collection;, "Ljava/util/Collection<Ljava/security/cert/X509Certificate;>;"
	targetCert = selector->getCertificate();
	//    .local v8, "targetCert":Ljava/security/cert/X509Certificate;
	if ( !(targetCert) )  
		goto label_cond_64;
	if ( !(selector->match(targetCert)) )  
		goto label_cond_62;
	if ( !(( sun::security::x509::X509CertImpl::isSelfSigned(targetCert, this->buildParams->sigProvider()) ^ 0x1)) )  
		goto label_cond_62;
	if ( !(sun::security::provider::certpath::Builder::debug) )  
		goto label_cond_5d;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::Builder::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Builder.addMatchingCerts: adding target cert\n  SN: ")))->append(sun::security::util::Debug::toHexString(targetCert->getSerialNumber()))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  Subject: ")))->append(targetCert->getSubjectX500Principal())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  Issuer: ")))->append(targetCert->getIssuerX500Principal())->toString());
label_cond_5d:
	return resultCerts->add(targetCert);
	// 887    .line 447
label_cond_62:
	return 0x0;
	// 893    .line 449
label_cond_64:
	add = 0x0;
	//    .local v1, "add":Z
	store_S_iterator = certStores->iterator();
	//    .local v7, "store$iterator":Ljava/util/Iterator;
label_cond_69:
label_goto_69:
	if ( !(store_S_iterator->hasNext()) )  
		goto label_cond_cb;
	store = store_S_iterator->next();
	store->checkCast("java::security::cert::CertStore");
	//    .local v6, "store":Ljava/security/cert/CertStore;
	try {
	//label_try_start_75:
	//    .local v4, "certs":Ljava/util/Collection;, "Ljava/util/Collection<+Ljava/security/cert/Certificate;>;"
	cert_S_iterator = store->getCertificates(selector)->iterator();
	//    .local v3, "cert$iterator":Ljava/util/Iterator;
label_cond_7d:
label_goto_7d:
	if ( !(cert_S_iterator->hasNext()) )  
		goto label_cond_a3;
	cert = cert_S_iterator->next();
	cert->checkCast("java::security::cert::Certificate");
	//    .local v2, "cert":Ljava/security/cert/Certificate;
	cVar1 = cert;
	cVar1->checkCast("java::security::cert::X509Certificate");
	if ( sun::security::x509::X509CertImpl::isSelfSigned(cVar1, this->buildParams->sigProvider()) )     
		goto label_cond_7d;
	cert->checkCast("java::security::cert::X509Certificate");
	//    .end local v2    # "cert":Ljava/security/cert/Certificate;
	//label_try_end_9e:
	}
	catch (java::security::cert::CertStoreException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_a9;
	}
	//    .catch Ljava/security/cert/CertStoreException; {:try_start_75 .. :try_end_9e} :catch_a9
	if ( !(resultCerts->add(cert)) )  
		goto label_cond_7d;
	0x1;
	goto label_goto_7d;
	// 984    .line 462
label_cond_a3:
	if ( checkAll )     
		goto label_cond_69;
	if ( !(add) )  
		goto label_cond_69;
	return 0x1;
	// 995    .line 465
	// 996    .end local v3    # "cert$iterator":Ljava/util/Iterator;
	// 997    .end local v4    # "certs":Ljava/util/Collection;, "Ljava/util/Collection<+Ljava/security/cert/Certificate;>;"
label_catch_a9:
	// move-exception
	cse = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "cse":Ljava/security/cert/CertStoreException;
	if ( !(sun::security::provider::certpath::Builder::debug) )  
		goto label_cond_69;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	sun::security::provider::certpath::Builder::debug->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Builder.addMatchingCerts, non-fatal exception retrieving certs: ")))->append(cse)->toString());
	cse->printStackTrace();
	goto label_goto_69;
	// 1035    .line 475
	// 1036    .end local v5    # "cse":Ljava/security/cert/CertStoreException;
	// 1037    .end local v6    # "store":Ljava/security/cert/CertStore;
label_cond_cb:
	return add;

}
// .method abstract getMatchingCerts(Lsun/security/provider/certpath/State;Ljava/util/List;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<java::security::cert::X509Certificate>> sun::security::provider::certpath::Builder::getMatchingCerts(std::shared_ptr<sun::security::provider::certpath::State> var0,std::shared_ptr<java::util::List<java::security::cert::CertStore>> var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1044        value = {
	// 1045            "(",
	// 1046            "Lsun/security/provider/certpath/State;",
	// 1047            "Ljava/util/List",
	// 1048            "<",
	// 1049            "Ljava/security/cert/CertStore;",
	// 1050            ">;)",
	// 1051            "Ljava/util/Collection",
	// 1052            "<",
	// 1053            "Ljava/security/cert/X509Certificate;",
	// 1054            ">;"
	// 1055        }
	// 1056    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1059        value = {
	// 1060            Ljava/security/cert/CertStoreException;,
	// 1061            Ljava/security/cert/CertificateException;,
	// 1062            Ljava/io/IOException;
	// 1063        }
	// 1064    .end annotation

}
// .method getMatchingPolicies()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::provider::certpath::Builder::getMatchingPolicies()
{
	
	std::shared_ptr<java::util::Set> initialPolicies;
	std::shared_ptr<java::util::HashSet> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1070        value = {
	// 1071            "()",
	// 1072            "Ljava/util/Set",
	// 1073            "<",
	// 1074            "Ljava/lang/String;",
	// 1075            ">;"
	// 1076        }
	// 1077    .end annotation
	if ( !(this->matchingPolicies) )  
		goto label_cond_32;
	initialPolicies = this->buildParams->initialPolicies();
	//    .local v0, "initialPolicies":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( initialPolicies->isEmpty() )     
		goto label_cond_35;
	if ( !(( initialPolicies->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0"))) ^ 0x1)) )  
		goto label_cond_35;
	if ( !(this->buildParams->policyMappingInhibited()) )  
		goto label_cond_35;
	cVar0 = std::make_shared<java::util::HashSet>(initialPolicies);
	this->matchingPolicies = cVar0;
	this->matchingPolicies->add(std::make_shared<java::lang::String>(std::make_shared<char[]>("2.5.29.32.0")));
	//    .end local v0    # "initialPolicies":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_32:
label_goto_32:
	return this->matchingPolicies;
	// 1144    .line 407
	// 1145    .restart local v0    # "initialPolicies":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_35:
	this->matchingPolicies = java::util::Collections::emptySet({const[class].FS-Param});
	goto label_goto_32;

}
// .method abstract removeFinalCertFromPath(Ljava/util/LinkedList;)V
void sun::security::provider::certpath::Builder::removeFinalCertFromPath(std::shared_ptr<java::util::LinkedList<java::security::cert::X509Certificate>> var0)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1161        value = {
	// 1162            "(",
	// 1163            "Ljava/util/LinkedList",
	// 1164            "<",
	// 1165            "Ljava/security/cert/X509Certificate;",
	// 1166            ">;)V"
	// 1167        }
	// 1168    .end annotation

}
// .method abstract verifyCert(Ljava/security/cert/X509Certificate;Lsun/security/provider/certpath/State;Ljava/util/List;)V
void sun::security::provider::certpath::Builder::verifyCert(std::shared_ptr<java::security::cert::X509Certificate> var0,std::shared_ptr<sun::security::provider::certpath::State> var1,std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> var2)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1173        value = {
	// 1174            "(",
	// 1175            "Ljava/security/cert/X509Certificate;",
	// 1176            "Lsun/security/provider/certpath/State;",
	// 1177            "Ljava/util/List",
	// 1178            "<",
	// 1179            "Ljava/security/cert/X509Certificate;",
	// 1180            ">;)V"
	// 1181        }
	// 1182    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1185        value = {
	// 1186            Ljava/security/GeneralSecurityException;
	// 1187        }
	// 1188    .end annotation

}


