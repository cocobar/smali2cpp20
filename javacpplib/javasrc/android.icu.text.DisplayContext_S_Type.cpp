// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DisplayContext$Type.smali
#include "java2ctype.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::DisplayContext_S_Type::_S_VALUES;
static android::icu::text::DisplayContext_S_Type::CAPITALIZATION;
static android::icu::text::DisplayContext_S_Type::DIALECT_HANDLING;
static android::icu::text::DisplayContext_S_Type::DISPLAY_LENGTH;
static android::icu::text::DisplayContext_S_Type::SUBSTITUTE_HANDLING;
// .method static constructor <clinit>()V
void android::icu::text::DisplayContext_S_Type::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::text::DisplayContext_S_Type> cVar4;
	std::shared_ptr<android::icu::text::DisplayContext_S_Type> cVar5;
	std::shared_ptr<android::icu::text::DisplayContext_S_Type> cVar6;
	std::shared_ptr<android::icu::text::DisplayContext_S_Type> cVar7;
	std::shared<std::vector<std::vector<android::icu::text::DisplayContext_S_Type>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::text::DisplayContext_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DIALECT_HANDLING")), cVar3);
	android::icu::text::DisplayContext_S_Type::DIALECT_HANDLING = cVar4;
	cVar5 = std::make_shared<android::icu::text::DisplayContext_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CAPITALIZATION")), cVar2);
	android::icu::text::DisplayContext_S_Type::CAPITALIZATION = cVar5;
	cVar6 = std::make_shared<android::icu::text::DisplayContext_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DISPLAY_LENGTH")), cVar1);
	android::icu::text::DisplayContext_S_Type::DISPLAY_LENGTH = cVar6;
	cVar7 = std::make_shared<android::icu::text::DisplayContext_S_Type>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SUBSTITUTE_HANDLING")), cVar0);
	android::icu::text::DisplayContext_S_Type::SUBSTITUTE_HANDLING = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::text::DisplayContext_S_Type>>>(0x4);
	cVar8[cVar3] = android::icu::text::DisplayContext_S_Type::DIALECT_HANDLING;
	cVar8[cVar2] = android::icu::text::DisplayContext_S_Type::CAPITALIZATION;
	cVar8[cVar1] = android::icu::text::DisplayContext_S_Type::DISPLAY_LENGTH;
	cVar8[cVar0] = android::icu::text::DisplayContext_S_Type::SUBSTITUTE_HANDLING;
	android::icu::text::DisplayContext_S_Type::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::DisplayContext_S_Type::DisplayContext_S_Type(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/DisplayContext$Type;
std::shared_ptr<android::icu::text::DisplayContext_S_Type> android::icu::text::DisplayContext_S_Type::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::DisplayContext_S_Type> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::DisplayContext_S_Type(), name);
	cVar0->checkCast("android::icu::text::DisplayContext_S_Type");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/DisplayContext$Type;
std::shared_ptr<android::icu::text::DisplayContext_S_Type> android::icu::text::DisplayContext_S_Type::values()
{
	
	return android::icu::text::DisplayContext_S_Type::_S_VALUES;

}


