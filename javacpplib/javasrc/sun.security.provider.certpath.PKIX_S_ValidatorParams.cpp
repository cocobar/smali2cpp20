// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIX$ValidatorParams.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.InvalidAlgorithmParameterException.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertSelector.h"
#include "java.security.cert.CertStore.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.PKIXParameters.h"
#include "java.security.cert.TrustAnchor.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Date.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Set.h"
#include "sun.security.provider.certpath.PKIX_S_ValidatorParams.h"

// .method constructor <init>(Ljava/security/cert/CertPath;Ljava/security/cert/PKIXParameters;)V
sun::security::provider::certpath::PKIX_S_ValidatorParams::PKIX_S_ValidatorParams(std::shared_ptr<java::security::cert::CertPath> cp,std::shared_ptr<java::security::cert::PKIXParameters> params)
{
	
	std::shared_ptr<java::security::InvalidAlgorithmParameterException> cVar0;
	
	//    .param p1, "cp"    # Ljava/security/cert/CertPath;
	//    .param p2, "params"    # Ljava/security/cert/PKIXParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 092        value = {
	// 093            Ljava/security/InvalidAlgorithmParameterException;
	// 094        }
	// 095    .end annotation
	sun::security::provider::certpath::PKIX_S_ValidatorParams::(params);
	if ( cp->getType()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("X.509"))) )     
		goto label_cond_28;
	if ( !(( cp->getType()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("X509"))) ^ 0x1)) )  
		goto label_cond_28;
	cVar0 = std::make_shared<java::security::InvalidAlgorithmParameterException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("inappropriate CertPath type specified, must be X.509 or X509")));
	// throw
	throw cVar0;
	// 137    .line 97
