// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$GenericNameType.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneGenericNames_S_GenericNameType.h"
#include "java.lang.Enum.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"

static android::icu::impl::TimeZoneGenericNames_S_GenericNameType::_S_VALUES;
static android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LOCATION;
static android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LONG;
static android::icu::impl::TimeZoneGenericNames_S_GenericNameType::SHORT;
// .method static constructor <clinit>()V
void android::icu::impl::TimeZoneGenericNames_S_GenericNameType::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> cVar3;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar4;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> cVar5;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> cVar6;
	std::shared<std::vector<std::vector<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>>> cVar7;
	
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar4[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("LONG"));
	cVar4[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SHORT"));
	cVar3 = std::make_shared<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LOCATION")), cVar2, cVar4);
	android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LOCATION = cVar3;
	cVar5 = std::make_shared<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("LONG")), cVar1, std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2));
	android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LONG = cVar5;
	cVar6 = std::make_shared<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHORT")), cVar0, std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2));
	android::icu::impl::TimeZoneGenericNames_S_GenericNameType::SHORT = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<android::icu::impl::TimeZoneGenericNames_S_GenericNameType>>>(0x3);
	cVar7[cVar2] = android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LOCATION;
	cVar7[cVar1] = android::icu::impl::TimeZoneGenericNames_S_GenericNameType::LONG;
	cVar7[cVar0] = android::icu::impl::TimeZoneGenericNames_S_GenericNameType::SHORT;
	android::icu::impl::TimeZoneGenericNames_S_GenericNameType::_S_VALUES = cVar7;
	return;

}
// .method private varargs constructor <init>(Ljava/lang/String;I[Ljava/lang/String;)V
android::icu::impl::TimeZoneGenericNames_S_GenericNameType::TimeZoneGenericNames_S_GenericNameType(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<std::vector<java::lang::String>> fallbackTypeOf)
{
	
	//    .param p3, "fallbackTypeOf"    # [Ljava/lang/String;
	java::lang::Enum::(var0, var1);
	this->_fallbackTypeOf = fallbackTypeOf;
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> android::icu::impl::TimeZoneGenericNames_S_GenericNameType::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::TimeZoneGenericNames_S_GenericNameType(), name);
	cVar0->checkCast("android::icu::impl::TimeZoneGenericNames_S_GenericNameType");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> android::icu::impl::TimeZoneGenericNames_S_GenericNameType::values()
{
	
	return android::icu::impl::TimeZoneGenericNames_S_GenericNameType::_S_VALUES;

}
// .method public isFallbackTypeOf(Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;)Z
bool android::icu::impl::TimeZoneGenericNames_S_GenericNameType::isFallbackTypeOf(std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_GenericNameType> type)
{
	
	bool cVar0;
	std::shared_ptr<std::vector<java::lang::String>> cVar1;
	int cVar2;
	
	//    .param p1, "type"    # Landroid/icu/impl/TimeZoneGenericNames$GenericNameType;
	cVar0 = 0x0;
	//    .local v1, "typeStr":Ljava/lang/String;
	cVar1 = this->_fallbackTypeOf;
	cVar2 = cVar0;
label_goto_9:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_18;
	//    .local v0, "t":Ljava/lang/String;
	if ( !(cVar1[cVar2]->equals(type->toString())) )  
		goto label_cond_15;
	return 0x1;
	// 196    .line 71
label_cond_15:
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_9;
	// 202    .line 76
	// 203    .end local v0    # "t":Ljava/lang/String;
label_cond_18:
	return cVar0;

}


