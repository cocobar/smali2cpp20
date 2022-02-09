// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RuleBasedNumberFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.PatternProps.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.text.BreakIterator.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.NFRule.h"
#include "android.icu.text.NFRuleSet.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralFormat.h"
#include "android.icu.text.PluralRules_S_PluralType.h"
#include "android.icu.text.RBNFPostProcessor.h"
#include "android.icu.text.RbnfLenientScanner.h"
#include "android.icu.text.RbnfLenientScannerProvider.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.UResourceBundleIterator.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.PrintStream.h"
#include "java.lang.Class.h"
#include "java.lang.Double.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Long.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParsePosition.h"
#include "java.util.Arrays.h"
#include "java.util.Comparator.h"
#include "java.util.HashMap.h"
#include "java.util.Locale.h"
#include "java.util.Map.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"

static android::icu::text::RuleBasedNumberFormat::DEBUG;
static android::icu::text::RuleBasedNumberFormat::DURATION = 0x3;
static android::icu::text::RuleBasedNumberFormat::MAX_VALUE;
static android::icu::text::RuleBasedNumberFormat::MIN_VALUE;
static android::icu::text::RuleBasedNumberFormat::NUMBERING_SYSTEM = 0x4;
static android::icu::text::RuleBasedNumberFormat::ORDINAL = 0x2;
static android::icu::text::RuleBasedNumberFormat::SPELLOUT = 0x1;
static android::icu::text::RuleBasedNumberFormat::locnames;
static android::icu::text::RuleBasedNumberFormat::rulenames;
static android::icu::text::RuleBasedNumberFormat::serialVersionUID = -0x6a5ce54888ed36fcL;
// .method static constructor <clinit>()V
void android::icu::text::RuleBasedNumberFormat::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	
	cVar0 = 0x4;
	cVar1 = 0x3;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	android::icu::text::RuleBasedNumberFormat::DEBUG = android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("rbnf")));
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar5[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SpelloutRules"));
	cVar5[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("OrdinalRules"));
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DurationRules"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NumberingSystemRules"));
	android::icu::text::RuleBasedNumberFormat::rulenames = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar6[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("SpelloutLocalizations"));
	cVar6[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("OrdinalLocalizations"));
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DurationLocalizations"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NumberingSystemLocalizations"));
	android::icu::text::RuleBasedNumberFormat::locnames = cVar6;
	android::icu::text::RuleBasedNumberFormat::MAX_VALUE = android::icu::math::BigDecimal::valueOf(0x7fffffffffffffffL);
	android::icu::text::RuleBasedNumberFormat::MIN_VALUE = android::icu::math::BigDecimal::valueOf(-0x8000000000000000L);
	return;

}
// .method public constructor <init>(I)V
android::icu::text::RuleBasedNumberFormat::RuleBasedNumberFormat(int format)
{
	
	//    .param p1, "format"    # I
	android::icu::text::RuleBasedNumberFormat::(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), format);
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;I)V
android::icu::text::RuleBasedNumberFormat::RuleBasedNumberFormat(std::shared_ptr<android::icu::util::ULocale> locale,int format)
{
	
	bool cVar0;
	std::shared_ptr<std::vector<android::icu::text::NFRuleSet>> cVar1;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	std::shared_ptr<android::icu::util::ULocale> uloc;
	std::shared_ptr<java::lang::StringBuilder> description;
	std::shared_ptr<android::icu::util::UResourceBundle> locNamesBundle;
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> localizations;
	int i;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> it;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "format"    # I
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 214    invoke-direct {p0}, Landroid/icu/text/NumberFormat;-><init>()V
	this->ruleSets = cVar1;
	this->ruleSetsMap = cVar1;
	this->defaultRuleSet = cVar1;
	this->locale = cVar1;
	this->roundingMode = 0x7;
	this->scannerProvider = cVar1;
	this->decimalFormatSymbols = cVar1;
	this->decimalFormat = cVar1;
	this->defaultInfinityRule = cVar1;
	this->defaultNaNRule = cVar1;
	this->lenientParse = cVar0;
	this->capitalizationInfoIsSet = cVar0;
	this->capitalizationForListOrMenu = cVar0;
	this->capitalizationForStandAlone = cVar0;
	this->capitalizationBrkIter = cVar1;
	this->locale = locale;
	bundle = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/rbnf")), locale);
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "bundle":Landroid/icu/impl/ICUResourceBundle;
	uloc = bundle->getULocale();
	//    .local v8, "uloc":Landroid/icu/util/ULocale;
	this->setLocale(uloc, uloc);
	description = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "description":Ljava/lang/StringBuilder;
	//    .local v6, "localizations":[[Ljava/lang/String;
	try {
	//label_try_start_3c:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	//    .local v7, "rules":Landroid/icu/impl/ICUResourceBundle;
	it = bundle->getWithFallback(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("RBNFRules/")))->append(android::icu::text::RuleBasedNumberFormat::rulenames[( format + -0x1)])->toString())->getIterator();
	//    .local v4, "it":Landroid/icu/util/UResourceBundleIterator;
label_goto_5e:
	if ( !(it->hasNext()) )  
		goto label_cond_6d;
	description->append(it->nextString());
	//label_try_end_6b:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_6c;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_3c .. :try_end_6b} :catch_6c
	goto label_goto_5e;
	// 352    .line 840
	// 353    .end local v4    # "it":Landroid/icu/util/UResourceBundleIterator;
	// 354    .end local v7    # "rules":Landroid/icu/impl/ICUResourceBundle;
label_catch_6c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
label_cond_6d:
	locNamesBundle = bundle->findTopLevel(android::icu::text::RuleBasedNumberFormat::locnames[( format + -0x1)]);
	//    .local v5, "locNamesBundle":Landroid/icu/util/UResourceBundle;
	if ( !(locNamesBundle) )  
		goto label_cond_90;
	localizations = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(locNamesBundle->getSize());
	//    .local v6, "localizations":[[Ljava/lang/String;
	i = 0x0;
	//    .local v3, "i":I
label_goto_80:
	if ( i >= localizations->size() )
		goto label_cond_90;
	localizations[i] = locNamesBundle->get(i)->getStringArray();
	i = ( i + 0x1);
	goto label_goto_80;
	// 407    .line 854
	// 408    .end local v3    # "i":I
	// 409    .end local v6    # "localizations":[[Ljava/lang/String;
label_cond_90:
	this->init(description->toString(), 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::text::RuleBasedNumberFormat::RuleBasedNumberFormat(std::shared_ptr<java::lang::String> description)
{
	
	bool cVar0;
	std::shared_ptr<std::vector<android::icu::text::NFRuleSet>> cVar1;
	
	//    .param p1, "description"    # Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 431    invoke-direct {p0}, Landroid/icu/text/NumberFormat;-><init>()V
	this->ruleSets = cVar1;
	this->ruleSetsMap = cVar1;
	this->defaultRuleSet = cVar1;
	this->locale = cVar1;
	this->roundingMode = 0x7;
	this->scannerProvider = cVar1;
	this->decimalFormatSymbols = cVar1;
	this->decimalFormat = cVar1;
	this->defaultInfinityRule = cVar1;
	this->defaultNaNRule = cVar1;
	this->lenientParse = cVar0;
	this->capitalizationInfoIsSet = cVar0;
	this->capitalizationForListOrMenu = cVar0;
	this->capitalizationForStandAlone = cVar0;
	this->capitalizationBrkIter = cVar1;
	this->locale = android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT);
	this->init(description, cVar1);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Landroid/icu/util/ULocale;)V
