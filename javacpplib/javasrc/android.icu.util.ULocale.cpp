// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\ULocale.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUResourceTableAccess.h"
#include "android.icu.impl.LocaleIDParser.h"
#include "android.icu.impl.LocaleIDs.h"
#include "android.icu.impl.LocaleUtility.h"
#include "android.icu.impl.SoftCache.h"
#include "android.icu.impl.locale.AsciiUtil.h"
#include "android.icu.impl.locale.BaseLocale.h"
#include "android.icu.impl.locale.Extension.h"
#include "android.icu.impl.locale.InternalLocaleBuilder.h"
#include "android.icu.impl.locale.KeyTypeData.h"
#include "android.icu.impl.locale.LanguageTag.h"
#include "android.icu.impl.locale.LocaleExtensions.h"
#include "android.icu.impl.locale.LocaleSyntaxException.h"
#include "android.icu.impl.locale.ParseStatus.h"
#include "android.icu.impl.locale.UnicodeLocaleExtension.h"
#include "android.icu.lang.UScript.h"
#include "android.icu.text.LocaleDisplayNames_S_DialectHandling.h"
#include "android.icu.text.LocaleDisplayNames.h"
#include "android.icu.util.Output.h"
#include "android.icu.util.ULocale_S_1.h"
#include "android.icu.util.ULocale_S_1ULocaleAcceptLanguageQ.h"
#include "android.icu.util.ULocale_S_2.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_JDKLocaleHelper.h"
#include "android.icu.util.ULocale_S_Minimize.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Character.h"
#include "java.lang.Double.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.NumberFormatException.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.text.ParseException.h"
#include "java.util.Collection.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Locale.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"

static android::icu::util::ULocale::ACTUAL_LOCALE = nullptr;
static android::icu::util::ULocale::CACHE;
static android::icu::util::ULocale::CANADA;
static android::icu::util::ULocale::CANADA_FRENCH;
static android::icu::util::ULocale::CANONICALIZE_MAP = nullptr;
static android::icu::util::ULocale::CHINA;
static android::icu::util::ULocale::CHINESE;
static android::icu::util::ULocale::EMPTY_LOCALE;
static android::icu::util::ULocale::EMPTY_STRING = std::make_shared<java::lang::String>("");
static android::icu::util::ULocale::ENGLISH;
static android::icu::util::ULocale::FRANCE;
static android::icu::util::ULocale::FRENCH;
static android::icu::util::ULocale::GERMAN;
static android::icu::util::ULocale::GERMANY;
static android::icu::util::ULocale::ITALIAN;
static android::icu::util::ULocale::ITALY;
static android::icu::util::ULocale::JAPAN;
static android::icu::util::ULocale::JAPANESE;
static android::icu::util::ULocale::KOREA;
static android::icu::util::ULocale::KOREAN;
static android::icu::util::ULocale::LANG_DIR_STRING = std::make_shared<java::lang::String>("root-en-es-pt-zh-ja-ko-de-fr-it-ar+he+fa+ru-nl-pl-th-tr-");
static android::icu::util::ULocale::LOCALE_ATTRIBUTE_KEY = std::make_shared<java::lang::String>("attribute");
static android::icu::util::ULocale::PRC;
static android::icu::util::ULocale::PRIVATE_USE_EXTENSION = 'x';
static android::icu::util::ULocale::ROOT;
static android::icu::util::ULocale::SIMPLIFIED_CHINESE;
static android::icu::util::ULocale::TAIWAN;
static android::icu::util::ULocale::TRADITIONAL_CHINESE;
static android::icu::util::ULocale::UK;
static android::icu::util::ULocale::UNDEFINED_LANGUAGE = std::make_shared<java::lang::String>("und");
static android::icu::util::ULocale::UNDEFINED_REGION = std::make_shared<java::lang::String>("ZZ");
static android::icu::util::ULocale::UNDEFINED_SCRIPT = std::make_shared<java::lang::String>("Zzzz");
static android::icu::util::ULocale::UNDERSCORE = '_';
static android::icu::util::ULocale::UNICODE_LOCALE_EXTENSION = 'u';
static android::icu::util::ULocale::US;
static android::icu::util::ULocale::VALID_LOCALE = nullptr;
static android::icu::util::ULocale::defaultCategoryLocales = nullptr;
static android::icu::util::ULocale::defaultCategoryULocales = nullptr;
static android::icu::util::ULocale::defaultLocale = nullptr;
static android::icu::util::ULocale::defaultULocale = nullptr;
static android::icu::util::ULocale::nameCache = nullptr;
static android::icu::util::ULocale::serialVersionUID = 0x338ef66846d00be1L;
static android::icu::util::ULocale::variantsToKeywords;
// .method static synthetic -wrap0(Landroid/icu/util/ULocale;)Landroid/icu/impl/locale/BaseLocale;
std::shared_ptr<android::icu::impl::locale::BaseLocale> android::icu::util::ULocale::_wrap0(std::shared_ptr<android::icu::util::ULocale> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/ULocale;
	return _this->base();

}
// .method static synthetic -wrap1(Landroid/icu/util/ULocale;)Landroid/icu/impl/locale/LocaleExtensions;
std::shared_ptr<android::icu::impl::locale::LocaleExtensions> android::icu::util::ULocale::_wrap1(std::shared_ptr<android::icu::util::ULocale> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/util/ULocale;
	return _this->extensions();

}
// .method static synthetic -wrap2(Landroid/icu/impl/locale/BaseLocale;Landroid/icu/impl/locale/LocaleExtensions;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::_wrap2(std::shared_ptr<android::icu::impl::locale::BaseLocale> base,std::shared_ptr<android::icu::impl::locale::LocaleExtensions> exts)
{
	
	//    .param p0, "base"    # Landroid/icu/impl/locale/BaseLocale;
	//    .param p1, "exts"    # Landroid/icu/impl/locale/LocaleExtensions;
	return android::icu::util::ULocale::getInstance(base, exts);

}
// .method static constructor <clinit>()V
void android::icu::util::ULocale::static_cinit()
{
	
	int cVar0;
	std::shared_ptr<android::icu::util::ULocale_S_Type> cVar1;
	std::shared_ptr<android::icu::util::ULocale_S_1> cVar2;
	std::shared_ptr<android::icu::util::ULocale> cVar3;
	std::shared_ptr<android::icu::util::ULocale> cVar4;
	std::shared_ptr<android::icu::util::ULocale> cVar5;
	std::shared_ptr<android::icu::util::ULocale> cVar6;
	std::shared_ptr<android::icu::util::ULocale> cVar7;
	std::shared_ptr<android::icu::util::ULocale> cVar8;
	std::shared_ptr<android::icu::util::ULocale> cVar9;
	std::shared_ptr<android::icu::util::ULocale> cVar10;
	std::shared_ptr<android::icu::util::ULocale> cVar11;
	std::shared_ptr<android::icu::util::ULocale> cVar12;
	std::shared_ptr<android::icu::util::ULocale> cVar13;
	std::shared_ptr<android::icu::util::ULocale> cVar14;
	std::shared_ptr<android::icu::util::ULocale> cVar15;
	std::shared_ptr<android::icu::util::ULocale> cVar16;
	std::shared_ptr<android::icu::util::ULocale> cVar17;
	std::shared_ptr<android::icu::util::ULocale> cVar18;
	std::shared_ptr<android::icu::util::ULocale> cVar19;
	std::shared_ptr<android::icu::util::ULocale> cVar20;
	std::shared_ptr<android::icu::util::ULocale> cVar21;
	std::shared_ptr<android::icu::util::ULocale> cVar22;
	std::shared_ptr<java::util::Locale> cVar23;
	std::shared_ptr<android::icu::util::ULocale> cVar24;
	std::shared_ptr<android::icu::util::ULocale_S_2> cVar25;
	std::shared_ptr<java::lang::Object> cVar26;
	std::shared_ptr<android::icu::util::ULocale_S_Category> cat;
	int idx;
	std::shared_ptr<android::icu::util::ULocale_S_Type> cVar30;
	std::shared_ptr<android::icu::util::ULocale_S_Type> cVar31;
	std::shared_ptr<java::lang::String> userScript;
	std::shared_ptr<android::icu::impl::locale::BaseLocale> base;
	std::shared_ptr<java::lang::Object> cVar28;
	
	cVar0 = 0x0;
	cVar1 = 0x0;
	cVar2 = std::make_shared<android::icu::util::ULocale_S_1>();
	android::icu::util::ULocale::nameCache = cVar2;
	cVar3 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("en")), java::util::Locale::ENGLISH);
	android::icu::util::ULocale::ENGLISH = cVar3;
	cVar4 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("fr")), java::util::Locale::FRENCH);
	android::icu::util::ULocale::FRENCH = cVar4;
	cVar5 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("de")), java::util::Locale::GERMAN);
	android::icu::util::ULocale::GERMAN = cVar5;
	cVar6 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("it")), java::util::Locale::ITALIAN);
	android::icu::util::ULocale::ITALIAN = cVar6;
	cVar7 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ja")), java::util::Locale::JAPANESE);
	android::icu::util::ULocale::JAPANESE = cVar7;
	cVar8 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ko")), java::util::Locale::KOREAN);
	android::icu::util::ULocale::KOREAN = cVar8;
	cVar9 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("zh")), java::util::Locale::CHINESE);
	android::icu::util::ULocale::CHINESE = cVar9;
	cVar10 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_Hans")));
	android::icu::util::ULocale::SIMPLIFIED_CHINESE = cVar10;
	cVar11 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_Hant")));
	android::icu::util::ULocale::TRADITIONAL_CHINESE = cVar11;
	cVar12 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("fr_FR")), java::util::Locale::FRANCE);
	android::icu::util::ULocale::FRANCE = cVar12;
	cVar13 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("de_DE")), java::util::Locale::GERMANY);
	android::icu::util::ULocale::GERMANY = cVar13;
	cVar14 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("it_IT")), java::util::Locale::ITALY);
	android::icu::util::ULocale::ITALY = cVar14;
	cVar15 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ja_JP")), java::util::Locale::JAPAN);
	android::icu::util::ULocale::JAPAN = cVar15;
	cVar16 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ko_KR")), java::util::Locale::KOREA);
	android::icu::util::ULocale::KOREA = cVar16;
	cVar17 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_Hans_CN")));
	android::icu::util::ULocale::CHINA = cVar17;
	android::icu::util::ULocale::PRC = android::icu::util::ULocale::CHINA;
	cVar18 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_Hant_TW")));
	android::icu::util::ULocale::TAIWAN = cVar18;
	cVar19 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("en_GB")), java::util::Locale::UK);
	android::icu::util::ULocale::UK = cVar19;
	cVar20 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("en_US")), java::util::Locale::US);
	android::icu::util::ULocale::US = cVar20;
	cVar21 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("en_CA")), java::util::Locale::CANADA);
	android::icu::util::ULocale::CANADA = cVar21;
	cVar22 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("fr_CA")), java::util::Locale::CANADA_FRENCH);
	android::icu::util::ULocale::CANADA_FRENCH = cVar22;
	cVar23 = std::make_shared<java::util::Locale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	android::icu::util::ULocale::EMPTY_LOCALE = cVar23;
	cVar24 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), android::icu::util::ULocale::EMPTY_LOCALE);
	android::icu::util::ULocale::ROOT = cVar24;
	cVar25 = std::make_shared<android::icu::util::ULocale_S_2>();
	android::icu::util::ULocale::CACHE = cVar25;
	android::icu::util::ULocale::defaultLocale = java::util::Locale::getDefault({const[class].FS-Param});
	android::icu::util::ULocale::defaultCategoryLocales = std::make_shared<std::vector<std::vector<java::util::Locale>>>(android::icu::util::ULocale_S_Category::values({const[class].FS-Param})->size());
	android::icu::util::ULocale::defaultCategoryULocales = std::make_shared<std::vector<std::vector<android::icu::util::ULocale>>>(android::icu::util::ULocale_S_Category::values({const[class].FS-Param})->size());
	android::icu::util::ULocale::defaultULocale = android::icu::util::ULocale::forLocale(android::icu::util::ULocale::defaultLocale);
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::hasLocaleCategories({const[class].FS-Param})) )  
		goto label_cond_15f;
	cVar26 = android::icu::util::ULocale_S_Category::values({const[class].FS-Param});
	//    .local v1, "cat":Landroid/icu/util/ULocale$Category;
	//    .local v2, "idx":I
label_goto_140:
	if ( cVar0 >= cVar26->size() )
		goto label_cond_1b4;
	cat = cVar26[cVar0];
	//    .end local v2    # "idx":I
	idx = cat->ordinal();
	//    .restart local v2    # "idx":I
	android::icu::util::ULocale::defaultCategoryLocales[idx] = android::icu::util::ULocale_S_JDKLocaleHelper::getDefault(cat);
	android::icu::util::ULocale::defaultCategoryULocales[idx] = android::icu::util::ULocale::forLocale(android::icu::util::ULocale::defaultCategoryLocales[idx]);
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_140;
	// 547    .line 552
	// 548    .end local v1    # "cat":Landroid/icu/util/ULocale$Category;
	// 549    .end local v2    # "idx":I
label_cond_15f:
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::isOriginalDefaultLocale(android::icu::util::ULocale::defaultLocale)) )  
		goto label_cond_198;
	userScript = android::icu::util::ULocale_S_JDKLocaleHelper::getSystemProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("user.script")));
	//    .local v4, "userScript":Ljava/lang/String;
	if ( !(userScript) )  
		goto label_cond_198;
	if ( !(android::icu::impl::locale::LanguageTag::isScript(userScript)) )  
		goto label_cond_198;
	base = android::icu::util::ULocale::defaultULocale->base();
	//    .local v0, "base":Landroid/icu/impl/locale/BaseLocale;
	//    .local v3, "newBase":Landroid/icu/impl/locale/BaseLocale;
	android::icu::util::ULocale::defaultULocale = android::icu::util::ULocale::getInstance(android::icu::impl::locale::BaseLocale::getInstance(base->getLanguage(), userScript, base->getRegion(), base->getVariant()), android::icu::util::ULocale::defaultULocale->extensions());
	//    .end local v0    # "base":Landroid/icu/impl/locale/BaseLocale;
	//    .end local v3    # "newBase":Landroid/icu/impl/locale/BaseLocale;
label_cond_198:
	cVar28 = android::icu::util::ULocale_S_Category::values({const[class].FS-Param});
label_goto_19d:
	if ( cVar0 >= cVar28->size() )
		goto label_cond_1b4;
	//    .restart local v1    # "cat":Landroid/icu/util/ULocale$Category;
	idx = cVar28[cVar0]->ordinal();
	//    .restart local v2    # "idx":I
	android::icu::util::ULocale::defaultCategoryLocales[idx] = android::icu::util::ULocale::defaultLocale;
	android::icu::util::ULocale::defaultCategoryULocales[idx] = android::icu::util::ULocale::defaultULocale;
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_19d;
	// 658    .line 1872
	// 659    .end local v1    # "cat":Landroid/icu/util/ULocale$Category;
	// 660    .end local v2    # "idx":I
	// 661    .end local v4    # "userScript":Ljava/lang/String;
