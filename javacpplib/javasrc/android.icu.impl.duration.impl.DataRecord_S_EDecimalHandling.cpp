// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$EDecimalHandling.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EDecimalHandling.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::DataRecord_S_EDecimalHandling::DPAUCAL = 0x3t;
static android::icu::impl::duration::impl::DataRecord_S_EDecimalHandling::DPLURAL = 0x0t;
static android::icu::impl::duration::impl::DataRecord_S_EDecimalHandling::DSINGULAR = 0x1t;
static android::icu::impl::duration::impl::DataRecord_S_EDecimalHandling::DSINGULAR_SUBONE = 0x2t;
static android::icu::impl::duration::impl::DataRecord_S_EDecimalHandling::names;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::DataRecord_S_EDecimalHandling::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DPLURAL"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DSINGULAR"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DSINGULAR_SUBONE"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DPAUCAL"));
	android::icu::impl::duration::impl::DataRecord_S_EDecimalHandling::names = cVar0;
	return;

}