android::icu::text::RuleBasedNumberFormat::RuleBasedNumberFormat(std::shared_ptr<java::lang::String> description,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	bool cVar0;
	std::shared_ptr<std::vector<android::icu::text::NFRuleSet>> cVar1;
	
	//    .param p1, "description"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 507    invoke-direct {p0}, Landroid/icu/text/NumberFormat;-><init>()V
	this->ruleSets = cVar1;
	this->ruleSetsMap = cVar1;
	this->defaultRuleSet = cVar1;
	this->locale = cVar1;
	this->roundingMode = 0x7;
	this->scannerProvider = cVar1;
	this->decimalFormatSymbols = cVar1;
	this->decimalFormat = cVar1;
	this->defaultInfinityRule = cVar1;
	this->defaultNaNRule = cVar1;
	this->lenientParse = cVar0;
	this->capitalizationInfoIsSet = cVar0;
	this->capitalizationForListOrMenu = cVar0;
	this->capitalizationForStandAlone = cVar0;
	this->capitalizationBrkIter = cVar1;
	this->locale = locale;
	this->init(description, cVar1);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/util/Locale;)V
android::icu::text::RuleBasedNumberFormat::RuleBasedNumberFormat(std::shared_ptr<java::lang::String> description,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "description"    # Ljava/lang/String;
	//    .param p2, "locale"    # Ljava/util/Locale;
	android::icu::text::RuleBasedNumberFormat::(description, android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method public constructor <init>(Ljava/lang/String;[[Ljava/lang/String;)V
android::icu::text::RuleBasedNumberFormat::RuleBasedNumberFormat(std::shared_ptr<java::lang::String> description,std::shared_ptr<std::vector<std::vector<java::lang::String>>> localizations)
{
	
	bool cVar0;
	std::shared_ptr<std::vector<android::icu::text::NFRuleSet>> cVar1;
	
	//    .param p1, "description"    # Ljava/lang/String;
	//    .param p2, "localizations"    # [[Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 594    invoke-direct {p0}, Landroid/icu/text/NumberFormat;-><init>()V
	this->ruleSets = cVar1;
	this->ruleSetsMap = cVar1;
	this->defaultRuleSet = cVar1;
	this->locale = cVar1;
	this->roundingMode = 0x7;
	this->scannerProvider = cVar1;
	this->decimalFormatSymbols = cVar1;
	this->decimalFormat = cVar1;
	this->defaultInfinityRule = cVar1;
	this->defaultNaNRule = cVar1;
	this->lenientParse = cVar0;
	this->capitalizationInfoIsSet = cVar0;
	this->capitalizationForListOrMenu = cVar0;
	this->capitalizationForStandAlone = cVar0;
	this->capitalizationBrkIter = cVar1;
	this->locale = android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT);
	this->init(description, localizations);
	return;

}
// .method public constructor <init>(Ljava/lang/String;[[Ljava/lang/String;Landroid/icu/util/ULocale;)V
android::icu::text::RuleBasedNumberFormat::RuleBasedNumberFormat(std::shared_ptr<java::lang::String> description,std::shared_ptr<std::vector<std::vector<java::lang::String>>> localizations,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	bool cVar0;
	std::shared_ptr<std::vector<android::icu::text::NFRuleSet>> cVar1;
	
	//    .param p1, "description"    # Ljava/lang/String;
	//    .param p2, "localizations"    # [[Ljava/lang/String;
	//    .param p3, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	cVar1 = 0x0;
	// 671    invoke-direct {p0}, Landroid/icu/text/NumberFormat;-><init>()V
	this->ruleSets = cVar1;
	this->ruleSetsMap = cVar1;
	this->defaultRuleSet = cVar1;
	this->locale = cVar1;
	this->roundingMode = 0x7;
	this->scannerProvider = cVar1;
	this->decimalFormatSymbols = cVar1;
	this->decimalFormat = cVar1;
	this->defaultInfinityRule = cVar1;
	this->defaultNaNRule = cVar1;
	this->lenientParse = cVar0;
	this->capitalizationInfoIsSet = cVar0;
	this->capitalizationForListOrMenu = cVar0;
	this->capitalizationForStandAlone = cVar0;
	this->capitalizationBrkIter = cVar1;
	this->locale = locale;
	this->init(description, localizations);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;I)V
android::icu::text::RuleBasedNumberFormat::RuleBasedNumberFormat(std::shared_ptr<java::util::Locale> locale,int format)
{
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	//    .param p2, "format"    # I
	android::icu::text::RuleBasedNumberFormat::(android::icu::util::ULocale::forLocale(locale), format);
	return;

}
// .method private adjustForContext(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::adjustForContext(std::shared_ptr<java::lang::String> result)
{
	
	auto capitalization;
	
	//    .param p1, "result"    # Ljava/lang/String;
	if ( !(result) )  
		goto label_cond_44;
	if ( result->length() <= 0 )
		goto label_cond_44;
	if ( !(android::icu::lang::UCharacter::isLowerCase(result->codePointAt(0x0))) )  
		goto label_cond_44;
	capitalization = this->getContext(android::icu::text::DisplayContext_S_Type::CAPITALIZATION);
	//    .local v0, "capitalization":Landroid/icu/text/DisplayContext;
	if ( capitalization == android::icu::text::DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE )
		goto label_cond_2d;
	if ( capitalization != android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU )
		goto label_cond_25;
	if ( this->capitalizationForListOrMenu )     
		goto label_cond_2d;
label_cond_25:
	if ( capitalization != android::icu::text::DisplayContext::CAPITALIZATION_FOR_STANDALONE )
		goto label_cond_44;
	if ( !(this->capitalizationForStandAlone) )  
		goto label_cond_44;
label_cond_2d:
	if ( this->capitalizationBrkIter )     
		goto label_cond_39;
	this->capitalizationBrkIter = android::icu::text::BreakIterator::getSentenceInstance(this->locale);
label_cond_39:
	return android::icu::lang::UCharacter::toTitleCase(this->locale, result, this->capitalizationBrkIter, 0x300);
	// 838    .line 2004
	// 839    .end local v0    # "capitalization":Landroid/icu/text/DisplayContext;
label_cond_44:
	return result;

}
// .method private extractSpecial(Ljava/lang/StringBuilder;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::extractSpecial(std::shared_ptr<java::lang::StringBuilder> description,std::shared_ptr<java::lang::String> specialName)
{
	
	int cVar0;
	int lp;
	int lpEnd;
	int lpStart;
	
	//    .param p1, "description"    # Ljava/lang/StringBuilder;
	//    .param p2, "specialName"    # Ljava/lang/String;
	cVar0 = -0x1;
	//    .local v3, "result":Ljava/lang/String;
	lp = description->indexOf(specialName);
	//    .local v0, "lp":I
	if ( lp == cVar0 )
		goto label_cond_41;
	if ( !(lp) )  
		goto label_cond_14;
	if ( description->charAt(( lp + -0x1)) != 0x3b )
		goto label_cond_41;
label_cond_14:
	lpEnd = description->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(";%")), lp);
	//    .local v1, "lpEnd":I
	if ( lpEnd != cVar0 )
		goto label_cond_23;
	lpEnd = ( description->length() + -0x1);
label_cond_23:
	lpStart = (lp + specialName->length());
	//    .local v2, "lpStart":I
label_goto_29:
	if ( lpStart >= lpEnd )
		goto label_cond_38;
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(description->charAt(lpStart))) )  
		goto label_cond_38;
	lpStart = ( lpStart + 0x1);
	goto label_goto_29;
	// 927    .line 1649
label_cond_38:
	//    .local v3, "result":Ljava/lang/String;
	description->delete(lp, ( lpEnd + 0x1));
	//    .end local v1    # "lpEnd":I
	//    .end local v2    # "lpStart":I
	//    .end local v3    # "result":Ljava/lang/String;
label_cond_41:
	return 0x0;

}
// .method private format(DLandroid/icu/text/NFRuleSet;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::format(double cVar2,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<android::icu::math::BigDecimal> cVar1;
	long long cVar2;
	
	//    .param p1, "number"    # D
	//    .param p3, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	cVar0 = 0x0;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "result":Ljava/lang/StringBuilder;
	if ( this->getRoundingMode() == 0x7 )
		goto label_cond_24;
	cVar1 = std::make_shared<android::icu::math::BigDecimal>(java::lang::Double::toString(cVar2));
	cVar2 = cVar1->setScale(this->getMaximumFractionDigits(), this->roundingMode)->doubleValue();
