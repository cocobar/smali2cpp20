// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumberFormat.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.math.BigDecimal.h"
#include "android.icu.text.DecimalFormat.h"
#include "android.icu.text.DecimalFormatSymbols.h"
#include "android.icu.text.DisplayContext_S_Type.h"
#include "android.icu.text.DisplayContext.h"
#include "android.icu.text.NumberFormat_S_NumberFormatFactory.h"
#include "android.icu.text.NumberFormat_S_NumberFormatShim.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.NumberingSystem.h"
#include "android.icu.text.RuleBasedNumberFormat.h"
#include "android.icu.util.Currency_S_CurrencyUsage.h"
#include "android.icu.util.Currency.h"
#include "android.icu.util.CurrencyAmount.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale_S_Type.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.io.InvalidObjectException.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.Class.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Long.h"
#include "java.lang.Math.h"
#include "java.lang.Number.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.math.BigDecimal.h"
#include "java.math.BigInteger.h"
#include "java.text.FieldPosition.h"
#include "java.text.ParseException.h"
#include "java.text.ParsePosition.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"

static android::icu::text::NumberFormat::_assertionsDisabled;
static android::icu::text::NumberFormat::ACCOUNTINGCURRENCYSTYLE = 0x7;
static android::icu::text::NumberFormat::CASHCURRENCYSTYLE = 0x8;
static android::icu::text::NumberFormat::CURRENCYSTYLE = 0x1;
static android::icu::text::NumberFormat::FRACTION_FIELD = 0x1;
static android::icu::text::NumberFormat::INTEGERSTYLE = 0x4;
static android::icu::text::NumberFormat::INTEGER_FIELD = 0x0;
static android::icu::text::NumberFormat::ISOCURRENCYSTYLE = 0x5;
static android::icu::text::NumberFormat::NUMBERSTYLE = 0x0;
static android::icu::text::NumberFormat::PERCENTSTYLE = 0x2;
static android::icu::text::NumberFormat::PLURALCURRENCYSTYLE = 0x6;
static android::icu::text::NumberFormat::SCIENTIFICSTYLE = 0x3;
static android::icu::text::NumberFormat::STANDARDCURRENCYSTYLE = 0x9;
static android::icu::text::NumberFormat::currentSerialVersion = 0x2;
static android::icu::text::NumberFormat::doubleCurrencySign;
static android::icu::text::NumberFormat::doubleCurrencyStr;
static android::icu::text::NumberFormat::serialVersionUID = -0x20094c40ec82f818L;
static android::icu::text::NumberFormat::shim;
// .method static constructor <clinit>()V
void android::icu::text::NumberFormat::static_cinit()
{
	
	std::shared<std::vector<char[]>> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	
	android::icu::text::NumberFormat::_assertionsDisabled = ( android::icu::text::NumberFormat()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<std::vector<char[]>>(0x2);
	?;
	android::icu::text::NumberFormat::doubleCurrencySign = cVar0;
	cVar1 = std::make_shared<java::lang::String>(android::icu::text::NumberFormat::doubleCurrencySign);
	android::icu::text::NumberFormat::doubleCurrencyStr = cVar1;
	return;
	// 121    .line 1481
	// 122    :array_1c
	// 123    .array-data 2
	// 124        0xa4s
	// 125        0xa4s
	// 126    .end array-data

}
// .method public constructor <init>()V
android::icu::text::NumberFormat::NumberFormat()
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	bool cVar2;
	unsigned char cVar3;
	
	cVar0 = 0x28;
	cVar1 = 0x3;
	cVar2 = 0x1;
	cVar3 = 0x0;
	// 142    invoke-direct {p0}, Landroid/icu/text/UFormat;-><init>()V
	this->groupingUsed = cVar2;
	this->maxIntegerDigits = cVar0;
	this->minIntegerDigits = cVar2;
	this->maxFractionDigits = cVar1;
	this->minFractionDigits = cVar3;
	this->parseIntegerOnly = cVar3;
	this->maximumIntegerDigits = cVar0;
	this->minimumIntegerDigits = cVar2;
	this->maximumFractionDigits = cVar1;
	this->minimumFractionDigits = cVar3;
	this->serialVersionOnStream = 0x2;
	this->capitalizationSetting = android::icu::text::DisplayContext::CAPITALIZATION_NONE;
	return;

}
// .method static createInstance(Landroid/icu/util/ULocale;I)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::createInstance(std::shared_ptr<android::icu::util::ULocale> desiredLocale,int choice)
{
	
	std::shared_ptr<android::icu::text::DecimalFormatSymbols> symbols;
	auto temp;
	std::shared_ptr<java::lang::String> pattern;
	std::shared_ptr<android::icu::text::NumberingSystem> ns;
	std::shared_ptr<java::lang::String> nsDesc;
	int firstSlash;
	int lastSlash;
	std::shared_ptr<android::icu::util::ULocale> nsLoc;
	std::shared_ptr<android::icu::text::RuleBasedNumberFormat> r;
	std::shared_ptr<android::icu::text::NumberFormat> format;
	std::shared_ptr<android::icu::text::DecimalFormat> f;
	
	//    .param p0, "desiredLocale"    # Landroid/icu/util/ULocale;
	//    .param p1, "choice"    # I
	//    .local v14, "pattern":Ljava/lang/String;
	var5 = symbols(desiredLocale);
	//    .local v16, "symbols":Landroid/icu/text/DecimalFormatSymbols;
	if ( choice == 0x1 )
		goto label_cond_1d;
	if ( choice != 0x5 )
		goto label_cond_43;
label_cond_1d:
label_goto_1d:
	temp = symbols->getCurrencyPattern();
	//    .local v17, "temp":Ljava/lang/String;
	if ( !(temp) )  
		goto label_cond_25;
	pattern = temp;
	//    .end local v17    # "temp":Ljava/lang/String;
label_cond_25:
	if ( choice != 0x5 )
		goto label_cond_3a;
label_cond_3a:
	ns = android::icu::text::NumberingSystem::getInstance(desiredLocale);
	//    .local v8, "ns":Landroid/icu/text/NumberingSystem;
	if ( ns )     
		goto label_cond_5c;
	return 0x0;
	// 280    .line 1264
	// 281    .end local v8    # "ns":Landroid/icu/text/NumberingSystem;
label_cond_43:
	if ( choice == 0x7 )
		goto label_cond_1d;
	if ( choice == 0x8 )
		goto label_cond_1d;
	if ( choice != 0x9 )
		goto label_cond_25;
	goto label_goto_1d;
	// 310    .line 1286
	// 311    .restart local v8    # "ns":Landroid/icu/text/NumberingSystem;
label_cond_5c:
	if ( !(ns) )  
		goto label_cond_cd;
	if ( !(ns->isAlgorithmic()) )  
		goto label_cond_cd;
	//    .local v3, "desiredRulesType":I
	nsDesc = ns->getDescription();
	//    .local v9, "nsDesc":Ljava/lang/String;
	firstSlash = nsDesc->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")));
	//    .local v5, "firstSlash":I
	lastSlash = nsDesc->lastIndexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")));
	//    .local v7, "lastSlash":I
	if ( lastSlash <= firstSlash )
		goto label_cond_c9;
	//    .local v11, "nsLocID":Ljava/lang/String;
	//    .local v12, "nsRuleSetGroup":Ljava/lang/String;
	//    .local v13, "nsRuleSetName":Ljava/lang/String;
	nsLoc = std::make_shared<android::icu::util::ULocale>(nsDesc->substring(0x0, firstSlash));
	//    .local v10, "nsLoc":Landroid/icu/util/ULocale;
	if ( !(nsDesc->substring(( firstSlash + 0x1), lastSlash)->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("SpelloutRules")))) )  
		goto label_cond_a6;
	//    .end local v11    # "nsLocID":Ljava/lang/String;
	//    .end local v12    # "nsRuleSetGroup":Ljava/lang/String;
