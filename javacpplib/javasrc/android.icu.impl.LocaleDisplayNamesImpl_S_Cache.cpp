// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\LocaleDisplayNamesImpl$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.LocaleDisplayNamesImpl_S_Cache.h"
#include "android.icu.impl.LocaleDisplayNamesImpl.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.LocaleDisplayNames_S_DialectHandling.h"
#include "android.icu.text.LocaleDisplayNames.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.NoSuchFieldError.h"

static android::icu::impl::LocaleDisplayNamesImpl_S_Cache::_android_icu_text_DisplayContext_S_TypeSwitchesValues;
// .method private static synthetic -getandroid-icu-text-DisplayContext$TypeSwitchesValues()[I
int android::icu::impl::LocaleDisplayNamesImpl_S_Cache::_getandroid_icu_text_DisplayContext_S_TypeSwitchesValues()
{
	
	std::shared<std::vector<int[]>> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( !(android::icu::impl::LocaleDisplayNamesImpl_S_Cache::_android_icu_text_DisplayContext_S_TypeSwitchesValues) )  
		goto label_cond_7;
	return android::icu::impl::LocaleDisplayNamesImpl_S_Cache::_android_icu_text_DisplayContext_S_TypeSwitchesValues;
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
	android::icu::impl::LocaleDisplayNamesImpl_S_Cache::_android_icu_text_DisplayContext_S_TypeSwitchesValues = cVar0;
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
// .method private constructor <init>()V
android::icu::impl::LocaleDisplayNamesImpl_S_Cache::LocaleDisplayNamesImpl_S_Cache()
{
	
	// 142    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/LocaleDisplayNamesImpl$Cache;)V
android::icu::impl::LocaleDisplayNamesImpl_S_Cache::LocaleDisplayNamesImpl_S_Cache(std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl_S_Cache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/impl/LocaleDisplayNamesImpl$Cache;
	// 152    invoke-direct {p0}, Landroid/icu/impl/LocaleDisplayNamesImpl$Cache;-><init>()V
	return;

}
// .method public get(Landroid/icu/util/ULocale;Landroid/icu/text/LocaleDisplayNames$DialectHandling;)Landroid/icu/text/LocaleDisplayNames;
std::shared_ptr<android::icu::text::LocaleDisplayNames> android::icu::impl::LocaleDisplayNamesImpl_S_Cache::get(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl> cVar1;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "dialectHandling"    # Landroid/icu/text/LocaleDisplayNames$DialectHandling;
	if ( dialectHandling != this->dialectHandling )
		goto label_cond_38;
	if ( android::icu::text::DisplayContext::CAPITALIZATION_NONE != this->capitalization )
		goto label_cond_38;
	if ( android::icu::text::DisplayContext::LENGTH_FULL != this->nameLength )
		goto label_cond_38;
	if ( android::icu::text::DisplayContext::SUBSTITUTE != this->substituteHandling )
		goto label_cond_38;
	cVar0 = locale->equals(this->locale);
label_goto_1c:
	if ( cVar0 )     
		goto label_cond_35;
	this->locale = locale;
	this->dialectHandling = dialectHandling;
	this->capitalization = android::icu::text::DisplayContext::CAPITALIZATION_NONE;
	this->nameLength = android::icu::text::DisplayContext::LENGTH_FULL;
	this->substituteHandling = android::icu::text::DisplayContext::SUBSTITUTE;
	cVar1 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl>(locale, dialectHandling);
	this->cache = cVar1;
label_cond_35:
	return this->cache;
	// 234    .line 723
label_cond_38:
	cVar0 = 0x0;
	goto label_goto_1c;

}
// .method public varargs get(Landroid/icu/util/ULocale;[Landroid/icu/text/DisplayContext;)Landroid/icu/text/LocaleDisplayNames;
std::shared_ptr<android::icu::text::LocaleDisplayNames> android::icu::impl::LocaleDisplayNamesImpl_S_Cache::get(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts)
{
	
	int cVar3;
	std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandlingIn;
	std::shared_ptr<android::icu::text::DisplayContext> capitalizationIn;
	std::shared_ptr<android::icu::text::DisplayContext> nameLengthIn;
	std::shared_ptr<android::icu::text::DisplayContext> substituteHandling;
	int cVar1;
	std::shared_ptr<android::icu::text::DisplayContext> contextItem;
	std::shared_ptr<android::icu::impl::LocaleDisplayNamesImpl> cVar4;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "contexts"    # [Landroid/icu/text/DisplayContext;
	cVar3 = 0x0;
	dialectHandlingIn = android::icu::text::LocaleDisplayNames_S_DialectHandling::STANDARD_NAMES;
	//    .local v2, "dialectHandlingIn":Landroid/icu/text/LocaleDisplayNames$DialectHandling;
	capitalizationIn = android::icu::text::DisplayContext::CAPITALIZATION_NONE;
	//    .local v0, "capitalizationIn":Landroid/icu/text/DisplayContext;
	nameLengthIn = android::icu::text::DisplayContext::LENGTH_FULL;
	//    .local v3, "nameLengthIn":Landroid/icu/text/DisplayContext;
	substituteHandling = android::icu::text::DisplayContext::SUBSTITUTE;
	//    .local v4, "substituteHandling":Landroid/icu/text/DisplayContext;
	cVar1 = cVar3;
label_goto_b:
	if ( cVar1 >= contexts->size() )
		goto label_cond_3b;
	contextItem = contexts[cVar1];
	//    .local v1, "contextItem":Landroid/icu/text/DisplayContext;
	// switch
	{
	auto item = ( android::icu::impl::LocaleDisplayNamesImpl_S_Cache::-getandroid-icu-text-DisplayContext$TypeSwitchesValues({const[class].FS-Param})[contextItem->type()->ordinal()] );
	if (item == 1) goto label_pswitch_35;
	if (item == 2) goto label_pswitch_23;
	if (item == 3) goto label_pswitch_37;
	if (item == 4) goto label_pswitch_39;
	}
label_goto_20:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_b;
	// 299    .line 743
label_pswitch_23:
	if ( contextItem->value() != android::icu::text::DisplayContext::STANDARD_NAMES->value() )
		goto label_cond_32;
	android::icu::text::LocaleDisplayNames_S_DialectHandling::STANDARD_NAMES;
	goto label_goto_20;
label_cond_32:
	android::icu::text::LocaleDisplayNames_S_DialectHandling::DIALECT_NAMES;
	goto label_goto_20;
	// 323    .line 747
label_pswitch_35:
	contextItem;
	goto label_goto_20;
	// 330    .line 750
label_pswitch_37:
	contextItem;
	goto label_goto_20;
	// 337    .line 753
label_pswitch_39:
	contextItem;
	goto label_goto_20;
	// 344    .line 759
	// 345    .end local v1    # "contextItem":Landroid/icu/text/DisplayContext;
label_cond_3b:
	if ( dialectHandlingIn != this->dialectHandling )
		goto label_cond_51;
	if ( capitalizationIn != this->capitalization )
		goto label_cond_51;
	if ( nameLengthIn != this->nameLength )
		goto label_cond_51;
	if ( substituteHandling != this->substituteHandling )
		goto label_cond_51;
	cVar3 = locale->equals(this->locale);
label_cond_51:
	if ( cVar3 )     
		goto label_cond_64;
	this->locale = locale;
	this->dialectHandling = dialectHandlingIn;
	this->capitalization = capitalizationIn;
	this->nameLength = nameLengthIn;
	this->substituteHandling = substituteHandling;
	cVar4 = std::make_shared<android::icu::impl::LocaleDisplayNamesImpl>(locale, contexts);
	this->cache = cVar4;
label_cond_64:
	return this->cache;
	// 403    .line 741
	// 404    nop
	// 406    :pswitch_data_68
	// 407    .packed-switch 0x1
	// 408        :pswitch_35
	// 409        :pswitch_23
	// 410        :pswitch_37
	// 411        :pswitch_39
	// 412    .end packed-switch

}