label_cond_24:
	ruleSet->format(cVar2, result, cVar0, cVar0);
	this->postProcess(result, ruleSet);
	return result->toString();

}
// .method private format(JLandroid/icu/text/NFRuleSet;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::format(long long number,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet)
{
	
	long long cVar0;
	int cVar1;
	std::shared_ptr<java::lang::StringBuilder> result;
	
	//    .param p1, "number"    # J
	//    .param p3, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	cVar0 = -0x8000000000000000L;
	cVar1 = 0x0;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v4, "result":Ljava/lang/StringBuilder;
	if ( (number > cVar0) )     
		goto label_cond_1f;
	result->append(this->getDecimalFormat()->format(cVar0));
label_goto_17:
	this->postProcess(result, ruleSet);
	return result->toString();
label_cond_1f:
	ruleSet->format(number, result, cVar1, cVar1);
	goto label_goto_17;

}
// .method private getNameListForLocale(Landroid/icu/util/ULocale;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::getNameListForLocale(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	int cVar0;
	std::shared<std::vector<std::vector<java::lang::String>>> localeNames;
	std::shared_ptr<java::lang::String> lname;
	std::shared_ptr<std::vector<java::lang::String>> names;
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	if ( !(loc) )  
		goto label_cond_3c;
	if ( !(this->ruleSetDisplayNames) )  
		goto label_cond_3c;
	localeNames = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x2);
	localeNames[cVar0] = loc->getBaseName();
	localeNames[0x1] = android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY)->getBaseName();
	//    .local v1, "localeNames":[Ljava/lang/String;
label_goto_1f:
	if ( cVar0 >= localeNames->size() )
		goto label_cond_3c;
	lname = localeNames[cVar0];
	//    .local v0, "lname":Ljava/lang/String;
label_goto_23:
	if ( lname->length() <= 0 )
		goto label_cond_39;
	names = this->ruleSetDisplayNames->get(lname);
	names->checkCast("std::vector<java::lang::String>");
	//    .local v2, "names":[Ljava/lang/String;
	if ( !(names) )  
		goto label_cond_34;
	return names;
	// 1145    .line 1052
label_cond_34:
	lname = android::icu::util::ULocale::getFallback(lname);
	goto label_goto_23;
	// 1153    .line 1046
	// 1154    .end local v2    # "names":[Ljava/lang/String;
label_cond_39:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_1f;
	// 1160    .line 1056
	// 1161    .end local v0    # "lname":Ljava/lang/String;
	// 1162    .end local v1    # "localeNames":[Ljava/lang/String;
label_cond_3c:
	return 0x0;

}
// .method private init(Ljava/lang/String;[[Ljava/lang/String;)V
void android::icu::text::RuleBasedNumberFormat::init(std::shared_ptr<java::lang::String> description,std::shared_ptr<std::vector<std::vector<java::lang::String>>> localizations)
{
	
	std::shared_ptr<java::lang::StringBuilder> descBuf;
	int numRuleSets;
	int p;
	std::shared_ptr<java::util::HashMap> cVar0;
	int publicRuleSetCount;
	std::shared<std::vector<std::vector<java::lang::String>>> ruleSetDescriptions;
	int curRuleSet;
	int start;
	std::shared_ptr<android::icu::text::NFRuleSet> ruleSet;
	std::shared_ptr<java::lang::Object> currentName;
	int i;
	std::shared<std::vector<std::vector<java::lang::String>>> publicRuleSetTemp;
	std::shared_ptr<java::lang::String> name;
	int j;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "description"    # Ljava/lang/String;
	//    .param p2, "localizations"    # [[Ljava/lang/String;
	this->initLocalizations(localizations);
	descBuf = this->stripWhitespace(description);
	//    .local v4, "descBuf":Ljava/lang/StringBuilder;
	this->lenientParseRules = this->extractSpecial(descBuf, std::make_shared<java::lang::String>(std::make_shared<char[]>("%%lenient-parse:")));
	this->postProcessRules = this->extractSpecial(descBuf, std::make_shared<java::lang::String>(std::make_shared<char[]>("%%post-process:")));
	numRuleSets = 0x1;
	//    .local v8, "numRuleSets":I
	p = 0x0;
	//    .local v9, "p":I
label_goto_2f:
	p = descBuf->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(";%")), p);
	if ( p == -0x1 )
		goto label_cond_43;
	numRuleSets = ( numRuleSets + 0x1);
	p = ( p + 0x2);
	goto label_goto_2f;
	// 1252    .line 1695
label_cond_43:
	this->ruleSets = std::make_shared<std::vector<std::vector<android::icu::text::NFRuleSet>>>(numRuleSets);
	cVar0 = std::make_shared<java::util::HashMap>(( ( numRuleSets * 0x2) + 0x1));
	this->ruleSetsMap = cVar0;
	this->defaultRuleSet = 0x0;
	publicRuleSetCount = 0x0;
	//    .local v10, "publicRuleSetCount":I
	ruleSetDescriptions = std::make_shared<std::vector<std::vector<java::lang::String>>>(numRuleSets);
	//    .local v14, "ruleSetDescriptions":[Ljava/lang/String;
	curRuleSet = 0x0;
	//    .local v2, "curRuleSet":I
	start = 0x0;
	//    .local v15, "start":I
label_goto_69:
	if ( curRuleSet >= this->ruleSets->size() )
		goto label_cond_f1;
	p = descBuf->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(";%")), start);
	if ( p >= 0 )
		goto label_cond_89;
	p = ( descBuf->length() + -0x1);
label_cond_89:
	ruleSetDescriptions[curRuleSet] = descBuf->substring(start, ( p + 0x1));
	ruleSet = std::make_shared<android::icu::text::NFRuleSet>(this, ruleSetDescriptions, curRuleSet);
	//    .local v13, "ruleSet":Landroid/icu/text/NFRuleSet;
	this->ruleSets[curRuleSet] = ruleSet;
	currentName = ruleSet->getName();
	//    .local v3, "currentName":Ljava/lang/String;
	this->ruleSetsMap->put(currentName, ruleSet);
	if ( currentName->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("%%"))) )     
		goto label_cond_eb;
	publicRuleSetCount = ( publicRuleSetCount + 0x1);
	if ( this->defaultRuleSet )     
		goto label_cond_d1;
	if ( currentName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("%spellout-numbering"))) )     
		goto label_cond_e7;
label_cond_d1:
	if ( currentName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("%digits-ordinal"))) )     
		goto label_cond_e7;
	if ( !(currentName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("%duration")))) )  
		goto label_cond_eb;
label_cond_e7:
	this->defaultRuleSet = ruleSet;
label_cond_eb:
	curRuleSet = ( curRuleSet + 0x1);
	start = ( p + 0x1);
	goto label_goto_69;
	// 1462    .line 1752
	// 1463    .end local v3    # "currentName":Ljava/lang/String;
	// 1464    .end local v13    # "ruleSet":Landroid/icu/text/NFRuleSet;
label_cond_f1:
	if ( this->defaultRuleSet )     
		goto label_cond_12b;
	i = ( this->ruleSets->size() + -0x1);
	//    .local v5, "i":I
label_goto_106:
	if ( i < 0 ) 
		goto label_cond_12b;
	if ( this->ruleSets[i]->getName()->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("%%"))) )     
		goto label_cond_16e;
	this->defaultRuleSet = this->ruleSets[i];
	//    .end local v5    # "i":I
label_cond_12b:
	if ( this->defaultRuleSet )     
		goto label_cond_14e;
	this->defaultRuleSet = this->ruleSets[( this->ruleSets->size() + -0x1)];
label_cond_14e:
	i = 0x0;
	//    .restart local v5    # "i":I
label_goto_14f:
	if ( i >= this->ruleSets->size() )
		goto label_cond_171;
	this->ruleSets[i]->parseRules(ruleSetDescriptions[i]);
	i = ( i + 0x1);
	goto label_goto_14f;
	// 1609    .line 1753
label_cond_16e:
	i = ( i + -0x1);
	goto label_goto_106;
	// 1615    .line 1774
