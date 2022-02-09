// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUCurrencyDisplayInfoProvider$ICUCurrencyDisplayInfo.smali
#include "java2ctype.h"
#include "android.icu.impl.CurrencyData_S_CurrencyFormatInfo.h"
#include "android.icu.impl.CurrencyData_S_CurrencySpacingInfo.h"
#include "android.icu.impl.ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink.h"
#include "android.icu.impl.ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.ref.SoftReference.h"
#include "java.util.Collections.h"
#include "java.util.Comparator.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.TreeMap.h"

// .method public constructor <init>(Landroid/icu/impl/ICUResourceBundle;Z)V
android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo(std::shared_ptr<android::icu::impl::ICUResourceBundle> rb,bool fallback)
{
	
	//    .param p1, "rb"    # Landroid/icu/impl/ICUResourceBundle;
	//    .param p2, "fallback"    # Z
	// 069    invoke-direct {p0}, Landroid/icu/impl/CurrencyData$CurrencyDisplayInfo;-><init>()V
	this->fallback = fallback;
	this->rb = rb;
	this->currencies = rb->findTopLevel(std::make_shared<java::lang::String>(std::make_shared<char[]>("Currencies")));
	this->plurals = rb->findTopLevel(std::make_shared<java::lang::String>(std::make_shared<char[]>("CurrencyPlurals")));
	return;

}
// .method private _createNameMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::_createNameMap()
{
	
	std::shared_ptr<java::util::TreeMap> result;
	std::shared_ptr<java::util::HashSet> visited;
	std::shared_ptr<java::util::HashMap> visitedPlurals;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> curr;
	int i;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> item;
	std::shared_ptr<java::lang::Object> isoCode;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> plurals;
	std::shared_ptr<java::util::Set> pluralSet;
	std::shared_ptr<java::util::HashSet> pluralSet;
	int j;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> plural;
	std::shared_ptr<java::lang::Object> pluralType;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 102        value = {
	// 103            "()",
	// 104            "Ljava/util/Map",
	// 105            "<",
	// 106            "Ljava/lang/String;",
	// 107            "Ljava/lang/String;",
	// 108            ">;"
	// 109        }
	// 110    .end annotation
	result = std::make_shared<java::util::TreeMap>(java::lang::String::CASE_INSENSITIVE_ORDER);
	//    .local v14, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	visited = std::make_shared<java::util::HashSet>();
	//    .local v15, "visited":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	visitedPlurals = std::make_shared<java::util::HashMap>();
	//    .local v16, "visitedPlurals":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	locale = this->rb->getULocale();
	//    .local v7, "locale":Landroid/icu/util/ULocale;
label_goto_1d:
	if ( !(locale) )  
		goto label_cond_ba;
	bundle = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/curr")), locale);
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v1, "bundle":Landroid/icu/impl/ICUResourceBundle;
	curr = bundle->findTopLevel(std::make_shared<java::lang::String>(std::make_shared<char[]>("Currencies")));
	//    .local v2, "curr":Landroid/icu/impl/ICUResourceBundle;
	if ( !(curr) )  
		goto label_cond_5d;
	i = 0x0;
	//    .local v3, "i":I
label_goto_36:
	if ( i >= curr->getSize() )
		goto label_cond_5d;
	item = curr->at(i);
	//    .local v5, "item":Landroid/icu/impl/ICUResourceBundle;
	isoCode = item->getKey();
	//    .local v4, "isoCode":Ljava/lang/String;
	if ( visited->contains(isoCode) )     
		goto label_cond_5a;
	visited->add(isoCode);
	//    .local v8, "name":Ljava/lang/String;
	result->put(item->getString(0x1), isoCode);
	//    .end local v8    # "name":Ljava/lang/String;
label_cond_5a:
	i = ( i + 0x1);
	goto label_goto_36;
	// 231    .line 311
	// 232    .end local v3    # "i":I
	// 233    .end local v4    # "isoCode":Ljava/lang/String;
	// 234    .end local v5    # "item":Landroid/icu/impl/ICUResourceBundle;
label_cond_5d:
	plurals = bundle->findTopLevel(std::make_shared<java::lang::String>(std::make_shared<char[]>("CurrencyPlurals")));
	//    .local v13, "plurals":Landroid/icu/impl/ICUResourceBundle;
	if ( !(plurals) )  
		goto label_cond_b4;
	i = 0x0;
	//    .restart local v3    # "i":I
label_goto_69:
	if ( i >= plurals->getSize() )
		goto label_cond_b4;
	item = plurals->at(i);
	//    .restart local v5    # "item":Landroid/icu/impl/ICUResourceBundle;
	isoCode = item->getKey();
	//    .restart local v4    # "isoCode":Ljava/lang/String;
	pluralSet = visitedPlurals->get(isoCode);
	pluralSet->checkCast("java::util::Set");
	//    .local v11, "pluralSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	if ( pluralSet )     
		goto label_cond_8d;
	//    .end local v11    # "pluralSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	pluralSet = std::make_shared<java::util::HashSet>();
	//    .restart local v11    # "pluralSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	visitedPlurals->put(isoCode, pluralSet);
label_cond_8d:
	j = 0x0;
	//    .local v6, "j":I
label_goto_8e:
	if ( j >= item->getSize() )
		goto label_cond_b1;
	plural = item->at(j);
	//    .local v9, "plural":Landroid/icu/impl/ICUResourceBundle;
	pluralType = plural->getKey();
	//    .local v12, "pluralType":Ljava/lang/String;
	if ( pluralSet->contains(pluralType) )     
		goto label_cond_ae;
	//    .local v10, "pluralName":Ljava/lang/String;
	result->put(plural->getString(), isoCode);
	pluralSet->add(pluralType);
	//    .end local v10    # "pluralName":Ljava/lang/String;
label_cond_ae:
	j = ( j + 0x1);
	goto label_goto_8e;
	// 350    .line 313
	// 351    .end local v9    # "plural":Landroid/icu/impl/ICUResourceBundle;
	// 352    .end local v12    # "pluralType":Ljava/lang/String;
label_cond_b1:
	i = ( i + 0x1);
	goto label_goto_69;
	// 358    .line 294
	// 359    .end local v3    # "i":I
	// 360    .end local v4    # "isoCode":Ljava/lang/String;
	// 361    .end local v5    # "item":Landroid/icu/impl/ICUResourceBundle;
	// 362    .end local v6    # "j":I
	// 363    .end local v11    # "pluralSet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_b4:
	locale = locale->getFallback();
	goto label_goto_1d;
	// 371    .line 334
	// 372    .end local v1    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	// 373    .end local v2    # "curr":Landroid/icu/impl/ICUResourceBundle;
	// 374    .end local v13    # "plurals":Landroid/icu/impl/ICUResourceBundle;
label_cond_ba:
	return java::util::Collections::unmodifiableMap(result);

}
// .method private _createSymbolMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::_createSymbolMap()
{
	
	std::shared_ptr<java::util::HashMap> result;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> curr;
	int i;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> item;
	std::shared_ptr<java::lang::Object> isoCode;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 386        value = {
	// 387            "()",
	// 388            "Ljava/util/Map",
	// 389            "<",
	// 390            "Ljava/lang/String;",
	// 391            "Ljava/lang/String;",
	// 392            ">;"
	// 393        }
	// 394    .end annotation
	result = std::make_shared<java::util::HashMap>();
	//    .local v6, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	locale = this->rb->getULocale();
	//    .local v5, "locale":Landroid/icu/util/ULocale;
label_goto_b:
	if ( !(locale) )  
		goto label_cond_47;
	bundle = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/curr")), locale);
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "bundle":Landroid/icu/impl/ICUResourceBundle;
	curr = bundle->findTopLevel(std::make_shared<java::lang::String>(std::make_shared<char[]>("Currencies")));
	//    .local v1, "curr":Landroid/icu/impl/ICUResourceBundle;
	if ( curr )     
		goto label_cond_24;
label_cond_1f:
	locale = locale->getFallback();
	goto label_goto_b;
	// 444    .line 272
label_cond_24:
	i = 0x0;
	//    .local v2, "i":I
label_goto_25:
	if ( i >= curr->getSize() )
		goto label_cond_1f;
	item = curr->at(i);
	//    .local v4, "item":Landroid/icu/impl/ICUResourceBundle;
	isoCode = item->getKey();
	//    .local v3, "isoCode":Ljava/lang/String;
	if ( result->containsKey(isoCode) )     
		goto label_cond_44;
	result->put(isoCode, isoCode);
	//    .local v7, "symbol":Ljava/lang/String;
	result->put(item->getString(0x0), isoCode);
	//    .end local v7    # "symbol":Ljava/lang/String;
label_cond_44:
	i = ( i + 0x1);
	goto label_goto_25;
	// 496    .line 285
	// 497    .end local v0    # "bundle":Landroid/icu/impl/ICUResourceBundle;
	// 498    .end local v1    # "curr":Landroid/icu/impl/ICUResourceBundle;
	// 499    .end local v2    # "i":I
	// 500    .end local v3    # "isoCode":Ljava/lang/String;
	// 501    .end local v4    # "item":Landroid/icu/impl/ICUResourceBundle;
label_cond_47:
	return java::util::Collections::unmodifiableMap(result);

}
// .method private getName(Ljava/lang/String;Z)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::getName(std::shared_ptr<java::lang::String> isoCode,bool symbolName)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> result;
	int cVar1;
	std::shared_ptr<java::lang::String> isoCode;
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	//    .param p2, "symbolName"    # Z
	cVar0 = 0x0;
	if ( !(this->currencies) )  
		goto label_cond_2c;
	result = this->currencies->findWithFallback(isoCode);
	//    .local v0, "result":Landroid/icu/impl/ICUResourceBundle;
	if ( !(result) )  
		goto label_cond_2c;
	if ( this->fallback )     
		goto label_cond_22;
	if ( !(( this->rb->isRoot() ^ 0x1)) )  
		goto label_cond_22;
	if ( !(result->isRoot()) )  
		goto label_cond_22;
	return cVar0;
	// 558    .line 95
label_cond_22:
	if ( !(symbolName) )  
		goto label_cond_2a;
	cVar1 = 0x0;
label_goto_25:
	return result->getString(cVar1);
label_cond_2a:
	cVar1 = 0x1;
	goto label_goto_25;
	// 576    .line 99
	// 577    .end local v0    # "result":Landroid/icu/impl/ICUResourceBundle;
label_cond_2c:
	if ( !(this->fallback) )  
		goto label_cond_31;
	//    .end local p1    # "isoCode":Ljava/lang/String;
label_goto_30:
	return isoCode;
	// 587    .restart local p1    # "isoCode":Ljava/lang/String;
label_cond_31:
	isoCode = cVar0;
	goto label_goto_30;

}
// .method public getFormatInfo(Ljava/lang/String;)Landroid/icu/impl/CurrencyData$CurrencyFormatInfo;
std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyFormatInfo> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::getFormatInfo(std::shared_ptr<java::lang::String> isoCode)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> crb;
	std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencyFormatInfo> cVar1;
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	cVar0 = 0x2;
	crb = this->currencies->findWithFallback(isoCode);
	//    .local v0, "crb":Landroid/icu/impl/ICUResourceBundle;
	if ( !(crb) )  
		goto label_cond_2a;
	if ( crb->getSize() <= cVar0 )
		goto label_cond_2a;
	crb = crb->at(cVar0);
	if ( !(crb) )  
		goto label_cond_2a;
	//    .local v2, "pattern":Ljava/lang/String;
	//    .local v3, "separator":Ljava/lang/String;
	//    .local v1, "groupingSeparator":Ljava/lang/String;
	cVar1 = std::make_shared<android::icu::impl::CurrencyData_S_CurrencyFormatInfo>(crb->getString(0x0), crb->getString(0x1), crb->getString(cVar0));
	return cVar1;
	// 659    .line 189
	// 660    .end local v1    # "groupingSeparator":Ljava/lang/String;
	// 661    .end local v2    # "pattern":Ljava/lang/String;
	// 662    .end local v3    # "separator":Ljava/lang/String;
label_cond_2a:
	return 0x0;

}
// .method public getName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::getName(std::shared_ptr<java::lang::String> isoCode)
{
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	return this->getName(isoCode, 0x0);

}
// .method public getPluralName(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::getPluralName(std::shared_ptr<java::lang::String> isoCode,std::shared_ptr<java::lang::String> pluralKey)
{
	
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> pluralsBundle;
	std::shared_ptr<java::lang::String> pluralName;
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	//    .param p2, "pluralKey"    # Ljava/lang/String;
	cVar1 = 0x0;
	if ( !(this->plurals) )  
		goto label_cond_27;
	pluralsBundle = this->plurals->findWithFallback(isoCode);
	//    .local v1, "pluralsBundle":Landroid/icu/impl/ICUResourceBundle;
	if ( !(pluralsBundle) )  
		goto label_cond_27;
	pluralName = pluralsBundle->findStringWithFallback(pluralKey);
	//    .local v0, "pluralName":Ljava/lang/String;
	if ( pluralName )     
		goto label_cond_26;
	if ( this->fallback )     
		goto label_cond_18;
	return cVar1;
	// 723    .line 113
label_cond_18:
	pluralName = pluralsBundle->findStringWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("other")));
	if ( pluralName )     
		goto label_cond_26;
	return this->getName(isoCode);
	// 741    .line 118
