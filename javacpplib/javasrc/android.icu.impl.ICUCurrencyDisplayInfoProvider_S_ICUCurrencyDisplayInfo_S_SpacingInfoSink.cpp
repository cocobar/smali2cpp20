// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyDisplayInfoProvider$ICUCurrencyDisplayInfo$SpacingInfoSink.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo_S_SpacingPattern.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo_S_SpacingType.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo.h"
#include "android.icu.impl.ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink.h"
#include "android.icu.impl.ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.String.h"

// .method private constructor <init>(Landroid/icu/impl/ICUCurrencyDisplayInfoProvider$ICUCurrencyDisplayInfo;)V
android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink(std::shared_ptr<android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo> this_S_1)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> cVar1;
	
	//    .param p1, "this$1"    # Landroid/icu/impl/ICUCurrencyDisplayInfoProvider$ICUCurrencyDisplayInfo;
	cVar0 = 0x0;
	this->this_S_1 = this_S_1;
	// 038    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	cVar1 = std::make_shared<android::icu::impl::CurrencyData_S_CurrencySpacingInfo>();
	this->spacingInfo = cVar1;
	this->hasBeforeCurrency = cVar0;
	this->hasAfterCurrency = cVar0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/ICUCurrencyDisplayInfoProvider$ICUCurrencyDisplayInfo;Landroid/icu/impl/ICUCurrencyDisplayInfoProvider$ICUCurrencyDisplayInfo$SpacingInfoSink;)V
android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink(std::shared_ptr<android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo> this_S_1,std::shared_ptr<android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink> _this1)
{
	
	//    .param p1, "this$1"    # Landroid/icu/impl/ICUCurrencyDisplayInfoProvider$ICUCurrencyDisplayInfo;
	//    .param p2, "-this1"    # Landroid/icu/impl/ICUCurrencyDisplayInfoProvider$ICUCurrencyDisplayInfo$SpacingInfoSink;
	android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink::(this_S_1);
	return;

}
// .method getSpacingInfo(Z)Landroid/icu/impl/CurrencyData$CurrencySpacingInfo;
std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink::getSpacingInfo(bool fallback)
{
	
	//    .param p1, "fallback"    # Z
	if ( !(this->hasBeforeCurrency) )  
		goto label_cond_b;
	if ( !(this->hasAfterCurrency) )  
		goto label_cond_b;
	return this->spacingInfo;
	// 089    .line 254
label_cond_b:
	if ( !(fallback) )  
		goto label_cond_10;
	return android::icu::impl::CurrencyData_S_CurrencySpacingInfo::DEFAULT;
	// 098    .line 257
label_cond_10:
	return 0x0;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	bool cVar0;
	int i;
	int j;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	cVar0 = 0x1;
	//    .local v4, "spacingTypesTable":Landroid/icu/impl/UResource$Table;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( !(value->getTable()->getKeyAndValue(i, key, value)) )  
		goto label_cond_64;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("beforeCurrency")))) )  
		goto label_cond_3b;
	//    .local v5, "type":Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingType;
	this->hasBeforeCurrency = cVar0;
label_goto_19:
	//    .local v3, "patternsTable":Landroid/icu/impl/UResource$Table;
	j = 0x0;
	//    .local v1, "j":I
label_goto_1e:
	if ( !(value->getTable()->getKeyAndValue(j, key, value)) )  
		goto label_cond_61;
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("currencyMatch")))) )  
		goto label_cond_49;
	//    .local v2, "pattern":Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingPattern;
label_goto_2f:
	this->spacingInfo->setSymbolIfNull(android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::BEFORE, pattern, value->getString());
	//    .end local v2    # "pattern":Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingPattern;
label_cond_38:
	j = ( j + 0x1);
	goto label_goto_1e;
	// 195    .line 226
	// 196    .end local v1    # "j":I
	// 197    .end local v3    # "patternsTable":Landroid/icu/impl/UResource$Table;
	// 198    .end local v5    # "type":Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingType;
label_cond_3b:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("afterCurrency")))) )  
		goto label_cond_61;
	android::icu::impl::CurrencyData_S_CurrencySpacingInfo_S_SpacingType::AFTER;
	//    .restart local v5    # "type":Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingType;
	this->hasAfterCurrency = cVar0;
	goto label_goto_19;
	// 217    .line 238
	// 218    .restart local v1    # "j":I
	// 219    .restart local v3    # "patternsTable":Landroid/icu/impl/UResource$Table;
label_cond_49:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("surroundingMatch")))) )  
		goto label_cond_55;
	//    .restart local v2    # "pattern":Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingPattern;
	goto label_goto_2f;
	// 235    .line 240
	// 236    .end local v2    # "pattern":Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingPattern;
label_cond_55:
	if ( !(key->contentEquals(std::make_shared<java::lang::String>(std::make_shared<char[]>("insertBetween")))) )  
		goto label_cond_38;
	//    .restart local v2    # "pattern":Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingPattern;
	goto label_goto_2f;
	// 252    .line 221
	// 253    .end local v1    # "j":I
	// 254    .end local v2    # "pattern":Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingPattern;
	// 255    .end local v3    # "patternsTable":Landroid/icu/impl/UResource$Table;
	// 256    .end local v5    # "type":Landroid/icu/impl/CurrencyData$CurrencySpacingInfo$SpacingType;
label_cond_61:
	i = ( i + 0x1);
	goto label_goto_6;
	// 262    .line 249
label_cond_64:
	return;

}


