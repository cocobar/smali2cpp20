// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUService.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUDebug.h"
#include "android.icu.impl.ICURWLock_S_Stats.h"
#include "android.icu.impl.ICURWLock.h"
#include "android.icu.impl.ICUService_S_CacheEntry.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService_S_LocaleRef.h"
#include "android.icu.impl.ICUService_S_ServiceListener.h"
#include "android.icu.impl.ICUService_S_SimpleFactory.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.ULocale_S_Category.h"
#include "android.icu.util.ULocale.h"
#include "java.io.PrintStream.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Iterable.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.ArrayList.h"
#include "java.util.Collections.h"
#include "java.util.Comparator.h"
#include "java.util.EventListener.h"
#include "java.util.HashMap.h"
#include "java.util.HashSet.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"
#include "java.util.ListIterator.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.SortedMap.h"
#include "java.util.TreeMap.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

static android::icu::impl::ICUService::DEBUG;
// .method static constructor <clinit>()V
void android::icu::impl::ICUService::static_cinit()
{
	
	android::icu::impl::ICUService::DEBUG = android::icu::impl::ICUDebug::enabled(std::make_shared<java::lang::String>(std::make_shared<char[]>("service")));
	return;

}
// .method public constructor <init>()V
android::icu::impl::ICUService::ICUService()
{
	
	std::shared_ptr<android::icu::impl::ICURWLock> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	
	// 091    invoke-direct {p0}, Landroid/icu/impl/ICUNotifier;-><init>()V
	cVar0 = std::make_shared<android::icu::impl::ICURWLock>();
	this->factoryLock = cVar0;
	cVar1 = std::make_shared<java::util::ArrayList>();
	this->factories = cVar1;
	this->defaultSize = 0x0;
	this->name = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::ICUService::ICUService(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<android::icu::impl::ICURWLock> cVar0;
	std::shared_ptr<java::util::ArrayList> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	// 127    invoke-direct {p0}, Landroid/icu/impl/ICUNotifier;-><init>()V
	cVar0 = std::make_shared<android::icu::impl::ICURWLock>();
	this->factoryLock = cVar0;
	cVar1 = std::make_shared<java::util::ArrayList>();
	this->factories = cVar1;
	this->defaultSize = 0x0;
	this->name = name;
	return;

}
// .method private getVisibleIDMap()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_Factory>> android::icu::impl::ICUService::getVisibleIDMap()
{
	
	std::shared_ptr<java::util::HashMap> mutableMap;
	std::shared_ptr<java::util::ListIterator> lIter;
	std::shared_ptr<android::icu::impl::ICUService_S_Factory> f;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 158        value = {
	// 159            "()",
	// 160            "Ljava/util/Map",
	// 161            "<",
	// 162            "Ljava/lang/String;",
	// 163            "Landroid/icu/impl/ICUService$Factory;",
	// 164            ">;"
	// 165        }
	// 166    .end annotation
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_3:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_1 .. :try_end_3} :catchall_32
	if ( this->idcache )     
		goto label_cond_40;
	try {
	//label_try_start_5:
	this->factoryLock->acquireRead();
	mutableMap = std::make_shared<java::util::HashMap>();
	//    .local v2, "mutableMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
	lIter = this->factories->listIterator(this->factories->size());
	//    .local v1, "lIter":Ljava/util/ListIterator;, "Ljava/util/ListIterator<Landroid/icu/impl/ICUService$Factory;>;"
label_goto_1b:
	if ( !(lIter->hasPrevious()) )  
		goto label_cond_35;
	f = lIter->previous();
	f->checkCast("android::icu::impl::ICUService_S_Factory");
	//    .local v0, "f":Landroid/icu/impl/ICUService$Factory;
	f->updateVisibleIDs(mutableMap);
	//label_try_end_2a:
	}
	catch (...){
		goto label_catchall_2b;
	}
	//    .catchall {:try_start_5 .. :try_end_2a} :catchall_2b
	goto label_goto_1b;
	// 229    .line 598
	// 230    .end local v0    # "f":Landroid/icu/impl/ICUService$Factory;
	// 231    .end local v1    # "lIter":Ljava/util/ListIterator;, "Ljava/util/ListIterator<Landroid/icu/impl/ICUService$Factory;>;"
	// 232    .end local v2    # "mutableMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
label_catchall_2b:
	// move-exception
	
	try {
	//label_try_start_2c:
	this->factoryLock->releaseRead();
	// throw
	throw;
	// 244    :try_end_32
	// 245    .catchall {:try_start_2c .. :try_end_32} :catchall_32
	// 247    .line 587
label_catchall_32:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 255    .line 597
	// 256    .restart local v1    # "lIter":Ljava/util/ListIterator;, "Ljava/util/ListIterator<Landroid/icu/impl/ICUService$Factory;>;"
	// 257    .restart local v2    # "mutableMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
label_cond_35:
	try {
	//label_try_start_35:
	this->idcache = java::util::Collections::unmodifiableMap(mutableMap);
	//label_try_end_3b:
	}
	catch (...){
		goto label_catchall_2b;
	}
	//    .catchall {:try_start_35 .. :try_end_3b} :catchall_2b
	try {
	//label_try_start_3b:
	this->factoryLock->releaseRead();
	//label_try_end_40:
	}
	catch (...){
		goto label_catchall_32;
	}
	//    .catchall {:try_start_3b .. :try_end_40} :catchall_32
	//    .end local v1    # "lIter":Ljava/util/ListIterator;, "Ljava/util/ListIterator<Landroid/icu/impl/ICUService$Factory;>;"
	//    .end local v2    # "mutableMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
label_cond_40:
	this->monitor_exit();
	return this->idcache;

}
// .method protected acceptsListener(Ljava/util/EventListener;)Z
bool android::icu::impl::ICUService::acceptsListener(std::shared_ptr<java::util::EventListener> l)
{
	
	//    .param p1, "l"    # Ljava/util/EventListener;
	return l->instanceOf("android::icu::impl::ICUService_S_ServiceListener");

}
// .method protected clearCaches()V
void android::icu::impl::ICUService::clearCaches()
{
	
	std::shared_ptr<java::util::Map> cVar0;
	
	cVar0 = 0x0;
	this->cache = cVar0;
	this->idcache = cVar0;
	this->dnref = cVar0;
	return;

}
// .method protected clearServiceCache()V
void android::icu::impl::ICUService::clearServiceCache()
{
	
	this->cache = 0x0;
	return;

}
// .method public createKey(Ljava/lang/String;)Landroid/icu/impl/ICUService$Key;
std::shared_ptr<android::icu::impl::ICUService_S_Key> android::icu::impl::ICUService::createKey(std::shared_ptr<java::lang::String> id)
{
	
	std::shared_ptr<android::icu::impl::ICUService_S_Key> cVar0;
	
	//    .param p1, "id"    # Ljava/lang/String;
	cVar0 = 0x0;
	if ( id )     
		goto label_cond_4;
label_goto_3:
	return cVar0;
label_cond_4:
	cVar0 = std::make_shared<android::icu::impl::ICUService_S_Key>(id);
	goto label_goto_3;

}
// .method public final factories()Ljava/util/List;
std::shared_ptr<java::util::List<android::icu::impl::ICUService_S_Factory>> android::icu::impl::ICUService::factories()
{
	
	std::shared_ptr<java::util::ArrayList> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 356        value = {
	// 357            "()",
	// 358            "Ljava/util/List",
	// 359            "<",
	// 360            "Landroid/icu/impl/ICUService$Factory;",
	// 361            ">;"
	// 362        }
	// 363    .end annotation
	try {
	//label_try_start_0:
	this->factoryLock->acquireRead();
	cVar0 = std::make_shared<java::util::ArrayList>(this->factories);
	//label_try_end_c:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_0 .. :try_end_c} :catchall_12
	this->factoryLock->releaseRead();
	return cVar0;
	// 389    .line 766
label_catchall_12:
	// move-exception
	
	this->factoryLock->releaseRead();
	// throw
	throw;

}
// .method public get(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUService::get(std::shared_ptr<java::lang::String> descriptor)
{
	
	//    .param p1, "descriptor"    # Ljava/lang/String;
	return this->getKey(this->createKey(descriptor), 0x0);

}
// .method public get(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUService::get(std::shared_ptr<java::lang::String> descriptor,std::shared_ptr<std::vector<java::lang::String>> actualReturn)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "descriptor"    # Ljava/lang/String;
	//    .param p2, "actualReturn"    # [Ljava/lang/String;
	if ( descriptor )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("descriptor must not be null")));
	// throw
	throw cVar0;
	// 439    .line 363
label_cond_b:
	return this->getKey(this->createKey(descriptor), actualReturn);

}
// .method public getDisplayName(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUService::getDisplayName(std::shared_ptr<java::lang::String> id)
{
	
	//    .param p1, "id"    # Ljava/lang/String;
	return this->getDisplayName(id, android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY));

}
// .method public getDisplayName(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUService::getDisplayName(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::util::Map> m;
	std::shared_ptr<android::icu::impl::ICUService_S_Factory> f;
	std::shared_ptr<android::icu::impl::ICUService_S_Key> key;
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	m = this->getVisibleIDMap();
	//    .local v2, "m":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
	f = m->get(id);
	f->checkCast("android::icu::impl::ICUService_S_Factory");
	//    .local v0, "f":Landroid/icu/impl/ICUService$Factory;
	if ( !(f) )  
		goto label_cond_12;
	return f->getDisplayName(id, locale);
	// 503    .line 627
