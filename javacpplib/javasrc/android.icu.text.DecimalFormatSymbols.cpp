// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\DecimalFormatSymbols.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfoProvider.h"
#include "android.icu.impl.CurrencyData_S_CurrencyFormatInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo.h"
#include "android.icu.impl.CurrencyData.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.DecimalFormatSymbols_S_1.h"
#include "android.icu.text.DecimalFormatSymbols_S_CacheData.h"
#include "android.icu.text.DecimalFormatSymbols_S_DecFmtDataSink.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.NumberingSystem.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Character.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.util.Arrays.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"

static android::icu::text::DecimalFormatSymbols::CURRENCY_SPC_CURRENCY_MATCH = 0x0;
static android::icu::text::DecimalFormatSymbols::CURRENCY_SPC_INSERT = 0x2;
static android::icu::text::DecimalFormatSymbols::CURRENCY_SPC_SURROUNDING_MATCH = 0x1;
static android::icu::text::DecimalFormatSymbols::DEF_DECIMAL_SEPARATOR = '.';
static android::icu::text::DecimalFormatSymbols::DEF_DIGIT_CHARS_ARRAY;
static android::icu::text::DecimalFormatSymbols::DEF_DIGIT_STRINGS_ARRAY;
static android::icu::text::DecimalFormatSymbols::DEF_GROUPING_SEPARATOR = ',';
static android::icu::text::DecimalFormatSymbols::DEF_MINUS_SIGN = '-';
static android::icu::text::DecimalFormatSymbols::DEF_PERCENT = '%';
static android::icu::text::DecimalFormatSymbols::DEF_PERMILL = '\u2030';
static android::icu::text::DecimalFormatSymbols::DEF_PLUS_SIGN = '+';
static android::icu::text::DecimalFormatSymbols::LATIN_NUMBERING_SYSTEM = std::make_shared<java::lang::String>("latn");
static android::icu::text::DecimalFormatSymbols::NUMBER_ELEMENTS = std::make_shared<java::lang::String>("NumberElements");
static android::icu::text::DecimalFormatSymbols::SYMBOLS = std::make_shared<java::lang::String>("symbols");
static android::icu::text::DecimalFormatSymbols::SYMBOL_DEFAULTS;
static android::icu::text::DecimalFormatSymbols::SYMBOL_KEYS;
static android::icu::text::DecimalFormatSymbols::cachedLocaleData;
static android::icu::text::DecimalFormatSymbols::currentSerialVersion = 0x8;
static android::icu::text::DecimalFormatSymbols::serialVersionUID = 0x501d17990868939cL;
// .method static synthetic -get0()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::_get0()
{
	
	return android::icu::text::DecimalFormatSymbols::SYMBOL_KEYS;

}
// .method static synthetic -wrap0(Landroid/icu/util/ULocale;)Landroid/icu/text/DecimalFormatSymbols$CacheData;
std::shared_ptr<android::icu::text::DecimalFormatSymbols_S_CacheData> android::icu::text::DecimalFormatSymbols::_wrap0(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	return android::icu::text::DecimalFormatSymbols::loadData(locale);

}
// .method static constructor <clinit>()V
void android::icu::text::DecimalFormatSymbols::static_cinit()
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar5;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar6;
	std::shared<std::vector<char[]>> cVar7;
	std::shared<std::vector<std::vector<java::lang::String>>> cVar8;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols_S_1> cVar9;
	
	cVar0 = 0x3;
	cVar1 = 0x2;
	cVar2 = 0x1;
	cVar3 = 0x0;
	cVar4 = 0xa;
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0xd);
	cVar5[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("decimal"));
	cVar5[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("group"));
	cVar5[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("list"));
	cVar5[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("percentSign"));
	cVar5[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("minusSign"));
	cVar5[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("plusSign"));
	cVar5[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("exponential"));
	cVar5[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("perMille"));
	cVar5[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("infinity"));
	cVar5[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("nan"));
	cVar5[cVar4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currencyDecimal"));
	cVar5[0xb] = std::make_shared<java::lang::String>(std::make_shared<char[]>("currencyGroup"));
	cVar5[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("superscriptingExponent"));
	android::icu::text::DecimalFormatSymbols::SYMBOL_KEYS = cVar5;
	cVar6 = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar4);
	cVar6[cVar3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("0"));
	cVar6[cVar2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("1"));
	cVar6[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("2"));
	cVar6[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("3"));
	cVar6[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("4"));
	cVar6[0x5] = std::make_shared<java::lang::String>(std::make_shared<char[]>("5"));
	cVar6[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("6"));
	cVar6[0x7] = std::make_shared<java::lang::String>(std::make_shared<char[]>("7"));
	cVar6[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("8"));
	cVar6[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("9"));
	android::icu::text::DecimalFormatSymbols::DEF_DIGIT_STRINGS_ARRAY = cVar6;
	cVar7 = std::make_shared<std::vector<char[]>>(cVar4);
	?;
	android::icu::text::DecimalFormatSymbols::DEF_DIGIT_CHARS_ARRAY = cVar7;
	cVar8 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0xd);
	cVar8[cVar3] = java::lang::String::valueOf(0x2e);
	cVar8[cVar2] = java::lang::String::valueOf(0x2c);
	cVar8[cVar1] = std::make_shared<java::lang::String>(std::make_shared<char[]>(";"));
	cVar8[cVar0] = java::lang::String::valueOf(0x25);
	cVar8[0x4] = java::lang::String::valueOf(0x2d);
	cVar8[0x5] = java::lang::String::valueOf(0x2b);
	cVar8[0x6] = std::make_shared<java::lang::String>(std::make_shared<char[]>("E"));
	cVar8[0x7] = java::lang::String::valueOf(0x2030);
	cVar8[0x8] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u221e"));
	cVar8[0x9] = std::make_shared<java::lang::String>(std::make_shared<char[]>("NaN"));
	cVar8[cVar4] = 0x0;
	cVar8[0xb] = 0x0;
	cVar8[0xc] = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00d7"));
	android::icu::text::DecimalFormatSymbols::SYMBOL_DEFAULTS = cVar8;
	cVar9 = std::make_shared<android::icu::text::DecimalFormatSymbols_S_1>();
	android::icu::text::DecimalFormatSymbols::cachedLocaleData = cVar9;
	return;
	// 465    .line 1128
	// 466    nop
	// 468    :array_108
	// 469    .array-data 2
	// 470        0x30s
	// 471        0x31s
	// 472        0x32s
	// 473        0x33s
	// 474        0x34s
	// 475        0x35s
	// 476        0x36s
	// 477        0x37s
	// 478        0x38s
	// 479        0x39s
	// 480    .end array-data

}
// .method public constructor <init>()V
android::icu::text::DecimalFormatSymbols::DecimalFormatSymbols()
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	cVar0 = 0x0;
	// 490    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->exponentMultiplicationSign = cVar0;
	this->serialVersionOnStream = 0x8;
	this->currencyPattern = cVar0;
	this->initialize(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::DecimalFormatSymbols::DecimalFormatSymbols(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	// 524    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->exponentMultiplicationSign = cVar0;
	this->serialVersionOnStream = 0x8;
	this->currencyPattern = cVar0;
	this->initialize(locale);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::text::DecimalFormatSymbols::DecimalFormatSymbols(std::shared_ptr<java::util::Locale> locale)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	cVar0 = 0x0;
	// 552    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->exponentMultiplicationSign = cVar0;
	this->serialVersionOnStream = 0x8;
	this->currencyPattern = cVar0;
	this->initialize(android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method public static getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::text::DecimalFormatSymbols::getAvailableLocales()
{
	
	return android::icu::impl::ICUResourceBundle::getAvailableLocales({const[class].FS-Param});

}
// .method public static getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::DecimalFormatSymbols::getAvailableULocales()
{
	
	return android::icu::impl::ICUResourceBundle::getAvailableULocales({const[class].FS-Param});

}
// .method public static getInstance()Landroid/icu/text/DecimalFormatSymbols;
std::shared_ptr<android::icu::text::DecimalFormatSymbols> android::icu::text::DecimalFormatSymbols::getInstance()
{
	
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::DecimalFormatSymbols>();
	return cVar0;

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/DecimalFormatSymbols;
std::shared_ptr<android::icu::text::DecimalFormatSymbols> android::icu::text::DecimalFormatSymbols::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::text::DecimalFormatSymbols>(locale);
	return cVar0;

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/text/DecimalFormatSymbols;
std::shared_ptr<android::icu::text::DecimalFormatSymbols> android::icu::text::DecimalFormatSymbols::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> cVar0;
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	cVar0 = std::make_shared<android::icu::text::DecimalFormatSymbols>(locale);
	return cVar0;

}
// .method private initSpacingInfo(Landroid/icu/impl/CurrencyData$CurrencySpacingInfo;)V
void android::icu::text::DecimalFormatSymbols::initSpacingInfo(std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> spcInfo)
{
	
	//    .param p1, "spcInfo"    # Landroid/icu/impl/CurrencyData$CurrencySpacingInfo;
	this->currencySpcBeforeSym = spcInfo->getBeforeSymbols();
	this->currencySpcAfterSym = spcInfo->getAfterSymbols();
	return;

}
// .method private initialize(Landroid/icu/util/ULocale;)V
void android::icu::text::DecimalFormatSymbols::initialize(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<java::lang::Object> cVar2;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols_S_CacheData> data;
	std::shared_ptr<std::vector<java::lang::String>> numberElements;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyDisplayInfo> info;
	std::shared_ptr<java::lang::String> fmtInfo;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = 0x0;
	this->requestedLocale = locale->toLocale();
	this->ulocale = locale;
	data = android::icu::text::DecimalFormatSymbols::cachedLocaleData->getInstance(locale, cVar2);
	data->checkCast("android::icu::text::DecimalFormatSymbols_S_CacheData");
	//    .local v0, "data":Landroid/icu/text/DecimalFormatSymbols$CacheData;
	this->setLocale(data->validLocale, data->validLocale);
	this->setDigitStrings(data->digits);
	numberElements = data->numberElements;
	//    .local v3, "numberElements":[Ljava/lang/String;
	this->setDecimalSeparatorString(numberElements[cVar1]);
	this->setGroupingSeparatorString(numberElements[cVar0]);
	this->patternSeparator = numberElements[0x2]->charAt(cVar1);
	this->setPercentString(numberElements[0x3]);
	this->setMinusSignString(numberElements[0x4]);
	this->setPlusSignString(numberElements[0x5]);
	this->setExponentSeparator(numberElements[0x6]);
	this->setPerMillString(numberElements[0x7]);
	this->setInfinity(numberElements[0x8]);
	this->setNaN(numberElements[0x9]);
	this->setMonetaryDecimalSeparatorString(numberElements[0xa]);
	this->setMonetaryGroupingSeparatorString(numberElements[0xb]);
	this->setExponentMultiplicationSign(numberElements[0xc]);
	this->digit = 0x23;
	this->padEscape = 0x2a;
	this->sigDigit = 0x40;
	info = android::icu::impl::CurrencyData::provider->getInstance(locale, cVar0);
	//    .local v2, "info":Landroid/icu/impl/CurrencyData$CurrencyDisplayInfo;
	this->currency = android::icu::util::Currency::getInstance(locale);
	if ( !(this->currency) )  
		goto label_cond_bf;
	this->intlCurrencySymbol = this->currency->getCurrencyCode();
	this->currencySymbol = this->currency->getName(locale, cVar1, cVar2);
	fmtInfo = info->getFormatInfo(this->intlCurrencySymbol);
	//    .local v1, "fmtInfo":Landroid/icu/impl/CurrencyData$CurrencyFormatInfo;
	if ( !(fmtInfo) )  
		goto label_cond_b7;
	this->currencyPattern = fmtInfo->currencyPattern;
	this->setMonetaryDecimalSeparatorString(fmtInfo->monetarySeparator);
	this->setMonetaryGroupingSeparatorString(fmtInfo->monetaryGroupingSeparator);
	//    .end local v1    # "fmtInfo":Landroid/icu/impl/CurrencyData$CurrencyFormatInfo;
label_cond_b7:
label_goto_b7:
	this->initSpacingInfo(info->getSpacingInfo());
	return;
	// 891    .line 1248
label_cond_bf:
	this->intlCurrencySymbol = std::make_shared<java::lang::String>(std::make_shared<char[]>("XXX"));
	this->currencySymbol = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00a4"));
	goto label_goto_b7;

}
// .method private static loadData(Landroid/icu/util/ULocale;)Landroid/icu/text/DecimalFormatSymbols$CacheData;
std::shared_ptr<android::icu::text::DecimalFormatSymbols_S_CacheData> android::icu::text::DecimalFormatSymbols::loadData(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::NumberingSystem> ns;
	std::shared<std::vector<std::vector<java::lang::String>>> digits;
	std::shared_ptr<java::lang::String> digitString;
	int i;
	int offset;
	int nextOffset;
	std::shared_ptr<java::lang::String> nsName;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared<std::vector<std::vector<java::lang::String>>> numberElements;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols_S_DecFmtDataSink> sink;
	int cVar1;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols_S_CacheData> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<std::vector<java::lang::String>> digits;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	ns = android::icu::text::NumberingSystem::getInstance(locale);
	//    .local v10, "ns":Landroid/icu/text/NumberingSystem;
	digits = std::make_shared<std::vector<std::vector<java::lang::String>>>(0xa);
	//    .local v4, "digits":[Ljava/lang/String;
	if ( !(ns) )  
		goto label_cond_d9;
	if ( ns->getRadix() != 0xa )
		goto label_cond_d9;
	if ( !(( ns->isAlgorithmic() ^ 0x1)) )  
		goto label_cond_d9;
	if ( !(android::icu::text::NumberingSystem::isValidDigitString(ns->getDescription())) )  
		goto label_cond_d9;
	digitString = ns->getDescription();
	//    .local v3, "digitString":Ljava/lang/String;
	i = 0x0;
	//    .local v8, "i":I
	offset = 0x0;
	//    .local v13, "offset":I
label_goto_30:
	if ( i >= 0xa )
		goto label_cond_4a;
	//    .local v2, "cp":I
	nextOffset = (offset + java::lang::Character::charCount(digitString->codePointAt(offset)));
	//    .local v9, "nextOffset":I
	digits[i] = digitString->substring(offset, nextOffset);
	offset = nextOffset;
	i = ( i + 0x1);
	goto label_goto_30;
	// 1008    .line 1272
	// 1009    .end local v2    # "cp":I
	// 1010    .end local v9    # "nextOffset":I
label_cond_4a:
	nsName = ns->getName();
	//    .end local v3    # "digitString":Ljava/lang/String;
	//    .end local v8    # "i":I
	//    .end local v13    # "offset":I
	//    .local v11, "nsName":Ljava/lang/String;
label_goto_4e:
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), locale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v14, "rb":Landroid/icu/impl/ICUResourceBundle;
	//    .local v16, "validLocale":Landroid/icu/util/ULocale;
	numberElements = std::make_shared<std::vector<std::vector<java::lang::String>>>(android::icu::text::DecimalFormatSymbols::SYMBOL_KEYS->size());
	//    .local v12, "numberElements":[Ljava/lang/String;
	sink = std::make_shared<android::icu::text::DecimalFormatSymbols_S_DecFmtDataSink>(numberElements);
	//    .local v15, "sink":Landroid/icu/text/DecimalFormatSymbols$DecFmtDataSink;
	try {
	//label_try_start_6f:
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	rb->getAllItemsWithFallback(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NumberElements/")))->append(nsName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("symbols")))->toString(), sink);
	//label_try_end_98:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_109;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_6f .. :try_end_98} :catch_109
label_goto_98:
	//    .local v7, "hasNull":Z
	cVar1 = 0x0;
label_goto_9e:
	if ( cVar1 >= numberElements->size() )
		goto label_cond_a9;
	//    .local v6, "entry":Ljava/lang/String;
	if ( numberElements[cVar1] )     
		goto label_cond_e0;
	//    .end local v6    # "entry":Ljava/lang/String;
label_cond_a9:
	if ( !(0x0) )  
		goto label_cond_c0;
	if ( !(( nsName->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("latn"))) ^ 0x1)) )  
		goto label_cond_c0;
	rb->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("NumberElements/latn/symbols")), sink);
label_cond_c0:
	i = 0x0;
	//    .restart local v8    # "i":I
label_goto_c1:
	if ( i >= android::icu::text::DecimalFormatSymbols::SYMBOL_KEYS->size() )
		goto label_cond_e3;
	if ( numberElements[i] )     
		goto label_cond_d6;
	numberElements[i] = android::icu::text::DecimalFormatSymbols::SYMBOL_DEFAULTS[i];
label_cond_d6:
	i = ( i + 0x1);
	goto label_goto_c1;
	// 1190    .line 1275
	// 1191    .end local v7    # "hasNull":Z
	// 1192    .end local v8    # "i":I
	// 1193    .end local v11    # "nsName":Ljava/lang/String;
	// 1194    .end local v12    # "numberElements":[Ljava/lang/String;
	// 1195    .end local v14    # "rb":Landroid/icu/impl/ICUResourceBundle;
	// 1196    .end local v15    # "sink":Landroid/icu/text/DecimalFormatSymbols$DecFmtDataSink;
	// 1197    .end local v16    # "validLocale":Landroid/icu/util/ULocale;
label_cond_d9:
	digits = android::icu::text::DecimalFormatSymbols::DEF_DIGIT_STRINGS_ARRAY;
	//    .restart local v11    # "nsName":Ljava/lang/String;
	goto label_goto_4e;
	// 1207    .line 1299
	// 1208    .restart local v6    # "entry":Ljava/lang/String;
	// 1209    .restart local v7    # "hasNull":Z
	// 1210    .restart local v12    # "numberElements":[Ljava/lang/String;
	// 1211    .restart local v14    # "rb":Landroid/icu/impl/ICUResourceBundle;
	// 1212    .restart local v15    # "sink":Landroid/icu/text/DecimalFormatSymbols$DecFmtDataSink;
	// 1213    .restart local v16    # "validLocale":Landroid/icu/util/ULocale;
label_cond_e0:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_9e;
	// 1219    .line 1318
	// 1220    .end local v6    # "entry":Ljava/lang/String;
	// 1221    .restart local v8    # "i":I
label_cond_e3:
	if ( numberElements[0xa] )     
		goto label_cond_f1;
	numberElements[0xa] = numberElements[0x0];
label_cond_f1:
	if ( numberElements[0xb] )     
		goto label_cond_ff;
	numberElements[0xb] = numberElements[0x1];
label_cond_ff:
	var108 = cVar3(rb->getULocale(), digits, numberElements);
	return cVar3;
	// 1267    .line 1292
	// 1268    .end local v7    # "hasNull":Z
	// 1269    .end local v8    # "i":I
label_catch_109:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v5, "e":Ljava/util/MissingResourceException;
	goto label_goto_98;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::DecimalFormatSymbols::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	int i;
	char digit;
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1281        value = {
	// 1282            Ljava/io/IOException;,
	// 1283            Ljava/lang/ClassNotFoundException;
	// 1284        }
	// 1285    .end annotation
	cVar0 = 0x8;
	cVar1 = 0x3;
	cVar2 = 0xa;
	stream->defaultReadObject();
	if ( this->serialVersionOnStream >= 0x1 )
		goto label_cond_15;
	this->monetarySeparator = this->decimalSeparator;
	this->exponential = 0x45;
label_cond_15:
	if ( this->serialVersionOnStream >= 0x2 )
		goto label_cond_2a;
	this->padEscape = 0x2a;
	this->plusSign = 0x2b;
	this->exponentSeparator = java::lang::String::valueOf(this->exponential);
label_cond_2a:
	if ( this->serialVersionOnStream >= cVar1 )
		goto label_cond_34;
	this->requestedLocale = java::util::Locale::getDefault({const[class].FS-Param});
label_cond_34:
	if ( this->serialVersionOnStream >= 0x4 )
		goto label_cond_41;
	this->ulocale = android::icu::util::ULocale::forLocale(this->requestedLocale);
label_cond_41:
	if ( this->serialVersionOnStream >= 0x5 )
		goto label_cond_4a;
	this->monetaryGroupingSeparator = this->groupingSeparator;
label_cond_4a:
	if ( this->serialVersionOnStream >= 0x6 )
		goto label_cond_64;
	if ( this->currencySpcBeforeSym )     
		goto label_cond_57;
	this->currencySpcBeforeSym = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
label_cond_57:
	if ( this->currencySpcAfterSym )     
		goto label_cond_5f;
	this->currencySpcAfterSym = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
label_cond_5f:
	this->initSpacingInfo(android::icu::impl::CurrencyData_S_CurrencySpacingInfo::DEFAULT);
label_cond_64:
	if ( this->serialVersionOnStream >= 0x7 )
		goto label_cond_81;
	if ( this->minusString )     
		goto label_cond_75;
	this->minusString = java::lang::String::valueOf(this->minusSign);
label_cond_75:
	if ( this->plusString )     
		goto label_cond_81;
	this->plusString = java::lang::String::valueOf(this->plusSign);
label_cond_81:
	if ( this->serialVersionOnStream >= cVar0 )
		goto label_cond_8e;
	if ( this->exponentMultiplicationSign )     
		goto label_cond_8e;
	this->exponentMultiplicationSign = std::make_shared<java::lang::String>(std::make_shared<char[]>("\u00d7"));
label_cond_8e:
	if ( this->serialVersionOnStream >= 0x9 )
		goto label_cond_125;
	if ( this->digitStrings )     
		goto label_cond_dd;
	this->digitStrings = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar2);
	if ( !(this->digits) )  
		goto label_cond_be;
	if ( this->digits->size() != cVar2 )
		goto label_cond_be;
	this->zeroDigit = this->digits[0x0];
	i = 0x0;
	//    .local v1, "i":I
label_goto_ad:
	if ( i >= cVar2 )
		goto label_cond_dd;
	this->digitStrings[i] = java::lang::String::valueOf(this->digits[i]);
	i = ( i + 0x1);
	goto label_goto_ad;
	// 1535    .line 1416
	// 1536    .end local v1    # "i":I
label_cond_be:
	digit = this->zeroDigit;
	//    .local v0, "digit":C
	if ( this->digits )     
		goto label_cond_c8;
	this->digits = std::make_shared<std::vector<char[]>>(cVar2);
label_cond_c8:
	i = 0x0;
	//    .restart local v1    # "i":I
label_goto_c9:
	if ( i >= cVar2 )
		goto label_cond_dd;
	this->digits[i] = digit;
	this->digitStrings[i] = java::lang::String::valueOf(digit);
	digit = (char)(( digit + 0x1));
	i = ( i + 0x1);
	goto label_goto_c9;
	// 1583    .line 1429
	// 1584    .end local v0    # "digit":C
	// 1585    .end local v1    # "i":I
label_cond_dd:
	if ( this->decimalSeparatorString )     
		goto label_cond_e9;
	this->decimalSeparatorString = java::lang::String::valueOf(this->decimalSeparator);
label_cond_e9:
	if ( this->groupingSeparatorString )     
		goto label_cond_f5;
	this->groupingSeparatorString = java::lang::String::valueOf(this->groupingSeparator);
label_cond_f5:
	if ( this->percentString )     
		goto label_cond_101;
	this->percentString = java::lang::String::valueOf(this->percentString);
label_cond_101:
	if ( this->perMillString )     
		goto label_cond_10d;
	this->perMillString = java::lang::String::valueOf(this->perMill);
label_cond_10d:
	if ( this->monetarySeparatorString )     
		goto label_cond_119;
	this->monetarySeparatorString = java::lang::String::valueOf(this->monetarySeparator);
label_cond_119:
	if ( this->monetaryGroupingSeparatorString )     
		goto label_cond_125;
	this->monetaryGroupingSeparatorString = java::lang::String::valueOf(this->monetaryGroupingSeparator);
label_cond_125:
	this->serialVersionOnStream = cVar0;
	this->currency = android::icu::util::Currency::getInstance(this->intlCurrencySymbol);
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::DecimalFormatSymbols::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	//label_try_end_3:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_3} :catch_5
	return this->clone();
	// 1708    .line 1029
label_catch_5:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar0 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::DecimalFormatSymbols::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> other;
	int i;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( obj->instanceOf("android::icu::text::DecimalFormatSymbols") )     
		goto label_cond_6;
	return cVar1;
	// 1736    .line 1044
label_cond_6:
	if ( this != obj )
		goto label_cond_a;
	return 0x1;
label_cond_a:
	other = obj;
	other->checkCast("android::icu::text::DecimalFormatSymbols");
	//    .local v1, "other":Landroid/icu/text/DecimalFormatSymbols;
	i = 0x0;
	//    .local v0, "i":I
label_goto_e:
	if ( i >  0x2 )
		goto label_cond_32;
	if ( this->currencySpcBeforeSym[i]->equals(other->currencySpcBeforeSym[i]) )     
		goto label_cond_20;
	return cVar1;
	// 1779    .line 1052
label_cond_20:
	if ( this->currencySpcAfterSym[i]->equals(other->currencySpcAfterSym[i]) )     
		goto label_cond_2f;
	return cVar1;
	// 1798    .line 1048
label_cond_2f:
	i = ( i + 0x1);
	goto label_goto_e;
	// 1804    .line 1057
label_cond_32:
	if ( other->digits )     
		goto label_cond_48;
	i = 0x0;
label_goto_37:
	if ( i >= 0xa )
		goto label_cond_53;
	if ( this->digits[i] == (other->zeroDigit +  i) )
		goto label_cond_45;
	return cVar1;
	// 1832    .line 1058
label_cond_45:
	i = ( i + 0x1);
	goto label_goto_37;
	// 1838    .line 1063
label_cond_48:
	if ( java::util::Arrays::equals(this->digits, other->digits) )     
		goto label_cond_53;
	return cVar1;
	// 1853    .line 1068
label_cond_53:
	if ( this->groupingSeparator != other->groupingSeparator )
		goto label_cond_e3;
	if ( this->decimalSeparator != other->decimalSeparator )
		goto label_cond_e3;
	if ( this->percent != other->percent )
		goto label_cond_e3;
	if ( this->perMill != other->perMill )
		goto label_cond_e3;
	if ( this->digit != other->digit )
		goto label_cond_e3;
	if ( this->minusSign != other->minusSign )
		goto label_cond_e3;
	if ( !(this->minusString->equals(other->minusString)) )  
		goto label_cond_e3;
	if ( this->patternSeparator != other->patternSeparator )
		goto label_cond_e3;
	if ( !(this->infinity->equals(other->infinity)) )  
		goto label_cond_e3;
	if ( !(this->NaN->equals(other->NaN)) )  
		goto label_cond_e3;
	if ( !(this->currencySymbol->equals(other->currencySymbol)) )  
		goto label_cond_e3;
	if ( !(this->intlCurrencySymbol->equals(other->intlCurrencySymbol)) )  
		goto label_cond_e3;
	if ( this->padEscape != other->padEscape )
		goto label_cond_e3;
	if ( this->plusSign != other->plusSign )
		goto label_cond_e3;
	if ( !(this->plusString->equals(other->plusString)) )  
		goto label_cond_e3;
	if ( !(this->exponentSeparator->equals(other->exponentSeparator)) )  
		goto label_cond_e3;
	if ( this->monetarySeparator != other->monetarySeparator )
		goto label_cond_e3;
	if ( this->monetaryGroupingSeparator != other->monetaryGroupingSeparator )
		goto label_cond_e3;
	cVar1 = this->exponentMultiplicationSign->equals(other->exponentMultiplicationSign);
label_cond_e3:
	return cVar1;

}
// .method public getCurrency()Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::text::DecimalFormatSymbols::getCurrency()
{
	
	return this->currency;

}
// .method getCurrencyPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getCurrencyPattern()
{
	
	return this->currencyPattern;

}
// .method public getCurrencySymbol()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getCurrencySymbol()
{
	
	return this->currencySymbol;

}
// .method public getDecimalSeparator()C
char android::icu::text::DecimalFormatSymbols::getDecimalSeparator()
{
	
	return this->decimalSeparator;

}
// .method public getDecimalSeparatorString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getDecimalSeparatorString()
{
	
	return this->decimalSeparatorString;

}
// .method public getDigit()C
char android::icu::text::DecimalFormatSymbols::getDigit()
{
	
	return this->digit;

}
// .method public getDigitStrings()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getDigitStrings()
{
	
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	cVar0 = this->digitStrings->clone();
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method getDigitStringsLocal()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getDigitStringsLocal()
{
	
	return this->digitStrings;

}
// .method public getDigits()[C
char android::icu::text::DecimalFormatSymbols::getDigits()
{
	
	std::shared_ptr<char[]> cVar0;
	
	cVar0 = this->digits->clone();
	cVar0->checkCast("char[]");
	return cVar0;

}
// .method public getExponentMultiplicationSign()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getExponentMultiplicationSign()
{
	
	return this->exponentMultiplicationSign;

}
// .method public getExponentSeparator()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getExponentSeparator()
{
	
	return this->exponentSeparator;

}
// .method public getGroupingSeparator()C
char android::icu::text::DecimalFormatSymbols::getGroupingSeparator()
{
	
	return this->groupingSeparator;

}
// .method public getGroupingSeparatorString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getGroupingSeparatorString()
{
	
	return this->groupingSeparatorString;

}
// .method public getInfinity()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getInfinity()
{
	
	return this->infinity;

}
// .method public getInternationalCurrencySymbol()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getInternationalCurrencySymbol()
{
	
	return this->intlCurrencySymbol;

}
// .method public final getLocale(Landroid/icu/util/ULocale$Type;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::DecimalFormatSymbols::getLocale(std::shared_ptr<android::icu::util::ULocale_S_Type> type)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p1, "type"    # Landroid/icu/util/ULocale$Type;
	if ( type != android::icu::util::ULocale::ACTUAL_LOCALE )
		goto label_cond_7;
	cVar0 = this->actualLocale;
label_goto_6:
	return cVar0;
	// 2208    .line 1763
label_cond_7:
	cVar0 = this->validLocale;
	goto label_goto_6;

}
// .method public getLocale()Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::text::DecimalFormatSymbols::getLocale()
{
	
	return this->requestedLocale;

}
// .method public getMinusSign()C
char android::icu::text::DecimalFormatSymbols::getMinusSign()
{
	
	return this->minusSign;

}
// .method public getMinusSignString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getMinusSignString()
{
	
	return this->minusString;

}
// .method public getMonetaryDecimalSeparator()C
char android::icu::text::DecimalFormatSymbols::getMonetaryDecimalSeparator()
{
	
	return this->monetarySeparator;

}
// .method public getMonetaryDecimalSeparatorString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getMonetaryDecimalSeparatorString()
{
	
	return this->monetarySeparatorString;

}
// .method public getMonetaryGroupingSeparator()C
char android::icu::text::DecimalFormatSymbols::getMonetaryGroupingSeparator()
{
	
	return this->monetaryGroupingSeparator;

}
// .method public getMonetaryGroupingSeparatorString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getMonetaryGroupingSeparatorString()
{
	
	return this->monetaryGroupingSeparatorString;

}
// .method public getNaN()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getNaN()
{
	
	return this->NaN;

}
// .method public getPadEscape()C
char android::icu::text::DecimalFormatSymbols::getPadEscape()
{
	
	return this->padEscape;

}
// .method public getPatternForCurrencySpacing(IZ)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getPatternForCurrencySpacing(int itemType,bool beforeCurrency)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "itemType"    # I
	//    .param p2, "beforeCurrency"    # Z
	if ( itemType < 0 ) 
		goto label_cond_5;
	if ( itemType <= 0x2 )
		goto label_cond_1f;