label_cond_a6:
label_goto_a6:
	r = std::make_shared<android::icu::text::RuleBasedNumberFormat>(nsLoc, 0x4);
	//    .local v15, "r":Landroid/icu/text/RuleBasedNumberFormat;
	r->setDefaultRuleSet(nsRuleSetName);
	format = r;
	//    .end local v3    # "desiredRulesType":I
	//    .end local v5    # "firstSlash":I
	//    .end local v7    # "lastSlash":I
	//    .end local v9    # "nsDesc":Ljava/lang/String;
	//    .end local v10    # "nsLoc":Landroid/icu/util/ULocale;
	//    .end local v13    # "nsRuleSetName":Ljava/lang/String;
	//    .end local v15    # "r":Landroid/icu/text/RuleBasedNumberFormat;
	//    .local v6, "format":Landroid/icu/text/NumberFormat;
label_goto_af:
	//    .local v18, "valid":Landroid/icu/util/ULocale;
	//    .local v2, "actual":Landroid/icu/util/ULocale;
	format->setLocale(symbols->getLocale(android::icu::util::ULocale::VALID_LOCALE), symbols->getLocale(android::icu::util::ULocale::ACTUAL_LOCALE));
	return format;
	// 461    .line 1307
	// 462    .end local v2    # "actual":Landroid/icu/util/ULocale;
	// 463    .end local v6    # "format":Landroid/icu/text/NumberFormat;
	// 464    .end local v18    # "valid":Landroid/icu/util/ULocale;
	// 465    .restart local v3    # "desiredRulesType":I
	// 466    .restart local v5    # "firstSlash":I
	// 467    .restart local v7    # "lastSlash":I
	// 468    .restart local v9    # "nsDesc":Ljava/lang/String;
label_cond_c9:
	//    .restart local v10    # "nsLoc":Landroid/icu/util/ULocale;
	//    .restart local v13    # "nsRuleSetName":Ljava/lang/String;
	goto label_goto_a6;
	// 479    .line 1315
	// 480    .end local v3    # "desiredRulesType":I
	// 481    .end local v5    # "firstSlash":I
	// 482    .end local v7    # "lastSlash":I
	// 483    .end local v9    # "nsDesc":Ljava/lang/String;
	// 484    .end local v10    # "nsLoc":Landroid/icu/util/ULocale;
	// 485    .end local v13    # "nsRuleSetName":Ljava/lang/String;
label_cond_cd:
	f = std::make_shared<android::icu::text::DecimalFormat>(android::icu::text::NumberFormat::getPattern(desiredLocale, choice), symbols, choice);
	//    .local v4, "f":Landroid/icu/text/DecimalFormat;
	if ( choice != 0x4 )
		goto label_cond_f3;
	f->setMaximumFractionDigits(0x0);
	f->setDecimalSeparatorAlwaysShown(0x0);
	f->setParseIntegerOnly(0x1);
label_cond_f3:
	if ( choice != 0x8 )
		goto label_cond_102;
	f->setCurrencyUsage(android::icu::util::Currency_S_CurrencyUsage::CASH);