label_cond_12:
	key = this->createKey(id);
	//    .local v1, "key":Landroid/icu/impl/ICUService$Key;
label_cond_16:
	if ( !(key->fallback()) )  
		goto label_cond_2d;
	f = m->get(key->currentID());
	//    .end local v0    # "f":Landroid/icu/impl/ICUService$Factory;
	f->checkCast("android::icu::impl::ICUService_S_Factory");
	//    .restart local v0    # "f":Landroid/icu/impl/ICUService$Factory;
	if ( !(f) )  
		goto label_cond_16;
	return f->getDisplayName(id, locale);
	// 541    .line 635
label_cond_2d:
	return 0x0;

}
// .method public getDisplayNames()Ljava/util/SortedMap;
std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> android::icu::impl::ICUService::getDisplayNames()
{
	
	std::shared_ptr<java::util::Comparator> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 549        value = {
	// 550            "()",
	// 551            "Ljava/util/SortedMap",
	// 552            "<",
	// 553            "Ljava/lang/String;",
	// 554            "Ljava/lang/String;",
	// 555            ">;"
	// 556        }
	// 557    .end annotation
	cVar0 = 0x0;
	//    .local v0, "locale":Landroid/icu/util/ULocale;
	return this->getDisplayNames(android::icu::util::ULocale::getDefault(android::icu::util::ULocale_S_Category::DISPLAY), cVar0, cVar0);

}
// .method public getDisplayNames(Landroid/icu/util/ULocale;)Ljava/util/SortedMap;
std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> android::icu::impl::ICUService::getDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::util::Comparator> cVar0;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 582        value = {
	// 583            "(",
	// 584            "Landroid/icu/util/ULocale;",
	// 585            ")",
	// 586            "Ljava/util/SortedMap",
	// 587            "<",
	// 588            "Ljava/lang/String;",
	// 589            "Ljava/lang/String;",
	// 590            ">;"
	// 591        }
	// 592    .end annotation
	cVar0 = 0x0;
	return this->getDisplayNames(locale, cVar0, cVar0);

}
// .method public getDisplayNames(Landroid/icu/util/ULocale;Ljava/lang/String;)Ljava/util/SortedMap;
std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> android::icu::impl::ICUService::getDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> matchID)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "matchID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 610        value = {
	// 611            "(",
	// 612            "Landroid/icu/util/ULocale;",
	// 613            "Ljava/lang/String;",
	// 614            ")",
	// 615            "Ljava/util/SortedMap",
	// 616            "<",
	// 617            "Ljava/lang/String;",
	// 618            "Ljava/lang/String;",
	// 619            ">;"
	// 620        }
	// 621    .end annotation
	return this->getDisplayNames(locale, 0x0, matchID);

}
// .method public getDisplayNames(Landroid/icu/util/ULocale;Ljava/util/Comparator;)Ljava/util/SortedMap;
std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> android::icu::impl::ICUService::getDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::util::Comparator<java::lang::Object>> com)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .annotation system Ldalvik/annotation/Signature;
	// 638        value = {
	// 639            "(",
	// 640            "Landroid/icu/util/ULocale;",
	// 641            "Ljava/util/Comparator",
	// 642            "<",
	// 643            "Ljava/lang/Object;",
	// 644            ">;)",
	// 645            "Ljava/util/SortedMap",
	// 646            "<",
	// 647            "Ljava/lang/String;",
	// 648            "Ljava/lang/String;",
	// 649            ">;"
	// 650        }
	// 651    .end annotation
	//    .local p2, "com":Ljava/util/Comparator;, "Ljava/util/Comparator<Ljava/lang/Object;>;"
	return this->getDisplayNames(locale, com, 0x0);

}
// .method public getDisplayNames(Landroid/icu/util/ULocale;Ljava/util/Comparator;Ljava/lang/String;)Ljava/util/SortedMap;
std::shared_ptr<java::util::SortedMap<java::lang::String,java::lang::String>> android::icu::impl::ICUService::getDisplayNames(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::util::Comparator<java::lang::Object>> com,std::shared_ptr<java::lang::String> matchID)
{
	
	std::shared_ptr<android::icu::impl::ICUService_S_LocaleRef> ref;
	std::shared_ptr<java::util::SortedMap> dncache;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::util::TreeMap> dncache;
	std::shared_ptr<java::util::Iterator> ei;
	std::shared_ptr<java::util::Map_S_Entry> e;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<android::icu::impl::ICUService_S_Factory> f;
	std::shared_ptr<android::icu::impl::ICUService_S_LocaleRef> cVar1;
	std::shared_ptr<android::icu::impl::ICUService_S_Key> matchKey;
	std::shared_ptr<java::util::TreeMap> result;
	std::shared_ptr<java::util::Iterator> iter;
	std::shared_ptr<java::lang::String> cVar2;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p3, "matchID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 670        value = {
	// 671            "(",
	// 672            "Landroid/icu/util/ULocale;",
	// 673            "Ljava/util/Comparator",
	// 674            "<",
	// 675            "Ljava/lang/Object;",
	// 676            ">;",
	// 677            "Ljava/lang/String;",
	// 678            ")",
	// 679            "Ljava/util/SortedMap",
	// 680            "<",
	// 681            "Ljava/lang/String;",
	// 682            "Ljava/lang/String;",
	// 683            ">;"
	// 684        }
	// 685    .end annotation
	//    .local p2, "com":Ljava/util/Comparator;, "Ljava/util/Comparator<Ljava/lang/Object;>;"
	//    .local v1, "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	ref = this->dnref;
	//    .local v11, "ref":Landroid/icu/impl/ICUService$LocaleRef;
	if ( !(ref) )  
		goto label_cond_5b;
	//    .local v1, "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	dncache = ref->get(locale, com);
	//    .end local v1    # "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	//    .local v2, "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
label_goto_c:
	if ( dncache )     
		goto label_cond_66;
	this->monitor_enter();
	try {
	//label_try_start_f:
	if ( ref == this->dnref )
		goto label_cond_17;
	if ( this->dnref )     
		goto label_cond_5d;
label_cond_17:
	dncache = std::make_shared<java::util::TreeMap>(com);
	//label_try_end_1e:
	}
	catch (...){
		goto label_catchall_99;
	}
	//    .catchall {:try_start_f .. :try_end_1e} :catchall_99
	//    .end local v2    # "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v1    # "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	try {
	//label_try_start_1e:
	//    .local v9, "m":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
	ei = this->getVisibleIDMap()->entrySet()->iterator();
	//    .local v5, "ei":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;>;"
label_goto_2a:
	if ( !(ei->hasNext()) )  
		goto label_cond_4d;
	e = ei->next();
	e->checkCast("java::util::Map_S_Entry");
	//    .local v3, "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
	id = e->getKey();
	id->checkCast("java::lang::String");
	//    .local v7, "id":Ljava/lang/String;
	f = e->getValue();
	f->checkCast("android::icu::impl::ICUService_S_Factory");
	//    .local v6, "f":Landroid/icu/impl/ICUService$Factory;
	dncache->put(f->getDisplayName(id, locale), id);
	//label_try_end_49:
	}
	catch (...){
		goto label_catchall_4a;
	}
	//    .catchall {:try_start_1e .. :try_end_49} :catchall_4a
	goto label_goto_2a;
	// 801    .line 691
	// 802    .end local v3    # "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
	// 803    .end local v5    # "ei":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;>;"
	// 804    .end local v6    # "f":Landroid/icu/impl/ICUService$Factory;
	// 805    .end local v7    # "id":Ljava/lang/String;
	// 806    .end local v9    # "m":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
