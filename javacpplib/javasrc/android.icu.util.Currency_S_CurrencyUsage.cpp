// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\Currency$CurrencyUsage.smali
#include "java2ctype.h"
#include "android.icu.util.Currency_S_CurrencyUsage.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::util::Currency_S_CurrencyUsage::_S_VALUES;
static android::icu::util::Currency_S_CurrencyUsage::CASH;
static android::icu::util::Currency_S_CurrencyUsage::STANDARD;
// .method static constructor <clinit>()V
void android::icu::util::Currency_S_CurrencyUsage::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> cVar2;
	std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> cVar3;
	std::shared<std::vector<std::vector<android::icu::util::Currency_S_CurrencyUsage>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::util::Currency_S_CurrencyUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("STANDARD")), cVar1);
	android::icu::util::Currency_S_CurrencyUsage::STANDARD = cVar2;
	cVar3 = std::make_shared<android::icu::util::Currency_S_CurrencyUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CASH")), cVar0);
	android::icu::util::Currency_S_CurrencyUsage::CASH = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::util::Currency_S_CurrencyUsage>>>(0x2);
	cVar4[cVar1] = android::icu::util::Currency_S_CurrencyUsage::STANDARD;
	cVar4[cVar0] = android::icu::util::Currency_S_CurrencyUsage::CASH;
	android::icu::util::Currency_S_CurrencyUsage::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::util::Currency_S_CurrencyUsage::Currency_S_CurrencyUsage(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/util/Currency$CurrencyUsage;
std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> android::icu::util::Currency_S_CurrencyUsage::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::util::Currency_S_CurrencyUsage(), name);
	cVar0->checkCast("android::icu::util::Currency_S_CurrencyUsage");
	return cVar0;

}
// .method public static values()[Landroid/icu/util/Currency$CurrencyUsage;
std::shared_ptr<android::icu::util::Currency_S_CurrencyUsage> android::icu::util::Currency_S_CurrencyUsage::values()
{
	
	return android::icu::util::Currency_S_CurrencyUsage::_S_VALUES;

}


