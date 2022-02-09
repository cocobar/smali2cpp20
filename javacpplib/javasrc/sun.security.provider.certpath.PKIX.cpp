// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\PKIX.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.security.InvalidAlgorithmParameterException.h"
#include "java.security.PublicKey.h"
#include "java.security.cert.CertPath.h"
#include "java.security.cert.CertPathParameters.h"
#include "java.security.cert.PKIXBuilderParameters.h"
#include "java.security.cert.PKIXParameters.h"
#include "java.security.interfaces.DSAParams.h"
#include "java.security.interfaces.DSAPublicKey.h"
#include "sun.security.provider.certpath.PKIX_S_BuilderParams.h"
#include "sun.security.provider.certpath.PKIX_S_ValidatorParams.h"
#include "sun.security.provider.certpath.PKIX.h"
#include "sun.security.util.Debug.h"

static sun::security::provider::certpath::PKIX::debug;
// .method static synthetic -get0()Lsun/security/util/Debug;
std::shared_ptr<sun::security::util::Debug> sun::security::provider::certpath::PKIX::_get0()
{
	
	return sun::security::provider::certpath::PKIX::debug;

}
// .method static constructor <clinit>()V
void sun::security::provider::certpath::PKIX::static_cinit()
{
	
	sun::security::provider::certpath::PKIX::debug = sun::security::util::Debug::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("certpath")));
	return;

}
// .method private constructor <init>()V
sun::security::provider::certpath::PKIX::PKIX()
{
	
	// 052    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method static checkBuilderParams(Ljava/security/cert/CertPathParameters;)Lsun/security/provider/certpath/PKIX$BuilderParams;
std::shared_ptr<sun::security::provider::certpath::PKIX_S_BuilderParams> sun::security::provider::certpath::PKIX::checkBuilderParams(std::shared_ptr<java::security::cert::CertPathParameters> params)
{
	
	std::shared_ptr<java::security::InvalidAlgorithmParameterException> cVar0;
	std::shared_ptr<sun::security::provider::certpath::PKIX_S_BuilderParams> cVar1;
	
	//    .param p0, "params"    # Ljava/security/cert/CertPathParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 061        value = {
	// 062            Ljava/security/InvalidAlgorithmParameterException;
	// 063        }
	// 064    .end annotation
	if ( params->instanceOf("java::security::cert::PKIXBuilderParameters") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::InvalidAlgorithmParameterException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("inappropriate params, must be an instance of PKIXBuilderParameters")));
	// throw
	throw cVar0;
	// 081    .line 68
label_cond_d:
	params->checkCast("java::security::cert::PKIXBuilderParameters");
	//    .end local p0    # "params":Ljava/security/cert/CertPathParameters;
	cVar1 = std::make_shared<sun::security::provider::certpath::PKIX_S_BuilderParams>(params);
	return cVar1;

}
// .method static checkParams(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Lsun/security/provider/certpath/PKIX$ValidatorParams;
std::shared_ptr<sun::security::provider::certpath::PKIX_S_ValidatorParams> sun::security::provider::certpath::PKIX::checkParams(std::shared_ptr<java::security::cert::CertPath> cp,std::shared_ptr<java::security::cert::CertPathParameters> params)
{
	
	std::shared_ptr<java::security::InvalidAlgorithmParameterException> cVar0;
	std::shared_ptr<sun::security::provider::certpath::PKIX_S_ValidatorParams> cVar1;
	
	//    .param p0, "cp"    # Ljava/security/cert/CertPath;
	//    .param p1, "params"    # Ljava/security/cert/CertPathParameters;
	//    .annotation system Ldalvik/annotation/Throws;
	// 098        value = {
	// 099            Ljava/security/InvalidAlgorithmParameterException;
	// 100        }
	// 101    .end annotation
	if ( params->instanceOf("java::security::cert::PKIXParameters") )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::security::InvalidAlgorithmParameterException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("inappropriate params, must be an instance of PKIXParameters")));
	// throw
	throw cVar0;
	// 118    .line 58
label_cond_d:
	params->checkCast("java::security::cert::PKIXParameters");
	//    .end local p1    # "params":Ljava/security/cert/CertPathParameters;
	cVar1 = std::make_shared<sun::security::provider::certpath::PKIX_S_ValidatorParams>(cp, params);
	return cVar1;

}
// .method static isDSAPublicKeyWithoutParams(Ljava/security/PublicKey;)Z
bool sun::security::provider::certpath::PKIX::isDSAPublicKeyWithoutParams(std::shared_ptr<java::security::PublicKey> publicKey)
{
	
	bool cVar1;
	
	//    .param p0, "publicKey"    # Ljava/security/PublicKey;
	cVar1 = 0x0;
	if ( !(publicKey->instanceOf("java::security::interfaces::DSAPublicKey")) )  
		goto label_cond_e;
	publicKey->checkCast("java::security::interfaces::DSAPublicKey");
	//    .end local p0    # "publicKey":Ljava/security/PublicKey;
	if ( publicKey->getParams() )     
		goto label_cond_e;
	cVar1 = 0x1;
label_cond_e:
	return cVar1;

}


