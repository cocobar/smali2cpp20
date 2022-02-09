// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\ListFormatter$Cache.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUCache.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.SimpleCache.h"
#include "android.icu.text.ListFormatter_S_Cache.h"
#include "android.icu.text.ListFormatter.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"

// .method private constructor <init>()V
android::icu::text::ListFormatter_S_Cache::ListFormatter_S_Cache()
{
	
	std::shared_ptr<android::icu::impl::SimpleCache> cVar0;
	
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<android::icu::impl::SimpleCache>();
	this->cache = cVar0;
	return;

}
// .method synthetic constructor <init>(Landroid/icu/text/ListFormatter$Cache;)V
android::icu::text::ListFormatter_S_Cache::ListFormatter_S_Cache(std::shared_ptr<android::icu::text::ListFormatter_S_Cache> _this0)
{
	
	//    .param p1, "-this0"    # Landroid/icu/text/ListFormatter$Cache;
	// 056    invoke-direct {p0}, Landroid/icu/text/ListFormatter$Cache;-><init>()V
	return;

}
// .method private static load(Landroid/icu/util/ULocale;Ljava/lang/String;)Landroid/icu/text/ListFormatter;
std::shared_ptr<android::icu::text::ListFormatter> android::icu::text::ListFormatter_S_Cache::load(std::shared_ptr<android::icu::util::ULocale> ulocale,std::shared_ptr<java::lang::String> style)
{
	
	std::shared_ptr<android::icu::impl::ICUResourceBundle> r;
	std::shared_ptr<java::lang::StringBuilder> sb;
	std::shared_ptr<android::icu::text::ListFormatter> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	std::shared_ptr<java::lang::StringBuilder> cVar4;
	
	//    .param p0, "ulocale"    # Landroid/icu/util/ULocale;
	//    .param p1, "style"    # Ljava/lang/String;
	r = android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), ulocale);
	r->checkCast("android::icu::impl::ICUResourceBundle");
	//    .local v7, "r":Landroid/icu/impl/ICUResourceBundle;
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v8, "sb":Ljava/lang/StringBuilder;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar4 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<android::icu::text::ListFormatter>(android::icu::text::ListFormatter::-wrap0(r->getWithFallback(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("listPattern/")))->append(style)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/2")))->toString())->getString(), sb), android::icu::text::ListFormatter::-wrap0(r->getWithFallback(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("listPattern/")))->append(style)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/start")))->toString())->getString(), sb), android::icu::text::ListFormatter::-wrap0(r->getWithFallback(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("listPattern/")))->append(style)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/middle")))->toString())->getString(), sb), android::icu::text::ListFormatter::-wrap0(r->getWithFallback(cVar4->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("listPattern/")))->append(style)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("/end")))->toString())->getString(), sb), ulocale, 0x0);
	return cVar0;

}
// .method public get(Landroid/icu/util/ULocale;Ljava/lang/String;)Landroid/icu/text/ListFormatter;
std::shared_ptr<android::icu::text::ListFormatter> android::icu::text::ListFormatter_S_Cache::get(std::shared_ptr<android::icu::util::ULocale> locale,std::shared_ptr<java::lang::String> style)
{
	
	std::shared<std::vector<std::vector<java::lang::Object>>> cVar0;
	std::shared_ptr<java::lang::Object> key;
	std::shared_ptr<android::icu::text::ListFormatter> result;
	std::shared_ptr<java::lang::Object> result;
	
	//    .param p1, "locale"    # Landroid/icu/util/ULocale;
	//    .param p2, "style"    # Ljava/lang/String;
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x2);
	cVar0[0x0] = locale->toString();
	cVar0[0x1] = style;
	key = java::lang::String::format(std::make_shared<java::lang::String>(std::make_shared<char[]>("%s:%s")), cVar0);
	//    .local v0, "key":Ljava/lang/String;
	result = this->cache->get(key);
	result->checkCast("android::icu::text::ListFormatter");
	//    .local v1, "result":Landroid/icu/text/ListFormatter;
	if ( result )     
		goto label_cond_27;
	result = android::icu::text::ListFormatter_S_Cache::load(locale, style);
	this->cache->put(key, result);
label_cond_27:
	return result;

}


