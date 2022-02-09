// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\locale\KeyTypeData$KeyData.smali
#include "java2ctype.h"
#include "android.icu.impl.locale.KeyTypeData_S_KeyData.h"
#include "android.icu.impl.locale.KeyTypeData_S_SpecialType.h"
#include "android.icu.impl.locale.KeyTypeData_S_Type.h"
#include "java.lang.String.h"
#include "java.util.EnumSet.h"
#include "java.util.Map.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/util/EnumSet;)V
android::icu::impl::locale::KeyTypeData_S_KeyData::KeyTypeData_S_KeyData(std::shared_ptr<java::lang::String> legacyId,std::shared_ptr<java::lang::String> bcpId,std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::locale::KeyTypeData_S_Type>> typeMap,std::shared_ptr<java::util::EnumSet<android::icu::impl::locale::KeyTypeData_S_SpecialType>> specialTypes)
{
	
	//    .param p1, "legacyId"    # Ljava/lang/String;
	//    .param p2, "bcpId"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 052        value = {
	// 053            "(",
	// 054            "Ljava/lang/String;",
	// 055            "Ljava/lang/String;",
	// 056            "Ljava/util/Map",
	// 057            "<",
	// 058            "Ljava/lang/String;",
	// 059            "Landroid/icu/impl/locale/KeyTypeData$Type;",
	// 060            ">;",
	// 061            "Ljava/util/EnumSet",
	// 062            "<",
	// 063            "Landroid/icu/impl/locale/KeyTypeData$SpecialType;",
	// 064            ">;)V"
	// 065        }
	// 066    .end annotation
	//    .local p3, "typeMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/locale/KeyTypeData$Type;>;"
	//    .local p4, "specialTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/impl/locale/KeyTypeData$SpecialType;>;"
	// 072    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->legacyId = legacyId;
	this->bcpId = bcpId;
	this->typeMap = typeMap;
	this->specialTypes = specialTypes;
	return;

}


