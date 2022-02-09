// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Collator.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.coll.CollationData.h"
#include "android.icu.impl.coll.CollationRoot.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.Collator_S_ASCII.h"
#include "android.icu.text.Collator_S_CollatorFactory.h"
#include "android.icu.text.Collator_S_KeywordsSink.h"
#include "android.icu.text.Collator_S_ServiceShim.h"
#include "android.icu.text.Collator.h"
#include "android.icu.text.RuleBasedCollator.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.ICUException.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.LinkedList.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"

static android::icu::text::Collator::BASE = std::make_shared<java::lang::String>("android/icu/impl/data/icudt58b/coll");
static android::icu::text::Collator::CANONICAL_DECOMPOSITION = 0x11;
static android::icu::text::Collator::DEBUG;
static android::icu::text::Collator::FULL_DECOMPOSITION = 0xf;
static android::icu::text::Collator::IDENTICAL = 0xf;
static android::icu::text::Collator::KEYWORDS;
static android::icu::text::Collator::NO_DECOMPOSITION = 0x10;
static android::icu::text::Collator::PRIMARY = 0x0;
static android::icu::text::Collator::QUATERNARY = 0x3;
static android::icu::text::Collator::RESOURCE = std::make_shared<java::lang::String>("collations");
static android::icu::text::Collator::SECONDARY = 0x1;
static android::icu::text::Collator::TERTIARY = 0x2;
static android::icu::text::Collator::shim;
// .method static constructor <clinit>()V
void android::icu::text::Collator::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x1);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("collation"));
	android::icu::text::Collator::KEYWORDS = cVar0;
	android::icu::text::Collator::DEBUG = android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("collator")));
	return;

}
// .method protected constructor <init>()V
android::icu::text::Collator::Collator()
{
	
	// 102    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private checkNotFrozen()V
void android::icu::text::Collator::checkNotFrozen()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	if ( !(this->isFrozen()) )  
		goto label_cond_f;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attempt to modify frozen Collator")));
	// throw
	throw cVar0;
	// 128    .line 327
label_cond_f:
	return;

}
// .method public static getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::text::Collator::getAvailableLocales()
{
	
	if ( android::icu::text::Collator::shim )     
		goto label_cond_e;
	return android::icu::impl::ICUResourceBundle::getAvailableLocales(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/coll")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
	// 154    .line 889
label_cond_e:
	return android::icu::text::Collator::shim->getAvailableLocales();

}
// .method public static final getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::Collator::getAvailableULocales()
{
	
	if ( android::icu::text::Collator::shim )     
		goto label_cond_e;
	return android::icu::impl::ICUResourceBundle::getAvailableULocales(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/coll")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
	// 186    .line 904
label_cond_e:
	return android::icu::text::Collator::shim->getAvailableULocales();

}
// .method public static getDisplayName(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Collator::getDisplayName(std::shared_ptr<android::icu::util::ULocale> objectLocale)
{
	
	//    .param p0, "objectLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::Collator::getShim({const[class].FS-Param})->getDisplayName(objectLocale, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public static getDisplayName(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Collator::getDisplayName(std::shared_ptr<android::icu::util::ULocale> objectLocale,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p0, "objectLocale"    # Landroid/icu/util/ULocale;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::Collator::getShim({const[class].FS-Param})->getDisplayName(objectLocale, displayLocale);

}
// .method public static getDisplayName(Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Collator::getDisplayName(std::shared_ptr<java::util::Locale> objectLocale)
{
	
	//    .param p0, "objectLocale"    # Ljava/util/Locale;
	return android::icu::text::Collator::getShim({const[class].FS-Param})->getDisplayName(android::icu::util::ULocale::forLocale(objectLocale), android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public static getDisplayName(Ljava/util/Locale;Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Collator::getDisplayName(std::shared_ptr<java::util::Locale> objectLocale,std::shared_ptr<java::util::Locale> displayLocale)
{
	
	//    .param p0, "objectLocale"    # Ljava/util/Locale;
	//    .param p1, "displayLocale"    # Ljava/util/Locale;
	return android::icu::text::Collator::getShim({const[class].FS-Param})->getDisplayName(android::icu::util::ULocale::forLocale(objectLocale), android::icu::util::ULocale::forLocale(displayLocale));

}
// .method public static getEquivalentReorderCodes(I)[I
int android::icu::text::Collator::getEquivalentReorderCodes(int reorderCode)
{
	
	//    .param p0, "reorderCode"    # I
	//    .local v0, "baseData":Landroid/icu/impl/coll/CollationData;
	return android::icu::impl::coll::CollationRoot::getData({const[class].FS-Param})->getEquivalentScripts(reorderCode);

}
// .method public static final getFunctionalEquivalent(Ljava/lang/String;Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::Collator::getFunctionalEquivalent(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> locID)
{
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	//    .param p1, "locID"    # Landroid/icu/util/ULocale;
	return android::icu::text::Collator::getFunctionalEquivalent(keyword, locID, 0x0);

}
// .method public static final getFunctionalEquivalent(Ljava/lang/String;Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::Collator::getFunctionalEquivalent(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> locID,std::shared_ptr<bool[]> isAvailable)
{
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	//    .param p1, "locID"    # Landroid/icu/util/ULocale;
	//    .param p2, "isAvailable"    # [Z
	return android::icu::impl::ICUResourceBundle::getFunctionalEquivalent(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/coll")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER, std::make_shared<java::lang::String>(std::make_shared<char[]>("collations")), keyword, locID, isAvailable, 0x1);

}
// .method public static final getInstance()Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::Collator::getInstance()
{
	
	return android::icu::text::Collator::getInstance(android::icu::util::ULocale::getDefault({const[class].FS-Param}));

}
// .method public static final getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::Collator::getInstance(std::shared_ptr<android::icu::util::ULocale> cVar1)
{
	
	std::shared_ptr<android::icu::text::RuleBasedCollator> cVar2;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	std::shared_ptr<android::icu::text::RuleBasedCollator> coll;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	cVar2 = 0x0;
	if ( cVar1 )     
		goto label_cond_7;
	cVar1 = android::icu::util::ULocale::getDefault({const[class].FS-Param});
label_cond_7:
	coll = android::icu::text::Collator::getShim({const[class].FS-Param})->getInstance(cVar1);
	//    .local v0, "coll":Landroid/icu/text/Collator;
	if ( cVar1->getName()->equals(cVar1->getBaseName()) )     
		goto label_cond_27;
	if ( !(coll->instanceOf("android::icu::text::RuleBasedCollator")) )  
		goto label_cond_24;
	cVar2 = coll;
	cVar2->checkCast("android::icu::text::RuleBasedCollator");
label_cond_24:
	android::icu::text::Collator::setAttributesFromKeywords(cVar1, coll, cVar2);
label_cond_27:
	return coll;

}
// .method public static final getInstance(Ljava/util/Locale;)Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::Collator::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	return android::icu::text::Collator::getInstance(android::icu::util::ULocale::forLocale(locale));

}
// .method private static final varargs getIntValue(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)I
int android::icu::text::Collator::getIntValue(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> s,std::shared_ptr<std::vector<java::lang::String>> values)
{
	
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "values"    # [Ljava/lang/String;
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= values->size() )
		goto label_cond_10;
	if ( !(android::icu::text::Collator_S_ASCII::equalIgnoreCase(s, values[i])) )  
		goto label_cond_d;
	return i;
	// 479    .line 633
label_cond_d:
	i = ( i + 0x1);
	goto label_goto_1;
	// 485    .line 638
label_cond_10:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("illegal locale keyword=value: ")))->append(keyword)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")))->append(s)->toString());
	// throw
	throw cVar0;

}
// .method public static final getKeywordValues(Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Collator::getKeywordValues(std::shared_ptr<java::lang::String> keyword)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	if ( keyword->equals(android::icu::text::Collator::KEYWORDS[0x0]) )     
		goto label_cond_25;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid keyword: ")))->append(keyword)->toString());
	// throw
	throw cVar0;
	// 565    .line 947
label_cond_25:
	return android::icu::impl::ICUResourceBundle::getKeywordValues(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/coll")), std::make_shared<java::lang::String>(std::make_shared<char[]>("collations")));

}
// .method public static final getKeywordValuesForLocale(Ljava/lang/String;Landroid/icu/util/ULocale;Z)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Collator::getKeywordValuesForLocale(std::shared_ptr<java::lang::String> key,std::shared_ptr<android::icu::util::ULocale> locale,bool commonlyUsed)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	std::shared_ptr<android::icu::text::Collator_S_KeywordsSink> sink;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .param p0, "key"    # Ljava/lang/String;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "commonlyUsed"    # Z
	bundle = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/coll")), locale);
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "bundle":Landroid/icu/impl/ICUResourceBundle;
	sink = std::make_shared<android::icu::text::Collator_S_KeywordsSink>(0x0);
	//    .local v1, "sink":Landroid/icu/text/Collator$KeywordsSink;
	bundle->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("collations")), sink);
	cVar0 = sink->values->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(sink->values->size()));
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method public static final getKeywords()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Collator::getKeywords()
{
	
	return android::icu::text::Collator::KEYWORDS;

}
// .method private static final getReorderCode(Ljava/lang/String;Ljava/lang/String;)I
int android::icu::text::Collator::getReorderCode(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> s)
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	//    .param p1, "s"    # Ljava/lang/String;
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x5);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("space"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("punct"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("symbol"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar0[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("digit"));
	return ( android::icu::text::Collator::getIntValue(keyword, s, cVar0) + 0x1000);

}
// .method private static getShim()Landroid/icu/text/Collator$ServiceShim;
std::shared_ptr<android::icu::text::Collator_S_ServiceShim> android::icu::text::Collator::getShim()
{
	
	std::shared_ptr<java::lang::Exception> e;
	std::shared_ptr<android::icu::util::ICUException> cVar1;
	std::shared_ptr<android::icu::text::Collator_S_ServiceShim> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( android::icu::text::Collator::shim )     
		goto label_cond_13;
	try {
	//label_try_start_4:
	//    .local v0, "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.text.CollatorServiceShim")))->newInstance();
	cVar0->checkCast("android::icu::text::Collator_S_ServiceShim");
	android::icu::text::Collator::shim = cVar0;
	//label_try_end_13:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_4 .. :try_end_13} :catch_24
	//    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_13} :catch_16
label_cond_13:
	return android::icu::text::Collator::shim;
	// 727    .line 587
label_catch_16:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	if ( !(android::icu::text::Collator::DEBUG) )  
		goto label_cond_1e;
	e->printStackTrace();
label_cond_1e:
	cVar1 = std::make_shared<android::icu::util::ICUException>(e);
	// throw
	throw cVar1;
	// 748    .line 582
	// 749    .end local v1    # "e":Ljava/lang/Exception;
label_catch_24:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/util/MissingResourceException;
	// throw
	throw;

}
// .method private static final getYesOrNo(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::text::Collator::getYesOrNo(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> s)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	//    .param p1, "s"    # Ljava/lang/String;
	if ( !(android::icu::text::Collator_S_ASCII::equalIgnoreCase(s, std::make_shared<java::lang::String>(std::make_shared<char[]>("yes")))) )  
		goto label_cond_b;
	return 0x1;
	// 778    .line 626
label_cond_b:
	if ( !(android::icu::text::Collator_S_ASCII::equalIgnoreCase(s, std::make_shared<java::lang::String>(std::make_shared<char[]>("no")))) )  
		goto label_cond_16;
	return 0x0;
	// 793    .line 629
label_cond_16:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("illegal locale keyword=value: ")))->append(keyword)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")))->append(s)->toString());
	// throw
	throw cVar0;

}
// .method public static final registerFactory(Landroid/icu/text/Collator$CollatorFactory;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::Collator::registerFactory(std::shared_ptr<android::icu::text::Collator_S_CollatorFactory> factory)
{
	
	//    .param p0, "factory"    # Landroid/icu/text/Collator$CollatorFactory;
	return android::icu::text::Collator::getShim({const[class].FS-Param})->registerFactory(factory);

}
// .method public static final registerInstance(Landroid/icu/text/Collator;Landroid/icu/util/ULocale;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::Collator::registerInstance(std::shared_ptr<android::icu::text::Collator> collator,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "collator"    # Landroid/icu/text/Collator;
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::Collator::getShim({const[class].FS-Param})->registerInstance(collator, locale);

}
// .method private static setAttributesFromKeywords(Landroid/icu/util/ULocale;Landroid/icu/text/Collator;Landroid/icu/text/RuleBasedCollator;)V
void android::icu::text::Collator::setAttributesFromKeywords(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<android::icu::text::Collator> coll,std::shared_ptr<android::icu::text::RuleBasedCollator> rbc)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar1;
	std::shared_ptr<java::lang::String> value;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar2;
	int strength;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar3;
	int cf;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar4;
	bool cVar5;
	int cVar6;
	std::shared<std::vector<int[]>> codes;
	int codesLength;
	int scriptNameStart;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	int limit;
	std::shared_ptr<java::lang::String> scriptName;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar16;
	std::shared<std::vector<int[]>> args;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar15;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar13;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar11;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar10;
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar9;
	
	//    .param p0, "loc"    # Landroid/icu/util/ULocale;
	//    .param p1, "coll"    # Landroid/icu/text/Collator;
	//    .param p2, "rbc"    # Landroid/icu/text/RuleBasedCollator;
	//    .local v11, "value":Ljava/lang/String;
	if ( !(loc->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("colHiraganaQuaternary")))) )  
		goto label_cond_14;
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("locale keyword kh/colHiraganaQuaternary")));
	// throw
	throw cVar0;
	// 894    .line 664