label_catchall_4a:
	// move-exception
	catchall = tryCatchExcetionList.back();
label_goto_4b:
	this->monitor_exit();
	// throw
	throw;
	// 815    .line 704
	// 816    .restart local v5    # "ei":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;>;"
	// 817    .restart local v9    # "m":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
label_cond_4d:
	try {
	//label_try_start_4d:
	dncache = java::util::Collections::unmodifiableSortedMap(dncache);
	cVar1 = std::make_shared<android::icu::impl::ICUService_S_LocaleRef>(dncache, locale, com);
	this->dnref = cVar1;
	//label_try_end_5a:
	}
	catch (...){
		goto label_catchall_4a;
	}
	//    .catchall {:try_start_4d .. :try_end_5a} :catchall_4a
	//    .end local v5    # "ei":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;>;"
	//    .end local v9    # "m":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
label_goto_5a:
	this->monitor_exit();
	//    .end local v1    # "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_5b:
	dncache = 0x0;
	//    .restart local v2    # "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_c;
	// 847    .line 707
label_cond_5d:
	try {
	//label_try_start_5d:
	ref = this->dnref;
	//label_try_end_64:
	}
	catch (...){
		goto label_catchall_99;
	}
	//    .catchall {:try_start_5d .. :try_end_64} :catchall_99
	//    .end local v2    # "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v1    # "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_5a;
	// 865    .line 713
	// 866    .end local v1    # "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	// 867    .restart local v2    # "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_66:
	matchKey = this->createKey(matchID);
	//    .local v10, "matchKey":Landroid/icu/impl/ICUService$Key;
	if ( matchKey )     
		goto label_cond_6f;
	return dncache;
	// 882    .line 718
