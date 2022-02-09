// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\NumberingSystem.smali
#include "java2ctype.h"
#include "android.icu.impl.CacheBase.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.text.NumberingSystem_S_1.h"
#include "android.icu.text.NumberingSystem_S_2.h"
#include "android.icu.text.NumberingSystem_S_LocaleLookupData.h"
#include "android.icu.text.NumberingSystem.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.UResourceBundleIterator.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.ArrayList.h"
#include "java.util.Locale.h"
#include "java.util.MissingResourceException.h"

static android::icu::text::NumberingSystem::OTHER_NS_KEYWORDS;
static android::icu::text::NumberingSystem::cachedLocaleData;
static android::icu::text::NumberingSystem::cachedStringData;
// .method static synthetic -wrap0(Ljava/lang/String;)Landroid/icu/text/NumberingSystem;
std::shared_ptr<android::icu::text::NumberingSystem> android::icu::text::NumberingSystem::_wrap0(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	return android::icu::text::NumberingSystem::lookupInstanceByName(name);

}
// .method static constructor <clinit>()V
void android::icu::text::NumberingSystem::static_cinit()
{
	
	std::shared<std::vector<std::vector<java::lang::String>>> cVar0;
	std::shared_ptr<android::icu::text::NumberingSystem_S_1> cVar1;
	std::shared_ptr<android::icu::text::NumberingSystem_S_2> cVar2;
	
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x3);
	cVar0[0x0] = std::make_shared<java::lang::String>(std::make_shared<char[]>("native"));
	cVar0[0x1] = std::make_shared<java::lang::String>(std::make_shared<char[]>("traditional"));
	cVar0[0x2] = std::make_shared<java::lang::String>(std::make_shared<char[]>("finance"));
	android::icu::text::NumberingSystem::OTHER_NS_KEYWORDS = cVar0;
	cVar1 = std::make_shared<android::icu::text::NumberingSystem_S_1>();
	android::icu::text::NumberingSystem::cachedLocaleData = cVar1;
	cVar2 = std::make_shared<android::icu::text::NumberingSystem_S_2>();
	android::icu::text::NumberingSystem::cachedStringData = cVar2;
	return;

}
// .method public constructor <init>()V
android::icu::text::NumberingSystem::NumberingSystem()
{
	
	// 123    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->radix = 0xa;
	this->algorithmic = 0x0;
	this->desc = std::make_shared<java::lang::String>(std::make_shared<char[]>("0123456789"));
	this->name = std::make_shared<java::lang::String>(std::make_shared<char[]>("latn"));
	return;

}
// .method public static getAvailableNames()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NumberingSystem::getAvailableNames()
{
	
	std::shared_ptr<java::util::ArrayList> output;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> it;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	
	//    .local v3, "numberingSystemsInfo":Landroid/icu/util/UResourceBundle;
	//    .local v1, "nsCurrent":Landroid/icu/util/UResourceBundle;
	output = std::make_shared<java::util::ArrayList>();
	//    .local v4, "output":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	it = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("numberingSystems")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("numberingSystems")))->getIterator();
	//    .local v0, "it":Landroid/icu/util/UResourceBundleIterator;
label_goto_1a:
	if ( !(it->hasNext()) )  
		goto label_cond_2c;
	//    .local v5, "temp":Landroid/icu/util/UResourceBundle;
	//    .local v2, "nsName":Ljava/lang/String;
	output->add(it->next()->getKey());
	goto label_goto_1a;
	// 208    .line 259
	// 209    .end local v2    # "nsName":Ljava/lang/String;
	// 210    .end local v5    # "temp":Landroid/icu/util/UResourceBundle;
label_cond_2c:
	cVar0 = output->toArray(std::make_shared<std::vector<std::vector<java::lang::String>>>(output->size()));
	cVar0->checkCast("std::vector<java::lang::String>");
	return cVar0;

}
// .method public static getInstance()Landroid/icu/text/NumberingSystem;
std::shared_ptr<android::icu::text::NumberingSystem> android::icu::text::NumberingSystem::getInstance()
{
	
	return android::icu::text::NumberingSystem::getInstance(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::FORMAT));

}
// .method public static getInstance(IZLjava/lang/String;)Landroid/icu/text/NumberingSystem;
std::shared_ptr<android::icu::text::NumberingSystem> android::icu::text::NumberingSystem::getInstance(int radix_in,bool isAlgorithmic_in,std::shared_ptr<java::lang::String> desc_in)
{
	
	//    .param p0, "radix_in"    # I
	//    .param p1, "isAlgorithmic_in"    # Z
	//    .param p2, "desc_in"    # Ljava/lang/String;
	return android::icu::text::NumberingSystem::getInstance(0x0, radix_in, isAlgorithmic_in, desc_in);

}
// .method public static getInstance(Landroid/icu/util/ULocale;)Landroid/icu/text/NumberingSystem;
std::shared_ptr<android::icu::text::NumberingSystem> android::icu::text::NumberingSystem::getInstance(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	int nsResolved;
	std::shared_ptr<java::lang::String> numbersKeyword;
	std::shared_ptr<std::vector<java::lang::String>> cVar0;
	int cVar1;
	std::shared_ptr<android::icu::text::NumberingSystem> ns;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<android::icu::text::NumberingSystem_S_LocaleLookupData> localeLookupData;
	std::shared_ptr<android::icu::text::NumberingSystem> cVar4;
	
	//    .param p0, "locale"    # Landroid/icu/util/ULocale;
	nsResolved = 0x1;
	//    .local v5, "nsResolved":Z
	numbersKeyword = locale->getKeywordValue(std::make_shared<java::lang::String>(std::make_shared<char[]>("numbers")));
	//    .local v6, "numbersKeyword":Ljava/lang/String;
	if ( !(numbersKeyword) )  
		goto label_cond_25;
	cVar0 = android::icu::text::NumberingSystem::OTHER_NS_KEYWORDS;
	cVar1 = 0x0;
label_goto_e:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_19;
	//    .local v2, "keyword":Ljava/lang/String;
	if ( !(numbersKeyword->equals(cVar0[cVar1])) )  
		goto label_cond_22;
	nsResolved = 0x0;
	//    .end local v2    # "keyword":Ljava/lang/String;
label_cond_19:
label_goto_19:
	if ( !(nsResolved) )  
		goto label_cond_2d;
	ns = android::icu::text::NumberingSystem::getInstanceByName(numbersKeyword);
	//    .local v4, "ns":Landroid/icu/text/NumberingSystem;
	if ( !(ns) )  
		goto label_cond_2a;
	return ns;
	// 323    .line 115
	// 324    .end local v4    # "ns":Landroid/icu/text/NumberingSystem;
	// 325    .restart local v2    # "keyword":Ljava/lang/String;
label_cond_22:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_e;
	// 331    .line 122
	// 332    .end local v2    # "keyword":Ljava/lang/String;
label_cond_25:
	numbersKeyword = std::make_shared<java::lang::String>(std::make_shared<char[]>("default"));
	nsResolved = 0x0;
	goto label_goto_19;
	// 341    .line 133
	// 342    .restart local v4    # "ns":Landroid/icu/text/NumberingSystem;
label_cond_2a:
	numbersKeyword = std::make_shared<java::lang::String>(std::make_shared<char[]>("default"));
	//    .end local v4    # "ns":Landroid/icu/text/NumberingSystem;
label_cond_2d:
	//    .local v0, "baseName":Ljava/lang/String;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	//    .local v1, "key":Ljava/lang/String;
	localeLookupData = std::make_shared<android::icu::text::NumberingSystem_S_LocaleLookupData>(locale, numbersKeyword);
	//    .local v3, "localeLookupData":Landroid/icu/text/NumberingSystem$LocaleLookupData;
	cVar4 = android::icu::text::NumberingSystem::cachedLocaleData->getInstance(cVar3->append(locale->getBaseName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("@numbers=")))->append(numbersKeyword)->toString(), localeLookupData);
	cVar4->checkCast("android::icu::text::NumberingSystem");
	return cVar4;

}
// .method private static getInstance(Ljava/lang/String;IZLjava/lang/String;)Landroid/icu/text/NumberingSystem;
std::shared_ptr<android::icu::text::NumberingSystem> android::icu::text::NumberingSystem::getInstance(std::shared_ptr<java::lang::String> name_in,int radix_in,bool isAlgorithmic_in,std::shared_ptr<java::lang::String> desc_in)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<android::icu::text::NumberingSystem> ns;
	
	//    .param p0, "name_in"    # Ljava/lang/String;
	//    .param p1, "radix_in"    # I
	//    .param p2, "isAlgorithmic_in"    # Z
	//    .param p3, "desc_in"    # Ljava/lang/String;
	if ( radix_in >= 0x2 )
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid radix for numbering system")));
	// throw
	throw cVar0;
	// 418    .line 87