label_cond_102:
	format = f;
	//    .restart local v6    # "format":Landroid/icu/text/NumberFormat;
	goto label_goto_af;

}
// .method public static getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::text::NumberFormat::getAvailableLocales()
{
	
	if ( android::icu::text::NumberFormat::shim )     
		goto label_cond_9;
	return android::icu::impl::ICUResourceBundle::getAvailableLocales({const[class].FS-Param});
	// 567    .line 912
label_cond_9:
	return android::icu::text::NumberFormat::getShim({const[class].FS-Param})->getAvailableLocales();

}
// .method public static getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::NumberFormat::getAvailableULocales()
{
	
	if ( android::icu::text::NumberFormat::shim )     
		goto label_cond_9;
	return android::icu::impl::ICUResourceBundle::getAvailableULocales({const[class].FS-Param});
	// 596    .line 924
label_cond_9:
	return android::icu::text::NumberFormat::getShim({const[class].FS-Param})->getAvailableULocales();

}
// .method public static final getCurrencyInstance()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getCurrencyInstance()
{
	
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), 0x1);

}
// .method public static getCurrencyInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getCurrencyInstance(std::shared_ptr<android::icu::util::ULocale> inLocale)
{
	
	//    .param p0, "inLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::NumberFormat::getInstance(inLocale, 0x1);

}
// .method public static getCurrencyInstance(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getCurrencyInstance(std::shared_ptr<java::util::Locale> inLocale)
{
	
	//    .param p0, "inLocale"    # Ljava/util/Locale;
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::forLocale(inLocale), 0x1);

}
// .method public static final getInstance()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getInstance()
{
	
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), 0x0);

}
// .method public static final getInstance(I)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getInstance(int style)
{
	
	//    .param p0, "style"    # I
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), style);

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getInstance(std::shared_ptr<android::icu::util::ULocale> inLocale)
{
	
	//    .param p0, "inLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::NumberFormat::getInstance(inLocale, 0x0);

}
// .method public static getInstance(Landroid/icu/util/ULocale;I)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getInstance(std::shared_ptr<android::icu::util::ULocale> desiredLocale,int choice)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "desiredLocale"    # Landroid/icu/util/ULocale;
	//    .param p1, "choice"    # I
	if ( choice < 0 ) 
		goto label_cond_6;
	if ( choice <= 0x9 )
		goto label_cond_f;
label_cond_6:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("choice should be from NUMBERSTYLE to STANDARDCURRENCYSTYLE")));
	// throw
	throw cVar0;
	// 742    .line 1245
label_cond_f:
	return android::icu::text::NumberFormat::getShim({const[class].FS-Param})->createInstance(desiredLocale, choice);

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getInstance(std::shared_ptr<java::util::Locale> inLocale)
{
	
	//    .param p0, "inLocale"    # Ljava/util/Locale;
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::forLocale(inLocale), 0x0);

}
// .method public static getInstance(Ljava/util/Locale;I)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getInstance(std::shared_ptr<java::util::Locale> inLocale,int style)
{
	
	//    .param p0, "inLocale"    # Ljava/util/Locale;
	//    .param p1, "style"    # I
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::forLocale(inLocale), style);

}
// .method public static final getIntegerInstance()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getIntegerInstance()
{
	
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), 0x4);

}
// .method public static getIntegerInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getIntegerInstance(std::shared_ptr<android::icu::util::ULocale> inLocale)
{
	
	//    .param p0, "inLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::NumberFormat::getInstance(inLocale, 0x4);

}
// .method public static getIntegerInstance(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getIntegerInstance(std::shared_ptr<java::util::Locale> inLocale)
{
	
	//    .param p0, "inLocale"    # Ljava/util/Locale;
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::forLocale(inLocale), 0x4);

}
// .method public static final getNumberInstance()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getNumberInstance()
{
	
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), 0x0);

}
// .method public static getNumberInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getNumberInstance(std::shared_ptr<android::icu::util::ULocale> inLocale)
{
	
	//    .param p0, "inLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::NumberFormat::getInstance(inLocale, 0x0);

}
// .method public static getNumberInstance(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getNumberInstance(std::shared_ptr<java::util::Locale> inLocale)
{
	
	//    .param p0, "inLocale"    # Ljava/util/Locale;
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::forLocale(inLocale), 0x0);

}
// .method protected static getPattern(Landroid/icu/util/ULocale;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NumberFormat::getPattern(std::shared_ptr<android::icu::util::ULocale> forLocale,int choice)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	std::shared_ptr<java::lang::String> patternKey;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::String> result;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::String> cfKeyValue;
	
	//    .param p0, "forLocale"    # Landroid/icu/util/ULocale;
	//    .param p1, "choice"    # I
	0x0;
	//    .local v2, "patternKey":Ljava/lang/String;
	// switch
	{
	auto item = ( choice );
	if (item == 0) goto label_pswitch_e;
	if (item == 1) goto label_pswitch_60;
	if (item == 2) goto label_pswitch_7e;
	if (item == 3) goto label_pswitch_82;
	if (item == 4) goto label_pswitch_e;
	if (item == 5) goto label_pswitch_7a;
	if (item == 6) goto label_pswitch_7a;
	if (item == 7) goto label_pswitch_86;
	if (item == 8) goto label_pswitch_7a;
	if (item == 9) goto label_pswitch_7a;
	}
	if ( android::icu::text::NumberFormat::_assertionsDisabled )     
		goto label_cond_8a;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 924    .line 1373
label_pswitch_e:
	//    .local v2, "patternKey":Ljava/lang/String;
label_goto_11:
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), forLocale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v3, "rb":Landroid/icu/impl/ICUResourceBundle;
	//    .local v1, "ns":Landroid/icu/text/NumberingSystem;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	result = rb->findStringWithFallback(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("NumberElements/")))->append(android::icu::text::NumberingSystem::getInstance(forLocale)->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/patterns/")))->append(patternKey)->toString());
	//    .local v4, "result":Ljava/lang/String;
	if ( result )     
		goto label_cond_5f;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