label_cond_171:
	publicRuleSetTemp = std::make_shared<std::vector<std::vector<java::lang::String>>>(publicRuleSetCount);
	//    .local v12, "publicRuleSetTemp":[Ljava/lang/String;
	publicRuleSetCount = 0x0;
	i = ( this->ruleSets->size() + -0x1);
	publicRuleSetCount = publicRuleSetCount;
	//    .end local v10    # "publicRuleSetCount":I
	//    .local v11, "publicRuleSetCount":I
label_goto_182:
	if ( i < 0 ) 
		goto label_cond_1ad;
	if ( this->ruleSets[i]->getName()->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("%%"))) )     
		goto label_cond_21f;
	publicRuleSetCount = ( publicRuleSetCount + 0x1);
	//    .end local v11    # "publicRuleSetCount":I
	//    .restart local v10    # "publicRuleSetCount":I
	publicRuleSetTemp[publicRuleSetCount] = this->ruleSets[i]->getName();
label_goto_1a9:
	i = ( i + -0x1);
	publicRuleSetCount = publicRuleSetCount;
	//    .end local v10    # "publicRuleSetCount":I
	//    .restart local v11    # "publicRuleSetCount":I
	goto label_goto_182;
	// 1695    .line 1782
label_cond_1ad:
	if ( !(this->publicRuleSetNames) )  
		goto label_cond_21a;
	i = 0x0;
label_goto_1b6:
	if ( i >= this->publicRuleSetNames->size() )
		goto label_cond_201;
	name = this->publicRuleSetNames[i];
	//    .local v7, "name":Ljava/lang/String;
	j = 0x0;
	//    .local v6, "j":I
label_goto_1ce:
	if ( j >= publicRuleSetTemp->size() )
		goto label_cond_1e5;
	if ( !(name->equals(publicRuleSetTemp[j])) )  
		goto label_cond_1e2;
	i = ( i + 0x1);
	goto label_goto_1b6;
	// 1764    .line 1787
label_cond_1e2:
	j = ( j + 0x1);
	goto label_goto_1ce;
	// 1770    .line 1792
label_cond_1e5:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("did not find public rule set: ")))->append(name)->toString());
	// throw
	throw cVar1;
	// 1798    .line 1795
	// 1799    .end local v6    # "j":I
	// 1800    .end local v7    # "name":Ljava/lang/String;
label_cond_201:
	this->defaultRuleSet = this->findRuleSet(this->publicRuleSetNames[0x0]);
label_goto_219:
	return;
	// 1830    .line 1797
label_cond_21a:
	this->publicRuleSetNames = publicRuleSetTemp;
	goto label_goto_219;
label_cond_21f:
	publicRuleSetCount = publicRuleSetCount;
	//    .end local v11    # "publicRuleSetCount":I
	//    .restart local v10    # "publicRuleSetCount":I
	goto label_goto_1a9;

}
// .method private initCapitalizationContextInfo(Landroid/icu/util/ULocale;)V
void android::icu::text::RuleBasedNumberFormat::initCapitalizationContextInfo(std::shared_ptr<android::icu::util::ULocale> theLocale)
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	auto intVector;
	bool cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "theLocale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x1;
	cVar1 = 0x0;
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), theLocale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v2, "rb":Landroid/icu/impl/ICUResourceBundle;
	try {
	//label_try_start_b:
	//    .local v3, "rdb":Landroid/icu/impl/ICUResourceBundle;
	intVector = rb->getWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("contextTransforms/number-spellout")))->getIntVector();
	//    .local v1, "intVector":[I
	if ( intVector->size() <  0x2 )
		goto label_cond_29;
	if ( !(intVector[0x0]) )  
		goto label_cond_2a;
	cVar2 = cVar0;
label_goto_20:
	this->capitalizationForListOrMenu = cVar2;
	if ( !(intVector[0x1]) )  
		goto label_cond_2c;
label_goto_27:
	this->capitalizationForStandAlone = cVar0;
	//label_try_end_29:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2e;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_b .. :try_end_29} :catch_2e
	//    .end local v1    # "intVector":[I
	//    .end local v3    # "rdb":Landroid/icu/impl/ICUResourceBundle;
label_cond_29:
label_goto_29:
	return;
	// 1918    .restart local v1    # "intVector":[I
	// 1919    .restart local v3    # "rdb":Landroid/icu/impl/ICUResourceBundle;
label_cond_2a:
	cVar2 = cVar1;
	goto label_goto_20;
label_cond_2c:
	cVar0 = cVar1;
	goto label_goto_27;
	// 1932    .line 1840
	// 1933    .end local v1    # "intVector":[I
	// 1934    .end local v3    # "rdb":Landroid/icu/impl/ICUResourceBundle;
label_catch_2e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/util/MissingResourceException;
	goto label_goto_29;

}
// .method private initLocalizations([[Ljava/lang/String;)V
void android::icu::text::RuleBasedNumberFormat::initLocalizations(std::shared_ptr<std::vector<std::vector<java::lang::String>>> localizations)
{
	
	int cVar0;
	std::shared_ptr<std::vector<java::lang::String>> cVar1;
	std::shared_ptr<java::util::HashMap> m;
	int i;
	std::shared_ptr<java::lang::Object> data;
	std::shared<std::vector<std::vector<java::lang::String>>> names;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	
	//    .param p1, "localizations"    # [[Ljava/lang/String;
	cVar0 = 0x0;
	if ( !(localizations) )  
		goto label_cond_6c;
	cVar1 = localizations[cVar0]->clone();
	cVar1->checkCast("std::vector<java::lang::String>");
	this->publicRuleSetNames = cVar1;
	m = std::make_shared<java::util::HashMap>();
	//    .local v3, "m":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;"
	i = 0x1;
	//    .local v1, "i":I
label_goto_13:
	if ( i >= localizations->size() )
		goto label_cond_64;
	data = localizations[i];
	//    .local v0, "data":[Ljava/lang/String;
	//    .local v2, "loc":Ljava/lang/String;
	names = std::make_shared<std::vector<std::vector<java::lang::String>>>(( data->size() + -0x1));
	//    .local v4, "names":[Ljava/lang/String;
	if ( names->size() == this->publicRuleSetNames->size() )
		goto label_cond_59;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("public name length: ")))->append(this->publicRuleSetNames->size())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" != localized names[")))->append(i)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] length: ")))->append(names->size())->toString());
	// throw
	throw cVar2;
	// 2060    .line 1818
label_cond_59:
	java::lang::System::arraycopy(data, 0x1, names, cVar0, names->size());
	m->put(data[cVar0], names);
	i = ( i + 0x1);
	goto label_goto_13;
	// 2076    .line 1822
	// 2077    .end local v0    # "data":[Ljava/lang/String;
	// 2078    .end local v2    # "loc":Ljava/lang/String;
	// 2079    .end local v4    # "names":[Ljava/lang/String;
label_cond_64:
	if ( m->isEmpty() )     
		goto label_cond_6c;
	this->ruleSetDisplayNames = m;
	//    .end local v1    # "i":I
	//    .end local v3    # "m":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;[Ljava/lang/String;>;"