label_cond_5:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown currency spacing: ")))->append(itemType)->toString());
	// throw
	throw cVar0;
	// 2345    .line 971
label_cond_1f:
	if ( !(beforeCurrency) )  
		goto label_cond_26;
	return this->currencySpcBeforeSym[itemType];
	// 2356    .line 974
label_cond_26:
	return this->currencySpcAfterSym[itemType];

}
// .method public getPatternSeparator()C
char android::icu::text::DecimalFormatSymbols::getPatternSeparator()
{
	
	return this->patternSeparator;

}
// .method public getPerMill()C
char android::icu::text::DecimalFormatSymbols::getPerMill()
{
	
	return this->perMill;

}
// .method public getPerMillString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getPerMillString()
{
	
	return this->perMillString;

}
// .method public getPercent()C
char android::icu::text::DecimalFormatSymbols::getPercent()
{
	
	return this->percent;

}
// .method public getPercentString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getPercentString()
{
	
	return this->percentString;

}
// .method public getPlusSign()C
char android::icu::text::DecimalFormatSymbols::getPlusSign()
{
	
	return this->plusSign;

}
// .method public getPlusSignString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::DecimalFormatSymbols::getPlusSignString()
{
	
	return this->plusString;

}
// .method public getSignificantDigit()C
char android::icu::text::DecimalFormatSymbols::getSignificantDigit()
{
	
	return this->sigDigit;

}
// .method public getULocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::DecimalFormatSymbols::getULocale()
{
	
	return this->ulocale;

}
// .method public getZeroDigit()C
char android::icu::text::DecimalFormatSymbols::getZeroDigit()
{
	
	return this->zeroDigit;

}
// .method public hashCode()I
int android::icu::text::DecimalFormatSymbols::hashCode()
{
	
	//    .local v0, "result":I
	return (( (( this->digits[0x0] * 0x25) + this->groupingSeparator) * 0x25) + this->decimalSeparator);

}
// .method public setCurrency(Landroid/icu/util/Currency;)V
void android::icu::text::DecimalFormatSymbols::setCurrency(std::shared_ptr<android::icu::util::Currency> currency)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "currency"    # Landroid/icu/util/Currency;
	if ( currency )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 2510    .line 746
