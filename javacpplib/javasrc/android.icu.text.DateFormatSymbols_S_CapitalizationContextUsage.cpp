// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormatSymbols$CapitalizationContextUsage.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormatSymbols_S_CapitalizationContextUsage.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::_S_VALUES;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_FORMAT;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_NARROW;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_STANDALONE;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_ABBREV;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_NARROW;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_WIDE;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::METAZONE_LONG;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::METAZONE_SHORT;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_FORMAT;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_NARROW;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_STANDALONE;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::OTHER;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ZONE_LONG;
static android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ZONE_SHORT;
// .method static constructor <clinit>()V
void android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar5;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar6;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar7;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar8;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar9;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar10;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar11;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar12;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar13;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar14;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar15;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar16;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar17;
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar18;
	std::shared<std::vector<std::vector<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>>> cVar19;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("OTHER")), cVar4);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::OTHER = cVar5;
	cVar6 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MONTH_FORMAT")), cVar3);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_FORMAT = cVar6;
	cVar7 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MONTH_STANDALONE")), cVar2);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_STANDALONE = cVar7;
	cVar8 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MONTH_NARROW")), cVar1);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_NARROW = cVar8;
	cVar9 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DAY_FORMAT")), cVar0);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_FORMAT = cVar9;
	cVar10 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DAY_STANDALONE")), 0x5);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_STANDALONE = cVar10;
	cVar11 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DAY_NARROW")), 0x6);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_NARROW = cVar11;
	cVar12 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ERA_WIDE")), 0x7);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_WIDE = cVar12;
	cVar13 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ERA_ABBREV")), 0x8);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_ABBREV = cVar13;
	cVar14 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ERA_NARROW")), 0x9);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_NARROW = cVar14;
	cVar15 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ZONE_LONG")), 0xa);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ZONE_LONG = cVar15;
	cVar16 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ZONE_SHORT")), 0xb);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ZONE_SHORT = cVar16;
	cVar17 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("METAZONE_LONG")), 0xc);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::METAZONE_LONG = cVar17;
	cVar18 = std::make_shared<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>(std::make_shared<java::lang::String>(std::make_shared<char[]>("METAZONE_SHORT")), 0xd);
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::METAZONE_SHORT = cVar18;
	cVar19 = std::make_shared<std::vector<std::vector<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage>>>(0xe);
	cVar19[cVar4] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::OTHER;
	cVar19[cVar3] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_FORMAT;
	cVar19[cVar2] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_STANDALONE;
	cVar19[cVar1] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::MONTH_NARROW;
	cVar19[cVar0] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_FORMAT;
	cVar19[0x5] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_STANDALONE;
	cVar19[0x6] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DAY_NARROW;
	cVar19[0x7] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_WIDE;
	cVar19[0x8] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_ABBREV;
	cVar19[0x9] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ERA_NARROW;
	cVar19[0xa] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ZONE_LONG;
	cVar19[0xb] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::ZONE_SHORT;
	cVar19[0xc] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::METAZONE_LONG;
	cVar19[0xd] = android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::METAZONE_SHORT;
	android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::_S_VALUES = cVar19;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::DateFormatSymbols_S_CapitalizationContextUsage(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/DateFormatSymbols$CapitalizationContextUsage;
std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage(), name);
	cVar0->checkCast("android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/DateFormatSymbols$CapitalizationContextUsage;
std::shared_ptr<android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage> android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::values()
{
	
	return android::icu::text::DateFormatSymbols_S_CapitalizationContextUsage::_S_VALUES;

}