label_cond_1b4:
	cVar30 = std::make_shared<android::icu::util::ULocale_S_Type>(cVar1);
	android::icu::util::ULocale::ACTUAL_LOCALE = cVar30;
	cVar31 = std::make_shared<android::icu::util::ULocale_S_Type>(cVar1);
	android::icu::util::ULocale::VALID_LOCALE = cVar31;
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::util::ULocale::ULocale(std::shared_ptr<java::lang::String> localeID)
{
	
	//    .param p1, "localeID"    # Ljava/lang/String;
	// 686    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->localeID = android::icu::util::ULocale::getName(localeID);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::util::ULocale::ULocale(std::shared_ptr<java::lang::String> a,std::shared_ptr<java::lang::String> b)
{
	
	//    .param p1, "a"    # Ljava/lang/String;
	//    .param p2, "b"    # Ljava/lang/String;
	android::icu::util::ULocale::(a, b, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
android::icu::util::ULocale::ULocale(std::shared_ptr<java::lang::String> a,std::shared_ptr<java::lang::String> b,std::shared_ptr<java::lang::String> c)
{
	
	//    .param p1, "a"    # Ljava/lang/String;
	//    .param p2, "b"    # Ljava/lang/String;
	//    .param p3, "c"    # Ljava/lang/String;
	// 722    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->localeID = android::icu::util::ULocale::getName(android::icu::util::ULocale::lscvToID(a, b, c, std::make_shared<java::lang::String>(std::make_shared<char[]>(""))));
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/util/Locale;)V
android::icu::util::ULocale::ULocale(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::util::Locale> locale)
{
	
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "locale"    # Ljava/util/Locale;
	// 748    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->localeID = localeID;
	this->locale = locale;
	return;

}
// .method synthetic constructor <init>(Ljava/lang/String;Ljava/util/Locale;Landroid/icu/util/ULocale;)V
android::icu::util::ULocale::ULocale(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::util::Locale> locale,std::shared_ptr<android::icu::util::ULocale> _this2)
{
	
	//    .param p1, "localeID"    # Ljava/lang/String;
	//    .param p2, "locale"    # Ljava/util/Locale;
	//    .param p3, "-this2"    # Landroid/icu/util/ULocale;
	android::icu::util::ULocale::(localeID, locale);
	return;

}
// .method private constructor <init>(Ljava/util/Locale;)V
android::icu::util::ULocale::ULocale(std::shared_ptr<java::util::Locale> loc)
{
	
	//    .param p1, "loc"    # Ljava/util/Locale;
	// 778    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->localeID = android::icu::util::ULocale::getName(android::icu::util::ULocale::forLocale(loc)->toString());
	this->locale = loc;
	return;

}
// .method public static acceptLanguage(Ljava/lang/String;[Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::acceptLanguage(std::shared_ptr<java::lang::String> acceptLanguageList,std::shared_ptr<std::vector<android::icu::util::ULocale>> availableLocales,std::shared_ptr<bool[]> fallback)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	int acceptList;
	std::shared_ptr<std::vector<android::icu::util::ULocale>> acceptList;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "acceptLanguageList"    # Ljava/lang/String;
	//    .param p1, "availableLocales"    # [Landroid/icu/util/ULocale;
	//    .param p2, "fallback"    # [Z
	if ( acceptLanguageList )     
		goto label_cond_9;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 821    .line 1920
label_cond_9:
	acceptList = 0x0;
	//    .local v0, "acceptList":[Landroid/icu/util/ULocale;
	try {
	//label_try_start_b:
	//label_try_end_e:
	}
	catch (java::text::ParseException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/text/ParseException; {:try_start_b .. :try_end_e} :catch_12
	acceptList = android::icu::util::ULocale::parseAcceptLanguage(acceptLanguageList, 0x1);
	//    .end local v0    # "acceptList":[Landroid/icu/util/ULocale;
label_goto_f:
	if ( acceptList )     
		goto label_cond_15;
	return 0x0;
	// 844    .line 1923
	// 845    .restart local v0    # "acceptList":[Landroid/icu/util/ULocale;
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "pe":Ljava/text/ParseException;
	acceptList = 0x0;
	goto label_goto_f;
	// 855    .line 1929
	// 856    .end local v0    # "acceptList":[Landroid/icu/util/ULocale;
	// 857    .end local v1    # "pe":Ljava/text/ParseException;
label_cond_15:
	return android::icu::util::ULocale::acceptLanguage(acceptList, availableLocales, fallback);

}
// .method public static acceptLanguage(Ljava/lang/String;[Z)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::acceptLanguage(std::shared_ptr<java::lang::String> acceptLanguageList,std::shared_ptr<bool[]> fallback)
{
	
	//    .param p0, "acceptLanguageList"    # Ljava/lang/String;
	//    .param p1, "fallback"    # [Z
	return android::icu::util::ULocale::acceptLanguage(acceptLanguageList, android::icu::util::ULocale::getAvailableLocales(acceptLanguageList, android::icu::util::ULocale::getAvailableLocales(acceptLanguageList, android::icu::util::ULocale::getAvailableLocales({const[class].FS-Param}), fallback), fallback), fallback);

}
// .method public static acceptLanguage([Landroid/icu/util/ULocale;[Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::acceptLanguage(std::shared_ptr<std::vector<android::icu::util::ULocale>> acceptLanguageList,std::shared_ptr<std::vector<android::icu::util::ULocale>> availableLocales,std::shared_ptr<bool[]> fallback)
{
	
	int cVar0;
	int i;
	std::shared_ptr<java::lang::Object> aLocale;
	std::shared_ptr<java::lang::Object> cVar1;
	int j;
	std::shared_ptr<java::util::Locale> parent;
	std::shared_ptr<android::icu::util::ULocale> aLocale;
	
	//    .param p0, "acceptLanguageList"    # [Landroid/icu/util/ULocale;
	//    .param p1, "availableLocales"    # [Landroid/icu/util/ULocale;
	//    .param p2, "fallback"    # [Z
	cVar0 = 0x0;
	if ( !(fallback) )  
		goto label_cond_7;
	fallback[cVar0] = 0x1;
label_cond_7:
	i = 0x0;
	//    .local v1, "i":I
label_goto_8:
	if ( i >= acceptLanguageList->size() )
		goto label_cond_97;
	aLocale = acceptLanguageList[i];
	//    .local v0, "aLocale":Landroid/icu/util/ULocale;
	cVar1 = fallback;
	//    .end local v0    # "aLocale":Landroid/icu/util/ULocale;
label_cond_e:
	j = 0x0;
	//    .local v2, "j":I
label_goto_f:
	if ( j >= availableLocales->size() )
		goto label_cond_7f;
	if ( !(availableLocales[j]->equals(aLocale)) )  
		goto label_cond_21;
	if ( !(cVar1) )  
		goto label_cond_1e;
	cVar1[cVar0] = cVar0;
label_cond_1e:
	return availableLocales[j];
	// 952    .line 1967
label_cond_21:
	if ( aLocale->getScript()->length() )     
		goto label_cond_7c;
	if ( availableLocales[j]->getScript()->length() <= 0 )
		goto label_cond_7c;
	if ( !(availableLocales[j]->getLanguage()->equals(aLocale->getLanguage())) )  
		goto label_cond_7c;
	if ( !(availableLocales[j]->getCountry()->equals(aLocale->getCountry())) )  
		goto label_cond_7c;
	if ( !(availableLocales[j]->getVariant()->equals(aLocale->getVariant())) )  
		goto label_cond_7c;
	//    .local v4, "minAvail":Landroid/icu/util/ULocale;
	if ( android::icu::util::ULocale::minimizeSubtags(availableLocales[j])->getScript()->length() )     
		goto label_cond_7c;
	if ( !(cVar1) )  
		goto label_cond_7b;
	cVar1[cVar0] = cVar0;
label_cond_7b:
	return aLocale;
	// 1060    .line 1958
	// 1061    .end local v4    # "minAvail":Landroid/icu/util/ULocale;
label_cond_7c:
	j = ( j + 0x1);
	goto label_goto_f;
	// 1067    .line 1981
label_cond_7f:
	//    .local v3, "loc":Ljava/util/Locale;
	parent = android::icu::impl::LocaleUtility::fallback(aLocale->toLocale());
	//    .local v5, "parent":Ljava/util/Locale;
	if ( !(parent) )  
		goto label_cond_95;
	aLocale = std::make_shared<android::icu::util::ULocale>(parent);
label_goto_8e:
	0x0;
	//    .local v6, "setFallback":[Z
	if ( aLocale )     
		goto label_cond_e;
	i = ( i + 0x1);
	goto label_goto_8;
	// 1101    .line 1986
	// 1102    .end local v6    # "setFallback":[Z
label_cond_95:
	aLocale = 0x0;
	//    .local v0, "aLocale":Landroid/icu/util/ULocale;
	goto label_goto_8e;
	// 1109    .line 1991
	// 1110    .end local v0    # "aLocale":Landroid/icu/util/ULocale;
	// 1111    .end local v2    # "j":I
	// 1112    .end local v3    # "loc":Ljava/util/Locale;
	// 1113    .end local v5    # "parent":Ljava/util/Locale;
label_cond_97:
	return 0x0;

}
// .method public static acceptLanguage([Landroid/icu/util/ULocale;[Z)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::acceptLanguage(std::shared_ptr<std::vector<android::icu::util::ULocale>> acceptLanguageList,std::shared_ptr<bool[]> fallback)
{
	
	//    .param p0, "acceptLanguageList"    # [Landroid/icu/util/ULocale;
	//    .param p1, "fallback"    # [Z
	return android::icu::util::ULocale::acceptLanguage(acceptLanguageList, android::icu::util::ULocale::getAvailableLocales(acceptLanguageList, android::icu::util::ULocale::getAvailableLocales(acceptLanguageList, android::icu::util::ULocale::getAvailableLocales({const[class].FS-Param}), fallback), fallback), fallback);

}
// .method public static addLikelySubtags(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::addLikelySubtags(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> tags;
	int trailingIndex;
	std::shared_ptr<java::lang::String> newLocaleID;
	std::shared_ptr<android::icu::util::ULocale> loc;
	
	//    .param p0, "loc"    # Landroid/icu/util/ULocale;
	tags = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x3);
	//    .local v1, "tags":[Ljava/lang/String;
	//    .local v2, "trailing":Ljava/lang/String;
	trailingIndex = android::icu::util::ULocale::parseTagString(loc->localeID, tags);
	//    .local v3, "trailingIndex":I
	if ( trailingIndex >= loc->localeID->length() )
		goto label_cond_18;
	//    .end local v2    # "trailing":Ljava/lang/String;
label_cond_18:
	newLocaleID = android::icu::util::ULocale::createLikelySubtagsString(tags[0x0], tags[0x1], tags[0x2], 0x0);
	//    .local v0, "newLocaleID":Ljava/lang/String;
	if ( newLocaleID )     
		goto label_cond_28;
	//    .end local p0    # "loc":Landroid/icu/util/ULocale;
label_goto_27:
	return loc;
	// 1206    .restart local p0    # "loc":Landroid/icu/util/ULocale;
label_cond_28:
	//    .end local p0    # "loc":Landroid/icu/util/ULocale;
	loc = std::make_shared<android::icu::util::ULocale>(newLocaleID);
	goto label_goto_27;

}
// .method private static appendTag(Ljava/lang/String;Ljava/lang/StringBuilder;)V
void android::icu::util::ULocale::appendTag(std::shared_ptr<java::lang::String> tag,std::shared_ptr<java::lang::StringBuilder> buffer)
{
	
	//    .param p0, "tag"    # Ljava/lang/String;
	//    .param p1, "buffer"    # Ljava/lang/StringBuilder;
	if ( !(buffer->length()) )  
		goto label_cond_b;
	buffer->append(0x5f);
label_cond_b:
	buffer->append(tag);
	return;

}
// .method private base()Landroid/icu/impl/locale/BaseLocale;
std::shared_ptr<android::icu::impl::locale::BaseLocale> android::icu::util::ULocale::base()
{
	
	std::shared_ptr<java::lang::String> variant;
	std::shared_ptr<android::icu::impl::LocaleIDParser> lp;
	
	if ( this->baseLocale )     
		goto label_cond_2f;
	variant = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .local v4, "variant":Ljava/lang/String;
	//    .local v2, "region":Ljava/lang/String;
	//    .local v3, "script":Ljava/lang/String;
	//    .local v0, "language":Ljava/lang/String;
	if ( this->equals(android::icu::util::ULocale::ROOT) )     
		goto label_cond_29;
	lp = std::make_shared<android::icu::impl::LocaleIDParser>(this->localeID);
	//    .local v1, "lp":Landroid/icu/impl/LocaleIDParser;
	//    .end local v1    # "lp":Landroid/icu/impl/LocaleIDParser;
label_cond_29:
	this->baseLocale = android::icu::impl::locale::BaseLocale::getInstance(variant, variant, variant, variant);
	//    .end local v0    # "language":Ljava/lang/String;
	//    .end local v2    # "region":Ljava/lang/String;
	//    .end local v3    # "script":Ljava/lang/String;
	//    .end local v4    # "variant":Ljava/lang/String;
label_cond_2f:
	return this->baseLocale;

}
// .method public static canonicalize(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::canonicalize(std::shared_ptr<java::lang::String> localeID)
{
	
	int cVar0;
	bool cVar1;
	int cVar2;
	std::shared_ptr<android::icu::impl::LocaleIDParser> parser;
	std::shared_ptr<java::lang::String> baseName;
	int foundVariant;
	int i;
	auto vals;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int idx;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	parser = std::make_shared<android::icu::impl::LocaleIDParser>(localeID, cVar1);
	//    .local v4, "parser":Landroid/icu/impl/LocaleIDParser;
	baseName = parser->getBaseName();
	//    .local v0, "baseName":Ljava/lang/String;
	foundVariant = 0x0;
	//    .local v1, "foundVariant":Z
	if ( !(localeID->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("")))) )  
		goto label_cond_1b;
	return std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	// 1364    .line 1168
label_cond_1b:
	android::icu::util::ULocale::initCANONICALIZE_MAP({const[class].FS-Param});
	i = 0x0;
	//    .local v2, "i":I
label_goto_1f:
	if ( i >= android::icu::util::ULocale::variantsToKeywords->size() )
		goto label_cond_63;
	vals = android::icu::util::ULocale::variantsToKeywords[i];
	//    .local v5, "vals":[Ljava/lang/String;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	idx = baseName->lastIndexOf(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(vals[cVar2])->toString());
	//    .local v3, "idx":I
	if ( idx <= -0x1 )
		goto label_cond_be;
	foundVariant = 0x1;
	baseName = baseName->substring(cVar2, idx);
	if ( !(baseName->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))) )  
		goto label_cond_59;
	baseName = baseName->substring(cVar2, ( idx + -0x1));
label_cond_59:
	parser->setBaseName(baseName);
	parser->defaultKeywordValue(vals[cVar1], vals[cVar0]);
	//    .end local v3    # "idx":I
	//    .end local v5    # "vals":[Ljava/lang/String;
label_cond_63:
	i = 0x0;
label_goto_64:
	if ( i >= android::icu::util::ULocale::CANONICALIZE_MAP->size() )
		goto label_cond_8b;
	if ( !(android::icu::util::ULocale::CANONICALIZE_MAP[i][cVar2]->equals(baseName)) )  
		goto label_cond_c2;
	foundVariant = 0x1;
	vals = android::icu::util::ULocale::CANONICALIZE_MAP[i];
	//    .restart local v5    # "vals":[Ljava/lang/String;
	parser->setBaseName(vals[cVar1]);
	if ( !(vals[cVar0]) )  
		goto label_cond_8b;
	parser->defaultKeywordValue(vals[cVar0], vals[0x3]);
	//    .end local v5    # "vals":[Ljava/lang/String;
label_cond_8b:
	if ( foundVariant )     
		goto label_cond_b9;
	if ( !(parser->getLanguage()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("nb")))) )  
		goto label_cond_b9;
	if ( !(parser->getVariant()->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("NY")))) )  
		goto label_cond_b9;
	parser->setBaseName(android::icu::util::ULocale::lscvToID(std::make_shared<java::lang::String>(std::make_shared<char[]>("nn")), parser->getScript(), parser->getCountry(), 0x0));
label_cond_b9:
	return parser->getName();
	// 1560    .line 1171
	// 1561    .restart local v3    # "idx":I
	// 1562    .restart local v5    # "vals":[Ljava/lang/String;
label_cond_be:
	i = ( i + 0x1);
	goto label_goto_1f;
	// 1568    .line 1188
	// 1569    .end local v3    # "idx":I
	// 1570    .end local v5    # "vals":[Ljava/lang/String;
label_cond_c2:
	i = ( i + 0x1);
	goto label_goto_64;

}
// .method public static createCanonical(Ljava/lang/String;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::createCanonical(std::shared_ptr<java::lang::String> nonCanonicalID)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<java::util::Locale> cVar1;
	
	//    .param p0, "nonCanonicalID"    # Ljava/lang/String;
	cVar1 = 0x0;
	cVar1->checkCast("java::util::Locale");
	cVar0 = std::make_shared<android::icu::util::ULocale>(android::icu::util::ULocale::canonicalize(nonCanonicalID), cVar1);
	return cVar0;

}
// .method private static createLikelySubtagsString(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::createLikelySubtagsString(std::shared_ptr<java::lang::String> lang,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> variants)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<java::lang::String> likelySubtags;
	
	//    .param p0, "lang"    # Ljava/lang/String;
	//    .param p1, "script"    # Ljava/lang/String;
	//    .param p2, "region"    # Ljava/lang/String;
	//    .param p3, "variants"    # Ljava/lang/String;
	cVar0 = 0x0;
	if ( android::icu::util::ULocale::isEmptyString(script) )     
		goto label_cond_1e;
	if ( !(( android::icu::util::ULocale::isEmptyString(region) ^ 0x1)) )  
		goto label_cond_1e;
	//    .local v1, "searchTag":Ljava/lang/String;
	likelySubtags = android::icu::util::ULocale::lookupLikelySubtags(android::icu::util::ULocale::createTagString(lang, script, region, cVar0));
	//    .local v0, "likelySubtags":Ljava/lang/String;
	if ( !(likelySubtags) )  
		goto label_cond_1e;
	return android::icu::util::ULocale::createTagString(cVar0, cVar0, cVar0, variants, likelySubtags);
	// 1645    .line 2887
	// 1646    .end local v0    # "likelySubtags":Ljava/lang/String;
	// 1647    .end local v1    # "searchTag":Ljava/lang/String;
label_cond_1e:
	if ( android::icu::util::ULocale::isEmptyString(script) )     
		goto label_cond_33;
	//    .restart local v1    # "searchTag":Ljava/lang/String;
	likelySubtags = android::icu::util::ULocale::lookupLikelySubtags(android::icu::util::ULocale::createTagString(lang, script, cVar0, cVar0));
	//    .restart local v0    # "likelySubtags":Ljava/lang/String;
	if ( !(likelySubtags) )  
		goto label_cond_33;
	return android::icu::util::ULocale::createTagString(cVar0, cVar0, region, variants, likelySubtags);
	// 1677    .line 2913
	// 1678    .end local v0    # "likelySubtags":Ljava/lang/String;
	// 1679    .end local v1    # "searchTag":Ljava/lang/String;
label_cond_33:
	if ( android::icu::util::ULocale::isEmptyString(region) )     
		goto label_cond_48;
	//    .restart local v1    # "searchTag":Ljava/lang/String;
	likelySubtags = android::icu::util::ULocale::lookupLikelySubtags(android::icu::util::ULocale::createTagString(lang, cVar0, region, cVar0));
	//    .restart local v0    # "likelySubtags":Ljava/lang/String;
	if ( !(likelySubtags) )  
		goto label_cond_48;
	return android::icu::util::ULocale::createTagString(cVar0, script, cVar0, variants, likelySubtags);
	// 1709    .line 2942
	// 1710    .end local v0    # "likelySubtags":Ljava/lang/String;
	// 1711    .end local v1    # "searchTag":Ljava/lang/String;
label_cond_48:
	//    .restart local v1    # "searchTag":Ljava/lang/String;
	likelySubtags = android::icu::util::ULocale::lookupLikelySubtags(android::icu::util::ULocale::createTagString(lang, cVar0, cVar0, cVar0));
	//    .restart local v0    # "likelySubtags":Ljava/lang/String;
	if ( !(likelySubtags) )  
		goto label_cond_57;
	return android::icu::util::ULocale::createTagString(cVar0, script, region, variants, likelySubtags);
	// 1734    .line 2963
