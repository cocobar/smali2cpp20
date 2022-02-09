// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICULocaleService$SimpleLocaleKeyFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKey.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKeyFactory.h"
#include "android.icu.impl.ICULocaleService_S_SimpleLocaleKeyFactory.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Map.h"

// .method public constructor <init>(Ljava/lang/Object;Landroid/icu/util/ULocale;IZ)V
android::icu::impl::ICULocaleService_S_SimpleLocaleKeyFactory::ICULocaleService_S_SimpleLocaleKeyFactory(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::util::ULocale> locale,int kind,bool visible)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .param p3, "kind"    # I
	//    .param p4, "visible"    # Z
	android::icu::impl::ICULocaleService_S_SimpleLocaleKeyFactory::(obj, locale, kind, visible, 0x0);
	return;

}
// .method public constructor <init>(Ljava/lang/Object;Landroid/icu/util/ULocale;IZLjava/lang/String;)V
android::icu::impl::ICULocaleService_S_SimpleLocaleKeyFactory::ICULocaleService_S_SimpleLocaleKeyFactory(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::util::ULocale> locale,int kind,bool visible,std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .param p3, "kind"    # I
	//    .param p4, "visible"    # Z
	//    .param p5, "name"    # Ljava/lang/String;
	android::icu::impl::ICULocaleService_S_LocaleKeyFactory::(visible, name);
	this->obj = obj;
	this->id = locale->getBaseName();
	this->kind = kind;
	return;

}
// .method public create(Landroid/icu/impl/ICUService$Key;Landroid/icu/impl/ICUService;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICULocaleService_S_SimpleLocaleKeyFactory::create(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<android::icu::impl::ICUService> service)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	std::shared_ptr<android::icu::impl::ICULocaleService_S_LocaleKey> lkey;
	
	//    .param p1, "key"    # Landroid/icu/impl/ICUService$Key;
	//    .param p2, "service"    # Landroid/icu/impl/ICUService;
	cVar0 = 0x0;
	if ( key->instanceOf("android::icu::impl::ICULocaleService_S_LocaleKey") )     
		goto label_cond_6;
	return cVar0;
label_cond_6:
	lkey = key;
	lkey->checkCast("android::icu::impl::ICULocaleService_S_LocaleKey");
	//    .local v0, "lkey":Landroid/icu/impl/ICULocaleService$LocaleKey;
	if ( this->kind == -0x1 )
		goto label_cond_17;
	if ( this->kind == lkey->kind() )
		goto label_cond_17;
	return cVar0;
	// 125    .line 513
label_cond_17:
	if ( this->id->equals(lkey->currentID()) )     
		goto label_cond_24;
	return cVar0;
	// 142    .line 517
label_cond_24:
	return this->obj;

}
// .method protected isSupportedID(Ljava/lang/String;)Z
bool android::icu::impl::ICULocaleService_S_SimpleLocaleKeyFactory::isSupportedID(std::shared_ptr<java::lang::String> idToCheck)
{
	
	//    .param p1, "idToCheck"    # Ljava/lang/String;
	return this->id->equals(idToCheck);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICULocaleService_S_SimpleLocaleKeyFactory::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	buf = std::make_shared<java::lang::StringBuilder>(this->toString());
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", id: ")));
	buf->append(this->id);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", kind: ")));
	buf->append(this->kind);
	return buf->toString();

}
// .method public updateVisibleIDs(Ljava/util/Map;)V
void android::icu::impl::ICULocaleService_S_SimpleLocaleKeyFactory::updateVisibleIDs(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_Factory>> result)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 209        value = {
	// 210            "(",
	// 211            "Ljava/util/Map",
	// 212            "<",
	// 213            "Ljava/lang/String;",
	// 214            "Landroid/icu/impl/ICUService$Factory;",
	// 215            ">;)V"
	// 216        }
	// 217    .end annotation
	//    .local p1, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
	if ( !(this->visible) )  
		goto label_cond_a;
	result->put(this->id, this);
label_goto_9:
	return;
	// 235    .line 530
label_cond_a:
	result->remove(this->id);
	goto label_goto_9;

}


