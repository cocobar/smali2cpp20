// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\BidiTransform$Mirroring.smali
#include "java2ctype.h"
#include "android.icu.text.BidiTransform_S_Mirroring.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::BidiTransform_S_Mirroring::_S_VALUES;
static android::icu::text::BidiTransform_S_Mirroring::OFF;
static android::icu::text::BidiTransform_S_Mirroring::ON;
// .method static constructor <clinit>()V
void android::icu::text::BidiTransform_S_Mirroring::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::BidiTransform_S_Mirroring> cVar2;
	std::shared_ptr<android::icu::text::BidiTransform_S_Mirroring> cVar3;
	std::shared<std::vector<std::vector<android::icu::text::BidiTransform_S_Mirroring>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::text::BidiTransform_S_Mirroring>(std::make_shared<java::lang::String>(std::make_shared<char[]>("OFF")), cVar1);
	android::icu::text::BidiTransform_S_Mirroring::OFF = cVar2;
	cVar3 = std::make_shared<android::icu::text::BidiTransform_S_Mirroring>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ON")), cVar0);
	android::icu::text::BidiTransform_S_Mirroring::ON = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::text::BidiTransform_S_Mirroring>>>(0x2);
	cVar4[cVar1] = android::icu::text::BidiTransform_S_Mirroring::OFF;
	cVar4[cVar0] = android::icu::text::BidiTransform_S_Mirroring::ON;
	android::icu::text::BidiTransform_S_Mirroring::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::BidiTransform_S_Mirroring::BidiTransform_S_Mirroring(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/BidiTransform$Mirroring;
std::shared_ptr<android::icu::text::BidiTransform_S_Mirroring> android::icu::text::BidiTransform_S_Mirroring::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::BidiTransform_S_Mirroring> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::BidiTransform_S_Mirroring(), name);
	cVar0->checkCast("android::icu::text::BidiTransform_S_Mirroring");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/BidiTransform$Mirroring;
std::shared_ptr<android::icu::text::BidiTransform_S_Mirroring> android::icu::text::BidiTransform_S_Mirroring::values()
{
	
	return android::icu::text::BidiTransform_S_Mirroring::_S_VALUES;

}


