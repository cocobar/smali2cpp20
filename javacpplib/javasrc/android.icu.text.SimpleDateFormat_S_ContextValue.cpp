// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SimpleDateFormat$ContextValue.smali
#include "java2ctype.h"
#include "android.icu.text.SimpleDateFormat_S_ContextValue.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::SimpleDateFormat_S_ContextValue::_S_VALUES;
static android::icu::text::SimpleDateFormat_S_ContextValue::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE;
static android::icu::text::SimpleDateFormat_S_ContextValue::CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE;
static android::icu::text::SimpleDateFormat_S_ContextValue::CAPITALIZATION_FOR_STANDALONE;
static android::icu::text::SimpleDateFormat_S_ContextValue::CAPITALIZATION_FOR_UI_LIST_OR_MENU;
static android::icu::text::SimpleDateFormat_S_ContextValue::UNKNOWN;
// .method static constructor <clinit>()V
void android::icu::text::SimpleDateFormat_S_ContextValue::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> cVar5;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> cVar6;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> cVar7;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> cVar8;
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> cVar9;
	std::shared<std::vector<std::vector<android::icu::text::SimpleDateFormat_S_ContextValue>>> cVar10;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::SimpleDateFormat_S_ContextValue>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNKNOWN")), cVar4);
	android::icu::text::SimpleDateFormat_S_ContextValue::UNKNOWN = cVar5;
	cVar6 = std::make_shared<android::icu::text::SimpleDateFormat_S_ContextValue>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE")), cVar3);
	android::icu::text::SimpleDateFormat_S_ContextValue::CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE = cVar6;
	cVar7 = std::make_shared<android::icu::text::SimpleDateFormat_S_ContextValue>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE")), cVar2);
	android::icu::text::SimpleDateFormat_S_ContextValue::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE = cVar7;
	cVar8 = std::make_shared<android::icu::text::SimpleDateFormat_S_ContextValue>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CAPITALIZATION_FOR_UI_LIST_OR_MENU")), cVar1);
	android::icu::text::SimpleDateFormat_S_ContextValue::CAPITALIZATION_FOR_UI_LIST_OR_MENU = cVar8;
	cVar9 = std::make_shared<android::icu::text::SimpleDateFormat_S_ContextValue>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CAPITALIZATION_FOR_STANDALONE")), cVar0);
	android::icu::text::SimpleDateFormat_S_ContextValue::CAPITALIZATION_FOR_STANDALONE = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<android::icu::text::SimpleDateFormat_S_ContextValue>>>(0x5);
	cVar10[cVar4] = android::icu::text::SimpleDateFormat_S_ContextValue::UNKNOWN;
	cVar10[cVar3] = android::icu::text::SimpleDateFormat_S_ContextValue::CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE;
	cVar10[cVar2] = android::icu::text::SimpleDateFormat_S_ContextValue::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE;
	cVar10[cVar1] = android::icu::text::SimpleDateFormat_S_ContextValue::CAPITALIZATION_FOR_UI_LIST_OR_MENU;
	cVar10[cVar0] = android::icu::text::SimpleDateFormat_S_ContextValue::CAPITALIZATION_FOR_STANDALONE;
	android::icu::text::SimpleDateFormat_S_ContextValue::_S_VALUES = cVar10;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::SimpleDateFormat_S_ContextValue::SimpleDateFormat_S_ContextValue(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/SimpleDateFormat$ContextValue;
std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> android::icu::text::SimpleDateFormat_S_ContextValue::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::SimpleDateFormat_S_ContextValue(), name);
	cVar0->checkCast("android::icu::text::SimpleDateFormat_S_ContextValue");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/SimpleDateFormat$ContextValue;
std::shared_ptr<android::icu::text::SimpleDateFormat_S_ContextValue> android::icu::text::SimpleDateFormat_S_ContextValue::values()
{
	
	return android::icu::text::SimpleDateFormat_S_ContextValue::_S_VALUES;

}