label_cond_8:
	this->currency = currency;
	this->intlCurrencySymbol = currency->getCurrencyCode();
	this->currencySymbol = currency->getSymbol(this->requestedLocale);
	return;

}
// .method public setCurrencySymbol(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setCurrencySymbol(std::shared_ptr<java::lang::String> currency)
{
	
	//    .param p1, "currency"    # Ljava/lang/String;
	this->currencySymbol = currency;
	return;

}
// .method public setDecimalSeparator(C)V
void android::icu::text::DecimalFormatSymbols::setDecimalSeparator(char decimalSeparator)
{
	
	//    .param p1, "decimalSeparator"    # C
	this->decimalSeparator = decimalSeparator;
	this->decimalSeparatorString = java::lang::String::valueOf(decimalSeparator);
	return;

}
// .method public setDecimalSeparatorString(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setDecimalSeparatorString(std::shared_ptr<java::lang::String> decimalSeparatorString)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "decimalSeparatorString"    # Ljava/lang/String;
	if ( decimalSeparatorString )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input decimal separator is null")));
	// throw
	throw cVar0;
	// 2582    .line 384
label_cond_b:
	this->decimalSeparatorString = decimalSeparatorString;
	if ( decimalSeparatorString->length() != 0x1 )
		goto label_cond_1c;
	this->decimalSeparator = decimalSeparatorString->charAt(0x0);
