// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\LocaleMatcher.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.Relation.h"
#include "android.icu.impl.Row_S_R3.h"
#include "android.icu.impl.Row.h"
#include "android.icu.util.LocaleMatcher_S_LanguageMatcherData.h"
#include "android.icu.util.LocaleMatcher_S_OutputDouble.h"
#include "android.icu.util.LocaleMatcher.h"
#include "android.icu.util.LocalePriorityList_S_Builder.h"
#include "android.icu.util.LocalePriorityList.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.UResourceBundleIterator.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Double.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashMap.h"
#include "java.util.LinkedHashSet.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

static android::icu::util::LocaleMatcher::DEBUG = false;
static android::icu::util::LocaleMatcher::DEFAULT_THRESHOLD = 0.5;
static android::icu::util::LocaleMatcher::UNKNOWN_LOCALE;
static android::icu::util::LocaleMatcher::canonicalMap;
static android::icu::util::LocaleMatcher::defaultWritten;
// .method static constructor <clinit>()V
void android::icu::util::LocaleMatcher::static_cinit()
{
	
	int cVar0;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	std::shared_ptr<java::util::HashMap> cVar2;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> written;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> cVar3;
	std::shared_ptr<android::icu::util::UResourceBundleIterator> iter;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> item;
	bool cVar4;
	
	cVar0 = 0x3;
	cVar1 = std::make_shared<android::icu::util::ULocale>(std::make_shared<java::lang::String>(std::make_shared<char[]>("und")));
	android::icu::util::LocaleMatcher::UNKNOWN_LOCALE = cVar1;
	cVar2 = std::make_shared<java::util::HashMap>();
	android::icu::util::LocaleMatcher::canonicalMap = cVar2;
	android::icu::util::LocaleMatcher::canonicalMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("iw")), std::make_shared<java::lang::String>(std::make_shared<char[]>("he")));
	android::icu::util::LocaleMatcher::canonicalMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("mo")), std::make_shared<java::lang::String>(std::make_shared<char[]>("ro")));
	android::icu::util::LocaleMatcher::canonicalMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("tl")), std::make_shared<java::lang::String>(std::make_shared<char[]>("fil")));
	//    .local v4, "suppData":Landroid/icu/impl/ICUResourceBundle;
	//    .local v2, "languageMatching":Landroid/icu/impl/ICUResourceBundle;
	written = android::icu::util::LocaleMatcher::getICUSupplementalData({const[class].FS-Param})->findTopLevel(std::make_shared<java::lang::String>(std::make_shared<char[]>("languageMatching")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("written")));
	written->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v5, "written":Landroid/icu/impl/ICUResourceBundle;
	cVar3 = std::make_shared<android::icu::util::LocaleMatcher_S_LanguageMatcherData>();
	android::icu::util::LocaleMatcher::defaultWritten = cVar3;
	iter = written->getIterator();
	//    .local v1, "iter":Landroid/icu/util/UResourceBundleIterator;
label_goto_52:
	if ( !(iter->hasNext()) )  
		goto label_cond_8a;
	item = iter->next();
	item->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "item":Landroid/icu/impl/ICUResourceBundle;
	if ( item->getSize() <= cVar0 )
		goto label_cond_88;
	cVar4 = std::make_shared<java::lang::String>(std::make_shared<char[]>("1"))->equals(item->getString(cVar0));
label_goto_6f:
	android::icu::util::LocaleMatcher::defaultWritten->addDistance(item->getString(0x0), item->getString(0x1), java::lang::Integer::parseInt(item->getString(0x2)), cVar4);
	goto label_goto_52;
	// 233    .line 813
label_cond_88:
	cVar4 = 0x0;
	//    .local v3, "oneway":Z
	goto label_goto_6f;
	// 240    .line 816
	// 241    .end local v0    # "item":Landroid/icu/impl/ICUResourceBundle;
	// 242    .end local v3    # "oneway":Z