label_cond_6f:
	result = std::make_shared<java::util::TreeMap>(dncache);
	//    .local v12, "result":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	iter = result->entrySet()->iterator();
	//    .local v8, "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;"
label_cond_7c:
label_goto_7c:
	if ( !(iter->hasNext()) )  
		goto label_cond_98;
	e = iter->next();
	e->checkCast("java::util::Map_S_Entry");
	//    .local v4, "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
	cVar2 = e->getValue();
	cVar2->checkCast("java::lang::String");
	if ( matchKey->isFallbackOf(cVar2) )     
		goto label_cond_7c;
	iter->remove();
	goto label_goto_7c;
	// 934    .line 726
	// 935    .end local v4    # "e":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
label_cond_98:
	return result;
	// 939    .line 691
	// 940    .end local v8    # "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;"
	// 941    .end local v10    # "matchKey":Landroid/icu/impl/ICUService$Key;
	// 942    .end local v12    # "result":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
label_catchall_99:
	// move-exception
	catchall = tryCatchExcetionList.back();
	dncache;
	//    .end local v2    # "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	//    .restart local v1    # "dncache":Ljava/util/SortedMap;, "Ljava/util/SortedMap<Ljava/lang/String;Ljava/lang/String;>;"
	goto label_goto_4b;

}
// .method public getKey(Landroid/icu/impl/ICUService$Key;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUService::getKey(std::shared_ptr<android::icu::impl::ICUService_S_Key> key)
{
	
	//    .param p1, "key"    # Landroid/icu/impl/ICUService$Key;
	return this->getKey(key, 0x0);

}
// .method public getKey(Landroid/icu/impl/ICUService$Key;[Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUService::getKey(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<std::vector<java::lang::String>> actualReturn)
{
	
	//    .param p1, "key"    # Landroid/icu/impl/ICUService$Key;
	//    .param p2, "actualReturn"    # [Ljava/lang/String;
	return this->getKey(key, actualReturn, 0x0);

}
// .method public getKey(Landroid/icu/impl/ICUService$Key;[Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUService::getKey(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<std::vector<java::lang::String>> actualReturn,std::shared_ptr<android::icu::impl::ICUService_S_Factory> factory)
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::Object> catchall;
	std::shared_ptr<java::util::Map> cache;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cache;
	std::shared_ptr<java::lang::Iterable> cacheDescriptorList;
	int NDebug;
	int startIndex;
	int limit;
	int i;
	std::shared_ptr<java::lang::IllegalStateException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::String> currentDescriptor;
	std::shared_ptr<java::lang::StringBuilder> cVar5;
	std::shared_ptr<android::icu::impl::ICUService_S_CacheEntry> cVar6;
	auto result;
	std::shared_ptr<java::lang::StringBuilder> cVar7;
	std::shared_ptr<java::lang::StringBuilder> cVar8;
	std::shared_ptr<java::util::Iterator> desc_S_iterator;
	std::shared_ptr<java::lang::String> desc;
	std::shared_ptr<java::lang::StringBuilder> cVar9;
	std::shared_ptr<java::lang::StringBuilder> cVar14;
	std::shared_ptr<java::lang::StringBuilder> cVar15;
	std::shared_ptr<java::lang::StringBuilder> cVar10;
	int index;
	std::shared_ptr<android::icu::impl::ICUService_S_Factory> f;
	std::shared_ptr<java::lang::StringBuilder> cVar11;
	auto service;
	std::shared_ptr<android::icu::impl::ICUService_S_CacheEntry> result;
	std::shared_ptr<java::lang::StringBuilder> cVar12;
	std::shared_ptr<java::lang::StringBuilder> cVar13;
	std::shared_ptr<java::util::ArrayList> cacheDescriptorList;
	
	//    .param p1, "key"    # Landroid/icu/impl/ICUService$Key;
	//    .param p2, "actualReturn"    # [Ljava/lang/String;
	//    .param p3, "factory"    # Landroid/icu/impl/ICUService$Factory;
	if ( this->factories->size() )     
		goto label_cond_11;
	return this->handleDefault(key, actualReturn);
	// 1011    .line 400