label_goto_1b:
	return;
	// 2608    .line 389
label_cond_1c:
	this->decimalSeparator = 0x2e;
	goto label_goto_1b;

}
// .method public setDigit(C)V
void android::icu::text::DecimalFormatSymbols::setDigit(char digit)
{
	
	//    .param p1, "digit"    # C
	this->digit = digit;
	return;

}
// .method public setDigitStrings([Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setDigitStrings(std::shared_ptr<std::vector<java::lang::String>> digitStrings)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::NullPointerException> cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	std::shared<std::vector<std::vector<java::lang::String>>> tmpDigitStrings;
	std::shared<std::vector<char[]>> tmpDigits;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar4;
	
	//    .param p1, "digitStrings"    # [Ljava/lang/String;
	cVar0 = 0x0;
	cVar1 = 0xa;
	if ( digitStrings )     
		goto label_cond_e;
	cVar2 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input digit string array is null")));
	// throw
	throw cVar2;
	// 2650    .line 241
label_cond_e:
	if ( digitStrings->size() == cVar1 )
		goto label_cond_1a;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Number of digit strings is not 10")));
	// throw
	throw cVar3;
	// 2665    .line 246
label_cond_1a:
	tmpDigitStrings = std::make_shared<std::vector<std::vector<java::lang::String>>>(cVar1);
	//    .local v1, "tmpDigitStrings":[Ljava/lang/String;
	tmpDigits = std::make_shared<std::vector<char[]>>(cVar1);
	//    .local v2, "tmpDigits":[C
	i = 0x0;
	//    .end local v2    # "tmpDigits":[C
	//    .local v0, "i":I
