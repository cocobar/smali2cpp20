// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Norm2AllModes$NFKC_CFSingleton.smali
#include "java2ctype.h"
#include "android.icu.impl.Norm2AllModes_S_NFKC_CFSingleton.h"
#include "android.icu.impl.Norm2AllModes_S_Norm2AllModesSingleton.h"
#include "java.lang.String.h"

static android::icu::impl::Norm2AllModes_S_NFKC_CFSingleton::INSTANCE;
// .method static synthetic -get0()Landroid/icu/impl/Norm2AllModes$Norm2AllModesSingleton;
std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> android::icu::impl::Norm2AllModes_S_NFKC_CFSingleton::_get0()
{
	
	return android::icu::impl::Norm2AllModes_S_NFKC_CFSingleton::INSTANCE;

}
// .method static constructor <clinit>()V
void android::icu::impl::Norm2AllModes_S_NFKC_CFSingleton::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton> cVar0;
	
	cVar0 = std::make_shared<android::icu::impl::Norm2AllModes_S_Norm2AllModesSingleton>(std::make_shared<java::lang::String>(std::make_shared<char[]>("nfkc_cf")), 0x0);
	android::icu::impl::Norm2AllModes_S_NFKC_CFSingleton::INSTANCE = cVar0;
	return;

}
// .method private constructor <init>()V
android::icu::impl::Norm2AllModes_S_NFKC_CFSingleton::Norm2AllModes_S_NFKC_CFSingleton()
{
	
	// 054    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