label_cond_8a:
	android::icu::util::LocaleMatcher::defaultWritten->freeze();
	return;

}
// .method public constructor <init>(Landroid/icu/util/LocalePriorityList;)V
android::icu::util::LocaleMatcher::LocaleMatcher(std::shared_ptr<android::icu::util::LocalePriorityList> languagePriorityList)
{
	
	//    .param p1, "languagePriorityList"    # Landroid/icu/util/LocalePriorityList;
	android::icu::util::LocaleMatcher::(languagePriorityList, android::icu::util::LocaleMatcher::defaultWritten);
	return;

}
// .method public constructor <init>(Landroid/icu/util/LocalePriorityList;Landroid/icu/util/LocaleMatcher$LanguageMatcherData;)V
android::icu::util::LocaleMatcher::LocaleMatcher(std::shared_ptr<android::icu::util::LocalePriorityList> languagePriorityList,std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> matcherData)
{
	
	//    .param p1, "languagePriorityList"    # Landroid/icu/util/LocalePriorityList;
	//    .param p2, "matcherData"    # Landroid/icu/util/LocaleMatcher$LanguageMatcherData;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 271    .end annotation
	android::icu::util::LocaleMatcher::(languagePriorityList, matcherData, 0x3fe0000000000000L);
	return;

}
// .method public constructor <init>(Landroid/icu/util/LocalePriorityList;Landroid/icu/util/LocaleMatcher$LanguageMatcherData;D)V
android::icu::util::LocaleMatcher::LocaleMatcher(std::shared_ptr<android::icu::util::LocalePriorityList> languagePriorityList,std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> matcherData,double threshold)
{
	
	std::shared_ptr<java::util::LinkedHashSet> cVar0;
	std::shared_ptr<java::util::LinkedHashMap> cVar1;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_LanguageMatcherData> cVar2;
	std::shared_ptr<java::util::Iterator> language_S_iterator;
	std::shared_ptr<android::icu::util::ULocale> language;
	std::shared_ptr<java::util::Iterator> it;
	std::shared_ptr<android::icu::util::ULocale> cVar4;
	
	//    .param p1, "languagePriorityList"    # Landroid/icu/util/LocalePriorityList;
	//    .param p2, "matcherData"    # Landroid/icu/util/LocaleMatcher$LanguageMatcherData;
	//    .param p3, "threshold"    # D
	//    .annotation runtime Ljava/lang/Deprecated;
	// 289    .end annotation
	// 295    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::LinkedHashSet>();
	this->localeToMaxLocaleAndWeight = cVar0;
	cVar1 = std::make_shared<java::util::LinkedHashMap>();
	this->desiredLanguageToPossibleLocalesToMaxLocaleToData = cVar1;
	if ( matcherData )     
		goto label_cond_30;
	cVar2 = android::icu::util::LocaleMatcher::defaultWritten;
label_goto_16:
	this->matcherData = cVar2;
	language_S_iterator = languagePriorityList->iterator();
	//    .local v2, "language$iterator":Ljava/util/Iterator;
label_goto_1c:
	if ( !(language_S_iterator->hasNext()) )  
		goto label_cond_35;
	language = language_S_iterator->next();
	language->checkCast("android::icu::util::ULocale");
	//    .local v1, "language":Landroid/icu/util/ULocale;
	this->add(language, languagePriorityList->getWeight(language));
	goto label_goto_1c;
	// 349    .line 125
	// 350    .end local v1    # "language":Landroid/icu/util/ULocale;
	// 351    .end local v2    # "language$iterator":Ljava/util/Iterator;
label_cond_30:
	cVar2 = matcherData->freeze();
	goto label_goto_16;
	// 359    .line 129
	// 360    .restart local v2    # "language$iterator":Ljava/util/Iterator;
label_cond_35:
	this->processMapping();
	it = languagePriorityList->iterator();
	//    .local v0, "it":Ljava/util/Iterator;, "Ljava/util/Iterator<Landroid/icu/util/ULocale;>;"
	if ( !(it->hasNext()) )  
		goto label_cond_4d;
	cVar4 = it->next();
	cVar4->checkCast("android::icu::util::ULocale");
label_goto_48:
	this->defaultLanguage = cVar4;
	this->threshold = threshold;
	return;
label_cond_4d:
	cVar4 = 0x0;
	goto label_goto_48;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::util::LocaleMatcher::LocaleMatcher(std::shared_ptr<java::lang::String> languagePriorityListString)
{
	
	//    .param p1, "languagePriorityListString"    # Ljava/lang/String;
	android::icu::util::LocaleMatcher::(android::icu::util::LocalePriorityList::add(languagePriorityListString)->build());
	return;

}
// .method private add(Landroid/icu/util/ULocale;Ljava/lang/Double;)V
void android::icu::util::LocaleMatcher::add(std::shared_ptr<android::icu::util::ULocale> language,std::shared_ptr<java::lang::Double> weight)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::impl::Row_S_R3> row;
	
	//    .param p1, "language"    # Landroid/icu/util/ULocale;
	//    .param p2, "weight"    # Ljava/lang/Double;
	cVar0 = this->canonicalize(language);
	row = android::icu::impl::Row::of(cVar0, this->addLikelySubtags(cVar0), weight);
	//    .local v0, "row":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/Double;>;"
	row->freeze();
	this->localeToMaxLocaleAndWeight->add(row);
	return;

}
// .method private addFiltered(Ljava/lang/String;Landroid/icu/impl/Row$R3;)V
void android::icu::util::LocaleMatcher::addFiltered(std::shared_ptr<java::lang::String> desired,std::shared_ptr<android::icu::impl::Row_S_R3<android::icu::util::ULocale,android::icu::util::ULocale,java::lang::Double>> localeToMaxAndWeight)
{
	
	std::shared_ptr<java::util::Set> map;
	std::shared_ptr<java::util::LinkedHashSet> map;
	
	//    .param p1, "desired"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 456        value = {
	// 457            "(",
	// 458            "Ljava/lang/String;",
	// 459            "Landroid/icu/impl/Row$R3",
	// 460            "<",
	// 461            "Landroid/icu/util/ULocale;",
	// 462            "Landroid/icu/util/ULocale;",
	// 463            "Ljava/lang/Double;",
	// 464            ">;)V"
	// 465        }
	// 466    .end annotation
	//    .local p2, "localeToMaxAndWeight":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/Double;>;"
	map = this->desiredLanguageToPossibleLocalesToMaxLocaleToData->get(desired);
	map->checkCast("java::util::Set");
	//    .local v0, "map":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/impl/Row$R3<Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/Double;>;>;"
	if ( map )     
		goto label_cond_14;
	//    .end local v0    # "map":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/impl/Row$R3<Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/Double;>;>;"
	map = std::make_shared<java::util::LinkedHashSet>();
	//    .restart local v0    # "map":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/impl/Row$R3<Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/Double;>;>;"
	this->desiredLanguageToPossibleLocalesToMaxLocaleToData->put(desired, map);
label_cond_14:
	map->add(localeToMaxAndWeight);
	return;

}
// .method private addLikelySubtags(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::LocaleMatcher::addLikelySubtags(std::shared_ptr<android::icu::util::ULocale> languageCode)
{
	
	std::shared_ptr<android::icu::util::ULocale> result;
	std::shared_ptr<java::lang::String> language;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "languageCode"    # Landroid/icu/util/ULocale;
	if ( !(languageCode->equals(android::icu::util::LocaleMatcher::UNKNOWN_LOCALE)) )  
		goto label_cond_b;
	return android::icu::util::LocaleMatcher::UNKNOWN_LOCALE;
	// 521    .line 363
label_cond_b:
	result = android::icu::util::ULocale::addLikelySubtags(languageCode);
	//    .local v2, "result":Landroid/icu/util/ULocale;
	if ( !(result) )  
		goto label_cond_17;
	if ( !(result->equals(languageCode)) )  
		goto label_cond_67;
label_cond_17:
	language = languageCode->getLanguage();
	//    .local v0, "language":Ljava/lang/String;
	script = languageCode->getScript();
	//    .local v3, "script":Ljava/lang/String;
	region = languageCode->getCountry();
	//    .local v1, "region":Ljava/lang/String;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	if ( language->length() )     
		goto label_cond_33;
	//    .end local v0    # "language":Ljava/lang/String;
label_cond_33:
	if ( script->length() )     
		goto label_cond_47;
	//    .end local v3    # "script":Ljava/lang/String;
label_cond_47:
	if ( region->length() )     
		goto label_cond_5b;
	//    .end local v1    # "region":Ljava/lang/String;
label_cond_5b:
	cVar0 = std::make_shared<android::icu::util::ULocale>(cVar1->append(language)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(script)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("_")))->append(region)->toString());
	return cVar0;
	// 633    .line 376