label_cond_11:
	if ( !(android::icu::impl::ICUService::DEBUG) )  
		goto label_cond_43;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Service: ")))->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" key: ")))->append(key->canonicalID())->toString());
label_cond_43:
	0x0;
	//    .local v16, "result":Landroid/icu/impl/ICUService$CacheEntry;
	if ( !(key) )  
		goto label_cond_349;
	try {
	//label_try_start_47:
	this->factoryLock->acquireRead();
	cache = this->cache;
	//    .local v4, "cache":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$CacheEntry;>;"
	if ( cache )     
		goto label_cond_85;
	if ( !(android::icu::impl::ICUService::DEBUG) )  
		goto label_cond_80;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Service ")))->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" cache was empty")))->toString());
label_cond_80:
	//    .end local v4    # "cache":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$CacheEntry;>;"
	cache = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	//    .restart local v4    # "cache":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$CacheEntry;>;"
label_cond_85:
	0x0;
	//    .local v7, "currentDescriptor":Ljava/lang/String;
	cacheDescriptorList = 0x0;
	//    .local v5, "cacheDescriptorList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	//    .local v15, "putInCache":Z
	NDebug = 0x0;
	//    .local v2, "NDebug":I
	startIndex = 0x0;
	//    .local v19, "startIndex":I
	limit = this->factories->size();
	//    .local v14, "limit":I
	//    .local v6, "cacheResult":Z
	if ( !(factory) )  
		goto label_cond_2da;
	i = 0x0;
	//    .local v11, "i":I
label_goto_99:
	if ( i >= limit )
		goto label_cond_af;
	if ( factory != this->factories->get(i) )
		goto label_cond_e9;
	startIndex = ( i + 0x1);
label_cond_af:
	if ( startIndex )     
		goto label_cond_ec;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalStateException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Factory ")))->append(factory)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("not registered with service: ")))->append(this)->toString());
	// throw
	throw cVar2;
	// 1248    :try_end_de
	// 1249    .catchall {:try_start_47 .. :try_end_de} :catchall_de
	// 1251    .line 516
	// 1252    .end local v2    # "NDebug":I
	// 1253    .end local v4    # "cache":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$CacheEntry;>;"
	// 1254    .end local v5    # "cacheDescriptorList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	// 1255    .end local v6    # "cacheResult":Z
	// 1256    .end local v7    # "currentDescriptor":Ljava/lang/String;
	// 1257    .end local v11    # "i":I
	// 1258    .end local v14    # "limit":I
	// 1259    .end local v15    # "putInCache":Z
	// 1260    .end local v16    # "result":Landroid/icu/impl/ICUService$CacheEntry;
	// 1261    .end local v19    # "startIndex":I
label_catchall_de:
	// move-exception
	catchall = tryCatchExcetionList.back();
label_goto_df:
	this->factoryLock->releaseRead();
	// throw
	throw;
	// 1278    .line 428
	// 1279    .restart local v2    # "NDebug":I
	// 1280    .restart local v4    # "cache":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$CacheEntry;>;"
	// 1281    .restart local v5    # "cacheDescriptorList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	// 1282    .restart local v6    # "cacheResult":Z
	// 1283    .restart local v7    # "currentDescriptor":Ljava/lang/String;
	// 1284    .restart local v11    # "i":I
	// 1285    .restart local v14    # "limit":I
	// 1286    .restart local v15    # "putInCache":Z
	// 1287    .restart local v16    # "result":Landroid/icu/impl/ICUService$CacheEntry;
	// 1288    .restart local v19    # "startIndex":I
label_cond_e9:
	i = ( i + 0x1);
	goto label_goto_99;
	// 1294    .line 437
label_cond_ec:
	NDebug = NDebug;
	//    .end local v2    # "NDebug":I
	//    .end local v5    # "cacheDescriptorList":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	//    .end local v7    # "currentDescriptor":Ljava/lang/String;
	//    .end local v11    # "i":I
	//    .end local v15    # "putInCache":Z
	//    .end local v16    # "result":Landroid/icu/impl/ICUService$CacheEntry;
	//    .local v3, "NDebug":I
label_goto_ee:
	try {
	//label_try_start_ee:
	currentDescriptor = key->currentDescriptor();
	//    .local v7, "currentDescriptor":Ljava/lang/String;
	if ( !(android::icu::impl::ICUService::DEBUG) )  
		goto label_cond_376;
	cVar5 = std::make_shared<java::lang::StringBuilder>();
	//    .end local v3    # "NDebug":I
	//    .restart local v2    # "NDebug":I
	java::lang::System::out->println(cVar5->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[")))->append(NDebug)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] looking for: ")))->append(currentDescriptor)->toString());
label_goto_12a:
	cVar6 = cache->get(currentDescriptor);
	cVar6->checkCast("android::icu::impl::ICUService_S_CacheEntry");
	result = cVar6;
	//    .local v16, "result":Landroid/icu/impl/ICUService$CacheEntry;
	if ( !(result) )  
		goto label_cond_1f3;
	if ( !(android::icu::impl::ICUService::DEBUG) )  
		goto label_cond_15f;
	cVar7 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar7->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" found with descriptor: ")))->append(currentDescriptor)->toString());
