// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\AlphabeticIndex$Bucket$LabelType.smali
#include "java2ctype.h"
#include "android.icu.text.AlphabeticIndex_S_Bucket_S_LabelType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::_S_VALUES;
static android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::INFLOW;
static android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::NORMAL;
static android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::OVERFLOW;
static android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::UNDERFLOW;
// .method static constructor <clinit>()V
void android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> cVar4;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> cVar5;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> cVar6;
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> cVar7;
	std::shared<std::vector<std::vector<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType>>> cVar8;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = std::make_shared<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("NORMAL")), cVar3);
	android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::NORMAL = cVar4;
	cVar5 = std::make_shared<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("UNDERFLOW")), cVar2);
	android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::UNDERFLOW = cVar5;
	cVar6 = std::make_shared<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("INFLOW")), cVar1);
	android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::INFLOW = cVar6;
	cVar7 = std::make_shared<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("OVERFLOW")), cVar0);
	android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::OVERFLOW = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType>>>(0x4);
	cVar8[cVar3] = android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::NORMAL;
	cVar8[cVar2] = android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::UNDERFLOW;
	cVar8[cVar1] = android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::INFLOW;
	cVar8[cVar0] = android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::OVERFLOW;
	android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::_S_VALUES = cVar8;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::AlphabeticIndex_S_Bucket_S_LabelType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;
std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType(), name);
	cVar0->checkCast("android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/AlphabeticIndex$Bucket$LabelType;
std::shared_ptr<android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType> android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::values()
{
	
	return android::icu::text::AlphabeticIndex_S_Bucket_S_LabelType::_S_VALUES;

}