label_cond_57:
	return cVar0;

}
// .method static createTagString(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::createTagString(std::shared_ptr<java::lang::String> lang,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> trailing)
{
	
	//    .param p0, "lang"    # Ljava/lang/String;
	//    .param p1, "script"    # Ljava/lang/String;
	//    .param p2, "region"    # Ljava/lang/String;
	//    .param p3, "trailing"    # Ljava/lang/String;
	return android::icu::util::ULocale::createTagString(lang, script, region, trailing, 0x0);

}
// .method private static createTagString(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::createTagString(std::shared_ptr<java::lang::String> lang,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> region,std::shared_ptr<java::lang::String> trailing,std::shared_ptr<java::lang::String> alternateTags)
{
	
	char cVar0;
	int cVar1;
	std::shared_ptr<android::icu::impl::LocaleIDParser> parser;
	std::shared_ptr<java::lang::StringBuilder> tag;
	int separators;
	std::shared_ptr<java::lang::String> alternateRegion;
	std::shared_ptr<java::lang::String> alternateScript;
	std::shared_ptr<java::lang::String> alternateLang;
	
	//    .param p0, "lang"    # Ljava/lang/String;
	//    .param p1, "script"    # Ljava/lang/String;
	//    .param p2, "region"    # Ljava/lang/String;
	//    .param p3, "trailing"    # Ljava/lang/String;
	//    .param p4, "alternateTags"    # Ljava/lang/String;
	cVar0 = 0x5f;
	cVar1 = 0x1;
	parser = 0x0;
	//    .local v3, "parser":Landroid/icu/impl/LocaleIDParser;
	0x0;
	//    .local v4, "regionAppended":Z
	tag = std::make_shared<java::lang::StringBuilder>();
	//    .local v6, "tag":Ljava/lang/StringBuilder;
	if ( android::icu::util::ULocale::isEmptyString(lang) )     
		goto label_cond_4e;
	android::icu::util::ULocale::appendTag(lang, tag);
	//    .end local v3    # "parser":Landroid/icu/impl/LocaleIDParser;
label_goto_13:
	if ( android::icu::util::ULocale::isEmptyString(script) )     
		goto label_cond_72;
	android::icu::util::ULocale::appendTag(script, tag);
label_cond_1c:
label_goto_1c:
	if ( android::icu::util::ULocale::isEmptyString(region) )     
		goto label_cond_8d;
	android::icu::util::ULocale::appendTag(region, tag);
label_cond_26:
label_goto_26:
	if ( !(trailing) )  
		goto label_cond_49;
	if ( trailing->length() <= cVar1 )
		goto label_cond_49;
	separators = 0x0;
	//    .local v5, "separators":I
	if ( trailing->charAt(0x0) != cVar0 )
		goto label_cond_aa;
	if ( trailing->charAt(cVar1) != cVar0 )
		goto label_cond_3d;
	separators = 0x2;
label_cond_3d:
label_goto_3d:
	if ( !(0x1) )  
		goto label_cond_b0;
	if ( separators != 0x2 )
		goto label_cond_ac;
	tag->append(trailing->substring(cVar1));
	//    .end local v5    # "separators":I
label_cond_49:
label_goto_49:
	return tag->toString();
	// 1882    .line 2633
	// 1883    .restart local v3    # "parser":Landroid/icu/impl/LocaleIDParser;
label_cond_4e:
	if ( !(android::icu::util::ULocale::isEmptyString(alternateTags)) )  
		goto label_cond_5b;
	android::icu::util::ULocale::appendTag(std::make_shared<java::lang::String>(std::make_shared<char[]>("und")), tag);
	goto label_goto_13;
	// 1899    .line 2643
label_cond_5b:
	//    .end local v3    # "parser":Landroid/icu/impl/LocaleIDParser;
	parser = std::make_shared<android::icu::impl::LocaleIDParser>(alternateTags);
	//    .local v3, "parser":Landroid/icu/impl/LocaleIDParser;
	alternateLang = parser->getLanguage();
	//    .local v0, "alternateLang":Ljava/lang/String;
	if ( android::icu::util::ULocale::isEmptyString(alternateLang) )     
		goto label_cond_6e;
	//    .end local v0    # "alternateLang":Ljava/lang/String;
label_goto_6a:
	android::icu::util::ULocale::appendTag(alternateLang, tag);
	goto label_goto_13;
	// 1927    .line 2652
	// 1928    .restart local v0    # "alternateLang":Ljava/lang/String;
label_cond_6e:
	alternateLang = std::make_shared<java::lang::String>(std::make_shared<char[]>("und"));
	goto label_goto_6a;
	// 1934    .line 2661
	// 1935    .end local v0    # "alternateLang":Ljava/lang/String;
	// 1936    .end local v3    # "parser":Landroid/icu/impl/LocaleIDParser;
label_cond_72:
	if ( android::icu::util::ULocale::isEmptyString(alternateTags) )     
		goto label_cond_1c;
	if ( parser )     
		goto label_cond_7f;
	parser = std::make_shared<android::icu::impl::LocaleIDParser>(alternateTags);
label_cond_7f:
	alternateScript = parser->getScript();
	//    .local v2, "alternateScript":Ljava/lang/String;
	if ( android::icu::util::ULocale::isEmptyString(alternateScript) )     
		goto label_cond_1c;
	android::icu::util::ULocale::appendTag(alternateScript, tag);
	goto label_goto_1c;
	// 1971    .line 2685
	// 1972    .end local v2    # "alternateScript":Ljava/lang/String;
label_cond_8d:
	if ( android::icu::util::ULocale::isEmptyString(alternateTags) )     
		goto label_cond_26;
	if ( parser )     
		goto label_cond_9a;
	parser = std::make_shared<android::icu::impl::LocaleIDParser>(alternateTags);
label_cond_9a:
	alternateRegion = parser->getCountry();
	//    .local v1, "alternateRegion":Ljava/lang/String;
	if ( android::icu::util::ULocale::isEmptyString(alternateRegion) )     
		goto label_cond_26;
	android::icu::util::ULocale::appendTag(alternateRegion, tag);
	0x1;
	goto label_goto_26;
	// 2010    .line 2718
	// 2011    .end local v1    # "alternateRegion":Ljava/lang/String;
	// 2012    .restart local v5    # "separators":I
label_cond_aa:
	separators = 0x1;
	goto label_goto_3d;
	// 2018    .line 2730
label_cond_ac:
	tag->append(trailing);
	goto label_goto_49;
	// 2024    .line 2738
label_cond_b0:
	if ( separators != cVar1 )
		goto label_cond_b5;
	tag->append(cVar0);
label_cond_b5:
	tag->append(trailing);
	goto label_goto_49;

}
// .method private extensions()Landroid/icu/impl/locale/LocaleExtensions;
std::shared_ptr<android::icu::impl::locale::LocaleExtensions> android::icu::util::ULocale::extensions()
{
	
	int cVar0;
	std::shared_ptr<java::util::Iterator> kwitr;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> intbld;
	std::shared_ptr<java::lang::String> key;
	auto uattributes;
	int cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::String> bcpKey;
	std::shared_ptr<java::lang::String> bcpType;
	
	cVar0 = 0x0;
	if ( this->extensions )     
		goto label_cond_f;
	kwitr = this->getKeywords();
	//    .local v5, "kwitr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	if ( kwitr )     
		goto label_cond_12;
	this->extensions = android::icu::impl::locale::LocaleExtensions::EMPTY_EXTENSIONS;
	//    .end local v5    # "kwitr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
label_cond_f:
label_goto_f:
	return this->extensions;
	// 2071    .line 3840
	// 2072    .restart local v5    # "kwitr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
label_cond_12:
	intbld = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder>();
	//    .local v3, "intbld":Landroid/icu/impl/locale/InternalLocaleBuilder;
label_cond_17:
label_goto_17:
	if ( !(kwitr->hasNext()) )  
		goto label_cond_8a;
	key = kwitr->next();
	key->checkCast("java::lang::String");
	//    .local v4, "key":Ljava/lang/String;
	if ( !(key->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("attribute")))) )  
		goto label_cond_45;
	uattributes = this->getKeywordValue(key)->split(std::make_shared<java::lang::String>(std::make_shared<char[]>("[-_]")));
	//    .local v7, "uattributes":[Ljava/lang/String;
	cVar1 = cVar0;
label_goto_39:
	if ( cVar1 >= uattributes->size() )
		goto label_cond_17;
	//    .local v6, "uattr":Ljava/lang/String;
	try {
	//label_try_start_3d:
	intbld->addUnicodeLocaleAttribute(uattributes[cVar1]);
	//label_try_end_40:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_43;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_3d .. :try_end_40} :catch_43
label_goto_40:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_39;
	// 2140    .line 3849
label_catch_43:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	goto label_goto_40;
	// 2147    .line 3853
	// 2148    .end local v2    # "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	// 2149    .end local v6    # "uattr":Ljava/lang/String;
	// 2150    .end local v7    # "uattributes":[Ljava/lang/String;
label_cond_45:
	if ( key->length() <  0x2 )
		goto label_cond_62;
	bcpKey = android::icu::util::ULocale::toUnicodeLocaleKey(key);
	//    .local v0, "bcpKey":Ljava/lang/String;
	bcpType = android::icu::util::ULocale::toUnicodeLocaleType(key, this->getKeywordValue(key));
	//    .local v1, "bcpType":Ljava/lang/String;
	if ( !(bcpKey) )  
		goto label_cond_17;
	if ( !(bcpType) )  
		goto label_cond_17;
	try {
	//label_try_start_5c:
	intbld->setUnicodeLocaleKeyword(bcpKey, bcpType);
	//label_try_end_5f:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_60;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_5c .. :try_end_5f} :catch_60
	goto label_goto_17;
	// 2189    .line 3859
label_catch_60:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	goto label_goto_17;
	// 2196    .line 3863
	// 2197    .end local v0    # "bcpKey":Ljava/lang/String;
	// 2198    .end local v1    # "bcpType":Ljava/lang/String;
	// 2199    .end local v2    # "e":Landroid/icu/impl/locale/LocaleSyntaxException;
label_cond_62:
	if ( key->length() != 0x1 )
		goto label_cond_17;
	if ( key->charAt(cVar0) == 0x75 )
		goto label_cond_17;
	try {
	//label_try_start_72:
	intbld->setExtension(key->charAt(0x0), this->getKeywordValue(key)->replace(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")), std::make_shared<java::lang::String>(std::make_shared<char[]>("-"))));
	//label_try_end_87:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_88;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_72 .. :try_end_87} :catch_88
	goto label_goto_17;
	// 2245    .line 3867
label_catch_88:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v2    # "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	goto label_goto_17;
	// 2252    .line 3872
	// 2253    .end local v2    # "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	// 2254    .end local v4    # "key":Ljava/lang/String;
label_cond_8a:
	this->extensions = intbld->getLocaleExtensions();
	goto label_goto_f;

}
// .method public static forLanguageTag(Ljava/lang/String;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::forLanguageTag(std::shared_ptr<java::lang::String> languageTag)
{
	
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> bldr;
	
	//    .param p0, "languageTag"    # Ljava/lang/String;
	//    .local v1, "tag":Landroid/icu/impl/locale/LanguageTag;
	bldr = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder>();
	//    .local v0, "bldr":Landroid/icu/impl/locale/InternalLocaleBuilder;
	bldr->setLanguageTag(android::icu::impl::locale::LanguageTag::parse(languageTag, 0x0));
	return android::icu::util::ULocale::getInstance(bldr->getBaseLocale(), bldr->getLocaleExtensions());

}
// .method public static forLocale(Ljava/util/Locale;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::forLocale(std::shared_ptr<java::util::Locale> loc)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p0, "loc"    # Ljava/util/Locale;
	cVar0 = 0x0;
	if ( loc )     
		goto label_cond_4;
	return cVar0;
	// 2316    .line 418
label_cond_4:
	cVar1 = android::icu::util::ULocale::CACHE->getInstance(loc, cVar0);
	cVar1->checkCast("android::icu::util::ULocale");
	return cVar1;

}
// .method public static getAvailableLocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::getAvailableLocales()
{
	
	return android::icu::impl::ICUResourceBundle::getAvailableULocales({const[class].FS-Param});

}
// .method public static getBaseName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getBaseName(std::shared_ptr<java::lang::String> localeID)
{
	
	std::shared_ptr<android::icu::impl::LocaleIDParser> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	if ( localeID->indexOf(0x40) != -0x1 )
		goto label_cond_a;
	return localeID;
	// 2360    .line 1037
label_cond_a:
	cVar0 = std::make_shared<android::icu::impl::LocaleIDParser>(localeID);
	return cVar0->getBaseName();

}
// .method public static getCountry(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getCountry(std::shared_ptr<java::lang::String> localeID)
{
	
	std::shared_ptr<android::icu::impl::LocaleIDParser> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::impl::LocaleIDParser>(localeID);
	return cVar0->getCountry();

}
// .method public static getDefault()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::getDefault()
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<java::lang::Object> currentDefault;
	std::shared_ptr<java::lang::Object> cVar1;
	int cVar2;
	int idx;
	
	cVar0 = android::icu::util::ULocale();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	if ( android::icu::util::ULocale::defaultULocale )     
		goto label_cond_b;
	//label_try_end_9:
	}
	catch (...){
		goto label_catchall_46;
	}
	//    .catchall {:try_start_3 .. :try_end_9} :catchall_46
	cVar0->monitor_exit();
	return android::icu::util::ULocale::ROOT;
	// 2414    .line 596
label_cond_b:
	try {
	//label_try_start_b:
	currentDefault = java::util::Locale::getDefault({const[class].FS-Param});
	//    .local v1, "currentDefault":Ljava/util/Locale;
	if ( android::icu::util::ULocale::defaultLocale->equals(currentDefault) )     
		goto label_cond_42;
	android::icu::util::ULocale::defaultLocale = currentDefault;
	android::icu::util::ULocale::defaultULocale = android::icu::util::ULocale::forLocale(currentDefault);
	if ( android::icu::util::ULocale_S_JDKLocaleHelper::hasLocaleCategories({const[class].FS-Param}) )     
		goto label_cond_42;
	cVar1 = android::icu::util::ULocale_S_Category::values({const[class].FS-Param});
	cVar2 = 0x0;
label_goto_2b:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_42;
	//    .local v0, "cat":Landroid/icu/util/ULocale$Category;
	idx = cVar1[cVar2]->ordinal();
	//    .local v2, "idx":I
	android::icu::util::ULocale::defaultCategoryLocales[idx] = currentDefault;
	android::icu::util::ULocale::defaultCategoryULocales[idx] = android::icu::util::ULocale::forLocale(currentDefault);
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_2b;
	// 2488    .line 612
	// 2489    .end local v0    # "cat":Landroid/icu/util/ULocale$Category;
	// 2490    .end local v2    # "idx":I
label_cond_42:
	//label_try_end_44:
	}
	catch (...){
		goto label_catchall_46;
	}
	//    .catchall {:try_start_b .. :try_end_44} :catchall_46
	cVar0->monitor_exit();
	return android::icu::util::ULocale::defaultULocale;
	// 2500    .line 584
label_catchall_46:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static getDefault(Landroid/icu/util/ULocale$Category;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::getDefault(std::shared_ptr<android::icu::util::ULocale_S_Category> category)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	int idx;
	std::shared_ptr<java::lang::Object> currentCategoryDefault;
	std::shared_ptr<java::lang::Object> currentDefault;
	std::shared_ptr<java::lang::Object> cVar1;
	int cVar2;
	int tmpIdx;
	
	//    .param p0, "category"    # Landroid/icu/util/ULocale$Category;
	cVar0 = android::icu::util::ULocale();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	idx = category->ordinal();
	//    .local v3, "idx":I
	if ( android::icu::util::ULocale::defaultCategoryULocales[idx] )     
		goto label_cond_11;
	//label_try_end_f:
	}
	catch (...){
		goto label_catchall_68;
	}
	//    .catchall {:try_start_3 .. :try_end_f} :catchall_68
	cVar0->monitor_exit();
	return android::icu::util::ULocale::ROOT;
	// 2542    .line 658
label_cond_11:
	try {
	//label_try_start_11:
	if ( !(android::icu::util::ULocale_S_JDKLocaleHelper::hasLocaleCategories({const[class].FS-Param})) )  
		goto label_cond_37;
	currentCategoryDefault = android::icu::util::ULocale_S_JDKLocaleHelper::getDefault(category);
	//    .local v1, "currentCategoryDefault":Ljava/util/Locale;
	if ( android::icu::util::ULocale::defaultCategoryLocales[idx]->equals(currentCategoryDefault) )     
		goto label_cond_31;
	android::icu::util::ULocale::defaultCategoryLocales[idx] = currentCategoryDefault;
	android::icu::util::ULocale::defaultCategoryULocales[idx] = android::icu::util::ULocale::forLocale(currentCategoryDefault);
	//    .end local v1    # "currentCategoryDefault":Ljava/util/Locale;
label_cond_31:
	//label_try_end_35:
	}
	catch (...){
		goto label_catchall_68;
	}
	//    .catchall {:try_start_11 .. :try_end_35} :catchall_68
	cVar0->monitor_exit();
	return android::icu::util::ULocale::defaultCategoryULocales[idx];
	// 2595    .line 677
label_cond_37:
	try {
	//label_try_start_37:
	currentDefault = java::util::Locale::getDefault({const[class].FS-Param});
	//    .local v2, "currentDefault":Ljava/util/Locale;
	if ( android::icu::util::ULocale::defaultLocale->equals(currentDefault) )     
		goto label_cond_31;
	android::icu::util::ULocale::defaultLocale = currentDefault;
	android::icu::util::ULocale::defaultULocale = android::icu::util::ULocale::forLocale(currentDefault);
	cVar1 = android::icu::util::ULocale_S_Category::values({const[class].FS-Param});
	cVar2 = 0x0;
label_goto_51:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_31;
	//    .local v0, "cat":Landroid/icu/util/ULocale$Category;
	tmpIdx = cVar1[cVar2]->ordinal();
	//    .local v4, "tmpIdx":I
	android::icu::util::ULocale::defaultCategoryLocales[tmpIdx] = currentDefault;
	android::icu::util::ULocale::defaultCategoryULocales[tmpIdx] = android::icu::util::ULocale::forLocale(currentDefault);
	//label_try_end_65:
	}
	catch (...){
		goto label_catchall_68;
	}
	//    .catchall {:try_start_37 .. :try_end_65} :catchall_68
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_51;
	// 2664    .line 650
	// 2665    .end local v0    # "cat":Landroid/icu/util/ULocale$Category;
	// 2666    .end local v2    # "currentDefault":Ljava/util/Locale;
	// 2667    .end local v3    # "idx":I
	// 2668    .end local v4    # "tmpIdx":I
label_catchall_68:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static getDisplayCountry(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayCountry(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	return android::icu::util::ULocale::getDisplayCountryInternal(cVar0, displayLocale);

}
// .method public static getDisplayCountry(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayCountry(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocaleID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	cVar1 = std::make_shared<android::icu::util::ULocale>(displayLocaleID);
	return android::icu::util::ULocale::getDisplayCountryInternal(cVar0, cVar1);

}
// .method private static getDisplayCountryInternal(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayCountryInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::LocaleDisplayNames::getInstance(displayLocale)->regionDisplayName(locale->getCountry());

}
// .method public static getDisplayKeyword(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayKeyword(std::shared_ptr<java::lang::String> keyword)
{
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	return android::icu::util::ULocale::getDisplayKeywordInternal(keyword, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public static getDisplayKeyword(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayKeyword(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::util::ULocale::getDisplayKeywordInternal(keyword, displayLocale);

}
// .method public static getDisplayKeyword(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayKeyword(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> displayLocaleID)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	//    .param p1, "displayLocaleID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::ULocale>(displayLocaleID);
	return android::icu::util::ULocale::getDisplayKeywordInternal(keyword, cVar0);

}
// .method private static getDisplayKeywordInternal(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayKeywordInternal(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::LocaleDisplayNames::getInstance(displayLocale)->keyDisplayName(keyword);

}
// .method public static getDisplayKeywordValue(Ljava/lang/String;Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayKeywordValue(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "displayLocale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	return android::icu::util::ULocale::getDisplayKeywordValueInternal(cVar0, keyword, displayLocale);

}
// .method public static getDisplayKeywordValue(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayKeywordValue(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> displayLocaleID)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "displayLocaleID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	cVar1 = std::make_shared<android::icu::util::ULocale>(displayLocaleID);
	return android::icu::util::ULocale::getDisplayKeywordValueInternal(cVar0, keyword, cVar1);

}
// .method private static getDisplayKeywordValueInternal(Landroid/icu/util/ULocale;Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayKeywordValueInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "displayLocale"    # Landroid/icu/util/ULocale;
	cVar0 = android::icu::impl::locale::AsciiUtil::toLowerString(keyword->trim());
	//    .local v0, "value":Ljava/lang/String;
	return android::icu::text::LocaleDisplayNames::getInstance(displayLocale)->keyValueDisplayName(cVar0, locale->getKeywordValue(cVar0));

}
// .method public static getDisplayLanguage(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayLanguage(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	return android::icu::util::ULocale::getDisplayLanguageInternal(cVar0, displayLocale, 0x0);

}
// .method public static getDisplayLanguage(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayLanguage(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocaleID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	cVar1 = std::make_shared<android::icu::util::ULocale>(displayLocaleID);
	return android::icu::util::ULocale::getDisplayLanguageInternal(cVar0, cVar1, 0x0);

}
// .method private static getDisplayLanguageInternal(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayLanguageInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale,bool useDialect)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "useDialect"    # Z
	if ( !(useDialect) )  
		goto label_cond_f;
	//    .local v0, "lang":Ljava/lang/String;
