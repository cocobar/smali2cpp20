// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\CurrencyPluralInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencyDisplayInfoProvider.h"
#include "android.icu.impl.CurrencyData.h"
#include "android.icu.text.CurrencyPluralInfo.h"
#include "android.icu.text.NumberFormat.h"
#include "android.icu.text.PluralRules_S_FixedDecimal.h"
#include "android.icu.text.PluralRules.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.AssertionError.h"
#include "java.lang.CharSequence.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

static android::icu::text::CurrencyPluralInfo::_assertionsDisabled;
static android::icu::text::CurrencyPluralInfo::defaultCurrencyPluralPattern;
static android::icu::text::CurrencyPluralInfo::defaultCurrencyPluralPatternChar;
static android::icu::text::CurrencyPluralInfo::serialVersionUID = 0x1L;
static android::icu::text::CurrencyPluralInfo::tripleCurrencySign;
static android::icu::text::CurrencyPluralInfo::tripleCurrencyStr;
// .method static constructor <clinit>()V
void android::icu::text::CurrencyPluralInfo::static_cinit()
{
	
	std::shared<std::vector<char[]>> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared<std::vector<char[]>> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	
	android::icu::text::CurrencyPluralInfo::_assertionsDisabled = ( android::icu::text::CurrencyPluralInfo()->desiredAssertionStatus() ^ 0x1);
	cVar0 = std::make_shared<std::vector<char[]>>(0x3);
	?;
	android::icu::text::CurrencyPluralInfo::tripleCurrencySign = cVar0;
	cVar1 = std::make_shared<java::lang::String>(android::icu::text::CurrencyPluralInfo::tripleCurrencySign);
	android::icu::text::CurrencyPluralInfo::tripleCurrencyStr = cVar1;
	cVar2 = std::make_shared<std::vector<char[]>>(0x8);
	?;
	android::icu::text::CurrencyPluralInfo::defaultCurrencyPluralPatternChar = cVar2;
	cVar3 = std::make_shared<java::lang::String>(android::icu::text::CurrencyPluralInfo::defaultCurrencyPluralPatternChar);
	android::icu::text::CurrencyPluralInfo::defaultCurrencyPluralPattern = cVar3;
	return;
	// 096    .line 294
	// 097    :array_2e
	// 098    .array-data 2
	// 099        0xa4s
	// 100        0xa4s
	// 101        0xa4s
	// 102    .end array-data
	// 104    .line 299
	// 105    nop
	// 107    :array_36
	// 108    .array-data 2
	// 109        0x0s
	// 110        0x2es
	// 111        0x23s
	// 112        0x23s
	// 113        0x20s
	// 114        0xa4s
	// 115        0xa4s
	// 116        0xa4s
	// 117    .end array-data

}
// .method public constructor <init>()V
android::icu::text::CurrencyPluralInfo::CurrencyPluralInfo()
{
	
	std::shared_ptr<java::util::Map> cVar0;
	
	cVar0 = 0x0;
	// 127    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->pluralCountToCurrencyUnitPattern = cVar0;
	this->pluralRules = cVar0;
	this->ulocale = cVar0;
	this->initialize(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::text::CurrencyPluralInfo::CurrencyPluralInfo(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::util::Map> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	// 159    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->pluralCountToCurrencyUnitPattern = cVar0;
	this->pluralRules = cVar0;
	this->ulocale = cVar0;
	this->initialize(locale);
	return;

}
// .method public constructor <init>(Ljava/util/Locale;)V
android::icu::text::CurrencyPluralInfo::CurrencyPluralInfo(std::shared_ptr<java::util::Locale> locale)
{
	
	std::shared_ptr<java::util::Map> cVar0;
	
	//    .param p1, "locale"    # Ljava/util/Locale;
	cVar0 = 0x0;
	// 185    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->pluralCountToCurrencyUnitPattern = cVar0;
	this->pluralRules = cVar0;
	this->ulocale = cVar0;
	this->initialize(android::icu::util::ULocale::forLocale(locale));
	return;

}
// .method public static getInstance()Landroid/icu/text/CurrencyPluralInfo;
std::shared_ptr<android::icu::text::CurrencyPluralInfo> android::icu::text::CurrencyPluralInfo::getInstance()
{
	
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> cVar0;
	
	cVar0 = std::make_shared<android::icu::text::CurrencyPluralInfo>();
	return cVar0;

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/CurrencyPluralInfo;
std::shared_ptr<android::icu::text::CurrencyPluralInfo> android::icu::text::CurrencyPluralInfo::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<android::icu::text::CurrencyPluralInfo>(locale);
	return cVar0;

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/text/CurrencyPluralInfo;
std::shared_ptr<android::icu::text::CurrencyPluralInfo> android::icu::text::CurrencyPluralInfo::getInstance(std::shared_ptr<java::util::Locale> locale)
{
	
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> cVar0;
	
	//    .param p0, "locale"    # Ljava/util/Locale;
	cVar0 = std::make_shared<android::icu::text::CurrencyPluralInfo>(locale);
	return cVar0;

}
// .method private initialize(Landroid/icu/util/ULocale;)V
void android::icu::text::CurrencyPluralInfo::initialize(std::shared_ptr<android::icu::util::ULocale> uloc)
{
	
	//    .param p1, "uloc"    # Landroid/icu/util/ULocale;
	this->ulocale = uloc;
	this->pluralRules = android::icu::text::PluralRules::forLocale(uloc);
	this->setupCurrencyPluralPattern(uloc);
	return;

}
// .method private setupCurrencyPluralPattern(Landroid/icu/util/ULocale;)V
void android::icu::text::CurrencyPluralInfo::setupCurrencyPluralPattern(std::shared_ptr<android::icu::util::ULocale> uloc)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::lang::String> numberStylePattern;
	int separatorIndex;
	std::shared_ptr<java::util::Iterator> e_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> e;
	std::shared_ptr<java::lang::String> pluralCount;
	std::shared_ptr<java::lang::String> pattern;
	std::shared_ptr<java::lang::String> patternWithCurrencySign;
	std::shared_ptr<java::lang::StringBuilder> posNegPatterns;
	
	//    .param p1, "uloc"    # Landroid/icu/util/ULocale;
	cVar0 = std::make_shared<java::util::HashMap>();
	this->pluralCountToCurrencyUnitPattern = cVar0;
	numberStylePattern = android::icu::text::NumberFormat::getPattern(uloc, 0x0);
	//    .local v10, "numberStylePattern":Ljava/lang/String;
	separatorIndex = numberStylePattern->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
	//    .local v16, "separatorIndex":I
	0x0;
	//    .local v6, "negNumberPattern":Ljava/lang/String;
	if ( separatorIndex == -0x1 )
		goto label_cond_39;
	//    .local v6, "negNumberPattern":Ljava/lang/String;
	//    .end local v6    # "negNumberPattern":Ljava/lang/String;
label_cond_39:
	//    .local v5, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	e_S_iterator = android::icu::impl::CurrencyData::provider->getInstance(uloc, 0x1)->getUnitPatterns()->entrySet()->iterator();
	//    .local v4, "e$iterator":Ljava/util/Iterator;
label_goto_53:
	if ( !(e_S_iterator->hasNext()) )  
		goto label_cond_c0;
	e = e_S_iterator->next();
	e->checkCast("java::util::Map_S_Entry");
	//    .local v3, "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	pluralCount = e->getKey();
	pluralCount->checkCast("java::lang::String");
	//    .local v14, "pluralCount":Ljava/lang/String;
	pattern = e->getValue();
	pattern->checkCast("java::lang::String");
	//    .local v11, "pattern":Ljava/lang/String;
	//    .local v13, "patternWithNumber":Ljava/lang/String;
	patternWithCurrencySign = pattern->replace(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0}")), numberStylePattern->substring(0x0, separatorIndex))->replace(std::make_shared<java::lang::String>(std::make_shared<char[]>("{1}")), android::icu::text::CurrencyPluralInfo::tripleCurrencyStr);
	//    .local v12, "patternWithCurrencySign":Ljava/lang/String;
	if ( separatorIndex == -0x1 )
		goto label_cond_b4;
	pattern;
	//    .local v7, "negPattern":Ljava/lang/String;
	//    .local v9, "negWithNumber":Ljava/lang/String;
	//    .local v8, "negWithCurrSign":Ljava/lang/String;
	posNegPatterns = std::make_shared<java::lang::StringBuilder>(patternWithCurrencySign);
	//    .local v15, "posNegPatterns":Ljava/lang/StringBuilder;
	posNegPatterns->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(";")));
	posNegPatterns->append(pattern->replace(std::make_shared<java::lang::String>(std::make_shared<char[]>("{0}")), numberStylePattern->substring(( separatorIndex + 0x1)))->replace(std::make_shared<java::lang::String>(std::make_shared<char[]>("{1}")), android::icu::text::CurrencyPluralInfo::tripleCurrencyStr));
	//    .end local v7    # "negPattern":Ljava/lang/String;
	//    .end local v8    # "negWithCurrSign":Ljava/lang/String;
	//    .end local v9    # "negWithNumber":Ljava/lang/String;
	//    .end local v15    # "posNegPatterns":Ljava/lang/StringBuilder;
label_cond_b4:
	this->pluralCountToCurrencyUnitPattern->put(pluralCount, patternWithCurrencySign);
	goto label_goto_53;
	// 501    .line 288
	// 502    .end local v3    # "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	// 503    .end local v11    # "pattern":Ljava/lang/String;
	// 504    .end local v12    # "patternWithCurrencySign":Ljava/lang/String;
	// 505    .end local v13    # "patternWithNumber":Ljava/lang/String;
	// 506    .end local v14    # "pluralCount":Ljava/lang/String;
label_cond_c0:
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::text::CurrencyPluralInfo::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar2;
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> other;
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	std::shared_ptr<java::util::Iterator> pluralCount_S_iterator;
	std::shared_ptr<java::lang::String> pluralCount;
	std::shared_ptr<java::lang::String> currencyPattern;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_0:
	other = this->clone();
	other->checkCast("android::icu::text::CurrencyPluralInfo");
	//    .local v2, "other":Landroid/icu/text/CurrencyPluralInfo;
	cVar0 = this->ulocale->clone();
	cVar0->checkCast("android::icu::util::ULocale");
	other->ulocale = cVar0;
	cVar1 = std::make_shared<java::util::HashMap>();
	other->pluralCountToCurrencyUnitPattern = cVar1;
	pluralCount_S_iterator = this->pluralCountToCurrencyUnitPattern->keySet()->iterator();
	//    .local v4, "pluralCount$iterator":Ljava/util/Iterator;
label_goto_21:
	if ( !(pluralCount_S_iterator->hasNext()) )  
		goto label_cond_42;
	pluralCount = pluralCount_S_iterator->next();
	pluralCount->checkCast("java::lang::String");
	//    .local v3, "pluralCount":Ljava/lang/String;
	currencyPattern = this->pluralCountToCurrencyUnitPattern->get(pluralCount);
	currencyPattern->checkCast("java::lang::String");
	//    .local v0, "currencyPattern":Ljava/lang/String;
	other->pluralCountToCurrencyUnitPattern->put(pluralCount, currencyPattern);
	//label_try_end_3a:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3b;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_3a} :catch_3b
	goto label_goto_21;
	// 589    .line 190
	// 590    .end local v0    # "currencyPattern":Ljava/lang/String;
	// 591    .end local v2    # "other":Landroid/icu/text/CurrencyPluralInfo;
	// 592    .end local v3    # "pluralCount":Ljava/lang/String;
	// 593    .end local v4    # "pluralCount$iterator":Ljava/util/Iterator;
label_catch_3b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/CloneNotSupportedException;
	cVar2 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 605    .line 189
	// 606    .end local v1    # "e":Ljava/lang/CloneNotSupportedException;
	// 607    .restart local v2    # "other":Landroid/icu/text/CurrencyPluralInfo;
	// 608    .restart local v4    # "pluralCount$iterator":Ljava/util/Iterator;
label_cond_42:
	return other;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::text::CurrencyPluralInfo::equals(std::shared_ptr<java::lang::Object> a)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::text::CurrencyPluralInfo> other;
	
	//    .param p1, "a"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( !(a->instanceOf("android::icu::text::CurrencyPluralInfo")) )  
		goto label_cond_1b;
	other = a;
	other->checkCast("android::icu::text::CurrencyPluralInfo");
	//    .local v0, "other":Landroid/icu/text/CurrencyPluralInfo;
	if ( !(this->pluralRules->equals(other->pluralRules)) )  
		goto label_cond_1a;
	cVar1 = this->pluralCountToCurrencyUnitPattern->equals(other->pluralCountToCurrencyUnitPattern);
label_cond_1a:
	return cVar1;
	// 655    .line 204
	// 656    .end local v0    # "other":Landroid/icu/text/CurrencyPluralInfo;
label_cond_1b:
	return cVar1;

}
// .method public getCurrencyPluralPattern(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CurrencyPluralInfo::getCurrencyPluralPattern(std::shared_ptr<java::lang::String> pluralCount)
{
	
	std::shared_ptr<java::lang::String> currencyPluralPattern;
	
	//    .param p1, "pluralCount"    # Ljava/lang/String;
	currencyPluralPattern = this->pluralCountToCurrencyUnitPattern->get(pluralCount);
	currencyPluralPattern->checkCast("java::lang::String");
	//    .local v0, "currencyPluralPattern":Ljava/lang/String;
	if ( currencyPluralPattern )     
		goto label_cond_22;
	if ( pluralCount->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("other"))) )     
		goto label_cond_1e;
	currencyPluralPattern = this->pluralCountToCurrencyUnitPattern->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")));
	//    .end local v0    # "currencyPluralPattern":Ljava/lang/String;
	currencyPluralPattern->checkCast("java::lang::String");
	//    .restart local v0    # "currencyPluralPattern":Ljava/lang/String;
