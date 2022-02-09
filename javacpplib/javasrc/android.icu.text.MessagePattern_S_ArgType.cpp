// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\MessagePattern$ArgType.smali
#include "java2ctype.h"
#include "android.icu.text.MessagePattern_S_ArgType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::MessagePattern_S_ArgType::_S_VALUES;
static android::icu::text::MessagePattern_S_ArgType::CHOICE;
static android::icu::text::MessagePattern_S_ArgType::NONE;
static android::icu::text::MessagePattern_S_ArgType::PLURAL;
static android::icu::text::MessagePattern_S_ArgType::SELECT;
static android::icu::text::MessagePattern_S_ArgType::SELECTORDINAL;
static android::icu::text::MessagePattern_S_ArgType::SIMPLE;
// .method static constructor <clinit>()V
void android::icu::text::MessagePattern_S_ArgType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> cVar5;
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> cVar6;
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> cVar7;
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> cVar8;
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> cVar9;
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> cVar10;
	std::shared<std::vector<std::vector<android::icu::text::MessagePattern_S_ArgType>>> cVar11;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	cVar5 = std::make_shared<android::icu::text::MessagePattern_S_ArgType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NONE")), cVar4);
	android::icu::text::MessagePattern_S_ArgType::NONE = cVar5;
	cVar6 = std::make_shared<android::icu::text::MessagePattern_S_ArgType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SIMPLE")), cVar3);
	android::icu::text::MessagePattern_S_ArgType::SIMPLE = cVar6;
	cVar7 = std::make_shared<android::icu::text::MessagePattern_S_ArgType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CHOICE")), cVar2);
	android::icu::text::MessagePattern_S_ArgType::CHOICE = cVar7;
	cVar8 = std::make_shared<android::icu::text::MessagePattern_S_ArgType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PLURAL")), cVar1);
	android::icu::text::MessagePattern_S_ArgType::PLURAL = cVar8;
	cVar9 = std::make_shared<android::icu::text::MessagePattern_S_ArgType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SELECT")), cVar0);
	android::icu::text::MessagePattern_S_ArgType::SELECT = cVar9;
	cVar10 = std::make_shared<android::icu::text::MessagePattern_S_ArgType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SELECTORDINAL")), 0x5);
	android::icu::text::MessagePattern_S_ArgType::SELECTORDINAL = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<android::icu::text::MessagePattern_S_ArgType>>>(0x6);
	cVar11[cVar4] = android::icu::text::MessagePattern_S_ArgType::NONE;
	cVar11[cVar3] = android::icu::text::MessagePattern_S_ArgType::SIMPLE;
	cVar11[cVar2] = android::icu::text::MessagePattern_S_ArgType::CHOICE;
	cVar11[cVar1] = android::icu::text::MessagePattern_S_ArgType::PLURAL;
	cVar11[cVar0] = android::icu::text::MessagePattern_S_ArgType::SELECT;
	cVar11[0x5] = android::icu::text::MessagePattern_S_ArgType::SELECTORDINAL;
	android::icu::text::MessagePattern_S_ArgType::_S_VALUES = cVar11;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::MessagePattern_S_ArgType::MessagePattern_S_ArgType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/MessagePattern$ArgType;
std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> android::icu::text::MessagePattern_S_ArgType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::MessagePattern_S_ArgType(), name);
	cVar0->checkCast("android::icu::text::MessagePattern_S_ArgType");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/MessagePattern$ArgType;
std::shared_ptr<android::icu::text::MessagePattern_S_ArgType> android::icu::text::MessagePattern_S_ArgType::values()
{
	
	return android::icu::text::MessagePattern_S_ArgType::_S_VALUES;

}
// .method public hasPluralStyle()Z
bool android::icu::text::MessagePattern_S_ArgType::hasPluralStyle()
{
	
	bool cVar0;
	
	cVar0 = 0x1;
	if ( this == android::icu::text::MessagePattern_S_ArgType::PLURAL )
		goto label_cond_9;
	if ( this != android::icu::text::MessagePattern_S_ArgType::SELECTORDINAL )
		goto label_cond_a;
label_cond_9:
label_goto_9:
	return cVar0;
label_cond_a:
	cVar0 = 0x0;
	goto label_goto_9;

}


