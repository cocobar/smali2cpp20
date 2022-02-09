// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$EHalfSupport.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EHalfSupport.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::DataRecord_S_EHalfSupport::NO = 0x1t;
static android::icu::impl::duration::impl::DataRecord_S_EHalfSupport::ONE_PLUS = 0x2t;
static android::icu::impl::duration::impl::DataRecord_S_EHalfSupport::YES;
static android::icu::impl::duration::impl::DataRecord_S_EHalfSupport::names;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::DataRecord_S_EHalfSupport::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x3);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("YES"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NO"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ONE_PLUS"));
	android::icu::impl::duration::impl::DataRecord_S_EHalfSupport::names = cVar0;
	return;

}


