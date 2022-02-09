// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUService$SimpleFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService_S_SimpleFactory.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Map.h"

// .method public constructor <init>(Ljava/lang/Object;Ljava/lang/String;)V
android::icu::impl::ICUService_S_SimpleFactory::ICUService_S_SimpleFactory(std::shared_ptr<java::lang::Object> instance,std::shared_ptr<java::lang::String> id)
{
	
	//    .param p1, "instance"    # Ljava/lang/Object;
	//    .param p2, "id"    # Ljava/lang/String;
	android::icu::impl::ICUService_S_SimpleFactory::(instance, id, 0x1);
	return;

}
// .method public constructor <init>(Ljava/lang/Object;Ljava/lang/String;Z)V
android::icu::impl::ICUService_S_SimpleFactory::ICUService_S_SimpleFactory(std::shared_ptr<java::lang::Object> instance,std::shared_ptr<java::lang::String> id,bool visible)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "instance"    # Ljava/lang/Object;
	//    .param p2, "id"    # Ljava/lang/String;
	//    .param p3, "visible"    # Z
	// 052    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( !(instance) )  
		goto label_cond_7;
	if ( id )     
		goto label_cond_10;
label_cond_7:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Instance or id is null")));
	// throw
	throw cVar0;
	// 069    .line 293
label_cond_10:
	this->instance = instance;
	this->id = id;
	this->visible = visible;
	return;

}
// .method public create(Landroid/icu/impl/ICUService$Key;Landroid/icu/impl/ICUService;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICUService_S_SimpleFactory::create(std::shared_ptr<android::icu::impl::ICUService_S_Key> key,std::shared_ptr<android::icu::impl::ICUService> service)
{
	
	//    .param p1, "key"    # Landroid/icu/impl/ICUService$Key;
	//    .param p2, "service"    # Landroid/icu/impl/ICUService;
	if ( !(this->id->equals(key->currentID())) )  
		goto label_cond_f;
	return this->instance;
	// 109    .line 307
label_cond_f:
	return 0x0;

}
// .method public getDisplayName(Ljava/lang/String;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUService_S_SimpleFactory::getDisplayName(std::shared_ptr<java::lang::String> identifier,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	std::shared_ptr<java::lang::String> identifier;
	
	//    .param p1, "identifier"    # Ljava/lang/String;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	if ( !(this->visible) )  
		goto label_cond_d;
	if ( !(this->id->equals(identifier)) )  
		goto label_cond_d;
	//    .end local p1    # "identifier":Ljava/lang/String;
label_goto_c:
	return identifier;
	// 139    .restart local p1    # "identifier":Ljava/lang/String;
label_cond_d:
	identifier = 0x0;
	goto label_goto_c;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUService_S_SimpleFactory::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> buf;
	
	buf = std::make_shared<java::lang::StringBuilder>(this->toString());
	//    .local v0, "buf":Ljava/lang/StringBuilder;
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", id: ")));
	buf->append(this->id);
	buf->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", visible: ")));
	buf->append(this->visible);
	return buf->toString();

}
// .method public updateVisibleIDs(Ljava/util/Map;)V
void android::icu::impl::ICUService_S_SimpleFactory::updateVisibleIDs(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_Factory>> result)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 191        value = {
	// 192            "(",
	// 193            "Ljava/util/Map",
	// 194            "<",
	// 195            "Ljava/lang/String;",
	// 196            "Landroid/icu/impl/ICUService$Factory;",
	// 197            ">;)V"
	// 198        }
	// 199    .end annotation
	//    .local p1, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
	if ( !(this->visible) )  
		goto label_cond_a;
	result->put(this->id, this);
label_goto_9:
	return;
	// 217    .line 319
label_cond_a:
	result->remove(this->id);
	goto label_goto_9;

}