label_cond_15f:
label_goto_15f:
	if ( !(result) )  
		goto label_cond_340;
	if ( !(0x0) )  
		goto label_cond_2e1;
	if ( !(android::icu::impl::ICUService::DEBUG) )  
		goto label_cond_18d;
	cVar8 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar8->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("caching \'")))->append(result->actualDescriptor)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString());
label_cond_18d:
	cache->put(result->actualDescriptor, result);
	if ( !(cacheDescriptorList) )  
		goto label_cond_2dd;
	desc_S_iterator = cacheDescriptorList->iterator();
	//    .local v9, "desc$iterator":Ljava/util/Iterator;
label_goto_1a0:
	if ( !(desc_S_iterator->hasNext()) )  
		goto label_cond_2dd;
	desc = desc_S_iterator->next();
	desc->checkCast("java::lang::String");
	//    .local v8, "desc":Ljava/lang/String;
	if ( !(android::icu::impl::ICUService::DEBUG) )  
		goto label_cond_1ed;
	cVar9 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar9->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" adding descriptor: \'")))->append(desc)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\' for actual: \'")))->append(result->actualDescriptor)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\'")))->toString());
label_cond_1ed:
	cache->put(desc, result);
	goto label_goto_1a0;
	// 1578    .line 449
	// 1579    .end local v8    # "desc":Ljava/lang/String;
	// 1580    .end local v9    # "desc$iterator":Ljava/util/Iterator;
label_cond_1f3:
	if ( !(android::icu::impl::ICUService::DEBUG) )  
		goto label_cond_219;
	cVar10 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar10->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("did not find: ")))->append(currentDescriptor)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" in cache")))->toString());
label_cond_219:
	0x1;
	//    .local v15, "putInCache":Z
	//    .local v12, "index":I
	index = startIndex;
	//    .end local v12    # "index":I
	//    .local v13, "index":I
label_goto_21d:
	if ( index >= limit )
		goto label_cond_2c6;
	index = ( index + 0x1);
	//    .end local v13    # "index":I
	//    .restart local v12    # "index":I
	f = this->factories->get(index);
	f->checkCast("android::icu::impl::ICUService_S_Factory");
	//    .local v10, "f":Landroid/icu/impl/ICUService$Factory;
	if ( !(android::icu::impl::ICUService::DEBUG) )  
		goto label_cond_25d;
	cVar11 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar11->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("trying factory[")))->append(( index + -0x1))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] ")))->append(f->toString())->toString());
label_cond_25d:
	service = f->create(key, this);
	//    .local v18, "service":Ljava/lang/Object;
	if ( !(service) )  
		goto label_cond_2a4;
	var269 = result(currentDescriptor, service);
	//label_try_end_270:
	}
	catch (...){
		goto label_catchall_de;
	}
	//    .catchall {:try_start_ee .. :try_end_270} :catchall_de
	//    .end local v16    # "result":Landroid/icu/impl/ICUService$CacheEntry;
	//    .local v17, "result":Landroid/icu/impl/ICUService$CacheEntry;
	try {
	//label_try_start_270:
	if ( !(android::icu::impl::ICUService::DEBUG) )  
		goto label_cond_2a0;
	cVar12 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar12->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" factory supported: ")))->append(currentDescriptor)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", caching")))->toString());
	//label_try_end_2a0:
	}
	catch (...){
		goto label_catchall_371;
	}
	//    .catchall {:try_start_270 .. :try_end_2a0} :catchall_371
label_cond_2a0:
	//    .end local v17    # "result":Landroid/icu/impl/ICUService$CacheEntry;
	//    .restart local v16    # "result":Landroid/icu/impl/ICUService$CacheEntry;
	goto label_goto_15f;
	// 1779    .line 468
label_cond_2a4:
	try {
	//label_try_start_2a4:
	if ( !(android::icu::impl::ICUService::DEBUG) )  
		goto label_cond_2c3;
	cVar13 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar13->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("factory did not support: ")))->append(currentDescriptor)->toString());
label_cond_2c3:
	index = index;
	//    .end local v12    # "index":I
	//    .restart local v13    # "index":I
	goto label_goto_21d;
	// 1817    .line 477
	// 1818    .end local v10    # "f":Landroid/icu/impl/ICUService$Factory;
	// 1819    .end local v18    # "service":Ljava/lang/Object;
label_cond_2c6:
	if ( cacheDescriptorList )     
		goto label_cond_2d1;
	cacheDescriptorList = std::make_shared<java::util::ArrayList>(0x5);
label_cond_2d1:
	cacheDescriptorList->add(currentDescriptor);
	if ( !(key->fallback()) )  
		goto label_cond_15f;
	//    .end local v7    # "currentDescriptor":Ljava/lang/String;
	//    .end local v13    # "index":I
	//    .end local v15    # "putInCache":Z
	//    .end local v16    # "result":Landroid/icu/impl/ICUService$CacheEntry;
label_cond_2da:
	NDebug = NDebug;
	//    .end local v2    # "NDebug":I
	//    .restart local v3    # "NDebug":I
	goto label_goto_ee;
	// 1854    .line 499
	// 1855    .end local v3    # "NDebug":I
	// 1856    .restart local v2    # "NDebug":I
	// 1857    .restart local v7    # "currentDescriptor":Ljava/lang/String;
	// 1858    .restart local v16    # "result":Landroid/icu/impl/ICUService$CacheEntry;
label_cond_2dd:
	this->cache = cache;
label_cond_2e1:
	if ( !(actualReturn) )  
		goto label_cond_302;
	if ( result->actualDescriptor->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("/"))) )     
		goto label_cond_335;
	actualReturn[0x0] = result->actualDescriptor->substring(0x1);
label_cond_302:
label_goto_302:
	if ( !(android::icu::impl::ICUService::DEBUG) )  
		goto label_cond_325;
	cVar14 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar14->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("found in service: ")))->append(this->name)->toString());
