// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfoProvider.h"
#include "android.icu.impl.CurrencyData.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_Cache.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_CapitalizationContextSink.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_CapitalizationContextUsage.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTable.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTableType.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_DataTables.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_ICUDataTables.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_LangDataTables.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_RegionDataTables.h"
#include "android.icu.impl.LocaleDisplayNamesImpl.h"
#include "android.icu.impl.SimpleFormatterImpl.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.LocaleDisplayNames_S_DialectHandling.h"
#include "android.icu.text.LocaleDisplayNames_S_UiListItem.h"
#include "android.icu.text.LocaleDisplayNames.h"
#include "android.icu.util.ULocale_S_Builder.h"
#include "android.icu.util.ULocale_S_Minimize.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.NoSuchFieldError.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.Comparator.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"

static android::icu::impl::LocaleDisplayNamesImpl::_android_icu_impl_LocaleDisplayNamesImpl_S_DataTableTypeSwitchesValues;
static android::icu::impl::LocaleDisplayNamesImpl::_android_icu_text_DisplayContext_S_TypeSwitchesValues;
static android::icu::impl::LocaleDisplayNamesImpl::cache;
static android::icu::impl::LocaleDisplayNamesImpl::contextUsageTypeMap;
// .method static synthetic -get0(Landroid/icu/impl/LocaleDisplayNamesImpl;)Landroid/icu/text/DisplayContext;
std::shared_ptr<android::icu::text::DisplayContext> android::icu::impl::LocaleDisplayNamesImpl::_get0(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/LocaleDisplayNamesImpl;
	return _this->capitalization;

}
// .method static synthetic -get1(Landroid/icu/impl/LocaleDisplayNamesImpl;)[Z
bool android::icu::impl::LocaleDisplayNamesImpl::_get1(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/LocaleDisplayNamesImpl;
	return _this->capitalizationUsage;

}
// .method static synthetic -get2()Ljava/util/Map;
std::shared_ptr<java::util::Map> android::icu::impl::LocaleDisplayNamesImpl::_get2()
{
	
	return android::icu::impl::LocaleDisplayNamesImpl::contextUsageTypeMap;

}
// .method private static synthetic -getandroid-icu-impl-LocaleDisplayNamesImpl$DataTableTypeSwitchesValues()[I
int android::icu::impl::LocaleDisplayNamesImpl::_getandroid_icu_impl_LocaleDisplayNamesImpl_S_DataTableTypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::LocaleDisplayNamesImpl::_android_icu_impl_LocaleDisplayNamesImpl_S_DataTableTypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::LocaleDisplayNamesImpl::_android_icu_impl_LocaleDisplayNamesImpl_S_DataTableTypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::LANG->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_25;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_25
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType::REGION->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_23
label_goto_20:
	android::icu::impl::LocaleDisplayNamesImpl::_android_icu_impl_LocaleDisplayNamesImpl_S_DataTableTypeSwitchesValues = cVar0;
	return cVar0;
label_catch_23:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_25:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method private static synthetic -getandroid-icu-text-DisplayContext$TypeSwitchesValues()[I
int android::icu::impl::LocaleDisplayNamesImpl::_getandroid_icu_text_DisplayContext_S_TypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::LocaleDisplayNamesImpl::_android_icu_text_DisplayContext_S_TypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::LocaleDisplayNamesImpl::_android_icu_text_DisplayContext_S_TypeSwitchesValues;
label_cond_7:
	cVar0 = std::make_shared<std::vector<int[]>>(android::icu::text::DisplayContext_S_Type::values({const[class].FS-Param})->size());
	try {
	//label_try_start_e:
	cVar0[android::icu::text::DisplayContext_S_Type::CAPITALIZATION->ordinal()] = 0x1;
	//label_try_end_17:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3b;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_e .. :try_end_17} :catch_3b
label_goto_17:
	try {
	//label_try_start_17:
	cVar0[android::icu::text::DisplayContext_S_Type::DIALECT_HANDLING->ordinal()] = 0x2;
	//label_try_end_20:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_39;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_17 .. :try_end_20} :catch_39
label_goto_20:
	try {
	//label_try_start_20:
	cVar0[android::icu::text::DisplayContext_S_Type::DISPLAY_LENGTH->ordinal()] = 0x3;
	//label_try_end_29:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_37;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_20 .. :try_end_29} :catch_37
label_goto_29:
	try {
	//label_try_start_29:
	cVar0[android::icu::text::DisplayContext_S_Type::SUBSTITUTE_HANDLING->ordinal()] = 0x4;
	//label_try_end_32:
	}
	catch (java::lang::NoSuchFieldError e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_35;
	}
	//    .catch Ljava/lang/NoSuchFieldError; {:try_start_29 .. :try_end_32} :catch_35
label_goto_32:
	android::icu::impl::LocaleDisplayNamesImpl::_android_icu_text_DisplayContext_S_TypeSwitchesValues = cVar0;
	return cVar0;
label_catch_35:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_32;
label_catch_37:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_29;
label_catch_39:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_20;
label_catch_3b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	goto label_goto_17;

}
// .method static constructor <clinit>()V
void android::icu::impl::LocaleDisplayNamesImpl::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_Cache> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	
	cVar0 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_Cache>(0x0);
	android::icu::impl::LocaleDisplayNamesImpl::cache = cVar0;
	cVar1 = std::make_shared<java::util::HashMap>();
	android::icu::impl::LocaleDisplayNamesImpl::contextUsageTypeMap = cVar1;
	android::icu::impl::LocaleDisplayNamesImpl::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("languages")), android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::LANGUAGE);
	android::icu::impl::LocaleDisplayNamesImpl::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("script")), android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::SCRIPT);
	android::icu::impl::LocaleDisplayNamesImpl::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("territory")), android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::TERRITORY);
	android::icu::impl::LocaleDisplayNamesImpl::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("variant")), android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::VARIANT);
	android::icu::impl::LocaleDisplayNamesImpl::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("key")), android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::KEY);
	android::icu::impl::LocaleDisplayNamesImpl::contextUsageTypeMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("keyValue")), android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::KEYVALUE);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/LocaleDisplayNames$DialectHandling;)V
