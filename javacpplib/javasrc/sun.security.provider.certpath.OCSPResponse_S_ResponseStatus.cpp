// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\OCSPResponse$ResponseStatus.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"
#include "sun.security.provider.certpath.OCSPResponse_S_ResponseStatus.h"

static sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::_S_VALUES;
static sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::INTERNAL_ERROR;
static sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::MALFORMED_REQUEST;
static sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::SIG_REQUIRED;
static sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::SUCCESSFUL;
static sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::TRY_LATER;
static sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::UNAUTHORIZED;
static sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::UNUSED;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> cVar5;
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> cVar6;
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> cVar7;
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> cVar8;
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> cVar9;
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> cVar10;
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> cVar11;
	std::shared<std::vector<std::vector<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus>>> cVar12;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SUCCESSFUL")), cVar4);
	sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::SUCCESSFUL = cVar5;
	cVar6 = std::make_shared<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MALFORMED_REQUEST")), cVar3);
	sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::MALFORMED_REQUEST = cVar6;
	cVar7 = std::make_shared<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("INTERNAL_ERROR")), cVar2);
	sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::INTERNAL_ERROR = cVar7;
	cVar8 = std::make_shared<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TRY_LATER")), cVar1);
	sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::TRY_LATER = cVar8;
	cVar9 = std::make_shared<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNUSED")), cVar0);
	sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::UNUSED = cVar9;
	cVar10 = std::make_shared<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SIG_REQUIRED")), 0x5);
	sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::SIG_REQUIRED = cVar10;
	cVar11 = std::make_shared<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNAUTHORIZED")), 0x6);
	sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::UNAUTHORIZED = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus>>>(0x7);
	cVar12[cVar4] = sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::SUCCESSFUL;
	cVar12[cVar3] = sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::MALFORMED_REQUEST;
	cVar12[cVar2] = sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::INTERNAL_ERROR;
	cVar12[cVar1] = sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::TRY_LATER;
	cVar12[cVar0] = sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::UNUSED;
	cVar12[0x5] = sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::SIG_REQUIRED;
	cVar12[0x6] = sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::UNAUTHORIZED;
	sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::_S_VALUES = cVar12;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::OCSPResponse_S_ResponseStatus(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;
std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(sun::security::provider::certpath::OCSPResponse_S_ResponseStatus(), name);
	cVar0->checkCast("sun::security::provider::certpath::OCSPResponse_S_ResponseStatus");
	return cVar0;

}
// .method public static values()[Lsun/security/provider/certpath/OCSPResponse$ResponseStatus;
std::shared_ptr<sun::security::provider::certpath::OCSPResponse_S_ResponseStatus> sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::values()
{
	
	return sun::security::provider::certpath::OCSPResponse_S_ResponseStatus::_S_VALUES;

}