label_cond_5f:
	return result;
	// 1016    .line 1376
	// 1017    .end local v1    # "ns":Landroid/icu/text/NumberingSystem;
	// 1018    .end local v3    # "rb":Landroid/icu/impl/ICUResourceBundle;
	// 1019    .end local v4    # "result":Ljava/lang/String;
	// 1020    .local v2, "patternKey":Ljava/lang/String;
label_pswitch_60:
	cfKeyValue = forLocale->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("cf")));
	//    .local v0, "cfKeyValue":Ljava/lang/String;
	if ( !(cfKeyValue) )  
		goto label_cond_76;
	if ( !(cfKeyValue->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("account")))) )  
		goto label_cond_76;
	//    .local v2, "patternKey":Ljava/lang/String;
	goto label_goto_11;
	// 1046    .local v2, "patternKey":Ljava/lang/String;
label_cond_76:
	//    .local v2, "patternKey":Ljava/lang/String;
	goto label_goto_11;
	// 1053    .line 1384
	// 1054    .end local v0    # "cfKeyValue":Ljava/lang/String;
	// 1055    .local v2, "patternKey":Ljava/lang/String;
label_pswitch_7a:
	//    .local v2, "patternKey":Ljava/lang/String;
	goto label_goto_11;
	// 1062    .line 1387
	// 1063    .local v2, "patternKey":Ljava/lang/String;
label_pswitch_7e:
	//    .local v2, "patternKey":Ljava/lang/String;
	goto label_goto_11;
	// 1070    .line 1390
	// 1071    .local v2, "patternKey":Ljava/lang/String;
label_pswitch_82:
	//    .local v2, "patternKey":Ljava/lang/String;
	goto label_goto_11;
	// 1078    .line 1393
	// 1079    .local v2, "patternKey":Ljava/lang/String;
label_pswitch_86:
	//    .local v2, "patternKey":Ljava/lang/String;
	goto label_goto_11;
	// 1086    .line 1397
	// 1087    .local v2, "patternKey":Ljava/lang/String;
label_cond_8a:
	patternKey = std::make_shared<java::lang::String>(std::make_shared<char[]>("decimalFormat"));
	//    .local v2, "patternKey":Ljava/lang/String;
	goto label_goto_11;
	// 1094    .line 1370
	// 1095    :pswitch_data_8e
	// 1096    .packed-switch 0x0
	// 1097        :pswitch_e
	// 1098        :pswitch_60
	// 1099        :pswitch_7e
	// 1100        :pswitch_82
	// 1101        :pswitch_e
	// 1102        :pswitch_7a
	// 1103        :pswitch_7a
	// 1104        :pswitch_86
	// 1105        :pswitch_7a
	// 1106        :pswitch_7a
	// 1107    .end packed-switch

}
// .method protected static getPattern(Ljava/util/Locale;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NumberFormat::getPattern(std::shared_ptr<java::util::Locale> forLocale,int choice)
{
	
	//    .param p0, "forLocale"    # Ljava/util/Locale;
	//    .param p1, "choice"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1115    .end annotation
	return android::icu::text::NumberFormat::getPattern(android::icu::util::ULocale::forLocale(forLocale), choice);

}
// .method public static final getPercentInstance()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getPercentInstance()
{
	
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), 0x2);

}
// .method public static getPercentInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getPercentInstance(std::shared_ptr<android::icu::util::ULocale> inLocale)
{
	
	//    .param p0, "inLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::NumberFormat::getInstance(inLocale, 0x2);

}
// .method public static getPercentInstance(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getPercentInstance(std::shared_ptr<java::util::Locale> inLocale)
{
	
	//    .param p0, "inLocale"    # Ljava/util/Locale;
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::forLocale(inLocale), 0x2);

}
// .method public static final getScientificInstance()Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getScientificInstance()
{
	
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT), 0x3);

}
// .method public static getScientificInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getScientificInstance(std::shared_ptr<android::icu::util::ULocale> inLocale)
{
	
	//    .param p0, "inLocale"    # Landroid/icu/util/ULocale;
	return android::icu::text::NumberFormat::getInstance(inLocale, 0x3);

}
// .method public static getScientificInstance(Ljava/util/Locale;)Landroid/icu/text/NumberFormat;
std::shared_ptr<android::icu::text::NumberFormat> android::icu::text::NumberFormat::getScientificInstance(std::shared_ptr<java::util::Locale> inLocale)
{
	
	//    .param p0, "inLocale"    # Ljava/util/Locale;
	return android::icu::text::NumberFormat::getInstance(android::icu::util::ULocale::forLocale(inLocale), 0x3);

}
// .method private static getShim()Landroid/icu/text/NumberFormat$NumberFormatShim;
std::shared_ptr<android::icu::text::NumberFormat_S_NumberFormatShim> android::icu::text::NumberFormat::getShim()
{
	
	std::shared_ptr<java::lang::RuntimeException> cVar1;
	std::shared_ptr<android::icu::text::NumberFormat_S_NumberFormatShim> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	if ( android::icu::text::NumberFormat::shim )     
		goto label_cond_13;
	try {
	//label_try_start_4:
	//    .local v0, "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar0 = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("android.icu.text.NumberFormatServiceShim")))->newInstance();
	cVar0->checkCast("android::icu::text::NumberFormat_S_NumberFormatShim");
	android::icu::text::NumberFormat::shim = cVar0;
	//label_try_end_13:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_21;
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_16;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_4 .. :try_end_13} :catch_21
	//    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_13} :catch_16
label_cond_13:
	return android::icu::text::NumberFormat::shim;
	// 1274    .line 895
label_catch_16:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/Exception;
	tryCatchExcetionList.pop_back();
	tryCatchExcetionList.pop_back();
	cVar1 = std::make_shared<java::lang::RuntimeException>(getCatchExcetionFromList->getMessage());
	// throw
	throw cVar1;
	// 1290    .line 892
	// 1291    .end local v1    # "e":Ljava/lang/Exception;
label_catch_21:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/util/MissingResourceException;
	// throw
	throw;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::text::NumberFormat::readObject(std::shared_ptr<java::io::ObjectInputStream> stream)
{
	
	int cVar0;
	std::shared_ptr<java::io::InvalidObjectException> cVar1;
	
	//    .param p1, "stream"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1304        value = {
	// 1305            Ljava/io/IOException;,
	// 1306            Ljava/lang/ClassNotFoundException;
	// 1307        }
	// 1308    .end annotation
	cVar0 = 0x2;
	stream->defaultReadObject();
	if ( this->serialVersionOnStream >= 0x1 )
		goto label_cond_19;
	this->maximumIntegerDigits = this->maxIntegerDigits;
	this->minimumIntegerDigits = this->minIntegerDigits;
	this->maximumFractionDigits = this->maxFractionDigits;
	this->minimumFractionDigits = this->minFractionDigits;
label_cond_19:
	if ( this->serialVersionOnStream >= cVar0 )
		goto label_cond_21;
	this->capitalizationSetting = android::icu::text::DisplayContext::CAPITALIZATION_NONE;
label_cond_21:
	if ( this->minimumIntegerDigits >  this->maximumIntegerDigits )
		goto label_cond_2d;
	if ( this->minimumFractionDigits <= this->maximumFractionDigits )
		goto label_cond_36;
label_cond_2d:
	cVar1 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Digit count range invalid")));
	// throw
	throw cVar1;
	// 1379    .line 1448
label_cond_36:
	if ( this->minimumIntegerDigits < 0 ) 
		goto label_cond_2d;
	if ( this->minimumFractionDigits < 0 ) 
		goto label_cond_2d;
	this->serialVersionOnStream = cVar0;
	return;

}
// .method public static registerFactory(Landroid/icu/text/NumberFormat$NumberFormatFactory;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::NumberFormat::registerFactory(std::shared_ptr<android::icu::text::NumberFormat_S_NumberFormatFactory> factory)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "factory"    # Landroid/icu/text/NumberFormat$NumberFormatFactory;
	if ( factory )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("factory must not be null")));
	// throw
	throw cVar0;
	// 1413    .line 944
