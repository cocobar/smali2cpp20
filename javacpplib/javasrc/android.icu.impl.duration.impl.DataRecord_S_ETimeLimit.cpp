// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$ETimeLimit.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_ETimeLimit.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::DataRecord_S_ETimeLimit::LT = 0x1t;
static android::icu::impl::duration::impl::DataRecord_S_ETimeLimit::MT = 0x2t;
static android::icu::impl::duration::impl::DataRecord_S_ETimeLimit::NOLIMIT;
static android::icu::impl::duration::impl::DataRecord_S_ETimeLimit::names;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::DataRecord_S_ETimeLimit::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x3);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NOLIMIT"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("LT"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("MT"));
	android::icu::impl::duration::impl::DataRecord_S_ETimeLimit::names = cVar0;
	return;

}