label_goto_6:
	return android::icu::text::LocaleDisplayNames::getInstance(displayLocale)->languageDisplayName(lang);
	// 2961    .line 1448
	// 2962    .end local v0    # "lang":Ljava/lang/String;
label_cond_f:
	//    .restart local v0    # "lang":Ljava/lang/String;
	goto label_goto_6;

}
// .method public static getDisplayLanguageWithDialect(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayLanguageWithDialect(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	return android::icu::util::ULocale::getDisplayLanguageInternal(cVar0, displayLocale, 0x1);

}
// .method public static getDisplayLanguageWithDialect(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayLanguageWithDialect(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocaleID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	cVar1 = std::make_shared<android::icu::util::ULocale>(displayLocaleID);
	return android::icu::util::ULocale::getDisplayLanguageInternal(cVar0, cVar1, 0x1);

}
// .method public static getDisplayName(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayName(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	return android::icu::util::ULocale::getDisplayNameInternal(cVar0, displayLocale);

}
// .method public static getDisplayName(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayName(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocaleID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	cVar1 = std::make_shared<android::icu::util::ULocale>(displayLocaleID);
	return android::icu::util::ULocale::getDisplayNameInternal(cVar0, cVar1);

}
// .method private static getDisplayNameInternal(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayNameInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::LocaleDisplayNames::getInstance(displayLocale)->localeDisplayName(locale);

}
// .method public static getDisplayNameWithDialect(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayNameWithDialect(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	return android::icu::util::ULocale::getDisplayNameWithDialectInternal(cVar0, displayLocale);

}
// .method public static getDisplayNameWithDialect(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayNameWithDialect(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocaleID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	cVar1 = std::make_shared<android::icu::util::ULocale>(displayLocaleID);
	return android::icu::util::ULocale::getDisplayNameWithDialectInternal(cVar0, cVar1);

}
// .method private static getDisplayNameWithDialectInternal(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayNameWithDialectInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::LocaleDisplayNames::getInstance(displayLocale, android::icu::text::LocaleDisplayNames_S_DialectHandling::DIALECT_NAMES)->localeDisplayName(locale);

}
// .method public static getDisplayScript(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayScript(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	return android::icu::util::ULocale::getDisplayScriptInternal(cVar0, displayLocale);

}
// .method public static getDisplayScript(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayScript(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocaleID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	cVar1 = std::make_shared<android::icu::util::ULocale>(displayLocaleID);
	return android::icu::util::ULocale::getDisplayScriptInternal(cVar0, cVar1);

}
// .method public static getDisplayScriptInContext(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayScriptInContext(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3183    .end annotation
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	return android::icu::util::ULocale::getDisplayScriptInContextInternal(cVar0, displayLocale);

}
// .method public static getDisplayScriptInContext(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayScriptInContext(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocaleID"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 3203    .end annotation
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	cVar1 = std::make_shared<android::icu::util::ULocale>(displayLocaleID);
	return android::icu::util::ULocale::getDisplayScriptInContextInternal(cVar0, cVar1);

}
// .method private static getDisplayScriptInContextInternal(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayScriptInContextInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::LocaleDisplayNames::getInstance(displayLocale)->scriptDisplayNameInContext(locale->getScript());

}
// .method private static getDisplayScriptInternal(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayScriptInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::LocaleDisplayNames::getInstance(displayLocale)->scriptDisplayName(locale->getScript());

}
// .method public static getDisplayVariant(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayVariant(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	return android::icu::util::ULocale::getDisplayVariantInternal(cVar0, displayLocale);

}
// .method public static getDisplayVariant(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayVariant(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> displayLocaleID)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "displayLocaleID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	cVar1 = std::make_shared<android::icu::util::ULocale>(displayLocaleID);
	return android::icu::util::ULocale::getDisplayVariantInternal(cVar0, cVar1);

}
// .method private static getDisplayVariantInternal(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayVariantInternal(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::LocaleDisplayNames::getInstance(displayLocale)->variantDisplayName(locale->getVariant());

}
// .method public static getFallback(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getFallback(std::shared_ptr<java::lang::String> localeID)
{
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	return android::icu::util::ULocale::getFallbackString(android::icu::util::ULocale::getName(localeID));

}
// .method private static getFallbackString(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getFallbackString(std::shared_ptr<java::lang::String> fallback)
{
	
	int cVar0;
	int cVar1;
	int extStart;
	int last;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "fallback"    # Ljava/lang/String;
	cVar0 = 0x5f;
	cVar1 = -0x1;
	extStart = fallback->indexOf(0x40);
	//    .local v0, "extStart":I
	if ( extStart != cVar1 )
		goto label_cond_10;
	extStart = fallback->length();
label_cond_10:
	last = fallback->lastIndexOf(cVar0, extStart);
	//    .local v1, "last":I
	if ( last != cVar1 )
		goto label_cond_33;
	last = 0x0;
label_cond_17:
label_goto_17:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	return cVar2->append(fallback->substring(0x0, last))->append(fallback->substring(extStart))->toString();
	// 3420    .line 1010
label_cond_31:
	last = ( last + -0x1);
label_cond_33:
	if ( last <= 0 )
		goto label_cond_17;
	if ( fallback->charAt(( last + -0x1)) == cVar0 )
		goto label_cond_31;
	goto label_goto_17;

}
// .method public static getISO3Country(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getISO3Country(std::shared_ptr<java::lang::String> localeID)
{
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	return android::icu::impl::LocaleIDs::getISO3Country(android::icu::util::ULocale::getCountry(localeID));

}
// .method public static getISO3Language(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getISO3Language(std::shared_ptr<java::lang::String> localeID)
{
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	return android::icu::impl::LocaleIDs::getISO3Language(android::icu::util::ULocale::getLanguage(localeID));

}
// .method public static getISOCountries()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getISOCountries()
{
	
	return android::icu::impl::LocaleIDs::getISOCountries({const[class].FS-Param});

}
// .method public static getISOLanguages()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getISOLanguages()
{
	
	return android::icu::impl::LocaleIDs::getISOLanguages({const[class].FS-Param});

}
// .method private static getInstance(Landroid/icu/impl/locale/BaseLocale;Landroid/icu/impl/locale/LocaleExtensions;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::getInstance(std::shared_ptr<android::icu::impl::locale::BaseLocale> base,std::shared_ptr<android::icu::impl::locale::LocaleExtensions> exts)
{
	
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<java::util::Set> extKeys;
	std::shared_ptr<java::util::TreeMap> kwds;
	std::shared_ptr<java::util::Iterator> key_S_iterator;
	std::shared_ptr<java::lang::Character> key;
	std::shared_ptr<android::icu::impl::locale::UnicodeLocaleExtension> ext;
	std::shared_ptr<android::icu::impl::locale::UnicodeLocaleExtension> uext;
	std::shared_ptr<java::util::Iterator> bcpKey_S_iterator;
	std::shared_ptr<java::lang::String> bcpKey;
	std::shared_ptr<java::lang::String> bcpType;
	std::shared_ptr<java::lang::Object> lkey;
	std::shared_ptr<java::lang::Object> ltype;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::Set> uattributes;
	std::shared_ptr<java::lang::StringBuilder> attrbuf;
	std::shared_ptr<java::util::Iterator> attr_S_iterator;
	std::shared_ptr<java::lang::String> attr;
	std::shared_ptr<java::lang::StringBuilder> buf;
	int insertSep;
	std::shared_ptr<java::util::Iterator> kwd_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> kwd;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::String> cVar2;
	std::shared_ptr<android::icu::util::ULocale> cVar3;
	
	//    .param p0, "base"    # Landroid/icu/impl/locale/BaseLocale;
	//    .param p1, "exts"    # Landroid/icu/impl/locale/LocaleExtensions;
	id = android::icu::util::ULocale::lscvToID(base->getLanguage(), base->getScript(), base->getRegion(), base->getVariant());
	//    .local v12, "id":Ljava/lang/String;
	extKeys = exts->getKeys();
	//    .local v11, "extKeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/Character;>;"
	if ( extKeys->isEmpty() )     
		goto label_cond_159;
	kwds = std::make_shared<java::util::TreeMap>();
	//    .local v19, "kwds":Ljava/util/TreeMap;, "Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;"
	key_S_iterator = extKeys->iterator();
	//    .local v15, "key$iterator":Ljava/util/Iterator;
label_cond_27:
label_goto_27:
	if ( !(key_S_iterator->hasNext()) )  
		goto label_cond_102;
	key = key_S_iterator->next();
	key->checkCast("java::lang::Character");
	//    .local v14, "key":Ljava/lang/Character;
	ext = exts->getExtension(key);
	//    .local v10, "ext":Landroid/icu/impl/locale/Extension;
	if ( !(ext->instanceOf("android::icu::impl::locale::UnicodeLocaleExtension")) )  
		goto label_cond_ef;
	uext = ext;
	uext->checkCast("android::icu::impl::locale::UnicodeLocaleExtension");
	//    .local v23, "uext":Landroid/icu/impl/locale/UnicodeLocaleExtension;
	//    .local v24, "ukeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	bcpKey_S_iterator = uext->getUnicodeLocaleKeys()->iterator();
	//    .local v7, "bcpKey$iterator":Ljava/util/Iterator;
label_goto_4b:
	if ( !(bcpKey_S_iterator->hasNext()) )  
		goto label_cond_ad;
	bcpKey = bcpKey_S_iterator->next();
	bcpKey->checkCast("java::lang::String");
	//    .local v6, "bcpKey":Ljava/lang/String;
	bcpType = uext->getUnicodeLocaleType(bcpKey);
	//    .local v8, "bcpType":Ljava/lang/String;
	lkey = android::icu::util::ULocale::toLegacyKey(bcpKey);
	//    .local v20, "lkey":Ljava/lang/String;
	if ( bcpType->length() )     
		goto label_cond_6a;
	//    .end local v8    # "bcpType":Ljava/lang/String;
label_cond_6a:
	ltype = android::icu::util::ULocale::toLegacyType(bcpKey, bcpType);
	//    .local v21, "ltype":Ljava/lang/String;
	if ( !(lkey->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("va")))) )  
		goto label_cond_a9;
	if ( !(ltype->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("posix")))) )  
		goto label_cond_a9;
	if ( base->getVariant()->length() )     
		goto label_cond_a9;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	id = cVar0->append(id)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_POSIX")))->toString();
	goto label_goto_4b;
	// 3703    .line 3776
label_cond_a9:
	kwds->put(lkey, ltype);
	goto label_goto_4b;
	// 3709    .line 3780
	// 3710    .end local v6    # "bcpKey":Ljava/lang/String;
	// 3711    .end local v20    # "lkey":Ljava/lang/String;
	// 3712    .end local v21    # "ltype":Ljava/lang/String;
label_cond_ad:
	uattributes = uext->getUnicodeLocaleAttributes();
	//    .local v22, "uattributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( uattributes->size() <= 0 )
		goto label_cond_27;
	attrbuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v5, "attrbuf":Ljava/lang/StringBuilder;
	attr_S_iterator = uattributes->iterator();
	//    .local v4, "attr$iterator":Ljava/util/Iterator;
label_goto_c0:
	if ( !(attr_S_iterator->hasNext()) )  
		goto label_cond_dd;
	attr = attr_S_iterator->next();
	attr->checkCast("java::lang::String");
	//    .local v3, "attr":Ljava/lang/String;
	if ( attrbuf->length() <= 0 )
		goto label_cond_d9;
	attrbuf->append(0x2d);
label_cond_d9:
	attrbuf->append(attr);
	goto label_goto_c0;
	// 3772    .line 3789
	// 3773    .end local v3    # "attr":Ljava/lang/String;
label_cond_dd:
	kwds->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("attribute")), attrbuf->toString());
	goto label_goto_27;
	// 3791    .line 3792
	// 3792    .end local v4    # "attr$iterator":Ljava/util/Iterator;
	// 3793    .end local v5    # "attrbuf":Ljava/lang/StringBuilder;
	// 3794    .end local v7    # "bcpKey$iterator":Ljava/util/Iterator;
	// 3795    .end local v22    # "uattributes":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 3796    .end local v23    # "uext":Landroid/icu/impl/locale/UnicodeLocaleExtension;
	// 3797    .end local v24    # "ukeys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_ef:
	kwds->put(java::lang::String::valueOf(key), ext->getValue());
	goto label_goto_27;
	// 3817    .line 3796
	// 3818    .end local v10    # "ext":Landroid/icu/impl/locale/Extension;
	// 3819    .end local v14    # "key":Ljava/lang/Character;
label_cond_102:
	if ( kwds->isEmpty() )     
		goto label_cond_159;
	buf = std::make_shared<java::lang::StringBuilder>(id);
	//    .local v9, "buf":Ljava/lang/StringBuilder;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("@")));
	//    .local v16, "kset":Ljava/util/Set;, "Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;"
	insertSep = 0x0;
	//    .local v13, "insertSep":Z
	kwd_S_iterator = kwds->entrySet()->iterator();
	//    .local v18, "kwd$iterator":Ljava/util/Iterator;
label_goto_11e:
	if ( !(kwd_S_iterator->hasNext()) )  
		goto label_cond_155;
	kwd = kwd_S_iterator->next();
	kwd->checkCast("java::util::Map_S_Entry");
	//    .local v17, "kwd":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	if ( !(insertSep) )  
		goto label_cond_153;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
label_goto_134:
	cVar1 = kwd->getKey();
	cVar1->checkCast("java::lang::String");
	buf->append(cVar1);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("=")));
	cVar2 = kwd->getValue();
	cVar2->checkCast("java::lang::String");
	buf->append(cVar2);
	goto label_goto_11e;
	// 3912    .line 3805
