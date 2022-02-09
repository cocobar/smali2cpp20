// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$EHalfPlacement.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EHalfPlacement.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::DataRecord_S_EHalfPlacement::AFTER_FIRST = 0x1t;
static android::icu::impl::duration::impl::DataRecord_S_EHalfPlacement::LAST = 0x2t;
static android::icu::impl::duration::impl::DataRecord_S_EHalfPlacement::PREFIX;
static android::icu::impl::duration::impl::DataRecord_S_EHalfPlacement::names;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::DataRecord_S_EHalfPlacement::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x3);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PREFIX"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("AFTER_FIRST"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST"));
	android::icu::impl::duration::impl::DataRecord_S_EHalfPlacement::names = cVar0;
	return;

}