label_cond_67:
	return result;

}
// .method private getBestMatchInternal(Landroid/icu/util/ULocale;Landroid/icu/util/LocaleMatcher$OutputDouble;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::LocaleMatcher::getBestMatchInternal(std::shared_ptr<android::icu::util::ULocale> languageCode,std::shared_ptr<android::icu::util::LocaleMatcher_S_OutputDouble> outputWeight)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<android::icu::util::ULocale> maximized;
	auto bestWeight;
	std::shared_ptr<java::util::Set> searchTable;
	std::shared_ptr<java::util::Iterator> tableKeyValue_S_iterator;
	std::shared_ptr<android::icu::impl::Row_S_R3> tableKeyValue;
	std::shared_ptr<android::icu::util::ULocale> tableKey;
	std::shared_ptr<android::icu::util::ULocale> maxLocale;
	std::shared_ptr<java::lang::Double> matchedWeight;
	double weight;
	double bestWeight;
	
	//    .param p1, "languageCode"    # Landroid/icu/util/ULocale;
	//    .param p2, "outputWeight"    # Landroid/icu/util/LocaleMatcher$OutputDouble;
	cVar0 = this->canonicalize(languageCode);
	maximized = this->addLikelySubtags(cVar0);
	//    .local v10, "maximized":Landroid/icu/util/ULocale;
	bestWeight = 0x0;
	//    .local v4, "bestWeight":D
	//    .local v3, "bestTableMatch":Landroid/icu/util/ULocale;
	//    .local v2, "baseLanguage":Ljava/lang/String;
	searchTable = this->desiredLanguageToPossibleLocalesToMaxLocaleToData->get(maximized->getLanguage());
	searchTable->checkCast("java::util::Set");
	//    .local v11, "searchTable":Ljava/util/Set;, "Ljava/util/Set<Landroid/icu/impl/Row$R3<Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/Double;>;>;"
	if ( !(searchTable) )  
		goto label_cond_5b;
	tableKeyValue_S_iterator = searchTable->iterator();
	//    .end local v3    # "bestTableMatch":Landroid/icu/util/ULocale;
	//    .local v14, "tableKeyValue$iterator":Ljava/util/Iterator;