label_goto_1f:
	if ( i >= cVar1 )
		goto label_cond_4a;
	if ( digitStrings[i] )     
		goto label_cond_2e;
	cVar4 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input digit string array contains a null element")));
	// throw
	throw cVar4;
	// 2696    .line 252
label_cond_2e:
	tmpDigitStrings[i] = digitStrings[i];
	if ( !(tmpDigits) )  
		goto label_cond_48;
	if ( digitStrings[i]->length() != 0x1 )
		goto label_cond_48;
	tmpDigits[i] = digitStrings[i]->charAt(cVar0);
label_goto_45:
	i = ( i + 0x1);
	goto label_goto_1f;
	// 2730    .line 257
label_cond_48:
	//    .local v2, "tmpDigits":[C
	goto label_goto_45;
	// 2737    .line 261
	// 2738    .end local v2    # "tmpDigits":[C
label_cond_4a:
	this->digitStrings = tmpDigitStrings;
	if ( tmpDigits )     
		goto label_cond_59;
	this->zeroDigit = android::icu::text::DecimalFormatSymbols::DEF_DIGIT_CHARS_ARRAY[cVar0];
	this->digits = android::icu::text::DecimalFormatSymbols::DEF_DIGIT_CHARS_ARRAY;
label_goto_58:
	return;
	// 2761    .line 268