android::icu::impl::LocaleDisplayNamesImpl::LocaleDisplayNamesImpl(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling)
{
	
	std::shared<std::vector<std::vector<android::icu::text::DisplayContext>>> cVar0;
	std::shared_ptr<android::icu::text::DisplayContext> cVar1;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "dialectHandling"    # Landroid/icu/text/LocaleDisplayNames$DialectHandling;
	cVar0 = std::make_shared<std::vector<std::vector<android::icu::text::DisplayContext>>>(0x2);
	if ( dialectHandling != android::icu::text::LocaleDisplayNames_S_DialectHandling::STANDARD_NAMES )
		goto label_cond_15;
	cVar1 = android::icu::text::DisplayContext::STANDARD_NAMES;
label_goto_9:
	cVar0[0x0] = cVar1;
	cVar0[0x1] = android::icu::text::DisplayContext::CAPITALIZATION_NONE;
	android::icu::impl::LocaleDisplayNamesImpl::(locale, cVar0);
	return;
	// 385    .line 131
label_cond_15:
	cVar1 = android::icu::text::DisplayContext::DIALECT_NAMES;
	goto label_goto_9;

}
// .method public varargs constructor <init>(Landroid/icu/util/ULocale;[Landroid/icu/text/DisplayContext;)V
android::icu::impl::LocaleDisplayNamesImpl::LocaleDisplayNamesImpl(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts)
{
	
	std::shared_ptr<android::icu::text::DisplayContext> capitalization;
	std::shared_ptr<android::icu::text::DisplayContext> substituteHandling;
	int cVar0;
	std::shared_ptr<android::icu::text::DisplayContext> contextItem;
	bool cVar2;
	bool cVar3;
	std::shared_ptr<android::icu::util::ULocale> cVar4;
	std::shared_ptr<java::lang::Object> sep;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<java::lang::Object> pattern;
	std::shared_ptr<java::lang::String> pattern;
	std::shared_ptr<java::lang::Object> keyTypePattern;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextSink> sink;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "contexts"    # [Landroid/icu/text/DisplayContext;
	// 399    invoke-direct/range {p0 .. p0}, Landroid/icu/text/LocaleDisplayNames;-><init>()V
	this->capitalizationUsage = 0x0;
	this->capitalizationBrkIter = 0x0;
	//    .local v4, "dialectHandling":Landroid/icu/text/LocaleDisplayNames$DialectHandling;
	capitalization = android::icu::text::DisplayContext::CAPITALIZATION_NONE;
	//    .local v2, "capitalization":Landroid/icu/text/DisplayContext;
	//    .local v7, "nameLength":Landroid/icu/text/DisplayContext;
	substituteHandling = android::icu::text::DisplayContext::SUBSTITUTE;
	//    .local v14, "substituteHandling":Landroid/icu/text/DisplayContext;
	cVar0 = 0x0;
label_goto_1b:
	if ( cVar0 >= contexts->size() )
		goto label_cond_51;
	contextItem = contexts[cVar0];
	//    .local v3, "contextItem":Landroid/icu/text/DisplayContext;
	// switch
	{
	auto item = ( android::icu::impl::LocaleDisplayNamesImpl::-getandroid-icu-text-DisplayContext$TypeSwitchesValues({const[class].FS-Param})[contextItem->type()->ordinal()] );
	if (item == 1) goto label_pswitch_4b;
	if (item == 2) goto label_pswitch_35;
	if (item == 3) goto label_pswitch_4d;
	if (item == 4) goto label_pswitch_4f;
	}
label_goto_32:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_1b;
	// 471    .line 143
label_pswitch_35:
	if ( contextItem->value() != android::icu::text::DisplayContext::STANDARD_NAMES->value() )
		goto label_cond_48;
	android::icu::text::LocaleDisplayNames_S_DialectHandling::STANDARD_NAMES;
	goto label_goto_32;
label_cond_48:
	android::icu::text::LocaleDisplayNames_S_DialectHandling::DIALECT_NAMES;
	goto label_goto_32;
	// 499    .line 147
label_pswitch_4b:
	contextItem;
	goto label_goto_32;
	// 506    .line 150
label_pswitch_4d:
	contextItem;
	goto label_goto_32;
	// 513    .line 153
label_pswitch_4f:
	contextItem;
	goto label_goto_32;
	// 520    .line 160
	// 521    .end local v3    # "contextItem":Landroid/icu/text/DisplayContext;
label_cond_51:
	this->dialectHandling = android::icu::text::LocaleDisplayNames_S_DialectHandling::STANDARD_NAMES;
	this->capitalization = capitalization;
	this->nameLength = android::icu::text::DisplayContext::LENGTH_FULL;
	this->substituteHandling = substituteHandling;
	if ( substituteHandling != android::icu::text::DisplayContext::NO_SUBSTITUTE )
		goto label_cond_198;
	cVar2 = 0x1;
label_goto_68:
	this->langData = android::icu::impl::LocaleDisplayNamesImpl_S_LangDataTables::impl->get(locale, cVar2);
	if ( substituteHandling != android::icu::text::DisplayContext::NO_SUBSTITUTE )
		goto label_cond_19b;
	cVar3 = 0x1;
label_goto_7b:
	this->regionData = android::icu::impl::LocaleDisplayNamesImpl_S_RegionDataTables::impl->get(locale, cVar3);
	if ( !(android::icu::util::ULocale::ROOT->equals(this->langData->getLocale())) )  
		goto label_cond_19e;
	cVar4 = this->regionData->getLocale();
label_goto_a1:
	this->locale = cVar4;
	sep = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("localeDisplayPattern")), std::make_shared<java::lang::String>(std::make_shared<char[]>("separator")));
	//    .local v12, "sep":Ljava/lang/String;
	if ( !(sep) )  
		goto label_cond_be;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("separator"))->equals(sep)) )  
		goto label_cond_c1;
label_cond_be:
label_cond_c1:
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v11, "sb":Ljava/lang/StringBuilder;
	this->separatorFormat = android::icu::impl::SimpleFormatterImpl::compileToStringMinMaxArguments(sep, sb, 0x2, 0x2);
	pattern = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("localeDisplayPattern")), std::make_shared<java::lang::String>(std::make_shared<char[]>("pattern")));
	//    .local v9, "pattern":Ljava/lang/String;
	if ( !(pattern) )  
		goto label_cond_ec;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("pattern"))->equals(pattern)) )  
		goto label_cond_ef;
label_cond_ec:
	pattern = std::make_shared<java::lang::String>(std::make_shared<char[]>("{0} ({1})"));
label_cond_ef:
	this->format = android::icu::impl::SimpleFormatterImpl::compileToStringMinMaxArguments(pattern, sb, 0x2, 0x2);
	if ( !(pattern->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("\uff08")))) )  
		goto label_cond_1a8;
	this->formatOpenParen = 0xff08;
	this->formatCloseParen = 0xff09;
	this->formatReplaceOpenParen = 0xff3b;
	this->formatReplaceCloseParen = 0xff3d;
label_goto_121:
	keyTypePattern = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("localeDisplayPattern")), std::make_shared<java::lang::String>(std::make_shared<char[]>("keyTypePattern")));
	//    .local v6, "keyTypePattern":Ljava/lang/String;
	if ( !(keyTypePattern) )  
		goto label_cond_13a;
	if ( !(std::make_shared<java::lang::String>(std::make_shared<char[]>("keyTypePattern"))->equals(keyTypePattern)) )  
		goto label_cond_13d;
label_cond_13a:
label_cond_13d:
	this->keyTypeFormat = android::icu::impl::SimpleFormatterImpl::compileToStringMinMaxArguments(keyTypePattern, sb, 0x2, 0x2);
	//    .local v8, "needBrkIter":Z
	if ( capitalization == android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU )
		goto label_cond_153;
	if ( capitalization != android::icu::text::DisplayContext::CAPITALIZATION_FOR_STANDALONE )
		goto label_cond_179;
label_cond_153:
	this->capitalizationUsage = std::make_shared<std::vector<bool[]>>(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::values({const[class].FS-Param})->size());
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), locale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v10, "rb":Landroid/icu/impl/ICUResourceBundle;
	sink = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextSink>(this, 0x0);
	//    .local v13, "sink":Landroid/icu/impl/LocaleDisplayNamesImpl$CapitalizationContextSink;
	try {
	//label_try_start_171:
	rb->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("contextTransforms")), sink);
	//label_try_end_177:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1c2;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_171 .. :try_end_177} :catch_1c2
label_goto_177:
	//    .end local v8    # "needBrkIter":Z
	//    .end local v10    # "rb":Landroid/icu/impl/ICUResourceBundle;
	//    .end local v13    # "sink":Landroid/icu/impl/LocaleDisplayNamesImpl$CapitalizationContextSink;
