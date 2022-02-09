// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICULocaleService$LocaleKeyFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKey.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKeyFactory.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collections.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

static android::icu::impl::ICULocaleService_S_LocaleKeyFactory::INVISIBLE = false;
static android::icu::impl::ICULocaleService_S_LocaleKeyFactory::VISIBLE = true;
// .method protected constructor <init>(Z)V
android::icu::impl::ICULocaleService_S_LocaleKeyFactory::ICULocaleService_S_LocaleKeyFactory(bool visible)
{
	
	//    .param p1, "visible"    # Z
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->visible = visible;
	this->name = 0x0;
	return;

}
// .method protected constructor <init>(ZLjava/lang/String;)V
android::icu::impl::ICULocaleService_S_LocaleKeyFactory::ICULocaleService_S_LocaleKeyFactory(bool visible,std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "visible"    # Z
	//    .param p2, "name"    # Ljava/lang/String;
	// 060    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->visible = visible;
	this->name = name;
	return;

}
// .method public create(Landroid/icu/impl/ICUService$Key;Landroid/icu/impl/ICUService;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICULocaleService_S_LocaleKeyFactory::create(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<android::icu::impl::ICUService> service)
{
	
	std::shared_ptr<android::icu::impl::ICULocaleService_S_LocaleKey> lkey;
	
	//    .param p1, "key"    # Landroid/icu/impl/ICUService$Key;
	//    .param p2, "service"    # Landroid/icu/impl/ICUService;
	if ( !(this->handlesKey(key)) )  
		goto label_cond_16;
	lkey = key;
	lkey->checkCast("android::icu::impl::ICULocaleService_S_LocaleKey");
	//    .local v1, "lkey":Landroid/icu/impl/ICULocaleService$LocaleKey;
	//    .local v0, "kind":I
	//    .local v2, "uloc":Landroid/icu/util/ULocale;
	return this->handleCreate(lkey->currentLocale(), lkey->kind(), service);
	// 112    .line 393
	// 113    .end local v0    # "kind":I
	// 114    .end local v1    # "lkey":Landroid/icu/impl/ICULocaleService$LocaleKey;
	// 115    .end local v2    # "uloc":Landroid/icu/util/ULocale;
label_cond_16:
	return 0x0;

}
// .method public getDisplayName(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICULocaleService_S_LocaleKeyFactory::getDisplayName(std::shared_ptr<java::lang::String> id,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<android::icu::util::ULocale> loc;
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	if ( locale )     
		goto label_cond_3;
	return id;
	// 134    .line 430
label_cond_3:
	loc = std::make_shared<android::icu::util::ULocale>(id);
	//    .local v0, "loc":Landroid/icu/util/ULocale;
	return loc->getDisplayName(locale);

}
// .method protected getSupportedIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICULocaleService_S_LocaleKeyFactory::getSupportedIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 152        value = {
	// 153            "()",
	// 154            "Ljava/util/Set",
	// 155            "<",
	// 156            "Ljava/lang/String;",
	// 157            ">;"
	// 158        }
	// 159    .end annotation
	return java::util::Collections::emptySet({const[class].FS-Param});

}
// .method protected handleCreate(Landroid/icu/util/ULocale;ILandroid/icu/impl/ICUService;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICULocaleService_S_LocaleKeyFactory::handleCreate(std::shared_ptr<android::icu::util::ULocale> loc,int kind,std::shared_ptr<android::icu::impl::ICUService> service)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "kind"    # I
	//    .param p3, "service"    # Landroid/icu/impl/ICUService;
	return 0x0;

}
// .method protected handlesKey(Landroid/icu/impl/ICUService$Key;)Z
bool android::icu::impl::ICULocaleService_S_LocaleKeyFactory::handlesKey(std::shared_ptr<android::icu::impl::ICUService_S_Key> key)
{
	
	//    .param p1, "key"    # Landroid/icu/impl/ICUService$Key;
	if ( !(key) )  
		goto label_cond_f;
	//    .local v0, "id":Ljava/lang/String;
	//    .local v1, "supported":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	return this->getSupportedIDs()->contains(key->currentID());
	// 210    .line 402
	// 211    .end local v0    # "id":Ljava/lang/String;
	// 212    .end local v1    # "supported":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_f:
	return 0x0;

}
// .method protected isSupportedID(Ljava/lang/String;)Z
bool android::icu::impl::ICULocaleService_S_LocaleKeyFactory::isSupportedID(std::shared_ptr<java::lang::String> id)
{
	
	//    .param p1, "id"    # Ljava/lang/String;
	return this->getSupportedIDs()->contains(id);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICULocaleService_S_LocaleKeyFactory::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	buf = std::make_shared<java::lang::StringBuilder>(this->toString());
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	if ( !(this->name) )  
		goto label_cond_18;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", name: ")));
	buf->append(this->name);
label_cond_18:
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", visible: ")));
	buf->append(this->visible);
	return buf->toString();

}
// .method public updateVisibleIDs(Ljava/util/Map;)V
void android::icu::impl::ICULocaleService_S_LocaleKeyFactory::updateVisibleIDs(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_Factory>> result)
{
	
	std::shared_ptr<java::util::Iterator> id_S_iterator;
	std::shared_ptr<java::lang::String> id;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 287        value = {
	// 288            "(",
	// 289            "Ljava/util/Map",
	// 290            "<",
	// 291            "Ljava/lang/String;",
	// 292            "Landroid/icu/impl/ICUService$Factory;",
	// 293            ">;)V"
	// 294        }
	// 295    .end annotation
	//    .local p1, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
	//    .local v0, "cache":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	id_S_iterator = this->getSupportedIDs()->iterator();
	//    .local v2, "id$iterator":Ljava/util/Iterator;
label_goto_8:
	if ( !(id_S_iterator->hasNext()) )  
		goto label_cond_20;
	id = id_S_iterator->next();
	id->checkCast("java::lang::String");
	//    .local v1, "id":Ljava/lang/String;
	if ( !(this->visible) )  
		goto label_cond_1c;
	result->put(id, this);
	goto label_goto_8;
	// 335    .line 415
label_cond_1c:
	result->remove(id);
	goto label_goto_8;
	// 341    .line 418
	// 342    .end local v1    # "id":Ljava/lang/String;
label_cond_20:
	return;

}


