// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICULocaleService.smali
#include "java2ctype.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKey.h"
#include "android.icu.impl.ICULocaleService_S_SimpleLocaleKeyFactory.h"
#include "android.icu.impl.ICULocaleService.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService_S_Key.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.impl.LocaleUtility.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Iterator.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

// .method public constructor <init>()V
android::icu::impl::ICULocaleService::ICULocaleService()
{
	
	// 029    invoke-direct {p0}, Landroid/icu/impl/ICUService;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::ICULocaleService::ICULocaleService(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	android::icu::impl::ICUService::(name);
	return;

}
// .method public createKey(Landroid/icu/util/ULocale;I)Landroid/icu/impl/ICUService$Key;
std::shared_ptr<android::icu::impl::ICUService_S_Key> android::icu::impl::ICULocaleService::createKey(std::shared_ptr<android::icu::util::ULocale> l,int kind)
{
	
	//    .param p1, "l"    # Landroid/icu/util/ULocale;
	//    .param p2, "kind"    # I
	return android::icu::impl::ICULocaleService_S_LocaleKey::createWithCanonical(l, this->validateFallbackLocale(), kind);

}
// .method public createKey(Ljava/lang/String;)Landroid/icu/impl/ICUService$Key;
std::shared_ptr<android::icu::impl::ICUService_S_Key> android::icu::impl::ICULocaleService::createKey(std::shared_ptr<java::lang::String> id)
{
	
	//    .param p1, "id"    # Ljava/lang/String;
	return android::icu::impl::ICULocaleService_S_LocaleKey::createWithCanonicalFallback(id, this->validateFallbackLocale());

}
// .method public createKey(Ljava/lang/String;I)Landroid/icu/impl/ICUService$Key;
std::shared_ptr<android::icu::impl::ICUService_S_Key> android::icu::impl::ICULocaleService::createKey(std::shared_ptr<java::lang::String> id,int kind)
{
	
	//    .param p1, "id"    # Ljava/lang/String;
	//    .param p2, "kind"    # I
	return android::icu::impl::ICULocaleService_S_LocaleKey::createWithCanonicalFallback(id, this->validateFallbackLocale(), kind);

}
// .method public get(Landroid/icu/util/ULocale;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICULocaleService::get(std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	return this->get(locale, -0x1, 0x0);

}
// .method public get(Landroid/icu/util/ULocale;I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICULocaleService::get(std::shared_ptr<android::icu::util::ULocale> locale,int kind)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "kind"    # I
	return this->get(locale, kind, 0x0);

}
// .method public get(Landroid/icu/util/ULocale;I[Landroid/icu/util/ULocale;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICULocaleService::get(std::shared_ptr<android::icu::util::ULocale> locale,int kind,std::shared_ptr<std::vector<android::icu::util::ULocale>> actualReturn)
{
	
	int cVar0;
	std::shared_ptr<android::icu::impl::ICUService_S_Key> key;
	std::shared<std::vector<std::vector<java::lang::String>>> temp;
	std::shared_ptr<java::lang::Object> result;
	int n;
	std::shared_ptr<android::icu::util::ULocale> cVar1;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "kind"    # I
	//    .param p3, "actualReturn"    # [Landroid/icu/util/ULocale;
	cVar0 = 0x0;
	key = this->createKey(locale, kind);
	//    .local v0, "key":Landroid/icu/impl/ICUService$Key;
	if ( actualReturn )     
		goto label_cond_c;
	return this->getKey(key);
	// 160    .line 76
label_cond_c:
	temp = std::make_shared<std::vector<std::vector<java::lang::String>>>(0x1);
	//    .local v3, "temp":[Ljava/lang/String;
	result = this->getKey(key, temp);
	//    .local v2, "result":Ljava/lang/Object;
	if ( !(result) )  
		goto label_cond_33;
	n = temp[cVar0]->indexOf(std::make_shared<java::lang::String>(std::make_shared<char[]>("/")));
	//    .local v1, "n":I
	if ( n < 0 ) 
		goto label_cond_2a;
	temp[cVar0] = temp[cVar0]->substring(( n + 0x1));
label_cond_2a:
	cVar1 = std::make_shared<android::icu::util::ULocale>(temp[cVar0]);
	actualReturn[cVar0] = cVar1;
	//    .end local v1    # "n":I
label_cond_33:
	return result;

}
// .method public get(Landroid/icu/util/ULocale;[Landroid/icu/util/ULocale;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICULocaleService::get(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<std::vector<android::icu::util::ULocale>> actualReturn)
{
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "actualReturn"    # [Landroid/icu/util/ULocale;
	return this->get(locale, -0x1, actualReturn);

}
// .method public getAvailableLocales()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::impl::ICULocaleService::getAvailableLocales()
{
	
	std::shared_ptr<java::util::Set> visIDs;
	std::shared<std::vector<std::vector<java::util::Locale>>> locales;
	int n;
	std::shared_ptr<java::util::Iterator> id_S_iterator;
	std::shared_ptr<java::lang::String> id;
	
	visIDs = this->getVisibleIDs();
	//    .local v6, "visIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	locales = std::make_shared<std::vector<std::vector<java::util::Locale>>>(visIDs->size());
	//    .local v3, "locales":[Ljava/util/Locale;
	n = 0x0;
	//    .local v4, "n":I
	id_S_iterator = visIDs->iterator();
	//    .local v1, "id$iterator":Ljava/util/Iterator;
label_goto_f:
	if ( !(id_S_iterator->hasNext()) )  
		goto label_cond_25;
	id = id_S_iterator->next();
	id->checkCast("java::lang::String");
	//    .local v0, "id":Ljava/lang/String;
	//    .local v2, "loc":Ljava/util/Locale;
	//    .end local v4    # "n":I
	//    .local v5, "n":I
	locales[n] = android::icu::impl::LocaleUtility::getLocaleFromName(id);
	n = ( n + 0x1);
	//    .end local v5    # "n":I
	//    .restart local v4    # "n":I
	goto label_goto_f;
	// 293    .line 137
	// 294    .end local v0    # "id":Ljava/lang/String;
	// 295    .end local v2    # "loc":Ljava/util/Locale;
label_cond_25:
	return locales;

}
// .method public getAvailableULocales()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::ICULocaleService::getAvailableULocales()
{
	
	std::shared_ptr<java::util::Set> visIDs;
	std::shared<std::vector<std::vector<android::icu::util::ULocale>>> locales;
	int n;
	std::shared_ptr<java::util::Iterator> id_S_iterator;
	std::shared_ptr<java::lang::String> id;
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	visIDs = this->getVisibleIDs();
	//    .local v5, "visIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	locales = std::make_shared<std::vector<std::vector<android::icu::util::ULocale>>>(visIDs->size());
	//    .local v2, "locales":[Landroid/icu/util/ULocale;
	n = 0x0;
	//    .local v3, "n":I
	id_S_iterator = visIDs->iterator();
	//    .local v1, "id$iterator":Ljava/util/Iterator;
label_goto_f:
	if ( !(id_S_iterator->hasNext()) )  
		goto label_cond_26;
	id = id_S_iterator->next();
	id->checkCast("java::lang::String");
	//    .local v0, "id":Ljava/lang/String;
	//    .end local v3    # "n":I
	//    .local v4, "n":I
	cVar0 = std::make_shared<android::icu::util::ULocale>(id);
	locales[n] = cVar0;
	n = ( n + 0x1);
	//    .end local v4    # "n":I
	//    .restart local v3    # "n":I
	goto label_goto_f;
	// 359    .line 151
	// 360    .end local v0    # "id":Ljava/lang/String;
label_cond_26:
	return locales;

}
// .method public registerObject(Ljava/lang/Object;Landroid/icu/util/ULocale;)Landroid/icu/impl/ICUService$Factory;
std::shared_ptr<android::icu::impl::ICUService_S_Factory> android::icu::impl::ICULocaleService::registerObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::util::ULocale> locale)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	return this->registerObject(obj, locale, -0x1, 0x1);

}
// .method public registerObject(Ljava/lang/Object;Landroid/icu/util/ULocale;I)Landroid/icu/impl/ICUService$Factory;
std::shared_ptr<android::icu::impl::ICUService_S_Factory> android::icu::impl::ICULocaleService::registerObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::util::ULocale> locale,int kind)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .param p3, "kind"    # I
	return this->registerObject(obj, locale, kind, 0x1);

}
// .method public registerObject(Ljava/lang/Object;Landroid/icu/util/ULocale;IZ)Landroid/icu/impl/ICUService$Factory;
std::shared_ptr<android::icu::impl::ICUService_S_Factory> android::icu::impl::ICULocaleService::registerObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::util::ULocale> locale,int kind,bool visible)
{
	
	std::shared_ptr<android::icu::impl::ICULocaleService_S_SimpleLocaleKeyFactory> factory;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .param p3, "kind"    # I
	//    .param p4, "visible"    # Z
	factory = std::make_shared<android::icu::impl::ICULocaleService_S_SimpleLocaleKeyFactory>(obj, locale, kind, visible);
	//    .local v0, "factory":Landroid/icu/impl/ICUService$Factory;
	return this->registerFactory(factory);

}
// .method public registerObject(Ljava/lang/Object;Landroid/icu/util/ULocale;Z)Landroid/icu/impl/ICUService$Factory;
std::shared_ptr<android::icu::impl::ICUService_S_Factory> android::icu::impl::ICULocaleService::registerObject(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<android::icu::util::ULocale> locale,bool visible)
{
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .param p2, "locale"    # Landroid/icu/util/ULocale;
	//    .param p3, "visible"    # Z
	return this->registerObject(obj, locale, -0x1, visible);

}
// .method public validateFallbackLocale()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICULocaleService::validateFallbackLocale()
{
	
	std::shared_ptr<android::icu::util::ULocale> loc;
	
	loc = android::icu::util::ULocale::getDefault({const[class].FS-Param});
	//    .local v0, "loc":Landroid/icu/util/ULocale;
	if ( loc == this->fallbackLocale )
		goto label_cond_19;
	this->monitor_enter();
	try {
	//label_try_start_9:
	if ( loc == this->fallbackLocale )
		goto label_cond_18;
	this->fallbackLocale = loc;
	this->fallbackLocaleName = loc->getBaseName();
	this->clearServiceCache();
	//label_try_end_18:
	}
	catch (...){
		goto label_catchall_1c;
	}
	//    .catchall {:try_start_9 .. :try_end_18} :catchall_1c
label_cond_18:
	this->monitor_exit();
label_cond_19:
	return this->fallbackLocaleName;
	// 487    .line 617
label_catchall_1c:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