label_cond_179:
	if ( 0x0 )     
		goto label_cond_17f;
	if ( capitalization != android::icu::text::DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE )
		goto label_cond_187;
label_cond_17f:
	this->capitalizationBrkIter = android::icu::text::BreakIterator::getSentenceInstance(locale);
label_cond_187:
	this->currencyDisplayInfo = android::icu::impl::CurrencyData::provider->getInstance(locale, 0x0);
	return;
	// 902    .line 164
	// 903    .end local v6    # "keyTypePattern":Ljava/lang/String;
	// 904    .end local v9    # "pattern":Ljava/lang/String;
	// 905    .end local v11    # "sb":Ljava/lang/StringBuilder;
	// 906    .end local v12    # "sep":Ljava/lang/String;
label_cond_198:
	cVar2 = 0x0;
	goto label_goto_68;
	// 912    .line 165
label_cond_19b:
	cVar3 = 0x0;
	goto label_goto_7b;
	// 918    .line 167
label_cond_19e:
	cVar4 = this->langData->getLocale();
	goto label_goto_a1;
	// 930    .line 191
	// 931    .restart local v9    # "pattern":Ljava/lang/String;
	// 932    .restart local v11    # "sb":Ljava/lang/StringBuilder;
	// 933    .restart local v12    # "sep":Ljava/lang/String;
label_cond_1a8:
	this->formatOpenParen = 0x28;
	this->formatCloseParen = 0x29;
	this->formatReplaceOpenParen = 0x5b;
	this->formatReplaceCloseParen = 0x5d;
	goto label_goto_121;
	// 964    .line 215
	// 965    .restart local v6    # "keyTypePattern":Ljava/lang/String;
	// 966    .restart local v8    # "needBrkIter":Z
	// 967    .restart local v10    # "rb":Landroid/icu/impl/ICUResourceBundle;
	// 968    .restart local v13    # "sink":Landroid/icu/impl/LocaleDisplayNamesImpl$CapitalizationContextSink;
label_catch_1c2:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "e":Ljava/util/MissingResourceException;
	goto label_goto_177;
	// 975    .line 141
	// 976    :pswitch_data_1c4
	// 977    .packed-switch 0x1
	// 978        :pswitch_4b
	// 979        :pswitch_35
	// 980        :pswitch_4d
	// 981        :pswitch_4f
	// 982    .end packed-switch

}
// .method private adjustForUsageAndContext(Landroid/icu/impl/LocaleDisplayNamesImpl$CapitalizationContextUsage;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::adjustForUsageAndContext(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage> usage,std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "usage"    # Landroid/icu/impl/LocaleDisplayNamesImpl$CapitalizationContextUsage;
	//    .param p2, "name"    # Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_43;
	if ( name->length() <= 0 )
		goto label_cond_43;
	if ( !(android::icu::lang::UCharacter::isLowerCase(name->codePointAt(0x0))) )  
		goto label_cond_43;
	if ( this->capitalization == android::icu::text::DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE )
		goto label_cond_27;
	if ( !(this->capitalizationUsage) )  
		goto label_cond_43;
	if ( !(this->capitalizationUsage[usage->ordinal()]) )  
		goto label_cond_43;
label_cond_27:
	this->monitor_enter();
	try {
	//label_try_start_28:
	if ( this->capitalizationBrkIter )     
		goto label_cond_34;
	this->capitalizationBrkIter = android::icu::text::BreakIterator::getSentenceInstance(this->locale);
label_cond_34:
	//label_try_end_3d:
	}
	catch (...){
		goto label_catchall_40;
	}
	//    .catchall {:try_start_28 .. :try_end_3d} :catchall_40
	this->monitor_exit();
	return android::icu::lang::UCharacter::toTitleCase(this->locale, name, this->capitalizationBrkIter, 0x300);
	// 1074    .line 267
label_catchall_40:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 1082    .line 276
label_cond_43:
	return name;

}
// .method private appendWithSep(Ljava/lang/String;Ljava/lang/StringBuilder;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::impl::LocaleDisplayNamesImpl::appendWithSep(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::StringBuilder> b)
{
	
	std::shared<std::vector<std::vector<java::lang::CharSequence>>> cVar0;
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "b"    # Ljava/lang/StringBuilder;
	if ( b->length() )     
		goto label_cond_b;
	b->append(s);
label_goto_a:
	return b;
	// 1109    .line 710
label_cond_b:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x2);
	cVar0[0x0] = b;
	cVar0[0x1] = s;
	android::icu::impl::SimpleFormatterImpl::formatAndReplace(this->separatorFormat, b, 0x0, cVar0);
	goto label_goto_a;

}
// .method public static getInstance(Landroid/icu/util/ULocale;Landroid/icu/text/LocaleDisplayNames$DialectHandling;)Landroid/icu/text/LocaleDisplayNames;
std::shared_ptr<android::icu::text::LocaleDisplayNames> android::icu::impl::LocaleDisplayNamesImpl::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling)
{
	
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_Cache> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "dialectHandling"    # Landroid/icu/text/LocaleDisplayNames$DialectHandling;
	cVar0 = android::icu::impl::LocaleDisplayNamesImpl::cache;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_3 .. :try_end_8} :catchall_b
	cVar0->monitor_exit();
	return android::icu::impl::LocaleDisplayNamesImpl::cache->get(locale, dialectHandling);
	// 1155    .line 95
label_catchall_b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static varargs getInstance(Landroid/icu/util/ULocale;[Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames;
std::shared_ptr<android::icu::text::LocaleDisplayNames> android::icu::impl::LocaleDisplayNamesImpl::getInstance(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts)
{
	
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_Cache> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "contexts"    # [Landroid/icu/text/DisplayContext;
	cVar0 = android::icu::impl::LocaleDisplayNamesImpl::cache;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_b;
	}
	//    .catchall {:try_start_3 .. :try_end_8} :catchall_b
	cVar0->monitor_exit();
	return android::icu::impl::LocaleDisplayNamesImpl::cache->get(locale, contexts);
	// 1189    .line 101
label_catchall_b:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static haveData(Landroid/icu/impl/LocaleDisplayNamesImpl$DataTableType;)Z
bool android::icu::impl::LocaleDisplayNamesImpl::haveData(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_DataTableType> type)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "type"    # Landroid/icu/impl/LocaleDisplayNamesImpl$DataTableType;
	// switch
	{
	auto item = ( android::icu::impl::LocaleDisplayNamesImpl::-getandroid-icu-impl-LocaleDisplayNamesImpl$DataTableTypeSwitchesValues({const[class].FS-Param})[type->ordinal()] );
	if (item == 1) goto label_pswitch_27;
	if (item == 2) goto label_pswitch_2c;
	}
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown type: ")))->append(type)->toString());
	// throw
	throw cVar0;
	// 1241    .line 699
label_pswitch_27:
	return android::icu::impl::LocaleDisplayNamesImpl_S_LangDataTables::impl->instanceOf("android::icu::impl::LocaleDisplayNamesImpl_S_ICUDataTables");
	// 1249    .line 700
label_pswitch_2c:
	return android::icu::impl::LocaleDisplayNamesImpl_S_RegionDataTables::impl->instanceOf("android::icu::impl::LocaleDisplayNamesImpl_S_ICUDataTables");
	// 1257    .line 698
	// 1258    nop
	// 1260    :pswitch_data_32
	// 1261    .packed-switch 0x1
	// 1262        :pswitch_27
	// 1263        :pswitch_2c
	// 1264    .end packed-switch

}
// .method private keyDisplayName(Ljava/lang/String;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::keyDisplayName(std::shared_ptr<java::lang::String> key,bool skipAdjust)
{
	
	std::shared_ptr<java::lang::String> keyName;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "skipAdjust"    # Z
	keyName = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Keys")), key);
	//    .local v0, "keyName":Ljava/lang/String;
	if ( !(skipAdjust) )  
		goto label_cond_c;
	//    .end local v0    # "keyName":Ljava/lang/String;
label_goto_b:
	return keyName;
	// 1290    .restart local v0    # "keyName":Ljava/lang/String;
label_cond_c:
	keyName = this->adjustForUsageAndContext(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::KEY, keyName);
	goto label_goto_b;

}
// .method private keyValueDisplayName(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::keyValueDisplayName(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> value,bool skipAdjust)
{
	
	std::shared_ptr<java::lang::String> keyValueName;
	std::shared_ptr<java::lang::String> tmp;
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "value"    # Ljava/lang/String;
	//    .param p3, "skipAdjust"    # Z
	keyValueName = 0x0;
	//    .local v0, "keyValueName":Ljava/lang/String;
	if ( !(key->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("currency")))) )  
		goto label_cond_1a;
	keyValueName = this->currencyDisplayInfo->getName(android::icu::impl::locale::AsciiUtil::toUpperString(value));
	//    .local v0, "keyValueName":Ljava/lang/String;
	if ( keyValueName )     
		goto label_cond_17;
	keyValueName = value;
	//    .end local v0    # "keyValueName":Ljava/lang/String;
