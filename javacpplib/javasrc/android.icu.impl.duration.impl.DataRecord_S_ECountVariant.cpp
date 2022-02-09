// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$ECountVariant.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_ECountVariant.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::DataRecord_S_ECountVariant::DECIMAL1 = 0x3t;
static android::icu::impl::duration::impl::DataRecord_S_ECountVariant::DECIMAL2 = 0x4t;
static android::icu::impl::duration::impl::DataRecord_S_ECountVariant::DECIMAL3 = 0x5t;
static android::icu::impl::duration::impl::DataRecord_S_ECountVariant::HALF_FRACTION = 0x2t;
static android::icu::impl::duration::impl::DataRecord_S_ECountVariant::INTEGER = 0x0t;
static android::icu::impl::duration::impl::DataRecord_S_ECountVariant::INTEGER_CUSTOM = 0x1t;
static android::icu::impl::duration::impl::DataRecord_S_ECountVariant::names;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::DataRecord_S_ECountVariant::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x6);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("INTEGER"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("INTEGER_CUSTOM"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HALF_FRACTION"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DECIMAL1"));
	cVar0[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DECIMAL2"));
	cVar0[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DECIMAL3"));
	android::icu::impl::duration::impl::DataRecord_S_ECountVariant::names = cVar0;
	return;

}


