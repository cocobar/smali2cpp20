// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RelativeDateTimeFormatter$Direction.smali
#include "java2ctype.h"
#include "android.icu.text.RelativeDateTimeFormatter_S_Direction.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::RelativeDateTimeFormatter_S_Direction::_S_VALUES;
static android::icu::text::RelativeDateTimeFormatter_S_Direction::LAST;
static android::icu::text::RelativeDateTimeFormatter_S_Direction::LAST_2;
static android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT;
static android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT_2;
static android::icu::text::RelativeDateTimeFormatter_S_Direction::PLAIN;
static android::icu::text::RelativeDateTimeFormatter_S_Direction::THIS;
// .method static constructor <clinit>()V
void android::icu::text::RelativeDateTimeFormatter_S_Direction::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> cVar5;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> cVar6;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> cVar7;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> cVar8;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> cVar9;
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> cVar10;
	std::shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_Direction>>> cVar11;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_Direction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST_2")), cVar4);
	android::icu::text::RelativeDateTimeFormatter_S_Direction::LAST_2 = cVar5;
	cVar6 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_Direction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LAST")), cVar3);
	android::icu::text::RelativeDateTimeFormatter_S_Direction::LAST = cVar6;
	cVar7 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_Direction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("THIS")), cVar2);
	android::icu::text::RelativeDateTimeFormatter_S_Direction::THIS = cVar7;
	cVar8 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_Direction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NEXT")), cVar1);
	android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT = cVar8;
	cVar9 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_Direction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NEXT_2")), cVar0);
	android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT_2 = cVar9;
	cVar10 = std::make_shared<android::icu::text::RelativeDateTimeFormatter_S_Direction>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PLAIN")), 0x5);
	android::icu::text::RelativeDateTimeFormatter_S_Direction::PLAIN = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<android::icu::text::RelativeDateTimeFormatter_S_Direction>>>(0x6);
	cVar11[cVar4] = android::icu::text::RelativeDateTimeFormatter_S_Direction::LAST_2;
	cVar11[cVar3] = android::icu::text::RelativeDateTimeFormatter_S_Direction::LAST;
	cVar11[cVar2] = android::icu::text::RelativeDateTimeFormatter_S_Direction::THIS;
	cVar11[cVar1] = android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT;
	cVar11[cVar0] = android::icu::text::RelativeDateTimeFormatter_S_Direction::NEXT_2;
	cVar11[0x5] = android::icu::text::RelativeDateTimeFormatter_S_Direction::PLAIN;
	android::icu::text::RelativeDateTimeFormatter_S_Direction::_S_VALUES = cVar11;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::RelativeDateTimeFormatter_S_Direction::RelativeDateTimeFormatter_S_Direction(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Direction;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> android::icu::text::RelativeDateTimeFormatter_S_Direction::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::RelativeDateTimeFormatter_S_Direction(), name);
	cVar0->checkCast("android::icu::text::RelativeDateTimeFormatter_S_Direction");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/RelativeDateTimeFormatter$Direction;
std::shared_ptr<android::icu::text::RelativeDateTimeFormatter_S_Direction> android::icu::text::RelativeDateTimeFormatter_S_Direction::values()
{
	
	return android::icu::text::RelativeDateTimeFormatter_S_Direction::_S_VALUES;

}


