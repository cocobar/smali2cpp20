// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\CertPathProvider.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.Provider.h"
#include "sun.security.provider.CertPathProvider.h"

// .method public constructor <init>()V
sun::security::provider::CertPathProvider::CertPathProvider()
{
	
	java::security::Provider::(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertPathProvider")), 0x3ff0000000000000L, std::make_shared<java::lang::String>(std::make_shared<char[]>("Provider of CertPathBuilder and CertPathVerifier")));
	this->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertPathBuilder.PKIX")), std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.security.provider.certpath.SunCertPathBuilder")));
	this->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertPathBuilder.PKIX ImplementedIn")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Software")));
	this->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertPathBuilder.PKIX ValidationAlgorithm")), std::make_shared<java::lang::String>(std::make_shared<char[]>("RFC3280")));
	this->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertPathValidator.PKIX")), std::make_shared<java::lang::String>(std::make_shared<char[]>("sun.security.provider.certpath.PKIXCertPathValidator")));
	this->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertPathValidator.PKIX ImplementedIn")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Software")));
	this->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertPathValidator.PKIX ValidationAlgorithm")), std::make_shared<java::lang::String>(std::make_shared<char[]>("RFC3280")));
	return;

}


