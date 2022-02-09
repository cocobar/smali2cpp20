// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\ICUData.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUData_S_1.h"
#include "android.icu.impl.ICUData_S_2.h"
#include "android.icu.impl.ICUData_S_3.h"
#include "android.icu.impl.ICUData.h"
#include "java.io.InputStream.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.Package.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.net.URL.h"
#include "java.security.AccessController.h"
#include "java.util.MissingResourceException.h"

static android::icu::impl::ICUData::ICU_BASE_NAME = std::make_shared<java::lang::String>("android/icu/impl/data/icudt58b");
static android::icu::impl::ICUData::ICU_BRKITR_BASE_NAME = std::make_shared<java::lang::String>("android/icu/impl/data/icudt58b/brkitr");
static android::icu::impl::ICUData::ICU_BRKITR_NAME = std::make_shared<java::lang::String>("brkitr");
static android::icu::impl::ICUData::ICU_BUNDLE = std::make_shared<java::lang::String>("data/icudt58b");
static android::icu::impl::ICUData::ICU_COLLATION_BASE_NAME = std::make_shared<java::lang::String>("android/icu/impl/data/icudt58b/coll");
static android::icu::impl::ICUData::ICU_CURR_BASE_NAME = std::make_shared<java::lang::String>("android/icu/impl/data/icudt58b/curr");
static android::icu::impl::ICUData::ICU_DATA_PATH = std::make_shared<java::lang::String>("android/icu/impl/");
static android::icu::impl::ICUData::ICU_LANG_BASE_NAME = std::make_shared<java::lang::String>("android/icu/impl/data/icudt58b/lang");
static android::icu::impl::ICUData::ICU_RBNF_BASE_NAME = std::make_shared<java::lang::String>("android/icu/impl/data/icudt58b/rbnf");
static android::icu::impl::ICUData::ICU_REGION_BASE_NAME = std::make_shared<java::lang::String>("android/icu/impl/data/icudt58b/region");
static android::icu::impl::ICUData::ICU_TRANSLIT_BASE_NAME = std::make_shared<java::lang::String>("android/icu/impl/data/icudt58b/translit");
static android::icu::impl::ICUData::ICU_UNIT_BASE_NAME = std::make_shared<java::lang::String>("android/icu/impl/data/icudt58b/unit");
static android::icu::impl::ICUData::ICU_ZONE_BASE_NAME = std::make_shared<java::lang::String>("android/icu/impl/data/icudt58b/zone");
static android::icu::impl::ICUData::PACKAGE_NAME = std::make_shared<java::lang::String>("icudt58b");
static android::icu::impl::ICUData::logBinaryDataFromInputStream;
static android::icu::impl::ICUData::logger;
// .method public constructor <init>()V
android::icu::impl::ICUData::ICUData()
{
	
	// 046    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method private static checkStreamForBinaryData(Ljava/io/InputStream;Ljava/lang/String;)V
void android::icu::impl::ICUData::checkStreamForBinaryData(std::shared_ptr<java::io::InputStream> is,std::shared_ptr<java::lang::String> resourceName)
{
	
	//    .param p0, "is"    # Ljava/io/InputStream;
	//    .param p1, "resourceName"    # Ljava/lang/String;
	return;

}
// .method public static exists(Ljava/lang/String;)Z
bool android::icu::impl::ICUData::exists(std::shared_ptr<java::lang::String> resourceName)
{
	
	std::shared_ptr<android::icu::impl::ICUData_S_1> cVar0;
	std::shared_ptr<java::net::URL> i;
	bool cVar1;
	
	//    .param p0, "resourceName"    # Ljava/lang/String;
	0x0;
	//    .local v0, "i":Ljava/net/URL;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_16;
	cVar0 = std::make_shared<android::icu::impl::ICUData_S_1>(resourceName);
	i = java::security::AccessController::doPrivileged(cVar0);
	//    .end local v0    # "i":Ljava/net/URL;
	i->checkCast("java::net::URL");
	//    .local v0, "i":Ljava/net/URL;
label_goto_12:
	if ( !(i) )  
		goto label_cond_1d;
	cVar1 = 0x1;
label_goto_15:
	return cVar1;
	// 099    .line 104
	// 100    .local v0, "i":Ljava/net/URL;
label_cond_16:
	//    .local v0, "i":Ljava/net/URL;
	goto label_goto_12;
	// 111    .line 106
label_cond_1d:
	cVar1 = 0x0;
	goto label_goto_15;

}
// .method public static getRequiredStream(Ljava/lang/Class;Ljava/lang/String;)Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> android::icu::impl::ICUData::getRequiredStream(std::shared_ptr<java::lang::Class<java::lang::Object>> root,std::shared_ptr<java::lang::String> resourceName)
{
	
	//    .param p1, "resourceName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 122        value = {
	// 123            "(",
	// 124            "Ljava/lang/Class",
	// 125            "<*>;",
	// 126            "Ljava/lang/String;",
	// 127            ")",
	// 128            "Ljava/io/InputStream;"
	// 129        }
	// 130    .end annotation
	//    .local p0, "root":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return android::icu::impl::ICUData::getStream(root, resourceName, 0x1);

}
// .method public static getRequiredStream(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> android::icu::impl::ICUData::getRequiredStream(std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::lang::String> resourceName)
{
	
	//    .param p0, "loader"    # Ljava/lang/ClassLoader;
	//    .param p1, "resourceName"    # Ljava/lang/String;
	return android::icu::impl::ICUData::getStream(loader, resourceName, 0x1);

}
// .method public static getRequiredStream(Ljava/lang/String;)Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> android::icu::impl::ICUData::getRequiredStream(std::shared_ptr<java::lang::String> resourceName)
{
	
	//    .param p0, "resourceName"    # Ljava/lang/String;
	return android::icu::impl::ICUData::getStream(android::icu::impl::ICUData(), resourceName, 0x1);

}
// .method public static getStream(Ljava/lang/Class;Ljava/lang/String;)Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> android::icu::impl::ICUData::getStream(std::shared_ptr<java::lang::Class<java::lang::Object>> root,std::shared_ptr<java::lang::String> resourceName)
{
	
	//    .param p1, "resourceName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 181        value = {
	// 182            "(",
	// 183            "Ljava/lang/Class",
	// 184            "<*>;",
	// 185            "Ljava/lang/String;",
	// 186            ")",
	// 187            "Ljava/io/InputStream;"
	// 188        }
	// 189    .end annotation
	//    .local p0, "root":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return android::icu::impl::ICUData::getStream(root, resourceName, 0x0);

}
// .method private static getStream(Ljava/lang/Class;Ljava/lang/String;Z)Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> android::icu::impl::ICUData::getStream(std::shared_ptr<java::lang::Class<java::lang::Object>> root,std::shared_ptr<java::lang::String> resourceName,bool required)
{
	
	std::shared_ptr<android::icu::impl::ICUData_S_2> cVar0;
	std::shared_ptr<java::io::InputStream> i;
	std::shared_ptr<java::util::MissingResourceException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "resourceName"    # Ljava/lang/String;
	//    .param p2, "required"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 208        value = {
	// 209            "(",
	// 210            "Ljava/lang/Class",
	// 211            "<*>;",
	// 212            "Ljava/lang/String;",
	// 213            "Z)",
	// 214            "Ljava/io/InputStream;"
	// 215        }
	// 216    .end annotation
	//    .local p0, "root":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	0x0;
	//    .local v0, "i":Ljava/io/InputStream;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_38;
	cVar0 = std::make_shared<android::icu::impl::ICUData_S_2>(root, resourceName);
	i = java::security::AccessController::doPrivileged(cVar0);
	//    .end local v0    # "i":Ljava/io/InputStream;
	i->checkCast("java::io::InputStream");
	//    .local v0, "i":Ljava/io/InputStream;
label_goto_12:
	if ( i )     
		goto label_cond_3d;
	if ( !(required) )  
		goto label_cond_3d;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::util::MissingResourceException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("could not locate data ")))->append(resourceName)->toString(), root->getPackage()->getName(), resourceName);
	// throw
	throw cVar1;
	// 283    .line 119
	// 284    .local v0, "i":Ljava/io/InputStream;
