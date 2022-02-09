// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleData.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.UnicodeSet.h"
#include "android.icu.util.LocaleData_S_MeasurementSystem.h"
#include "android.icu.util.LocaleData_S_PaperSize.h"
#include "android.icu.util.LocaleData.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.ArrayIndexOutOfBoundsException.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Exception.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.util.MissingResourceException.h"

static android::icu::util::LocaleData::ALT_QUOTATION_END = 0x3;
static android::icu::util::LocaleData::ALT_QUOTATION_START = 0x2;
static android::icu::util::LocaleData::DELIMITER_COUNT = 0x4;
static android::icu::util::LocaleData::DELIMITER_TYPES;
static android::icu::util::LocaleData::ES_AUXILIARY = 0x1;
static android::icu::util::LocaleData::ES_COUNT = 0x5;
static android::icu::util::LocaleData::ES_CURRENCY = 0x3;
static android::icu::util::LocaleData::ES_INDEX = 0x2;
static android::icu::util::LocaleData::ES_PUNCTUATION = 0x4;
static android::icu::util::LocaleData::ES_STANDARD = 0x0;
static android::icu::util::LocaleData::LOCALE_DISPLAY_PATTERN = std::make_shared<java::lang::String>("localeDisplayPattern");
static android::icu::util::LocaleData::MEASUREMENT_SYSTEM = std::make_shared<java::lang::String>("MeasurementSystem");
static android::icu::util::LocaleData::PAPER_SIZE = std::make_shared<java::lang::String>("PaperSize");
static android::icu::util::LocaleData::PATTERN = std::make_shared<java::lang::String>("pattern");
static android::icu::util::LocaleData::QUOTATION_END = 0x1;
static android::icu::util::LocaleData::QUOTATION_START = 0x0;
static android::icu::util::LocaleData::SEPARATOR = std::make_shared<java::lang::String>("separator");
static android::icu::util::LocaleData::gCLDRVersion;
// .method static constructor <clinit>()V
void android::icu::util::LocaleData::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x4);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("quotationStart"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("quotationEnd"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("alternateQuotationStart"));
	cVar0[0x3] = std::make_shared<java::lang::String>(std::make_shared<char[]>("alternateQuotationEnd"));
	android::icu::util::LocaleData::DELIMITER_TYPES = cVar0;
	android::icu::util::LocaleData::gCLDRVersion = 0x0;
	return;

}
// .method private constructor <init>()V
android::icu::util::LocaleData::LocaleData()
{
	
	// 125    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getCLDRVersion()Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::util::LocaleData::getCLDRVersion()
{
	
	if ( android::icu::util::LocaleData::gCLDRVersion )     
		goto label_cond_21;
	//    .local v1, "supplementalDataBundle":Landroid/icu/util/UResourceBundle;
	//    .local v0, "cldrVersionBundle":Landroid/icu/util/UResourceBundle;
	android::icu::util::LocaleData::gCLDRVersion = android::icu::util::VersionInfo::getInstance(android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("supplementalData")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("cldrVersion")))->getString());
