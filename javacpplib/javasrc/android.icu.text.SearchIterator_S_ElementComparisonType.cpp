// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SearchIterator$ElementComparisonType.smali
#include "java2ctype.h"
#include "android.icu.text.SearchIterator_S_ElementComparisonType.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::text::SearchIterator_S_ElementComparisonType::_S_VALUES;
static android::icu::text::SearchIterator_S_ElementComparisonType::ANY_BASE_WEIGHT_IS_WILDCARD;
static android::icu::text::SearchIterator_S_ElementComparisonType::PATTERN_BASE_WEIGHT_IS_WILDCARD;
static android::icu::text::SearchIterator_S_ElementComparisonType::STANDARD_ELEMENT_COMPARISON;
// .method static constructor <clinit>()V
void android::icu::text::SearchIterator_S_ElementComparisonType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> cVar3;
	std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> cVar4;
	std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> cVar5;
	std::shared<std::vector<std::vector<android::icu::text::SearchIterator_S_ElementComparisonType>>> cVar6;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar3 = std::make_shared<android::icu::text::SearchIterator_S_ElementComparisonType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("STANDARD_ELEMENT_COMPARISON")), cVar2);
	android::icu::text::SearchIterator_S_ElementComparisonType::STANDARD_ELEMENT_COMPARISON = cVar3;
	cVar4 = std::make_shared<android::icu::text::SearchIterator_S_ElementComparisonType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PATTERN_BASE_WEIGHT_IS_WILDCARD")), cVar1);
	android::icu::text::SearchIterator_S_ElementComparisonType::PATTERN_BASE_WEIGHT_IS_WILDCARD = cVar4;
	cVar5 = std::make_shared<android::icu::text::SearchIterator_S_ElementComparisonType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ANY_BASE_WEIGHT_IS_WILDCARD")), cVar0);
	android::icu::text::SearchIterator_S_ElementComparisonType::ANY_BASE_WEIGHT_IS_WILDCARD = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<android::icu::text::SearchIterator_S_ElementComparisonType>>>(0x3);
	cVar6[cVar2] = android::icu::text::SearchIterator_S_ElementComparisonType::STANDARD_ELEMENT_COMPARISON;
	cVar6[cVar1] = android::icu::text::SearchIterator_S_ElementComparisonType::PATTERN_BASE_WEIGHT_IS_WILDCARD;
	cVar6[cVar0] = android::icu::text::SearchIterator_S_ElementComparisonType::ANY_BASE_WEIGHT_IS_WILDCARD;
	android::icu::text::SearchIterator_S_ElementComparisonType::_S_VALUES = cVar6;
	return;

}
// .method private constructor <init>(Ljava/lang/String;I)V
android::icu::text::SearchIterator_S_ElementComparisonType::SearchIterator_S_ElementComparisonType(std::shared_ptr<java::lang::String> var0,int var1)
{
	
	java::lang::Enum::(var0, var1);
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/text/SearchIterator$ElementComparisonType;
std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> android::icu::text::SearchIterator_S_ElementComparisonType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::text::SearchIterator_S_ElementComparisonType(), name);
	cVar0->checkCast("android::icu::text::SearchIterator_S_ElementComparisonType");
	return cVar0;

}
// .method public static values()[Landroid/icu/text/SearchIterator$ElementComparisonType;
std::shared_ptr<android::icu::text::SearchIterator_S_ElementComparisonType> android::icu::text::SearchIterator_S_ElementComparisonType::values()
{
	
	return android::icu::text::SearchIterator_S_ElementComparisonType::_S_VALUES;

}