label_cond_c:
	if ( isAlgorithmic_in )     
		goto label_cond_25;
	if ( desc_in->length() != radix_in )
		goto label_cond_1c;
	if ( !(( android::icu::text::NumberingSystem::isValidDigitString(desc_in) ^ 0x1)) )  
		goto label_cond_25;
label_cond_1c:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid digit string for numbering system")));
	// throw
	throw cVar1;
	// 447    .line 92
label_cond_25:
	ns = std::make_shared<android::icu::text::NumberingSystem>();
	//    .local v0, "ns":Landroid/icu/text/NumberingSystem;
	ns->radix = radix_in;
	ns->algorithmic = isAlgorithmic_in;
	ns->desc = desc_in;
	ns->name = name_in;
	return ns;

}
// .method public static getInstance(Ljava/util/Locale;)Landroid/icu/text/NumberingSystem;
std::shared_ptr<android::icu::text::NumberingSystem> android::icu::text::NumberingSystem::getInstance(std::shared_ptr<java::util::Locale> inLocale)
{
	
	//    .param p0, "inLocale"    # Ljava/util/Locale;
	return android::icu::text::NumberingSystem::getInstance(android::icu::util::ULocale::forLocale(inLocale));

}
// .method public static getInstanceByName(Ljava/lang/String;)Landroid/icu/text/NumberingSystem;
std::shared_ptr<android::icu::text::NumberingSystem> android::icu::text::NumberingSystem::getInstanceByName(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::text::NumberingSystem> cVar0;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = android::icu::text::NumberingSystem::cachedStringData->getInstance(name, 0x0);
	cVar0->checkCast("android::icu::text::NumberingSystem");
	return cVar0;

}
// .method public static isValidDigitString(Ljava/lang/String;)Z
bool android::icu::text::NumberingSystem::isValidDigitString(std::shared_ptr<java::lang::String> str)
{
	
	int cVar1;
	bool cVar1;
	
	//    .param p0, "str"    # Ljava/lang/String;
	cVar1 = 0x0;
	//    .local v0, "numCodepoints":I
	if ( str->codePointCount(cVar1, str->length()) != 0xa )
		goto label_cond_e;
	cVar1 = 0x1;
label_cond_e:
	return cVar1;

}
// .method static lookupInstanceByLocale(Landroid/icu/text/NumberingSystem$LocaleLookupData;)Landroid/icu/text/NumberingSystem;
std::shared_ptr<android::icu::text::NumberingSystem> android::icu::text::NumberingSystem::lookupInstanceByLocale(std::shared_ptr<android::icu::text::NumberingSystem_S_LocaleLookupData> localeLookupData)
{
	
	std::shared_ptr<android::icu::text::NumberingSystem> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> rb;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::lang::String> numbersKeyword;
	std::shared_ptr<java::lang::String> resolvedNumberingSystem;
	std::shared_ptr<android::icu::text::NumberingSystem> ns;
	auto resolvedNumberingSystem;
	
	//    .param p0, "localeLookupData"    # Landroid/icu/text/NumberingSystem$LocaleLookupData;
	//    .local v1, "locale":Landroid/icu/util/ULocale;
	try {
	//label_try_start_2:
	rb = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), localeLookupData->locale);
	rb->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v4, "rb":Landroid/icu/impl/ICUResourceBundle;
	//label_try_end_11:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_28;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_2 .. :try_end_11} :catch_28
	numbersKeyword = localeLookupData->numbersKeyword;
	//    .local v3, "numbersKeyword":Ljava/lang/String;
	resolvedNumberingSystem = 0x0;
	//    .local v5, "resolvedNumberingSystem":Ljava/lang/String;