label_cond_17:
label_goto_17:
	if ( !(skipAdjust) )  
		goto label_cond_40;
label_goto_19:
	return keyValueName;
	// 1348    .line 534
	// 1349    .local v0, "keyValueName":Ljava/lang/String;
label_cond_1a:
	if ( this->nameLength != android::icu::text::DisplayContext::LENGTH_SHORT )
		goto label_cond_34;
	tmp = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Types%short")), key, value);
	//    .local v1, "tmp":Ljava/lang/String;
	if ( !(tmp) )  
		goto label_cond_34;
	if ( !(( tmp->equals(value) ^ 0x1)) )  
		goto label_cond_34;
	keyValueName = tmp;
	//    .end local v0    # "keyValueName":Ljava/lang/String;
	//    .end local v1    # "tmp":Ljava/lang/String;
label_cond_34:
	if ( keyValueName )     
		goto label_cond_17;
	keyValueName = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Types")), key, value);
	//    .local v0, "keyValueName":Ljava/lang/String;
	goto label_goto_17;
	// 1399    .line 545
	// 1400    .end local v0    # "keyValueName":Ljava/lang/String;
label_cond_40:
	keyValueName = this->adjustForUsageAndContext(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::KEYVALUE, keyValueName);
	goto label_goto_19;

}
// .method private localeDisplayNameInternal(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::localeDisplayNameInternal(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	int resultName;
	std::shared_ptr<java::lang::String> lang;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::lang::String> country;
	std::shared_ptr<java::lang::String> variant;
	int hasScript;
	int hasCountry;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> langScriptCountry;
	auto result;
	auto resultName;
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<java::util::Iterator> keys;
	std::shared_ptr<java::lang::String> key;
	auto value;
	std::shared_ptr<java::lang::String> keyDisplayName;
	std::shared_ptr<java::lang::Object> keyDisplayName;
	auto valueDisplayName;
	std::shared_ptr<std::vector<java::lang::CharSequence>> cVar3;
	auto resultRemainder;
	std::shared_ptr<std::vector<java::lang::CharSequence>> cVar4;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> langScript;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::String> langCountry;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	resultName = 0x0;
	//    .local v17, "resultName":Ljava/lang/String;
	locale->getLanguage();
	//    .local v12, "lang":Ljava/lang/String;
	if ( locale->getBaseName()->length() )     
		goto label_cond_13;
	lang = std::make_shared<java::lang::String>(std::make_shared<char[]>("root"));
label_cond_13:
	script = locale->getScript();
	//    .local v19, "script":Ljava/lang/String;
	country = locale->getCountry();
	//    .local v4, "country":Ljava/lang/String;
	variant = locale->getVariant();
	//    .local v22, "variant":Ljava/lang/String;
	if ( script->length() <= 0 )
		goto label_cond_92;
	hasScript = 0x1;
	//    .local v6, "hasScript":Z
label_goto_26:
	if ( country->length() <= 0 )
		goto label_cond_94;
	hasCountry = 0x1;
	//    .local v5, "hasCountry":Z
label_goto_2d:
	if ( variant->length() <= 0 )
		goto label_cond_96;
	//    .local v7, "hasVariant":Z
label_goto_34:
	if ( this->dialectHandling != android::icu::text::LocaleDisplayNames_S_DialectHandling::DIALECT_NAMES )
		goto label_cond_85;
	if ( !(hasScript) )  
		goto label_cond_98;
	if ( !(hasCountry) )  
		goto label_cond_98;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	langScriptCountry = cVar0->append(lang)->append(0x5f)->append(script)->append(0x5f)->append(country)->toString();
	//    .local v15, "langScriptCountry":Ljava/lang/String;
	result = this->localeIdName(langScriptCountry);
	//    .local v16, "result":Ljava/lang/String;
	if ( !(result) )  
		goto label_cond_98;
	if ( !(( result->equals(langScriptCountry) ^ 0x1)) )  
		goto label_cond_98;
	resultName = result;
	//    .local v17, "resultName":Ljava/lang/String;
	hasScript = 0x0;
	hasCountry = 0x0;
	//    .end local v15    # "langScriptCountry":Ljava/lang/String;
	//    .end local v16    # "result":Ljava/lang/String;
	//    .end local v17    # "resultName":Ljava/lang/String;
label_cond_85:
label_goto_85:
	if ( resultName )     
		goto label_cond_126;
	result = this->localeIdName(lang);
	//    .restart local v16    # "result":Ljava/lang/String;
	if ( result )     
		goto label_cond_100;
	return 0x0;
	// 1608    .line 314
	// 1609    .end local v5    # "hasCountry":Z
	// 1610    .end local v6    # "hasScript":Z
	// 1611    .end local v7    # "hasVariant":Z
	// 1612    .end local v16    # "result":Ljava/lang/String;
	// 1613    .local v17, "resultName":Ljava/lang/String;
label_cond_92:
	hasScript = 0x0;
	//    .restart local v6    # "hasScript":Z
	goto label_goto_26;
	// 1620    .line 315
label_cond_94:
	hasCountry = 0x0;
	//    .restart local v5    # "hasCountry":Z
	goto label_goto_2d;
	// 1627    .line 316
label_cond_96:
	//    .restart local v7    # "hasVariant":Z
	goto label_goto_34;
	// 1634    .line 331
label_cond_98:
	if ( !(hasScript) )  
		goto label_cond_cd;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	langScript = cVar1->append(lang)->append(0x5f)->append(script)->toString();
	//    .local v14, "langScript":Ljava/lang/String;
	result = this->localeIdName(langScript);
	//    .restart local v16    # "result":Ljava/lang/String;
	if ( !(result) )  
		goto label_cond_cd;
	if ( !(( result->equals(langScript) ^ 0x1)) )  
		goto label_cond_cd;
	resultName = result;
	//    .local v17, "resultName":Ljava/lang/String;
	hasScript = 0x0;
	goto label_goto_85;
	// 1699    .line 340
	// 1700    .end local v14    # "langScript":Ljava/lang/String;
	// 1701    .end local v16    # "result":Ljava/lang/String;
	// 1702    .local v17, "resultName":Ljava/lang/String;