label_cond_59:
	this->zeroDigit = tmpDigits[cVar0];
	this->digits = tmpDigits;
	goto label_goto_58;

}
// .method public setExponentMultiplicationSign(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setExponentMultiplicationSign(std::shared_ptr<java::lang::String> exponentMultiplicationSign)
{
	
	//    .param p1, "exponentMultiplicationSign"    # Ljava/lang/String;
	this->exponentMultiplicationSign = exponentMultiplicationSign;
	return;

}
// .method public setExponentSeparator(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setExponentSeparator(std::shared_ptr<java::lang::String> exp)
{
	
	//    .param p1, "exp"    # Ljava/lang/String;
	this->exponentSeparator = exp;
	return;

}
// .method public setGroupingSeparator(C)V
void android::icu::text::DecimalFormatSymbols::setGroupingSeparator(char groupingSeparator)
{
	
	//    .param p1, "groupingSeparator"    # C
	this->groupingSeparator = groupingSeparator;
	this->groupingSeparatorString = java::lang::String::valueOf(groupingSeparator);
	return;

}
// .method public setGroupingSeparatorString(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setGroupingSeparatorString(std::shared_ptr<java::lang::String> groupingSeparatorString)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "groupingSeparatorString"    # Ljava/lang/String;
	if ( groupingSeparatorString )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input grouping separator is null")));
	// throw
	throw cVar0;
	// 2833    .line 332