label_cond_325:
	//label_try_end_32b:
	}
	catch (...){
		goto label_catchall_de;
	}
	//    .catchall {:try_start_2a4 .. :try_end_32b} :catchall_de
	this->factoryLock->releaseRead();
	return result->service;
	// 1957    .line 507
label_cond_335:
	try {
	//label_try_start_335:
	actualReturn[0x0] = result->actualDescriptor;
	//label_try_end_33f:
	}
	catch (...){
		goto label_catchall_de;
	}
	//    .catchall {:try_start_335 .. :try_end_33f} :catchall_de
	goto label_goto_302;
	// 1974    .line 517
label_cond_340:
	this->factoryLock->releaseRead();
	//    .end local v2    # "NDebug":I
	//    .end local v4    # "cache":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$CacheEntry;>;"
	//    .end local v6    # "cacheResult":Z
	//    .end local v7    # "currentDescriptor":Ljava/lang/String;
	//    .end local v14    # "limit":I
	//    .end local v16    # "result":Landroid/icu/impl/ICUService$CacheEntry;
	//    .end local v19    # "startIndex":I
label_cond_349:
	if ( !(android::icu::impl::ICUService::DEBUG) )  
		goto label_cond_36c;
	cVar15 = std::make_shared<java::lang::StringBuilder>();
	java::lang::System::out->println(cVar15->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("not found in service: ")))->append(this->name)->toString());
label_cond_36c:
	return this->handleDefault(key, actualReturn);
	// 2033    .line 516
	// 2034    .restart local v2    # "NDebug":I
	// 2035    .restart local v4    # "cache":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$CacheEntry;>;"
	// 2036    .restart local v6    # "cacheResult":Z
	// 2037    .restart local v7    # "currentDescriptor":Ljava/lang/String;
	// 2038    .restart local v10    # "f":Landroid/icu/impl/ICUService$Factory;
	// 2039    .restart local v12    # "index":I
	// 2040    .restart local v14    # "limit":I
	// 2041    .restart local v15    # "putInCache":Z
	// 2042    .restart local v17    # "result":Landroid/icu/impl/ICUService$CacheEntry;
	// 2043    .restart local v18    # "service":Ljava/lang/Object;
	// 2044    .restart local v19    # "startIndex":I
label_catchall_371:
	// move-exception
	catchall = tryCatchExcetionList.back();
	result;
	//    .end local v17    # "result":Landroid/icu/impl/ICUService$CacheEntry;
	//    .restart local v16    # "result":Landroid/icu/impl/ICUService$CacheEntry;
	goto label_goto_df;
	// 2054    .end local v2    # "NDebug":I
	// 2055    .end local v10    # "f":Landroid/icu/impl/ICUService$Factory;
	// 2056    .end local v12    # "index":I
	// 2057    .end local v15    # "putInCache":Z
	// 2058    .end local v16    # "result":Landroid/icu/impl/ICUService$CacheEntry;
	// 2059    .end local v18    # "service":Ljava/lang/Object;
	// 2060    .restart local v3    # "NDebug":I
label_cond_376:
	NDebug;
	//    .end local v3    # "NDebug":I
	//    .restart local v2    # "NDebug":I
	goto label_goto_12a;

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUService::getName()
{
	
	return this->name;

}
// .method public getVisibleIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICUService::getVisibleIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 2082        value = {
	// 2083            "()",
	// 2084            "Ljava/util/Set",
	// 2085            "<",
	// 2086            "Ljava/lang/String;",
	// 2087            ">;"
	// 2088        }
	// 2089    .end annotation
	return this->getVisibleIDs(0x0);

}
// .method public getVisibleIDs(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICUService::getVisibleIDs(std::shared_ptr<java::lang::String> matchID)
{
	
	std::shared_ptr<java::util::Set> result;
	std::shared_ptr<android::icu::impl::ICUService_S_Key> fallbackKey;
	std::shared_ptr<java::util::HashSet> temp;
	std::shared_ptr<java::util::Iterator> id_S_iterator;
	std::shared_ptr<java::lang::String> id;
	
	//    .param p1, "matchID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 2106        value = {
	// 2107            "(",
	// 2108            "Ljava/lang/String;",
	// 2109            ")",
	// 2110            "Ljava/util/Set",
	// 2111            "<",
	// 2112            "Ljava/lang/String;",
	// 2113            ">;"
	// 2114        }
	// 2115    .end annotation
	result = this->getVisibleIDMap()->keySet();
	//    .local v3, "result":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	fallbackKey = this->createKey(matchID);
	//    .local v0, "fallbackKey":Landroid/icu/impl/ICUService$Key;
	if ( !(fallbackKey) )  
		goto label_cond_32;
	temp = std::make_shared<java::util::HashSet>(result->size());
	//    .local v4, "temp":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	id_S_iterator = result->iterator();
	//    .local v2, "id$iterator":Ljava/util/Iterator;
label_cond_1b:
label_goto_1b:
	if ( !(id_S_iterator->hasNext()) )  
		goto label_cond_31;
	id = id_S_iterator->next();
	id->checkCast("java::lang::String");
	//    .local v1, "id":Ljava/lang/String;
	if ( !(fallbackKey->isFallbackOf(id)) )  
		goto label_cond_1b;
	temp->add(id);
	goto label_goto_1b;
	// 2180    .line 578
	// 2181    .end local v1    # "id":Ljava/lang/String;
label_cond_31:
	//    .end local v2    # "id$iterator":Ljava/util/Iterator;
	//    .end local v4    # "temp":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_32:
	return result;

}
// .method protected handleDefault(Landroid/icu/impl/ICUService$Key;[Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUService::handleDefault(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<std::vector<java::lang::String>> actualIDReturn)
{
	
	//    .param p1, "key"    # Landroid/icu/impl/ICUService$Key;
	//    .param p2, "actualIDReturn"    # [Ljava/lang/String;
	return 0x0;

}
// .method public isDefault()Z
bool android::icu::impl::ICUService::isDefault()
{
	
	bool cVar0;
	
	if ( this->factories->size() != this->defaultSize )
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}
// .method protected markDefault()V
void android::icu::impl::ICUService::markDefault()
{
	
	this->defaultSize = this->factories->size();
	return;

}
// .method protected notifyListener(Ljava/util/EventListener;)V
void android::icu::impl::ICUService::notifyListener(std::shared_ptr<java::util::EventListener> l)
{
	
	//    .param p1, "l"    # Ljava/util/EventListener;
	l->checkCast("android::icu::impl::ICUService_S_ServiceListener");
	//    .end local p1    # "l":Ljava/util/EventListener;
	l->serviceChanged(this);
	return;

}
// .method protected reInitializeFactories()V
void android::icu::impl::ICUService::reInitializeFactories()
{
	
	this->factories->clear();
	return;

}
// .method public final registerFactory(Landroid/icu/impl/ICUService$Factory;)Landroid/icu/impl/ICUService$Factory;
std::shared_ptr<android::icu::impl::ICUService_S_Factory> android::icu::impl::ICUService::registerFactory(std::shared_ptr<android::icu::impl::ICUService_S_Factory> factory)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p1, "factory"    # Landroid/icu/impl/ICUService$Factory;
	if ( factory )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 2290    .line 799