label_cond_cd:
	if ( !(hasCountry) )  
		goto label_cond_85;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	langCountry = cVar2->append(lang)->append(0x5f)->append(country)->toString();
	//    .local v13, "langCountry":Ljava/lang/String;
	result = this->localeIdName(langCountry);
	//    .restart local v16    # "result":Ljava/lang/String;
	if ( !(result) )  
		goto label_cond_85;
	if ( !(( result->equals(langCountry) ^ 0x1)) )  
		goto label_cond_85;
	resultName = result;
	//    .local v17, "resultName":Ljava/lang/String;
	hasCountry = 0x0;
	goto label_goto_85;
	// 1765    .line 356
	// 1766    .end local v13    # "langCountry":Ljava/lang/String;
	// 1767    .end local v17    # "resultName":Ljava/lang/String;
label_cond_100:
	resultName = result->replace(this->formatOpenParen, this->formatReplaceOpenParen)->replace(this->formatCloseParen, this->formatReplaceCloseParen);
	//    .end local v16    # "result":Ljava/lang/String;
label_cond_126:
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v3, "buf":Ljava/lang/StringBuilder;
	if ( !(hasScript) )  
		goto label_cond_169;
	result = this->scriptDisplayNameInContext(script, 0x1);
	//    .restart local v16    # "result":Ljava/lang/String;
	if ( result )     
		goto label_cond_13e;
	return 0x0;
	// 1842    .line 366
label_cond_13e:
	buf->append(result->replace(this->formatOpenParen, this->formatReplaceOpenParen)->replace(this->formatCloseParen, this->formatReplaceCloseParen));
	//    .end local v16    # "result":Ljava/lang/String;
label_cond_169:
	if ( !(hasCountry) )  
		goto label_cond_1a7;
	result = this->regionDisplayName(country, 0x1);
	//    .restart local v16    # "result":Ljava/lang/String;
	if ( result )     
		goto label_cond_17a;
	return 0x0;
	// 1913    .line 373
label_cond_17a:
	this->appendWithSep(result->replace(this->formatOpenParen, this->formatReplaceOpenParen)->replace(this->formatCloseParen, this->formatReplaceCloseParen), buf);
	//    .end local v16    # "result":Ljava/lang/String;
label_cond_1a7:
	if ( !(hasVariant) )  
		goto label_cond_1e7;
	result = this->variantDisplayName(variant, 0x1);
	//    .restart local v16    # "result":Ljava/lang/String;
	if ( result )     
		goto label_cond_1ba;
	return 0x0;
	// 1988    .line 380
label_cond_1ba:
	this->appendWithSep(result->replace(this->formatOpenParen, this->formatReplaceOpenParen)->replace(this->formatCloseParen, this->formatReplaceCloseParen), buf);
	//    .end local v16    # "result":Ljava/lang/String;
label_cond_1e7:
	keys = locale->getKeywords();
	//    .local v11, "keys":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	if ( !(keys) )  
		goto label_cond_2b9;
label_goto_1ed:
	if ( !(keys->hasNext()) )  
		goto label_cond_2b9;
	key = keys->next();
	key->checkCast("java::lang::String");
	//    .local v8, "key":Ljava/lang/String;
	value = locale->getKeywordValue(key);
	//    .local v20, "value":Ljava/lang/String;
	keyDisplayName = this->keyDisplayName(key, 0x1);
	//    .local v9, "keyDisplayName":Ljava/lang/String;
	if ( keyDisplayName )     
		goto label_cond_20e;
	return 0x0;
	// 2091    .line 392
label_cond_20e:
	keyDisplayName = keyDisplayName->replace(this->formatOpenParen, this->formatReplaceOpenParen)->replace(this->formatCloseParen, this->formatReplaceCloseParen);
	valueDisplayName = this->keyValueDisplayName(key, value, 0x1);
	//    .local v21, "valueDisplayName":Ljava/lang/String;
	if ( valueDisplayName )     
		goto label_cond_243;
	return 0x0;
	// 2153    .line 397
label_cond_243:
	valueDisplayName = valueDisplayName->replace(this->formatOpenParen, this->formatReplaceOpenParen)->replace(this->formatCloseParen, this->formatReplaceCloseParen);
	if ( valueDisplayName->equals(value) )     
		goto label_cond_27c;
	this->appendWithSep(valueDisplayName, buf);
	goto label_goto_1ed;
	// 2216    .line 401
label_cond_27c:
	if ( key->equals(keyDisplayName) )     
		goto label_cond_2a3;
	cVar3 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x2);
	cVar3[0x0] = keyDisplayName;
	cVar3[0x1] = valueDisplayName;
	//    .local v10, "keyValue":Ljava/lang/String;
	this->appendWithSep(android::icu::impl::SimpleFormatterImpl::formatCompiledPattern(this->keyTypeFormat, cVar3), buf);
	goto label_goto_1ed;
	// 2262    .line 406
	// 2263    .end local v10    # "keyValue":Ljava/lang/String;
label_cond_2a3:
	this->appendWithSep(keyDisplayName, buf)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")))->append(valueDisplayName);
	goto label_goto_1ed;
	// 2287    .line 413
	// 2288    .end local v8    # "key":Ljava/lang/String;
	// 2289    .end local v9    # "keyDisplayName":Ljava/lang/String;
	// 2290    .end local v20    # "value":Ljava/lang/String;
	// 2291    .end local v21    # "valueDisplayName":Ljava/lang/String;
label_cond_2b9:
	//    .local v18, "resultRemainder":Ljava/lang/String;
	if ( buf->length() <= 0 )
		goto label_cond_2c5;
	resultRemainder = buf->toString();
	//    .end local v18    # "resultRemainder":Ljava/lang/String;
label_cond_2c5:
	if ( !(0x0) )  
		goto label_cond_2e1;
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::CharSequence>>>(0x2);
	cVar4[0x0] = resultName;
	cVar4[0x1] = resultRemainder;