label_cond_14:
	if ( !(loc->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("variableTop")))) )  
		goto label_cond_28;
	cVar1 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("locale keyword vt/variableTop")));
	// throw
	throw cVar1;
	// 916    .line 669
label_cond_28:
	value = loc->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("colStrength")));
	if ( !(value) )  
		goto label_cond_63;
	cVar2 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x5);
	cVar2[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("primary"));
	cVar2[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("secondary"));
	cVar2[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("tertiary"));
	cVar2[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("quaternary"));
	cVar2[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("identical"));
	strength = android::icu::text::Collator::getIntValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("colStrength")), value, cVar2);
	//    .local v10, "strength":I
	if ( strength >  0x3 )
		goto label_cond_159;
	//    .end local v10    # "strength":I
label_goto_5e:
	coll->setStrength(strength);
label_cond_63:
	value = loc->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("colBackwards")));
	if ( !(value) )  
		goto label_cond_7c;
	if ( !(rbc) )  
		goto label_cond_15d;
	rbc->setFrenchCollation(android::icu::text::Collator::getYesOrNo(std::make_shared<java::lang::String>(std::make_shared<char[]>("colBackwards")), value));
label_cond_7c:
	value = loc->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("colCaseLevel")));
	if ( !(value) )  
		goto label_cond_95;
	if ( !(rbc) )  
		goto label_cond_166;
	rbc->setCaseLevel(android::icu::text::Collator::getYesOrNo(std::make_shared<java::lang::String>(std::make_shared<char[]>("colCaseLevel")), value));
