// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePattern$ApostropheMode.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern_S_ApostropheMode.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::MessagePattern_S_ApostropheMode::_S_VALUES;
static android::icu::text::MessagePattern_S_ApostropheMode::DOUBLE_OPTIONAL;
static android::icu::text::MessagePattern_S_ApostropheMode::DOUBLE_REQUIRED;
// .method static constructor <clinit>()V
void android::icu::text::MessagePattern_S_ApostropheMode::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> cVar2;
	std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> cVar3;
	std::shared<std::vector<std::vector<android::icu::text::MessagePattern_S_ApostropheMode>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::text::MessagePattern_S_ApostropheMode>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DOUBLE_OPTIONAL")), cVar1);
	android::icu::text::MessagePattern_S_ApostropheMode::DOUBLE_OPTIONAL = cVar2;
	cVar3 = std::make_shared<android::icu::text::MessagePattern_S_ApostropheMode>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DOUBLE_REQUIRED")), cVar0);
	android::icu::text::MessagePattern_S_ApostropheMode::DOUBLE_REQUIRED = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::text::MessagePattern_S_ApostropheMode>>>(0x2);
	cVar4[cVar1] = android::icu::text::MessagePattern_S_ApostropheMode::DOUBLE_OPTIONAL;
	cVar4[cVar0] = android::icu::text::MessagePattern_S_ApostropheMode::DOUBLE_REQUIRED;
	android::icu::text::MessagePattern_S_ApostropheMode::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::MessagePattern_S_ApostropheMode::MessagePattern_S_ApostropheMode(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/MessagePattern$ApostropheMode;
std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> android::icu::text::MessagePattern_S_ApostropheMode::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::MessagePattern_S_ApostropheMode(), name);
	cVar0->checkCast("android::icu::text::MessagePattern_S_ApostropheMode");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/MessagePattern$ApostropheMode;
std::shared_ptr<android::icu::text::MessagePattern_S_ApostropheMode> android::icu::text::MessagePattern_S_ApostropheMode::values()
{
	
	return android::icu::text::MessagePattern_S_ApostropheMode::_S_VALUES;

}


