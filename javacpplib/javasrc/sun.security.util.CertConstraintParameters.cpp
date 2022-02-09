// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\CertConstraintParameters.smali
#include "java2ctype.h"
#include "java.security.cert.X509Certificate.h"
#include "sun.security.util.CertConstraintParameters.h"

// .method public constructor <init>(Ljava/security/cert/X509Certificate;)V
sun::security::util::CertConstraintParameters::CertConstraintParameters(std::shared_ptr<java::security::cert::X509Certificate> c)
{
	
	//    .param p1, "c"    # Ljava/security/cert/X509Certificate;
	sun::security::util::CertConstraintParameters::(c, 0x0);
	return;

}
// .method public constructor <init>(Ljava/security/cert/X509Certificate;Z)V
sun::security::util::CertConstraintParameters::CertConstraintParameters(std::shared_ptr<java::security::cert::X509Certificate> c,bool match)
{
	
	//    .param p1, "c"    # Ljava/security/cert/X509Certificate;
	//    .param p2, "match"    # Z
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->cert = c;
	this->trustedMatch = match;
	return;

}
// .method public getCertificate()Ljava/security/cert/X509Certificate;
std::shared_ptr<java::security::cert::X509Certificate> sun::security::util::CertConstraintParameters::getCertificate()
{
	
	return this->cert;

}
// .method public isTrustedMatch()Z
bool sun::security::util::CertConstraintParameters::isTrustedMatch()
{
	
	return this->trustedMatch;

}