label_cond_6c:
	return;

}
// .method private postProcess(Ljava/lang/StringBuilder;Landroid/icu/text/NFRuleSet;)V
void android::icu::text::RuleBasedNumberFormat::postProcess(std::shared_ptr<java::lang::StringBuilder> result,std::shared_ptr<android::icu::text::NFRuleSet> ruleSet)
{
	
	std::shared_ptr<android::icu::text::RBNFPostProcessor> cVar0;
	int ix;
	std::shared_ptr<java::lang::String> ppClassName;
	std::shared_ptr<java::lang::Exception> e;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<android::icu::text::RBNFPostProcessor> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "result"    # Ljava/lang/StringBuilder;
	//    .param p2, "ruleSet"    # Landroid/icu/text/NFRuleSet;
	cVar0 = 0x0;
	if ( !(this->postProcessRules) )  
		goto label_cond_3e;
	if ( this->postProcessor )     
		goto label_cond_39;
	ix = this->postProcessRules->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
	//    .local v2, "ix":I
	if ( ix != -0x1 )
		goto label_cond_1b;
label_cond_1b:
	ppClassName = this->postProcessRules->substring(0x0, ix)->trim();
	//    .local v3, "ppClassName":Ljava/lang/String;
	try {
	//label_try_start_26:
	//    .local v0, "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar1 = java::lang::Class::forName(ppClassName)->newInstance();
	cVar1->checkCast("android::icu::text::RBNFPostProcessor");
	this->postProcessor = cVar1;
	this->postProcessor->init(this, this->postProcessRules);
	//label_try_end_39:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3f;
	}
	//    .catch Ljava/lang/Exception; {:try_start_26 .. :try_end_39} :catch_3f
	//    .end local v0    # "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .end local v2    # "ix":I
	//    .end local v3    # "ppClassName":Ljava/lang/String;
label_cond_39:
	this->postProcessor->process(result, ruleSet);
label_cond_3e:
	return;
	// 2190    .line 1973
	// 2191    .restart local v2    # "ix":I
	// 2192    .restart local v3    # "ppClassName":Ljava/lang/String;
label_catch_3f:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	if ( !(android::icu::text::RuleBasedNumberFormat::DEBUG) )  
		goto label_cond_7f;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("could not locate ")))->append(ppClassName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", error ")))->append(e->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(e->getMessage())->toString());
label_cond_7f:
	this->postProcessor = cVar0;
	this->postProcessRules = cVar0;
	return;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::RuleBasedNumberFormat::readObject(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	std::shared_ptr<android::icu::text::RuleBasedNumberFormat> temp;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::util::ULocale> loc;
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2277        value = {
	// 2278            Ljava/io/IOException;
	// 2279        }
	// 2280    .end annotation
	//    .local v0, "description":Ljava/lang/String;
	try {
	//label_try_start_4:
	loc = in->readObject();
	loc->checkCast("android::icu::util::ULocale");
	//label_try_end_a:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3a;
	}
	//    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_a} :catch_3a
	//    .local v3, "loc":Landroid/icu/util/ULocale;
label_goto_a:
	try {
	//label_try_start_a:
	this->roundingMode = in->readInt();
	//label_try_end_10:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_42;
	}
	//    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_10} :catch_42
label_goto_10:
	temp = std::make_shared<android::icu::text::RuleBasedNumberFormat>(in->readUTF(), loc);
	//    .local v4, "temp":Landroid/icu/text/RuleBasedNumberFormat;
	this->ruleSets = temp->ruleSets;
	this->ruleSetsMap = temp->ruleSetsMap;
	this->defaultRuleSet = temp->defaultRuleSet;
	this->publicRuleSetNames = temp->publicRuleSetNames;
	this->decimalFormatSymbols = temp->decimalFormatSymbols;
	this->decimalFormat = temp->decimalFormat;
	this->locale = temp->locale;
	this->defaultInfinityRule = temp->defaultInfinityRule;
	this->defaultNaNRule = temp->defaultNaNRule;
	return;
	// 2366    .line 987
	// 2367    .end local v3    # "loc":Landroid/icu/util/ULocale;
	// 2368    .end local v4    # "temp":Landroid/icu/text/RuleBasedNumberFormat;
label_catch_3a:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	//    .restart local v3    # "loc":Landroid/icu/util/ULocale;
	goto label_goto_a;
	// 2383    .line 992
	// 2384    .end local v1    # "e":Ljava/lang/Exception;
label_catch_42:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ignored":Ljava/lang/Exception;
	goto label_goto_10;

}
// .method private stripWhitespace(Ljava/lang/String;)Ljava/lang/StringBuilder;
std::shared_ptr<java::lang::StringBuilder> android::icu::text::RuleBasedNumberFormat::stripWhitespace(std::shared_ptr<java::lang::String> description)
{
	
	int cVar0;
	std::shared_ptr<java::lang::StringBuilder> result;
	int descriptionLength;
	int start;
	int p;
	
	//    .param p1, "description"    # Ljava/lang/String;
	cVar0 = 0x3b;
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "result":Ljava/lang/StringBuilder;
	descriptionLength = description->length();
	//    .local v0, "descriptionLength":I
	start = 0x0;
	//    .local v3, "start":I
label_goto_c:
	if ( start >= descriptionLength )
		goto label_cond_36;
label_goto_e:
	if ( start >= descriptionLength )
		goto label_cond_1d;
	if ( !(android::icu::impl::PatternProps::isWhiteSpace(description->charAt(start))) )  
		goto label_cond_1d;
	start = ( start + 0x1);
	goto label_goto_e;
	// 2440    .line 1869
label_cond_1d:
	if ( start >= descriptionLength )
		goto label_cond_28;
	if ( description->charAt(start) != cVar0 )
		goto label_cond_28;
	start = ( start + 0x1);
	goto label_goto_c;
	// 2456    .line 1876
label_cond_28:
	p = description->indexOf(cVar0, start);
	//    .local v1, "p":I
	if ( p != -0x1 )
		goto label_cond_37;
	result->append(description->substring(start));
	//    .end local v1    # "p":I
label_cond_36:
	return result;
	// 2480    .line 1883
	// 2481    .restart local v1    # "p":I
label_cond_37:
	if ( p >= descriptionLength )
		goto label_cond_36;
	result->append(description->substring(start, ( p + 0x1)));
	start = ( p + 0x1);
	goto label_goto_c;

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void android::icu::text::RuleBasedNumberFormat::writeObject(std::shared_ptr<java::io::ObjectOutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2504        value = {
	// 2505            Ljava/io/IOException;
	// 2506        }
	// 2507    .end annotation
	out->writeUTF(this->toString());
	out->writeObject(this->locale);
	out->writeInt(this->roundingMode);
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::RuleBasedNumberFormat::clone()
{
	
	return this->clone();

}
// .method createPluralFormat(Landroid/icu/text/PluralRules$PluralType;Ljava/lang/String;)Landroid/icu/text/PluralFormat;
std::shared_ptr<android::icu::text::PluralFormat> android::icu::text::RuleBasedNumberFormat::createPluralFormat(std::shared_ptr<android::icu::text::PluralRules_S_PluralType> pluralType,std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<android::icu::text::PluralFormat> cVar0;
	
	//    .param p1, "pluralType"    # Landroid/icu/text/PluralRules$PluralType;
	//    .param p2, "pattern"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::PluralFormat>(this->locale, pluralType, pattern, this->getDecimalFormat());
	return cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::RuleBasedNumberFormat::equals(std::shared_ptr<java::lang::Object> that)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::text::RuleBasedNumberFormat> that2;
	int i;
	
	//    .param p1, "that"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( that->instanceOf("android::icu::text::RuleBasedNumberFormat") )     
		goto label_cond_6;
	return cVar0;
label_cond_6:
	that2 = that;
	that2->checkCast("android::icu::text::RuleBasedNumberFormat");
	//    .local v1, "that2":Landroid/icu/text/RuleBasedNumberFormat;
	if ( !(this->locale->equals(that2->locale)) )  
		goto label_cond_19;
	if ( this->lenientParse == that2->lenientParse )
		goto label_cond_1a;
label_cond_19:
	return cVar0;
	// 2608    .line 917
label_cond_1a:
	if ( this->ruleSets->size() == that2->ruleSets->size() )
		goto label_cond_23;
	return cVar0;
	// 2623    .line 920
label_cond_23:
	i = 0x0;
	//    .local v0, "i":I
label_goto_24:
	if ( i >= this->ruleSets->size() )
		goto label_cond_3b;
	if ( this->ruleSets[i]->equals(that2->ruleSets[i]) )     
		goto label_cond_38;
	return cVar0;
	// 2653    .line 920
label_cond_38:
	i = ( i + 0x1);
	goto label_goto_24;
	// 2659    .line 926
label_cond_3b:
	return 0x1;

}
// .method findRuleSet(Ljava/lang/String;)Landroid/icu/text/NFRuleSet;
std::shared_ptr<android::icu::text::NFRuleSet> android::icu::text::RuleBasedNumberFormat::findRuleSet(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::NFRuleSet> result;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2670        value = {
	// 2671            Ljava/lang/IllegalArgumentException;
	// 2672        }
	// 2673    .end annotation
	result = this->ruleSetsMap->get(name);
	result->checkCast("android::icu::text::NFRuleSet");
	//    .local v0, "result":Landroid/icu/text/NFRuleSet;
	if ( result )     
		goto label_cond_24;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("No rule set named ")))->append(name)->toString());
	// throw
	throw cVar0;
	// 2714    .line 2018
label_cond_24:
	return result;

}
// .method public format(DLjava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::format(double number,std::shared_ptr<java::lang::String> ruleSet)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "number"    # D
	//    .param p3, "ruleSet"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2724        value = {
	// 2725            Ljava/lang/IllegalArgumentException;
	// 2726        }
	// 2727    .end annotation
	if ( !(ruleSet->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("%%")))) )  
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t use internal rule set")));
	// throw
	throw cVar0;
	// 2748    .line 1133
