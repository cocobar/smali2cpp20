// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TZDBTimeZoneNames.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.TZDBTimeZoneNames_S_TZDBNameInfo.h"
#include "android.icu.impl.TZDBTimeZoneNames_S_TZDBNameSearchHandler.h"
#include "android.icu.impl.TZDBTimeZoneNames_S_TZDBNames.h"
#include "android.icu.impl.TZDBTimeZoneNames.h"
#include "android.icu.impl.TextTrieMap.h"
#include "android.icu.impl.TimeZoneNamesImpl.h"
#include "android.icu.text.TimeZoneNames_S_MatchInfo.h"
#include "android.icu.text.TimeZoneNames_S_NameType.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.CharSequence.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collection.h"
#include "java.util.EnumSet.h"
#include "java.util.Iterator.h"
#include "java.util.Set.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

static android::icu::impl::TZDBTimeZoneNames::TZDB_NAMES_MAP;
static android::icu::impl::TZDBTimeZoneNames::TZDB_NAMES_TRIE = nullptr;
static android::icu::impl::TZDBTimeZoneNames::ZONESTRINGS;
static android::icu::impl::TZDBTimeZoneNames::serialVersionUID = 0x1L;
// .method static constructor <clinit>()V
void android::icu::impl::TZDBTimeZoneNames::static_cinit()
{
	
	std::shared_ptr<java::util::concurrent::ConcurrentHashMap> cVar0;
	std::shared_ptr<android::icu::impl::ICUResourceBundle> cVar1;
	
	cVar0 = std::make_shared<java::util::concurrent::ConcurrentHashMap>();
	android::icu::impl::TZDBTimeZoneNames::TZDB_NAMES_MAP = cVar0;
	android::icu::impl::TZDBTimeZoneNames::TZDB_NAMES_TRIE = 0x0;
	//    .local v0, "bundle":Landroid/icu/util/UResourceBundle;
	cVar1 = android::icu::impl::ICUResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b/zone")), std::make_shared<java::lang::String>(std::make_shared<char[]>("tzdbNames")))->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("zoneStrings")));
	cVar1->checkCast("android::icu::impl::ICUResourceBundle");
	android::icu::impl::TZDBTimeZoneNames::ZONESTRINGS = cVar1;
	return;

}
// .method public constructor <init>(Landroid/icu/util/ULocale;)V
android::icu::impl::TZDBTimeZoneNames::TZDBTimeZoneNames(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	// 101    invoke-direct {p0}, Landroid/icu/text/TimeZoneNames;-><init>()V
	this->_locale = loc;
	return;

}
// .method private static getMetaZoneNames(Ljava/lang/String;)Landroid/icu/impl/TZDBTimeZoneNames$TZDBNames;
std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNames> android::icu::impl::TZDBTimeZoneNames::getMetaZoneNames(std::shared_ptr<java::lang::String> mzID)
{
	
	std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNames> names;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::Object> names;
	std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNames> tmpNames;
	
	//    .param p0, "mzID"    # Ljava/lang/String;
	names = android::icu::impl::TZDBTimeZoneNames::TZDB_NAMES_MAP->get(mzID);
	names->checkCast("android::icu::impl::TZDBTimeZoneNames_S_TZDBNames");
	//    .local v0, "names":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNames;
	if ( names )     
		goto label_cond_32;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	names = android::icu::impl::TZDBTimeZoneNames_S_TZDBNames::getInstance(android::icu::impl::TZDBTimeZoneNames::ZONESTRINGS, cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("meta:")))->append(mzID)->toString());
	tmpNames = android::icu::impl::TZDBTimeZoneNames::TZDB_NAMES_MAP->putIfAbsent(mzID->intern(), names);
	tmpNames->checkCast("android::icu::impl::TZDBTimeZoneNames_S_TZDBNames");
	//    .local v1, "tmpNames":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNames;
	if ( tmpNames )     
		goto label_cond_33;
	//    .end local v1    # "tmpNames":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNames;
