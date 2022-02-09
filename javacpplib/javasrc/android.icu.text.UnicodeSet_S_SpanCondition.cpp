// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$SpanCondition.smali
#include "java2ctype.h"
#include "android.icu.text.UnicodeSet_S_SpanCondition.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::UnicodeSet_S_SpanCondition::_S_VALUES;
static android::icu::text::UnicodeSet_S_SpanCondition::CONDITION_COUNT;
static android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED;
static android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED;
static android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE;
// .method static constructor <clinit>()V
void android::icu::text::UnicodeSet_S_SpanCondition::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> cVar4;
	std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> cVar5;
	std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> cVar6;
	std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> cVar7;
	std::shared<std::vector<std::vector<android::icu::text::UnicodeSet_S_SpanCondition>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::text::UnicodeSet_S_SpanCondition>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NOT_CONTAINED")), cVar3);
	android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED = cVar4;
	cVar5 = std::make_shared<android::icu::text::UnicodeSet_S_SpanCondition>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CONTAINED")), cVar2);
	android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED = cVar5;
	cVar6 = std::make_shared<android::icu::text::UnicodeSet_S_SpanCondition>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SIMPLE")), cVar1);
	android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE = cVar6;
	cVar7 = std::make_shared<android::icu::text::UnicodeSet_S_SpanCondition>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CONDITION_COUNT")), cVar0);
	android::icu::text::UnicodeSet_S_SpanCondition::CONDITION_COUNT = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::text::UnicodeSet_S_SpanCondition>>>(0x4);
	cVar8[cVar3] = android::icu::text::UnicodeSet_S_SpanCondition::NOT_CONTAINED;
	cVar8[cVar2] = android::icu::text::UnicodeSet_S_SpanCondition::CONTAINED;
	cVar8[cVar1] = android::icu::text::UnicodeSet_S_SpanCondition::SIMPLE;
	cVar8[cVar0] = android::icu::text::UnicodeSet_S_SpanCondition::CONDITION_COUNT;
	android::icu::text::UnicodeSet_S_SpanCondition::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::UnicodeSet_S_SpanCondition::UnicodeSet_S_SpanCondition(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/UnicodeSet$SpanCondition;
std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> android::icu::text::UnicodeSet_S_SpanCondition::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::UnicodeSet_S_SpanCondition(), name);
	cVar0->checkCast("android::icu::text::UnicodeSet_S_SpanCondition");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/UnicodeSet$SpanCondition;
std::shared_ptr<android::icu::text::UnicodeSet_S_SpanCondition> android::icu::text::UnicodeSet_S_SpanCondition::values()
{
	
	return android::icu::text::UnicodeSet_S_SpanCondition::_S_VALUES;

}


