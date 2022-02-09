// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$EMilliSupport.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EMilliSupport.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::DataRecord_S_EMilliSupport::NO = 0x1t;
static android::icu::impl::duration::impl::DataRecord_S_EMilliSupport::WITH_SECONDS = 0x2t;
static android::icu::impl::duration::impl::DataRecord_S_EMilliSupport::YES;
static android::icu::impl::duration::impl::DataRecord_S_EMilliSupport::names;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::DataRecord_S_EMilliSupport::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x3);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("YES"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NO"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("WITH_SECONDS"));
	android::icu::impl::duration::impl::DataRecord_S_EMilliSupport::names = cVar0;
	return;

}


