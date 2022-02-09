// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePatternUtil$MessageContentsNode$Type.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePatternUtil_S_MessageContentsNode_S_Type.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::_S_VALUES;
static android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::ARG;
static android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::REPLACE_NUMBER;
static android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::TEXT;
// .method static constructor <clinit>()V
void android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> cVar3;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> cVar4;
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> cVar5;
	std::shared<std::vector<std::vector<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("TEXT")), cVar2);
	android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::TEXT = cVar3;
	cVar4 = std::make_shared<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ARG")), cVar1);
	android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::ARG = cVar4;
	cVar5 = std::make_shared<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("REPLACE_NUMBER")), cVar0);
	android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::REPLACE_NUMBER = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type>>>(0x3);
	cVar6[cVar2] = android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::TEXT;
	cVar6[cVar1] = android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::ARG;
	cVar6[cVar0] = android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::REPLACE_NUMBER;
	android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::MessagePatternUtil_S_MessageContentsNode_S_Type(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/MessagePatternUtil$MessageContentsNode$Type;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type(), name);
	cVar0->checkCast("android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/MessagePatternUtil$MessageContentsNode$Type;
std::shared_ptr<android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type> android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::values()
{
	
	return android::icu::text::MessagePatternUtil_S_MessageContentsNode_S_Type::_S_VALUES;

}


