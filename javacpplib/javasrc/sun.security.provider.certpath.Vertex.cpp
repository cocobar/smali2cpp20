// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\Vertex.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.math.BigInteger.h"
#include "java.security.cert.CertificateException.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.Date.h"
#include "javax.security.auth.x500.X500Principal.h"
#include "sun.security.provider.certpath.Vertex.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.AuthorityKeyIdentifierExtension.h"
#include "sun.security.x509.KeyIdentifier.h"
#include "sun.security.x509.SubjectKeyIdentifierExtension.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::provider::certpath::Vertex::debug;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::Vertex::static_cinit()
{
	
	sun::security::provider::certpath::Vertex::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method constructor <init>(Ljava/security/cert/X509Certificate;)V
sun::security::provider::certpath::Vertex::Vertex(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	//    .param p1, "cert"    # Ljava/security/cert/X509Certificate;
	// 042    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->cert = cert;
	this->index = -0x1;
	return;

}
// .method public certToString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::Vertex::certToString()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<sun::security::x509::X509CertImpl> x509Cert;
	auto iUID;
	int cVar2;
	int cVar3;
	auto sUID;
	int cVar6;
	int cVar7;
	std::shared_ptr<sun::security::x509::SubjectKeyIdentifierExtension> sKeyID;
	std::shared_ptr<sun::security::x509::AuthorityKeyIdentifierExtension> aKeyID;
	std::shared_ptr<sun::security::x509::KeyIdentifier> keyID;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v8, "sb":Ljava/lang/StringBuilder;
	0x0;
	//    .local v9, "x509Cert":Lsun/security/x509/X509CertImpl;
	try {
	//label_try_start_8:
	//label_try_end_d:
	}
	catch (java::security::cert::CertificateException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_88;
	}
	//    .catch Ljava/security/cert/CertificateException; {:try_start_8 .. :try_end_d} :catch_88
	x509Cert = sun::security::x509::X509CertImpl::toImpl(this->cert);
	//    .local v9, "x509Cert":Lsun/security/x509/X509CertImpl;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Issuer:     ")))->append(x509Cert->getIssuerX500Principal())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Subject:    ")))->append(x509Cert->getSubjectX500Principal())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SerialNum:  ")))->append(x509Cert->getSerialNumber()->toString(0x10))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Expires:    ")))->append(x509Cert->getNotAfter()->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	iUID = x509Cert->getIssuerUniqueID();
	//    .local v4, "iUID":[Z
	if ( !(iUID) )  
		goto label_cond_a5;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("IssuerUID:  ")));
	cVar2 = cVar1;
label_goto_7a:
	if ( cVar2 >= iUID->size() )
		goto label_cond_9f;
	//    .local v1, "b":Z
	if ( !(iUID[cVar2]) )  
		goto label_cond_9d;
	cVar3 = cVar0;
label_goto_81:
	sb->append(cVar3);
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_7a;
	// 229    .line 140
	// 230    .end local v1    # "b":Z
	// 231    .end local v4    # "iUID":[Z
	// 232    .local v9, "x509Cert":Lsun/security/x509/X509CertImpl;
label_catch_88:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "ce":Ljava/security/cert/CertificateException;
	if ( !(sun::security::provider::certpath::Vertex::debug) )  
		goto label_cond_98;
	sun::security::provider::certpath::Vertex::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Vertex.certToString() unexpected exception")));
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_98:
	return sb->toString();
	// 260    .end local v2    # "ce":Ljava/security/cert/CertificateException;
	// 261    .restart local v1    # "b":Z
	// 262    .restart local v4    # "iUID":[Z
	// 263    .local v9, "x509Cert":Lsun/security/x509/X509CertImpl;
label_cond_9d:
	cVar3 = cVar1;
	goto label_goto_81;
	// 270    .line 162
	// 271    .end local v1    # "b":Z
label_cond_9f:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_a5:
	sUID = x509Cert->getSubjectUniqueID();
	//    .local v7, "sUID":[Z
	if ( !(sUID) )  
		goto label_cond_c9;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SubjectUID: ")));
	cVar6 = cVar1;
label_goto_b3:
	if ( cVar6 >= sUID->size() )
		goto label_cond_c3;
	//    .restart local v1    # "b":Z
	if ( !(sUID[cVar6]) )  
		goto label_cond_c1;
	cVar7 = cVar0;
