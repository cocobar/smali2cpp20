// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DisplayContext.smali
#include "java2ctype.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::DisplayContext::_S_VALUES;
static android::icu::text::DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE;
static android::icu::text::DisplayContext::CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE;
static android::icu::text::DisplayContext::CAPITALIZATION_FOR_STANDALONE;
static android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU;
static android::icu::text::DisplayContext::CAPITALIZATION_NONE;
static android::icu::text::DisplayContext::DIALECT_NAMES;
static android::icu::text::DisplayContext::LENGTH_FULL;
static android::icu::text::DisplayContext::LENGTH_SHORT;
static android::icu::text::DisplayContext::NO_SUBSTITUTE;
static android::icu::text::DisplayContext::STANDARD_NAMES;
static android::icu::text::DisplayContext::SUBSTITUTE;
// .method static constructor <clinit>()V
void android::icu::text::DisplayContext::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::DisplayContext> cVar5;
	std::shared_ptr<android::icu::text::DisplayContext> cVar6;
	std::shared_ptr<android::icu::text::DisplayContext> cVar7;
	std::shared_ptr<android::icu::text::DisplayContext> cVar8;
	std::shared_ptr<android::icu::text::DisplayContext> cVar9;
	std::shared_ptr<android::icu::text::DisplayContext> cVar10;
	std::shared_ptr<android::icu::text::DisplayContext> cVar11;
	std::shared_ptr<android::icu::text::DisplayContext> cVar12;
	std::shared_ptr<android::icu::text::DisplayContext> cVar13;
	std::shared_ptr<android::icu::text::DisplayContext> cVar14;
	std::shared_ptr<android::icu::text::DisplayContext> cVar15;
	std::shared<std::vector<std::vector<android::icu::text::DisplayContext>>> cVar16;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::DisplayContext>(std::make_shared<java::lang::String>(std::make_shared<char[]>("STANDARD_NAMES")), cVar4, android::icu::text::DisplayContext_S_Type::DIALECT_HANDLING, cVar4);
	android::icu::text::DisplayContext::STANDARD_NAMES = cVar5;
	cVar6 = std::make_shared<android::icu::text::DisplayContext>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DIALECT_NAMES")), cVar3, android::icu::text::DisplayContext_S_Type::DIALECT_HANDLING, cVar3);
	android::icu::text::DisplayContext::DIALECT_NAMES = cVar6;
	cVar7 = std::make_shared<android::icu::text::DisplayContext>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CAPITALIZATION_NONE")), cVar2, android::icu::text::DisplayContext_S_Type::CAPITALIZATION, cVar4);
	android::icu::text::DisplayContext::CAPITALIZATION_NONE = cVar7;
	cVar8 = std::make_shared<android::icu::text::DisplayContext>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE")), cVar1, android::icu::text::DisplayContext_S_Type::CAPITALIZATION, cVar3);
	android::icu::text::DisplayContext::CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE = cVar8;
	cVar9 = std::make_shared<android::icu::text::DisplayContext>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE")), cVar0, android::icu::text::DisplayContext_S_Type::CAPITALIZATION, cVar2);
	android::icu::text::DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE = cVar9;
	cVar10 = std::make_shared<android::icu::text::DisplayContext>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CAPITALIZATION_FOR_UI_LIST_OR_MENU")), 0x5, android::icu::text::DisplayContext_S_Type::CAPITALIZATION, cVar1);
	android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU = cVar10;
	cVar11 = std::make_shared<android::icu::text::DisplayContext>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CAPITALIZATION_FOR_STANDALONE")), 0x6, android::icu::text::DisplayContext_S_Type::CAPITALIZATION, cVar0);
	android::icu::text::DisplayContext::CAPITALIZATION_FOR_STANDALONE = cVar11;
	cVar12 = std::make_shared<android::icu::text::DisplayContext>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LENGTH_FULL")), 0x7, android::icu::text::DisplayContext_S_Type::DISPLAY_LENGTH, cVar4);
	android::icu::text::DisplayContext::LENGTH_FULL = cVar12;
	cVar13 = std::make_shared<android::icu::text::DisplayContext>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LENGTH_SHORT")), 0x8, android::icu::text::DisplayContext_S_Type::DISPLAY_LENGTH, cVar3);
	android::icu::text::DisplayContext::LENGTH_SHORT = cVar13;
	cVar14 = std::make_shared<android::icu::text::DisplayContext>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SUBSTITUTE")), 0x9, android::icu::text::DisplayContext_S_Type::SUBSTITUTE_HANDLING, cVar4);
	android::icu::text::DisplayContext::SUBSTITUTE = cVar14;
	cVar15 = std::make_shared<android::icu::text::DisplayContext>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NO_SUBSTITUTE")), 0xa, android::icu::text::DisplayContext_S_Type::SUBSTITUTE_HANDLING, cVar3);
	android::icu::text::DisplayContext::NO_SUBSTITUTE = cVar15;
	cVar16 = std::make_shared<std::vector<std::vector<android::icu::text::DisplayContext>>>(0xb);
	cVar16[cVar4] = android::icu::text::DisplayContext::STANDARD_NAMES;
	cVar16[cVar3] = android::icu::text::DisplayContext::DIALECT_NAMES;
	cVar16[cVar2] = android::icu::text::DisplayContext::CAPITALIZATION_NONE;
	cVar16[cVar1] = android::icu::text::DisplayContext::CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE;
	cVar16[cVar0] = android::icu::text::DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE;
	cVar16[0x5] = android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU;
	cVar16[0x6] = android::icu::text::DisplayContext::CAPITALIZATION_FOR_STANDALONE;
	cVar16[0x7] = android::icu::text::DisplayContext::LENGTH_FULL;
	cVar16[0x8] = android::icu::text::DisplayContext::LENGTH_SHORT;
	cVar16[0x9] = android::icu::text::DisplayContext::SUBSTITUTE;
	cVar16[0xa] = android::icu::text::DisplayContext::NO_SUBSTITUTE;
	android::icu::text::DisplayContext::_S_VALUES = cVar16;
	return;

}
// .method private constructor <init>(Ljava/lang/String;ILandroid/icu/text/DisplayContext$Type;I)V
android::icu::text::DisplayContext::DisplayContext(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<android::icu::text::DisplayContext_S_Type> type,int value)
{
	
	//    .param p3, "type"    # Landroid/icu/text/DisplayContext$Type;
	//    .param p4, "value"    # I
	java::lang::Enum::(var0, var1);
	this->type = type;
	this->value = value;
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/DisplayContext;
std::shared_ptr<android::icu::text::DisplayContext> android::icu::text::DisplayContext::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::DisplayContext> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::DisplayContext(), name);
	cVar0->checkCast("android::icu::text::DisplayContext");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/DisplayContext;
std::shared_ptr<android::icu::text::DisplayContext> android::icu::text::DisplayContext::values()
{
	
	return android::icu::text::DisplayContext::_S_VALUES;

}
// .method public type()Landroid/icu/text/DisplayContext$Type;
std::shared_ptr<android::icu::text::DisplayContext_S_Type> android::icu::text::DisplayContext::type()
{
	
	return this->type;

}
// .method public value()I
int android::icu::text::DisplayContext::value()
{
	
	return this->value;

}