label_cond_12:
	return this->adjustForContext(this->format(number, this->findRuleSet(ruleSet)));

}
// .method public format(JLjava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::format(long long number,std::shared_ptr<java::lang::String> ruleSet)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "number"    # J
	//    .param p3, "ruleSet"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2770        value = {
	// 2771            Ljava/lang/IllegalArgumentException;
	// 2772        }
	// 2773    .end annotation
	if ( !(ruleSet->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("%%")))) )  
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Can\'t use internal rule set")));
	// throw
	throw cVar0;
	// 2794    .line 1151
label_cond_12:
	return this->adjustForContext(this->format(number, this->findRuleSet(ruleSet)));

}
// .method public format(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::RuleBasedNumberFormat::format(double number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> ignore)
{
	
	//    .param p1, "number"    # D
	//    .param p3, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p4, "ignore"    # Ljava/text/FieldPosition;
	if ( toAppendTo->length() )     
		goto label_cond_14;
	toAppendTo->append(this->adjustForContext(this->format(number, this->defaultRuleSet)));
label_goto_13:
	return toAppendTo;
	// 2842    .line 1174
label_cond_14:
	toAppendTo->append(this->format(number, this->defaultRuleSet));
	goto label_goto_13;

}
// .method public format(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::RuleBasedNumberFormat::format(long long number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> ignore)
{
	
	//    .param p1, "number"    # J
	//    .param p3, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p4, "ignore"    # Ljava/text/FieldPosition;
	if ( toAppendTo->length() )     
		goto label_cond_14;
	toAppendTo->append(this->adjustForContext(this->format(number, this->defaultRuleSet)));
label_goto_13:
	return toAppendTo;
	// 2886    .line 1202
label_cond_14:
	toAppendTo->append(this->format(number, this->defaultRuleSet));
	goto label_goto_13;

}
// .method public format(Landroid/icu/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::RuleBasedNumberFormat::format(std::shared_ptr<android::icu::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	//    .param p1, "number"    # Landroid/icu/math/BigDecimal;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	if ( android::icu::text::RuleBasedNumberFormat::MIN_VALUE->compareTo(number) >= 0 )
		goto label_cond_10;
	if ( android::icu::text::RuleBasedNumberFormat::MAX_VALUE->compareTo(number) > 0 ) 
		goto label_cond_19;
label_cond_10:
	return this->getDecimalFormat()->format(number, toAppendTo, pos);
	// 2935    .line 1248
label_cond_19:
	if ( number->scale() )     
		goto label_cond_28;
	return this->format(number->longValue(), toAppendTo, pos);
	// 2954    .line 1251
