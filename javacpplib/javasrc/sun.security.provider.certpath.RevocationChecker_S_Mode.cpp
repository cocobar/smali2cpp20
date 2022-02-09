// CPP L:\smali2cpp20\x64\Release\out\sun\security\provider\certpath\RevocationChecker$Mode.smali
#include "java2ctype.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"
#include "sun.security.provider.certpath.RevocationChecker_S_Mode.h"

static sun::security::provider::certpath::RevocationChecker_S_Mode::_S_VALUES;
static sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_CRLS;
static sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_OCSP;
static sun::security::provider::certpath::RevocationChecker_S_Mode::PREFER_CRLS;
static sun::security::provider::certpath::RevocationChecker_S_Mode::PREFER_OCSP;
// .method static constructor <clinit>()V
void sun::security::provider::certpath::RevocationChecker_S_Mode::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> cVar4;
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> cVar5;
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> cVar6;
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> cVar7;
	std::shared<std::vector<std::vector<sun::security::provider::certpath::RevocationChecker_S_Mode>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<sun::security::provider::certpath::RevocationChecker_S_Mode>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PREFER_OCSP")), cVar3);
	sun::security::provider::certpath::RevocationChecker_S_Mode::PREFER_OCSP = cVar4;
	cVar5 = std::make_shared<sun::security::provider::certpath::RevocationChecker_S_Mode>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PREFER_CRLS")), cVar2);
	sun::security::provider::certpath::RevocationChecker_S_Mode::PREFER_CRLS = cVar5;
	cVar6 = std::make_shared<sun::security::provider::certpath::RevocationChecker_S_Mode>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ONLY_CRLS")), cVar1);
	sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_CRLS = cVar6;
	cVar7 = std::make_shared<sun::security::provider::certpath::RevocationChecker_S_Mode>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ONLY_OCSP")), cVar0);
	sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_OCSP = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<sun::security::provider::certpath::RevocationChecker_S_Mode>>>(0x4);
	cVar8[cVar3] = sun::security::provider::certpath::RevocationChecker_S_Mode::PREFER_OCSP;
	cVar8[cVar2] = sun::security::provider::certpath::RevocationChecker_S_Mode::PREFER_CRLS;
	cVar8[cVar1] = sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_CRLS;
	cVar8[cVar0] = sun::security::provider::certpath::RevocationChecker_S_Mode::ONLY_OCSP;
	sun::security::provider::certpath::RevocationChecker_S_Mode::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
sun::security::provider::certpath::RevocationChecker_S_Mode::RevocationChecker_S_Mode(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Lsun/security/provider/certpath/RevocationChecker$Mode;
std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> sun::security::provider::certpath::RevocationChecker_S_Mode::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(sun::security::provider::certpath::RevocationChecker_S_Mode(), name);
	cVar0->checkCast("sun::security::provider::certpath::RevocationChecker_S_Mode");
	return cVar0;

}
// .method public static values()[Lsun/security/provider/certpath/RevocationChecker$Mode;
std::shared_ptr<sun::security::provider::certpath::RevocationChecker_S_Mode> sun::security::provider::certpath::RevocationChecker_S_Mode::values()
{
	
	return sun::security::provider::certpath::RevocationChecker_S_Mode::_S_VALUES;

}


