// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.TextTrieMap.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_MZ2TZsCache.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_MZMapEntry.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_NameSearchHandler.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_TZ2MZsCache.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZNames.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZNamesLoader.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZoneStringsLoader.h"
#include "android.icu.impl.TimeZoneNamesImpl.h"
#include "android.icu.impl.ZoneMeta.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.util.TimeZone_S_SystemTimeZoneType.h"
#include "android.icu.util.TimeZone.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.EnumSet.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.concurrent.ConcurrentHashMap.h"
#include "java.util.regex.Matcher.h"
#include "java.util.regex.Pattern.h"

static android::icu::impl::TimeZoneNamesImpl::LOC_EXCLUSION_PATTERN;
static android::icu::impl::TimeZoneNamesImpl::METAZONE_IDS = nullptr;
static android::icu::impl::TimeZoneNamesImpl::MZ_PREFIX = std::make_shared<java::lang::String>("meta:");
static android::icu::impl::TimeZoneNamesImpl::MZ_TO_TZS_CACHE;
static android::icu::impl::TimeZoneNamesImpl::TZ_TO_MZS_CACHE;
static android::icu::impl::TimeZoneNamesImpl::ZONE_STRINGS_BUNDLE = std::make_shared<java::lang::String>("zoneStrings");
static android::icu::impl::TimeZoneNamesImpl::serialVersionUID = -0x1e40420e38b84b80L;
// .method static synthetic -get0(Landroid/icu/impl/TimeZoneNamesImpl;)Ljava/util/concurrent/ConcurrentHashMap;
std::shared_ptr<java::util::concurrent::ConcurrentHashMap> android::icu::impl::TimeZoneNamesImpl::_get0(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/TimeZoneNamesImpl;
	return _this->_mzNamesMap;

}
// .method static synthetic -get1(Landroid/icu/impl/TimeZoneNamesImpl;)Ljava/util/concurrent/ConcurrentHashMap;
std::shared_ptr<java::util::concurrent::ConcurrentHashMap> android::icu::impl::TimeZoneNamesImpl::_get1(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/TimeZoneNamesImpl;
	return _this->_tzNamesMap;

}
// .method static synthetic -get2(Landroid/icu/impl/TimeZoneNamesImpl;)Landroid/icu/impl/ICUResourceBundle;
std::shared_ptr<android::icu::impl::ICUResourceBundle> android::icu::impl::TimeZoneNamesImpl::_get2(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/TimeZoneNamesImpl;
	return _this->_zoneStrings;

}
// .method static constructor <clinit>()V
void android::icu::impl::TimeZoneNamesImpl::static_cinit()
{
	
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_TZ2MZsCache> cVar0;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_TZ2MZsCache> cVar1;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_MZ2TZsCache> cVar2;
	
	cVar0 = 0x0;
	cVar1 = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_TZ2MZsCache>(cVar0);
	android::icu::impl::TimeZoneNamesImpl::TZ_TO_MZS_CACHE = cVar1;
	cVar2 = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_MZ2TZsCache>(cVar0);
	android::icu::impl::TimeZoneNamesImpl::MZ_TO_TZS_CACHE = cVar2;
	android::icu::impl::TimeZoneNamesImpl::LOC_EXCLUSION_PATTERN = java::util::regex::Pattern::compile(std::make_shared<java::lang::String>(std::make_shared<char[]>("Etc/.*|SystemV/.*|.*/Riyadh8[7-9]")));
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::impl::TimeZoneNamesImpl::TimeZoneNamesImpl(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	// 159    invoke-direct {p0}, Landroid/icu/text/TimeZoneNames;-><init>()V
	this->initialize(locale);
	return;

}
// .method static _getAvailableMetaZoneIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::TimeZoneNamesImpl::_getAvailableMetaZoneIDs()
{
	
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 171        value = {
	// 172            "()",
	// 173            "Ljava/util/Set",
	// 174            "<",
	// 175            "Ljava/lang/String;",
	// 176            ">;"
	// 177        }
	// 178    .end annotation
	if ( android::icu::impl::TimeZoneNamesImpl::METAZONE_IDS )     
		goto label_cond_27;
	cVar0 = android::icu::impl::TimeZoneNamesImpl();
	cVar0->monitor_enter();
	try {
	//label_try_start_7:
	if ( android::icu::impl::TimeZoneNamesImpl::METAZONE_IDS )     
		goto label_cond_26;
	//    .local v0, "bundle":Landroid/icu/util/UResourceBundle;
	//    .local v2, "mapTimezones":Landroid/icu/util/UResourceBundle;
	//    .local v1, "keys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	android::icu::impl::TimeZoneNamesImpl::METAZONE_IDS = java::util::Collections::unmodifiableSet(android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("metaZones")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("mapTimezones")))->keySet());
	//label_try_end_26:
	}
	catch (...){
		goto label_catchall_2a;
	}
	//    .catchall {:try_start_7 .. :try_end_26} :catchall_2a
label_cond_26:
	cVar0->monitor_exit();
label_cond_27:
	return android::icu::impl::TimeZoneNamesImpl::METAZONE_IDS;
	// 239    .line 80
	// 240    .end local v1    # "keys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 241    .end local v2    # "mapTimezones":Landroid/icu/util/UResourceBundle;
label_catchall_2a:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method static _getAvailableMetaZoneIDs(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::TimeZoneNamesImpl::_getAvailableMetaZoneIDs(std::shared_ptr<java::lang::String> tzID)
{
	
	std::shared_ptr<java::util::List> maps;
	std::shared_ptr<java::util::HashSet> mzIDs;
	std::shared_ptr<java::util::Iterator> map_S_iterator;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry> map;
	
	//    .param p0, "tzID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 254        value = {
	// 255            "(",
	// 256            "Ljava/lang/String;",
	// 257            ")",
	// 258            "Ljava/util/Set",
	// 259            "<",
	// 260            "Ljava/lang/String;",
	// 261            ">;"
	// 262        }
	// 263    .end annotation
	if ( !(tzID) )  
		goto label_cond_8;
	if ( tzID->length() )     
		goto label_cond_d;
label_cond_8:
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 283    .line 104
label_cond_d:
	maps = android::icu::impl::TimeZoneNamesImpl::TZ_TO_MZS_CACHE->getInstance(tzID, tzID);
	maps->checkCast("java::util::List");
	//    .local v2, "maps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
	if ( !(maps->isEmpty()) )  
		goto label_cond_20;
	return java::util::Collections::emptySet({const[class].FS-Param});
	// 308    .line 108
label_cond_20:
	mzIDs = std::make_shared<java::util::HashSet>(maps->size());
	//    .local v3, "mzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	map_S_iterator = maps->iterator();
	//    .local v1, "map$iterator":Ljava/util/Iterator;
label_goto_2d:
	if ( !(map_S_iterator->hasNext()) )  
		goto label_cond_41;
	map = map_S_iterator->next();
	map->checkCast("android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry");
	//    .local v0, "map":Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;
	mzIDs->add(map->mzID());
	goto label_goto_2d;
	// 348    .line 113
	// 349    .end local v0    # "map":Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;
label_cond_41:
	return java::util::Collections::unmodifiableSet(mzIDs);

}
// .method static _getMetaZoneID(Ljava/lang/String;J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl::_getMetaZoneID(std::shared_ptr<java::lang::String> tzID,long long date)
{
	
	std::shared_ptr<java::util::List> maps;
	std::shared_ptr<java::util::Iterator> map_S_iterator;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry> map;
	
	//    .param p0, "tzID"    # Ljava/lang/String;
	//    .param p1, "date"    # J
	if ( !(tzID) )  
		goto label_cond_9;
	if ( tzID->length() )     
		goto label_cond_a;
label_cond_9:
	return 0x0;
	// 379    .line 128
label_cond_a:
	//    .local v3, "mzID":Ljava/lang/String;
	maps = android::icu::impl::TimeZoneNamesImpl::TZ_TO_MZS_CACHE->getInstance(tzID, tzID);
	maps->checkCast("java::util::List");
	//    .local v2, "maps":Ljava/util/List;, "Ljava/util/List<Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;>;"
	map_S_iterator = maps->iterator();
	//    .local v1, "map$iterator":Ljava/util/Iterator;
label_cond_17:
	if ( !(map_S_iterator->hasNext()) )  
		goto label_cond_37;
	map = map_S_iterator->next();
	map->checkCast("android::icu::impl::TimeZoneNamesImpl_S_MZMapEntry");
	//    .local v0, "map":Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;
	if ( (date > map->from()) < 0 ) 
		goto label_cond_17;
	if ( (date > map->to()) >= 0 )
		goto label_cond_17;
	//    .end local v0    # "map":Landroid/icu/impl/TimeZoneNamesImpl$MZMapEntry;
	//    .end local v3    # "mzID":Ljava/lang/String;
label_cond_37:
	return 0x0;

}
// .method static _getReferenceZoneID(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl::_getReferenceZoneID(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<java::lang::String> region)
{
	
	std::shared_ptr<java::util::Map> regionTzMap;
	std::shared_ptr<java::lang::String> refID;
	
	//    .param p0, "mzID"    # Ljava/lang/String;
	//    .param p1, "region"    # Ljava/lang/String;
	if ( !(mzID) )  
		goto label_cond_9;
	if ( mzID->length() )     
		goto label_cond_a;
label_cond_9:
	return 0x0;
	// 464    .line 151
label_cond_a:
	//    .local v0, "refID":Ljava/lang/String;
	regionTzMap = android::icu::impl::TimeZoneNamesImpl::MZ_TO_TZS_CACHE->getInstance(mzID, mzID);
	regionTzMap->checkCast("java::util::Map");
	//    .local v1, "regionTzMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
	if ( regionTzMap->isEmpty() )     
		goto label_cond_2a;
	refID = regionTzMap->get(region);
	//    .end local v0    # "refID":Ljava/lang/String;
	refID->checkCast("java::lang::String");
	//    .local v0, "refID":Ljava/lang/String;
	if ( refID )     
		goto label_cond_2a;
	refID = regionTzMap->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("001")));
	//    .end local v0    # "refID":Ljava/lang/String;
	refID->checkCast("java::lang::String");
label_cond_2a:
	return 0x0;

}
// .method private addAllNamesIntoTrie()V
void android::icu::impl::TimeZoneNamesImpl::addAllNamesIntoTrie()
{
	
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> cVar2;
	std::shared_ptr<java::lang::String> cVar3;
	
	entry_S_iterator = this->_tzNamesMap->entrySet()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
label_goto_a:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_28;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Landroid/icu/impl/TimeZoneNamesImpl$ZNames;>;"
	cVar0 = entry->getValue();
	cVar0->checkCast("android::icu::impl::TimeZoneNamesImpl_S_ZNames");
	cVar1 = entry->getKey();
	cVar1->checkCast("java::lang::String");
	cVar0->addAsTimeZoneIntoTrie(cVar1, this->_namesTrie);
	goto label_goto_a;
	// 562    .line 300
	// 563    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Landroid/icu/impl/TimeZoneNamesImpl$ZNames;>;"
label_cond_28:
	entry_S_iterator = this->_mzNamesMap->entrySet()->iterator();
label_goto_32:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_50;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .restart local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Landroid/icu/impl/TimeZoneNamesImpl$ZNames;>;"
	cVar2 = entry->getValue();
	cVar2->checkCast("android::icu::impl::TimeZoneNamesImpl_S_ZNames");
	cVar3 = entry->getKey();
	cVar3->checkCast("java::lang::String");
	cVar2->addAsMetaZoneIntoTrie(cVar3, this->_namesTrie);
	goto label_goto_32;
	// 608    .line 303
	// 609    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Landroid/icu/impl/TimeZoneNamesImpl$ZNames;>;"
label_cond_50:
	return;

}
// .method private doFind(Landroid/icu/impl/TimeZoneNamesImpl$NameSearchHandler;Ljava/lang/CharSequence;I)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> android::icu::impl::TimeZoneNamesImpl::doFind(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler> handler,std::shared_ptr<java::lang::CharSequence> text,int start)
{
	
	//    .param p1, "handler"    # Landroid/icu/impl/TimeZoneNamesImpl$NameSearchHandler;
	//    .param p2, "text"    # Ljava/lang/CharSequence;
	//    .param p3, "start"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 620        value = {
	// 621            "(",
	// 622            "Landroid/icu/impl/TimeZoneNamesImpl$NameSearchHandler;",
	// 623            "Ljava/lang/CharSequence;",
	// 624            "I)",
	// 625            "Ljava/util/Collection",
	// 626            "<",
	// 627            "Landroid/icu/text/TimeZoneNames$MatchInfo;",
	// 628            ">;"
	// 629        }
	// 630    .end annotation
	handler->resetResults();
	this->_namesTrie->find(text, start, handler);
	if ( handler->getMaxMatchLen() == (text->length() -  start) )
		goto label_cond_17;
	if ( !(this->_namesTrieFullyLoaded) )  
		goto label_cond_1c;
label_cond_17:
	return handler->getMatches();
	// 666    .line 253
label_cond_1c:
	return 0x0;

}
// .method public static getDefaultExemplarLocationName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl::getDefaultExemplarLocationName(std::shared_ptr<java::lang::String> tzID)
{
	
	int sep;
	
	//    .param p0, "tzID"    # Ljava/lang/String;
	if ( !(tzID) )  
		goto label_cond_9;
	if ( tzID->length() )     
		goto label_cond_a;
label_cond_9:
	return 0x0;
	// 693    .line 997
label_cond_a:
	if ( android::icu::impl::TimeZoneNamesImpl::LOC_EXCLUSION_PATTERN->matcher(tzID)->matches() )     
		goto label_cond_9;
	//    .local v0, "location":Ljava/lang/String;
	sep = tzID->lastIndexOf(0x2f);
	//    .local v1, "sep":I
	if ( sep <= 0 )
		goto label_cond_35;
	if ( ( sep + 0x1) >= tzID->length() )
		goto label_cond_35;
	//    .end local v0    # "location":Ljava/lang/String;
label_cond_35:
	return 0x0;

}
// .method private initialize(Landroid/icu/util/ULocale;)V
void android::icu::impl::TimeZoneNamesImpl::initialize(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> bundle;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar1;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar2;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar3;
	std::shared_ptr<android::icu::impl::TextTrieMap> cVar4;
	std::shared_ptr<java::lang::String> tzCanonicalID;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	bundle = android::icu::impl::ICUResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/zone")), locale);
	bundle->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v0, "bundle":Landroid/icu/impl/ICUResourceBundle;
	cVar1 = bundle->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneStrings")));
	cVar1->checkCast("android::icu::impl::ICUResourceBundle");
	this->_zoneStrings = cVar1;
	cVar2 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	this->_tzNamesMap = cVar2;
	cVar3 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	this->_mzNamesMap = cVar3;
	this->_namesFullyLoaded = cVar0;
	cVar4 = std::make_shared<android::icu::impl::TextTrieMap>(0x1);
	this->_namesTrie = cVar4;
	this->_namesTrieFullyLoaded = cVar0;
	//    .local v1, "tz":Landroid/icu/util/TimeZone;
	tzCanonicalID = android::icu::impl::ZoneMeta::getCanonicalCLDRID(android::icu::util::TimeZone::getDefault({const[class].FS-Param}));
	//    .local v2, "tzCanonicalID":Ljava/lang/String;
	if ( !(tzCanonicalID) )  
		goto label_cond_3c;
	this->loadStrings(tzCanonicalID);
label_cond_3c:
	return;

}
// .method private internalLoadAllDisplayNames()V
void android::icu::impl::TimeZoneNamesImpl::internalLoadAllDisplayNames()
{
	
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader> cVar0;
	
	if ( this->_namesFullyLoaded )     
		goto label_cond_10;
	this->_namesFullyLoaded = 0x1;
	cVar0 = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader>(this, 0x0);
	cVar0->load();
label_cond_10:
	return;

}
// .method private declared-synchronized loadMetaZoneNames(Ljava/lang/String;)Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> android::icu::impl::TimeZoneNamesImpl::loadMetaZoneNames(std::shared_ptr<java::lang::String> mzID)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> mznames;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> loader;
	
	//    .param p1, "mzID"    # Ljava/lang/String;
	this->monitor_enter();
	try {
	//label_try_start_1:
	mznames = this->_mzNamesMap->get(mzID);
	mznames->checkCast("android::icu::impl::TimeZoneNamesImpl_S_ZNames");
	//    .local v1, "mznames":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
	if ( mznames )     
		goto label_cond_20;
	loader = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader>(0x0);
	//    .local v0, "loader":Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
	loader->loadMetaZone(this->_zoneStrings, mzID);
	//label_try_end_1f:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_1 .. :try_end_1f} :catchall_22
	//    .end local v0    # "loader":Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
label_cond_20:
	this->monitor_exit();
	return mznames;
	// 914    .end local v1    # "mznames":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
label_catchall_22:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private declared-synchronized loadStrings(Ljava/lang/String;)V
void android::icu::impl::TimeZoneNamesImpl::loadStrings(std::shared_ptr<java::lang::String> tzCanonicalID)
{
	
	std::shared_ptr<java::util::Iterator> mzID_S_iterator;
	std::shared_ptr<java::lang::String> mzID;
	
	//    .param p1, "tzCanonicalID"    # Ljava/lang/String;
	this->monitor_enter();
	if ( !(tzCanonicalID) )  
		goto label_cond_9;
	try {
	//label_try_start_3:
	//label_try_end_6:
	}
	catch (...){
		goto label_catchall_26;
	}
	//    .catchall {:try_start_3 .. :try_end_6} :catchall_26
	if ( tzCanonicalID->length() )     
		goto label_cond_b;
label_cond_9:
	this->monitor_exit();
	return;
	// 948    .line 451
label_cond_b:
	try {
	//label_try_start_b:
	this->loadTimeZoneNames(tzCanonicalID);
	//    .local v2, "mzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	mzID_S_iterator = this->getAvailableMetaZoneIDs(tzCanonicalID)->iterator();
	//    .local v1, "mzID$iterator":Ljava/util/Iterator;
label_goto_16:
	if ( !(mzID_S_iterator->hasNext()) )  
		goto label_cond_29;
	mzID = mzID_S_iterator->next();
	mzID->checkCast("java::lang::String");
	//    .local v0, "mzID":Ljava/lang/String;
	this->loadMetaZoneNames(mzID);
	//label_try_end_25:
	}
	catch (...){
		goto label_catchall_26;
	}
	//    .catchall {:try_start_b .. :try_end_25} :catchall_26
	goto label_goto_16;
	// 986    .end local v0    # "mzID":Ljava/lang/String;
	// 987    .end local v1    # "mzID$iterator":Ljava/util/Iterator;
	// 988    .end local v2    # "mzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_catchall_26:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 996    .restart local v1    # "mzID$iterator":Ljava/util/Iterator;
	// 997    .restart local v2    # "mzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_29:
	this->monitor_exit();
	return;

}
// .method private declared-synchronized loadTimeZoneNames(Ljava/lang/String;)Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> android::icu::impl::TimeZoneNamesImpl::loadTimeZoneNames(std::shared_ptr<java::lang::String> tzID)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> tznames;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> loader;
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	this->monitor_enter();
	try {
	//label_try_start_1:
	tznames = this->_tzNamesMap->get(tzID);
	tznames->checkCast("android::icu::impl::TimeZoneNamesImpl_S_ZNames");
	//    .local v1, "tznames":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
	if ( tznames )     
		goto label_cond_20;
	loader = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader>(0x0);
	//    .local v0, "loader":Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
	loader->loadTimeZone(this->_zoneStrings, tzID);
	//label_try_end_1f:
	}
	catch (...){
		goto label_catchall_22;
	}
	//    .catchall {:try_start_1 .. :try_end_1f} :catchall_22
	//    .end local v0    # "loader":Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
label_cond_20:
	this->monitor_exit();
	return tznames;
	// 1059    .end local v1    # "tznames":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
label_catchall_22:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method private readObject(Ljava/io/ObjectInputStream;)V
void android::icu::impl::TimeZoneNamesImpl::readObject(std::shared_ptr<java::io::ObjectInputStream> in)
{
	
	std::shared_ptr<android::icu::util::ULocale> locale;
	
	//    .param p1, "in"    # Ljava/io/ObjectInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1072        value = {
	// 1073            Ljava/io/IOException;,
	// 1074            Ljava/lang/ClassNotFoundException;
	// 1075        }
	// 1076    .end annotation
	locale = in->readObject();
	locale->checkCast("android::icu::util::ULocale");
	//    .local v0, "locale":Landroid/icu/util/ULocale;
	this->initialize(locale);
	return;

}
// .method private writeObject(Ljava/io/ObjectOutputStream;)V
void android::icu::impl::TimeZoneNamesImpl::writeObject(std::shared_ptr<java::io::ObjectOutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/ObjectOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1098        value = {
	// 1099            Ljava/io/IOException;
	// 1100        }
	// 1101    .end annotation
	//    .local v0, "locale":Landroid/icu/util/ULocale;
	out->writeObject(this->_zoneStrings->getULocale());
	return;

}
// .method public declared-synchronized find(Ljava/lang/CharSequence;ILjava/util/EnumSet;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> android::icu::impl::TimeZoneNamesImpl::find(std::shared_ptr<java::lang::CharSequence> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> nameTypes)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler> handler;
	std::shared_ptr<java::util::Collection> matches;
	std::shared_ptr<java::util::Iterator> tzID_S_iterator;
	std::shared_ptr<java::lang::String> tzID;
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 1126        value = {
	// 1127            "(",
	// 1128            "Ljava/lang/CharSequence;",
	// 1129            "I",
	// 1130            "Ljava/util/EnumSet",
	// 1131            "<",
	// 1132            "Landroid/icu/text/TimeZoneNames$NameType;",
	// 1133            ">;)",
	// 1134            "Ljava/util/Collection",
	// 1135            "<",
	// 1136            "Landroid/icu/text/TimeZoneNames$MatchInfo;",
	// 1137            ">;"
	// 1138        }
	// 1139    .end annotation
	//    .local p3, "nameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
	this->monitor_enter();
	if ( !(text) )  
		goto label_cond_9;
	try {
	//label_try_start_3:
	if ( text->length() )     
		goto label_cond_15;
label_cond_9:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("bad input text or range")));
	// throw
	throw cVar0;
	// 1164    :try_end_12
	// 1165    .catchall {:try_start_3 .. :try_end_12} :catchall_12
label_catchall_12:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 1174    .line 203
label_cond_15:
	if ( start < 0 ) 
		goto label_cond_9;
	try {
	//label_try_start_17:
	if ( start >= text->length() )
		goto label_cond_9;
	handler = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_NameSearchHandler>(nameTypes);
	//    .local v0, "handler":Landroid/icu/impl/TimeZoneNamesImpl$NameSearchHandler;
	//label_try_end_25:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_17 .. :try_end_25} :catchall_12
	matches = this->doFind(handler, text, start);
	//    .local v1, "matches":Ljava/util/Collection;, "Ljava/util/Collection<Landroid/icu/text/TimeZoneNames$MatchInfo;>;"
	if ( !(matches) )  
		goto label_cond_2a;
	this->monitor_exit();
	return matches;
	// 1207    .line 219
label_cond_2a:
	try {
	//label_try_start_2a:
	this->addAllNamesIntoTrie();
	//label_try_end_30:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_2a .. :try_end_30} :catchall_12
	matches = this->doFind(handler, text, start);
	if ( !(matches) )  
		goto label_cond_35;
	this->monitor_exit();
	return matches;
	// 1227    .line 229
label_cond_35:
	try {
	//label_try_start_35:
	this->internalLoadAllDisplayNames();
	//    .local v4, "tzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	tzID_S_iterator = android::icu::util::TimeZone::getAvailableIDs(android::icu::util::TimeZone_S_SystemTimeZoneType::CANONICAL, 0x0, 0x0)->iterator();
	//    .local v3, "tzID$iterator":Ljava/util/Iterator;
label_cond_44:
label_goto_44:
	if ( !(tzID_S_iterator->hasNext()) )  
		goto label_cond_5f;
	tzID = tzID_S_iterator->next();
	tzID->checkCast("java::lang::String");
	//    .local v2, "tzID":Ljava/lang/String;
	if ( this->_tzNamesMap->containsKey(tzID) )     
		goto label_cond_44;
	android::icu::impl::TimeZoneNamesImpl_S_ZNames::createTimeZoneAndPutInCache(this->_tzNamesMap, 0x0, tzID);
	goto label_goto_44;
	// 1283    .line 240
	// 1284    .end local v2    # "tzID":Ljava/lang/String;
label_cond_5f:
	this->addAllNamesIntoTrie();
	this->_namesTrieFullyLoaded = 0x1;
	//label_try_end_68:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_35 .. :try_end_68} :catchall_12
	this->monitor_exit();
	return this->doFind(handler, text, start);

}
// .method public getAvailableMetaZoneIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::TimeZoneNamesImpl::getAvailableMetaZoneIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1308        value = {
	// 1309            "()",
	// 1310            "Ljava/util/Set",
	// 1311            "<",
	// 1312            "Ljava/lang/String;",
	// 1313            ">;"
	// 1314        }
	// 1315    .end annotation
	return android::icu::impl::TimeZoneNamesImpl::_getAvailableMetaZoneIDs({const[class].FS-Param});

}
// .method public getAvailableMetaZoneIDs(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::TimeZoneNamesImpl::getAvailableMetaZoneIDs(std::shared_ptr<java::lang::String> tzID)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1330        value = {
	// 1331            "(",
	// 1332            "Ljava/lang/String;",
	// 1333            ")",
	// 1334            "Ljava/util/Set",
	// 1335            "<",
	// 1336            "Ljava/lang/String;",
	// 1337            ">;"
	// 1338        }
	// 1339    .end annotation
	return android::icu::impl::TimeZoneNamesImpl::_getAvailableMetaZoneIDs(tzID);

}
// .method public getDisplayNames(Ljava/lang/String;[Landroid/icu/text/TimeZoneNames$NameType;J[Ljava/lang/String;I)V
void android::icu::impl::TimeZoneNamesImpl::getDisplayNames(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<std::vector<android::icu::text::TimeZoneNames_S_NameType>> types,long long date,std::shared_ptr<std::vector<java::lang::String>> dest,int destOffset)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNames> mzNames;
	int i;
	std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type;
	auto name;
	std::shared_ptr<java::lang::String> mzID;
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .param p2, "types"    # [Landroid/icu/text/TimeZoneNames$NameType;
	//    .param p3, "date"    # J
	//    .param p5, "dest"    # [Ljava/lang/String;
	//    .param p6, "destOffset"    # I
	if ( !(tzID) )  
		goto label_cond_8;
	if ( tzID->length() )     
		goto label_cond_9;
label_cond_8:
	return;
	// 1372    .line 267
label_cond_9:
	//    .local v5, "tzNames":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
	mzNames = 0x0;
	//    .local v2, "mzNames":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
	i = 0x0;
	//    .end local v2    # "mzNames":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
	//    .local v0, "i":I
label_goto_f:
	if ( i >= types->size() )
		goto label_cond_3a;
	type = types[i];
	//    .local v4, "type":Landroid/icu/text/TimeZoneNames$NameType;
	name = this->loadTimeZoneNames(tzID)->getName(type);
	//    .local v3, "name":Ljava/lang/String;
	if ( name )     
		goto label_cond_2e;
	if ( mzNames )     
		goto label_cond_2a;
	mzID = this->getMetaZoneID(tzID, date);
	//    .local v1, "mzID":Ljava/lang/String;
	if ( !(mzID) )  
		goto label_cond_28;
	if ( mzID->length() )     
		goto label_cond_35;
label_cond_28:
	mzNames = android::icu::impl::TimeZoneNamesImpl_S_ZNames::EMPTY_ZNAMES;
	//    .end local v1    # "mzID":Ljava/lang/String;
label_cond_2a:
label_goto_2a:
label_cond_2e:
	dest[(destOffset + i)] = name;
	i = ( i + 0x1);
	goto label_goto_f;
	// 1447    .line 278
	// 1448    .restart local v1    # "mzID":Ljava/lang/String;
label_cond_35:
	mzNames = this->loadMetaZoneNames(mzID);
	//    .local v2, "mzNames":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
	goto label_goto_2a;
	// 1457    .line 285
	// 1458    .end local v1    # "mzID":Ljava/lang/String;
	// 1459    .end local v2    # "mzNames":Landroid/icu/impl/TimeZoneNamesImpl$ZNames;
	// 1460    .end local v3    # "name":Ljava/lang/String;
	// 1461    .end local v4    # "type":Landroid/icu/text/TimeZoneNames$NameType;
label_cond_3a:
	return;

}
// .method public getExemplarLocationName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl::getExemplarLocationName(std::shared_ptr<java::lang::String> tzID)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	if ( !(tzID) )  
		goto label_cond_9;
	if ( tzID->length() )     
		goto label_cond_a;
label_cond_9:
	return 0x0;
	// 1486    .line 194
label_cond_a:
	//    .local v0, "locName":Ljava/lang/String;
	return this->loadTimeZoneNames(tzID)->getName(android::icu::text::TimeZoneNames_S_NameType::EXEMPLAR_LOCATION);

}
// .method public getMetaZoneDisplayName(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl::getMetaZoneDisplayName(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type)
{
	
	//    .param p1, "mzID"    # Ljava/lang/String;
	//    .param p2, "type"    # Landroid/icu/text/TimeZoneNames$NameType;
	if ( !(mzID) )  
		goto label_cond_9;
	if ( mzID->length() )     
		goto label_cond_a;
label_cond_9:
	return 0x0;
	// 1524    .line 171
label_cond_a:
	return this->loadMetaZoneNames(mzID)->getName(type);

}
// .method public getMetaZoneID(Ljava/lang/String;J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl::getMetaZoneID(std::shared_ptr<java::lang::String> tzID,long long date)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .param p2, "date"    # J
	return android::icu::impl::TimeZoneNamesImpl::_getMetaZoneID(tzID, date);

}
// .method public getReferenceZoneID(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl::getReferenceZoneID(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<java::lang::String> region)
{
	
	//    .param p1, "mzID"    # Ljava/lang/String;
	//    .param p2, "region"    # Ljava/lang/String;
	return android::icu::impl::TimeZoneNamesImpl::_getReferenceZoneID(mzID, region);

}
// .method public getTimeZoneDisplayName(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl::getTimeZoneDisplayName(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .param p2, "type"    # Landroid/icu/text/TimeZoneNames$NameType;
	if ( !(tzID) )  
		goto label_cond_9;
	if ( tzID->length() )     
		goto label_cond_a;
label_cond_9:
	return 0x0;
	// 1586    .line 183
label_cond_a:
	return this->loadTimeZoneNames(tzID)->getName(type);

}
// .method public declared-synchronized loadAllDisplayNames()V
void android::icu::impl::TimeZoneNamesImpl::loadAllDisplayNames()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->internalLoadAllDisplayNames();
	//label_try_end_4:
	}
	catch (...){
		goto label_catchall_6;
	}
	//    .catchall {:try_start_1 .. :try_end_4} :catchall_6
	this->monitor_exit();
	return;
label_catchall_6:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


