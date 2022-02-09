// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DateFormat$BooleanAttribute.smali
#include "java2ctype.h"
#include "android.icu.text.DateFormat_S_BooleanAttribute.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::DateFormat_S_BooleanAttribute::_S_VALUES;
static android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_NUMERIC;
static android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_WHITESPACE;
static android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH;
static android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_LITERAL_MATCH;
static android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_MATCH;
// .method static constructor <clinit>()V
void android::icu::text::DateFormat_S_BooleanAttribute::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> cVar5;
	std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> cVar6;
	std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> cVar7;
	std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> cVar8;
	std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> cVar9;
	std::shared<std::vector<std::vector<android::icu::text::DateFormat_S_BooleanAttribute>>> cVar10;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::DateFormat_S_BooleanAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PARSE_ALLOW_WHITESPACE")), cVar4);
	android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_WHITESPACE = cVar5;
	cVar6 = std::make_shared<android::icu::text::DateFormat_S_BooleanAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PARSE_ALLOW_NUMERIC")), cVar3);
	android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_NUMERIC = cVar6;
	cVar7 = std::make_shared<android::icu::text::DateFormat_S_BooleanAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PARSE_MULTIPLE_PATTERNS_FOR_MATCH")), cVar2);
	android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH = cVar7;
	cVar8 = std::make_shared<android::icu::text::DateFormat_S_BooleanAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PARSE_PARTIAL_LITERAL_MATCH")), cVar1);
	android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_LITERAL_MATCH = cVar8;
	cVar9 = std::make_shared<android::icu::text::DateFormat_S_BooleanAttribute>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PARSE_PARTIAL_MATCH")), cVar0);
	android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_MATCH = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<android::icu::text::DateFormat_S_BooleanAttribute>>>(0x5);
	cVar10[cVar4] = android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_WHITESPACE;
	cVar10[cVar3] = android::icu::text::DateFormat_S_BooleanAttribute::PARSE_ALLOW_NUMERIC;
	cVar10[cVar2] = android::icu::text::DateFormat_S_BooleanAttribute::PARSE_MULTIPLE_PATTERNS_FOR_MATCH;
	cVar10[cVar1] = android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_LITERAL_MATCH;
	cVar10[cVar0] = android::icu::text::DateFormat_S_BooleanAttribute::PARSE_PARTIAL_MATCH;
	android::icu::text::DateFormat_S_BooleanAttribute::_S_VALUES = cVar10;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::DateFormat_S_BooleanAttribute::DateFormat_S_BooleanAttribute(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/DateFormat$BooleanAttribute;
std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> android::icu::text::DateFormat_S_BooleanAttribute::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::DateFormat_S_BooleanAttribute(), name);
	cVar0->checkCast("android::icu::text::DateFormat_S_BooleanAttribute");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/DateFormat$BooleanAttribute;
std::shared_ptr<android::icu::text::DateFormat_S_BooleanAttribute> android::icu::text::DateFormat_S_BooleanAttribute::values()
{
	
	return android::icu::text::DateFormat_S_BooleanAttribute::_S_VALUES;

}


