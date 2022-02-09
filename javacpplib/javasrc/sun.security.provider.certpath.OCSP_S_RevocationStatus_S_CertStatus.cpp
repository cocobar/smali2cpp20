// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSP$RevocationStatus$CertStatus.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"
#include "sun.security.provider.certpath.OCSP_S_RevocationStatus_S_CertStatus.h"

static sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::_S_VALUES;
static sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::GOOD;
static sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::REVOKED;
static sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::UNKNOWN;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> cVar3;
	std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> cVar4;
	std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> cVar5;
	std::shared<std::vector<std::vector<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GOOD")), cVar2);
	sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::GOOD = cVar3;
	cVar4 = std::make_shared<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("REVOKED")), cVar1);
	sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::REVOKED = cVar4;
	cVar5 = std::make_shared<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNKNOWN")), cVar0);
	sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::UNKNOWN = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus>>>(0x3);
	cVar6[cVar2] = sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::GOOD;
	cVar6[cVar1] = sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::REVOKED;
	cVar6[cVar0] = sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::UNKNOWN;
	sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::OCSP_S_RevocationStatus_S_CertStatus(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;
std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus(), name);
	cVar0->checkCast("sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus");
	return cVar0;

}
// .method public static values()[Lsun/security/provider/certpath/OCSP$RevocationStatus$CertStatus;
std::shared_ptr<sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus> sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::values()
{
	
	return sun::security::provider::certpath::OCSP_S_RevocationStatus_S_CertStatus::_S_VALUES;

}


