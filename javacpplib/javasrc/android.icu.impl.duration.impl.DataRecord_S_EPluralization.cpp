// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$EPluralization.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EPluralization.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::DataRecord_S_EPluralization::ARABIC = 0x5t;
static android::icu::impl::duration::impl::DataRecord_S_EPluralization::DUAL = 0x2t;
static android::icu::impl::duration::impl::DataRecord_S_EPluralization::HEBREW = 0x4t;
static android::icu::impl::duration::impl::DataRecord_S_EPluralization::NONE = 0x0t;
static android::icu::impl::duration::impl::DataRecord_S_EPluralization::PAUCAL = 0x3t;
static android::icu::impl::duration::impl::DataRecord_S_EPluralization::PLURAL = 0x1t;
static android::icu::impl::duration::impl::DataRecord_S_EPluralization::names;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::DataRecord_S_EPluralization::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x6);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NONE"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PLURAL"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DUAL"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PAUCAL"));
	cVar0[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("HEBREW"));
	cVar0[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ARABIC"));
	android::icu::impl::duration::impl::DataRecord_S_EPluralization::names = cVar0;
	return;

}