label_cond_1f:
	if ( !(tableKeyValue_S_iterator->hasNext()) )  
		goto label_cond_5b;
	tableKeyValue = tableKeyValue_S_iterator->next();
	tableKeyValue->checkCast("android::icu::impl::Row_S_R3");
	//    .local v13, "tableKeyValue":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/Double;>;"
	tableKey = tableKeyValue->get0();
	tableKey->checkCast("android::icu::util::ULocale");
	//    .local v12, "tableKey":Landroid/icu/util/ULocale;
	maxLocale = tableKeyValue->get1();
	maxLocale->checkCast("android::icu::util::ULocale");
	//    .local v9, "maxLocale":Landroid/icu/util/ULocale;
	matchedWeight = tableKeyValue->get2();
	matchedWeight->checkCast("java::lang::Double");
	//    .local v8, "matchedWeight":Ljava/lang/Double;
	//    .local v6, "match":D
	weight = (this->match(cVar0, maximized, tableKey, maxLocale) *  matchedWeight->doubleValue());
	//    .local v16, "weight":D
	if ( (weight < bestWeight) <= 0 )
		goto label_cond_1f;
	bestWeight = weight;
	//    .local v3, "bestTableMatch":Landroid/icu/util/ULocale;
	if ( (weight < 0x3feff7ced916872bL) <= 0 )
		goto label_cond_1f;
	//    .end local v3    # "bestTableMatch":Landroid/icu/util/ULocale;
	//    .end local v6    # "match":D
	//    .end local v8    # "matchedWeight":Ljava/lang/Double;
	//    .end local v9    # "maxLocale":Landroid/icu/util/ULocale;
	//    .end local v12    # "tableKey":Landroid/icu/util/ULocale;
	//    .end local v13    # "tableKeyValue":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/Double;>;"
	//    .end local v14    # "tableKeyValue$iterator":Ljava/util/Iterator;
	//    .end local v16    # "weight":D
label_cond_5b:
	if ( (bestWeight > this->threshold) >= 0 )
		goto label_cond_69;
