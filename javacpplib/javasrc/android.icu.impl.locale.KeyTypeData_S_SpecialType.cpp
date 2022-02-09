// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$SpecialType.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_CodepointsTypeHandler.h"
#include "android.icu.impl.locale.KeyTypeData_S_PrivateUseKeyValueTypeHandler.h"
#include "android.icu.impl.locale.KeyTypeData_S_ReorderCodeTypeHandler.h"
#include "android.icu.impl.locale.KeyTypeData_S_RgKeyValueTypeHandler.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialType.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialTypeHandler.h"
#include "android.icu.impl.locale.KeyTypeData_S_SubdivisionKeyValueTypeHandler.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::locale::KeyTypeData_S_SpecialType::_S_VALUES;
static android::icu::impl::locale::KeyTypeData_S_SpecialType::CODEPOINTS;
static android::icu::impl::locale::KeyTypeData_S_SpecialType::PRIVATE_USE;
static android::icu::impl::locale::KeyTypeData_S_SpecialType::REORDER_CODE;
static android::icu::impl::locale::KeyTypeData_S_SpecialType::RG_KEY_VALUE;
static android::icu::impl::locale::KeyTypeData_S_SpecialType::SUBDIVISION_CODE;
// .method static constructor <clinit>()V
void android::icu::impl::locale::KeyTypeData_S_SpecialType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_CodepointsTypeHandler> cVar4;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> cVar5;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_CodepointsTypeHandler> cVar6;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> cVar7;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_ReorderCodeTypeHandler> cVar8;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> cVar9;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_RgKeyValueTypeHandler> cVar10;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> cVar11;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SubdivisionKeyValueTypeHandler> cVar12;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> cVar13;
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_PrivateUseKeyValueTypeHandler> cVar14;
	std::shared<std::vector<std::vector<android::icu::impl::locale::KeyTypeData_S_SpecialType>>> cVar15;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = 0x0;
	cVar6 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_CodepointsTypeHandler>(cVar4);
	cVar5 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_SpecialType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("CODEPOINTS")), cVar3, cVar6);
	android::icu::impl::locale::KeyTypeData_S_SpecialType::CODEPOINTS = cVar5;
	cVar8 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_ReorderCodeTypeHandler>(cVar4);
	cVar7 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_SpecialType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("REORDER_CODE")), cVar2, cVar8);
	android::icu::impl::locale::KeyTypeData_S_SpecialType::REORDER_CODE = cVar7;
	cVar10 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_RgKeyValueTypeHandler>(cVar4);
	cVar9 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_SpecialType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("RG_KEY_VALUE")), cVar1, cVar10);
	android::icu::impl::locale::KeyTypeData_S_SpecialType::RG_KEY_VALUE = cVar9;
	cVar12 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_SubdivisionKeyValueTypeHandler>(cVar4);
	cVar11 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_SpecialType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SUBDIVISION_CODE")), cVar0, cVar12);
	android::icu::impl::locale::KeyTypeData_S_SpecialType::SUBDIVISION_CODE = cVar11;
	cVar14 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_PrivateUseKeyValueTypeHandler>(cVar4);
	cVar13 = std::make_shared<android::icu::impl::locale::KeyTypeData_S_SpecialType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PRIVATE_USE")), 0x4, cVar14);
	android::icu::impl::locale::KeyTypeData_S_SpecialType::PRIVATE_USE = cVar13;
	cVar15 = std::make_shared<std::vector<std::vector<android::icu::impl::locale::KeyTypeData_S_SpecialType>>>(0x5);
	cVar15[cVar3] = android::icu::impl::locale::KeyTypeData_S_SpecialType::CODEPOINTS;
	cVar15[cVar2] = android::icu::impl::locale::KeyTypeData_S_SpecialType::REORDER_CODE;
	cVar15[cVar1] = android::icu::impl::locale::KeyTypeData_S_SpecialType::RG_KEY_VALUE;
	cVar15[cVar0] = android::icu::impl::locale::KeyTypeData_S_SpecialType::SUBDIVISION_CODE;
	cVar15[0x4] = android::icu::impl::locale::KeyTypeData_S_SpecialType::PRIVATE_USE;
	android::icu::impl::locale::KeyTypeData_S_SpecialType::_S_VALUES = cVar15;
	return;

}
// .method private constructor <init>(Ljava/lang/String;ILandroid/icu/impl/locale/KeyTypeData$SpecialTypeHandler;)V
android::icu::impl::locale::KeyTypeData_S_SpecialType::KeyTypeData_S_SpecialType(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialTypeHandler> handler)
{
	
	//    .param p3, "handler"    # Landroid/icu/impl/locale/KeyTypeData$SpecialTypeHandler;
	java::lang::Enum::(var0, var1);
	this->handler = handler;
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/locale/KeyTypeData$SpecialType;
std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> android::icu::impl::locale::KeyTypeData_S_SpecialType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::locale::KeyTypeData_S_SpecialType(), name);
	cVar0->checkCast("android::icu::impl::locale::KeyTypeData_S_SpecialType");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/locale/KeyTypeData$SpecialType;
std::shared_ptr<android::icu::impl::locale::KeyTypeData_S_SpecialType> android::icu::impl::locale::KeyTypeData_S_SpecialType::values()
{
	
	return android::icu::impl::locale::KeyTypeData_S_SpecialType::_S_VALUES;

}