label_cond_32:
label_goto_32:
	return names;
	// 177    .line 343
	// 178    .restart local v1    # "tmpNames":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNames;
label_cond_33:
	names = tmpNames;
	goto label_goto_32;

}
// .method private getTargetRegion()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TZDBTimeZoneNames::getTargetRegion()
{
	
	std::shared_ptr<java::lang::String> region;
	
	if ( this->_region )     
		goto label_cond_25;
	region = this->_locale->getCountry();
	//    .local v0, "region":Ljava/lang/String;
	if ( region->length() )     
		goto label_cond_23;
	//    .local v1, "tmp":Landroid/icu/util/ULocale;
	region = android::icu::util::ULocale::addLikelySubtags(this->_locale)->getCountry();
	if ( region->length() )     
		goto label_cond_23;
	//    .end local v1    # "tmp":Landroid/icu/util/ULocale;
label_cond_23:
	this->_region = region;
	//    .end local v0    # "region":Ljava/lang/String;
label_cond_25:
	return this->_region;

}
// .method private static prepareFind()V
void android::icu::impl::TZDBTimeZoneNames::prepareFind()
{
	
	std::shared_ptr<android::icu::impl::TZDBTimeZoneNames> cVar0;
	std::shared_ptr<android::icu::impl::TextTrieMap> trie;
	std::shared_ptr<java::util::Iterator> mzID_S_iterator;
	std::shared_ptr<java::lang::String> mzID;
	std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNames> names;
	std::shared_ptr<java::lang::String> std;
	std::shared_ptr<java::lang::Object> dst;
	std::shared_ptr<std::vector<java::lang::String>> parseRegions;
	bool cVar1;
	std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNameInfo> stdInf;
	std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNameInfo> dstInf;
	
	if ( android::icu::impl::TZDBTimeZoneNames::TZDB_NAMES_TRIE )     
		goto label_cond_6a;
	cVar0 = android::icu::impl::TZDBTimeZoneNames();
	cVar0->monitor_enter();
	try {
	//label_try_start_7:
	if ( android::icu::impl::TZDBTimeZoneNames::TZDB_NAMES_TRIE )     
		goto label_cond_69;
	trie = std::make_shared<android::icu::impl::TextTrieMap>(0x1);
	//    .local v10, "trie":Landroid/icu/impl/TextTrieMap;, "Landroid/icu/impl/TextTrieMap<Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;>;"
	//    .local v5, "mzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	mzID_S_iterator = android::icu::impl::TimeZoneNamesImpl::_getAvailableMetaZoneIDs({const[class].FS-Param})->iterator();
	//    .local v4, "mzID$iterator":Ljava/util/Iterator;
label_cond_19:
label_goto_19:
	if ( !(mzID_S_iterator->hasNext()) )  
		goto label_cond_67;
	mzID = mzID_S_iterator->next();
	mzID->checkCast("java::lang::String");
	//    .local v3, "mzID":Ljava/lang/String;
	names = android::icu::impl::TZDBTimeZoneNames::getMetaZoneNames(mzID);
	//    .local v6, "names":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNames;
	std = names->getName(android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD);
	//    .local v8, "std":Ljava/lang/String;
	dst = names->getName(android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT);
	//    .local v1, "dst":Ljava/lang/String;
	if ( std )     
		goto label_cond_39;
	if ( !(dst) )  
		goto label_cond_19;
label_cond_39:
	parseRegions = names->getParseRegions();
	//    .local v7, "parseRegions":[Ljava/lang/String;
	mzID = mzID->intern();
	if ( !(std) )  
		goto label_cond_65;
	if ( !(dst) )  
		goto label_cond_65;
	cVar1 = std->equals(dst);
label_goto_49:
	if ( !(std) )  
		goto label_cond_55;
	stdInf = std::make_shared<android::icu::impl::TZDBTimeZoneNames_S_TZDBNameInfo>(mzID, android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD, cVar1, parseRegions);
	//    .local v9, "stdInf":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
	trie->put(std, stdInf);
	//    .end local v9    # "stdInf":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
label_cond_55:
	if ( !(dst) )  
		goto label_cond_19;
	dstInf = std::make_shared<android::icu::impl::TZDBTimeZoneNames_S_TZDBNameInfo>(mzID, android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT, cVar1, parseRegions);
	//    .local v2, "dstInf":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
	trie->put(dst, dstInf);
	//label_try_end_61:
	}
	catch (...){
		goto label_catchall_62;
	}
	//    .catchall {:try_start_7 .. :try_end_61} :catchall_62
	goto label_goto_19;
	// 387    .line 350
	// 388    .end local v1    # "dst":Ljava/lang/String;
	// 389    .end local v2    # "dstInf":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameInfo;
	// 390    .end local v3    # "mzID":Ljava/lang/String;
	// 391    .end local v4    # "mzID$iterator":Ljava/util/Iterator;
	// 392    .end local v5    # "mzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 393    .end local v6    # "names":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNames;
	// 394    .end local v7    # "parseRegions":[Ljava/lang/String;
	// 395    .end local v8    # "std":Ljava/lang/String;
label_catchall_62:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 403    .line 370
	// 404    .restart local v1    # "dst":Ljava/lang/String;
	// 405    .restart local v3    # "mzID":Ljava/lang/String;
	// 406    .restart local v4    # "mzID$iterator":Ljava/util/Iterator;
	// 407    .restart local v5    # "mzIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	// 408    .restart local v6    # "names":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNames;
	// 409    .restart local v7    # "parseRegions":[Ljava/lang/String;
	// 410    .restart local v8    # "std":Ljava/lang/String;
label_cond_65:
	0x0;
	//    .local v0, "ambiguousType":Z
	goto label_goto_49;
	// 417    .line 387
	// 418    .end local v0    # "ambiguousType":Z
	// 419    .end local v1    # "dst":Ljava/lang/String;
	// 420    .end local v3    # "mzID":Ljava/lang/String;
	// 421    .end local v6    # "names":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNames;
	// 422    .end local v7    # "parseRegions":[Ljava/lang/String;
	// 423    .end local v8    # "std":Ljava/lang/String;
label_cond_67:
	try {
	//label_try_start_67:
	android::icu::impl::TZDBTimeZoneNames::TZDB_NAMES_TRIE = trie;
	//label_try_end_69:
	}
	catch (...){
		goto label_catchall_62;
	}
	//    .catchall {:try_start_67 .. :try_end_69} :catchall_62
label_cond_69:
	cVar0->monitor_exit();
label_cond_6a:
	return;

}
// .method public find(Ljava/lang/CharSequence;ILjava/util/EnumSet;)Ljava/util/Collection;
std::shared_ptr<java::util::Collection<android::icu::text::TimeZoneNames_S_MatchInfo>> android::icu::impl::TZDBTimeZoneNames::find(std::shared_ptr<java::lang::CharSequence> text,int start,std::shared_ptr<java::util::EnumSet<android::icu::text::TimeZoneNames_S_NameType>> nameTypes)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<android::icu::impl::TZDBTimeZoneNames_S_TZDBNameSearchHandler> handler;
	
	//    .param p1, "text"    # Ljava/lang/CharSequence;
	//    .param p2, "start"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 445        value = {
	// 446            "(",
	// 447            "Ljava/lang/CharSequence;",
	// 448            "I",
	// 449            "Ljava/util/EnumSet",
	// 450            "<",
	// 451            "Landroid/icu/text/TimeZoneNames$NameType;",
	// 452            ">;)",
	// 453            "Ljava/util/Collection",
	// 454            "<",
	// 455            "Landroid/icu/text/TimeZoneNames$MatchInfo;",
	// 456            ">;"
	// 457        }
	// 458    .end annotation
	//    .local p3, "nameTypes":Ljava/util/EnumSet;, "Ljava/util/EnumSet<Landroid/icu/text/TimeZoneNames$NameType;>;"
	if ( !(text) )  
		goto label_cond_8;
	if ( text->length() )     
		goto label_cond_11;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("bad input text or range")));
	// throw
	throw cVar0;
	// 481    .line 131