label_cond_26:
	return pluralName;
	// 745    .line 122
	// 746    .end local v0    # "pluralName":Ljava/lang/String;
	// 747    .end local v1    # "pluralsBundle":Landroid/icu/impl/ICUResourceBundle;
label_cond_27:
	if ( !(this->fallback) )  
		goto label_cond_2f;
	cVar1 = this->getName(isoCode);
label_cond_2f:
	return cVar1;

}
// .method public getSpacingInfo()Landroid/icu/impl/CurrencyData$CurrencySpacingInfo;
std::shared_ptr<android::icu::impl::CurrencyData_S_CurrencySpacingInfo> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::getSpacingInfo()
{
	
	std::shared_ptr<android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink> sink;
	
	sink = std::make_shared<android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo_S_SpacingInfoSink>(this, 0x0);
	//    .local v0, "sink":Landroid/icu/impl/ICUCurrencyDisplayInfoProvider$ICUCurrencyDisplayInfo$SpacingInfoSink;
	this->rb->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("currencySpacing")), sink);
	return sink->getSpacingInfo(this->fallback);

}
// .method public getSymbol(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::getSymbol(std::shared_ptr<java::lang::String> isoCode)
{
	
	//    .param p1, "isoCode"    # Ljava/lang/String;
	return this->getName(isoCode, 0x1);

}
// .method public getULocale()Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::getULocale()
{
	
	return this->rb->getULocale();

}
// .method public getUnitPatterns()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::getUnitPatterns()
{
	
	std::shared_ptr<java::util::HashMap> result;
	std::shared_ptr<android::icu::util::ULocale> locale;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> r;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cr;
	int index;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> b;
	std::shared_ptr<java::lang::Object> key;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 822        value = {
	// 823            "()",
	// 824            "Ljava/util/Map",
	// 825            "<",
	// 826            "Ljava/lang/String;",
	// 827            "Ljava/lang/String;",
	// 828            ">;"
	// 829        }
	// 830    .end annotation
	result = std::make_shared<java::util::HashMap>();
	//    .local v6, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	locale = this->rb->getULocale();
	//    .local v4, "locale":Landroid/icu/util/ULocale;
label_goto_b:
	if ( !(locale) )  
		goto label_cond_48;
	r = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/curr")), locale);
	r->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v5, "r":Landroid/icu/impl/ICUResourceBundle;
	if ( r )     
		goto label_cond_1d;
label_cond_18:
	locale = locale->getFallback();
	goto label_goto_b;
	// 873    .line 158
label_cond_1d:
	cr = r->findWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("CurrencyUnitPatterns")));
	//    .local v1, "cr":Landroid/icu/impl/ICUResourceBundle;
	if ( !(cr) )  
		goto label_cond_18;
	index = 0x0;
	//    .local v2, "index":I
	//    .local v7, "size":I