label_cond_69:
	if ( !(outputWeight) )  
		goto label_cond_6f;
	outputWeight->value = bestWeight;
label_cond_6f:
	return 0x0;

}
// .method public static getICUSupplementalData()Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::util::LocaleMatcher::getICUSupplementalData()
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> suppData;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 808    .end annotation
	suppData = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("supplementalData")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER);
	suppData->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "suppData":Landroid/icu/impl/ICUResourceBundle;
	return suppData;

}
// .method public static match(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)D
double android::icu::util::LocaleMatcher::match(std::shared_ptr<android::icu::util::ULocale> a,std::shared_ptr<android::icu::util::ULocale> b)
{
	
	std::shared_ptr<android::icu::util::LocaleMatcher> matcher;
	
	//    .param p0, "a"    # Landroid/icu/util/ULocale;
	//    .param p1, "b"    # Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 837    .end annotation
	matcher = std::make_shared<android::icu::util::LocaleMatcher>(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	//    .local v0, "matcher":Landroid/icu/util/LocaleMatcher;
	return matcher->match(a, matcher->addLikelySubtags(a), b, matcher->addLikelySubtags(b));

}
// .method private processMapping()V
void android::icu::util::LocaleMatcher::processMapping()
{
	
	std::shared_ptr<java::util::Iterator> desiredToMatchingLanguages_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> desiredToMatchingLanguages;
	std::shared_ptr<java::lang::String> desired;
	std::shared_ptr<java::util::Set> supported;
	std::shared_ptr<java::util::Iterator> localeToMaxAndWeight_S_iterator;
	std::shared_ptr<android::icu::impl::Row_S_R3> localeToMaxAndWeight;
	std::shared_ptr<android::icu::util::ULocale> key;
	
	desiredToMatchingLanguages_S_iterator = this->matcherData->matchingLanguages()->keyValuesSet()->iterator();
	//    .local v2, "desiredToMatchingLanguages$iterator":Ljava/util/Iterator;
label_cond_e:
	if ( !(desiredToMatchingLanguages_S_iterator->hasNext()) )  
		goto label_cond_4c;
	desiredToMatchingLanguages = desiredToMatchingLanguages_S_iterator->next();
	desiredToMatchingLanguages->checkCast("java::util::Map_S_Entry");
	//    .local v1, "desiredToMatchingLanguages":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	desired = desiredToMatchingLanguages->getKey();
	desired->checkCast("java::lang::String");
	//    .local v0, "desired":Ljava/lang/String;
	supported = desiredToMatchingLanguages->getValue();
	supported->checkCast("java::util::Set");
	//    .local v7, "supported":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	localeToMaxAndWeight_S_iterator = this->localeToMaxLocaleAndWeight->iterator();
	//    .local v6, "localeToMaxAndWeight$iterator":Ljava/util/Iterator;
label_cond_2c:
label_goto_2c:
	if ( !(localeToMaxAndWeight_S_iterator->hasNext()) )  
		goto label_cond_e;
	localeToMaxAndWeight = localeToMaxAndWeight_S_iterator->next();
	localeToMaxAndWeight->checkCast("android::icu::impl::Row_S_R3");
	//    .local v5, "localeToMaxAndWeight":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/Double;>;"
	key = localeToMaxAndWeight->get0();
	key->checkCast("android::icu::util::ULocale");
	//    .local v3, "key":Landroid/icu/util/ULocale;
	//    .local v4, "lang":Ljava/lang/String;
	if ( !(supported->contains(key->getLanguage())) )  
		goto label_cond_2c;
	this->addFiltered(desired, localeToMaxAndWeight);
	goto label_goto_2c;
	// 963    .line 320
	// 964    .end local v0    # "desired":Ljava/lang/String;
	// 965    .end local v1    # "desiredToMatchingLanguages":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/util/Set<Ljava/lang/String;>;>;"
	// 966    .end local v3    # "key":Landroid/icu/util/ULocale;
	// 967    .end local v4    # "lang":Ljava/lang/String;
	// 968    .end local v5    # "localeToMaxAndWeight":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/Double;>;"
	// 969    .end local v6    # "localeToMaxAndWeight$iterator":Ljava/util/Iterator;
	// 970    .end local v7    # "supported":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_4c:
	localeToMaxAndWeight_S_iterator = this->localeToMaxLocaleAndWeight->iterator();
	//    .restart local v6    # "localeToMaxAndWeight$iterator":Ljava/util/Iterator;
label_goto_52:
	if ( !(localeToMaxAndWeight_S_iterator->hasNext()) )  
		goto label_cond_6c;
	localeToMaxAndWeight = localeToMaxAndWeight_S_iterator->next();
	localeToMaxAndWeight->checkCast("android::icu::impl::Row_S_R3");
	//    .restart local v5    # "localeToMaxAndWeight":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/Double;>;"
	key = localeToMaxAndWeight->get0();
	key->checkCast("android::icu::util::ULocale");
	//    .restart local v3    # "key":Landroid/icu/util/ULocale;
	//    .restart local v4    # "lang":Ljava/lang/String;
	this->addFiltered(key->getLanguage(), localeToMaxAndWeight);
	goto label_goto_52;
	// 1012    .line 325
	// 1013    .end local v3    # "key":Landroid/icu/util/ULocale;
	// 1014    .end local v4    # "lang":Ljava/lang/String;
	// 1015    .end local v5    # "localeToMaxAndWeight":Landroid/icu/impl/Row$R3;, "Landroid/icu/impl/Row$R3<Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Ljava/lang/Double;>;"
label_cond_6c:
	return;

}
// .method public canonicalize(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::LocaleMatcher::canonicalize(std::shared_ptr<android::icu::util::ULocale> ulocale)
{
	
	std::shared_ptr<java::lang::Object> lang;
	std::shared_ptr<java::lang::String> lang2;
	std::shared_ptr<java::lang::Object> script;
	std::shared_ptr<java::lang::String> script2;
	std::shared_ptr<java::lang::Object> region;
	std::shared_ptr<java::lang::String> region2;
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	std::shared_ptr<java::lang::String> region;
	std::shared_ptr<java::lang::String> script;
	std::shared_ptr<java::lang::String> lang;
	
	//    .param p1, "ulocale"    # Landroid/icu/util/ULocale;
	lang = ulocale->getLanguage();
	//    .local v0, "lang":Ljava/lang/String;
	lang2 = android::icu::util::LocaleMatcher::canonicalMap->get(lang);
	lang2->checkCast("java::lang::String");
	//    .local v1, "lang2":Ljava/lang/String;
	script = ulocale->getScript();
	//    .local v4, "script":Ljava/lang/String;
	script2 = android::icu::util::LocaleMatcher::canonicalMap->get(script);
	script2->checkCast("java::lang::String");
	//    .local v5, "script2":Ljava/lang/String;
	region = ulocale->getCountry();
	//    .local v2, "region":Ljava/lang/String;
	region2 = android::icu::util::LocaleMatcher::canonicalMap->get(region);
	region2->checkCast("java::lang::String");
	//    .local v3, "region2":Ljava/lang/String;
	if ( lang2 )     
		goto label_cond_28;
	if ( !(script2) )  
		goto label_cond_34;
label_cond_28:
	if ( lang2 )     
		goto label_cond_37;
	//    .end local v0    # "lang":Ljava/lang/String;
label_goto_2c:
	if ( script2 )     
		goto label_cond_39;
	//    .end local v4    # "script":Ljava/lang/String;
label_goto_2e:
	if ( region2 )     
		goto label_cond_3b;
	//    .end local v2    # "region":Ljava/lang/String;
label_goto_30:
	cVar0 = std::make_shared<android::icu::util::ULocale>(lang, script, region);
	return cVar0;
	// 1104    .line 167
	// 1105    .restart local v0    # "lang":Ljava/lang/String;
	// 1106    .restart local v2    # "region":Ljava/lang/String;
	// 1107    .restart local v4    # "script":Ljava/lang/String;
label_cond_34:
	if ( region2 )     
		goto label_cond_28;
	return ulocale;
label_cond_37:
	lang = lang2;
	goto label_goto_2c;
	// 1120    .end local v0    # "lang":Ljava/lang/String;
label_cond_39:
	script = script2;
	goto label_goto_2e;
	// 1127    .end local v4    # "script":Ljava/lang/String;
label_cond_3b:
	region = region2;
	goto label_goto_30;

}
// .method public getBestMatch(Landroid/icu/util/LocalePriorityList;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::LocaleMatcher::getBestMatch(std::shared_ptr<android::icu::util::LocalePriorityList> languageList)
{
	
	auto bestWeight;
	auto penalty;
	std::shared_ptr<android::icu::util::LocaleMatcher_S_OutputDouble> matchWeight;
	std::shared_ptr<java::util::Iterator> language_S_iterator;
	std::shared_ptr<android::icu::util::ULocale> language;
	double weight;
	double penalty;
	
	//    .param p1, "languageList"    # Landroid/icu/util/LocalePriorityList;
	bestWeight = 0x0;
	//    .local v4, "bestWeight":D
	//    .local v2, "bestTableMatch":Landroid/icu/util/ULocale;
	penalty = 0x0;
	//    .local v10, "penalty":D
	matchWeight = std::make_shared<android::icu::util::LocaleMatcher_S_OutputDouble>(0x0);
	//    .local v8, "matchWeight":Landroid/icu/util/LocaleMatcher$OutputDouble;
	language_S_iterator = languageList->iterator();
	//    .end local v2    # "bestTableMatch":Landroid/icu/util/ULocale;
	//    .local v6, "language$iterator":Ljava/util/Iterator;
label_goto_f:
	if ( !(language_S_iterator->hasNext()) )  
		goto label_cond_3e;
	language = language_S_iterator->next();
	language->checkCast("android::icu::util::ULocale");
	//    .local v3, "language":Landroid/icu/util/ULocale;
	//    .local v7, "matchLocale":Landroid/icu/util/ULocale;
	weight = ((matchWeight->value *  languageList->getWeight(language)->doubleValue()) -  penalty);
	//    .local v12, "weight":D
	if ( (weight < bestWeight) <= 0 )
		goto label_cond_37;
	bestWeight = weight;
	this->getBestMatchInternal(language, matchWeight);
label_cond_37:
	penalty = ( penalty + 0x3fb1eb8549ab6fb0L);
	goto label_goto_f;
	// 1226    .line 197
	// 1227    .end local v3    # "language":Landroid/icu/util/ULocale;
	// 1228    .end local v7    # "matchLocale":Landroid/icu/util/ULocale;
	// 1229    .end local v12    # "weight":D
label_cond_3e:
	if ( (bestWeight > this->threshold) >= 0 )
		goto label_cond_4a;
label_cond_4a:
	return 0x0;

}
// .method public getBestMatch(Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::LocaleMatcher::getBestMatch(std::shared_ptr<android::icu::util::ULocale> ulocale)
{
	
	//    .param p1, "ulocale"    # Landroid/icu/util/ULocale;
	return this->getBestMatchInternal(ulocale, 0x0);

}
// .method public getBestMatch(Ljava/lang/String;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::LocaleMatcher::getBestMatch(std::shared_ptr<java::lang::String> languageList)
{
	
	//    .param p1, "languageList"    # Ljava/lang/String;
	return this->getBestMatch(android::icu::util::LocalePriorityList::add(languageList)->build());

}
// .method public varargs getBestMatch([Landroid/icu/util/ULocale;)Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::util::LocaleMatcher::getBestMatch(std::shared_ptr<std::vector<android::icu::util::ULocale>> ulocales)
{
	
	//    .param p1, "ulocales"    # [Landroid/icu/util/ULocale;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1289    .end annotation
	return this->getBestMatch(android::icu::util::LocalePriorityList::add(ulocales)->build());

}
// .method public match(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)D
double android::icu::util::LocaleMatcher::match(std::shared_ptr<android::icu::util::ULocale> desired,std::shared_ptr<android::icu::util::ULocale> desiredMax,std::shared_ptr<android::icu::util::ULocale> supported,std::shared_ptr<android::icu::util::ULocale> supportedMax)
{
	
	//    .param p1, "desired"    # Landroid/icu/util/ULocale;
	//    .param p2, "desiredMax"    # Landroid/icu/util/ULocale;
	//    .param p3, "supported"    # Landroid/icu/util/ULocale;
	//    .param p4, "supportedMax"    # Landroid/icu/util/ULocale;
	return this->matcherData->match(desired, desiredMax, supported, supportedMax);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::LocaleMatcher::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{")))->append(this->defaultLanguage)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", ")))->append(this->localeToMaxLocaleAndWeight)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")))->toString();

}


