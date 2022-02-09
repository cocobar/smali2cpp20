// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePattern$Part$Type.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern_S_Part_S_Type.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::MessagePattern_S_Part_S_Type::_S_VALUES;
static android::icu::text::MessagePattern_S_Part_S_Type::ARG_DOUBLE;
static android::icu::text::MessagePattern_S_Part_S_Type::ARG_INT;
static android::icu::text::MessagePattern_S_Part_S_Type::ARG_LIMIT;
static android::icu::text::MessagePattern_S_Part_S_Type::ARG_NAME;
static android::icu::text::MessagePattern_S_Part_S_Type::ARG_NUMBER;
static android::icu::text::MessagePattern_S_Part_S_Type::ARG_SELECTOR;
static android::icu::text::MessagePattern_S_Part_S_Type::ARG_START;
static android::icu::text::MessagePattern_S_Part_S_Type::ARG_STYLE;
static android::icu::text::MessagePattern_S_Part_S_Type::ARG_TYPE;
static android::icu::text::MessagePattern_S_Part_S_Type::INSERT_CHAR;
static android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT;
static android::icu::text::MessagePattern_S_Part_S_Type::MSG_START;
static android::icu::text::MessagePattern_S_Part_S_Type::REPLACE_NUMBER;
static android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX;
// .method static constructor <clinit>()V
void android::icu::text::MessagePattern_S_Part_S_Type::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar5;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar6;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar7;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar8;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar9;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar10;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar11;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar12;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar13;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar14;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar15;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar16;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar17;
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar18;
	std::shared<std::vector<std::vector<android::icu::text::MessagePattern_S_Part_S_Type>>> cVar19;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MSG_START")), cVar4);
	android::icu::text::MessagePattern_S_Part_S_Type::MSG_START = cVar5;
	cVar6 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MSG_LIMIT")), cVar3);
	android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT = cVar6;
	cVar7 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SKIP_SYNTAX")), cVar2);
	android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX = cVar7;
	cVar8 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("INSERT_CHAR")), cVar1);
	android::icu::text::MessagePattern_S_Part_S_Type::INSERT_CHAR = cVar8;
	cVar9 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("REPLACE_NUMBER")), cVar0);
	android::icu::text::MessagePattern_S_Part_S_Type::REPLACE_NUMBER = cVar9;
	cVar10 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ARG_START")), 0x5);
	android::icu::text::MessagePattern_S_Part_S_Type::ARG_START = cVar10;
	cVar11 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ARG_LIMIT")), 0x6);
	android::icu::text::MessagePattern_S_Part_S_Type::ARG_LIMIT = cVar11;
	cVar12 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ARG_NUMBER")), 0x7);
	android::icu::text::MessagePattern_S_Part_S_Type::ARG_NUMBER = cVar12;
	cVar13 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ARG_NAME")), 0x8);
	android::icu::text::MessagePattern_S_Part_S_Type::ARG_NAME = cVar13;
	cVar14 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ARG_TYPE")), 0x9);
	android::icu::text::MessagePattern_S_Part_S_Type::ARG_TYPE = cVar14;
	cVar15 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ARG_STYLE")), 0xa);
	android::icu::text::MessagePattern_S_Part_S_Type::ARG_STYLE = cVar15;
	cVar16 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ARG_SELECTOR")), 0xb);
	android::icu::text::MessagePattern_S_Part_S_Type::ARG_SELECTOR = cVar16;
	cVar17 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ARG_INT")), 0xc);
	android::icu::text::MessagePattern_S_Part_S_Type::ARG_INT = cVar17;
	cVar18 = std::make_shared<android::icu::text::MessagePattern_S_Part_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ARG_DOUBLE")), 0xd);
	android::icu::text::MessagePattern_S_Part_S_Type::ARG_DOUBLE = cVar18;
	cVar19 = std::make_shared<std::vector<std::vector<android::icu::text::MessagePattern_S_Part_S_Type>>>(0xe);
	cVar19[cVar4] = android::icu::text::MessagePattern_S_Part_S_Type::MSG_START;
	cVar19[cVar3] = android::icu::text::MessagePattern_S_Part_S_Type::MSG_LIMIT;
	cVar19[cVar2] = android::icu::text::MessagePattern_S_Part_S_Type::SKIP_SYNTAX;
	cVar19[cVar1] = android::icu::text::MessagePattern_S_Part_S_Type::INSERT_CHAR;
	cVar19[cVar0] = android::icu::text::MessagePattern_S_Part_S_Type::REPLACE_NUMBER;
	cVar19[0x5] = android::icu::text::MessagePattern_S_Part_S_Type::ARG_START;
	cVar19[0x6] = android::icu::text::MessagePattern_S_Part_S_Type::ARG_LIMIT;
	cVar19[0x7] = android::icu::text::MessagePattern_S_Part_S_Type::ARG_NUMBER;
	cVar19[0x8] = android::icu::text::MessagePattern_S_Part_S_Type::ARG_NAME;
	cVar19[0x9] = android::icu::text::MessagePattern_S_Part_S_Type::ARG_TYPE;
	cVar19[0xa] = android::icu::text::MessagePattern_S_Part_S_Type::ARG_STYLE;
	cVar19[0xb] = android::icu::text::MessagePattern_S_Part_S_Type::ARG_SELECTOR;
	cVar19[0xc] = android::icu::text::MessagePattern_S_Part_S_Type::ARG_INT;
	cVar19[0xd] = android::icu::text::MessagePattern_S_Part_S_Type::ARG_DOUBLE;
	android::icu::text::MessagePattern_S_Part_S_Type::_S_VALUES = cVar19;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::MessagePattern_S_Part_S_Type::MessagePattern_S_Part_S_Type(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/MessagePattern$Part$Type;
std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> android::icu::text::MessagePattern_S_Part_S_Type::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::MessagePattern_S_Part_S_Type(), name);
	cVar0->checkCast("android::icu::text::MessagePattern_S_Part_S_Type");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/MessagePattern$Part$Type;
std::shared_ptr<android::icu::text::MessagePattern_S_Part_S_Type> android::icu::text::MessagePattern_S_Part_S_Type::values()
{
	
	return android::icu::text::MessagePattern_S_Part_S_Type::_S_VALUES;

}
// .method public hasNumericValue()Z
bool android::icu::text::MessagePattern_S_Part_S_Type::hasNumericValue()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	if ( this == android::icu::text::MessagePattern_S_Part_S_Type::ARG_INT )
		goto label_cond_9;
	if ( this != android::icu::text::MessagePattern_S_Part_S_Type::ARG_DOUBLE )
		goto label_cond_a;
label_cond_9:
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}