label_goto_2b:
	if ( index >= cr->getSize() )
		goto label_cond_18;
	b = cr->get(index);
	b->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "b":Landroid/icu/impl/ICUResourceBundle;
	key = b->getKey();
	//    .local v3, "key":Ljava/lang/String;
	if ( !(result->containsKey(key)) )  
		goto label_cond_40;
label_goto_3d:
	index = ( index + 0x1);
	goto label_goto_2b;
	// 924    .line 168
label_cond_40:
	result->put(key, b->getString());
	goto label_goto_3d;
	// 934    .line 174
	// 935    .end local v0    # "b":Landroid/icu/impl/ICUResourceBundle;
	// 936    .end local v1    # "cr":Landroid/icu/impl/ICUResourceBundle;
	// 937    .end local v2    # "index":I
	// 938    .end local v3    # "key":Ljava/lang/String;
	// 939    .end local v5    # "r":Landroid/icu/impl/ICUResourceBundle;
	// 940    .end local v7    # "size":I
label_cond_48:
	return java::util::Collections::unmodifiableMap(result);

}
// .method public nameMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::nameMap()
{
	
	std::shared_ptr<java::util::Map> map;
	std::shared_ptr<java::lang::Object> map;
	std::shared_ptr<java::lang::ref::SoftReference> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 952        value = {
	// 953            "()",
	// 954            "Ljava/util/Map",
	// 955            "<",
	// 956            "Ljava/lang/String;",
	// 957            "Ljava/lang/String;",
	// 958            ">;"
	// 959        }
	// 960    .end annotation
	if ( this->_nameMapRef )     
		goto label_cond_13;
	map = 0x0;
label_goto_5:
	if ( map )     
		goto label_cond_12;
	map = this->_createNameMap();
	//    .local v0, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	cVar1 = std::make_shared<java::lang::ref::SoftReference>(map);
	this->_nameMapRef = cVar1;
	//    .end local v0    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_12:
	return map;
	// 992    .line 138
label_cond_13:
	map = this->_nameMapRef->get();
	map->checkCast("java::util::Map");
	//    .restart local v0    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_5;

}
// .method public symbolMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> android::icu::impl::ICUCurrencyDisplayInfoProvider_S_ICUCurrencyDisplayInfo::symbolMap()
{
	
	std::shared_ptr<java::util::Map> map;
	std::shared_ptr<java::lang::Object> map;
	std::shared_ptr<java::lang::ref::SoftReference> cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1009        value = {
	// 1010            "()",
	// 1011            "Ljava/util/Map",
	// 1012            "<",
	// 1013            "Ljava/lang/String;",
	// 1014            "Ljava/lang/String;",
	// 1015            ">;"
	// 1016        }
	// 1017    .end annotation
	if ( this->_symbolMapRef )     
		goto label_cond_13;
	map = 0x0;
label_goto_5:
	if ( map )     
		goto label_cond_12;
	map = this->_createSymbolMap();
	//    .local v0, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	cVar1 = std::make_shared<java::lang::ref::SoftReference>(map);
	this->_symbolMapRef = cVar1;
	//    .end local v0    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_12:
	return map;
	// 1049    .line 127
label_cond_13:
	map = this->_symbolMapRef->get();
	map->checkCast("java::util::Map");
	//    .restart local v0    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_5;

}