label_cond_b:
	this->groupingSeparatorString = groupingSeparatorString;
	if ( groupingSeparatorString->length() != 0x1 )
		goto label_cond_1c;
	this->groupingSeparator = groupingSeparatorString->charAt(0x0);
label_goto_1b:
	return;
	// 2859    .line 337
label_cond_1c:
	this->groupingSeparator = 0x2c;
	goto label_goto_1b;

}
// .method public setInfinity(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setInfinity(std::shared_ptr<java::lang::String> infinity)
{
	
	//    .param p1, "infinity"    # Ljava/lang/String;
	this->infinity = infinity;
	return;

}
// .method public setInternationalCurrencySymbol(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setInternationalCurrencySymbol(std::shared_ptr<java::lang::String> currency)
{
	
	//    .param p1, "currency"    # Ljava/lang/String;
	this->intlCurrencySymbol = currency;
	return;

}
// .method final setLocale(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)V
void android::icu::text::DecimalFormatSymbols::setLocale(std::shared_ptr<android::icu::util::ULocale> valid,std::shared_ptr<android::icu::util::ULocale> actual)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	
	//    .param p1, "valid"    # Landroid/icu/util/ULocale;
	//    .param p2, "actual"    # Landroid/icu/util/ULocale;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( valid )     
		goto label_cond_f;
	cVar2 = cVar0;
label_goto_5:
	if ( actual )     
		goto label_cond_11;
label_goto_7:
	if ( cVar2 == cVar0 )
		goto label_cond_13;
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar3;
label_cond_f:
	cVar2 = cVar1;
	goto label_goto_5;
label_cond_11:
	cVar0 = cVar1;
	goto label_goto_7;
	// 2931    .line 1791
label_cond_13:
	this->validLocale = valid;
	this->actualLocale = actual;
	return;

}
// .method public setMinusSign(C)V
void android::icu::text::DecimalFormatSymbols::setMinusSign(char minusSign)
{
	
	//    .param p1, "minusSign"    # C
	this->minusSign = minusSign;
	this->minusString = java::lang::String::valueOf(minusSign);
	return;

}
// .method public setMinusSignString(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setMinusSignString(std::shared_ptr<java::lang::String> minusSignString)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "minusSignString"    # Ljava/lang/String;
	if ( minusSignString )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input minus sign is null")));
	// throw
	throw cVar0;
	// 2978    .line 617
label_cond_b:
	this->minusString = minusSignString;
	if ( minusSignString->length() != 0x1 )
		goto label_cond_1c;
	this->minusSign = minusSignString->charAt(0x0);
label_goto_1b:
	return;
	// 3004    .line 622
label_cond_1c:
	this->minusSign = 0x2d;
	goto label_goto_1b;

}
// .method public setMonetaryDecimalSeparator(C)V
void android::icu::text::DecimalFormatSymbols::setMonetaryDecimalSeparator(char sep)
{
	
	//    .param p1, "sep"    # C
	this->monetarySeparator = sep;
	this->monetarySeparatorString = java::lang::String::valueOf(sep);
	return;

}
// .method public setMonetaryDecimalSeparatorString(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setMonetaryDecimalSeparatorString(std::shared_ptr<java::lang::String> sep)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "sep"    # Ljava/lang/String;
	if ( sep )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input monetary decimal separator is null")));
	// throw
	throw cVar0;
	// 3049    .line 794
label_cond_b:
	this->monetarySeparatorString = sep;
	if ( sep->length() != 0x1 )
		goto label_cond_1c;
	this->monetarySeparator = sep->charAt(0x0);
label_goto_1b:
	return;
	// 3075    .line 799
label_cond_1c:
	this->monetarySeparator = 0x2e;
	goto label_goto_1b;

}
// .method public setMonetaryGroupingSeparator(C)V
void android::icu::text::DecimalFormatSymbols::setMonetaryGroupingSeparator(char sep)
{
	
	//    .param p1, "sep"    # C
	this->monetaryGroupingSeparator = sep;
	this->monetaryGroupingSeparatorString = java::lang::String::valueOf(sep);
	return;

}
// .method public setMonetaryGroupingSeparatorString(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setMonetaryGroupingSeparatorString(std::shared_ptr<java::lang::String> sep)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "sep"    # Ljava/lang/String;
	if ( sep )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input monetary grouping separator is null")));
	// throw
	throw cVar0;
	// 3120    .line 846
