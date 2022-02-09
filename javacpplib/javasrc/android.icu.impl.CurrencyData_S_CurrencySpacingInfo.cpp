// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CurrencyData$CurrencySpacingInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo_S_SpacingType.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.reflect.Array.h"

static android::icu::impl::CurrencyData_S_CurrencySpacingInfo::_assertionsDisabled;
static android::icu::impl::CurrencyData_S_CurrencySpacingInfo::DEFAULT;
static android::icu::impl::CurrencyData_S_CurrencySpacingInfo::DEFAULT_CTX_MATCH = std::make_shared<java::lang::String>("[:digit:]");
static android::icu::impl::CurrencyData_S_CurrencySpacingInfo::DEFAULT_CUR_MATCH = std::make_shared<java::lang::String>("[:letter:]");
static android::icu::impl::CurrencyData_S_CurrencySpacingInfo::DEFAULT_INSERT = std::make_shared<java::lang::String>(" ");
// .method static constructor <clinit>()V
void android::icu::impl::CurrencyData_S_CurrencySpacingInfo::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> cVar0;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar1;
	
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo::_assertionsDisabled = ( android::icu::impl::CurrencyData_S_CurrencySpacingInfo()->desiredAssertionStatus() ^ 0x1);
	cVar1 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x6);
	cVar1[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("[:letter:]"));
	cVar1[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("[:digit:]"));
	cVar1[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>(" "));
	cVar1[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("[:letter:]"));
	cVar1[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("[:digit:]"));
	cVar1[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>(" "));
	cVar0 = std::make_shared<android::icu::impl::CurrencyData_S_CurrencySpacingInfo>(cVar1);
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo::DEFAULT = cVar0;
	return;

}
// .method public constructor <init>()V
android::icu::impl::CurrencyData_S_CurrencySpacingInfo::CurrencyData_S_CurrencySpacingInfo()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> cVar1;
	
	// 114    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<std::vector<int[]>>(0x2);
	cVar0[0x0] = android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::COUNT->ordinal();
	cVar0[0x1] = android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::COUNT->ordinal();
	cVar1 = java::lang::reflect::Array::newInstance(java::lang::String(), cVar0);
	cVar1->checkCast("std::vector<std::vector<java::lang::String>>");
	this->symbols = cVar1;
	return;

}
// .method public varargs constructor <init>([Ljava/lang/String;)V
android::icu::impl::CurrencyData_S_CurrencySpacingInfo::CurrencyData_S_CurrencySpacingInfo(std::shared_ptr<std::vector<java::lang::String>> strings)
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::shared_ptr<std::vector<std::vector<java::lang::String>>> cVar1;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	int k;
	int i;
	int j;
	
	//    .param p1, "strings"    # [Ljava/lang/String;
	// 161    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<std::vector<int[]>>(0x2);
	cVar0[0x0] = android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::COUNT->ordinal();
	cVar0[0x1] = android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::COUNT->ordinal();
	cVar1 = java::lang::reflect::Array::newInstance(java::lang::String(), cVar0);
	cVar1->checkCast("std::vector<std::vector<java::lang::String>>");
	this->symbols = cVar1;
	if ( android::icu::impl::CurrencyData_S_CurrencySpacingInfo::_assertionsDisabled )     
		goto label_cond_30;
	if ( strings->size() == 0x6 )
		goto label_cond_30;
	cVar2 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar2;
	// 215    .line 70
label_cond_30:
	k = 0x0;
	//    .local v2, "k":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_32:
	if ( i >= android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::COUNT->ordinal() )
		goto label_cond_53;
	j = 0x0;
	//    .local v1, "j":I
label_goto_3b:
	if ( j >= android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern::COUNT->ordinal() )
		goto label_cond_50;
	this->symbols[i][j] = strings[k];
	k = ( k + 0x1);
	j = ( j + 0x1);
	goto label_goto_3b;
	// 263    .line 71
label_cond_50:
	i = ( i + 0x1);
	goto label_goto_32;
	// 269    .line 77
	// 270    .end local v1    # "j":I
label_cond_53:
	return;

}
// .method public getAfterSymbols()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CurrencyData_S_CurrencySpacingInfo::getAfterSymbols()
{
	
	return this->symbols[android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::AFTER->ordinal()];

}
// .method public getBeforeSymbols()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::CurrencyData_S_CurrencySpacingInfo::getBeforeSymbols()
{
	
	return this->symbols[android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::BEFORE->ordinal()];

}
// .method public setSymbolIfNull(Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingType;Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingPattern;Ljava/lang/String;)V
void android::icu::impl::CurrencyData_S_CurrencySpacingInfo::setSymbolIfNull(std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType> type,std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern> pattern,std::shared_ptr<java::lang::String> value)
{
	
	int i;
	int j;
	
	//    .param p1, "type"    # Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingType;
	//    .param p2, "pattern"    # Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingPattern;
	//    .param p3, "value"    # Ljava/lang/String;
	i = type->ordinal();
	//    .local v0, "i":I
	j = pattern->ordinal();
	//    .local v1, "j":I
	if ( this->symbols[i][j] )     
		goto label_cond_16;
	this->symbols[i][j] = value;
label_cond_16:
	return;

}