label_cond_1e:
	if ( currencyPluralPattern )     
		goto label_cond_22;
label_cond_22:
	return currencyPluralPattern;

}
// .method public getLocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::text::CurrencyPluralInfo::getLocale()
{
	
	return this->ulocale;

}
// .method public getPluralRules()Landroid/icu/text/PluralRules;
std::shared_ptr<android::icu::text::PluralRules> android::icu::text::CurrencyPluralInfo::getPluralRules()
{
	
	return this->pluralRules;

}
// .method public hashCode()I
int android::icu::text::CurrencyPluralInfo::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 736    .end annotation
	if ( android::icu::text::CurrencyPluralInfo::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 752    .line 217
label_cond_d:
	return 0x2a;

}
// .method pluralPatternIterator()Ljava/util/Iterator;
std::shared_ptr<java::util::Iterator<java::lang::String>> android::icu::text::CurrencyPluralInfo::pluralPatternIterator()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 762        value = {
	// 763            "()",
	// 764            "Ljava/util/Iterator",
	// 765            "<",
	// 766            "Ljava/lang/String;",
	// 767            ">;"
	// 768        }
	// 769    .end annotation
	return this->pluralCountToCurrencyUnitPattern->keySet()->iterator();

}
// .method select(D)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CurrencyPluralInfo::select(double number)
{
	
	//    .param p1, "number"    # D
	//    .annotation runtime Ljava/lang/Deprecated;
	// 790    .end annotation
	return this->pluralRules->select(number);

}
// .method select(Landroid/icu/text/PluralRules$FixedDecimal;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::CurrencyPluralInfo::select(std::shared_ptr<android::icu::text::PluralRules_S_FixedDecimal> numberInfo)
{
	
	//    .param p1, "numberInfo"    # Landroid/icu/text/PluralRules$FixedDecimal;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 807    .end annotation
	return this->pluralRules->select(numberInfo);

}
// .method public setCurrencyPluralPattern(Ljava/lang/String;Ljava/lang/String;)V
void android::icu::text::CurrencyPluralInfo::setCurrencyPluralPattern(std::shared_ptr<java::lang::String> pluralCount,std::shared_ptr<java::lang::String> pattern)
{
	
	//    .param p1, "pluralCount"    # Ljava/lang/String;
	//    .param p2, "pattern"    # Ljava/lang/String;
	this->pluralCountToCurrencyUnitPattern->put(pluralCount, pattern);
	return;

}
// .method public setLocale(Landroid/icu/util/ULocale;)V
void android::icu::text::CurrencyPluralInfo::setLocale(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	this->ulocale = loc;
	this->initialize(loc);
	return;

}
// .method public setPluralRules(Ljava/lang/String;)V
void android::icu::text::CurrencyPluralInfo::setPluralRules(std::shared_ptr<java::lang::String> ruleDescription)
{
	
	//    .param p1, "ruleDescription"    # Ljava/lang/String;
	this->pluralRules = android::icu::text::PluralRules::createRules(ruleDescription);
	return;

}