label_cond_95:
	value = loc->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("colCaseFirst")));
	if ( !(value) )  
		goto label_cond_cc;
	if ( !(rbc) )  
		goto label_cond_182;
	cVar3 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x3);
	cVar3[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("no"));
	cVar3[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("lower"));
	cVar3[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("upper"));
	cf = android::icu::text::Collator::getIntValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("colCaseFirst")), value, cVar3);
	//    .local v2, "cf":I
	if ( cf )     
		goto label_cond_16f;
	rbc->setLowerCaseFirst(0x0);
	rbc->setUpperCaseFirst(0x0);
	//    .end local v2    # "cf":I
label_cond_cc:
label_goto_cc:
	value = loc->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("colAlternate")));
	if ( !(value) )  
		goto label_cond_f7;
	if ( !(rbc) )  
		goto label_cond_18e;
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x2);
	cVar4[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("non-ignorable"));
	cVar4[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("shifted"));
	if ( !(android::icu::text::Collator::getIntValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("colAlternate")), value, cVar4)) )  
		goto label_cond_18b;
	cVar5 = 0x1;
label_goto_f2:
	rbc->setAlternateHandlingShifted(cVar5);
label_cond_f7:
	value = loc->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("colNormalization")));
	if ( !(value) )  
		goto label_cond_112;
	if ( !(android::icu::text::Collator::getYesOrNo(std::make_shared<java::lang::String>(std::make_shared<char[]>("colNormalization")), value)) )  
		goto label_cond_197;
	cVar6 = 0x11;
