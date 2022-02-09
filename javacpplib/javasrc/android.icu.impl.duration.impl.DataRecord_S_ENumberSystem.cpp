// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$ENumberSystem.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_ENumberSystem.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::DataRecord_S_ENumberSystem::CHINESE_SIMPLIFIED = 0x2t;
static android::icu::impl::duration::impl::DataRecord_S_ENumberSystem::CHINESE_TRADITIONAL = 0x1t;
static android::icu::impl::duration::impl::DataRecord_S_ENumberSystem::DEFAULT = 0x0t;
static android::icu::impl::duration::impl::DataRecord_S_ENumberSystem::KOREAN = 0x3t;
static android::icu::impl::duration::impl::DataRecord_S_ENumberSystem::names;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::DataRecord_S_ENumberSystem::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DEFAULT"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CHINESE_TRADITIONAL"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("CHINESE_SIMPLIFIED"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("KOREAN"));
	android::icu::impl::duration::impl::DataRecord_S_ENumberSystem::names = cVar0;
	return;

}