label_cond_28:
	return this->format(number->doubleValue(), toAppendTo, pos);

}
// .method public format(Ljava/math/BigDecimal;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::RuleBasedNumberFormat::format(std::shared_ptr<java::math::BigDecimal> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<android::icu::math::BigDecimal> cVar0;
	
	//    .param p1, "number"    # Ljava/math/BigDecimal;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	cVar0 = std::make_shared<android::icu::math::BigDecimal>(number);
	return this->format(cVar0, toAppendTo, pos);

}
// .method public format(Ljava/math/BigInteger;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::RuleBasedNumberFormat::format(std::shared_ptr<java::math::BigInteger> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<android::icu::math::BigDecimal> cVar0;
	
	//    .param p1, "number"    # Ljava/math/BigInteger;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	cVar0 = std::make_shared<android::icu::math::BigDecimal>(number);
	return this->format(cVar0, toAppendTo, pos);

}
// .method getDecimalFormat()Landroid/icu/text/DecimalFormat;
std::shared_ptr<android::icu::text::DecimalFormat> android::icu::text::RuleBasedNumberFormat::getDecimalFormat()
{
	
	std::shared_ptr<android::icu::text::DecimalFormat> cVar0;
	
	if ( this->decimalFormat )     
		goto label_cond_16;
	//    .local v0, "pattern":Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::text::DecimalFormat>(android::icu::text::RuleBasedNumberFormat::getPattern(this->locale, 0x0), this->getDecimalFormatSymbols());
	this->decimalFormat = cVar0;
	//    .end local v0    # "pattern":Ljava/lang/String;
label_cond_16:
	return this->decimalFormat;

}
// .method getDecimalFormatSymbols()Landroid/icu/text/DecimalFormatSymbols;
std::shared_ptr<android::icu::text::DecimalFormatSymbols> android::icu::text::RuleBasedNumberFormat::getDecimalFormatSymbols()
{
	
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar0;
	
	if ( this->decimalFormatSymbols )     
		goto label_cond_d;
	cVar0 = std::make_shared<android::icu::text::DecimalFormatSymbols>(this->locale);
	this->decimalFormatSymbols = cVar0;
label_cond_d:
	return this->decimalFormatSymbols;

}
// .method getDefaultInfinityRule()Landroid/icu/text/NFRule;
std::shared_ptr<android::icu::text::NFRule> android::icu::text::RuleBasedNumberFormat::getDefaultInfinityRule()
{
	
	std::shared_ptr<android::icu::text::NFRule> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	if ( this->defaultInfinityRule )     
		goto label_cond_27;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::text::NFRule>(this, cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Inf: ")))->append(this->getDecimalFormatSymbols()->getInfinity())->toString());
	this->defaultInfinityRule = cVar0;
label_cond_27:
	return this->defaultInfinityRule;

}
// .method getDefaultNaNRule()Landroid/icu/text/NFRule;
std::shared_ptr<android::icu::text::NFRule> android::icu::text::RuleBasedNumberFormat::getDefaultNaNRule()
{
	
	std::shared_ptr<android::icu::text::NFRule> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	if ( this->defaultNaNRule )     
		goto label_cond_27;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::text::NFRule>(this, cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NaN: ")))->append(this->getDecimalFormatSymbols()->getNaN())->toString());
	this->defaultNaNRule = cVar0;
label_cond_27:
	return this->defaultNaNRule;

}
// .method getDefaultRuleSet()Landroid/icu/text/NFRuleSet;
std::shared_ptr<android::icu::text::NFRuleSet> android::icu::text::RuleBasedNumberFormat::getDefaultRuleSet()
{
	
	return this->defaultRuleSet;

}
// .method public getDefaultRuleSetName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::getDefaultRuleSetName()
{
	
	if ( !(this->defaultRuleSet) )  
		goto label_cond_13;
	if ( !(this->defaultRuleSet->isPublic()) )  
		goto label_cond_13;
	return this->defaultRuleSet->getName();
	// 3202    .line 1440
label_cond_13:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));

}
// .method getLenientScanner()Landroid/icu/text/RbnfLenientScanner;
std::shared_ptr<android::icu::text::RbnfLenientScanner> android::icu::text::RuleBasedNumberFormat::getLenientScanner()
{
	
	std::shared_ptr<android::icu::text::RbnfLenientScannerProvider> provider;
	
	if ( !(this->lenientParse) )  
		goto label_cond_14;
	provider = this->getLenientScannerProvider();
	//    .local v0, "provider":Landroid/icu/text/RbnfLenientScannerProvider;
	if ( !(provider) )  
		goto label_cond_14;
	return provider->get(this->locale, this->lenientParseRules);
	// 3240    .line 1556
	// 3241    .end local v0    # "provider":Landroid/icu/text/RbnfLenientScannerProvider;
label_cond_14:
	return 0x0;

}
// .method public getLenientScannerProvider()Landroid/icu/text/RbnfLenientScannerProvider;
std::shared_ptr<android::icu::text::RbnfLenientScannerProvider> android::icu::text::RuleBasedNumberFormat::getLenientScannerProvider()
{
	
	std::shared_ptr<android::icu::text::RbnfLenientScannerProvider> provider;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( this->scannerProvider )     
		goto label_cond_21;
	if ( !(this->lenientParse) )  
		goto label_cond_21;
	if ( !(( this->lookedForScanner ^ 0x1)) )  
		goto label_cond_21;
	try {
	//label_try_start_f:
	this->lookedForScanner = 0x1;
	//    .local v0, "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	provider = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.impl.text.RbnfScannerProviderImpl")))->newInstance();
	provider->checkCast("android::icu::text::RbnfLenientScannerProvider");
	//    .local v2, "provider":Landroid/icu/text/RbnfLenientScannerProvider;
	this->setLenientScannerProvider(provider);
	//label_try_end_21:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Ljava/lang/Exception; {:try_start_f .. :try_end_21} :catch_24
	//    .end local v0    # "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .end local v2    # "provider":Landroid/icu/text/RbnfLenientScannerProvider;
label_cond_21:
label_goto_21:
	return this->scannerProvider;
	// 3301    .line 1385
label_catch_24:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	goto label_goto_21;

}
// .method public getRoundingMode()I
int android::icu::text::RuleBasedNumberFormat::getRoundingMode()
{
	
	return this->roundingMode;

}
// .method public getRuleSetDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::getRuleSetDisplayName(std::shared_ptr<java::lang::String> ruleSetName)
{
	
	//    .param p1, "ruleSetName"    # Ljava/lang/String;
	return this->getRuleSetDisplayName(ruleSetName, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getRuleSetDisplayName(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::getRuleSetDisplayName(std::shared_ptr<java::lang::String> ruleSetName,std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<std::vector<java::lang::String>> rsnames;
	int ix;
	auto names;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "ruleSetName"    # Ljava/lang/String;
	//    .param p2, "loc"    # Landroid/icu/util/ULocale;
	rsnames = this->publicRuleSetNames;
	//    .local v2, "rsnames":[Ljava/lang/String;
	ix = 0x0;
	//    .local v0, "ix":I
label_goto_3:
	if ( ix >= rsnames->size() )
		goto label_cond_22;
	if ( !(rsnames[ix]->equals(ruleSetName)) )  
		goto label_cond_1f;
	names = this->getNameListForLocale(loc);
	//    .local v1, "names":[Ljava/lang/String;
	if ( !(names) )  
		goto label_cond_17;
	return names[ix];
	// 3380    .line 1106
label_cond_17:
	return rsnames[ix]->substring(0x1);
	// 3392    .line 1100
	// 3393    .end local v1    # "names":[Ljava/lang/String;
label_cond_1f:
	ix = ( ix + 0x1);
	goto label_goto_3;
	// 3399    .line 1109
label_cond_22:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unrecognized rule set name: ")))->append(ruleSetName)->toString());
	// throw
	throw cVar0;

}
// .method public getRuleSetDisplayNameLocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::RuleBasedNumberFormat::getRuleSetDisplayNameLocales()
{
	
	std::shared_ptr<java::util::Set> s;
	std::shared_ptr<std::vector<java::lang::String>> locales;
	std::shared<std::vector<std::vector<android::icu::util::ULocale>>> result;
	int i;
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	if ( !(this->ruleSetDisplayNames) )  
		goto label_cond_30;
	s = this->ruleSetDisplayNames->keySet();
	//    .local v3, "s":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	locales = s->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(s->size()));
	locales->checkCast("std::vector<java::lang::String>");
	//    .local v1, "locales":[Ljava/lang/String;
	java::util::Arrays::sort(locales, java::lang::String::CASE_INSENSITIVE_ORDER);
	result = std::make_shared<std::vector<std::vector<android::icu::util::ULocale>>>(locales->size());
	//    .local v2, "result":[Landroid/icu/util/ULocale;
	i = 0x0;
	//    .local v0, "i":I
label_goto_20:
	if ( i >= locales->size() )
		goto label_cond_2f;
	cVar0 = std::make_shared<android::icu::util::ULocale>(locales[i]);
	result[i] = cVar0;
	i = ( i + 0x1);
	goto label_goto_20;
	// 3493    .line 1038
label_cond_2f:
	return result;
	// 3497    .line 1040
	// 3498    .end local v0    # "i":I
	// 3499    .end local v1    # "locales":[Ljava/lang/String;
	// 3500    .end local v2    # "result":[Landroid/icu/util/ULocale;
	// 3501    .end local v3    # "s":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_30:
	return 0x0;

}
// .method public getRuleSetDisplayNames()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::getRuleSetDisplayNames()
{
	
	return this->getRuleSetDisplayNames(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getRuleSetDisplayNames(Landroid/icu/util/ULocale;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::getRuleSetDisplayNames(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared_ptr<java::lang::Object> names;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	std::shared_ptr<std::vector<java::lang::String>> names;
	int i;
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	names = this->getNameListForLocale(loc);
	//    .local v1, "names":[Ljava/lang/String;
	if ( !(names) )  
		goto label_cond_d;
	cVar0 = names->clone();
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;
	// 3547    .line 1073
label_cond_d:
	names = this->getRuleSetNames();
	i = 0x0;
	//    .local v0, "i":I
label_goto_12:
	if ( i >= names->size() )
		goto label_cond_21;
	names[i] = names[i]->substring(0x1);
	i = ( i + 0x1);
	goto label_goto_12;
	// 3578    .line 1077
label_cond_21:
	return names;

}
// .method public getRuleSetNames()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::getRuleSetNames()
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	cVar0 = this->publicRuleSetNames->clone();
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method public hashCode()I
int android::icu::text::RuleBasedNumberFormat::hashCode()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3602    .end annotation
	return this->hashCode();

}
// .method public lenientParseEnabled()Z
bool android::icu::text::RuleBasedNumberFormat::lenientParseEnabled()
{
	
	return this->lenientParse;

}
// .method public parse(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::RuleBasedNumberFormat::parse(std::shared_ptr<java::lang::String> text,std::shared_ptr<java::text::ParsePosition> parsePosition)
{
	
	int cVar0;
	std::shared_ptr<java::lang::String> workingText;
	std::shared_ptr<java::text::ParsePosition> workingPos;
	std::shared_ptr<java::text::ParsePosition> highWaterMark;
	int i;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	cVar0 = 0x0;
	workingText = text->substring(parsePosition->getIndex());
	//    .local v5, "workingText":Ljava/lang/String;
	workingPos = std::make_shared<java::text::ParsePosition>(cVar0);
	//    .local v4, "workingPos":Ljava/text/ParsePosition;
	0x0;
	//    .local v3, "tempResult":Ljava/lang/Number;
	//    .local v2, "result":Ljava/lang/Number;
	highWaterMark = std::make_shared<java::text::ParsePosition>(workingPos->getIndex());
	//    .local v0, "highWaterMark":Ljava/text/ParsePosition;
	i = ( this->ruleSets->size() + -0x1);
	//    .end local v3    # "tempResult":Ljava/lang/Number;
	//    .local v1, "i":I
label_goto_1f:
	if ( i < 0 ) 
		goto label_cond_63;
	if ( !(this->ruleSets[i]->isPublic()) )  
		goto label_cond_37;
	if ( !(( this->ruleSets[i]->isParseable() ^ 0x1)) )  
		goto label_cond_3a;
label_cond_37:
label_goto_37:
	i = ( i + -0x1);
	goto label_goto_1f;
	// 3707    .line 1297
label_cond_3a:
	//    .local v3, "tempResult":Ljava/lang/Number;
	if ( workingPos->getIndex() <= highWaterMark->getIndex() )
		goto label_cond_59;
	highWaterMark->setIndex(workingPos->getIndex());
label_cond_59:
	if ( highWaterMark->getIndex() != workingText->length() )
		goto label_cond_70;
	//    .end local v3    # "tempResult":Ljava/lang/Number;
label_cond_63:
	parsePosition->setIndex((parsePosition->getIndex() +  highWaterMark->getIndex()));
	return android::icu::text::NFRule::ZERO;
	// 3771    .line 1315
	// 3772    .restart local v3    # "tempResult":Ljava/lang/Number;
label_cond_70:
	workingPos->setIndex(cVar0);
	goto label_goto_37;

}
// .method public setContext(Landroid/icu/text/DisplayContext;)V
void android::icu::text::RuleBasedNumberFormat::setContext(std::shared_ptr<android::icu::text::DisplayContext> context)
{
	
	//    .param p1, "context"    # Landroid/icu/text/DisplayContext;
	this->setContext(context);
	if ( this->capitalizationInfoIsSet )     
		goto label_cond_17;
	if ( context == android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU )
		goto label_cond_f;
	if ( context != android::icu::text::DisplayContext::CAPITALIZATION_FOR_STANDALONE )
		goto label_cond_17;
label_cond_f:
	this->initCapitalizationContextInfo(this->locale);
	this->capitalizationInfoIsSet = 0x1;
label_cond_17:
	if ( this->capitalizationBrkIter )     
		goto label_cond_37;
	if ( context == android::icu::text::DisplayContext::CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE )
		goto label_cond_2f;
	if ( context != android::icu::text::DisplayContext::CAPITALIZATION_FOR_UI_LIST_OR_MENU )
		goto label_cond_27;
	if ( this->capitalizationForListOrMenu )     
		goto label_cond_2f;
label_cond_27:
	if ( context != android::icu::text::DisplayContext::CAPITALIZATION_FOR_STANDALONE )
		goto label_cond_37;
	if ( !(this->capitalizationForStandAlone) )  
		goto label_cond_37;
label_cond_2f:
	this->capitalizationBrkIter = android::icu::text::BreakIterator::getSentenceInstance(this->locale);
label_cond_37:
	return;

}
// .method public setDecimalFormatSymbols(Landroid/icu/text/DecimalFormatSymbols;)V
void android::icu::text::RuleBasedNumberFormat::setDecimalFormatSymbols(std::shared_ptr<android::icu::text::DecimalFormatSymbols> newSymbols)
{
	
	std::shared_ptr<android::icu::text::NFRule> cVar0;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar1;
	std::shared_ptr<std::vector<android::icu::text::NFRuleSet>> cVar2;
	int cVar3;
	
	//    .param p1, "newSymbols"    # Landroid/icu/text/DecimalFormatSymbols;
	cVar0 = 0x0;
	if ( !(newSymbols) )  
		goto label_cond_38;
	cVar1 = newSymbols->clone();
	cVar1->checkCast("android::icu::text::DecimalFormatSymbols");
	this->decimalFormatSymbols = cVar1;
	if ( !(this->decimalFormat) )  
		goto label_cond_16;
	this->decimalFormat->setDecimalFormatSymbols(this->decimalFormatSymbols);
label_cond_16:
	if ( !(this->defaultInfinityRule) )  
		goto label_cond_1f;
	this->defaultInfinityRule = cVar0;
	this->getDefaultInfinityRule();
label_cond_1f:
	if ( !(this->defaultNaNRule) )  
		goto label_cond_28;
	this->defaultNaNRule = cVar0;
	this->getDefaultNaNRule();
label_cond_28:
	cVar2 = this->ruleSets;
	cVar3 = 0x0;
label_goto_2c:
	if ( cVar3 >= cVar2->size() )
		goto label_cond_38;
	//    .local v0, "ruleSet":Landroid/icu/text/NFRuleSet;
	cVar2[cVar3]->setDecimalFormatSymbols(this->decimalFormatSymbols);
	cVar3 = ( cVar3 + 0x1);
	goto label_goto_2c;
	// 3937    .line 1470
	// 3938    .end local v0    # "ruleSet":Landroid/icu/text/NFRuleSet;
label_cond_38:
	return;

}
// .method public setDefaultRuleSet(Ljava/lang/String;)V
void android::icu::text::RuleBasedNumberFormat::setDefaultRuleSet(std::shared_ptr<java::lang::String> ruleSetName)
{
	
	int n;
	std::shared_ptr<java::lang::String> currentName;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "ruleSetName"    # Ljava/lang/String;
	if ( ruleSetName )     
		goto label_cond_5f;
	if ( this->publicRuleSetNames->size() <= 0 )
		goto label_cond_14;
	this->defaultRuleSet = this->findRuleSet(this->publicRuleSetNames[0x0]);
label_cond_13:
label_goto_13:
	return;
	// 3978    .line 1404
label_cond_14:
	this->defaultRuleSet = 0x0;
	//    .local v1, "n":I
label_cond_19:
	n = ( n + -0x1);
	if ( n < 0 ) 
		goto label_cond_47;
	currentName = this->ruleSets[n]->getName();
	//    .local v0, "currentName":Ljava/lang/String;
	if ( currentName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("%spellout-numbering"))) )     
		goto label_cond_40;
	if ( currentName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("%digits-ordinal"))) )     
		goto label_cond_40;
	if ( !(currentName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("%duration")))) )  
		goto label_cond_19;
label_cond_40:
	this->defaultRuleSet = this->ruleSets[n];
	return;
	// 4044    .line 1417
	// 4045    .end local v0    # "currentName":Ljava/lang/String;
label_cond_47:
label_cond_4a:
	n = ( n + -0x1);
	if ( n < 0 ) 
		goto label_cond_13;
	if ( !(this->ruleSets[n]->isPublic()) )  
		goto label_cond_4a;
	this->defaultRuleSet = this->ruleSets[n];
	goto label_goto_13;
	// 4077    .line 1425
	// 4078    .end local v1    # "n":I
label_cond_5f:
	if ( !(ruleSetName->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("%%")))) )  
		goto label_cond_82;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("cannot use private rule set: ")))->append(ruleSetName)->toString());
	// throw
	throw cVar0;
	// 4113    .line 1428
