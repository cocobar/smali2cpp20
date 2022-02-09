// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUDataVersion.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUDataVersion.h"
#include "android.icu.impl.ICUResourceBundle.h"
#include "android.icu.util.UResourceBundle.h"
#include "android.icu.util.VersionInfo.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.String.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::ICUDataVersion::U_ICU_DATA_KEY = std::make_shared<java::lang::String>("DataVersion");
static android::icu::impl::ICUDataVersion::U_ICU_VERSION_BUNDLE = std::make_shared<java::lang::String>("icuver");
// .method public constructor <init>()V
android::icu::impl::ICUDataVersion::ICUDataVersion()
{
	
	// 018    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static getDataVersion()Landroid/icu/util/VersionInfo;
std::shared_ptr<android::icu::util::VersionInfo> android::icu::impl::ICUDataVersion::getDataVersion()
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	0x0;
	//    .local v1, "icudatares":Landroid/icu/util/UResourceBundle;
	try {
	//label_try_start_1:
	//    .local v1, "icudatares":Landroid/icu/util/UResourceBundle;
	//label_try_end_13:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_1 .. :try_end_13} :catch_1d
	return android::icu::util::VersionInfo::getInstance(android::icu::util::UResourceBundle::getBundleInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("android/icu/impl/data/icudt58b")), std::make_shared<java::lang::String>(std::make_shared<char[]>("icuver")), android::icu::impl::ICUResourceBundle::ICU_DATA_CLASS_LOADER)->get(std::make_shared<java::lang::String>(std::make_shared<char[]>("DataVersion")))->getString());
	// 067    .line 39
label_catch_1d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/util/MissingResourceException;
	return 0x0;

}


