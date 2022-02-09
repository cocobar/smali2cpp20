// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\Collator$CollatorFactory.smali
#include "java2ctype.h"
#include "android.icu.text.Collator_S_CollatorFactory.h"
#include "android.icu.text.Collator.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

// .method protected constructor <init>()V
android::icu::text::Collator_S_CollatorFactory::Collator_S_CollatorFactory()
{
	
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public createCollator(Landroid/icu/util/ULocale;)Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::Collator_S_CollatorFactory::createCollator(std::shared_ptr<android::icu::util::ULocale> loc)
{
	
	//    .param p1, "loc"    # Landroid/icu/util/ULocale;
	return this->createCollator(loc->toLocale());

}
// .method public createCollator(Ljava/util/Locale;)Landroid/icu/text/Collator;
std::shared_ptr<android::icu::text::Collator> android::icu::text::Collator_S_CollatorFactory::createCollator(std::shared_ptr<java::util::Locale> loc)
{
	
	//    .param p1, "loc"    # Ljava/util/Locale;
	return this->createCollator(android::icu::util::ULocale::forLocale(loc));

}
// .method public getDisplayName(Landroid/icu/util/ULocale;Landroid/icu/util/ULocale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Collator_S_CollatorFactory::getDisplayName(std::shared_ptr<android::icu::util::ULocale> objectLocale,std::shared_ptr<android::icu::util::ULocale> displayLocale)
{
	
	//    .param p1, "objectLocale"    # Landroid/icu/util/ULocale;
	//    .param p2, "displayLocale"    # Landroid/icu/util/ULocale;
	if ( !(this->visible()) )  
		goto label_cond_19;
	//    .local v1, "supported":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
	//    .local v0, "name":Ljava/lang/String;
	if ( !(this->getSupportedLocaleIDs()->contains(objectLocale->getBaseName())) )  
		goto label_cond_19;
	return objectLocale->getDisplayName(displayLocale);
	// 104    .line 542
	// 105    .end local v0    # "name":Ljava/lang/String;
	// 106    .end local v1    # "supported":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
label_cond_19:
	return 0x0;

}
// .method public getDisplayName(Ljava/util/Locale;Ljava/util/Locale;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::text::Collator_S_CollatorFactory::getDisplayName(std::shared_ptr<java::util::Locale> objectLocale,std::shared_ptr<java::util::Locale> displayLocale)
{
	
	//    .param p1, "objectLocale"    # Ljava/util/Locale;
	//    .param p2, "displayLocale"    # Ljava/util/Locale;
	return this->getDisplayName(android::icu::util::ULocale::forLocale(objectLocale), android::icu::util::ULocale::forLocale(displayLocale));

}
// .method public abstract getSupportedLocaleIDs()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::text::Collator_S_CollatorFactory::getSupportedLocaleIDs()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 137        value = {
	// 138            "()",
	// 139            "Ljava/util/Set",
	// 140            "<",
	// 141            "Ljava/lang/String;",
	// 142            ">;"
	// 143        }
	// 144    .end annotation

}
// .method public visible()Z
bool android::icu::text::Collator_S_CollatorFactory::visible()
{
	
	return 0x1;

}


