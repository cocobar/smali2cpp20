// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneGenericNames$Pattern.smali
#include "java2ctype.h"
#include "android.icu.impl.TimeZoneGenericNames_S_Pattern.h"
#include "java.lang.Enum.h"
#include "java.lang.String.h"

static android::icu::impl::TimeZoneGenericNames_S_Pattern::_S_VALUES;
static android::icu::impl::TimeZoneGenericNames_S_Pattern::FALLBACK_FORMAT;
static android::icu::impl::TimeZoneGenericNames_S_Pattern::REGION_FORMAT;
// .method static constructor <clinit>()V
void android::icu::impl::TimeZoneGenericNames_S_Pattern::static_cinit()
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> cVar2;
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> cVar3;
	std::shared<std::vector<std::vector<android::icu::impl::TimeZoneGenericNames_S_Pattern>>> cVar4;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::impl::TimeZoneGenericNames_S_Pattern>(std::make_shared<java::lang::String>(std::make_shared<char[]>("REGION_FORMAT")), cVar1, std::make_shared<java::lang::String>(std::make_shared<char[]>("regionFormat")), std::make_shared<java::lang::String>(std::make_shared<char[]>("({0})")));
	android::icu::impl::TimeZoneGenericNames_S_Pattern::REGION_FORMAT = cVar2;
	cVar3 = std::make_shared<android::icu::impl::TimeZoneGenericNames_S_Pattern>(std::make_shared<java::lang::String>(std::make_shared<char[]>("FALLBACK_FORMAT")), cVar0, std::make_shared<java::lang::String>(std::make_shared<char[]>("fallbackFormat")), std::make_shared<java::lang::String>(std::make_shared<char[]>("{1} ({0})")));
	android::icu::impl::TimeZoneGenericNames_S_Pattern::FALLBACK_FORMAT = cVar3;
	cVar4 = std::make_shared<std::vector<std::vector<android::icu::impl::TimeZoneGenericNames_S_Pattern>>>(0x2);
	cVar4[cVar1] = android::icu::impl::TimeZoneGenericNames_S_Pattern::REGION_FORMAT;
	cVar4[cVar0] = android::icu::impl::TimeZoneGenericNames_S_Pattern::FALLBACK_FORMAT;
	android::icu::impl::TimeZoneGenericNames_S_Pattern::_S_VALUES = cVar4;
	return;

}
// .method private constructor <init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V
android::icu::impl::TimeZoneGenericNames_S_Pattern::TimeZoneGenericNames_S_Pattern(std::shared_ptr<java::lang::String> var0,int var1,std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> defaultVal)
{
	
	//    .param p3, "key"    # Ljava/lang/String;
	//    .param p4, "defaultVal"    # Ljava/lang/String;
	java::lang::Enum::(var0, var1);
	this->_key = key;
	this->_defaultVal = defaultVal;
	return;

}
// .method public static valueOf(Ljava/lang/String;)Landroid/icu/impl/TimeZoneGenericNames$Pattern;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> android::icu::impl::TimeZoneGenericNames_S_Pattern::valueOf(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = java::lang::Enum::valueOf(android::icu::impl::TimeZoneGenericNames_S_Pattern(), name);
	cVar0->checkCast("android::icu::impl::TimeZoneGenericNames_S_Pattern");
	return cVar0;

}
// .method public static values()[Landroid/icu/impl/TimeZoneGenericNames$Pattern;
std::shared_ptr<android::icu::impl::TimeZoneGenericNames_S_Pattern> android::icu::impl::TimeZoneGenericNames_S_Pattern::values()
{
	
	return android::icu::impl::TimeZoneGenericNames_S_Pattern::_S_VALUES;

}
// .method defaultValue()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneGenericNames_S_Pattern::defaultValue()
{
	
	return this->_defaultVal;

}
// .method key()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneGenericNames_S_Pattern::key()
{
	
	return this->_key;

}