label_cond_21:
	return android::icu::util::LocaleData::gCLDRVersion;

}
// .method public static getExemplarSet(Landroid/icu/util/ULocale;I)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::util::LocaleData::getExemplarSet(std::shared_ptr<android::icu::util::ULocale> locale,int options)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "options"    # I
	return android::icu::util::LocaleData::getInstance(locale)->getExemplarSet(options, 0x0);

}
// .method public static getExemplarSet(Landroid/icu/util/ULocale;II)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::util::LocaleData::getExemplarSet(std::shared_ptr<android::icu::util::ULocale> locale,int options,int extype)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "options"    # I
	//    .param p2, "extype"    # I
	return android::icu::util::LocaleData::getInstance(locale)->getExemplarSet(options, extype);

}
// .method public static final getInstance()Landroid/icu/util/LocaleData;
std::shared_ptr<android::icu::util::LocaleData> android::icu::util::LocaleData::getInstance()
{
	
	return android::icu::util::LocaleData::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));

}
// .method public static final getInstance(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData;
std::shared_ptr<android::icu::util::LocaleData> android::icu::util::LocaleData::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::util::LocaleData> ld;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar1;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	ld = std::make_shared<android::icu::util::LocaleData>();
	//    .local v0, "ld":Landroid/icu/util/LocaleData;
	cVar0 = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), locale);
	cVar0->checkCast("android::icu::impl::ICUResourceBundle");
	ld->bundle = cVar0;
	cVar1 = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/lang")), locale);
	cVar1->checkCast("android::icu::impl::ICUResourceBundle");
	ld->langBundle = cVar1;
	ld->noSubstitute = 0x0;
	return ld;

}
// .method public static final getMeasurementSystem(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData$MeasurementSystem;
std::shared_ptr<android::icu::util::LocaleData_S_MeasurementSystem> android::icu::util::LocaleData::getMeasurementSystem(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .local v0, "sysBundle":Landroid/icu/util/UResourceBundle;
	// switch
	{
	auto item = ( android::icu::util::LocaleData::measurementTypeBundleForLocale(locale, std::make_shared<java::lang::String>(std::make_shared<char[]>("MeasurementSystem")))->getInt() );
	if (item == 0) goto label_pswitch_10;
	if (item == 1) goto label_pswitch_13;
	if (item == 2) goto label_pswitch_16;
	}
	return 0x0;
	// 301    .line 344
label_pswitch_10:
	return android::icu::util::LocaleData_S_MeasurementSystem::SI;
	// 307    .line 345
label_pswitch_13:
	return android::icu::util::LocaleData_S_MeasurementSystem::US;
	// 313    .line 346
label_pswitch_16:
	return android::icu::util::LocaleData_S_MeasurementSystem::UK;
	// 319    .line 343
	// 320    nop
	// 322    :pswitch_data_1a
	// 323    .packed-switch 0x0
	// 324        :pswitch_10
	// 325        :pswitch_13
	// 326        :pswitch_16
	// 327    .end packed-switch

}
// .method public static final getPaperSize(Landroid/icu/util/ULocale;)Landroid/icu/util/LocaleData$PaperSize;
std::shared_ptr<android::icu::util::LocaleData_S_PaperSize> android::icu::util::LocaleData::getPaperSize(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	auto size;
	std::shared_ptr<android::icu::util::LocaleData_S_PaperSize> cVar0;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .local v0, "obj":Landroid/icu/util/UResourceBundle;
	size = android::icu::util::LocaleData::measurementTypeBundleForLocale(locale, std::make_shared<java::lang::String>(std::make_shared<char[]>("PaperSize")))->getIntVector();
	//    .local v1, "size":[I
	cVar0 = std::make_shared<android::icu::util::LocaleData_S_PaperSize>(size[0x0], size[0x1], 0x0);
	return cVar0;

}
// .method private static measurementTypeBundleForLocale(Landroid/icu/util/ULocale;Ljava/lang/String;)Landroid/icu/util/UResourceBundle;
std::shared_ptr<android::icu::util::UResourceBundle> android::icu::util::LocaleData::measurementTypeBundleForLocale(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> measurementType)
{
	
	std::shared_ptr<android::icu::util::UResourceBundle> measTypeBundle;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<android::icu::util::UResourceBundle> measurementData;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	//    .param p1, "measurementType"    # Ljava/lang/String;
	measTypeBundle = 0x0;
	//    .local v1, "measTypeBundle":Landroid/icu/util/UResourceBundle;
	//    .local v5, "region":Ljava/lang/String;
	try {
	//label_try_start_6:
	//    .local v4, "rb":Landroid/icu/util/UResourceBundle;
	//label_try_end_18:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_30;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_6 .. :try_end_18} :catch_30
	measurementData = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("supplementalData")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("measurementData")));
	//    .local v2, "measurementData":Landroid/icu/util/UResourceBundle;
	0x0;
	//    .local v0, "measDataBundle":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_1a:
	//    .local v0, "measDataBundle":Landroid/icu/util/UResourceBundle;
	//label_try_end_21:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_1a .. :try_end_21} :catch_23
	measTypeBundle = measurementData->get(android::icu::util::ULocale::getRegionForSupplementalData(locale, 0x1))->get(measurementType);
	//    .end local v0    # "measDataBundle":Landroid/icu/util/UResourceBundle;
	//    .end local v1    # "measTypeBundle":Landroid/icu/util/UResourceBundle;
	//    .end local v2    # "measurementData":Landroid/icu/util/UResourceBundle;
	//    .end local v4    # "rb":Landroid/icu/util/UResourceBundle;