label_goto_15:
	try {
	//label_try_start_15:
	//label_try_end_18:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2f;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_15 .. :try_end_18} :catch_2f
	resolvedNumberingSystem = rb->getWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("NumberElements")))->getStringWithFallback(numbersKeyword);
	//    .end local v5    # "resolvedNumberingSystem":Ljava/lang/String;
label_cond_19:
	ns = 0x0;
	//    .local v2, "ns":Landroid/icu/text/NumberingSystem;
	if ( !(resolvedNumberingSystem) )  
		goto label_cond_20;
	ns = android::icu::text::NumberingSystem::getInstanceByName(resolvedNumberingSystem);
	//    .end local v2    # "ns":Landroid/icu/text/NumberingSystem;
label_cond_20:
	if ( ns )     
		goto label_cond_27;
	ns = std::make_shared<android::icu::text::NumberingSystem>();
label_cond_27:
	return ns;
	// 608    .line 163
	// 609    .end local v3    # "numbersKeyword":Ljava/lang/String;
	// 610    .end local v4    # "rb":Landroid/icu/impl/ICUResourceBundle;
label_catch_28:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/util/MissingResourceException;
	cVar0 = std::make_shared<android::icu::text::NumberingSystem>();
	return cVar0;
	// 622    .line 173
	// 623    .end local v0    # "ex":Ljava/util/MissingResourceException;
	// 624    .restart local v3    # "numbersKeyword":Ljava/lang/String;
	// 625    .restart local v4    # "rb":Landroid/icu/impl/ICUResourceBundle;
	// 626    .restart local v5    # "resolvedNumberingSystem":Ljava/lang/String;