label_cond_11:
	if ( start < 0 ) 
		goto label_cond_8;
	if ( start >= text->length() )
		goto label_cond_8;
	android::icu::impl::TZDBTimeZoneNames::prepareFind({const[class].FS-Param});
	handler = std::make_shared<android::icu::impl::TZDBTimeZoneNames_S_TZDBNameSearchHandler>(nameTypes, this->getTargetRegion());
	//    .local v0, "handler":Landroid/icu/impl/TZDBTimeZoneNames$TZDBNameSearchHandler;
	android::icu::impl::TZDBTimeZoneNames::TZDB_NAMES_TRIE->find(text, start, handler);
	return handler->getMatches();

}
// .method public getAvailableMetaZoneIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::TZDBTimeZoneNames::getAvailableMetaZoneIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 520        value = {
	// 521            "()",
	// 522            "Ljava/util/Set",
	// 523            "<",
	// 524            "Ljava/lang/String;",
	// 525            ">;"
	// 526        }
	// 527    .end annotation
	return android::icu::impl::TimeZoneNamesImpl::_getAvailableMetaZoneIDs({const[class].FS-Param});

}
// .method public getAvailableMetaZoneIDs(Ljava/lang/String;)Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::TZDBTimeZoneNames::getAvailableMetaZoneIDs(std::shared_ptr<java::lang::String> tzID)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 542        value = {
	// 543            "(",
	// 544            "Ljava/lang/String;",
	// 545            ")",
	// 546            "Ljava/util/Set",
	// 547            "<",
	// 548            "Ljava/lang/String;",
	// 549            ">;"
	// 550        }
	// 551    .end annotation
	return android::icu::impl::TimeZoneNamesImpl::_getAvailableMetaZoneIDs(tzID);

}
// .method public getMetaZoneDisplayName(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TZDBTimeZoneNames::getMetaZoneDisplayName(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type)
{
	
	//    .param p1, "mzID"    # Ljava/lang/String;
	//    .param p2, "type"    # Landroid/icu/text/TimeZoneNames$NameType;
	if ( !(mzID) )  
		goto label_cond_9;
	if ( mzID->length() )     
		goto label_cond_a;
label_cond_9:
	return 0x0;
	// 583    .line 103
label_cond_a:
	if ( type == android::icu::text::TimeZoneNames_S_NameType::SHORT_STANDARD )
		goto label_cond_12;
	if ( type != android::icu::text::TimeZoneNames_S_NameType::SHORT_DAYLIGHT )
		goto label_cond_9;
label_cond_12:
	return android::icu::impl::TZDBTimeZoneNames::getMetaZoneNames(mzID)->getName(type);

}
// .method public getMetaZoneID(Ljava/lang/String;J)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TZDBTimeZoneNames::getMetaZoneID(std::shared_ptr<java::lang::String> tzID,long long date)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .param p2, "date"    # J
	return android::icu::impl::TimeZoneNamesImpl::_getMetaZoneID(tzID, date);

}
// .method public getReferenceZoneID(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TZDBTimeZoneNames::getReferenceZoneID(std::shared_ptr<java::lang::String> mzID,std::shared_ptr<java::lang::String> region)
{
	
	//    .param p1, "mzID"    # Ljava/lang/String;
	//    .param p2, "region"    # Ljava/lang/String;
	return android::icu::impl::TimeZoneNamesImpl::_getReferenceZoneID(mzID, region);

}
// .method public getTimeZoneDisplayName(Ljava/lang/String;Landroid/icu/text/TimeZoneNames$NameType;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TZDBTimeZoneNames::getTimeZoneDisplayName(std::shared_ptr<java::lang::String> tzID,std::shared_ptr<android::icu::text::TimeZoneNames_S_NameType> type)
{
	
	//    .param p1, "tzID"    # Ljava/lang/String;
	//    .param p2, "type"    # Landroid/icu/text/TimeZoneNames$NameType;
	return 0x0;

}