label_goto_22:
	return measTypeBundle;
	// 437    .line 299
	// 438    .restart local v1    # "measTypeBundle":Landroid/icu/util/UResourceBundle;
	// 439    .restart local v2    # "measurementData":Landroid/icu/util/UResourceBundle;
	// 440    .restart local v4    # "rb":Landroid/icu/util/UResourceBundle;
label_catch_23:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v3, "mre":Ljava/util/MissingResourceException;
	try {
	//label_try_start_24:
	//    .restart local v0    # "measDataBundle":Landroid/icu/util/UResourceBundle;
	//label_try_end_2e:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_30;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_24 .. :try_end_2e} :catch_30
	measTypeBundle = measurementData->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("001")))->get(measurementType);
	//    .local v1, "measTypeBundle":Landroid/icu/util/UResourceBundle;
	goto label_goto_22;
	// 464    .line 304
	// 465    .end local v0    # "measDataBundle":Landroid/icu/util/UResourceBundle;
	// 466    .end local v2    # "measurementData":Landroid/icu/util/UResourceBundle;
	// 467    .end local v3    # "mre":Ljava/util/MissingResourceException;
	// 468    .end local v4    # "rb":Landroid/icu/util/UResourceBundle;
	// 469    .local v1, "measTypeBundle":Landroid/icu/util/UResourceBundle;
label_catch_30:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v3    # "mre":Ljava/util/MissingResourceException;
	goto label_goto_22;

}
// .method public getDelimiter(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::LocaleData::getDelimiter(int type)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> delimitersBundle;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> stringBundle;
	
	//    .param p1, "type"    # I
	delimitersBundle = this->bundle->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("delimiters")));
	delimitersBundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "delimitersBundle":Landroid/icu/impl/ICUResourceBundle;
	stringBundle = delimitersBundle->getWithFallback(android::icu::util::LocaleData::DELIMITER_TYPES[type]);
	//    .local v1, "stringBundle":Landroid/icu/impl/ICUResourceBundle;
	if ( !(this->noSubstitute) )  
		goto label_cond_29;
	if ( !(( this->bundle->isRoot() ^ 0x1)) )  
		goto label_cond_29;
	if ( !(stringBundle->isRoot()) )  
		goto label_cond_29;
	return 0x0;
	// 532    .line 279