label_cond_153:
	insertSep = 0x1;
	goto label_goto_134;
	// 3918    .line 3812
	// 3919    .end local v17    # "kwd":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_155:
	id = buf->toString();
	//    .end local v9    # "buf":Ljava/lang/StringBuilder;
	//    .end local v13    # "insertSep":Z
	//    .end local v15    # "key$iterator":Ljava/util/Iterator;
	//    .end local v16    # "kset":Ljava/util/Set;, "Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;"
	//    .end local v18    # "kwd$iterator":Ljava/util/Iterator;
	//    .end local v19    # "kwds":Ljava/util/TreeMap;, "Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_159:
	var140 = cVar3(id);
	return cVar3;

}
// .method public static getKeywordValue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getKeywordValue(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> keywordName)
{
	
	std::shared_ptr<android::icu::impl::LocaleIDParser> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "keywordName"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::impl::LocaleIDParser>(localeID);
	return cVar0->getKeywordValue(keywordName);

}
// .method public static getKeywords(Ljava/lang/String;)Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<java::lang::String>> android::icu::util::ULocale::getKeywords(std::shared_ptr<java::lang::String> localeID)
{
	
	std::shared_ptr<android::icu::impl::LocaleIDParser> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 3964        value = {
	// 3965            "(",
	// 3966            "Ljava/lang/String;",
	// 3967            ")",
	// 3968            "Ljava/util/Iterator",
	// 3969            "<",
	// 3970            "Ljava/lang/String;",
	// 3971            ">;"
	// 3972        }
	// 3973    .end annotation
	cVar0 = std::make_shared<android::icu::impl::LocaleIDParser>(localeID);
	return cVar0->getKeywords();

}
// .method public static getLanguage(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getLanguage(std::shared_ptr<java::lang::String> localeID)
{
	
	std::shared_ptr<android::icu::impl::LocaleIDParser> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::impl::LocaleIDParser>(localeID);
	return cVar0->getLanguage();

}
// .method public static getName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getName(std::shared_ptr<java::lang::String> localeID)
{
	
	std::shared_ptr<java::lang::String> tmpLocaleID;
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	if ( !(localeID) )  
		goto label_cond_2d;
	if ( !(( localeID->contains(std::make_shared<java::lang::String>(std::make_shared<char[]>("@"))) ^ 0x1)) )  
		goto label_cond_2d;
	if ( android::icu::util::ULocale::getShortestSubtagLength(localeID) != 0x1 )
		goto label_cond_2d;
	tmpLocaleID = android::icu::util::ULocale::forLanguageTag(localeID)->getName();
	//    .local v0, "tmpLocaleID":Ljava/lang/String;
	if ( tmpLocaleID->length() )     
		goto label_cond_24;
label_cond_24:
label_goto_24:
	cVar0 = android::icu::util::ULocale::nameCache->getInstance(tmpLocaleID, 0x0);
	cVar0->checkCast("java::lang::String");
	return cVar0;
	// 4066    .line 1094
	// 4067    .end local v0    # "tmpLocaleID":Ljava/lang/String;
label_cond_2d:
	//    .restart local v0    # "tmpLocaleID":Ljava/lang/String;
	goto label_goto_24;

}
// .method public static getRegionForSupplementalData(Landroid/icu/util/ULocale;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getRegionForSupplementalData(std::shared_ptr<android::icu::util::ULocale> locale,bool inferRegion)
{
	
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::String> regionUpper;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "inferRegion"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 4080    .end annotation
	region = locale->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("rg")));
	//    .local v1, "region":Ljava/lang/String;
	if ( !(region) )  
		goto label_cond_24;
	if ( region->length() != 0x6 )
		goto label_cond_24;
	regionUpper = android::icu::impl::locale::AsciiUtil::toUpperString(region);
	//    .local v2, "regionUpper":Ljava/lang/String;
	if ( !(regionUpper->endsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("ZZZZ")))) )  
		goto label_cond_24;
	return regionUpper->substring(0x0, 0x2);
	// 4128    .line 948
	// 4129    .end local v2    # "regionUpper":Ljava/lang/String;
label_cond_24:
	region = locale->getCountry();
	if ( region->length() )     
		goto label_cond_38;
	if ( !(inferRegion) )  
		goto label_cond_38;
	//    .local v0, "maximized":Landroid/icu/util/ULocale;
	//    .end local v0    # "maximized":Landroid/icu/util/ULocale;
