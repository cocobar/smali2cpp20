// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TimeZoneNamesImpl$ZoneStringsLoader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZNames.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZNamesLoader.h"
#include "android.icu.impl.TimeZoneNamesImpl_S_ZoneStringsLoader.h"
#include "android.icu.impl.TimeZoneNamesImpl.h"
#include "android.icu.impl.UResource_S_Key.h"
#include "android.icu.impl.UResource_S_Table.h"
#include "android.icu.impl.UResource_S_Value.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.Map_S_Entry.h"
#include "java.util.Map.h"
#include "java.util.Set.h"
#include "java.util.concurrent.ConcurrentHashMap.h"

static android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::_assertionsDisabled;
static android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::INITIAL_NUM_ZONES = 0x12c;
// .method static constructor <clinit>()V
void android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::static_cinit()
{
	
	android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::_assertionsDisabled = ( android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method private constructor <init>(Landroid/icu/impl/TimeZoneNamesImpl;)V
android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::TimeZoneNamesImpl_S_ZoneStringsLoader(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> this_S_0)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "this$0"    # Landroid/icu/impl/TimeZoneNamesImpl;
	this->this_S_0 = this_S_0;
	// 070    invoke-direct {p0}, Landroid/icu/impl/UResource$Sink;-><init>()V
	cVar0 = std::make_shared<java::util::HashMap>(0x12c);
	this->keyToLoader = cVar0;
	cVar1 = std::make_shared<java::lang::StringBuilder>(0x20);
	this->sb = cVar1;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/impl/TimeZoneNamesImpl;Landroid/icu/impl/TimeZoneNamesImpl$ZoneStringsLoader;)V
android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::TimeZoneNamesImpl_S_ZoneStringsLoader(std::shared_ptr<android::icu::impl::TimeZoneNamesImpl> this_S_0,std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader> _this1)
{
	
	//    .param p1, "this$0"    # Landroid/icu/impl/TimeZoneNamesImpl;
	//    .param p2, "-this1"    # Landroid/icu/impl/TimeZoneNamesImpl$ZoneStringsLoader;
	android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::(this_S_0);
	return;

}
// .method private consumeNamesTable(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::consumeNamesTable(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> cVar0;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> loader;
	std::shared_ptr<java::lang::Object> loader;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	cVar0 = 0x0;
	loader = this->keyToLoader->get(key);
	loader->checkCast("android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader");
	//    .local v0, "loader":Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
	if ( loader )     
		goto label_cond_2e;
	if ( !(this->isMetaZone(key)) )  
		goto label_cond_3e;
	//    .local v1, "mzID":Ljava/lang/String;
	if ( !(android::icu::impl::TimeZoneNamesImpl::-get0(this->this_S_0)->containsKey(this->mzIDFromKey(key))) )  
		goto label_cond_38;
	loader = android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::-get0({const[class].FS-Param});
	//    .end local v1    # "mzID":Ljava/lang/String;
label_goto_25:
	//    .local v2, "newKey":Landroid/icu/impl/UResource$Key;
	this->keyToLoader->put(this->createKey(key), loader);
	//    .end local v2    # "newKey":Landroid/icu/impl/UResource$Key;
label_cond_2e:
	if ( loader == android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::-get0({const[class].FS-Param}) )
		goto label_cond_37;
	loader->put(key, value, noFallback);
label_cond_37:
	return;
	// 188    .line 359
	// 189    .restart local v1    # "mzID":Ljava/lang/String;
label_cond_38:
	//    .end local v0    # "loader":Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
	loader = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader>(cVar0);
	//    .restart local v0    # "loader":Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
	goto label_goto_25;
	// 199    .line 362
	// 200    .end local v1    # "mzID":Ljava/lang/String;
label_cond_3e:
	//    .local v3, "tzID":Ljava/lang/String;
	if ( !(android::icu::impl::TimeZoneNamesImpl::-get1(this->this_S_0)->containsKey(this->tzIDFromKey(key))) )  
		goto label_cond_53;
	loader = android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::-get0({const[class].FS-Param});
	goto label_goto_25;
	// 227    .line 367
label_cond_53:
	//    .end local v0    # "loader":Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
	loader = std::make_shared<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader>(cVar0);
	//    .restart local v0    # "loader":Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
	goto label_goto_25;

}
// .method private mzIDFromKey(Landroid/icu/impl/UResource$Key;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::mzIDFromKey(std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	int i;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	this->sb->setLength(0x0);
	i = std::make_shared<java::lang::String>(std::make_shared<char[]>("meta:"))->length();
	//    .local v0, "i":I
label_goto_d:
	if ( i >= key->length() )
		goto label_cond_1f;
	this->sb->append(key->charAt(i));
	i = ( i + 0x1);
	goto label_goto_d;
	// 279    .line 398
label_cond_1f:
	return this->sb->toString();

}
// .method private tzIDFromKey(Landroid/icu/impl/UResource$Key;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::tzIDFromKey(std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	int i;
	char c;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	this->sb->setLength(0x0);
	i = 0x0;
	//    .local v1, "i":I