label_cond_29:
	return stringBundle->getString();

}
// .method public getExemplarSet(II)Landroid/icu/text/UnicodeSet;
std::shared_ptr<android::icu::text::UnicodeSet> android::icu::util::LocaleData::getExemplarSet(int options,int extype)
{
	
	int cVar0;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar1;
	std::shared<std::vector<std::vector<java::lang::String>>> exemplarSetTypes;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar5;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> stringBundle;
	std::shared_ptr<android::icu::text::UnicodeSet> cVar3;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "options"    # I
	//    .param p2, "extype"    # I
	cVar0 = 0x3;
	cVar1 = 0x0;
	exemplarSetTypes = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x5);
	exemplarSetTypes[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ExemplarCharacters"));
	exemplarSetTypes[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("AuxExemplarCharacters"));
	exemplarSetTypes[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ExemplarCharactersIndex"));
	exemplarSetTypes[cVar0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ExemplarCharactersCurrency"));
	exemplarSetTypes[0x4] = std::make_shared<java::lang::String>(std::make_shared<char[]>("ExemplarCharactersPunctuation"));
	//    .local v3, "exemplarSetTypes":[Ljava/lang/String;
	if ( extype != cVar0 )
		goto label_cond_2c;
	if ( !(this->noSubstitute) )  
		goto label_cond_29;
label_goto_28:
	return cVar1;
label_cond_29:
	cVar1 = android::icu::text::UnicodeSet::EMPTY;
	goto label_goto_28;
	// 606    .line 193
label_cond_2c:
	try {
	//label_try_start_2c:
	//    .local v0, "aKey":Ljava/lang/String;
	stringBundle = this->bundle->get(exemplarSetTypes[extype]);
	stringBundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v4, "stringBundle":Landroid/icu/impl/ICUResourceBundle;
	if ( !(this->noSubstitute) )  
		goto label_cond_4b;
	if ( !(( this->bundle->isRoot() ^ 0x1)) )  
		goto label_cond_4b;
	if ( !(stringBundle->isRoot()) )  
		goto label_cond_4b;
	return cVar1;
	// 646    .line 199
label_cond_4b:
	//    .local v5, "unicodeSetPattern":Ljava/lang/String;
	cVar3 = std::make_shared<android::icu::text::UnicodeSet>(stringBundle->getString(), ( options | 0x1));
	//label_try_end_56:
	}
	catch (java::lang::ArrayIndexOutOfBoundsException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_60;
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_57;
	}
	//    .catch Ljava/lang/ArrayIndexOutOfBoundsException; {:try_start_2c .. :try_end_56} :catch_60
	//    .catch Ljava/lang/Exception; {:try_start_2c .. :try_end_56} :catch_57
	return cVar3;
	// 665    .line 203
	// 666    .end local v0    # "aKey":Ljava/lang/String;
	// 667    .end local v4    # "stringBundle":Landroid/icu/impl/ICUResourceBundle;
	// 668    .end local v5    # "unicodeSetPattern":Ljava/lang/String;
label_catch_57:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ex":Ljava/lang/Exception;
	if ( !(this->noSubstitute) )  
		goto label_cond_5d;
label_goto_5c:
	return cVar1;
label_cond_5d:
	cVar1 = android::icu::text::UnicodeSet::EMPTY;
	goto label_goto_5c;
	// 686    .line 201
	// 687    .end local v2    # "ex":Ljava/lang/Exception;
label_catch_60:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "aiooe":Ljava/lang/ArrayIndexOutOfBoundsException;
	cVar5 = std::make_shared<java::lang::IllegalArgumentException>(getCatchExcetionFromList);
	// throw
	throw cVar5;

}
// .method public getLocaleDisplayPattern()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::LocaleData::getLocaleDisplayPattern()
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> locDispBundle;
	
	locDispBundle = this->langBundle->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("localeDisplayPattern")));
	locDispBundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "locDispBundle":Landroid/icu/impl/ICUResourceBundle;
	//    .local v1, "localeDisplayPattern":Ljava/lang/String;
	return locDispBundle->getStringWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("pattern")));

}
// .method public getLocaleSeparator()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::LocaleData::getLocaleSeparator()
{
	
	std::shared_ptr<java::lang::String> sub0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> locDispBundle;
	std::shared_ptr<java::lang::String> localeSeparator;
	int index0;
	int index1;
	
	sub0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("{0}"));
	//    .local v4, "sub0":Ljava/lang/String;
	//    .local v5, "sub1":Ljava/lang/String;
	locDispBundle = this->langBundle->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("localeDisplayPattern")));
	locDispBundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v2, "locDispBundle":Landroid/icu/impl/ICUResourceBundle;
	localeSeparator = locDispBundle->getStringWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("separator")));
	//    .local v3, "localeSeparator":Ljava/lang/String;
	index0 = localeSeparator->indexOf(sub0);
	//    .local v0, "index0":I
	index1 = localeSeparator->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("{1}")));
	//    .local v1, "index1":I
	if ( index0 < 0 ) 
		goto label_cond_30;
	if ( index1 < 0 ) 
		goto label_cond_30;
	if ( index0 >  index1 )
		goto label_cond_30;
	return localeSeparator->substring((sub0->length() +  index0), index1);
	// 792    .line 418
label_cond_30:
	return localeSeparator;

}
// .method public getNoSubstitute()Z
bool android::icu::util::LocaleData::getNoSubstitute()
{
	
	return this->noSubstitute;

}
// .method public setNoSubstitute(Z)V
void android::icu::util::LocaleData::setNoSubstitute(bool setting)
{
	
	//    .param p1, "setting"    # Z
	this->noSubstitute = setting;
	return;

}


