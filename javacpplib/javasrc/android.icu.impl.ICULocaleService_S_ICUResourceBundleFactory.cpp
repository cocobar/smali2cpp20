// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICULocaleService$ICUResourceBundleFactory.smali
#include "java2ctype.h"
#include "android.icu.impl.ClassLoaderUtil.h"
#include "android.icu.impl.ICULocaleService_S_ICUResourceBundleFactory.h"
#include "android.icu.impl.ICULocaleService_S_LocaleKeyFactory.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.impl.ICUService_S_Factory.h"
#include "android.icu.impl.ICUService.h"
#include "android.icu.util.ULocale.h"
#include "android.icu.util.UResourceBundle.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

// .method public constructor <init>()V
android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory::ICULocaleService_S_ICUResourceBundleFactory()
{
	
	android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory::(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")));
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory::ICULocaleService_S_ICUResourceBundleFactory(std::shared_ptr<java::lang::String> bundleName)
{
	
	//    .param p1, "bundleName"    # Ljava/lang/String;
	android::icu::impl::ICULocaleService_S_LocaleKeyFactory::(0x1);
	this->bundleName = bundleName;
	return;

}
// .method protected getSupportedIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory::getSupportedIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 057        value = {
	// 058            "()",
	// 059            "Ljava/util/Set",
	// 060            "<",
	// 061            "Ljava/lang/String;",
	// 062            ">;"
	// 063        }
	// 064    .end annotation
	return android::icu::impl::ICUResourceBundle::getFullLocaleNameSet(this->bundleName, this->loader());

}
// .method protected handleCreate(Landroid/icu/util/ULocale;ILandroid/icu/impl/ICUService;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory::handleCreate(std::shared_ptr<android::icu::util::ULocale> loc,int kind,std::shared_ptr<android::icu::impl::ICUService> service)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	//    .param p2, "kind"    # I
	//    .param p3, "service"    # Landroid/icu/impl/ICUService;
	return android::icu::impl::ICUResourceBundle::getBundleInstance(this->bundleName, loc, this->loader());

}
// .method protected loader()Ljava/lang/ClassLoader;
std::shared_ptr<java::lang::ClassLoader> android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory::loader()
{
	
	return android::icu::impl::ClassLoaderUtil::getClassLoader(this->getClass());

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(", bundle: ")))->append(this->bundleName)->toString();

}
// .method public updateVisibleIDs(Ljava/util/Map;)V
void android::icu::impl::ICULocaleService_S_ICUResourceBundleFactory::updateVisibleIDs(std::shared_ptr<java::util::Map<java::lang::String,android::icu::impl::ICUService_S_Factory>> result)
{
	
	std::shared_ptr<java::util::Iterator> id_S_iterator;
	std::shared_ptr<java::lang::String> id;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 157        value = {
	// 158            "(",
	// 159            "Ljava/util/Map",
	// 160            "<",
	// 161            "Ljava/lang/String;",
	// 162            "Landroid/icu/impl/ICUService$Factory;",
	// 163            ">;)V"
	// 164        }
	// 165    .end annotation
	//    .local p1, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Landroid/icu/impl/ICUService$Factory;>;"
	//    .local v2, "visibleIDs":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	id_S_iterator = android::icu::impl::ICUResourceBundle::getAvailableLocaleNameSet(this->bundleName, this->loader())->iterator();
	//    .local v1, "id$iterator":Ljava/util/Iterator;
label_goto_e:
	if ( !(id_S_iterator->hasNext()) )  
		goto label_cond_1e;
	id = id_S_iterator->next();
	id->checkCast("java::lang::String");
	//    .local v0, "id":Ljava/lang/String;
	result->put(id, this);
	goto label_goto_e;
	// 206    .line 589
	// 207    .end local v0    # "id":Ljava/lang/String;
label_cond_1e:
	return;

}


