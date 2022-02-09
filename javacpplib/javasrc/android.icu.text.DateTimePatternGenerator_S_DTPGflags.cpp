// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateTimePatternGenerator$DTPGflags.smali
#include "java2ctype.h"
#include "android.icu.text.DateTimePatternGenerator_S_DTPGflags.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::DateTimePatternGenerator_S_DTPGflags::_S_VALUES;
static android::icu::text::DateTimePatternGenerator_S_DTPGflags::FIX_FRACTIONAL_SECONDS;
static android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_B;
static android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_CAP_J;
static android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_b;
// .method static constructor <clinit>()V
void android::icu::text::DateTimePatternGenerator_S_DTPGflags::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> cVar4;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> cVar5;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> cVar6;
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> cVar7;
	std::shared<std::vector<std::vector<android::icu::text::DateTimePatternGenerator_S_DTPGflags>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_DTPGflags>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FIX_FRACTIONAL_SECONDS")), cVar3);
	android::icu::text::DateTimePatternGenerator_S_DTPGflags::FIX_FRACTIONAL_SECONDS = cVar4;
	cVar5 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_DTPGflags>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SKELETON_USES_CAP_J")), cVar2);
	android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_CAP_J = cVar5;
	cVar6 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_DTPGflags>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SKELETON_USES_b")), cVar1);
	android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_b = cVar6;
	cVar7 = std::make_shared<android::icu::text::DateTimePatternGenerator_S_DTPGflags>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SKELETON_USES_B")), cVar0);
	android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_B = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::text::DateTimePatternGenerator_S_DTPGflags>>>(0x4);
	cVar8[cVar3] = android::icu::text::DateTimePatternGenerator_S_DTPGflags::FIX_FRACTIONAL_SECONDS;
	cVar8[cVar2] = android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_CAP_J;
	cVar8[cVar1] = android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_b;
	cVar8[cVar0] = android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_B;
	android::icu::text::DateTimePatternGenerator_S_DTPGflags::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::DateTimePatternGenerator_S_DTPGflags::DateTimePatternGenerator_S_DTPGflags(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static getFlag(Ljava/lang/String;)Landroid/icu/text/DateTimePatternGenerator$DTPGflags;
std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> android::icu::text::DateTimePatternGenerator_S_DTPGflags::getFlag(std::shared_ptr<java::lang::String> preferred)
{
	
	//    .param p0, "preferred"    # Ljava/lang/String;
	//    .local v0, "last":C
	// switch
	{
	auto item = ( preferred->charAt(( preferred->length() + -0x1)) );
	if (item == 0x42) goto label_sswitch_12;
	if (item == 0x62) goto label_sswitch_f;
	}
	return 0x0;
	// 148    .line 1876
label_sswitch_f:
	return android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_b;
	// 154    .line 1877
label_sswitch_12:
	return android::icu::text::DateTimePatternGenerator_S_DTPGflags::SKELETON_USES_B;
	// 160    .line 1875
	// 161    nop
	// 163    :sswitch_data_16
	// 164    .sparse-switch
	// 165        0x42 -> :sswitch_12
	// 166        0x62 -> :sswitch_f
	// 167    .end sparse-switch

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/DateTimePatternGenerator$DTPGflags;
std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> android::icu::text::DateTimePatternGenerator_S_DTPGflags::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::DateTimePatternGenerator_S_DTPGflags(), name);
	cVar0->checkCast("android::icu::text::DateTimePatternGenerator_S_DTPGflags");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/DateTimePatternGenerator$DTPGflags;
std::shared_ptr<android::icu::text::DateTimePatternGenerator_S_DTPGflags> android::icu::text::DateTimePatternGenerator_S_DTPGflags::values()
{
	
	return android::icu::text::DateTimePatternGenerator_S_DTPGflags::_S_VALUES;

}


