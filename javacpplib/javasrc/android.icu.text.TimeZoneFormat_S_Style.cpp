// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\TimeZoneFormat$Style.smali
#include "java2ctype.h"
#include "android.icu.text.TimeZoneFormat_S_Style.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::TimeZoneFormat_S_Style::_S_VALUES;
static android::icu::text::TimeZoneFormat_S_Style::EXEMPLAR_LOCATION;
static android::icu::text::TimeZoneFormat_S_Style::GENERIC_LOCATION;
static android::icu::text::TimeZoneFormat_S_Style::GENERIC_LONG;
static android::icu::text::TimeZoneFormat_S_Style::GENERIC_SHORT;
static android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_FIXED;
static android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_FULL;
static android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_LOCAL_FIXED;
static android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_LOCAL_FULL;
static android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_LOCAL_SHORT;
static android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_SHORT;
static android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_FIXED;
static android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_FULL;
static android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_LOCAL_FIXED;
static android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_LOCAL_FULL;
static android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT;
static android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT_SHORT;
static android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_LONG;
static android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_SHORT;
static android::icu::text::TimeZoneFormat_S_Style::ZONE_ID;
static android::icu::text::TimeZoneFormat_S_Style::ZONE_ID_SHORT;
// .method static constructor <clinit>()V
void android::icu::text::TimeZoneFormat_S_Style::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar5;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar6;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar7;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar8;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar9;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar10;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar11;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar12;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar13;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar14;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar15;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar16;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar17;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar18;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar19;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar20;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar21;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar22;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar23;
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar24;
	std::shared<std::vector<std::vector<android::icu::text::TimeZoneFormat_S_Style>>> cVar25;
	
	cVar0 = 0x4;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x100;
	cVar4 = 0x80;
	cVar5 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GENERIC_LOCATION")), 0x0, cVar2);
	android::icu::text::TimeZoneFormat_S_Style::GENERIC_LOCATION = cVar5;
	cVar6 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GENERIC_LONG")), cVar2, cVar1);
	android::icu::text::TimeZoneFormat_S_Style::GENERIC_LONG = cVar6;
	cVar7 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("GENERIC_SHORT")), cVar1, cVar0);
	android::icu::text::TimeZoneFormat_S_Style::GENERIC_SHORT = cVar7;
	cVar8 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SPECIFIC_LONG")), 0x3, 0x8);
	android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_LONG = cVar8;
	cVar9 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SPECIFIC_SHORT")), cVar0, 0x10);
	android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_SHORT = cVar9;
	cVar10 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LOCALIZED_GMT")), 0x5, 0x20);
	android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT = cVar10;
	cVar11 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LOCALIZED_GMT_SHORT")), 0x6, 0x40);
	android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT_SHORT = cVar11;
	cVar12 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO_BASIC_SHORT")), 0x7, cVar4);
	android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_SHORT = cVar12;
	cVar13 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO_BASIC_LOCAL_SHORT")), 0x8, cVar3);
	android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_LOCAL_SHORT = cVar13;
	cVar14 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO_BASIC_FIXED")), 0x9, cVar4);
	android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_FIXED = cVar14;
	cVar15 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO_BASIC_LOCAL_FIXED")), 0xa, cVar3);
	android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_LOCAL_FIXED = cVar15;
	cVar16 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO_BASIC_FULL")), 0xb, cVar4);
	android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_FULL = cVar16;
	cVar17 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO_BASIC_LOCAL_FULL")), 0xc, cVar3);
	android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_LOCAL_FULL = cVar17;
	cVar18 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO_EXTENDED_FIXED")), 0xd, cVar4);
	android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_FIXED = cVar18;
	cVar19 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO_EXTENDED_LOCAL_FIXED")), 0xe, cVar3);
	android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_LOCAL_FIXED = cVar19;
	cVar20 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO_EXTENDED_FULL")), 0xf, cVar4);
	android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_FULL = cVar20;
	cVar21 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ISO_EXTENDED_LOCAL_FULL")), 0x10, cVar3);
	android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_LOCAL_FULL = cVar21;
	cVar22 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ZONE_ID")), 0x11, 0x200);
	android::icu::text::TimeZoneFormat_S_Style::ZONE_ID = cVar22;
	cVar23 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ZONE_ID_SHORT")), 0x12, 0x400);
	android::icu::text::TimeZoneFormat_S_Style::ZONE_ID_SHORT = cVar23;
	cVar24 = std::make_shared<android::icu::text::TimeZoneFormat_S_Style>(std::make_shared<java::lang::String>(std::make_shared<char[]>("EXEMPLAR_LOCATION")), 0x13, 0x800);
	android::icu::text::TimeZoneFormat_S_Style::EXEMPLAR_LOCATION = cVar24;
	cVar25 = std::make_shared<std::vector<std::vector<android::icu::text::TimeZoneFormat_S_Style>>>(0x14);
	cVar25[0x0] = android::icu::text::TimeZoneFormat_S_Style::GENERIC_LOCATION;
	cVar25[cVar2] = android::icu::text::TimeZoneFormat_S_Style::GENERIC_LONG;
	cVar25[cVar1] = android::icu::text::TimeZoneFormat_S_Style::GENERIC_SHORT;
	cVar25[0x3] = android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_LONG;
	cVar25[cVar0] = android::icu::text::TimeZoneFormat_S_Style::SPECIFIC_SHORT;
	cVar25[0x5] = android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT;
	cVar25[0x6] = android::icu::text::TimeZoneFormat_S_Style::LOCALIZED_GMT_SHORT;
	cVar25[0x7] = android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_SHORT;
	cVar25[0x8] = android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_LOCAL_SHORT;
	cVar25[0x9] = android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_FIXED;
	cVar25[0xa] = android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_LOCAL_FIXED;
	cVar25[0xb] = android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_FULL;
	cVar25[0xc] = android::icu::text::TimeZoneFormat_S_Style::ISO_BASIC_LOCAL_FULL;
	cVar25[0xd] = android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_FIXED;
	cVar25[0xe] = android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_LOCAL_FIXED;
	cVar25[0xf] = android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_FULL;
	cVar25[0x10] = android::icu::text::TimeZoneFormat_S_Style::ISO_EXTENDED_LOCAL_FULL;
	cVar25[0x11] = android::icu::text::TimeZoneFormat_S_Style::ZONE_ID;
	cVar25[0x12] = android::icu::text::TimeZoneFormat_S_Style::ZONE_ID_SHORT;
	cVar25[0x13] = android::icu::text::TimeZoneFormat_S_Style::EXEMPLAR_LOCATION;
	android::icu::text::TimeZoneFormat_S_Style::_S_VALUES = cVar25;
	return;

}
// .method private constructor <init>(Ljava/lang/String;II)V
android::icu::text::TimeZoneFormat_S_Style::TimeZoneFormat_S_Style(std::shared_ptr<java::lang::String> var0,int var1,int flag)
{
	
	//    .param p3, "flag"    # I
	java::lang::Enum::(var0, var1);
	this->flag = flag;
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/TimeZoneFormat$Style;
std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> android::icu::text::TimeZoneFormat_S_Style::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::TimeZoneFormat_S_Style(), name);
	cVar0->checkCast("android::icu::text::TimeZoneFormat_S_Style");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/TimeZoneFormat$Style;
std::shared_ptr<android::icu::text::TimeZoneFormat_S_Style> android::icu::text::TimeZoneFormat_S_Style::values()
{
	
	return android::icu::text::TimeZoneFormat_S_Style::_S_VALUES;

}