label_cond_38:
	return region;

}
// .method public static getScript(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getScript(std::shared_ptr<java::lang::String> localeID)
{
	
	std::shared_ptr<android::icu::impl::LocaleIDParser> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::impl::LocaleIDParser>(localeID);
	return cVar0->getScript();

}
// .method private static getShortestSubtagLength(Ljava/lang/String;)I
int android::icu::util::ULocale::getShortestSubtagLength(std::shared_ptr<java::lang::String> localeID)
{
	
	int localeIDLength;
	int length;
	int reset;
	int tmpLength;
	int i;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	localeIDLength = localeID->length();
	//    .local v2, "localeIDLength":I
	length = localeIDLength;
	//    .local v1, "length":I
	reset = 0x1;
	//    .local v3, "reset":Z
	tmpLength = 0x0;
	//    .local v4, "tmpLength":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_8:
	if ( i >= localeIDLength )
		goto label_cond_2a;
	if ( localeID->charAt(i) == 0x5f )
		goto label_cond_23;
	if ( localeID->charAt(i) == 0x2d )
		goto label_cond_23;
	if ( !(reset) )  
		goto label_cond_1e;
	reset = 0x0;
	tmpLength = 0x0;
label_cond_1e:
	tmpLength = ( tmpLength + 0x1);
label_goto_20:
	i = ( i + 0x1);
	goto label_goto_8;
	// 4244    .line 1069
label_cond_23:
	if ( !(tmpLength) )  
		goto label_cond_28;
	if ( tmpLength >= length )
		goto label_cond_28;
	length = tmpLength;
label_cond_28:
	0x1;
	goto label_goto_20;
	// 4259    .line 1076
label_cond_2a:
	return length;

}
// .method public static getVariant(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getVariant(std::shared_ptr<java::lang::String> localeID)
{
	
	std::shared_ptr<android::icu::impl::LocaleIDParser> cVar0;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::impl::LocaleIDParser>(localeID);
	return cVar0->getVariant();

}
// .method private static initCANONICALIZE_MAP()V
void android::icu::util::ULocale::initCANONICALIZE_MAP()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> tempCANONICALIZE_MAP;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar7;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar8;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar9;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar10;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar11;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar12;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar13;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar14;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar15;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar16;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar17;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar18;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar19;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar20;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar21;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar22;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar23;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar24;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar25;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar26;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar27;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar28;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar29;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar30;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar31;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar32;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar33;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar34;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar35;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar36;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar37;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar38;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar39;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar40;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar41;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar42;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar43;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar44;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar45;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar46;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar47;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar48;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar49;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar50;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar51;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar52;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar53;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar54;
	std::shared_ptr<android::icu::util::ULocale> cVar55;
	std::shared<std::vector<std::vector<std::vector<java::lang::String>>>> tempVariantsToKeywords;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar56;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar57;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar58;
	std::shared_ptr<android::icu::util::ULocale> cVar59;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = 0x0;
	if ( android::icu::util::ULocale::CANONICALIZE_MAP )     
		goto label_cond_4b5;
	tempCANONICALIZE_MAP = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(0x32);
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar5[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("C"));
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en_US_POSIX"));
	cVar5[cVar1] = cVar4;
	cVar5[cVar0] = cVar4;
	tempCANONICALIZE_MAP[cVar3] = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar6[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("art_LOJBAN"));
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("jbo"));
	cVar6[cVar1] = cVar4;
	cVar6[cVar0] = cVar4;
	tempCANONICALIZE_MAP[cVar2] = cVar6;
	cVar7 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar7[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("az_AZ_CYRL"));
	cVar7[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("az_Cyrl_AZ"));
	cVar7[cVar1] = cVar4;
	cVar7[cVar0] = cVar4;
	tempCANONICALIZE_MAP[cVar1] = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar8[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("az_AZ_LATN"));
	cVar8[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("az_Latn_AZ"));
	cVar8[cVar1] = cVar4;
	cVar8[cVar0] = cVar4;
	tempCANONICALIZE_MAP[cVar0] = cVar8;
	cVar9 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar9[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ca_ES_PREEURO"));
	cVar9[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ca_ES"));
	cVar9[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar9[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ESP"));
	tempCANONICALIZE_MAP[0x4] = cVar9;
	cVar10 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar10[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("cel_GAULISH"));
	cVar10[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("cel__GAULISH"));
	cVar10[cVar1] = cVar4;
	cVar10[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x5] = cVar10;
	cVar11 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar11[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de_1901"));
	cVar11[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de__1901"));
	cVar11[cVar1] = cVar4;
	cVar11[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x6] = cVar11;
	cVar12 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar12[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de_1906"));
	cVar12[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de__1906"));
	cVar12[cVar1] = cVar4;
	cVar12[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x7] = cVar12;
	cVar13 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar13[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de__PHONEBOOK"));
	cVar13[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de"));
	cVar13[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("collation"));
	cVar13[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("phonebook"));
	tempCANONICALIZE_MAP[0x8] = cVar13;
	cVar14 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar14[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de_AT_PREEURO"));
	cVar14[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de_AT"));
	cVar14[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar14[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ATS"));
	tempCANONICALIZE_MAP[0x9] = cVar14;
	cVar15 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar15[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de_DE_PREEURO"));
	cVar15[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de_DE"));
	cVar15[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar15[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("DEM"));
	tempCANONICALIZE_MAP[0xa] = cVar15;
	cVar16 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar16[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de_LU_PREEURO"));
	cVar16[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("de_LU"));
	cVar16[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar16[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("EUR"));
	tempCANONICALIZE_MAP[0xb] = cVar16;
	cVar17 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar17[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("el_GR_PREEURO"));
	cVar17[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("el_GR"));
	cVar17[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar17[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("GRD"));
	tempCANONICALIZE_MAP[0xc] = cVar17;
	cVar18 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar18[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en_BOONT"));
	cVar18[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en__BOONT"));
	cVar18[cVar1] = cVar4;
	cVar18[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0xd] = cVar18;
	cVar19 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar19[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en_SCOUSE"));
	cVar19[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en__SCOUSE"));
	cVar19[cVar1] = cVar4;
	cVar19[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0xe] = cVar19;
	cVar20 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar20[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en_BE_PREEURO"));
	cVar20[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en_BE"));
	cVar20[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar20[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("BEF"));
	tempCANONICALIZE_MAP[0xf] = cVar20;
	cVar21 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar21[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en_IE_PREEURO"));
	cVar21[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("en_IE"));
	cVar21[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar21[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IEP"));
	tempCANONICALIZE_MAP[0x10] = cVar21;
	cVar22 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar22[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("es__TRADITIONAL"));
	cVar22[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("es"));
	cVar22[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("collation"));
	cVar22[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("traditional"));
	tempCANONICALIZE_MAP[0x11] = cVar22;
	cVar23 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar23[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("es_ES_PREEURO"));
	cVar23[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("es_ES"));
	cVar23[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar23[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ESP"));
	tempCANONICALIZE_MAP[0x12] = cVar23;
	cVar24 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar24[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("eu_ES_PREEURO"));
	cVar24[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("eu_ES"));
	cVar24[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar24[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ESP"));
	tempCANONICALIZE_MAP[0x13] = cVar24;
	cVar25 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar25[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fi_FI_PREEURO"));
	cVar25[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fi_FI"));
	cVar25[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar25[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FIM"));
	tempCANONICALIZE_MAP[0x14] = cVar25;
	cVar26 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar26[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fr_BE_PREEURO"));
	cVar26[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fr_BE"));
	cVar26[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar26[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("BEF"));
	tempCANONICALIZE_MAP[0x15] = cVar26;
	cVar27 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar27[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fr_FR_PREEURO"));
	cVar27[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fr_FR"));
	cVar27[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar27[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("FRF"));
	tempCANONICALIZE_MAP[0x16] = cVar27;
	cVar28 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar28[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fr_LU_PREEURO"));
	cVar28[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("fr_LU"));
	cVar28[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar28[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("LUF"));
	tempCANONICALIZE_MAP[0x17] = cVar28;
	cVar29 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar29[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ga_IE_PREEURO"));
	cVar29[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ga_IE"));
	cVar29[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar29[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("IEP"));
	tempCANONICALIZE_MAP[0x18] = cVar29;
	cVar30 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar30[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("gl_ES_PREEURO"));
	cVar30[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("gl_ES"));
	cVar30[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar30[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ESP"));
	tempCANONICALIZE_MAP[0x19] = cVar30;
	cVar31 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar31[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hi__DIRECT"));
	cVar31[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("hi"));
	cVar31[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("collation"));
	cVar31[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("direct"));
	tempCANONICALIZE_MAP[0x1a] = cVar31;
	cVar32 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar32[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("it_IT_PREEURO"));
	cVar32[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("it_IT"));
	cVar32[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar32[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ITL"));
	tempCANONICALIZE_MAP[0x1b] = cVar32;
	cVar33 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar33[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ja_JP_TRADITIONAL"));
	cVar33[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ja_JP"));
	cVar33[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar"));
	cVar33[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("japanese"));
	tempCANONICALIZE_MAP[0x1c] = cVar33;
	cVar34 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar34[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nl_BE_PREEURO"));
	cVar34[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nl_BE"));
	cVar34[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar34[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("BEF"));
	tempCANONICALIZE_MAP[0x1d] = cVar34;
	cVar35 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar35[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nl_NL_PREEURO"));
	cVar35[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nl_NL"));
	cVar35[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar35[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NLG"));
	tempCANONICALIZE_MAP[0x1e] = cVar35;
	cVar36 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar36[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("pt_PT_PREEURO"));
	cVar36[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("pt_PT"));
	cVar36[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar36[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PTE"));
	tempCANONICALIZE_MAP[0x1f] = cVar36;
	cVar37 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar37[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sl_ROZAJ"));
	cVar37[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sl__ROZAJ"));
	cVar37[cVar1] = cVar4;
	cVar37[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x20] = cVar37;
	cVar38 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar38[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sr_SP_CYRL"));
	cVar38[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sr_Cyrl_RS"));
	cVar38[cVar1] = cVar4;
	cVar38[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x21] = cVar38;
	cVar39 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar39[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sr_SP_LATN"));
	cVar39[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sr_Latn_RS"));
	cVar39[cVar1] = cVar4;
	cVar39[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x22] = cVar39;
	cVar40 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar40[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sr_YU_CYRILLIC"));
	cVar40[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("sr_Cyrl_RS"));
	cVar40[cVar1] = cVar4;
	cVar40[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x23] = cVar40;
	cVar41 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar41[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("th_TH_TRADITIONAL"));
	cVar41[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("th_TH"));
	cVar41[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("calendar"));
	cVar41[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("buddhist"));
	tempCANONICALIZE_MAP[0x24] = cVar41;
	cVar42 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar42[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("uz_UZ_CYRILLIC"));
	cVar42[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("uz_Cyrl_UZ"));
	cVar42[cVar1] = cVar4;
	cVar42[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x25] = cVar42;
	cVar43 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar43[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("uz_UZ_CYRL"));
	cVar43[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("uz_Cyrl_UZ"));
	cVar43[cVar1] = cVar4;
	cVar43[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x26] = cVar43;
	cVar44 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar44[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("uz_UZ_LATN"));
	cVar44[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("uz_Latn_UZ"));
	cVar44[cVar1] = cVar4;
	cVar44[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x27] = cVar44;
	cVar45 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar45[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_CHS"));
	cVar45[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_Hans"));
	cVar45[cVar1] = cVar4;
	cVar45[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x28] = cVar45;
	cVar46 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar46[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_CHT"));
	cVar46[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_Hant"));
	cVar46[cVar1] = cVar4;
	cVar46[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x29] = cVar46;
	cVar47 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar47[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_GAN"));
	cVar47[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh__GAN"));
	cVar47[cVar1] = cVar4;
	cVar47[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x2a] = cVar47;
	cVar48 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar48[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_GUOYU"));
	cVar48[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh"));
	cVar48[cVar1] = cVar4;
	cVar48[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x2b] = cVar48;
	cVar49 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar49[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_HAKKA"));
	cVar49[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh__HAKKA"));
	cVar49[cVar1] = cVar4;
	cVar49[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x2c] = cVar49;
	cVar50 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar50[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_MIN"));
	cVar50[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh__MIN"));
	cVar50[cVar1] = cVar4;
	cVar50[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x2d] = cVar50;
	cVar51 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar51[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_MIN_NAN"));
	cVar51[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh__MINNAN"));
	cVar51[cVar1] = cVar4;
	cVar51[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x2e] = cVar51;
	cVar52 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar52[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_WUU"));
	cVar52[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh__WUU"));
	cVar52[cVar1] = cVar4;
	cVar52[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x2f] = cVar52;
	cVar53 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar53[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_XIANG"));
	cVar53[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh__XIANG"));
	cVar53[cVar1] = cVar4;
	cVar53[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x30] = cVar53;
	cVar54 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar54[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh_YUE"));
	cVar54[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("zh__YUE"));
	cVar54[cVar1] = cVar4;
	cVar54[cVar0] = cVar4;
	tempCANONICALIZE_MAP[0x31] = cVar54;
	//    .local v0, "tempCANONICALIZE_MAP":[[Ljava/lang/String;
	cVar55 = android::icu::util::ULocale();
	cVar55->monitor_enter();
	try {
	//label_try_start_4ae:
	if ( android::icu::util::ULocale::CANONICALIZE_MAP )     
		goto label_cond_4b4;
	android::icu::util::ULocale::CANONICALIZE_MAP = tempCANONICALIZE_MAP;
	//label_try_end_4b4:
	}
	catch (...){
		goto label_catchall_4ff;
	}
	//    .catchall {:try_start_4ae .. :try_end_4b4} :catchall_4ff
label_cond_4b4:
	cVar55->monitor_exit();
label_cond_4b5:
	if ( android::icu::util::ULocale::variantsToKeywords )     
		goto label_cond_4fe;
	tempVariantsToKeywords = std::make_shared<std::vector<std::vector<std::vector<java::lang::String>>>>(cVar0);
	cVar56 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar56[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("EURO"));
	cVar56[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currency"));
	cVar56[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("EUR"));
	tempVariantsToKeywords[cVar3] = cVar56;
	cVar57 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar57[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("PINYIN"));
	cVar57[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("collation"));
	cVar57[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("pinyin"));
	tempVariantsToKeywords[cVar2] = cVar57;
	cVar58 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar0);
	cVar58[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("STROKE"));
	cVar58[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("collation"));
	cVar58[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("stroke"));
	tempVariantsToKeywords[cVar1] = cVar58;
	//    .local v1, "tempVariantsToKeywords":[[Ljava/lang/String;
	cVar59 = android::icu::util::ULocale();
	cVar59->monitor_enter();
	try {
	//label_try_start_4f7:
	if ( android::icu::util::ULocale::variantsToKeywords )     
		goto label_cond_4fd;
	android::icu::util::ULocale::variantsToKeywords = tempVariantsToKeywords;
	//label_try_end_4fd:
	}
	catch (...){
		goto label_catchall_502;
	}
	//    .catchall {:try_start_4f7 .. :try_end_4fd} :catchall_502
label_cond_4fd:
	cVar59->monitor_exit();
	//    .end local v1    # "tempVariantsToKeywords":[[Ljava/lang/String;
label_cond_4fe:
	return;
	// 5548    .line 367
label_catchall_4ff:
	// move-exception
	
	cVar55->monitor_exit();
	// throw
	throw;
	// 5556    .line 384
	// 5557    .restart local v1    # "tempVariantsToKeywords":[[Ljava/lang/String;
label_catchall_502:
	// move-exception
	
	cVar59->monitor_exit();
	// throw
	throw;

}
// .method private static isEmptyString(Ljava/lang/String;)Z
bool android::icu::util::ULocale::isEmptyString(std::shared_ptr<java::lang::String> string)
{
	
	bool cVar0;
	
	//    .param p0, "string"    # Ljava/lang/String;
	cVar0 = 0x1;
	if ( !(string) )  
		goto label_cond_a;
	if ( string->length() )     
		goto label_cond_b;
label_cond_a:
label_goto_a:
	return cVar0;
label_cond_b:
	cVar0 = 0x0;
	goto label_goto_a;

}
// .method private static lookupLikelySubtags(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::lookupLikelySubtags(std::shared_ptr<java::lang::String> localeId)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "localeId"    # Ljava/lang/String;
	//    .local v0, "bundle":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_a:
	//label_try_end_d:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_f;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_a .. :try_end_d} :catch_f
	return android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("likelySubtags")))->getString(localeId);
	// 5620    .line 2835
label_catch_f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/util/MissingResourceException;
	return 0x0;

}
// .method private static lscvToID(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::lscvToID(std::shared_ptr<java::lang::String> lang,std::shared_ptr<java::lang::String> script,std::shared_ptr<java::lang::String> country,std::shared_ptr<java::lang::String> variant)
{
	
	char cVar0;
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	//    .param p0, "lang"    # Ljava/lang/String;
	//    .param p1, "script"    # Ljava/lang/String;
	//    .param p2, "country"    # Ljava/lang/String;
	//    .param p3, "variant"    # Ljava/lang/String;
	cVar0 = 0x5f;
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	if ( !(lang) )  
		goto label_cond_12;
	if ( lang->length() <= 0 )
		goto label_cond_12;
	buf->append(lang);
label_cond_12:
	if ( !(script) )  
		goto label_cond_20;
	if ( script->length() <= 0 )
		goto label_cond_20;
	buf->append(cVar0);
	buf->append(script);
label_cond_20:
	if ( !(country) )  
		goto label_cond_2e;
	if ( country->length() <= 0 )
		goto label_cond_2e;
	buf->append(cVar0);
	buf->append(country);
label_cond_2e:
	if ( !(variant) )  
		goto label_cond_47;
	if ( variant->length() <= 0 )
		goto label_cond_47;
	if ( !(country) )  
		goto label_cond_3e;
	if ( country->length() )     
		goto label_cond_41;
label_cond_3e:
	buf->append(cVar0);
label_cond_41:
	buf->append(cVar0);
	buf->append(variant);
label_cond_47:
	return buf->toString();

}
// .method public static minimizeSubtags(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::minimizeSubtags(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	//    .param p0, "loc"    # Landroid/icu/util/ULocale;
	return android::icu::util::ULocale::minimizeSubtags(loc, android::icu::util::ULocale_S_Minimize::FAVOR_REGION);

}
// .method public static minimizeSubtags(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale$Minimize;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::minimizeSubtags(std::shared_ptr<android::icu::util::ULocale> loc,std::shared_ptr<android::icu::util::ULocale_S_Minimize> fieldToFavor)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared<std::vector<std::vector<java::lang::String>>> tags;
	int trailingIndex;
	std::shared_ptr<java::lang::String> originalLang;
	std::shared_ptr<java::lang::String> originalScript;
	std::shared_ptr<java::lang::String> originalRegion;
	std::shared_ptr<java::lang::String> originalTrailing;
	std::shared_ptr<java::lang::String> maximizedLocaleID;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	std::shared_ptr<android::icu::util::ULocale> cVar2;
	std::shared_ptr<android::icu::util::ULocale> cVar3;
	std::shared_ptr<android::icu::util::ULocale> cVar4;
	std::shared_ptr<android::icu::util::ULocale> cVar5;
	
	//    .param p0, "loc"    # Landroid/icu/util/ULocale;
	//    .param p1, "fieldToFavor"    # Landroid/icu/util/ULocale$Minimize;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 5750    .end annotation
	cVar0 = 0x0;
	tags = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x3);
	//    .local v7, "tags":[Ljava/lang/String;
	trailingIndex = android::icu::util::ULocale::parseTagString(loc->localeID, tags);
	//    .local v8, "trailingIndex":I
	originalLang = tags[0x0];
	//    .local v2, "originalLang":Ljava/lang/String;
	originalScript = tags[0x1];
	//    .local v4, "originalScript":Ljava/lang/String;
	originalRegion = tags[0x2];
	//    .local v3, "originalRegion":Ljava/lang/String;
	0x0;
	//    .local v5, "originalTrailing":Ljava/lang/String;
	if ( trailingIndex >= loc->localeID->length() )
		goto label_cond_22;
	originalTrailing = loc->localeID->substring(trailingIndex);
	//    .end local v5    # "originalTrailing":Ljava/lang/String;
label_cond_22:
	maximizedLocaleID = android::icu::util::ULocale::createLikelySubtagsString(originalLang, originalScript, originalRegion, cVar0);
	//    .local v0, "maximizedLocaleID":Ljava/lang/String;
	if ( !(android::icu::util::ULocale::isEmptyString(maximizedLocaleID)) )  
		goto label_cond_2d;
	return loc;
	// 5826    .line 2474
label_cond_2d:
	//    .local v6, "tag":Ljava/lang/String;
	if ( !(android::icu::util::ULocale::createLikelySubtagsString(originalLang, cVar0, cVar0, cVar0)->equals(maximizedLocaleID)) )  
		goto label_cond_41;
	//    .local v1, "newLocaleID":Ljava/lang/String;
	cVar1 = std::make_shared<android::icu::util::ULocale>(android::icu::util::ULocale::createTagString(originalLang, cVar0, cVar0, originalTrailing));
	return cVar1;
	// 5853    .line 2495
	// 5854    .end local v1    # "newLocaleID":Ljava/lang/String;
label_cond_41:
	if ( fieldToFavor != android::icu::util::ULocale_S_Minimize::FAVOR_REGION )
		goto label_cond_79;
	if ( !(originalRegion->length()) )  
		goto label_cond_5f;
	if ( !(android::icu::util::ULocale::createLikelySubtagsString(originalLang, cVar0, originalRegion, cVar0)->equals(maximizedLocaleID)) )  
		goto label_cond_5f;
	//    .restart local v1    # "newLocaleID":Ljava/lang/String;
	cVar2 = std::make_shared<android::icu::util::ULocale>(android::icu::util::ULocale::createTagString(originalLang, cVar0, originalRegion, originalTrailing));
	return cVar2;
	// 5892    .line 2515
	// 5893    .end local v1    # "newLocaleID":Ljava/lang/String;
label_cond_5f:
	if ( !(originalScript->length()) )  
		goto label_cond_ad;
	if ( !(android::icu::util::ULocale::createLikelySubtagsString(originalLang, originalScript, cVar0, cVar0)->equals(maximizedLocaleID)) )  
		goto label_cond_ad;
	//    .restart local v1    # "newLocaleID":Ljava/lang/String;
	cVar3 = std::make_shared<android::icu::util::ULocale>(android::icu::util::ULocale::createTagString(originalLang, originalScript, cVar0, originalTrailing));
	return cVar3;
	// 5926    .line 2535
	// 5927    .end local v1    # "newLocaleID":Ljava/lang/String;
label_cond_79:
	if ( !(originalScript->length()) )  
		goto label_cond_93;
	if ( !(android::icu::util::ULocale::createLikelySubtagsString(originalLang, originalScript, cVar0, cVar0)->equals(maximizedLocaleID)) )  
		goto label_cond_93;
	//    .restart local v1    # "newLocaleID":Ljava/lang/String;
	cVar4 = std::make_shared<android::icu::util::ULocale>(android::icu::util::ULocale::createTagString(originalLang, originalScript, cVar0, originalTrailing));
	return cVar4;
	// 5960    .line 2554
	// 5961    .end local v1    # "newLocaleID":Ljava/lang/String;
label_cond_93:
	if ( !(originalRegion->length()) )  
		goto label_cond_ad;
	if ( !(android::icu::util::ULocale::createLikelySubtagsString(originalLang, cVar0, originalRegion, cVar0)->equals(maximizedLocaleID)) )  
		goto label_cond_ad;
	//    .restart local v1    # "newLocaleID":Ljava/lang/String;
	cVar5 = std::make_shared<android::icu::util::ULocale>(android::icu::util::ULocale::createTagString(originalLang, cVar0, originalRegion, originalTrailing));
	return cVar5;
	// 5994    .line 2574
	// 5995    .end local v1    # "newLocaleID":Ljava/lang/String;
label_cond_ad:
	return loc;

}
// .method static parseAcceptLanguage(Ljava/lang/String;Z)[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::parseAcceptLanguage(std::shared_ptr<java::lang::String> acceptLanguage,bool isLenient)
{
	
	std::shared_ptr<java::util::TreeMap> map;
	std::shared_ptr<java::lang::StringBuilder> languageRangeBuf;
	std::shared_ptr<java::lang::StringBuilder> qvalBuf;
	int state;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	int q1;
	int n;
	int gotLanguageQ;
	char c;
	std::shared_ptr<java::text::ParseException> cVar2;
	auto q;
	double q;
	std::shared_ptr<android::icu::util::ULocale_S_1ULocaleAcceptLanguageQ> entry;
	std::shared_ptr<android::icu::util::ULocale> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::text::ParseException> cVar4;
	std::shared_ptr<std::vector<android::icu::util::ULocale>> acceptList;
	
	//    .param p0, "acceptLanguage"    # Ljava/lang/String;
	//    .param p1, "isLenient"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 6005        value = {
	// 6006            Ljava/text/ParseException;
	// 6007        }
	// 6008    .end annotation
	map = std::make_shared<java::util::TreeMap>();
	//    .local v7, "map":Ljava/util/TreeMap;, "Ljava/util/TreeMap<Landroid/icu/util/ULocale$1ULocaleAcceptLanguageQ;Landroid/icu/util/ULocale;>;"
	languageRangeBuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v6, "languageRangeBuf":Ljava/lang/StringBuilder;
	qvalBuf = std::make_shared<java::lang::StringBuilder>();
	//    .local v13, "qvalBuf":Ljava/lang/StringBuilder;
	state = 0x0;
	//    .local v15, "state":I
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = cVar0->append(acceptLanguage)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(",")))->toString();
	//    .local v16, "subTag":Z
	q1 = 0x0;
	//    .local v12, "q1":Z
	n = 0x0;
	//    .local v8, "n":I
label_goto_2c:
	if ( n >= cVar1->length() )
		goto label_cond_2a5;
	gotLanguageQ = 0x0;
	//    .local v5, "gotLanguageQ":Z
	c = cVar1->charAt(n);
	//    .local v3, "c":C
	// switch
	{
	auto item = ( state );
	if (item == 0) goto label_pswitch_51;
	if (item == 1) goto label_pswitch_89;
	if (item == 2) goto label_pswitch_fc;
	if (item == 3) goto label_pswitch_120;
	if (item == 4) goto label_pswitch_141;
	if (item == 5) goto label_pswitch_159;
	if (item == 6) goto label_pswitch_171;
	if (item == 7) goto label_pswitch_1ab;
	if (item == 8) goto label_pswitch_1d4;
	if (item == 9) goto label_pswitch_1f9;
	if (item == 10) goto label_pswitch_231;
	}
label_cond_3e:
label_goto_3e:
	if ( state != -0x1 )
		goto label_cond_249;
	var34 = cVar2(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid Accept-Language")), n);
	// throw
	throw cVar2;
	// 6114    .line 2079
label_pswitch_51:
	if ( 0x41 >  c )
		goto label_cond_64;
	if ( c >  0x5a )
		goto label_cond_64;
label_cond_5d:
	languageRangeBuf->append(c);
	state = 0x1;
	0x0;
	goto label_goto_3e;
label_cond_64:
	if ( 0x61 >  c )
		goto label_cond_70;
	if ( c <= 0x7a )
		goto label_cond_5d;
label_cond_70:
	if ( c != 0x2a )
		goto label_cond_7b;
	languageRangeBuf->append(c);
	state = 0x2;
	goto label_goto_3e;
	// 6170    .line 2087
label_cond_7b:
	if ( c == 0x20 )
		goto label_cond_3e;
	if ( c == 0x9 )
		goto label_cond_3e;
	state = -0x1;
	goto label_goto_3e;
	// 6189    .line 2093
label_pswitch_89:
	if ( 0x41 >  c )
		goto label_cond_99;
	if ( c >  0x5a )
		goto label_cond_99;
label_cond_95:
	languageRangeBuf->append(c);
	goto label_goto_3e;
	// 6209    .line 2093
label_cond_99:
	if ( 0x61 >  c )
		goto label_cond_a5;
	if ( c <= 0x7a )
		goto label_cond_95;
label_cond_a5:
	if ( c != 0x2d )
		goto label_cond_b1;
	0x1;
	languageRangeBuf->append(c);
	goto label_goto_3e;
	// 6239    .line 2098
label_cond_b1:
	if ( c != 0x5f )
		goto label_cond_c2;
	if ( !(isLenient) )  
		goto label_cond_bf;
	0x1;
	languageRangeBuf->append(c);
	goto label_goto_3e;
	// 6258    .line 2103
label_cond_bf:
	state = -0x1;
	goto label_goto_3e;
	// 6264    .line 2105
label_cond_c2:
	if ( 0x30 >  c )
		goto label_cond_d8;
	if ( c >  0x39 )
		goto label_cond_d8;
	if ( !(0x0) )  
		goto label_cond_d5;
	languageRangeBuf->append(c);
	goto label_goto_3e;
	// 6286    .line 2110
label_cond_d5:
	state = -0x1;
	goto label_goto_3e;
	// 6292    .line 2112
label_cond_d8:
	if ( c != 0x2c )
		goto label_cond_e1;
	gotLanguageQ = 0x1;
	goto label_goto_3e;
	// 6305    .line 2115
label_cond_e1:
	if ( c == 0x20 )
		goto label_cond_ed;
	if ( c != 0x9 )
		goto label_cond_f0;
label_cond_ed:
	state = 0x3;
	goto label_goto_3e;
	// 6326    .line 2118
label_cond_f0:
	if ( c != 0x3b )
		goto label_cond_f9;
	state = 0x4;
	goto label_goto_3e;
	// 6339    .line 2123
label_cond_f9:
	state = -0x1;
	goto label_goto_3e;
	// 6345    .line 2127
label_pswitch_fc:
	if ( c != 0x2c )
		goto label_cond_105;
	gotLanguageQ = 0x1;
	goto label_goto_3e;
	// 6358    .line 2130
label_cond_105:
	if ( c == 0x20 )
		goto label_cond_111;
	if ( c != 0x9 )
		goto label_cond_114;
label_cond_111:
	state = 0x3;
	goto label_goto_3e;
	// 6379    .line 2133
label_cond_114:
	if ( c != 0x3b )
		goto label_cond_11d;
	state = 0x4;
	goto label_goto_3e;
	// 6392    .line 2138
label_cond_11d:
	state = -0x1;
	goto label_goto_3e;
	// 6398    .line 2142
label_pswitch_120:
	if ( c != 0x2c )
		goto label_cond_129;
	gotLanguageQ = 0x1;
	goto label_goto_3e;
	// 6411    .line 2145
label_cond_129:
	if ( c != 0x3b )
		goto label_cond_132;
	state = 0x4;
	goto label_goto_3e;
	// 6424    .line 2148
label_cond_132:
	if ( c == 0x20 )
		goto label_cond_3e;
	if ( c == 0x9 )
		goto label_cond_3e;
	state = -0x1;
	goto label_goto_3e;
	// 6443    .line 2154
label_pswitch_141:
	if ( c != 0x71 )
		goto label_cond_14a;
	state = 0x5;
	goto label_goto_3e;
	// 6456    .line 2157
label_cond_14a:
	if ( c == 0x20 )
		goto label_cond_3e;
	if ( c == 0x9 )
		goto label_cond_3e;
	state = -0x1;
	goto label_goto_3e;
	// 6475    .line 2163
label_pswitch_159:
	if ( c != 0x3d )
		goto label_cond_162;
	state = 0x6;
	goto label_goto_3e;
	// 6488    .line 2166
label_cond_162:
	if ( c == 0x20 )
		goto label_cond_3e;
	if ( c == 0x9 )
		goto label_cond_3e;
	state = -0x1;
	goto label_goto_3e;
	// 6507    .line 2172
label_pswitch_171:
	if ( c != 0x30 )
		goto label_cond_17e;
	0x0;
	qvalBuf->append(c);
	state = 0x7;
	goto label_goto_3e;
	// 6526    .line 2177
label_cond_17e:
	if ( c != 0x31 )
		goto label_cond_18a;
	qvalBuf->append(c);
	state = 0x7;
	goto label_goto_3e;
	// 6542    .line 2181
label_cond_18a:
	if ( c != 0x2e )
		goto label_cond_19c;
	if ( !(isLenient) )  
		goto label_cond_199;
	qvalBuf->append(c);
	state = 0x8;
	goto label_goto_3e;
	// 6561    .line 2186
label_cond_199:
	state = -0x1;
	goto label_goto_3e;
	// 6567    .line 2188
label_cond_19c:
	if ( c == 0x20 )
		goto label_cond_3e;
	if ( c == 0x9 )
		goto label_cond_3e;
	state = -0x1;
	goto label_goto_3e;
	// 6586    .line 2194
label_pswitch_1ab:
	if ( c != 0x2e )
		goto label_cond_1b8;
	qvalBuf->append(c);
	state = 0x8;
	goto label_goto_3e;
	// 6602    .line 2198
label_cond_1b8:
	if ( c != 0x2c )
		goto label_cond_1c1;
	gotLanguageQ = 0x1;
	goto label_goto_3e;
	// 6615    .line 2201
label_cond_1c1:
	if ( c == 0x20 )
		goto label_cond_1cd;
	if ( c != 0x9 )
		goto label_cond_1d1;
label_cond_1cd:
	state = 0xa;
	goto label_goto_3e;
	// 6636    .line 2206
label_cond_1d1:
	state = -0x1;
	goto label_goto_3e;
	// 6642    .line 2210
label_pswitch_1d4:
	if ( 0x30 >  c )
		goto label_cond_1f6;
	if ( c >  0x39 )
		goto label_cond_1f6;
	if ( !(q1) )  
		goto label_cond_1ef;
	if ( c == 0x30 )
		goto label_cond_1ef;
	if ( !(( isLenient ^ 0x1)) )  
		goto label_cond_1ef;
	state = -0x1;
	goto label_goto_3e;
	// 6674    .line 2216
label_cond_1ef:
	qvalBuf->append(c);
	state = 0x9;
	goto label_goto_3e;
	// 6683    .line 2221
label_cond_1f6:
	state = -0x1;
	goto label_goto_3e;
	// 6689    .line 2225
label_pswitch_1f9:
	if ( 0x30 >  c )
		goto label_cond_215;
	if ( c >  0x39 )
		goto label_cond_215;
	if ( !(q1) )  
		goto label_cond_210;
	if ( c == 0x30 )
		goto label_cond_210;
	state = -0x1;
	goto label_goto_3e;
	// 6718    .line 2230
label_cond_210:
	qvalBuf->append(c);
	goto label_goto_3e;
	// 6724    .line 2232
label_cond_215:
	if ( c != 0x2c )
		goto label_cond_21e;
	gotLanguageQ = 0x1;
	goto label_goto_3e;
	// 6737    .line 2235
label_cond_21e:
	if ( c == 0x20 )
		goto label_cond_22a;
	if ( c != 0x9 )
		goto label_cond_22e;
label_cond_22a:
	state = 0xa;
	goto label_goto_3e;
	// 6758    .line 2240
label_cond_22e:
	state = -0x1;
	goto label_goto_3e;
	// 6764    .line 2244
label_pswitch_231:
	if ( c != 0x2c )
		goto label_cond_23a;
	gotLanguageQ = 0x1;
	goto label_goto_3e;
	// 6777    .line 2247
label_cond_23a:
	if ( c == 0x20 )
		goto label_cond_3e;
	if ( c == 0x9 )
		goto label_cond_3e;
	state = -0x1;
	goto label_goto_3e;
	// 6796    .line 2257
label_cond_249:
	if ( !(gotLanguageQ) )  
		goto label_cond_29d;
	q = 0x3ff0000000000000L;
	//    .local v10, "q":D
	if ( !(qvalBuf->length()) )  
		goto label_cond_263;
	try {
	//label_try_start_253:
	//label_try_end_25a:
	}
	catch (java::lang::NumberFormatException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2a1;
	}
	//    .catch Ljava/lang/NumberFormatException; {:try_start_253 .. :try_end_25a} :catch_2a1
	q = java::lang::Double::parseDouble(qvalBuf->toString());
label_goto_25b:
	if ( (q < 0x3ff0000000000000L) <= 0 )
		goto label_cond_263;
	q = 0x3ff0000000000000L;
label_cond_263:
	if ( languageRangeBuf->charAt(0x0) == 0x2a )
		goto label_cond_28e;
	//    .local v14, "serial":I
	entry = std::make_shared<android::icu::util::ULocale_S_1ULocaleAcceptLanguageQ>(q, map->size());
	//    .local v4, "entry":Landroid/icu/util/ULocale$1ULocaleAcceptLanguageQ;
	cVar3 = std::make_shared<android::icu::util::ULocale>(android::icu::util::ULocale::canonicalize(languageRangeBuf->toString()));
	map->put(entry, cVar3);
	//    .end local v4    # "entry":Landroid/icu/util/ULocale$1ULocaleAcceptLanguageQ;
	//    .end local v14    # "serial":I
label_cond_28e:
	languageRangeBuf->setLength(0x0);
	qvalBuf->setLength(0x0);
	state = 0x0;
	//    .end local v10    # "q":D
label_cond_29d:
	n = ( n + 0x1);
	goto label_goto_2c;
	// 6908    .line 2262
	// 6909    .restart local v10    # "q":D
label_catch_2a1:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v9, "nfe":Ljava/lang/NumberFormatException;
	q = 0x3ff0000000000000L;
	goto label_goto_25b;
	// 6919    .line 2283
	// 6920    .end local v3    # "c":C
	// 6921    .end local v5    # "gotLanguageQ":Z
	// 6922    .end local v9    # "nfe":Ljava/lang/NumberFormatException;
	// 6923    .end local v10    # "q":D
label_cond_2a5:
	if ( !(state) )  
		goto label_cond_2b4;
	var241 = cVar4(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid AcceptlLanguage")), n);
	// throw
	throw cVar4;
	// 6940    .line 2289
label_cond_2b4:
	acceptList = map->values()->toArray(std::make_shared<std::vector<std::vector<android::icu::util::ULocale>>>(map->size()));
	acceptList->checkCast("std::vector<android::icu::util::ULocale>");
	//    .local v2, "acceptList":[Landroid/icu/util/ULocale;
	return acceptList;
	// 6966    .line 2077
	// 6967    nop
	// 6969    :pswitch_data_2ca
	// 6970    .packed-switch 0x0
	// 6971        :pswitch_51
	// 6972        :pswitch_89
	// 6973        :pswitch_fc
	// 6974        :pswitch_120
	// 6975        :pswitch_141
	// 6976        :pswitch_159
	// 6977        :pswitch_171
	// 6978        :pswitch_1ab
	// 6979        :pswitch_1d4
	// 6980        :pswitch_1f9
	// 6981        :pswitch_231
	// 6982    .end packed-switch

}
// .method private static parseTagString(Ljava/lang/String;[Ljava/lang/String;)I
int android::icu::util::ULocale::parseTagString(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<std::vector<java::lang::String>> tags)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<android::icu::impl::LocaleIDParser> parser;
	std::shared_ptr<java::lang::String> lang;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::String> variant;
	int index;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "tags"    # [Ljava/lang/String;
	cVar0 = 0x2;
	cVar1 = 0x1;
	cVar2 = 0x0;
	parser = std::make_shared<android::icu::impl::LocaleIDParser>(localeID);
	//    .local v2, "parser":Landroid/icu/impl/LocaleIDParser;
	lang = parser->getLanguage();
	//    .local v1, "lang":Ljava/lang/String;
	script = parser->getScript();
	//    .local v4, "script":Ljava/lang/String;
	region = parser->getCountry();
	//    .local v3, "region":Ljava/lang/String;
	if ( !(android::icu::util::ULocale::isEmptyString(lang)) )  
		goto label_cond_4e;
	tags[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("und"));
label_goto_1f:
	if ( !(script->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("Zzzz")))) )  
		goto label_cond_51;
	tags[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_2d:
	if ( !(region->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("ZZ")))) )  
		goto label_cond_54;
	tags[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_3b:
	variant = parser->getVariant();
	//    .local v5, "variant":Ljava/lang/String;
	if ( android::icu::util::ULocale::isEmptyString(variant) )     
		goto label_cond_57;
	index = localeID->indexOf(variant);
	//    .local v0, "index":I
	if ( index <= 0 )
		goto label_cond_4d;
	//    .end local v0    # "index":I
label_cond_4d:
	return index;
	// 7092    .line 2783
	// 7093    .end local v5    # "variant":Ljava/lang/String;
label_cond_4e:
	tags[cVar2] = lang;
	goto label_goto_1f;
	// 7099    .line 2790
label_cond_51:
	tags[cVar1] = script;
	goto label_goto_2d;
	// 7105    .line 2797
label_cond_54:
	tags[cVar0] = region;
	goto label_goto_3b;
	// 7111    .line 2822
	// 7112    .restart local v5    # "variant":Ljava/lang/String;
label_cond_57:
	index = localeID->indexOf(0x40);
	//    .restart local v0    # "index":I
	if ( index != -0x1 )
		goto label_cond_64;
	//    .end local v0    # "index":I
label_cond_64:
	return index;

}
// .method public static declared-synchronized setDefault(Landroid/icu/util/ULocale$Category;Landroid/icu/util/ULocale;)V
void android::icu::util::ULocale::setDefault(std::shared_ptr<android::icu::util::ULocale_S_Category> category,std::shared_ptr<android::icu::util::ULocale> newLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<java::util::Locale> newJavaDefault;
	int idx;
	
	//    .param p0, "category"    # Landroid/icu/util/ULocale$Category;
	//    .param p1, "newLocale"    # Landroid/icu/util/ULocale;
	cVar0 = android::icu::util::ULocale();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	newJavaDefault = newLocale->toLocale();
	//    .local v1, "newJavaDefault":Ljava/util/Locale;
	idx = category->ordinal();
	//    .local v0, "idx":I
	android::icu::util::ULocale::defaultCategoryULocales[idx] = newLocale;
	android::icu::util::ULocale::defaultCategoryLocales[idx] = newJavaDefault;
	android::icu::util::ULocale_S_JDKLocaleHelper::setDefault(category, newJavaDefault);
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_18;
	}
	//    .catchall {:try_start_3 .. :try_end_16} :catchall_18
	cVar0->monitor_exit();
	return;
	// 7178    .end local v0    # "idx":I
	// 7179    .end local v1    # "newJavaDefault":Ljava/util/Locale;
label_catchall_18:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static declared-synchronized setDefault(Landroid/icu/util/ULocale;)V
void android::icu::util::ULocale::setDefault(std::shared_ptr<android::icu::util::ULocale> newLocale)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<java::lang::Object> cVar1;
	int cVar2;
	
	//    .param p0, "newLocale"    # Landroid/icu/util/ULocale;
	cVar0 = android::icu::util::ULocale();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	android::icu::util::ULocale::defaultLocale = newLocale->toLocale();
	java::util::Locale::setDefault(android::icu::util::ULocale::defaultLocale);
	android::icu::util::ULocale::defaultULocale = newLocale;
	cVar1 = android::icu::util::ULocale_S_Category::values({const[class].FS-Param});
	cVar2 = 0x0;
label_goto_16:
	if ( cVar2 >= cVar1->size() )
		goto label_cond_20;
	//    .local v0, "cat":Landroid/icu/util/ULocale$Category;
	android::icu::util::ULocale::setDefault(cVar1[cVar2], newLocale);
	//label_try_end_1d:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_3 .. :try_end_1d} :catchall_22
	cVar2 = ( cVar2 + 0x1);
	goto label_goto_16;
	// 7238    .end local v0    # "cat":Landroid/icu/util/ULocale$Category;
label_cond_20:
	cVar0->monitor_exit();
	return;
label_catchall_22:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static setKeywordValue(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::setKeywordValue(std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<android::icu::impl::LocaleIDParser> parser;
	
	//    .param p0, "localeID"    # Ljava/lang/String;
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "value"    # Ljava/lang/String;
	parser = std::make_shared<android::icu::impl::LocaleIDParser>(localeID);
	//    .local v0, "parser":Landroid/icu/impl/LocaleIDParser;
	parser->setKeywordValue(keyword, value);
	return parser->getName();

}
// .method public static toLegacyKey(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::toLegacyKey(std::shared_ptr<java::lang::String> keyword)
{
	
	std::shared_ptr<java::lang::String> legacyKey;
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	legacyKey = android::icu::impl::locale::KeyTypeData::toLegacyKey(keyword);
	//    .local v0, "legacyKey":Ljava/lang/String;
	if ( legacyKey )     
		goto label_cond_13;
	if ( !(keyword->matches(std::make_shared<java::lang::String>(std::make_shared<char[]>("[0-9a-zA-Z]+")))) )  
		goto label_cond_13;
label_cond_13:
	return legacyKey;

}
// .method public static toLegacyType(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::toLegacyType(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<android::icu::util::Output> cVar0;
	std::shared_ptr<java::lang::String> legacyType;
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	//    .param p1, "value"    # Ljava/lang/String;
	cVar0 = 0x0;
	legacyType = android::icu::impl::locale::KeyTypeData::toLegacyType(keyword, value, cVar0, cVar0);
	//    .local v0, "legacyType":Ljava/lang/String;
	if ( legacyType )     
		goto label_cond_14;
	if ( !(value->matches(std::make_shared<java::lang::String>(std::make_shared<char[]>("[0-9a-zA-Z]+([_/\\-][0-9a-zA-Z]+)*")))) )  
		goto label_cond_14;
label_cond_14:
	return legacyType;

}
// .method public static toUnicodeLocaleKey(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::toUnicodeLocaleKey(std::shared_ptr<java::lang::String> keyword)
{
	
	std::shared_ptr<java::lang::String> bcpKey;
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	bcpKey = android::icu::impl::locale::KeyTypeData::toBcpKey(keyword);
	//    .local v0, "bcpKey":Ljava/lang/String;
	if ( bcpKey )     
		goto label_cond_10;
	if ( !(android::icu::impl::locale::UnicodeLocaleExtension::isKey(keyword)) )  
		goto label_cond_10;
label_cond_10:
	return bcpKey;

}
// .method public static toUnicodeLocaleType(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::toUnicodeLocaleType(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<android::icu::util::Output> cVar0;
	std::shared_ptr<java::lang::String> bcpType;
	
	//    .param p0, "keyword"    # Ljava/lang/String;
	//    .param p1, "value"    # Ljava/lang/String;
	cVar0 = 0x0;
	bcpType = android::icu::impl::locale::KeyTypeData::toBcpType(keyword, value, cVar0, cVar0);
	//    .local v0, "bcpType":Ljava/lang/String;
	if ( bcpType )     
		goto label_cond_11;
	if ( !(android::icu::impl::locale::UnicodeLocaleExtension::isType(value)) )  
		goto label_cond_11;
label_cond_11:
	return bcpType;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::ULocale::clone()
{
	
	return this;

}
// .method public compareTo(Landroid/icu/util/ULocale;)I
int android::icu::util::ULocale::compareTo(std::shared_ptr<android::icu::util::ULocale> other)
{
	
	int cVar1;
	int cmp;
	std::shared_ptr<java::util::Iterator> thisKwdItr;
	std::shared_ptr<java::util::Iterator> otherKwdItr;
	std::shared_ptr<java::lang::String> thisKey;
	std::shared_ptr<java::lang::String> otherKey;
	std::shared_ptr<java::lang::String> thisVal;
	std::shared_ptr<java::lang::String> otherVal;
	
	//    .param p1, "other"    # Landroid/icu/util/ULocale;
	cVar1 = 0x0;
	if ( this != other )
		goto label_cond_4;
	return cVar1;
	// 7432    .line 768
label_cond_4:
	cmp = 0x0;
	//    .local v0, "cmp":I
	cmp = this->getLanguage()->compareTo(other->getLanguage());
	if ( cmp )     
		goto label_cond_4a;
	cmp = this->getScript()->compareTo(other->getScript());
	if ( cmp )     
		goto label_cond_4a;
	cmp = this->getCountry()->compareTo(other->getCountry());
	if ( cmp )     
		goto label_cond_4a;
	cmp = this->getVariant()->compareTo(other->getVariant());
	if ( cmp )     
		goto label_cond_4a;
	thisKwdItr = this->getKeywords();
	//    .local v5, "thisKwdItr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	otherKwdItr = other->getKeywords();
	//    .local v2, "otherKwdItr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	if ( thisKwdItr )     
		goto label_cond_50;
	if ( otherKwdItr )     
		goto label_cond_4e;
	cmp = 0x0;
	//    .end local v2    # "otherKwdItr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	//    .end local v5    # "thisKwdItr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
label_cond_4a:
label_goto_4a:
	if ( cmp >= 0 )
		goto label_cond_97;
	cVar1 = -0x1;
label_cond_4d:
label_goto_4d:
	return cVar1;
	// 7534    .line 787
	// 7535    .restart local v2    # "otherKwdItr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	// 7536    .restart local v5    # "thisKwdItr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
label_cond_4e:
	cmp = -0x1;
	goto label_goto_4a;
	// 7542    .line 788
label_cond_50:
	if ( otherKwdItr )     
		goto label_cond_73;
	cmp = 0x1;
	goto label_goto_4a;
	// 7551    .line 798
label_cond_54:
	thisKey = thisKwdItr->next();
	thisKey->checkCast("java::lang::String");
	//    .local v4, "thisKey":Ljava/lang/String;
	otherKey = otherKwdItr->next();
	otherKey->checkCast("java::lang::String");
	//    .local v1, "otherKey":Ljava/lang/String;
	cmp = thisKey->compareTo(otherKey);
	if ( cmp )     
		goto label_cond_73;
	thisVal = this->getKeywordValue(thisKey);
	//    .local v6, "thisVal":Ljava/lang/String;
	otherVal = other->getKeywordValue(otherKey);
	//    .local v3, "otherVal":Ljava/lang/String;
	if ( thisVal )     
		goto label_cond_8e;
	if ( otherVal )     
		goto label_cond_8c;
	cmp = 0x0;
	//    .end local v1    # "otherKey":Ljava/lang/String;
	//    .end local v3    # "otherVal":Ljava/lang/String;
	//    .end local v4    # "thisKey":Ljava/lang/String;
	//    .end local v6    # "thisVal":Ljava/lang/String;
label_cond_73:
label_goto_73:
	if ( cmp )     
		goto label_cond_82;
	if ( !(thisKwdItr->hasNext()) )  
		goto label_cond_82;
	if ( otherKwdItr->hasNext() )     
		goto label_cond_54;
	cmp = 0x1;
label_cond_82:
	if ( cmp )     
		goto label_cond_4a;
	if ( !(otherKwdItr->hasNext()) )  
		goto label_cond_4a;
	cmp = -0x1;
	goto label_goto_4a;
	// 7636    .line 806
	// 7637    .restart local v1    # "otherKey":Ljava/lang/String;
	// 7638    .restart local v3    # "otherVal":Ljava/lang/String;
	// 7639    .restart local v4    # "thisKey":Ljava/lang/String;
	// 7640    .restart local v6    # "thisVal":Ljava/lang/String;
label_cond_8c:
	cmp = -0x1;
	goto label_goto_73;
	// 7646    .line 807
label_cond_8e:
	if ( otherVal )     
		goto label_cond_92;
	cmp = 0x1;
	goto label_goto_73;
	// 7655    .line 810
label_cond_92:
	cmp = thisVal->compareTo(otherVal);
	goto label_goto_73;
	// 7663    .line 827
	// 7664    .end local v1    # "otherKey":Ljava/lang/String;
	// 7665    .end local v2    # "otherKwdItr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	// 7666    .end local v3    # "otherVal":Ljava/lang/String;
	// 7667    .end local v4    # "thisKey":Ljava/lang/String;
	// 7668    .end local v5    # "thisKwdItr":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/lang/String;>;"
	// 7669    .end local v6    # "thisVal":Ljava/lang/String;
label_cond_97:
	if ( cmp <= 0 )
		goto label_cond_4d;
	cVar1 = 0x1;
	goto label_goto_4d;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::ULocale::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 7705    .line 747
label_cond_4:
	if ( !(obj->instanceOf("android::icu::util::ULocale")) )  
		goto label_cond_13;
	obj->checkCast("android::icu::util::ULocale");
	//    .end local p1    # "obj":Ljava/lang/Object;
	return this->localeID->equals(obj->localeID);
	// 7725    .line 750
	// 7726    .restart local p1    # "obj":Ljava/lang/Object;
label_cond_13:
	return 0x0;

}
// .method public getBaseName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getBaseName()
{
	
	return android::icu::util::ULocale::getBaseName(this->localeID);

}
// .method public getCharacterOrientation()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getCharacterOrientation()
{
	
	return android::icu::impl::ICUResourceTableAccess::getTableString(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), this, std::make_shared<java::lang::String>(std::make_shared<char[]>("layout")), std::make_shared<java::lang::String>(std::make_shared<char[]>("characters")), std::make_shared<java::lang::String>(std::make_shared<char[]>("characters")));

}
// .method public getCountry()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getCountry()
{
	
	return this->base()->getRegion();

}
// .method public getDisplayCountry()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayCountry()
{
	
	return android::icu::util::ULocale::getDisplayCountryInternal(this, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getDisplayCountry(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayCountry(std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::util::ULocale::getDisplayCountryInternal(this, displayLocale);

}
// .method public getDisplayKeywordValue(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayKeywordValue(std::shared_ptr<java::lang::String> keyword)
{
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	return android::icu::util::ULocale::getDisplayKeywordValueInternal(this, keyword, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getDisplayKeywordValue(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayKeywordValue(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::util::ULocale::getDisplayKeywordValueInternal(this, keyword, displayLocale);

}
// .method public getDisplayLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayLanguage()
{
	
	return android::icu::util::ULocale::getDisplayLanguageInternal(this, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY), 0x0);

}
// .method public getDisplayLanguage(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayLanguage(std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::util::ULocale::getDisplayLanguageInternal(this, displayLocale, 0x0);

}
// .method public getDisplayLanguageWithDialect()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayLanguageWithDialect()
{
	
	return android::icu::util::ULocale::getDisplayLanguageInternal(this, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY), 0x1);

}
// .method public getDisplayLanguageWithDialect(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayLanguageWithDialect(std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::util::ULocale::getDisplayLanguageInternal(this, displayLocale, 0x1);

}
// .method public getDisplayName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayName()
{
	
	return android::icu::util::ULocale::getDisplayNameInternal(this, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getDisplayName(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayName(std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::util::ULocale::getDisplayNameInternal(this, displayLocale);

}
// .method public getDisplayNameWithDialect()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayNameWithDialect()
{
	
	return android::icu::util::ULocale::getDisplayNameWithDialectInternal(this, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getDisplayNameWithDialect(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayNameWithDialect(std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::util::ULocale::getDisplayNameWithDialectInternal(this, displayLocale);

}
// .method public getDisplayScript()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayScript()
{
	
	return android::icu::util::ULocale::getDisplayScriptInternal(this, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getDisplayScript(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayScript(std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::util::ULocale::getDisplayScriptInternal(this, displayLocale);

}
// .method public getDisplayScriptInContext()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayScriptInContext()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 8015    .end annotation
	return android::icu::util::ULocale::getDisplayScriptInContextInternal(this, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getDisplayScriptInContext(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayScriptInContext(std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 8036    .end annotation
	return android::icu::util::ULocale::getDisplayScriptInContextInternal(this, displayLocale);

}
// .method public getDisplayVariant()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayVariant()
{
	
	return android::icu::util::ULocale::getDisplayVariantInternal(this, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getDisplayVariant(Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getDisplayVariant(std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p1, "displayLocale"    # Landroid/icu/util/ULocale;
	return android::icu::util::ULocale::getDisplayVariantInternal(this, displayLocale);

}
// .method public getExtension(C)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getExtension(char key)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "key"    # C
	if ( android::icu::impl::locale::LocaleExtensions::isValidKey(key) )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid extension key: ")))->append(key)->toString());
	// throw
	throw cVar0;
	// 8115    .line 3004
label_cond_20:
	return this->extensions()->getExtensionValue(java::lang::Character::valueOf(key));

}
// .method public getExtensionKeys()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::Character>> android::icu::util::ULocale::getExtensionKeys()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 8135        value = {
	// 8136            "()",
	// 8137            "Ljava/util/Set",
	// 8138            "<",
	// 8139            "Ljava/lang/Character;",
	// 8140            ">;"
	// 8141        }
	// 8142    .end annotation
	return this->extensions()->getKeys();

}
// .method public getFallback()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::getFallback()
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	cVar0 = 0x0;
	if ( !(this->localeID->length()) )  
		goto label_cond_14;
	if ( this->localeID->charAt(0x0) != 0x40 )
		goto label_cond_15;
label_cond_14:
	return cVar0;
	// 8188    .line 990
label_cond_15:
	cVar0->checkCast("java::util::Locale");
	cVar1 = std::make_shared<android::icu::util::ULocale>(android::icu::util::ULocale::getFallbackString(this->localeID), cVar0);
	return cVar1;

}
// .method public getISO3Country()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getISO3Country()
{
	
	return android::icu::util::ULocale::getISO3Country(this->localeID);

}
// .method public getISO3Language()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getISO3Language()
{
	
	return android::icu::util::ULocale::getISO3Language(this->localeID);

}
// .method public getKeywordValue(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getKeywordValue(std::shared_ptr<java::lang::String> keywordName)
{
	
	//    .param p1, "keywordName"    # Ljava/lang/String;
	return android::icu::util::ULocale::getKeywordValue(this->localeID, keywordName);

}
// .method public getKeywords()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<java::lang::String>> android::icu::util::ULocale::getKeywords()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 8251        value = {
	// 8252            "()",
	// 8253            "Ljava/util/Iterator",
	// 8254            "<",
	// 8255            "Ljava/lang/String;",
	// 8256            ">;"
	// 8257        }
	// 8258    .end annotation
	return android::icu::util::ULocale::getKeywords(this->localeID);

}
// .method public getLanguage()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getLanguage()
{
	
	return this->base()->getLanguage();

}
// .method public getLineOrientation()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getLineOrientation()
{
	
	return android::icu::impl::ICUResourceTableAccess::getTableString(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), this, std::make_shared<java::lang::String>(std::make_shared<char[]>("layout")), std::make_shared<java::lang::String>(std::make_shared<char[]>("lines")), std::make_shared<java::lang::String>(std::make_shared<char[]>("lines")));

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getName()
{
	
	return this->localeID;

}
// .method public getScript()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getScript()
{
	
	return this->base()->getScript();

}
// .method public getUnicodeLocaleAttributes()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::util::ULocale::getUnicodeLocaleAttributes()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 8338        value = {
	// 8339            "()",
	// 8340            "Ljava/util/Set",
	// 8341            "<",
	// 8342            "Ljava/lang/String;",
	// 8343            ">;"
	// 8344        }
	// 8345    .end annotation
	return this->extensions()->getUnicodeLocaleAttributes();

}
// .method public getUnicodeLocaleKeys()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::util::ULocale::getUnicodeLocaleKeys()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 8363        value = {
	// 8364            "()",
	// 8365            "Ljava/util/Set",
	// 8366            "<",
	// 8367            "Ljava/lang/String;",
	// 8368            ">;"
	// 8369        }
	// 8370    .end annotation
	return this->extensions()->getUnicodeLocaleKeys();

}
// .method public getUnicodeLocaleType(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getUnicodeLocaleType(std::shared_ptr<java::lang::String> key)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "key"    # Ljava/lang/String;
	if ( android::icu::impl::locale::LocaleExtensions::isValidUnicodeLocaleKey(key) )     
		goto label_cond_20;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid Unicode locale key: ")))->append(key)->toString());
	// throw
	throw cVar0;
	// 8422    .line 3047
label_cond_20:
	return this->extensions()->getUnicodeLocaleType(key);

}
// .method public getVariant()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::getVariant()
{
	
	return this->base()->getVariant();

}
// .method public hashCode()I
int android::icu::util::ULocale::hashCode()
{
	
	return this->localeID->hashCode();

}
// .method public isRightToLeft()Z
bool android::icu::util::ULocale::isRightToLeft()
{
	
	bool cVar0;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::lang::String> lang;
	int langIndex;
	
	cVar0 = 0x0;
	script = this->getScript();
	//    .local v3, "script":Ljava/lang/String;
	if ( script->length() )     
		goto label_cond_40;
	lang = this->getLanguage();
	//    .local v0, "lang":Ljava/lang/String;
	if ( lang->length() )     
		goto label_cond_16;
	return cVar0;
	// 8500    .line 1340
label_cond_16:
	langIndex = std::make_shared<java::lang::String>(std::make_shared<char[]>("root-en-es-pt-zh-ja-ko-de-fr-it-ar+he+fa+ru-nl-pl-th-tr-"))->indexOf(lang);
	//    .local v1, "langIndex":I
	if ( langIndex < 0 ) 
		goto label_cond_2e;
	// switch
	{
	auto item = ( std::make_shared<java::lang::String>(std::make_shared<char[]>("root-en-es-pt-zh-ja-ko-de-fr-it-ar+he+fa+ru-nl-pl-th-tr-"))->charAt((lang->length() +  langIndex)) );
	if (item == 43) goto label_pswitch_3e;
	if (item == 44) goto label_pswitch_2e;
	if (item == 45) goto label_pswitch_3d;
	}
label_cond_2e:
label_pswitch_2e:
	//    .local v2, "likely":Landroid/icu/util/ULocale;
	script = android::icu::util::ULocale::addLikelySubtags(this)->getScript();
	if ( script->length() )     
		goto label_cond_40;
	return cVar0;
	// 8550    .line 1343
	// 8551    .end local v2    # "likely":Landroid/icu/util/ULocale;
label_pswitch_3d:
	return cVar0;
	// 8555    .line 1344
label_pswitch_3e:
	return 0x1;
	// 8561    .line 1355
	// 8562    .end local v0    # "lang":Ljava/lang/String;
	// 8563    .end local v1    # "langIndex":I
label_cond_40:
	//    .local v4, "scriptCode":I
	return android::icu::lang::UScript::isRightToLeft(android::icu::lang::UScript::getCodeFromName(script));
	// 8577    .line 1342
	// 8578    nop
	// 8580    :pswitch_data_4a
	// 8581    .packed-switch 0x2b
	// 8582        :pswitch_3e
	// 8583        :pswitch_2e
	// 8584        :pswitch_3d
	// 8585    .end packed-switch

}
// .method public setKeywordValue(Ljava/lang/String;Ljava/lang/String;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::ULocale::setKeywordValue(std::shared_ptr<java::lang::String> keyword,std::shared_ptr<java::lang::String> value)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<java::util::Locale> cVar1;
	
	//    .param p1, "keyword"    # Ljava/lang/String;
	//    .param p2, "value"    # Ljava/lang/String;
	cVar1 = 0x0;
	cVar1->checkCast("java::util::Locale");
	cVar0 = std::make_shared<android::icu::util::ULocale>(android::icu::util::ULocale::setKeywordValue(this->localeID, keyword, value), cVar1);
	return cVar0;

}
// .method public toLanguageTag()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::toLanguageTag()
{
	
	std::shared_ptr<android::icu::impl::locale::BaseLocale> base;
	std::shared_ptr<android::icu::impl::locale::LocaleExtensions> exts;
	std::shared_ptr<android::icu::impl::locale::InternalLocaleBuilder> ilocbld;
	std::shared_ptr<java::lang::RuntimeException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::impl::locale::LanguageTag> tag;
	std::shared_ptr<java::lang::StringBuilder> buf;
	std::shared_ptr<java::lang::String> subtag;
	std::shared_ptr<java::util::Iterator> s_S_iterator;
	std::shared_ptr<java::lang::String> s;
	
	base = this->base();
	//    .local v0, "base":Landroid/icu/impl/locale/BaseLocale;
	exts = this->extensions();
	//    .local v3, "exts":Landroid/icu/impl/locale/LocaleExtensions;
	if ( !(base->getVariant()->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("POSIX")))) )  
		goto label_cond_48;
	if ( exts->getUnicodeLocaleType(std::make_shared<java::lang::String>(std::make_shared<char[]>("va"))) )     
		goto label_cond_48;
	ilocbld = std::make_shared<android::icu::impl::locale::InternalLocaleBuilder>();
	//    .local v4, "ilocbld":Landroid/icu/impl/locale/InternalLocaleBuilder;
	try {
	//label_try_start_36:
	ilocbld->setLocale(android::icu::impl::locale::BaseLocale::ROOT, exts);
	ilocbld->setUnicodeLocaleKeyword(std::make_shared<java::lang::String>(std::make_shared<char[]>("va")), std::make_shared<java::lang::String>(std::make_shared<char[]>("posix")));
	//label_try_end_47:
	}
	catch (android::icu::impl::locale::LocaleSyntaxException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b2;
	}
	//    .catch Landroid/icu/impl/locale/LocaleSyntaxException; {:try_start_36 .. :try_end_47} :catch_b2
	//    .end local v4    # "ilocbld":Landroid/icu/impl/locale/InternalLocaleBuilder;
label_cond_48:
	tag = android::icu::impl::locale::LanguageTag::parseLocale(base, exts);
	//    .local v9, "tag":Landroid/icu/impl/locale/LanguageTag;
	buf = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "buf":Ljava/lang/StringBuilder;
	subtag = tag->getLanguage();
	//    .local v7, "subtag":Ljava/lang/String;
	if ( subtag->length() <= 0 )
		goto label_cond_62;
	buf->append(android::icu::impl::locale::LanguageTag::canonicalizeLanguage(subtag));
label_cond_62:
	subtag = tag->getScript();
	if ( subtag->length() <= 0 )
		goto label_cond_79;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	buf->append(android::icu::impl::locale::LanguageTag::canonicalizeScript(subtag));
label_cond_79:
	subtag = tag->getRegion();
	if ( subtag->length() <= 0 )
		goto label_cond_90;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	buf->append(android::icu::impl::locale::LanguageTag::canonicalizeRegion(subtag));
label_cond_90:
	//    .local v8, "subtags":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	s_S_iterator = tag->getVariants()->iterator();
	//    .local v6, "s$iterator":Ljava/util/Iterator;
label_goto_98:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_b9;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .local v5, "s":Ljava/lang/String;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	buf->append(android::icu::impl::locale::LanguageTag::canonicalizeVariant(s));
	goto label_goto_98;
	// 8820    .line 3128
	// 8821    .end local v1    # "buf":Ljava/lang/StringBuilder;
	// 8822    .end local v5    # "s":Ljava/lang/String;
	// 8823    .end local v6    # "s$iterator":Ljava/util/Iterator;
	// 8824    .end local v7    # "subtag":Ljava/lang/String;
	// 8825    .end local v8    # "subtags":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 8826    .end local v9    # "tag":Landroid/icu/impl/locale/LanguageTag;
	// 8827    .restart local v4    # "ilocbld":Landroid/icu/impl/locale/InternalLocaleBuilder;
label_catch_b2:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	cVar0 = std::make_shared<java::lang::RuntimeException>(getCatchExcetionFromList);
	// throw
	throw cVar0;
	// 8839    .line 3161
	// 8840    .end local v2    # "e":Landroid/icu/impl/locale/LocaleSyntaxException;
	// 8841    .end local v4    # "ilocbld":Landroid/icu/impl/locale/InternalLocaleBuilder;
	// 8842    .restart local v1    # "buf":Ljava/lang/StringBuilder;
	// 8843    .restart local v6    # "s$iterator":Ljava/util/Iterator;
	// 8844    .restart local v7    # "subtag":Ljava/lang/String;
	// 8845    .restart local v8    # "subtags":Ljava/util/List;, "Ljava/util/List<Ljava/lang/String;>;"
	// 8846    .restart local v9    # "tag":Landroid/icu/impl/locale/LanguageTag;
label_cond_b9:
	s_S_iterator = tag->getExtensions()->iterator();
label_goto_c1:
	if ( !(s_S_iterator->hasNext()) )  
		goto label_cond_db;
	s = s_S_iterator->next();
	s->checkCast("java::lang::String");
	//    .restart local v5    # "s":Ljava/lang/String;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	buf->append(android::icu::impl::locale::LanguageTag::canonicalizeExtension(s));
	goto label_goto_c1;
	// 8885    .line 3167
	// 8886    .end local v5    # "s":Ljava/lang/String;
label_cond_db:
	subtag = tag->getPrivateuse();
	if ( subtag->length() <= 0 )
		goto label_cond_105;
	if ( buf->length() <= 0 )
		goto label_cond_f1;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
label_cond_f1:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("x")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("-")));
	buf->append(android::icu::impl::locale::LanguageTag::canonicalizePrivateuse(subtag));
label_cond_105:
	return buf->toString();

}
// .method public toLocale()Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::util::ULocale::toLocale()
{
	
	if ( this->locale )     
		goto label_cond_a;
	this->locale = android::icu::util::ULocale_S_JDKLocaleHelper::toLocale(this);
label_cond_a:
	return this->locale;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::ULocale::toString()
{
	
	return this->localeID;

}