label_cond_b:
	this->monetaryGroupingSeparatorString = sep;
	if ( sep->length() != 0x1 )
		goto label_cond_1c;
	this->monetaryGroupingSeparator = sep->charAt(0x0);
label_goto_1b:
	return;
	// 3146    .line 851
label_cond_1c:
	this->monetaryGroupingSeparator = 0x2c;
	goto label_goto_1b;

}
// .method public setNaN(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setNaN(std::shared_ptr<java::lang::String> NaN)
{
	
	//    .param p1, "NaN"    # Ljava/lang/String;
	this->NaN = NaN;
	return;

}
// .method public setPadEscape(C)V
void android::icu::text::DecimalFormatSymbols::setPadEscape(char c)
{
	
	//    .param p1, "c"    # C
	this->padEscape = c;
	return;

}
// .method public setPatternForCurrencySpacing(IZLjava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setPatternForCurrencySpacing(int itemType,bool beforeCurrency,std::shared_ptr<java::lang::String> pattern)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "itemType"    # I
	//    .param p2, "beforeCurrency"    # Z
	//    .param p3, "pattern"    # Ljava/lang/String;
	if ( itemType < 0 ) 
		goto label_cond_5;
	if ( itemType <= 0x2 )
		goto label_cond_1f;
label_cond_5:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("unknown currency spacing: ")))->append(itemType)->toString());
	// throw
	throw cVar0;
	// 3220    .line 998
label_cond_1f:
	if ( !(beforeCurrency) )  
		goto label_cond_26;
	this->currencySpcBeforeSym[itemType] = pattern;
label_goto_25:
	return;
	// 3233    .line 1001
label_cond_26:
	this->currencySpcAfterSym[itemType] = pattern;
	goto label_goto_25;

}
// .method public setPatternSeparator(C)V
void android::icu::text::DecimalFormatSymbols::setPatternSeparator(char patternSeparator)
{
	
	//    .param p1, "patternSeparator"    # C
	this->patternSeparator = patternSeparator;
	return;

}
// .method public setPerMill(C)V
void android::icu::text::DecimalFormatSymbols::setPerMill(char perMill)
{
	
	//    .param p1, "perMill"    # C
	this->perMill = perMill;
	this->perMillString = java::lang::String::valueOf(perMill);
	return;

}
// .method public setPerMillString(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setPerMillString(std::shared_ptr<java::lang::String> perMillString)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "perMillString"    # Ljava/lang/String;
	if ( perMillString )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input permille string is null")));
	// throw
	throw cVar0;
	// 3290    .line 436
label_cond_b:
	this->perMillString = perMillString;
	if ( perMillString->length() != 0x1 )
		goto label_cond_1c;
	this->perMill = perMillString->charAt(0x0);
label_goto_1b:
	return;
	// 3316    .line 441
label_cond_1c:
	this->perMill = 0x2030;
	goto label_goto_1b;

}
// .method public setPercent(C)V
void android::icu::text::DecimalFormatSymbols::setPercent(char percent)
{
	
	//    .param p1, "percent"    # C
	this->percent = percent;
	this->percentString = java::lang::String::valueOf(percent);
	return;

}
// .method public setPercentString(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setPercentString(std::shared_ptr<java::lang::String> percentString)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "percentString"    # Ljava/lang/String;
	if ( percentString )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input percent sign is null")));
	// throw
	throw cVar0;
	// 3361    .line 488
label_cond_b:
	this->percentString = percentString;
	if ( percentString->length() != 0x1 )
		goto label_cond_1c;
	this->percent = percentString->charAt(0x0);
label_goto_1b:
	return;
	// 3387    .line 493
label_cond_1c:
	this->percent = 0x25;
	goto label_goto_1b;

}
// .method public setPlusSign(C)V
void android::icu::text::DecimalFormatSymbols::setPlusSign(char plus)
{
	
	//    .param p1, "plus"    # C
	this->plusSign = plus;
	this->plusString = java::lang::String::valueOf(plus);
	return;

}
// .method public setPlusSignString(Ljava/lang/String;)V
void android::icu::text::DecimalFormatSymbols::setPlusSignString(std::shared_ptr<java::lang::String> plusSignString)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "plusSignString"    # Ljava/lang/String;
	if ( plusSignString )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The input plus sign is null")));
	// throw
	throw cVar0;
	// 3432    .line 677
label_cond_b:
	this->plusString = plusSignString;
	if ( plusSignString->length() != 0x1 )
		goto label_cond_1c;
	this->plusSign = plusSignString->charAt(0x0);
label_goto_1b:
	return;
	// 3458    .line 682
label_cond_1c:
	this->plusSign = 0x2b;
	goto label_goto_1b;

}
// .method public setSignificantDigit(C)V
void android::icu::text::DecimalFormatSymbols::setSignificantDigit(char sigDigit)
{
	
	//    .param p1, "sigDigit"    # C
	this->sigDigit = sigDigit;
	return;

}
// .method public setZeroDigit(C)V
void android::icu::text::DecimalFormatSymbols::setZeroDigit(char zeroDigit)
{
	
	int cVar0;
	std::shared_ptr<std::vector<java::lang::String>> cVar1;
	std::shared_ptr<char[]> cVar2;
	int i;
	char d;
	
	//    .param p1, "zeroDigit"    # C
	cVar0 = 0x0;
	this->zeroDigit = zeroDigit;
	cVar1 = this->digitStrings->clone();
	cVar1->checkCast("std::vector<java::lang::String>");
	this->digitStrings = cVar1;
	cVar2 = this->digits->clone();
	cVar2->checkCast("char[]");
	this->digits = cVar2;
	this->digitStrings[cVar0] = java::lang::String::valueOf(zeroDigit);
	this->digits[cVar0] = zeroDigit;
	i = 0x1;
	//    .local v1, "i":I
label_goto_24:
	if ( i >= 0xa )
		goto label_cond_3a;
	d = (char)((zeroDigit + i));
	//    .local v0, "d":C
	this->digitStrings[i] = java::lang::String::valueOf(d);
	this->digits[i] = d;
	i = ( i + 0x1);
	goto label_goto_24;
	// 3559    .line 200
	// 3560    .end local v0    # "d":C
label_cond_3a:
	return;

}