label_goto_ba:
	sb->append(cVar7);
	cVar6 = ( cVar6 + 0x1);
	goto label_goto_b3;
label_cond_c1:
	cVar7 = cVar1;
	goto label_goto_ba;
	// 324    .line 170
	// 325    .end local v1    # "b":Z
label_cond_c3:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_cond_c9:
	try {
	//label_try_start_c9:
	sKeyID = x509Cert->getSubjectKeyIdentifierExtension();
	//    .local v6, "sKeyID":Lsun/security/x509/SubjectKeyIdentifierExtension;
	if ( !(sKeyID) )  
		goto label_cond_e4;
	//    .local v5, "keyID":Lsun/security/x509/KeyIdentifier;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SubjKeyID:  ")))->append(sKeyID->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")))->toString());
	//    .end local v5    # "keyID":Lsun/security/x509/KeyIdentifier;
label_cond_e4:
	aKeyID = x509Cert->getAuthorityKeyIdentifierExtension();
	//    .local v0, "aKeyID":Lsun/security/x509/AuthorityKeyIdentifierExtension;
	if ( !(aKeyID) )  
		goto label_cond_101;
	keyID = aKeyID->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("key_id")));
	keyID->checkCast("sun::security::x509::KeyIdentifier");
	//    .restart local v5    # "keyID":Lsun/security/x509/KeyIdentifier;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("AuthKeyID:  ")))->append(keyID->toString());
	//label_try_end_101:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_106;
	}
	//    .catch Ljava/io/IOException; {:try_start_c9 .. :try_end_101} :catch_106
	//    .end local v0    # "aKeyID":Lsun/security/x509/AuthorityKeyIdentifierExtension;
	//    .end local v5    # "keyID":Lsun/security/x509/KeyIdentifier;
	//    .end local v6    # "sKeyID":Lsun/security/x509/SubjectKeyIdentifierExtension;
label_cond_101:
label_goto_101:
	return sb->toString();
	// 413    .line 187
label_catch_106:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/io/IOException;
	if ( !(sun::security::provider::certpath::Vertex::debug) )  
		goto label_cond_101;
	sun::security::provider::certpath::Vertex::debug->println(std::make_shared<java::lang::String>(std::make_shared<char[]>("Vertex.certToString() unexpected exception")));
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_101;

}
// .method public getCertificate()Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::provider::certpath::Vertex::getCertificate()
{
	
	return this->cert;

}
// .method public getIndex()I
int sun::security::provider::certpath::Vertex::getIndex()
{
	
	return this->index;

}
// .method public getThrowable()Ljava/lang/Throwable;
std::shared_ptr<java::lang::Throwable> sun::security::provider::certpath::Vertex::getThrowable()
{
	
	// throw
	
	return this->throwable;

}
// .method public indexToString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::Vertex::indexToString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Index:      ")))->append(this->index)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();

}
// .method public moreToString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::Vertex::moreToString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::lang::String> cVar0;
	
	sb = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Last cert?  ")));
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	if ( this->index != -0x1 )
		goto label_cond_1e;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("Yes"));
label_goto_10:
	sb->append(cVar0);
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	return sb->toString();
	// 536    .line 221
label_cond_1e:
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("No"));
	goto label_goto_10;

}
// .method setIndex(I)V
void sun::security::provider::certpath::Vertex::setIndex(int ndx)
{
	
	//    .param p1, "ndx"    # I
	this->index = ndx;
	return;

}
// .method setThrowable(Ljava/lang/Throwable;)V
void sun::security::provider::certpath::Vertex::setThrowable(std::shared_ptr<java::lang::Throwable> throwable)
{
	
	//    .param p1, "throwable"    # Ljava/lang/Throwable;
	// throw
	this->throwable = throwable;
	return;

}
// .method public throwableToString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::Vertex::throwableToString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Exception:  ")));
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	// throw
	
	if ( !(this->throwable) )  
		goto label_cond_20;
	// throw
	
	sb->append(this->throwable->toString());
label_goto_15:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	return sb->toString();
	// 606    .line 207
label_cond_20:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("null")));
	goto label_goto_15;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::provider::certpath::Vertex::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	// throw
	
	return cVar0->append(this->certToString())->append(this->throwableToString())->append(this->indexToString())->toString();

}


