// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$EUnitVariant.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EUnitVariant.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::DataRecord_S_EUnitVariant::MEDIUM = 0x1t;
static android::icu::impl::duration::impl::DataRecord_S_EUnitVariant::PLURALIZED = 0x0t;
static android::icu::impl::duration::impl::DataRecord_S_EUnitVariant::SHORT = 0x2t;
static android::icu::impl::duration::impl::DataRecord_S_EUnitVariant::names;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::DataRecord_S_EUnitVariant::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x3);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PLURALIZED"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MEDIUM"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SHORT"));
	android::icu::impl::duration::impl::DataRecord_S_EUnitVariant::names = cVar0;
	return;

}


