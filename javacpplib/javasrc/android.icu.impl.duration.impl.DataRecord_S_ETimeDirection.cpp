// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$ETimeDirection.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_ETimeDirection.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::DataRecord_S_ETimeDirection::FUTURE = 0x2t;
static android::icu::impl::duration::impl::DataRecord_S_ETimeDirection::NODIRECTION = 0x0t;
static android::icu::impl::duration::impl::DataRecord_S_ETimeDirection::PAST = 0x1t;
static android::icu::impl::duration::impl::DataRecord_S_ETimeDirection::names;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::DataRecord_S_ETimeDirection::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x3);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NODIRECTION"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PAST"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FUTURE"));
	android::icu::impl::duration::impl::DataRecord_S_ETimeDirection::names = cVar0;
	return;

}


