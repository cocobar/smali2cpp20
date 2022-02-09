// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$DefaultInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencyFormatInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo.h"
#include "android.icu.impl.CurrencyData_S_DefaultInfo.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.util.Collections.h"
#include "java.util.Map.h"

static android::icu::impl::CurrencyData_S_DefaultInfo::FALLBACK_INSTANCE;
static android::icu::impl::CurrencyData_S_DefaultInfo::NO_FALLBACK_INSTANCE;
// .method static constructor <clinit>()V
void android::icu::impl::CurrencyData_S_DefaultInfo::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::CurrencyData_S_DefaultInfo> cVar0;
	std::shared_ptr<android::icu::impl::CurrencyData_S_DefaultInfo> cVar1;
	
	cVar0 = std::make_shared<android::icu::impl::CurrencyData_S_DefaultInfo>(0x1);
	android::icu::impl::CurrencyData_S_DefaultInfo::FALLBACK_INSTANCE = cVar0;
	cVar1 = std::make_shared<android::icu::impl::CurrencyData_S_DefaultInfo>(0x0);
	android::icu::impl::CurrencyData_S_DefaultInfo::NO_FALLBACK_INSTANCE = cVar1;
	return;

}
// .method private constructor <init>(Z)V
android::icu::impl::CurrencyData_S_DefaultInfo::CurrencyData_S_DefaultInfo(bool fallback)
{
	
	//    .param p1, "fallback"    # Z
	// 060    invoke-direct {p0}, Landroid/icu/impl/CurrencyData$CurrencyDisplayInfo;-><init>()V
	this->fallback = fallback;
	return;

}
// .method public static final getWithFallback(Z)Landroid/icu/impl/CurrencyData$CurrencyDisplayInfo;
std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfo> android::icu::impl::CurrencyData_S_DefaultInfo::getWithFallback(bool fallback)
{
	
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfo> cVar0;
	
	//    .param p0, "fallback"    # Z
	if ( !(fallback) )  
		goto label_cond_5;
	cVar0 = android::icu::impl::CurrencyData_S_DefaultInfo::FALLBACK_INSTANCE;
label_goto_4:
	return cVar0;
label_cond_5:
	cVar0 = android::icu::impl::CurrencyData_S_DefaultInfo::NO_FALLBACK_INSTANCE;
	goto label_goto_4;

}
// .method public getFormatInfo(Ljava/lang/String;)Landroid/icu/impl/CurrencyData$CurrencyFormatInfo;
std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyFormatInfo> android::icu::impl::CurrencyData_S_DefaultInfo::getFormatInfo(std::shared_ptr<java::lang::String> isoCode)
{
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	return 0x0;

}
// .method public getName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CurrencyData_S_DefaultInfo::getName(std::shared_ptr<java::lang::String> isoCode)
{
	
	std::shared_ptr<java::lang::String> isoCode;
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	if ( !(this->fallback) )  
		goto label_cond_5;
	//    .end local p1    # "isoCode":Ljava/lang/String;
label_goto_4:
	return isoCode;
	// 115    .restart local p1    # "isoCode":Ljava/lang/String;
label_cond_5:
	isoCode = 0x0;
	goto label_goto_4;

}
// .method public getPluralName(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CurrencyData_S_DefaultInfo::getPluralName(std::shared_ptr<java::lang::String> isoCode,std::shared_ptr<java::lang::String> pluralType)
{
	
	std::shared_ptr<java::lang::String> isoCode;
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	//    .param p2, "pluralType"    # Ljava/lang/String;
	if ( !(this->fallback) )  
		goto label_cond_5;
	//    .end local p1    # "isoCode":Ljava/lang/String;
label_goto_4:
	return isoCode;
	// 137    .restart local p1    # "isoCode":Ljava/lang/String;
label_cond_5:
	isoCode = 0x0;
	goto label_goto_4;

}
// .method public getSpacingInfo()Landroid/icu/impl/CurrencyData$CurrencySpacingInfo;
std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> android::icu::impl::CurrencyData_S_DefaultInfo::getSpacingInfo()
{
	
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> cVar0;
	
	if ( !(this->fallback) )  
		goto label_cond_7;
	cVar0 = android::icu::impl::CurrencyData_S_CurrencySpacingInfo::DEFAULT;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = 0x0;
	goto label_goto_6;

}
// .method public getSymbol(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CurrencyData_S_DefaultInfo::getSymbol(std::shared_ptr<java::lang::String> isoCode)
{
	
	std::shared_ptr<java::lang::String> isoCode;
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	if ( !(this->fallback) )  
		goto label_cond_5;
	//    .end local p1    # "isoCode":Ljava/lang/String;
label_goto_4:
	return isoCode;
	// 178    .restart local p1    # "isoCode":Ljava/lang/String;
label_cond_5:
	isoCode = 0x0;
	goto label_goto_4;

}
// .method public getULocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::CurrencyData_S_DefaultInfo::getULocale()
{
	
	return android::icu::util::ULocale::ROOT;

}
// .method public getUnitPatterns()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::impl::CurrencyData_S_DefaultInfo::getUnitPatterns()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 198        value = {
	// 199            "()",
	// 200            "Ljava/util/Map",
	// 201            "<",
	// 202            "Ljava/lang/String;",
	// 203            "Ljava/lang/String;",
	// 204            ">;"
	// 205        }
	// 206    .end annotation
	if ( !(this->fallback) )  
		goto label_cond_9;
	return java::util::Collections::emptyMap({const[class].FS-Param});
	// 221    .line 171
label_cond_9:
	return 0x0;

}
// .method public nameMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::impl::CurrencyData_S_DefaultInfo::nameMap()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 231        value = {
	// 232            "()",
	// 233            "Ljava/util/Map",
	// 234            "<",
	// 235            "Ljava/lang/String;",
	// 236            "Ljava/lang/String;",
	// 237            ">;"
	// 238        }
	// 239    .end annotation
	return java::util::Collections::emptyMap({const[class].FS-Param});

}
// .method public symbolMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::impl::CurrencyData_S_DefaultInfo::symbolMap()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 253        value = {
	// 254            "()",
	// 255            "Ljava/util/Map",
	// 256            "<",
	// 257            "Ljava/lang/String;",
	// 258            "Ljava/lang/String;",
	// 259            ">;"
	// 260        }
	// 261    .end annotation
	return java::util::Collections::emptyMap({const[class].FS-Param});

}