label_goto_10d:
	coll->setDecomposition(cVar6);
label_cond_112:
	value = loc->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("colNumeric")));
	if ( !(value) )  
		goto label_cond_12b;
	if ( !(rbc) )  
		goto label_cond_19b;
	rbc->setNumericCollation(android::icu::text::Collator::getYesOrNo(std::make_shared<java::lang::String>(std::make_shared<char[]>("colNumeric")), value));
label_cond_12b:
	value = loc->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("colReorder")));
	if ( !(value) )  
		goto label_cond_1f5;
	codes = std::make_shared<std::vector<int[]>>(0xb4);
	//    .local v4, "codes":[I
	codesLength = 0x0;
	//    .local v5, "codesLength":I
	scriptNameStart = 0x0;
	//    .local v9, "scriptNameStart":I
label_goto_13c:
	if ( codesLength != codes->size() )
		goto label_cond_1a4;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	cVar7 = std::make_shared<java::lang::IllegalArgumentException>(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("too many script codes for colReorder locale keyword: ")))->append(value)->toString());
	// throw
	throw cVar7;
	// 1270    .line 674
	// 1271    .end local v4    # "codes":[I
	// 1272    .end local v5    # "codesLength":I
	// 1273    .end local v9    # "scriptNameStart":I
	// 1274    .restart local v10    # "strength":I
