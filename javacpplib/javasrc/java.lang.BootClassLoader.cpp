// CPP L:\smali2cpp20\x64\Release\out\java\lang\BootClassLoader.smali
#include "java2ctype.h"
#include "java.lang.BootClassLoader.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.Package.h"
#include "java.lang.String.h"
#include "java.lang.VMClassLoader.h"
#include "java.net.URL.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.List.h"

static java::lang::BootClassLoader::instance;
// .method public constructor <init>()V
java::lang::BootClassLoader::BootClassLoader()
{
	
	java::lang::ClassLoader::(0x0);
	return;

}
// .method public static declared-synchronized getInstance()Ljava/lang/BootClassLoader;
std::shared_ptr<java::lang::BootClassLoader> java::lang::BootClassLoader::getInstance()
{
	
	std::shared_ptr<java::lang::BootClassLoader> cVar0;
	std::shared_ptr<java::lang::BootClassLoader> cVar1;
	
	//    .annotation build Ljava/lang/FindBugsSuppressWarnings;
	// 027        value = {
	// 028            "DP_CREATE_CLASSLOADER_INSIDE_DO_PRIVILEGED"
	// 029        }
	// 030    .end annotation
	cVar0 = java::lang::BootClassLoader();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	if ( java::lang::BootClassLoader::instance )     
		goto label_cond_e;
	cVar1 = std::make_shared<java::lang::BootClassLoader>();
	java::lang::BootClassLoader::instance = cVar1;
label_cond_e:
	//label_try_end_10:
	}
	catch (...){
		goto label_catchall_12;
	}
	//    .catchall {:try_start_3 .. :try_end_10} :catchall_12
	cVar0->monitor_exit();
	return java::lang::BootClassLoader::instance;
label_catchall_12:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method protected findClass(Ljava/lang/String;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::lang::BootClassLoader::findClass(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 074        value = {
	// 075            "(",
	// 076            "Ljava/lang/String;",
	// 077            ")",
	// 078            "Ljava/lang/Class",
	// 079            "<*>;"
	// 080        }
	// 081    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 084        value = {
	// 085            Ljava/lang/ClassNotFoundException;
	// 086        }
	// 087    .end annotation
	return java::lang::Class::classForName(name, 0x0, 0x0);

}
// .method protected findResource(Ljava/lang/String;)Ljava/net/URL;
std::shared_ptr<java::net::URL> java::lang::BootClassLoader::findResource(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	return java::lang::VMClassLoader::getResource(name);

}
// .method protected findResources(Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::net::URL>> java::lang::BootClassLoader::findResources(std::shared_ptr<java::lang::String> resName)
{
	
	//    .param p1, "resName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 119        value = {
	// 120            "(",
	// 121            "Ljava/lang/String;",
	// 122            ")",
	// 123            "Ljava/util/Enumeration",
	// 124            "<",
	// 125            "Ljava/net/URL;",
	// 126            ">;"
	// 127        }
	// 128    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 131        value = {
	// 132            Ljava/io/IOException;
	// 133        }
	// 134    .end annotation
	return java::util::Collections::enumeration(java::lang::VMClassLoader::getResources(resName));

}
// .method protected getPackage(Ljava/lang/String;)Ljava/lang/Package;
std::shared_ptr<java::lang::Package> java::lang::BootClassLoader::getPackage(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::Package> pack;
	
	//    .param p1, "name"    # Ljava/lang/String;
	if ( !(name) )  
		goto label_cond_30;
	if ( !(( name->isEmpty() ^ 0x1)) )  
		goto label_cond_30;
	this->monitor_enter();
	try {
	//label_try_start_c:
	pack = this->getPackage(name);
	//    .local v9, "pack":Ljava/lang/Package;
	if ( pack )     
		goto label_cond_2b;
	//label_try_end_2a:
	}
	catch (...){
		goto label_catchall_2d;
	}
	//    .catchall {:try_start_c .. :try_end_2a} :catchall_2d
label_cond_2b:
	this->monitor_exit();
	return pack;
	// 213    .line 1389
	// 214    .end local v9    # "pack":Ljava/lang/Package;
label_catchall_2d:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;
	// 222    .line 1401
label_cond_30:
	return 0x0;

}
// .method public getResource(Ljava/lang/String;)Ljava/net/URL;
std::shared_ptr<java::net::URL> java::lang::BootClassLoader::getResource(std::shared_ptr<java::lang::String> resName)
{
	
	//    .param p1, "resName"    # Ljava/lang/String;
	return this->findResource(resName);

}
// .method public getResources(Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::net::URL>> java::lang::BootClassLoader::getResources(std::shared_ptr<java::lang::String> resName)
{
	
	//    .param p1, "resName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 244        value = {
	// 245            "(",
	// 246            "Ljava/lang/String;",
	// 247            ")",
	// 248            "Ljava/util/Enumeration",
	// 249            "<",
	// 250            "Ljava/net/URL;",
	// 251            ">;"
	// 252        }
	// 253    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 256        value = {
	// 257            Ljava/io/IOException;
	// 258        }
	// 259    .end annotation
	return this->findResources(resName);

}
// .method protected loadClass(Ljava/lang/String;Z)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::lang::BootClassLoader::loadClass(std::shared_ptr<java::lang::String> className,bool resolve)
{
	
	std::shared_ptr<java::lang::Class> clazz;
	
	//    .param p1, "className"    # Ljava/lang/String;
	//    .param p2, "resolve"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 275        value = {
	// 276            "(",
	// 277            "Ljava/lang/String;",
	// 278            "Z)",
	// 279            "Ljava/lang/Class",
	// 280            "<*>;"
	// 281        }
	// 282    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 285        value = {
	// 286            Ljava/lang/ClassNotFoundException;
	// 287        }
	// 288    .end annotation
	clazz = this->findLoadedClass(className);
	//    .local v0, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( clazz )     
		goto label_cond_a;
label_cond_a:
	return clazz;

}


