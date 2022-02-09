// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Normalizer2$Mode.smali
#include "java2ctype.h"
#include "android.icu.text.Normalizer2_S_Mode.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::Normalizer2_S_Mode::_S_VALUES;
static android::icu::text::Normalizer2_S_Mode::COMPOSE;
static android::icu::text::Normalizer2_S_Mode::COMPOSE_CONTIGUOUS;
static android::icu::text::Normalizer2_S_Mode::DECOMPOSE;
static android::icu::text::Normalizer2_S_Mode::FCD;
// .method static constructor <clinit>()V
void android::icu::text::Normalizer2_S_Mode::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::text::Normalizer2_S_Mode> cVar4;
	std::shared_ptr<android::icu::text::Normalizer2_S_Mode> cVar5;
	std::shared_ptr<android::icu::text::Normalizer2_S_Mode> cVar6;
	std::shared_ptr<android::icu::text::Normalizer2_S_Mode> cVar7;
	std::shared<std::vector<std::vector<android::icu::text::Normalizer2_S_Mode>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::text::Normalizer2_S_Mode>(std::make_shared<java::lang::String>(std::make_shared<char[]>("COMPOSE")), cVar3);
	android::icu::text::Normalizer2_S_Mode::COMPOSE = cVar4;
	cVar5 = std::make_shared<android::icu::text::Normalizer2_S_Mode>(std::make_shared<java::lang::String>(std::make_shared<char[]>("DECOMPOSE")), cVar2);
	android::icu::text::Normalizer2_S_Mode::DECOMPOSE = cVar5;
	cVar6 = std::make_shared<android::icu::text::Normalizer2_S_Mode>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FCD")), cVar1);
	android::icu::text::Normalizer2_S_Mode::FCD = cVar6;
	cVar7 = std::make_shared<android::icu::text::Normalizer2_S_Mode>(std::make_shared<java::lang::String>(std::make_shared<char[]>("COMPOSE_CONTIGUOUS")), cVar0);
	android::icu::text::Normalizer2_S_Mode::COMPOSE_CONTIGUOUS = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::text::Normalizer2_S_Mode>>>(0x4);
	cVar8[cVar3] = android::icu::text::Normalizer2_S_Mode::COMPOSE;
	cVar8[cVar2] = android::icu::text::Normalizer2_S_Mode::DECOMPOSE;
	cVar8[cVar1] = android::icu::text::Normalizer2_S_Mode::FCD;
	cVar8[cVar0] = android::icu::text::Normalizer2_S_Mode::COMPOSE_CONTIGUOUS;
	android::icu::text::Normalizer2_S_Mode::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::Normalizer2_S_Mode::Normalizer2_S_Mode(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/Normalizer2$Mode;
std::shared_ptr<android::icu::text::Normalizer2_S_Mode> android::icu::text::Normalizer2_S_Mode::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::Normalizer2_S_Mode> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::Normalizer2_S_Mode(), name);
	cVar0->checkCast("android::icu::text::Normalizer2_S_Mode");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/Normalizer2$Mode;
std::shared_ptr<android::icu::text::Normalizer2_S_Mode> android::icu::text::Normalizer2_S_Mode::values()
{
	
	return android::icu::text::Normalizer2_S_Mode::_S_VALUES;

}