label_cond_159:
	strength = 0xf;
	goto label_goto_5e;
	// 1280    .line 681
	// 1281    .end local v10    # "strength":I
label_cond_15d:
	cVar9 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("locale keyword kb/colBackwards only settable for RuleBasedCollator")));
	// throw
	throw cVar9;
	// 1293    .line 690
label_cond_166:
	cVar10 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("locale keyword kb/colBackwards only settable for RuleBasedCollator")));
	// throw
	throw cVar10;
	// 1305    .line 701
	// 1306    .restart local v2    # "cf":I
label_cond_16f:
	if ( cf != 0x1 )
		goto label_cond_17a;
	rbc->setLowerCaseFirst(0x1);
	goto label_goto_cc;
	// 1321    .line 704
label_cond_17a:
	rbc->setUpperCaseFirst(0x1);
	goto label_goto_cc;
	// 1331    .line 707
	// 1332    .end local v2    # "cf":I
label_cond_182:
	cVar11 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("locale keyword kf/colCaseFirst only settable for RuleBasedCollator")));
	// throw
	throw cVar11;
	// 1344    .line 715
label_cond_18b:
	cVar5 = 0x0;
	goto label_goto_f2;
	// 1350    .line 717
label_cond_18e:
	cVar13 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("locale keyword ka/colAlternate only settable for RuleBasedCollator")));
	// throw
	throw cVar13;
	// 1362    .line 724
label_cond_197:
	cVar6 = 0x10;
	goto label_goto_10d;
	// 1368    .line 731
label_cond_19b:
	cVar15 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("locale keyword kn/colNumeric only settable for RuleBasedCollator")));
	// throw
	throw cVar15;
	// 1380    .line 745
	// 1381    .restart local v4    # "codes":[I
	// 1382    .restart local v5    # "codesLength":I
	// 1383    .restart local v9    # "scriptNameStart":I
