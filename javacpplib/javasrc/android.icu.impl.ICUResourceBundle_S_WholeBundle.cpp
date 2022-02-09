// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUResourceBundle$WholeBundle.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUResourceBundle_S_WholeBundle.h"
#include "android.icu.impl.ICUResourceBundleReader.h"
#include "android.icu.util.ULocale.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"

// .method constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Landroid/icu/impl/ICUResourceBundleReader;)V
android::icu::impl::ICUResourceBundle_S_WholeBundle::ICUResourceBundle_S_WholeBundle(std::shared_ptr<java::lang::String> baseName,std::shared_ptr<java::lang::String> localeID,std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<android::icu::impl::ICUResourceBundleReader> reader)
{
	
	std::shared_ptr<android::icu::util::ULocale> cVar0;
	
	//    .param p1, "baseName"    # Ljava/lang/String;
	//    .param p2, "localeID"    # Ljava/lang/String;
	//    .param p3, "loader"    # Ljava/lang/ClassLoader;
	//    .param p4, "reader"    # Landroid/icu/impl/ICUResourceBundleReader;
	// 050    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->baseName = baseName;
	this->localeID = localeID;
	cVar0 = std::make_shared<android::icu::util::ULocale>(localeID);
	this->ulocale = cVar0;
	this->loader = loader;
	this->reader = reader;
	return;

}


