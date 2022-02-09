// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\ForwardState.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Cloneable.h"
#include "java.lang.InternalError.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertPathValidatorException.h"
#include "java.security.cert.PKIXCertPathChecker.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.ArrayList.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.ListIterator.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.ForwardState.h"
#include "sun.security.provider.certpath.PKIX.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.GeneralName.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.SubjectAlternativeNameExtension.h"
#include "sun.security.x509.X500Name.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::ForwardState::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::ForwardState::static_cinit()
{
	
	sun::security::provider::certpath::ForwardState::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method constructor <init>()V
sun::security::provider::certpath::ForwardState::ForwardState()
{
	
	// 070    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->init = 0x1;
	this->keyParamsNeededFlag = 0x0;
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::provider::certpath::ForwardState::clone()
{
	
	std::shared_ptr<java::lang::CloneNotSupportedException> e;
	std::shared_ptr<java::lang::InternalError> cVar2;
	std::shared_ptr<sun::security::provider::certpath::ForwardState> clonedState;
	std::shared_ptr<java::util::ArrayList> cVar0;
	std::shared_ptr<java::util::ListIterator> li;
	std::shared_ptr<java::security::cert::PKIXCertPathChecker> checker;
	std::shared_ptr<java::security::cert::PKIXCertPathChecker> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::util::HashSet> cVar3;
	
	try {
	//label_try_start_0:
	clonedState = this->clone();
	clonedState->checkCast("sun::security::provider::certpath::ForwardState");
	//    .local v1, "clonedState":Lsun/security/provider/certpath/ForwardState;
	cVar0 = this->forwardCheckers->clone();
	cVar0->checkCast("java::util::ArrayList");
	clonedState->forwardCheckers = cVar0;
	li = clonedState->forwardCheckers->listIterator();
	//    .local v3, "li":Ljava/util/ListIterator;, "Ljava/util/ListIterator<Ljava/security/cert/PKIXCertPathChecker;>;"
label_cond_16:
label_goto_16:
	if ( !(li->hasNext()) )  
		goto label_cond_3b;
	checker = li->next();
	checker->checkCast("java::security::cert::PKIXCertPathChecker");
	//    .local v0, "checker":Ljava/security/cert/PKIXCertPathChecker;
	if ( !(checker->instanceOf("java::lang::Cloneable")) )  
		goto label_cond_16;
	cVar1 = checker->clone();
	cVar1->checkCast("java::security::cert::PKIXCertPathChecker");
	li->set(cVar1);
	//label_try_end_2f:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_30;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_2f} :catch_30
	goto label_goto_16;
	// 156    .line 256
	// 157    .end local v0    # "checker":Ljava/security/cert/PKIXCertPathChecker;
	// 158    .end local v1    # "clonedState":Lsun/security/provider/certpath/ForwardState;
	// 159    .end local v3    # "li":Ljava/util/ListIterator;, "Ljava/util/ListIterator<Ljava/security/cert/PKIXCertPathChecker;>;"
label_catch_30:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/CloneNotSupportedException;
	cVar2 = std::make_shared<java::lang::InternalError>(e->toString(), e);
	// throw
	throw cVar2;
	// 175    .line 254
	// 176    .end local v2    # "e":Ljava/lang/CloneNotSupportedException;
	// 177    .restart local v1    # "clonedState":Lsun/security/provider/certpath/ForwardState;
	// 178    .restart local v3    # "li":Ljava/util/ListIterator;, "Ljava/util/ListIterator<Ljava/security/cert/PKIXCertPathChecker;>;"
label_cond_3b:
	try {
	//label_try_start_3b:
	cVar3 = this->subjectNamesTraversed->clone();
	cVar3->checkCast("java::util::HashSet");
	clonedState->subjectNamesTraversed = cVar3;
	//label_try_end_45:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_30;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_3b .. :try_end_45} :catch_30
	return clonedState;

}
// .method public initState(Ljava/util/List;)V
void sun::security::provider::certpath::ForwardState::initState(std::shared_ptr<java::util::List<java::security::cert::PKIXCertPathChecker>> certPathCheckers)
{
	
	bool cVar0;
	std::shared_ptr<java::util::HashSet> cVar1;
	std::shared_ptr<java::util::ArrayList> cVar2;
	std::shared_ptr<java::util::Iterator> checker_S_iterator;
	std::shared_ptr<java::security::cert::PKIXCertPathChecker> checker;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 201        value = {
	// 202            "(",
	// 203            "Ljava/util/List",
	// 204            "<",
	// 205            "Ljava/security/cert/PKIXCertPathChecker;",
	// 206            ">;)V"
	// 207        }
	// 208    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 211        value = {
	// 212            Ljava/security/cert/CertPathValidatorException;
	// 213        }
	// 214    .end annotation
	//    .local p1, "certPathCheckers":Ljava/util/List;, "Ljava/util/List<Ljava/security/cert/PKIXCertPathChecker;>;"
	cVar0 = 0x1;
	cVar1 = std::make_shared<java::util::HashSet>();
	this->subjectNamesTraversed = cVar1;
	this->traversedCACerts = 0x0;
	cVar2 = std::make_shared<java::util::ArrayList>();
	this->forwardCheckers = cVar2;
	checker_S_iterator = certPathCheckers->iterator();
	//    .local v1, "checker$iterator":Ljava/util/Iterator;
label_cond_16:
label_goto_16:
	if ( !(checker_S_iterator->hasNext()) )  
		goto label_cond_31;
	checker = checker_S_iterator->next();
	checker->checkCast("java::security::cert::PKIXCertPathChecker");
	//    .local v0, "checker":Ljava/security/cert/PKIXCertPathChecker;
	if ( !(checker->isForwardCheckingSupported()) )  
		goto label_cond_16;
	checker->init(cVar0);
	this->forwardCheckers->add(checker);
	goto label_goto_16;
	// 277    .line 153
	// 278    .end local v0    # "checker":Ljava/security/cert/PKIXCertPathChecker;
label_cond_31:
	this->init = cVar0;
	return;

}
// .method public isInitial()Z
bool sun::security::provider::certpath::ForwardState::isInitial()
{
	
	return this->init;

}
// .method public keyParamsNeeded()Z
bool sun::security::provider::certpath::ForwardState::keyParamsNeeded()
{
	
	return this->keyParamsNeededFlag;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::ForwardState::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("State [")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  issuerDN of last cert: ")))->append(this->issuerDN);
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  traversedCACerts: ")))->append(this->traversedCACerts);
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  init: ")))->append(java::lang::String::valueOf(this->init));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  keyParamsNeeded: ")))->append(java::lang::String::valueOf(this->keyParamsNeededFlag));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n  subjectNamesTraversed: \n")))->append(this->subjectNamesTraversed);
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")));
	return sb->toString();

}
// .method public updateState(Ljava/security/cert/X509Certificate;)V
void sun::security::provider::certpath::ForwardState::updateState(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	std::shared_ptr<sun::security::x509::X509CertImpl> icert;
	std::shared_ptr<java::io::IOException> e;
	std::shared_ptr<java::security::cert::CertPathValidatorException> cVar0;
	std::shared_ptr<sun::security::x509::SubjectAlternativeNameExtension> subjAltNameExt;
	std::shared_ptr<java::util::Iterator> gName_S_iterator;
	std::shared_ptr<sun::security::x509::GeneralName> gName;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 405        value = {
	// 406            Ljava/security/cert/CertificateException;,
	// 407            Ljava/io/IOException;,
	// 408            Ljava/security/cert/CertPathValidatorException;
	// 409        }
	// 410    .end annotation
	if ( cert )     
		goto label_cond_3;
	return;
	// 419    .line 168
label_cond_3:
	icert = sun::security::x509::X509CertImpl::toImpl(cert);
	//    .local v4, "icert":Lsun/security/x509/X509CertImpl;
	if ( !(sun::security::provider::certpath::PKIX::isDSAPublicKeyWithoutParams(icert->getPublicKey())) )  
		goto label_cond_14;
	this->keyParamsNeededFlag = 0x1;
label_cond_14:
	this->cert = icert;
	this->issuerDN = cert->getIssuerX500Principal();
	if ( sun::security::x509::X509CertImpl::isSelfIssued(cert) )     
		goto label_cond_33;
	if ( this->init )     
		goto label_cond_33;
	if ( cert->getBasicConstraints() == -0x1 )
		goto label_cond_33;
	this->traversedCACerts = ( this->traversedCACerts + 0x1);
label_cond_33:
	if ( this->init )     
		goto label_cond_3f;
	if ( !(( sun::security::x509::X509CertImpl::isSelfIssued(cert) ^ 0x1)) )  
		goto label_cond_8d;
label_cond_3f:
	//    .local v6, "subjName":Ljavax/security/auth/x500/X500Principal;
	this->subjectNamesTraversed->add(sun::security::x509::X500Name::asX500Name(cert->getSubjectX500Principal()));
	try {
	//label_try_start_4c:
	subjAltNameExt = icert->getSubjectAlternativeNameExtension();
	//    .local v5, "subjAltNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
	if ( !(subjAltNameExt) )  
		goto label_cond_8d;
	//    .local v3, "gNames":Lsun/security/x509/GeneralNames;
	gName_S_iterator = subjAltNameExt->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("subject_name")))->names()->iterator();
	//    .local v2, "gName$iterator":Ljava/util/Iterator;
label_goto_61:
	if ( !(gName_S_iterator->hasNext()) )  
		goto label_cond_8d;
	gName = gName_S_iterator->next();
	gName->checkCast("sun::security::x509::GeneralName");
	//    .local v1, "gName":Lsun/security/x509/GeneralName;
	this->subjectNamesTraversed->add(gName->getName());
	//label_try_end_76:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_77;
	}
	//    .catch Ljava/io/IOException; {:try_start_4c .. :try_end_76} :catch_77
	goto label_goto_61;
	// 566    .line 208
	// 567    .end local v1    # "gName":Lsun/security/x509/GeneralName;
	// 568    .end local v2    # "gName$iterator":Ljava/util/Iterator;
	// 569    .end local v3    # "gNames":Lsun/security/x509/GeneralNames;
	// 570    .end local v5    # "subjAltNameExt":Lsun/security/x509/SubjectAlternativeNameExtension;
label_catch_77:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	if ( !(sun::security::provider::certpath::ForwardState::debug) )  
		goto label_cond_87;
	sun::security::provider::certpath::ForwardState::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("ForwardState.updateState() unexpected exception")));
	e->printStackTrace();
label_cond_87:
	cVar0 = std::make_shared<java::security::cert::CertPathValidatorException>(e);
	// throw
	throw cVar0;
	// 598    .line 218
	// 599    .end local v0    # "e":Ljava/io/IOException;
	// 600    .end local v6    # "subjName":Ljavax/security/auth/x500/X500Principal;
label_cond_8d:
	this->init = 0x0;
	return;

}