label_cond_8:
	try {
	//label_try_start_8:
	this->factoryLock->acquireWrite();
	this->factories->add(0x0, factory);
	this->clearCaches();
	//label_try_end_16:
	}
	catch (...){
		goto label_catchall_1f;
	}
	//    .catchall {:try_start_8 .. :try_end_16} :catchall_1f
	this->factoryLock->releaseWrite();
	this->notifyChanged();
	return factory;
	// 2320    .line 803
label_catchall_1f:
	// move-exception
	
	this->factoryLock->releaseWrite();
	// throw
	throw;

}
// .method public registerObject(Ljava/lang/Object;Ljava/lang/String;)Landroid/icu/impl/ICUService$Factory;
std::shared_ptr<android::icu::impl::ICUService_S_Factory> android::icu::impl::ICUService::registerObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::String> id)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "id"    # Ljava/lang/String;
	return this->registerObject(obj, id, 0x1);

}
// .method public registerObject(Ljava/lang/Object;Ljava/lang/String;Z)Landroid/icu/impl/ICUService$Factory;
std::shared_ptr<android::icu::impl::ICUService_S_Factory> android::icu::impl::ICUService::registerObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::lang::String> id,bool visible)
{
	
	std::shared_ptr<android::icu::impl::ICUService_S_SimpleFactory> cVar0;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "id"    # Ljava/lang/String;
	//    .param p3, "visible"    # Z
	//    .local v0, "canonicalID":Ljava/lang/String;
	cVar0 = std::make_shared<android::icu::impl::ICUService_S_SimpleFactory>(obj, this->createKey(id)->canonicalID(), visible);
	return this->registerFactory(cVar0);

}
// .method public final reset()V
void android::icu::impl::ICUService::reset()
{
	
	try {
	//label_try_start_0:
	this->factoryLock->acquireWrite();
	this->reInitializeFactories();
	this->clearCaches();
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_14;
	}
	//    .catchall {:try_start_0 .. :try_end_b} :catchall_14
	this->factoryLock->releaseWrite();
	this->notifyChanged();
	return;
	// 2407    .line 848
label_catchall_14:
	// move-exception
	
	this->factoryLock->releaseWrite();
	// throw
	throw;

}
// .method public stats()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUService::stats()
{
	
	std::shared_ptr<android::icu::impl::ICURWLock_S_Stats> stats;
	
	stats = this->factoryLock->resetStats();
	//    .local v0, "stats":Landroid/icu/impl/ICURWLock$Stats;
	if ( !(stats) )  
		goto label_cond_d;
	return stats->toString();
	// 2442    .line 957
label_cond_d:
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("no stats"));

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUService::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("{")))->append(this->name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("}")))->toString();

}
// .method public final unregisterFactory(Landroid/icu/impl/ICUService$Factory;)Z
bool android::icu::impl::ICUService::unregisterFactory(std::shared_ptr<android::icu::impl::ICUService_S_Factory> factory)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	bool result;
	
	//    .param p1, "factory"    # Landroid/icu/impl/ICUService$Factory;
	if ( factory )     
		goto label_cond_8;
	cVar0 = std::make_shared<java::lang::NullPointerException>();
	// throw
	throw cVar0;
	// 2506    .line 820
label_cond_8:
	result = 0x0;
	//    .local v0, "result":Z
	try {
	//label_try_start_9:
	this->factoryLock->acquireWrite();
	if ( !(this->factories->remove(factory)) )  
		goto label_cond_1a;
	result = 0x1;
	this->clearCaches();
	//label_try_end_1a:
	}
	catch (...){
		goto label_catchall_25;
	}
	//    .catchall {:try_start_9 .. :try_end_1a} :catchall_25
label_cond_1a:
	this->factoryLock->releaseWrite();
	if ( !(result) )  
		goto label_cond_24;
	this->notifyChanged();
label_cond_24:
	return result;
	// 2550    .line 828
label_catchall_25:
	// move-exception
	
	this->factoryLock->releaseWrite();
	// throw
	throw;

}