label_goto_7:
	if ( i >= key->length() )
		goto label_cond_1f;
	c = key->charAt(i);
	//    .local v0, "c":C
	if ( c != 0x3a )
		goto label_cond_17;
	//    .end local v0    # "c":C
label_cond_17:
	this->sb->append(c);
	i = ( i + 0x1);
	goto label_goto_7;
	// 339    .line 410
label_cond_1f:
	return this->sb->toString();

}
// .method createKey(Landroid/icu/impl/UResource$Key;)Landroid/icu/impl/UResource$Key;
std::shared_ptr<android::icu::impl::UResource_S_Key> android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::createKey(std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	return key->clone();

}
// .method isMetaZone(Landroid/icu/impl/UResource$Key;)Z
bool android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::isMetaZone(std::shared_ptr<android::icu::impl::UResource_S_Key> key)
{
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	return key->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("meta:")));

}
// .method load()V
void android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::load()
{
	
	std::shared_ptr<java::util::Iterator> entry_S_iterator;
	std::shared_ptr<java::util::Map_S_Entry> entry;
	std::shared_ptr<android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader> loader;
	std::shared_ptr<android::icu::impl::UResource_S_Key> key;
	
	android::icu::impl::TimeZoneNamesImpl::-get2(this->this_S_0)->getAllItemsWithFallback(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), this);
	entry_S_iterator = this->keyToLoader->entrySet()->iterator();
	//    .local v1, "entry$iterator":Ljava/util/Iterator;
label_cond_16:
label_goto_16:
	if ( !(entry_S_iterator->hasNext()) )  
		goto label_cond_5e;
	entry = entry_S_iterator->next();
	entry->checkCast("java::util::Map_S_Entry");
	//    .local v0, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Landroid/icu/impl/UResource$Key;Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;>;"
	loader = entry->getValue();
	loader->checkCast("android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader");
	//    .local v3, "loader":Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
	if ( loader == android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::-get0({const[class].FS-Param}) )
		goto label_cond_16;
	key = entry->getKey();
	key->checkCast("android::icu::impl::UResource_S_Key");
	//    .local v2, "key":Landroid/icu/impl/UResource$Key;
	if ( !(this->isMetaZone(key)) )  
		goto label_cond_4c;
	//    .local v4, "mzID":Ljava/lang/String;
	android::icu::impl::TimeZoneNamesImpl_S_ZNames::createMetaZoneAndPutInCache(android::icu::impl::TimeZoneNamesImpl::-get0(this->this_S_0), android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::-wrap0(loader), this->mzIDFromKey(key));
	goto label_goto_16;
	// 473    .line 330
	// 474    .end local v4    # "mzID":Ljava/lang/String;
label_cond_4c:
	//    .local v5, "tzID":Ljava/lang/String;
	android::icu::impl::TimeZoneNamesImpl_S_ZNames::createTimeZoneAndPutInCache(android::icu::impl::TimeZoneNamesImpl::-get1(this->this_S_0), android::icu::impl::TimeZoneNamesImpl_S_ZNamesLoader::-wrap0(loader), this->tzIDFromKey(key));
	goto label_goto_16;
	// 496    .line 334
	// 497    .end local v0    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Landroid/icu/impl/UResource$Key;Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;>;"
	// 498    .end local v2    # "key":Landroid/icu/impl/UResource$Key;
	// 499    .end local v3    # "loader":Landroid/icu/impl/TimeZoneNamesImpl$ZNamesLoader;
	// 500    .end local v5    # "tzID":Ljava/lang/String;
label_cond_5e:
	return;

}
// .method public put(Landroid/icu/impl/UResource$Key;Landroid/icu/impl/UResource$Value;Z)V
void android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::put(std::shared_ptr<android::icu::impl::UResource_S_Key> key,std::shared_ptr<android::icu::impl::UResource_S_Value> value,bool noFallback)
{
	
	int j;
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	//    .param p1, "key"    # Landroid/icu/impl/UResource$Key;
	//    .param p2, "value"    # Landroid/icu/impl/UResource$Value;
	//    .param p3, "noFallback"    # Z
	//    .local v1, "timeZonesTable":Landroid/icu/impl/UResource$Table;
	j = 0x0;
	//    .local v0, "j":I
label_goto_5:
	if ( !(value->getTable()->getKeyAndValue(j, key, value)) )  
		goto label_cond_28;
	if ( android::icu::impl::TimeZoneNamesImpl_S_ZoneStringsLoader::_assertionsDisabled )     
		goto label_cond_1b;
	if ( !(value->isNoInheritanceMarker()) )  
		goto label_cond_1b;
	cVar0 = std::make_shared<java::lang::AssertionError>();
	// throw
	throw cVar0;
	// 546    .line 341
label_cond_1b:
	if ( value->getType() != 0x2 )
		goto label_cond_25;
	this->consumeNamesTable(key, value, noFallback);
label_cond_25:
	j = ( j + 0x1);
	goto label_goto_5;
	// 565    .line 348
label_cond_28:
	return;

}


