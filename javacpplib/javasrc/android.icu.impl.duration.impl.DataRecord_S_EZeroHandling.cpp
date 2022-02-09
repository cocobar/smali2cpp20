// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$EZeroHandling.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EZeroHandling.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::DataRecord_S_EZeroHandling::ZPLURAL = 0x0t;
static android::icu::impl::duration::impl::DataRecord_S_EZeroHandling::ZSINGULAR = 0x1t;
static android::icu::impl::duration::impl::DataRecord_S_EZeroHandling::names;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::DataRecord_S_EZeroHandling::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x2);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZPLURAL"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ZSINGULAR"));
	android::icu::impl::duration::impl::DataRecord_S_EZeroHandling::names = cVar0;
	return;

}


