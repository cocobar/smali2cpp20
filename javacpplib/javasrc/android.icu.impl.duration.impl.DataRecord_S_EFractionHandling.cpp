// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\duration\impl\DataRecord$EFractionHandling.smali
#include "java2ctype.h"
#include "android.icu.impl.duration.impl.DataRecord_S_EFractionHandling.h"
#include "java.lang.String.h"

static android::icu::impl::duration::impl::DataRecord_S_EFractionHandling::FPAUCAL = 0x3t;
static android::icu::impl::duration::impl::DataRecord_S_EFractionHandling::FPLURAL = 0x0t;
static android::icu::impl::duration::impl::DataRecord_S_EFractionHandling::FSINGULAR_PLURAL = 0x1t;
static android::icu::impl::duration::impl::DataRecord_S_EFractionHandling::FSINGULAR_PLURAL_ANDAHALF = 0x2t;
static android::icu::impl::duration::impl::DataRecord_S_EFractionHandling::names;
// .method static constructor <clinit>()V
void android::icu::impl::duration::impl::DataRecord_S_EFractionHandling::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FPLURAL"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FSINGULAR_PLURAL"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FSINGULAR_PLURAL_ANDAHALF"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FPAUCAL"));
	android::icu::impl::duration::impl::DataRecord_S_EFractionHandling::names = cVar0;
	return;

}


