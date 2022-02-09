// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUConfig.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUConfig_S_1.h"
#include "android.icu.impl.ICUConfig.h"
#include "android.icu.impl.ICUData.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.security.AccessControlException.h"
#include "java.security.AccessController.h"
#include "java.util.MissingResourceException.h"
#include "java.util.Properties.h"

static android::icu::impl::ICUConfig::CONFIG_PROPS;
static android::icu::impl::ICUConfig::CONFIG_PROPS_FILE = std::make_shared<java::lang::String>("/android/icu/ICUConfig.properties");
// .method static constructor <clinit>()V
void android::icu::impl::ICUConfig::static_cinit()
{
	
	std::shared_ptr<java::util::Properties> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::io::InputStream> is;
	
	cVar0 = std::make_shared<java::util::Properties>();
	android::icu::impl::ICUConfig::CONFIG_PROPS = cVar0;
	try {
	//label_try_start_7:
	//label_try_end_d:
	}
	catch (java::util::MissingResourceException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1e;
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_20;
	}
	//    .catch Ljava/util/MissingResourceException; {:try_start_7 .. :try_end_d} :catch_1e
	//    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_d} :catch_20
	is = android::icu::impl::ICUData::getStream(std::make_shared<java::lang::String>(std::make_shared<char[]>("/android/icu/ICUConfig.properties")));
	//    .local v1, "is":Ljava/io/InputStream;
	if ( !(is) )  
		goto label_cond_18;
	try {
	//label_try_start_10:
	android::icu::impl::ICUConfig::CONFIG_PROPS->load(is);
	//label_try_end_15:
	}
	catch (...){
		goto label_catchall_19;
	}
	//    .catchall {:try_start_10 .. :try_end_15} :catchall_19
	try {
	//label_try_start_15:
	is->close();
label_cond_18:
label_goto_18:
	return;
	// 056    .line 35
label_catchall_19:
	// move-exception
	
	is->close();
	// throw
	throw;
	// 065    :try_end_1e
	// 066    .catch Ljava/util/MissingResourceException; {:try_start_15 .. :try_end_1e} :catch_1e
	// 067    .catch Ljava/io/IOException; {:try_start_15 .. :try_end_1e} :catch_20
	// 069    .line 39
label_catch_1e:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "mre":Ljava/util/MissingResourceException;
	goto label_goto_18;
	// 076    .line 41
	// 077    .end local v2    # "mre":Ljava/util/MissingResourceException;
label_catch_20:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "ioe":Ljava/io/IOException;
	goto label_goto_18;

}
// .method public constructor <init>()V
android::icu::impl::ICUConfig::ICUConfig()
{
	
	// 090    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static get(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUConfig::get(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	return android::icu::impl::ICUConfig::get(name, 0x0);

}
// .method public static get(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::impl::ICUConfig::get(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> def)
{
	
	std::shared_ptr<java::lang::String> val;
	std::shared_ptr<android::icu::impl::ICUConfig_S_1> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .param p1, "def"    # Ljava/lang/String;
	val = 0x0;
	//    .local v3, "val":Ljava/lang/String;
	name;
	//    .local v2, "fname":Ljava/lang/String;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_1e;
	try {
	//label_try_start_8:
	cVar0 = std::make_shared<android::icu::impl::ICUConfig_S_1>(name);
	cVar1 = java::security::AccessController::doPrivileged(cVar0);
	cVar1->checkCast("java::lang::String");
	val = cVar1;
	//label_try_end_15:
	}
	catch (java::security::AccessControlException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_23;
	}
	//    .catch Ljava/security/AccessControlException; {:try_start_8 .. :try_end_15} :catch_23
	//    .end local v3    # "val":Ljava/lang/String;
label_goto_15:
	if ( val )     
		goto label_cond_1d;
	val = android::icu::impl::ICUConfig::CONFIG_PROPS->getProperty(name, def);
label_cond_1d:
	return val;
	// 165    .line 78
	// 166    .restart local v3    # "val":Ljava/lang/String;
label_cond_1e:
	val = java::lang::System::getProperty(name);
	//    .local v3, "val":Ljava/lang/String;
	goto label_goto_15;
	// 175    .line 73
	// 176    .local v3, "val":Ljava/lang/String;
label_catch_23:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/security/AccessControlException;
	goto label_goto_15;

}