label_cond_38:
	i = root->getResourceAsStream(resourceName);
	//    .local v0, "i":Ljava/io/InputStream;
	goto label_goto_12;
	// 293    .line 125
label_cond_3d:
	android::icu::impl::ICUData::checkStreamForBinaryData(i, resourceName);
	return i;

}
// .method public static getStream(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> android::icu::impl::ICUData::getStream(std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::lang::String> resourceName)
{
	
	//    .param p0, "loader"    # Ljava/lang/ClassLoader;
	//    .param p1, "resourceName"    # Ljava/lang/String;
	return android::icu::impl::ICUData::getStream(loader, resourceName, 0x0);

}
// .method static getStream(Ljava/lang/ClassLoader;Ljava/lang/String;Z)Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> android::icu::impl::ICUData::getStream(std::shared_ptr<java::lang::ClassLoader> loader,std::shared_ptr<java::lang::String> resourceName,bool required)
{
	
	std::shared_ptr<android::icu::impl::ICUData_S_3> cVar0;
	std::shared_ptr<java::io::InputStream> i;
	std::shared_ptr<java::util::MissingResourceException> cVar1;
	
	//    .param p0, "loader"    # Ljava/lang/ClassLoader;
	//    .param p1, "resourceName"    # Ljava/lang/String;
	//    .param p2, "required"    # Z
	0x0;
	//    .local v0, "i":Ljava/io/InputStream;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_23;
	cVar0 = std::make_shared<android::icu::impl::ICUData_S_3>(loader, resourceName);
	i = java::security::AccessController::doPrivileged(cVar0);
	//    .end local v0    # "i":Ljava/io/InputStream;
	i->checkCast("java::io::InputStream");
	//    .local v0, "i":Ljava/io/InputStream;
label_goto_12:
	if ( i )     
		goto label_cond_28;
	if ( !(required) )  
		goto label_cond_28;
	cVar1 = std::make_shared<java::util::MissingResourceException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("could not locate data")), loader->toString(), resourceName);
	// throw
	throw cVar1;
	// 367    .line 142
	// 368    .local v0, "i":Ljava/io/InputStream;
label_cond_23:
	i = loader->getResourceAsStream(resourceName);
	//    .local v0, "i":Ljava/io/InputStream;
	goto label_goto_12;
	// 377    .line 147
label_cond_28:
	android::icu::impl::ICUData::checkStreamForBinaryData(i, resourceName);
	return i;

}
// .method public static getStream(Ljava/lang/String;)Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> android::icu::impl::ICUData::getStream(std::shared_ptr<java::lang::String> resourceName)
{
	
	//    .param p0, "resourceName"    # Ljava/lang/String;
	return android::icu::impl::ICUData::getStream(android::icu::impl::ICUData(), resourceName, 0x0);

}


