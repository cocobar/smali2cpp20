// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$AvailEntry.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_AvailEntry.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"
#include "java.util.Locale.h"
#include "java.util.Set.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/ClassLoader;)V
android::icu::impl::ICUResourceBundle_S_AvailEntry::ICUResourceBundle_S_AvailEntry(std::shared_ptr<java::lang::String> prefix,std::shared_ptr<java::lang::ClassLoader> loader)
{
	
	//    .param p1, "prefix"    # Ljava/lang/String;
	//    .param p2, "loader"    # Ljava/lang/ClassLoader;
	// 057    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->prefix = prefix;
	this->loader = loader;
	return;

}
// .method getFullLocaleNameSet()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICUResourceBundle_S_AvailEntry::getFullLocaleNameSet()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 074        value = {
	// 075            "()",
	// 076            "Ljava/util/Set",
	// 077            "<",
	// 078            "Ljava/lang/String;",
	// 079            ">;"
	// 080        }
	// 081    .end annotation
	if ( this->fullNameSet )     
		goto label_cond_14;
	this->monitor_enter();
	try {
	//label_try_start_5:
	if ( this->fullNameSet )     
		goto label_cond_13;
	this->fullNameSet = android::icu::impl::ICUResourceBundle::-wrap4(this->prefix, this->loader);
	//label_try_end_13:
	}
	catch (...){
		goto label_catchall_17;
	}
	//    .catchall {:try_start_5 .. :try_end_13} :catchall_17
label_cond_13:
	this->monitor_exit();
label_cond_14:
	return this->fullNameSet;
	// 120    .line 771
label_catchall_17:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method getLocaleList()[Ljava/util/Locale;
std::shared_ptr<java::util::Locale> android::icu::impl::ICUResourceBundle_S_AvailEntry::getLocaleList()
{
	
	if ( this->locales )     
		goto label_cond_15;
	this->getULocaleList();
	this->monitor_enter();
	try {
	//label_try_start_8:
	if ( this->locales )     
		goto label_cond_14;
	this->locales = android::icu::impl::ICUResourceBundle::getLocaleList(this->ulocales);
	//label_try_end_14:
	}
	catch (...){
		goto label_catchall_18;
	}
	//    .catchall {:try_start_8 .. :try_end_14} :catchall_18
label_cond_14:
	this->monitor_exit();
label_cond_15:
	return this->locales;
	// 170    .line 741
label_catchall_18:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method getLocaleNameSet()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::lang::String>> android::icu::impl::ICUResourceBundle_S_AvailEntry::getLocaleNameSet()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 182        value = {
	// 183            "()",
	// 184            "Ljava/util/Set",
	// 185            "<",
	// 186            "Ljava/lang/String;",
	// 187            ">;"
	// 188        }
	// 189    .end annotation
	if ( this->nameSet )     
		goto label_cond_14;
	this->monitor_enter();
	try {
	//label_try_start_5:
	if ( this->nameSet )     
		goto label_cond_13;
	this->nameSet = android::icu::impl::ICUResourceBundle::-wrap5(this->prefix, this->loader);
	//label_try_end_13:
	}
	catch (...){
		goto label_catchall_17;
	}
	//    .catchall {:try_start_5 .. :try_end_13} :catchall_17
label_cond_13:
	this->monitor_exit();
label_cond_14:
	return this->nameSet;
	// 228    .line 751
label_catchall_17:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method getULocaleList()[Landroid/icu/util/ULocale;
std::shared_ptr<android::icu::util::ULocale> android::icu::impl::ICUResourceBundle_S_AvailEntry::getULocaleList()
{
	
	if ( this->ulocales )     
		goto label_cond_14;
	this->monitor_enter();
	try {
	//label_try_start_5:
	if ( this->ulocales )     
		goto label_cond_13;
	this->ulocales = android::icu::impl::ICUResourceBundle::-wrap1(this->prefix, this->loader);
	//label_try_end_13:
	}
	catch (...){
		goto label_catchall_17;
	}
	//    .catchall {:try_start_5 .. :try_end_13} :catchall_17
label_cond_13:
	this->monitor_exit();
label_cond_14:
	return this->ulocales;
	// 277    .line 730
label_catchall_17:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}