label_cond_1a4:
	limit = scriptNameStart;
	//    .local v7, "limit":I
label_goto_1a5:
	if ( limit >= value->length() )
		goto label_cond_1b6;
	if ( value->charAt(limit) == 0x2d )
		goto label_cond_1b6;
	limit = ( limit + 0x1);
	goto label_goto_1a5;
	// 1408    .line 747
label_cond_1b6:
	scriptName = value->substring(scriptNameStart, limit);
	//    .local v8, "scriptName":Ljava/lang/String;
	if ( scriptName->length() != 0x4 )
		goto label_cond_1dc;
	//    .local v3, "code":I
label_goto_1c7:
	codesLength = ( codesLength + 0x1);
	//    .end local v5    # "codesLength":I
	//    .local v6, "codesLength":I
	codes[codesLength] = code;
	if ( limit != value->length() )
		goto label_cond_1e4;
	if ( codesLength )     
		goto label_cond_1e9;
	cVar16 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("no script codes for colReorder locale keyword")));
	// throw
	throw cVar16;
	// 1459    .line 753
	// 1460    .end local v3    # "code":I
	// 1461    .end local v6    # "codesLength":I
	// 1462    .restart local v5    # "codesLength":I
label_cond_1dc:
	//    .restart local v3    # "code":I
	goto label_goto_1c7;
	// 1473    .line 757
	// 1474    .end local v5    # "codesLength":I
	// 1475    .restart local v6    # "codesLength":I
label_cond_1e4:
	scriptNameStart = ( limit + 0x1);
	codesLength = codesLength;
	//    .end local v6    # "codesLength":I
	//    .restart local v5    # "codesLength":I
	goto label_goto_13c;
	// 1485    .line 762
	// 1486    .end local v5    # "codesLength":I
	// 1487    .restart local v6    # "codesLength":I
label_cond_1e9:
	args = std::make_shared<std::vector<int[]>>(codesLength);
	//    .local v1, "args":[I
	java::lang::System::arraycopy(codes, 0x0, args, 0x0, codesLength);
	coll->setReorderCodes(args);
	//    .end local v1    # "args":[I
	//    .end local v3    # "code":I
	//    .end local v4    # "codes":[I
	//    .end local v6    # "codesLength":I
	//    .end local v7    # "limit":I
	//    .end local v8    # "scriptName":Ljava/lang/String;
	//    .end local v9    # "scriptNameStart":I
label_cond_1f5:
	value = loc->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("kv")));
	if ( !(value) )  
		goto label_cond_20c;
	coll->setMaxVariable(android::icu::text::Collator::getReorderCode(std::make_shared<java::lang::String>(std::make_shared<char[]>("kv")), value));