label_cond_82:
	this->defaultRuleSet = this->findRuleSet(ruleSetName);
	goto label_goto_13;

}
// .method public setLenientParseMode(Z)V
void android::icu::text::RuleBasedNumberFormat::setLenientParseMode(bool enabled)
{
	
	//    .param p1, "enabled"    # Z
	this->lenientParse = enabled;
	return;

}
// .method public setLenientScannerProvider(Landroid/icu/text/RbnfLenientScannerProvider;)V
void android::icu::text::RuleBasedNumberFormat::setLenientScannerProvider(std::shared_ptr<android::icu::text::RbnfLenientScannerProvider> scannerProvider)
{
	
	//    .param p1, "scannerProvider"    # Landroid/icu/text/RbnfLenientScannerProvider;
	this->scannerProvider = scannerProvider;
	return;

}
// .method public setRoundingMode(I)V
void android::icu::text::RuleBasedNumberFormat::setRoundingMode(int roundingMode)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "roundingMode"    # I
	if ( roundingMode < 0 ) 
		goto label_cond_5;
	if ( roundingMode <= 0x7 )
		goto label_cond_1f;
label_cond_5:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid rounding mode: ")))->append(roundingMode)->toString());
	// throw
	throw cVar0;
	// 4186    .line 1525
label_cond_1f:
	this->roundingMode = roundingMode;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::RuleBasedNumberFormat::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<std::vector<android::icu::text::NFRuleSet>> cVar0;
	int cVar1;
	
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "result":Ljava/lang/StringBuilder;
	cVar0 = this->ruleSets;
	cVar1 = 0x0;
label_goto_9:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_17;
	//    .local v1, "ruleSet":Landroid/icu/text/NFRuleSet;
	result->append(cVar0[cVar1]->toString());
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_9;
	// 4229    .line 958
	// 4230    .end local v1    # "ruleSet":Landroid/icu/text/NFRuleSet;
label_cond_17:
	return result->toString();

}