label_cond_b:
	return android::icu::text::NumberFormat::getShim({const[class].FS-Param})->registerFactory(factory);

}
// .method public static unregister(Ljava/lang/Object;)Z
bool android::icu::text::NumberFormat::unregister(std::shared_ptr<java::lang::Object> registryKey)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p0, "registryKey"    # Ljava/lang/Object;
	if ( registryKey )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("registryKey must not be null")));
	// throw
	throw cVar0;
	// 1443    .line 959
label_cond_b:
	if ( android::icu::text::NumberFormat::shim )     
		goto label_cond_11;
	return 0x0;
	// 1454    .line 963
label_cond_11:
	return android::icu::text::NumberFormat::shim->unregister(registryKey);

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void android::icu::text::NumberFormat::writeObject(std::shared_ptr<java::io::ObjectOutputStream> stream)
{
	
	unsigned char cVar0;
	unsigned char cVar1;
	unsigned char cVar2;
	unsigned char cVar3;
	
	//    .param p1, "stream"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1469        value = {
	// 1470            Ljava/io/IOException;
	// 1471        }
	// 1472    .end annotation
	cVar0 = 0x7f;
	if ( this->maximumIntegerDigits <= cVar0 )
		goto label_cond_21;
	cVar1 = cVar0;
label_goto_7:
	this->maxIntegerDigits = cVar1;
	if ( this->minimumIntegerDigits <= cVar0 )
		goto label_cond_25;
	cVar2 = cVar0;
label_goto_e:
	this->minIntegerDigits = cVar2;
	if ( this->maximumFractionDigits <= cVar0 )
		goto label_cond_29;
	cVar3 = cVar0;
label_goto_15:
	this->maxFractionDigits = cVar3;
	if ( this->minimumFractionDigits <= cVar0 )
		goto label_cond_2d;
label_goto_1b:
	this->minFractionDigits = cVar0;
	stream->defaultWriteObject();
	return;
	// 1521    .line 1465
label_cond_21:
	cVar1 = (unsigned char)(this->maximumIntegerDigits);
	goto label_goto_7;
	// 1529    .line 1467
label_cond_25:
	cVar2 = (unsigned char)(this->minimumIntegerDigits);
	goto label_goto_e;
	// 1537    .line 1469
label_cond_29:
	cVar3 = (unsigned char)(this->maximumFractionDigits);
	goto label_goto_15;
	// 1545    .line 1471
label_cond_2d:
	cVar0 = (unsigned char)(this->minimumFractionDigits);
	goto label_goto_1b;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::NumberFormat::clone()
{
	
	std::shared_ptr<android::icu::text::NumberFormat> other;
	
	other = this->clone();
	other->checkCast("android::icu::text::NumberFormat");
	//    .local v0, "other":Landroid/icu/text/NumberFormat;
	return other;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::NumberFormat::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::text::NumberFormat> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( obj )     
		goto label_cond_5;
	return cVar1;
	// 1586    .line 988
label_cond_5:
	if ( this != obj )
		goto label_cond_8;
	return cVar0;
	// 1593    .line 990
label_cond_8:
	if ( this->getClass() == obj->getClass() )
		goto label_cond_13;
	return cVar1;
label_cond_13:
	other = obj;
	other->checkCast("android::icu::text::NumberFormat");
	//    .local v0, "other":Landroid/icu/text/NumberFormat;
	if ( this->maximumIntegerDigits != other->maximumIntegerDigits )
		goto label_cond_49;
	if ( this->minimumIntegerDigits != other->minimumIntegerDigits )
		goto label_cond_49;
	if ( this->maximumFractionDigits != other->maximumFractionDigits )
		goto label_cond_49;
	if ( this->minimumFractionDigits != other->minimumFractionDigits )
		goto label_cond_49;
	if ( this->groupingUsed != other->groupingUsed )
		goto label_cond_49;
	if ( this->parseIntegerOnly != other->parseIntegerOnly )
		goto label_cond_49;
	if ( this->parseStrict != other->parseStrict )
		goto label_cond_49;
	if ( this->capitalizationSetting != other->capitalizationSetting )
		goto label_cond_47;
label_goto_46:
	return cVar0;
label_cond_47:
	cVar0 = cVar1;
	goto label_goto_46;
label_cond_49:
	cVar0 = cVar1;
	goto label_goto_46;

}
// .method public final format(D)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NumberFormat::format(double number)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	std::shared_ptr<java::text::FieldPosition> cVar1;
	
	//    .param p1, "number"    # D
	cVar0 = std::make_shared<java::lang::StringBuffer>();
	cVar1 = std::make_shared<java::text::FieldPosition>(0x0);
	return this->format(number, cVar0, cVar1)->toString();

}
// .method public final format(J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NumberFormat::format(long long number)
{
	
	std::shared_ptr<java::lang::StringBuffer> buf;
	std::shared_ptr<java::text::FieldPosition> pos;
	
	//    .param p1, "number"    # J
	buf = std::make_shared<java::lang::StringBuffer>(0x13);
	//    .local v0, "buf":Ljava/lang/StringBuffer;
	pos = std::make_shared<java::text::FieldPosition>(0x0);
	//    .local v1, "pos":Ljava/text/FieldPosition;
	this->format(number, buf, pos);
	return buf->toString();

}
// .method public final format(Landroid/icu/math/BigDecimal;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NumberFormat::format(std::shared_ptr<android::icu::math::BigDecimal> number)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	std::shared_ptr<java::text::FieldPosition> cVar1;
	
	//    .param p1, "number"    # Landroid/icu/math/BigDecimal;
	cVar0 = std::make_shared<java::lang::StringBuffer>();
	cVar1 = std::make_shared<java::text::FieldPosition>(0x0);
	return this->format(number, cVar0, cVar1)->toString();

}
// .method public final format(Landroid/icu/util/CurrencyAmount;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NumberFormat::format(std::shared_ptr<android::icu::util::CurrencyAmount> currAmt)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	std::shared_ptr<java::text::FieldPosition> cVar1;
	
	//    .param p1, "currAmt"    # Landroid/icu/util/CurrencyAmount;
	cVar0 = std::make_shared<java::lang::StringBuffer>();
	cVar1 = std::make_shared<java::text::FieldPosition>(0x0);
	return this->format(currAmt, cVar0, cVar1)->toString();

}
// .method public final format(Ljava/math/BigDecimal;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NumberFormat::format(std::shared_ptr<java::math::BigDecimal> number)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	std::shared_ptr<java::text::FieldPosition> cVar1;
	
	//    .param p1, "number"    # Ljava/math/BigDecimal;
	cVar0 = std::make_shared<java::lang::StringBuffer>();
	cVar1 = std::make_shared<java::text::FieldPosition>(0x0);
	return this->format(number, cVar0, cVar1)->toString();

}
// .method public final format(Ljava/math/BigInteger;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NumberFormat::format(std::shared_ptr<java::math::BigInteger> number)
{
	
	std::shared_ptr<java::lang::StringBuffer> cVar0;
	std::shared_ptr<java::text::FieldPosition> cVar1;
	
	//    .param p1, "number"    # Ljava/math/BigInteger;
	cVar0 = std::make_shared<java::lang::StringBuffer>();
	cVar1 = std::make_shared<java::text::FieldPosition>(0x0);
	return this->format(number, cVar0, cVar1)->toString();

}
// .method public format(Landroid/icu/util/CurrencyAmount;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::NumberFormat::format(std::shared_ptr<android::icu::util::CurrencyAmount> currAmt,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::Object> save;
	std::shared_ptr<android::icu::util::Currency> curr;
	int same;
	
	//    .param p1, "currAmt"    # Landroid/icu/util/CurrencyAmount;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	this->monitor_enter();
	try {
	//label_try_start_1:
	save = this->getCurrency();
	//    .local v2, "save":Landroid/icu/util/Currency;
	curr = currAmt->getCurrency();
	//    .local v0, "curr":Landroid/icu/util/Currency;
	same = curr->equals(save);
	//    .local v1, "same":Z
	if ( same )     
		goto label_cond_12;
	this->setCurrency(curr);
label_cond_12:
	this->format(currAmt->getNumber(), toAppendTo, pos);
	if ( same )     
		goto label_cond_1e;
	this->setCurrency(save);
	//label_try_end_1e:
	}
	catch (...){
		goto label_catchall_20;
	}
	//    .catchall {:try_start_1 .. :try_end_1e} :catchall_20
