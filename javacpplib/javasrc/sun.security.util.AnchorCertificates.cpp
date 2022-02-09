// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\AnchorCertificates.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.AccessController.h"
#include "java.security.Principal.h"
#include "java.security.cert.X509Certificate.h"
#include "java.util.HashSet.h"
#include "sun.security.util.AnchorCertificates_S_1.h"
#include "sun.security.util.AnchorCertificates.h"
#include "sun.security.util.Debug.h"
#include "sun.security.x509.X509CertImpl.h"

static sun::security::util::AnchorCertificates::HASH = std::make_shared<java::lang::String>("SHA-256");
static sun::security::util::AnchorCertificates::certs;
static sun::security::util::AnchorCertificates::debug;
// .method static synthetic -get0()Ljava/util/HashSet;
std::shared_ptr<java::util::HashSet> sun::security::util::AnchorCertificates::_get0()
{
	
	return sun::security::util::AnchorCertificates::certs;

}
// .method static synthetic -get1()Lsun/security/util/Debug;
std::shared_ptr<sun::security::util::Debug> sun::security::util::AnchorCertificates::_get1()
{
	
	return sun::security::util::AnchorCertificates::debug;

}
// .method static synthetic -set0(Ljava/util/HashSet;)Ljava/util/HashSet;
std::shared_ptr<java::util::HashSet> sun::security::util::AnchorCertificates::_set0(std::shared_ptr<java::util::HashSet> _value)
{
	
	//    .param p0, "-value"    # Ljava/util/HashSet;
	sun::security::util::AnchorCertificates::certs = _value;
	return _value;

}
// .method static constructor <clinit>()V
void sun::security::util::AnchorCertificates::static_cinit()
{
	
	std::shared_ptr<sun::security::util::AnchorCertificates_S_1> cVar0;
	
	sun::security::util::AnchorCertificates::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	cVar0 = std::make_shared<sun::security::util::AnchorCertificates_S_1>();
	java::security::AccessController::doPrivileged(cVar0);
	return;

}
// .method private constructor <init>()V
sun::security::util::AnchorCertificates::AnchorCertificates()
{
	
	// 087    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static contains(Ljava/security/cert/X509Certificate;)Z
bool sun::security::util::AnchorCertificates::contains(std::shared_ptr<java::security::cert::X509Certificate> cert)
{
	
	bool result;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	//    .param p0, "cert"    # Ljava/security/cert/X509Certificate;
	//    .local v0, "key":Ljava/lang/String;
	result = sun::security::util::AnchorCertificates::certs->contains(sun::security::x509::X509CertImpl::getFingerprint(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA-256")), cert));
	//    .local v1, "result":Z
	if ( !(result) )  
		goto label_cond_30;
	if ( !(sun::security::util::AnchorCertificates::debug) )  
		goto label_cond_30;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	sun::security::util::AnchorCertificates::debug->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("AnchorCertificate.contains: matched ")))->append(cert->getSubjectDN())->toString());
label_cond_30:
	return result;

}