label_cond_20c:
	return;

}
// .method public static final unregister(Ljava/lang/Object;)Z
bool android::icu::text::Collator::unregister(std::shared_ptr<java::lang::Object> registryKey)
{
	
	//    .param p0, "registryKey"    # Ljava/lang/Object;
	if ( android::icu::text::Collator::shim )     
		goto label_cond_6;
	return 0x0;
	// 1555    .line 873
label_cond_6:
	return android::icu::text::Collator::shim->unregister(registryKey);

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::Collator::clone()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1571        value = {
	// 1572            Ljava/lang/CloneNotSupportedException;
	// 1573        }
	// 1574    .end annotation
	return this->clone();

}
// .method public cloneAsThawed()Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::Collator::cloneAsThawed()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Needs to be implemented by the subclass.")));
	// throw
	throw cVar0;

}
// .method public compare(Ljava/lang/Object;Ljava/lang/Object;)I
int android::icu::text::Collator::compare(std::shared_ptr<java::lang::Object> source,std::shared_ptr<java::lang::Object> target)
{
	
	//    .param p1, "source"    # Ljava/lang/Object;
	//    .param p2, "target"    # Ljava/lang/Object;
	source->checkCast("java::lang::CharSequence");
	//    .end local p1    # "source":Ljava/lang/Object;
	target->checkCast("java::lang::CharSequence");
	//    .end local p2    # "target":Ljava/lang/Object;
	return this->doCompare(source, target);

}
// .method protected doCompare(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)I
int android::icu::text::Collator::doCompare(std::shared_ptr<java::lang::CharSequence> left,std::shared_ptr<java::lang::CharSequence> right)
{
	
	//    .param p1, "left"    # Ljava/lang/CharSequence;
	//    .param p2, "right"    # Ljava/lang/CharSequence;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1639    .end annotation
	return this->compare(left->toString(), right->toString());

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::Collator::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	if ( this == obj )
		goto label_cond_10;
	if ( !(obj) )  
		goto label_cond_11;
	if ( this->getClass() != obj->getClass() )
		goto label_cond_11;
label_cond_10:
label_goto_10:
	return cVar0;
label_cond_11:
	cVar0 = 0x0;
	goto label_goto_10;

}
// .method public equals(Ljava/lang/String;Ljava/lang/String;)Z
bool android::icu::text::Collator::equals(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::lang::String> target)
{
	
	bool cVar1;
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "target"    # Ljava/lang/String;
	cVar1 = 0x0;
	if ( this->compare(source, target) )     
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method public freeze()Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::Collator::freeze()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Needs to be implemented by the subclass.")));
	// throw
	throw cVar0;

}
// .method public getDecomposition()I
int android::icu::text::Collator::getDecomposition()
{
	
	return 0x10;

}
// .method public getLocale(Landroid/icu/util/ULocale$Type;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::Collator::getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type)
{
	
	//    .param p1, "type"    # Landroid/icu/util/ULocale$Type;
	return android::icu::util::ULocale::ROOT;

}
// .method public getMaxVariable()I
int android::icu::text::Collator::getMaxVariable()
{
	
	return 0x1001;

}
// .method public getReorderCodes()[I
int android::icu::text::Collator::getReorderCodes()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Needs to be implemented by the subclass.")));
	// throw
	throw cVar0;

}
// .method public getStrength()I
int android::icu::text::Collator::getStrength()
{
	
	return 0x2;

}
// .method public getTailoredSet()Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::text::Collator::getTailoredSet()
{
	
	std::shared_ptr<android::icu::text::UnicodeSet> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::UnicodeSet>(0x0, 0x10ffff);
	return cVar0;

}
// .method public hashCode()I
int android::icu::text::Collator::hashCode()
{
	
	return 0x0;

}
// .method public isFrozen()Z
bool android::icu::text::Collator::isFrozen()
{
	
	return 0x0;

}
// .method public setDecomposition(I)V
void android::icu::text::Collator::setDecomposition(int decomposition)
{
	
	//    .param p1, "decomposition"    # I
	this->checkNotFrozen();
	return;

}
// .method setLocale(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)V
void android::icu::text::Collator::setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual)
{
	
	//    .param p1, "valid"    # Landroid/icu/util/ULocale;
	//    .param p2, "actual"    # Landroid/icu/util/ULocale;
	return;

}
// .method public setMaxVariable(I)Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::Collator::setMaxVariable(int group)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "group"    # I
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Needs to be implemented by the subclass.")));
	// throw
	throw cVar0;

}
// .method public varargs setReorderCodes([I)V
void android::icu::text::Collator::setReorderCodes(std::shared_ptr<int[]> order)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "order"    # [I
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Needs to be implemented by the subclass.")));
	// throw
	throw cVar0;

}
// .method public setStrength(I)V
void android::icu::text::Collator::setStrength(int newStrength)
{
	
	//    .param p1, "newStrength"    # I
	this->checkNotFrozen();
	return;

}
// .method public setStrength2(I)Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::Collator::setStrength2(int newStrength)
{
	
	//    .param p1, "newStrength"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1913    .end annotation
	this->setStrength(newStrength);
	return this;

}
// .method public abstract setVariableTop(Ljava/lang/String;)I
int android::icu::text::Collator::setVariableTop(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1925    .end annotation

}
// .method public abstract setVariableTop(I)V
void android::icu::text::Collator::setVariableTop(int var0)
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1930    .end annotation

}