label_cond_1e:
	this->monitor_exit();
	return toAppendTo;
	// 1928    .line 378
	// 1929    .end local v0    # "curr":Landroid/icu/util/Currency;
	// 1930    .end local v1    # "same":Z
	// 1931    .end local v2    # "save":Landroid/icu/util/Currency;
label_catchall_20:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public format(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;
std::shared_ptr<java::lang::StringBuffer> android::icu::text::NumberFormat::format(std::shared_ptr<java::lang::Object> number,std::shared_ptr<java::lang::StringBuffer> toAppendTo,std::shared_ptr<java::text::FieldPosition> pos)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "number"    # Ljava/lang/Object;
	//    .param p2, "toAppendTo"    # Ljava/lang/StringBuffer;
	//    .param p3, "pos"    # Ljava/text/FieldPosition;
	if ( !(number->instanceOf("java::lang::Long")) )  
		goto label_cond_f;
	number->checkCast("java::lang::Long");
	//    .end local p1    # "number":Ljava/lang/Object;
	return this->format(number->longValue(), toAppendTo, pos);
	// 1966    .line 254
	// 1967    .restart local p1    # "number":Ljava/lang/Object;
label_cond_f:
	if ( !(number->instanceOf("java::math::BigInteger")) )  
		goto label_cond_1a;
	number->checkCast("java::math::BigInteger");
	//    .end local p1    # "number":Ljava/lang/Object;
	return this->format(number, toAppendTo, pos);
	// 1983    .line 256
	// 1984    .restart local p1    # "number":Ljava/lang/Object;
label_cond_1a:
	if ( !(number->instanceOf("java::math::BigDecimal")) )  
		goto label_cond_25;
	number->checkCast("java::math::BigDecimal");
	//    .end local p1    # "number":Ljava/lang/Object;
	return this->format(number, toAppendTo, pos);
	// 2000    .line 258
	// 2001    .restart local p1    # "number":Ljava/lang/Object;
label_cond_25:
	if ( !(number->instanceOf("android::icu::math::BigDecimal")) )  
		goto label_cond_30;
	number->checkCast("android::icu::math::BigDecimal");
	//    .end local p1    # "number":Ljava/lang/Object;
	return this->format(number, toAppendTo, pos);
	// 2017    .line 260
	// 2018    .restart local p1    # "number":Ljava/lang/Object;
label_cond_30:
	if ( !(number->instanceOf("android::icu::util::CurrencyAmount")) )  
		goto label_cond_3b;
	number->checkCast("android::icu::util::CurrencyAmount");
	//    .end local p1    # "number":Ljava/lang/Object;
	return this->format(number, toAppendTo, pos);
	// 2034    .line 262
	// 2035    .restart local p1    # "number":Ljava/lang/Object;
label_cond_3b:
	if ( !(number->instanceOf("java::lang::Number")) )  
		goto label_cond_4a;
	number->checkCast("java::lang::Number");
	//    .end local p1    # "number":Ljava/lang/Object;
	return this->format(number->doubleValue(), toAppendTo, pos);
	// 2055    .line 265
	// 2056    .restart local p1    # "number":Ljava/lang/Object;
label_cond_4a:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Cannot format given Object as a Number")));
	// throw
	throw cVar0;

}
// .method public getContext(Landroid/icu/text/DisplayContext$Type;)Landroid/icu/text/DisplayContext;
std::shared_ptr<android::icu::text::DisplayContext> android::icu::text::NumberFormat::getContext(std::shared_ptr<android::icu::text::DisplayContext_S_Type> type)
{
	
	std::shared_ptr<android::icu::text::DisplayContext> cVar0;
	
	//    .param p1, "type"    # Landroid/icu/text/DisplayContext$Type;
	if ( type != android::icu::text::DisplayContext_S_Type::CAPITALIZATION )
		goto label_cond_b;
	if ( !(this->capitalizationSetting) )  
		goto label_cond_b;
	cVar0 = this->capitalizationSetting;
label_goto_a:
	return cVar0;
	// 2094    .line 518
label_cond_b:
	cVar0 = android::icu::text::DisplayContext::CAPITALIZATION_NONE;
	goto label_goto_a;

}
// .method public getCurrency()Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::text::NumberFormat::getCurrency()
{
	
	return this->currency;

}
// .method protected getEffectiveCurrency()Landroid/icu/util/Currency;
std::shared_ptr<android::icu::util::Currency> android::icu::text::NumberFormat::getEffectiveCurrency()
{
	
	std::shared_ptr<android::icu::util::Currency> c;
	std::shared_ptr<android::icu::util::ULocale> uloc;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 2114    .end annotation
	c = this->getCurrency();
	//    .local v0, "c":Landroid/icu/util/Currency;
	if ( c )     
		goto label_cond_18;
	uloc = this->getLocale(android::icu::util::ULocale::VALID_LOCALE);
	//    .local v1, "uloc":Landroid/icu/util/ULocale;
	if ( uloc )     
		goto label_cond_14;
label_cond_14:
	//    .end local v1    # "uloc":Landroid/icu/util/ULocale;
label_cond_18:
	return c;

}
// .method public getMaximumFractionDigits()I
int android::icu::text::NumberFormat::getMaximumFractionDigits()
{
	
	return this->maximumFractionDigits;

}
// .method public getMaximumIntegerDigits()I
int android::icu::text::NumberFormat::getMaximumIntegerDigits()
{
	
	return this->maximumIntegerDigits;

}
// .method public getMinimumFractionDigits()I
int android::icu::text::NumberFormat::getMinimumFractionDigits()
{
	
	return this->minimumFractionDigits;

}
// .method public getMinimumIntegerDigits()I
int android::icu::text::NumberFormat::getMinimumIntegerDigits()
{
	
	return this->minimumIntegerDigits;

}
// .method public getRoundingMode()I
int android::icu::text::NumberFormat::getRoundingMode()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getRoundingMode must be implemented by the subclass implementation.")));
	// throw
	throw cVar0;

}
// .method public hashCode()I
int android::icu::text::NumberFormat::hashCode()
{
	
	return (( this->maximumIntegerDigits * 0x25) +  this->maxFractionDigits);

}
// .method public isGroupingUsed()Z
bool android::icu::text::NumberFormat::isGroupingUsed()
{
	
	return this->groupingUsed;

}
// .method public isParseIntegerOnly()Z
bool android::icu::text::NumberFormat::isParseIntegerOnly()
{
	
	return this->parseIntegerOnly;

}
// .method public isParseStrict()Z
bool android::icu::text::NumberFormat::isParseStrict()
{
	
	return this->parseStrict;

}
// .method public parse(Ljava/lang/String;)Ljava/lang/Number;
std::shared_ptr<java::lang::Number> android::icu::text::NumberFormat::parse(std::shared_ptr<java::lang::String> text)
{
	
	std::shared_ptr<java::text::ParsePosition> parsePosition;
	std::shared_ptr<java::text::ParseException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "text"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2262        value = {
	// 2263            Ljava/text/ParseException;
	// 2264        }
	// 2265    .end annotation
	parsePosition = std::make_shared<java::text::ParsePosition>(0x0);
	//    .local v0, "parsePosition":Ljava/text/ParsePosition;
	//    .local v1, "result":Ljava/lang/Number;
	if ( parsePosition->getIndex() )     
		goto label_cond_34;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::text::ParseException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unparseable number: \")))->append(text)->append(0x22)->toString(), parsePosition->getErrorIndex());
	// throw
	throw cVar0;
	// 2326    .line 419
label_cond_34:
	return this->parse(text, parsePosition);

}
// .method public parseCurrency(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;
std::shared_ptr<android::icu::util::CurrencyAmount> android::icu::text::NumberFormat::parseCurrency(std::shared_ptr<java::lang::CharSequence> text,std::shared_ptr<java::text::ParsePosition> pos)
{
	
	std::shared_ptr<android::icu::util::CurrencyAmount> cVar0;
	std::shared_ptr<java::lang::Number> n;
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "pos"    # Ljava/text/ParsePosition;
	cVar0 = 0x0;
	n = this->parse(text->toString(), pos);
	//    .local v0, "n":Ljava/lang/Number;
	if ( n )     
		goto label_cond_c;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = std::make_shared<android::icu::util::CurrencyAmount>(n, this->getEffectiveCurrency());
	goto label_goto_b;

}
// .method public final parseObject(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::NumberFormat::parseObject(std::shared_ptr<java::lang::String> source,std::shared_ptr<java::text::ParsePosition> parsePosition)
{
	
	//    .param p1, "source"    # Ljava/lang/String;
	//    .param p2, "parsePosition"    # Ljava/text/ParsePosition;
	return this->parse(source, parsePosition);

}
// .method public setContext(Landroid/icu/text/DisplayContext;)V
void android::icu::text::NumberFormat::setContext(std::shared_ptr<android::icu::text::DisplayContext> context)
{
	
	//    .param p1, "context"    # Landroid/icu/text/DisplayContext;
	if ( context->type() != android::icu::text::DisplayContext_S_Type::CAPITALIZATION )
		goto label_cond_a;
	this->capitalizationSetting = context;
label_cond_a:
	return;

}
// .method public setCurrency(Landroid/icu/util/Currency;)V
void android::icu::text::NumberFormat::setCurrency(std::shared_ptr<android::icu::util::Currency> theCurrency)
{
	
	//    .param p1, "theCurrency"    # Landroid/icu/util/Currency;
	this->currency = theCurrency;
	return;

}
// .method public setGroupingUsed(Z)V
void android::icu::text::NumberFormat::setGroupingUsed(bool newValue)
{
	
	//    .param p1, "newValue"    # Z
	this->groupingUsed = newValue;
	return;

}
// .method public setMaximumFractionDigits(I)V
void android::icu::text::NumberFormat::setMaximumFractionDigits(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->maximumFractionDigits = java::lang::Math::max(0x0, newValue);
	if ( this->maximumFractionDigits >= this->minimumFractionDigits )
		goto label_cond_11;
	this->minimumFractionDigits = this->maximumFractionDigits;
label_cond_11:
	return;

}
// .method public setMaximumIntegerDigits(I)V
void android::icu::text::NumberFormat::setMaximumIntegerDigits(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->maximumIntegerDigits = java::lang::Math::max(0x0, newValue);
	if ( this->minimumIntegerDigits <= this->maximumIntegerDigits )
		goto label_cond_11;
	this->minimumIntegerDigits = this->maximumIntegerDigits;
label_cond_11:
	return;

}
// .method public setMinimumFractionDigits(I)V
void android::icu::text::NumberFormat::setMinimumFractionDigits(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->minimumFractionDigits = java::lang::Math::max(0x0, newValue);
	if ( this->maximumFractionDigits >= this->minimumFractionDigits )
		goto label_cond_11;
	this->maximumFractionDigits = this->minimumFractionDigits;
label_cond_11:
	return;

}
// .method public setMinimumIntegerDigits(I)V
void android::icu::text::NumberFormat::setMinimumIntegerDigits(int newValue)
{
	
	//    .param p1, "newValue"    # I
	this->minimumIntegerDigits = java::lang::Math::max(0x0, newValue);
	if ( this->minimumIntegerDigits <= this->maximumIntegerDigits )
		goto label_cond_11;
	this->maximumIntegerDigits = this->minimumIntegerDigits;
label_cond_11:
	return;

}
// .method public setParseIntegerOnly(Z)V
void android::icu::text::NumberFormat::setParseIntegerOnly(bool value)
{
	
	//    .param p1, "value"    # Z
	this->parseIntegerOnly = value;
	return;

}
// .method public setParseStrict(Z)V
void android::icu::text::NumberFormat::setParseStrict(bool value)
{
	
	//    .param p1, "value"    # Z
	this->parseStrict = value;
	return;

}
// .method public setRoundingMode(I)V
void android::icu::text::NumberFormat::setRoundingMode(int roundingMode)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "roundingMode"    # I
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("setRoundingMode must be implemented by the subclass implementation.")));
	// throw
	throw cVar0;

}


