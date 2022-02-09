// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\LocaleDisplayNames$LastResortLocaleDisplayNames.smali
#include "java2ctype.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.LocaleDisplayNames_S_DialectHandling.h"
#include "android.icu.text.LocaleDisplayNames_S_LastResortLocaleDisplayNames.h"
#include "android.icu.text.LocaleDisplayNames_S_UiListItem.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.Collections.h"
#include "java.util.Comparator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

// .method private constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/LocaleDisplayNames$DialectHandling;)V
android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::LocaleDisplayNames_S_LastResortLocaleDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling)
{
	
	std::shared<std::vector<std::vector<android::icu::text::DisplayContext>>> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "dialectHandling"    # Landroid/icu/text/LocaleDisplayNames$DialectHandling;
	// 031    invoke-direct {p0}, Landroid/icu/text/LocaleDisplayNames;-><init>()V
	this->locale = locale;
	if ( dialectHandling != android::icu::text::LocaleDisplayNames_S_DialectHandling::DIALECT_NAMES )
		goto label_cond_14;
	//    .local v0, "context":Landroid/icu/text/DisplayContext;
label_goto_b:
	cVar0 = std::make_shared<std::vector<std::vector<android::icu::text::DisplayContext>>>(0x1);
	cVar0[0x0] = context;
	this->contexts = cVar0;
	return;
	// 060    .line 425
	// 061    .end local v0    # "context":Landroid/icu/text/DisplayContext;
label_cond_14:
	//    .restart local v0    # "context":Landroid/icu/text/DisplayContext;
	goto label_goto_b;

}
// .method synthetic constructor <init>(Landroid/icu/util/ULocale;Landroid/icu/text/LocaleDisplayNames$DialectHandling;Landroid/icu/text/LocaleDisplayNames$LastResortLocaleDisplayNames;)V
android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::LocaleDisplayNames_S_LastResortLocaleDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> dialectHandling,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames> _this2)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "dialectHandling"    # Landroid/icu/text/LocaleDisplayNames$DialectHandling;
	//    .param p3, "-this2"    # Landroid/icu/text/LocaleDisplayNames$LastResortLocaleDisplayNames;
	android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::(locale, dialectHandling);
	return;

}
// .method private varargs constructor <init>(Landroid/icu/util/ULocale;[Landroid/icu/text/DisplayContext;)V
android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::LocaleDisplayNames_S_LastResortLocaleDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts)
{
	
	int cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "contexts"    # [Landroid/icu/text/DisplayContext;
	cVar0 = 0x0;
	// 090    invoke-direct {p0}, Landroid/icu/text/LocaleDisplayNames;-><init>()V
	this->locale = locale;
	this->contexts = std::make_shared<std::vector<std::vector<android::icu::text::DisplayContext>>>(contexts->size());
	java::lang::System::arraycopy(contexts, cVar0, this->contexts, cVar0, contexts->size());
	return;

}
// .method synthetic constructor <init>(Landroid/icu/util/ULocale;[Landroid/icu/text/DisplayContext;Landroid/icu/text/LocaleDisplayNames$LastResortLocaleDisplayNames;)V
android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::LocaleDisplayNames_S_LastResortLocaleDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::text::DisplayContext>> contexts,std::shared_ptr<android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames> _this2)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "contexts"    # [Landroid/icu/text/DisplayContext;
	//    .param p3, "-this2"    # Landroid/icu/text/LocaleDisplayNames$LastResortLocaleDisplayNames;
	android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::(locale, contexts);
	return;

}
// .method public getContext(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;
std::shared_ptr<android::icu::text::DisplayContext> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::getContext(std::shared_ptr<android::icu::text::DisplayContext_S_Type> type)
{
	
	std::shared_ptr<std::vector<android::icu::text::DisplayContext>> cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::DisplayContext> context;
	
	//    .param p1, "type"    # Landroid/icu/text/DisplayContext$Type;
	//    .local v1, "result":Landroid/icu/text/DisplayContext;
	cVar0 = this->contexts;
	cVar1 = 0x0;
label_goto_6:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_11;
	context = cVar0[cVar1];
	//    .local v0, "context":Landroid/icu/text/DisplayContext;
	if ( context->type() != type )
		goto label_cond_12;
	//    .end local v0    # "context":Landroid/icu/text/DisplayContext;
label_cond_11:
	return android::icu::text::DisplayContext::STANDARD_NAMES;
	// 164    .line 457
	// 165    .restart local v0    # "context":Landroid/icu/text/DisplayContext;
label_cond_12:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_6;

}
// .method public getDialectHandling()Landroid/icu/text/LocaleDisplayNames$DialectHandling;
std::shared_ptr<android::icu::text::LocaleDisplayNames_S_DialectHandling> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::getDialectHandling()
{
	
	std::shared_ptr<std::vector<android::icu::text::DisplayContext>> cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::DisplayContext> context;
	
	//    .local v1, "result":Landroid/icu/text/LocaleDisplayNames$DialectHandling;
	cVar0 = this->contexts;
	cVar1 = 0x0;
label_goto_6:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_20;
	context = cVar0[cVar1];
	//    .local v0, "context":Landroid/icu/text/DisplayContext;
	if ( context->type() != android::icu::text::DisplayContext_S_Type::DIALECT_HANDLING )
		goto label_cond_21;
	if ( context->value() != android::icu::text::DisplayContext::DIALECT_NAMES->ordinal() )
		goto label_cond_21;
	//    .end local v0    # "context":Landroid/icu/text/DisplayContext;
label_cond_20:
	return android::icu::text::LocaleDisplayNames_S_DialectHandling::STANDARD_NAMES;
	// 223    .line 443
	// 224    .restart local v0    # "context":Landroid/icu/text/DisplayContext;
label_cond_21:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_6;

}
// .method public getLocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::getLocale()
{
	
	return this->locale;

}
// .method public getUiListCompareWholeItems(Ljava/util/Set;Ljava/util/Comparator;)Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::text::LocaleDisplayNames_S_UiListItem>> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::getUiListCompareWholeItems(std::shared_ptr<java::util::Set<android::icu::util::ULocale>> localeSet,std::shared_ptr<java::util::Comparator<android::icu::text::LocaleDisplayNames_S_UiListItem>> comparator)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 244        value = {
	// 245            "(",
	// 246            "Ljava/util/Set",
	// 247            "<",
	// 248            "Landroid/icu/util/ULocale;",
	// 249            ">;",
	// 250            "Ljava/util/Comparator",
	// 251            "<",
	// 252            "Landroid/icu/text/LocaleDisplayNames$UiListItem;",
	// 253            ">;)",
	// 254            "Ljava/util/List",
	// 255            "<",
	// 256            "Landroid/icu/text/LocaleDisplayNames$UiListItem;",
	// 257            ">;"
	// 258        }
	// 259    .end annotation
	//    .local p1, "localeSet":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/util/ULocale;>;"
	//    .local p2, "comparator":Ljava/util/Comparator;, "Ljava/util/Comparator<Landroid/icu/text/LocaleDisplayNames$UiListItem;>;"
	return java::util::Collections::emptyList({const[class].FS-Param});

}
// .method public keyDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::keyDisplayName(std::shared_ptr<java::lang::String> key)
{
	
	//    .param p1, "key"    # Ljava/lang/String;
	return key;

}
// .method public keyValueDisplayName(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::keyValueDisplayName(std::shared_ptr<java::lang::String> key,std::shared_ptr<java::lang::String> value)
{
	
	//    .param p1, "key"    # Ljava/lang/String;
	//    .param p2, "value"    # Ljava/lang/String;
	return value;

}
// .method public languageDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::languageDisplayName(std::shared_ptr<java::lang::String> lang)
{
	
	//    .param p1, "lang"    # Ljava/lang/String;
	return lang;

}
// .method public localeDisplayName(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::localeDisplayName(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return locale->getName();

}
// .method public localeDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::localeDisplayName(std::shared_ptr<java::lang::String> localeId)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p1, "localeId"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeId);
	return cVar0->getName();

}
// .method public localeDisplayName(Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::localeDisplayName(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	return android::icu::util::ULocale::forLocale(locale)->getName();

}
// .method public regionDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::regionDisplayName(std::shared_ptr<java::lang::String> region)
{
	
	//    .param p1, "region"    # Ljava/lang/String;
	return region;

}
// .method public scriptDisplayName(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::scriptDisplayName(int scriptCode)
{
	
	//    .param p1, "scriptCode"    # I
	return android::icu::lang::UScript::getShortName(scriptCode);

}
// .method public scriptDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::scriptDisplayName(std::shared_ptr<java::lang::String> script)
{
	
	//    .param p1, "script"    # Ljava/lang/String;
	return script;

}
// .method public variantDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::LocaleDisplayNames_S_LastResortLocaleDisplayNames::variantDisplayName(std::shared_ptr<java::lang::String> variant)
{
	
	//    .param p1, "variant"    # Ljava/lang/String;
	return variant;

}