label_cond_2e1:
	return this->adjustForUsageAndContext(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::LANGUAGE, resultName);

}
// .method private localeIdName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::localeIdName(std::shared_ptr<java::lang::String> localeId)
{
	
	std::shared_ptr<java::lang::String> locIdName;
	
	//    .param p1, "localeId"    # Ljava/lang/String;
	if ( this->nameLength != android::icu::text::DisplayContext::LENGTH_SHORT )
		goto label_cond_1a;
	locIdName = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Languages%short")), localeId);
	//    .local v0, "locIdName":Ljava/lang/String;
	if ( !(locIdName) )  
		goto label_cond_1a;
	if ( !(( locIdName->equals(localeId) ^ 0x1)) )  
		goto label_cond_1a;
	return locIdName;
	// 2396    .line 433
	// 2397    .end local v0    # "locIdName":Ljava/lang/String;
label_cond_1a:
	return this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Languages")), localeId);

}
// .method private newRow(Landroid/icu/util/ULocale;Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames$UiListItem;
std::shared_ptr<android::icu::text::LocaleDisplayNames_S_UiListItem> android::icu::impl::LocaleDisplayNamesImpl::newRow(std::shared_ptr<android::icu::util::ULocale> modified,std::shared_ptr<android::icu::text::DisplayContext> capContext)
{
	
	std::shared_ptr<java::lang::String> tempName;
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_UiListItem> cVar0;
	
	//    .param p1, "modified"    # Landroid/icu/util/ULocale;
	//    .param p2, "capContext"    # Landroid/icu/text/DisplayContext;
	//    .local v0, "minimized":Landroid/icu/util/ULocale;
	tempName = modified->getDisplayName(this->locale);
	//    .local v3, "tempName":Ljava/lang/String;
	if ( capContext != android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU )
		goto label_cond_2b;
	//    .local v4, "titlecase":Z
label_goto_11:
	if ( !(titlecase) )  
		goto label_cond_2d;
	//    .local v1, "nameInDisplayLocale":Ljava/lang/String;
label_goto_19:
	tempName = modified->getDisplayName(modified);
	if ( capContext != android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU )
		goto label_cond_2f;
	//    .local v2, "nameInSelf":Ljava/lang/String;
label_goto_25:
	cVar0 = std::make_shared<android::icu::text::LocaleDisplayNames_S_UiListItem>(android::icu::util::ULocale::minimizeSubtags(modified, android::icu::util::ULocale_S_Minimize::FAVOR_SCRIPT), modified, nameInDisplayLocale, nameInSelf);
	return cVar0;
	// 2475    .line 608
	// 2476    .end local v1    # "nameInDisplayLocale":Ljava/lang/String;
	// 2477    .end local v2    # "nameInSelf":Ljava/lang/String;
	// 2478    .end local v4    # "titlecase":Z
label_cond_2b:
	//    .restart local v4    # "titlecase":Z
	goto label_goto_11;
	// 2485    .line 609
label_cond_2d:
	//    .restart local v1    # "nameInDisplayLocale":Ljava/lang/String;
	goto label_goto_19;
	// 2492    .line 611
label_cond_2f:
	//    .restart local v2    # "nameInSelf":Ljava/lang/String;
	goto label_goto_25;

}
// .method private regionDisplayName(Ljava/lang/String;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::regionDisplayName(std::shared_ptr<java::lang::String> region,bool skipAdjust)
{
	
	std::shared_ptr<java::lang::String> regionName;
	
	//    .param p1, "region"    # Ljava/lang/String;
	//    .param p2, "skipAdjust"    # Z
	if ( this->nameLength != android::icu::text::DisplayContext::LENGTH_SHORT )
		goto label_cond_23;
	regionName = this->regionData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Countries%short")), region);
	//    .local v0, "regionName":Ljava/lang/String;
	if ( !(regionName) )  
		goto label_cond_23;
	if ( !(( regionName->equals(region) ^ 0x1)) )  
		goto label_cond_23;
	if ( !(skipAdjust) )  
		goto label_cond_1c;
	//    .end local v0    # "regionName":Ljava/lang/String;
label_goto_1b:
	return regionName;
	// 2541    .restart local v0    # "regionName":Ljava/lang/String;
label_cond_1c:
	regionName = this->adjustForUsageAndContext(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::TERRITORY, regionName);
	goto label_goto_1b;
	// 2551    .line 494
	// 2552    .end local v0    # "regionName":Ljava/lang/String;
label_cond_23:
	regionName = this->regionData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Countries")), region);
	//    .restart local v0    # "regionName":Ljava/lang/String;
	if ( !(skipAdjust) )  
		goto label_cond_2f;
	//    .end local v0    # "regionName":Ljava/lang/String;
label_goto_2e:
	return regionName;
	// 2570    .restart local v0    # "regionName":Ljava/lang/String;
label_cond_2f:
	regionName = this->adjustForUsageAndContext(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::TERRITORY, regionName);
	goto label_goto_2e;

}
// .method private scriptDisplayNameInContext(Ljava/lang/String;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::scriptDisplayNameInContext(std::shared_ptr<java::lang::String> script,bool skipAdjust)
{
	
	std::shared_ptr<java::lang::String> scriptName;
	
	//    .param p1, "script"    # Ljava/lang/String;
	//    .param p2, "skipAdjust"    # Z
	if ( this->nameLength != android::icu::text::DisplayContext::LENGTH_SHORT )
		goto label_cond_23;
	scriptName = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Scripts%short")), script);
	//    .local v0, "scriptName":Ljava/lang/String;
	if ( !(scriptName) )  
		goto label_cond_23;
	if ( !(( scriptName->equals(script) ^ 0x1)) )  
		goto label_cond_23;
	if ( !(skipAdjust) )  
		goto label_cond_1c;
	//    .end local v0    # "scriptName":Ljava/lang/String;
label_goto_1b:
	return scriptName;
	// 2622    .restart local v0    # "scriptName":Ljava/lang/String;
label_cond_1c:
	scriptName = this->adjustForUsageAndContext(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::SCRIPT, scriptName);
	goto label_goto_1b;
	// 2632    .line 473
	// 2633    .end local v0    # "scriptName":Ljava/lang/String;
label_cond_23:
	scriptName = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Scripts")), script);
	//    .restart local v0    # "scriptName":Ljava/lang/String;
	if ( !(skipAdjust) )  
		goto label_cond_2f;
	//    .end local v0    # "scriptName":Ljava/lang/String;
label_goto_2e:
	return scriptName;
	// 2651    .restart local v0    # "scriptName":Ljava/lang/String;
label_cond_2f:
	scriptName = this->adjustForUsageAndContext(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::SCRIPT, scriptName);
	goto label_goto_2e;

}
// .method private variantDisplayName(Ljava/lang/String;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::variantDisplayName(std::shared_ptr<java::lang::String> variant,bool skipAdjust)
{
	
	std::shared_ptr<java::lang::String> variantName;
	
	//    .param p1, "variant"    # Ljava/lang/String;
	//    .param p2, "skipAdjust"    # Z
	variantName = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Variants")), variant);
	//    .local v0, "variantName":Ljava/lang/String;
	if ( !(skipAdjust) )  
		goto label_cond_c;
	//    .end local v0    # "variantName":Ljava/lang/String;
label_goto_b:
	return variantName;
	// 2685    .restart local v0    # "variantName":Ljava/lang/String;
label_cond_c:
	variantName = this->adjustForUsageAndContext(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::VARIANT, variantName);
	goto label_goto_b;

}
// .method public getContext(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;
std::shared_ptr<android::icu::text::DisplayContext> android::icu::impl::LocaleDisplayNamesImpl::getContext(std::shared_ptr<android::icu::text::DisplayContext_S_Type> type)
{
	
	//    .param p1, "type"    # Landroid/icu/text/DisplayContext$Type;
	// switch
	{
	auto item = ( android::icu::impl::LocaleDisplayNamesImpl::-getandroid-icu-text-DisplayContext$TypeSwitchesValues({const[class].FS-Param})[type->ordinal()] );
	if (item == 1) goto label_pswitch_1c;
	if (item == 2) goto label_pswitch_10;
	if (item == 3) goto label_pswitch_1f;
	if (item == 4) goto label_pswitch_22;
	}
	//    .local v0, "result":Landroid/icu/text/DisplayContext;
label_goto_f:
	return result;
	// 2724    .line 243
	// 2725    .end local v0    # "result":Landroid/icu/text/DisplayContext;
label_pswitch_10:
	if ( this->dialectHandling != android::icu::text::LocaleDisplayNames_S_DialectHandling::STANDARD_NAMES )
		goto label_cond_19;
	//    .restart local v0    # "result":Landroid/icu/text/DisplayContext;
	goto label_goto_f;
	// 2738    .end local v0    # "result":Landroid/icu/text/DisplayContext;
label_cond_19:
	//    .restart local v0    # "result":Landroid/icu/text/DisplayContext;
	goto label_goto_f;
	// 2745    .line 246
	// 2746    .end local v0    # "result":Landroid/icu/text/DisplayContext;
label_pswitch_1c:
	//    .restart local v0    # "result":Landroid/icu/text/DisplayContext;
	goto label_goto_f;
	// 2753    .line 249
	// 2754    .end local v0    # "result":Landroid/icu/text/DisplayContext;
label_pswitch_1f:
	//    .restart local v0    # "result":Landroid/icu/text/DisplayContext;
	goto label_goto_f;
	// 2761    .line 252
	// 2762    .end local v0    # "result":Landroid/icu/text/DisplayContext;
label_pswitch_22:
	//    .restart local v0    # "result":Landroid/icu/text/DisplayContext;
	goto label_goto_f;
	// 2769    .line 241
	// 2770    nop
	// 2772    :pswitch_data_26
	// 2773    .packed-switch 0x1
	// 2774        :pswitch_1c
	// 2775        :pswitch_10
	// 2776        :pswitch_1f
	// 2777        :pswitch_22
	// 2778    .end packed-switch

}
// .method public getDialectHandling()Landroid/icu/text/LocaleDisplayNames$DialectHandling;
std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> android::icu::impl::LocaleDisplayNamesImpl::getDialectHandling()
{
	
	return this->dialectHandling;

}
// .method public getLocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::LocaleDisplayNamesImpl::getLocale()
{
	
	return this->locale;

}
// .method public getUiListCompareWholeItems(Ljava/util/Set;Ljava/util/Comparator;)Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::text::LocaleDisplayNames_S_UiListItem>> android::icu::impl::LocaleDisplayNamesImpl::getUiListCompareWholeItems(std::shared_ptr<java::util::Set<android::icu::util::ULocale>> localeSet,std::shared_ptr<java::util::Comparator<android::icu::text::LocaleDisplayNames_S_UiListItem>> comparator)
{
	
	std::shared_ptr<android::icu::text::DisplayContext> capContext;
	std::shared_ptr<java::util::ArrayList> result;
	std::shared_ptr<java::util::HashMap> baseToLocales;
	std::shared_ptr<android::icu::util::ULocale_S_Builder> builder;
	std::shared_ptr<java::util::Iterator> locOriginal_S_iterator;
	std::shared_ptr<android::icu::util::ULocale> locOriginal;
	std::shared_ptr<android::icu::util::ULocale> loc;
	std::shared_ptr<android::icu::util::ULocale> base;
	std::shared_ptr<java::util::Set> locales;
	std::shared_ptr<java::util::HashSet> locales;
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<java::util::Set> values;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<java::util::HashSet> scripts;
	std::shared_ptr<java::util::HashSet> regions;
	std::shared_ptr<android::icu::util::ULocale> maxBase;
	std::shared_ptr<java::util::Iterator> locale_S_iterator;
	std::shared_ptr<android::icu::util::ULocale_S_Builder> modified;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2804        value = {
	// 2805            "(",
	// 2806            "Ljava/util/Set",
	// 2807            "<",
	// 2808            "Landroid/icu/util/ULocale;",
	// 2809            ">;",
	// 2810            "Ljava/util/Comparator",
	// 2811            "<",
	// 2812            "Landroid/icu/text/LocaleDisplayNames$UiListItem;",
	// 2813            ">;)",
	// 2814            "Ljava/util/List",
	// 2815            "<",
	// 2816            "Landroid/icu/text/LocaleDisplayNames$UiListItem;",
	// 2817            ">;"
	// 2818        }
	// 2819    .end annotation
	//    .local p1, "localeSet":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
	//    .local p2, "comparator":Ljava/util/Comparator;, "Ljava/util/Comparator<Landroid/icu/text/LocaleDisplayNames$UiListItem;>;"
	capContext = this->getContext(android::icu::text::DisplayContext_S_Type::CAPITALIZATION);
	//    .local v5, "capContext":Landroid/icu/text/DisplayContext;
	result = std::make_shared<java::util::ArrayList>();
	//    .local v19, "result":Ljava/util/List;, "Ljava/util/List<Landroid/icu/text/LocaleDisplayNames$UiListItem;>;"
	baseToLocales = std::make_shared<java::util::HashMap>();
	//    .local v3, "baseToLocales":Ljava/util/Map;, "Ljava/util/Map<Landroid/icu/util/ULocale;Ljava/util/Set<Landroid/icu/util/ULocale;>;>;"
	builder = std::make_shared<android::icu::util::ULocale_S_Builder>();
	//    .local v4, "builder":Landroid/icu/util/ULocale$Builder;
	locOriginal_S_iterator = localeSet->iterator();
	//    .local v12, "locOriginal$iterator":Ljava/util/Iterator;
label_goto_1d:
	if ( !(locOriginal_S_iterator->hasNext()) )  
		goto label_cond_4f;
	locOriginal = locOriginal_S_iterator->next();
	locOriginal->checkCast("android::icu::util::ULocale");
	//    .local v11, "locOriginal":Landroid/icu/util/ULocale;
	builder->setLocale(locOriginal);
	loc = android::icu::util::ULocale::addLikelySubtags(locOriginal);
	//    .local v10, "loc":Landroid/icu/util/ULocale;
	base = std::make_shared<android::icu::util::ULocale>(loc->getLanguage());
	//    .local v2, "base":Landroid/icu/util/ULocale;
	locales = baseToLocales->get(base);
	locales->checkCast("java::util::Set");
	//    .local v15, "locales":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
	if ( locales )     
		goto label_cond_4b;
	//    .end local v15    # "locales":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
	locales = std::make_shared<java::util::HashSet>();
	//    .restart local v15    # "locales":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
	baseToLocales->put(base, locales);
label_cond_4b:
	locales->add(loc);
	goto label_goto_1d;
	// 2921    .line 570
	// 2922    .end local v2    # "base":Landroid/icu/util/ULocale;
	// 2923    .end local v10    # "loc":Landroid/icu/util/ULocale;
	// 2924    .end local v11    # "locOriginal":Landroid/icu/util/ULocale;
	// 2925    .end local v15    # "locales":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
label_cond_4f:
	entry_S_iterator = baseToLocales->entrySet()->iterator();
	//    .local v7, "entry$iterator":Ljava/util/Iterator;
label_cond_57:
label_goto_57:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_146;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v6, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Landroid/icu/util/ULocale;Ljava/util/Set<Landroid/icu/util/ULocale;>;>;"
	base = entry->getKey();
	base->checkCast("android::icu::util::ULocale");
	//    .restart local v2    # "base":Landroid/icu/util/ULocale;
	values = entry->getValue();
	values->checkCast("java::util::Set");
	//    .local v21, "values":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
	if ( values->size() != 0x1 )
		goto label_cond_9d;
	locale = values->iterator()->next();
	locale->checkCast("android::icu::util::ULocale");
	//    .local v13, "locale":Landroid/icu/util/ULocale;
	result->add(this->newRow(android::icu::util::ULocale::minimizeSubtags(locale, android::icu::util::ULocale_S_Minimize::FAVOR_SCRIPT), capContext));
	goto label_goto_57;
	// 3017    .line 577
	// 3018    .end local v13    # "locale":Landroid/icu/util/ULocale;
label_cond_9d:
	scripts = std::make_shared<java::util::HashSet>();
	//    .local v20, "scripts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	regions = std::make_shared<java::util::HashSet>();
	//    .local v18, "regions":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	maxBase = android::icu::util::ULocale::addLikelySubtags(base);
	//    .local v16, "maxBase":Landroid/icu/util/ULocale;
	scripts->add(maxBase->getScript());
	regions->add(maxBase->getCountry());
	locale_S_iterator = values->iterator();
	//    .local v14, "locale$iterator":Ljava/util/Iterator;
label_goto_c5:
	if ( !(locale_S_iterator->hasNext()) )  
		goto label_cond_e8;
	locale = locale_S_iterator->next();
	locale->checkCast("android::icu::util::ULocale");
	//    .restart local v13    # "locale":Landroid/icu/util/ULocale;
	scripts->add(locale->getScript());
	regions->add(locale->getCountry());
	goto label_goto_c5;
	// 3103    .line 587
	// 3104    .end local v13    # "locale":Landroid/icu/util/ULocale;
label_cond_e8:
	if ( scripts->size() <= 0x1 )
		goto label_cond_142;
	//    .local v9, "hasScripts":Z
label_goto_f5:
	if ( regions->size() <= 0x1 )
		goto label_cond_144;
	//    .local v8, "hasRegions":Z
label_goto_102:
	locale_S_iterator = values->iterator();
label_goto_106:
	if ( !(locale_S_iterator->hasNext()) )  
		goto label_cond_57;
	locale = locale_S_iterator->next();
	locale->checkCast("android::icu::util::ULocale");
	//    .restart local v13    # "locale":Landroid/icu/util/ULocale;
	modified = builder->setLocale(locale);
	//    .local v17, "modified":Landroid/icu/util/ULocale$Builder;
	if ( 0x1 )     
		goto label_cond_122;
	modified->setScript(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
label_cond_122:
	if ( 0x1 )     
		goto label_cond_12e;
	modified->setRegion(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
label_cond_12e:
	result->add(this->newRow(modified->build(), capContext));
	goto label_goto_106;
	// 3211    .line 587
	// 3212    .end local v8    # "hasRegions":Z
	// 3213    .end local v9    # "hasScripts":Z
	// 3214    .end local v13    # "locale":Landroid/icu/util/ULocale;
	// 3215    .end local v17    # "modified":Landroid/icu/util/ULocale$Builder;
label_cond_142:
	0x0;
	//    .restart local v9    # "hasScripts":Z
	goto label_goto_f5;
	// 3222    .line 588
label_cond_144:
	0x0;
	//    .restart local v8    # "hasRegions":Z
	goto label_goto_102;
	// 3229    .line 601
	// 3230    .end local v2    # "base":Landroid/icu/util/ULocale;
	// 3231    .end local v6    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Landroid/icu/util/ULocale;Ljava/util/Set<Landroid/icu/util/ULocale;>;>;"
	// 3232    .end local v8    # "hasRegions":Z
	// 3233    .end local v9    # "hasScripts":Z
	// 3234    .end local v14    # "locale$iterator":Ljava/util/Iterator;
	// 3235    .end local v16    # "maxBase":Landroid/icu/util/ULocale;
	// 3236    .end local v18    # "regions":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 3237    .end local v20    # "scripts":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 3238    .end local v21    # "values":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
label_cond_146:
	java::util::Collections::sort(result, comparator);
	return result;

}
// .method public keyDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::keyDisplayName(std::shared_ptr<java::lang::String> key)
{
	
	//    .param p1, "key"    # Ljava/lang/String;
	return this->keyDisplayName(key, 0x0);

}
// .method public keyValueDisplayName(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::keyValueDisplayName(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "value"    # Ljava/lang/String;
	return this->keyValueDisplayName(key, value, 0x0);

}
// .method public languageDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::languageDisplayName(std::shared_ptr<java::lang::String> lang)
{
	
	std::shared_ptr<java::lang::String> lang;
	std::shared_ptr<java::lang::String> langName;
	
	//    .param p1, "lang"    # Ljava/lang/String;
	if ( lang->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("root"))) )     
		goto label_cond_13;
	if ( lang->indexOf(0x5f) == -0x1 )
		goto label_cond_1c;
label_cond_13:
	if ( this->substituteHandling != android::icu::text::DisplayContext::SUBSTITUTE )
		goto label_cond_1a;
	//    .end local p1    # "lang":Ljava/lang/String;
label_goto_19:
	return lang;
	// 3319    .restart local p1    # "lang":Ljava/lang/String;
label_cond_1a:
	lang = 0x0;
	goto label_goto_19;
	// 3325    .line 442
label_cond_1c:
	if ( this->nameLength != android::icu::text::DisplayContext::LENGTH_SHORT )
		goto label_cond_3c;
	langName = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Languages%short")), lang);
	//    .local v0, "langName":Ljava/lang/String;
	if ( !(langName) )  
		goto label_cond_3c;
	if ( !(( langName->equals(lang) ^ 0x1)) )  
		goto label_cond_3c;
	return this->adjustForUsageAndContext(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::LANGUAGE, langName);
	// 3363    .line 448
	// 3364    .end local v0    # "langName":Ljava/lang/String;
label_cond_3c:
	return this->adjustForUsageAndContext(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::LANGUAGE, this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Languages")), lang));

}
// .method public localeDisplayName(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::localeDisplayName(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return this->localeDisplayNameInternal(locale);

}
// .method public localeDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::localeDisplayName(std::shared_ptr<java::lang::String> localeId)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p1, "localeId"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeId);
	return this->localeDisplayNameInternal(cVar0);

}
// .method public localeDisplayName(Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::localeDisplayName(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	return this->localeDisplayNameInternal(android::icu::util::ULocale::forLocale(locale));

}
// .method public regionDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::regionDisplayName(std::shared_ptr<java::lang::String> region)
{
	
	//    .param p1, "region"    # Ljava/lang/String;
	return this->regionDisplayName(region, 0x0);

}
// .method public scriptDisplayName(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::scriptDisplayName(int scriptCode)
{
	
	//    .param p1, "scriptCode"    # I
	return this->scriptDisplayName(android::icu::lang::UScript::getShortName(scriptCode));

}
// .method public scriptDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::scriptDisplayName(std::shared_ptr<java::lang::String> script)
{
	
	std::shared_ptr<java::lang::String> str;
	
	//    .param p1, "script"    # Ljava/lang/String;
	str = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Scripts%stand-alone")), script);
	//    .local v0, "str":Ljava/lang/String;
	if ( !(str) )  
		goto label_cond_11;
	if ( !(str->equals(script)) )  
		goto label_cond_3a;
label_cond_11:
	if ( this->nameLength != android::icu::text::DisplayContext::LENGTH_SHORT )
		goto label_cond_31;
	str = this->langData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("Scripts%short")), script);
	if ( !(str) )  
		goto label_cond_31;
	if ( !(( str->equals(script) ^ 0x1)) )  
		goto label_cond_31;
	return this->adjustForUsageAndContext(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::SCRIPT, str);
	// 3523    .line 461
label_cond_31:
label_cond_3a:
	return this->adjustForUsageAndContext(android::icu::impl::LocaleDisplayNamesImpl_S_CapitalizationContextUsage::SCRIPT, str);

}
// .method public scriptDisplayNameInContext(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::scriptDisplayNameInContext(std::shared_ptr<java::lang::String> script)
{
	
	//    .param p1, "script"    # Ljava/lang/String;
	return this->scriptDisplayNameInContext(script, 0x0);

}
// .method public variantDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::LocaleDisplayNamesImpl::variantDisplayName(std::shared_ptr<java::lang::String> variant)
{
	
	//    .param p1, "variant"    # Ljava/lang/String;
	return this->variantDisplayName(variant, 0x0);

}