label_cond_28:
	this->certPath = cp;
	return;

}
// .method constructor <init>(Ljava/security/cert/PKIXParameters;)V
sun::security::provider::certpath::PKIX_S_ValidatorParams::PKIX_S_ValidatorParams(std::shared_ptr<java::security::cert::PKIXParameters> params)
{
	
	std::shared_ptr<java::util::Iterator> anchor_S_iterator;
	std::shared_ptr<java::security::cert::TrustAnchor> anchor;
	std::shared_ptr<java::security::InvalidAlgorithmParameterException> cVar0;
	
	//    .param p1, "params"    # Ljava/security/cert/PKIXParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 149        value = {
	// 150            Ljava/security/InvalidAlgorithmParameterException;
	// 151        }
	// 152    .end annotation
	// 156    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->anchors = params->getTrustAnchors();
	anchor_S_iterator = this->anchors->iterator();
	//    .local v1, "anchor$iterator":Ljava/util/Iterator;
label_cond_f:
	if ( !(anchor_S_iterator->hasNext()) )  
		goto label_cond_2a;
	anchor = anchor_S_iterator->next();
	anchor->checkCast("java::security::cert::TrustAnchor");
	//    .local v0, "anchor":Ljava/security/cert/TrustAnchor;
	if ( !(anchor->getNameConstraints()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::security::InvalidAlgorithmParameterException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("name constraints in trust anchor not supported")));
	// throw
	throw cVar0;
	// 205    .line 112
	// 206    .end local v0    # "anchor":Ljava/security/cert/TrustAnchor;
label_cond_2a:
	this->params = params;
	return;

}
// .method anyPolicyInhibited()Z
bool sun::security::provider::certpath::PKIX_S_ValidatorParams::anyPolicyInhibited()
{
	
	return this->params->isAnyPolicyInhibited();

}
// .method certPath()Ljava/security/cert/CertPath;
std::shared_ptr<java::security::cert::CertPath> sun::security::provider::certpath::PKIX_S_ValidatorParams::certPath()
{
	
	return this->certPath;

}
// .method certPathCheckers()Ljava/util/List;
std::shared_ptr<java::util::List<java::security::cert::PKIXCertPathChecker>> sun::security::provider::certpath::PKIX_S_ValidatorParams::certPathCheckers()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 243        value = {
	// 244            "()",
	// 245            "Ljava/util/List",
	// 246            "<",
	// 247            "Ljava/security/cert/PKIXCertPathChecker;",
	// 248            ">;"
	// 249        }
	// 250    .end annotation
	if ( this->checkers )     
		goto label_cond_c;
	this->checkers = this->params->getCertPathCheckers();
label_cond_c:
	return this->checkers;

}
// .method certStores()Ljava/util/List;
std::shared_ptr<java::util::List<java::security::cert::CertStore>> sun::security::provider::certpath::PKIX_S_ValidatorParams::certStores()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 277        value = {
	// 278            "()",
	// 279            "Ljava/util/List",
	// 280            "<",
	// 281            "Ljava/security/cert/CertStore;",
	// 282            ">;"
	// 283        }
	// 284    .end annotation
	if ( this->stores )     
		goto label_cond_c;
	this->stores = this->params->getCertStores();
label_cond_c:
	return this->stores;

}
// .method certificates()Ljava/util/List;
std::shared_ptr<java::util::List<java::security::cert::X509Certificate>> sun::security::provider::certpath::PKIX_S_ValidatorParams::certificates()
{
	
	std::shared_ptr<java::util::ArrayList> xc;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 311        value = {
	// 312            "()",
	// 313            "Ljava/util/List",
	// 314            "<",
	// 315            "Ljava/security/cert/X509Certificate;",
	// 316            ">;"
	// 317        }
	// 318    .end annotation
	if ( this->certs )     
		goto label_cond_e;
	if ( this->certPath )     
		goto label_cond_11;
	this->certs = java::util::Collections::emptyList({const[class].FS-Param});
label_cond_e:
label_goto_e:
	return this->certs;
	// 345    .line 130
label_cond_11:
	xc = std::make_shared<java::util::ArrayList>(this->certPath->getCertificates());
	//    .local v0, "xc":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/X509Certificate;>;"
	java::util::Collections::reverse(xc);
	this->certs = xc;
	goto label_goto_e;

}
// .method date()Ljava/util/Date;
std::shared_ptr<java::util::Date> sun::security::provider::certpath::PKIX_S_ValidatorParams::date()
{
	
	std::shared_ptr<java::util::Date> cVar0;
	
	if ( this->gotDate )     
		goto label_cond_1a;
	this->date = this->params->getDate();
	if ( this->date )     
		goto label_cond_17;
	cVar0 = std::make_shared<java::util::Date>();
	this->date = cVar0;
label_cond_17:
	this->gotDate = 0x1;
label_cond_1a:
	return this->date;

}
// .method explicitPolicyRequired()Z
bool sun::security::provider::certpath::PKIX_S_ValidatorParams::explicitPolicyRequired()
{
	
	return this->params->isExplicitPolicyRequired();

}
// .method getPKIXParameters()Ljava/security/cert/PKIXParameters;
std::shared_ptr<java::security::cert::PKIXParameters> sun::security::provider::certpath::PKIX_S_ValidatorParams::getPKIXParameters()
{
	
	return this->params;

}
// .method initialPolicies()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> sun::security::provider::certpath::PKIX_S_ValidatorParams::initialPolicies()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 439        value = {
	// 440            "()",
	// 441            "Ljava/util/Set",
	// 442            "<",
	// 443            "Ljava/lang/String;",
	// 444            ">;"
	// 445        }
	// 446    .end annotation
	if ( this->policies )     
		goto label_cond_c;
	this->policies = this->params->getInitialPolicies();
label_cond_c:
	return this->policies;

}
// .method policyMappingInhibited()Z
bool sun::security::provider::certpath::PKIX_S_ValidatorParams::policyMappingInhibited()
{
	
	return this->params->isPolicyMappingInhibited();

}
// .method policyQualifiersRejected()Z
bool sun::security::provider::certpath::PKIX_S_ValidatorParams::policyQualifiersRejected()
{
	
	return this->params->getPolicyQualifiersRejected();

}
// .method revocationEnabled()Z
bool sun::security::provider::certpath::PKIX_S_ValidatorParams::revocationEnabled()
{
	
	return this->params->isRevocationEnabled();

}
// .method setCertPath(Ljava/security/cert/CertPath;)V
void sun::security::provider::certpath::PKIX_S_ValidatorParams::setCertPath(std::shared_ptr<java::security::cert::CertPath> cp)
{
	
	//    .param p1, "cp"    # Ljava/security/cert/CertPath;
	this->certPath = cp;
	return;

}
// .method sigProvider()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::PKIX_S_ValidatorParams::sigProvider()
{
	
	return this->params->getSigProvider();

}
// .method targetCertConstraints()Ljava/security/cert/CertSelector;
std::shared_ptr<java::security::cert::CertSelector> sun::security::provider::certpath::PKIX_S_ValidatorParams::targetCertConstraints()
{
	
	if ( this->gotConstraints )     
		goto label_cond_f;
	this->constraints = this->params->getTargetCertConstraints();
	this->gotConstraints = 0x1;
label_cond_f:
	return this->constraints;

}
// .method trustAnchors()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::security::cert::TrustAnchor>> sun::security::provider::certpath::PKIX_S_ValidatorParams::trustAnchors()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 571        value = {
	// 572            "()",
	// 573            "Ljava/util/Set",
	// 574            "<",
	// 575            "Ljava/security/cert/TrustAnchor;",
	// 576            ">;"
	// 577        }
	// 578    .end annotation
	return this->anchors;

}