label_catch_2f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .restart local v0    # "ex":Ljava/util/MissingResourceException;
	if ( numbersKeyword->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("native"))) )     
		goto label_cond_42;
	if ( !(numbersKeyword->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("finance")))) )  
		goto label_cond_46;
label_cond_42:
	numbersKeyword = std::make_shared<java::lang::String>(std::make_shared<char[]>("default"));
	goto label_goto_15;
	// 654    .line 176
label_cond_46:
	if ( !(numbersKeyword->equals(std::make_shared<java::lang::String>(std::make_shared<char[]>("traditional")))) )  
		goto label_cond_19;
	numbersKeyword = std::make_shared<java::lang::String>(std::make_shared<char[]>("native"));
	goto label_goto_15;

}
// .method private static lookupInstanceByName(Ljava/lang/String;)Landroid/icu/text/NumberingSystem;
std::shared_ptr<android::icu::text::NumberingSystem> android::icu::text::NumberingSystem::lookupInstanceByName(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::util::UResourceBundle> nsTop;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "name"    # Ljava/lang/String;
	try {
	//label_try_start_0:
	//    .local v8, "numberingSystemsInfo":Landroid/icu/util/UResourceBundle;
	//    .local v5, "nsCurrent":Landroid/icu/util/UResourceBundle;
	nsTop = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("numberingSystems")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("numberingSystems")))->get(name);
	//    .local v7, "nsTop":Landroid/icu/util/UResourceBundle;
	//    .local v1, "description":Ljava/lang/String;
	//    .local v6, "nsRadixBundle":Landroid/icu/util/UResourceBundle;
	//    .local v4, "nsAlgBundle":Landroid/icu/util/UResourceBundle;
	//    .local v9, "radix":I
	//label_try_end_31:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_3d;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_0 .. :try_end_31} :catch_3d
	//    .local v0, "algorithmic":I
	if ( nsTop->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("algorithmic")))->getInt() != 0x1 )
		goto label_cond_3b;
	//    .local v3, "isAlgorithmic":Z
label_goto_36:
	return android::icu::text::NumberingSystem::getInstance(name, nsTop->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("radix")))->getInt(), isAlgorithmic, nsTop->getString(std::make_shared<java::lang::String>(std::make_shared<char[]>("desc"))));
	// 754    .line 232
	// 755    .end local v3    # "isAlgorithmic":Z
label_cond_3b:
	//    .restart local v3    # "isAlgorithmic":Z
	goto label_goto_36;
	// 762    .line 234
	// 763    .end local v0    # "algorithmic":I
	// 764    .end local v1    # "description":Ljava/lang/String;
	// 765    .end local v3    # "isAlgorithmic":Z
	// 766    .end local v4    # "nsAlgBundle":Landroid/icu/util/UResourceBundle;
	// 767    .end local v5    # "nsCurrent":Landroid/icu/util/UResourceBundle;
	// 768    .end local v6    # "nsRadixBundle":Landroid/icu/util/UResourceBundle;
	// 769    .end local v7    # "nsTop":Landroid/icu/util/UResourceBundle;
	// 770    .end local v8    # "numberingSystemsInfo":Landroid/icu/util/UResourceBundle;
	// 771    .end local v9    # "radix":I
label_catch_3d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ex":Ljava/util/MissingResourceException;
	return 0x0;

}
// .method public getDescription()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NumberingSystem::getDescription()
{
	
	return this->desc;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::NumberingSystem::getName()
{
	
	return this->name;

}
// .method public getRadix()I
int android::icu::text::NumberingSystem::getRadix()
{
	
	return this->radix;

}
// .method public isAlgorithmic()Z
bool android::icu::text::NumberingSystem::isAlgorithmic()
{
	
	return this->algorithmic;

}


