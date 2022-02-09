// CPP L:\smali2cpp20\x64\Release\out\java\lang\ClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.PathClassLoader.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.lang.BootClassLoader.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader_S_SystemClassLoader.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.Package.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.lang.VMClassLoader.h"
#include "java.lang.Void.h"
#include "java.net.URL.h"
#include "java.nio.ByteBuffer.h"
#include "java.security.ProtectionDomain.h"
#include "java.util.Collection.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.HashMap.h"
#include "sun.misc.CompoundEnumeration.h"

// .method static synthetic -wrap0()Ljava/lang/ClassLoader;
std::shared_ptr<java::lang::ClassLoader> java::lang::ClassLoader::_wrap0()
{
	
	return java::lang::ClassLoader::createSystemClassLoader({const[class].FS-Param});

}
// .method protected constructor <init>()V
java::lang::ClassLoader::ClassLoader()
{
	
	java::lang::ClassLoader::(java::lang::ClassLoader::checkCreateClassLoader({const[class].FS-Param}), java::lang::ClassLoader::getSystemClassLoader({const[class].FS-Param}));
	return;

}
// .method protected constructor <init>(Ljava/lang/ClassLoader;)V
java::lang::ClassLoader::ClassLoader(std::shared_ptr<java::lang::ClassLoader> parent)
{
	
	//    .param p1, "parent"    # Ljava/lang/ClassLoader;
	java::lang::ClassLoader::(java::lang::ClassLoader::checkCreateClassLoader({const[class].FS-Param}), parent);
	return;

}
// .method private constructor <init>(Ljava/lang/Void;Ljava/lang/ClassLoader;)V
java::lang::ClassLoader::ClassLoader(std::shared_ptr<java::lang::Void> unused,std::shared_ptr<java::lang::ClassLoader> parent)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	
	//    .param p1, "unused"    # Ljava/lang/Void;
	//    .param p2, "parent"    # Ljava/lang/ClassLoader;
	// 102    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::HashMap>();
	this->proxyCache = cVar0;
	cVar1 = std::make_shared<java::util::HashMap>();
	this->packages = cVar1;
	this->parent = parent;
	return;

}
// .method private static checkCreateClassLoader()Ljava/lang/Void;
std::shared_ptr<java::lang::Void> java::lang::ClassLoader::checkCreateClassLoader()
{
	
	return 0x0;

}
// .method private static createSystemClassLoader()Ljava/lang/ClassLoader;
std::shared_ptr<java::lang::ClassLoader> java::lang::ClassLoader::createSystemClassLoader()
{
	
	std::shared_ptr<dalvik::system::PathClassLoader> cVar0;
	
	//    .local v0, "classPath":Ljava/lang/String;
	//    .local v1, "librarySearchPath":Ljava/lang/String;
	cVar0 = std::make_shared<dalvik::system::PathClassLoader>(java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.class.path")), std::make_shared<java::lang::String>(std::make_shared<char[]>("."))), java::lang::System::getProperty(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.library.path")), std::make_shared<java::lang::String>(std::make_shared<char[]>(""))), java::lang::BootClassLoader::getInstance({const[class].FS-Param}));
	return cVar0;

}
// .method private findBootstrapClassOrNull(Ljava/lang/String;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::lang::ClassLoader::findBootstrapClassOrNull(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 176        value = {
	// 177            "(",
	// 178            "Ljava/lang/String;",
	// 179            ")",
	// 180            "Ljava/lang/Class",
	// 181            "<*>;"
	// 182        }
	// 183    .end annotation
	return 0x0;

}
// .method private static getBootstrapResource(Ljava/lang/String;)Ljava/net/URL;
std::shared_ptr<java::net::URL> java::lang::ClassLoader::getBootstrapResource(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	return 0x0;

}
// .method private static getBootstrapResources(Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::net::URL>> java::lang::ClassLoader::getBootstrapResources(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 207        value = {
	// 208            "(",
	// 209            "Ljava/lang/String;",
	// 210            ")",
	// 211            "Ljava/util/Enumeration",
	// 212            "<",
	// 213            "Ljava/net/URL;",
	// 214            ">;"
	// 215        }
	// 216    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 219        value = {
	// 220            Ljava/io/IOException;
	// 221        }
	// 222    .end annotation
	return 0x0;

}
// .method public static getSystemClassLoader()Ljava/lang/ClassLoader;
std::shared_ptr<java::lang::ClassLoader> java::lang::ClassLoader::getSystemClassLoader()
{
	
	//    .annotation runtime Lsun/reflect/CallerSensitive;
	// 234    .end annotation
	return java::lang::ClassLoader_S_SystemClassLoader::loader;

}
// .method public static getSystemResource(Ljava/lang/String;)Ljava/net/URL;
std::shared_ptr<java::net::URL> java::lang::ClassLoader::getSystemResource(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::ClassLoader> system;
	
	//    .param p0, "name"    # Ljava/lang/String;
	system = java::lang::ClassLoader::getSystemClassLoader({const[class].FS-Param});
	//    .local v0, "system":Ljava/lang/ClassLoader;
	if ( system )     
		goto label_cond_b;
	return java::lang::ClassLoader::getBootstrapResource(name);
	// 264    .line 921
label_cond_b:
	return system->getResource(name);

}
// .method public static getSystemResourceAsStream(Ljava/lang/String;)Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> java::lang::ClassLoader::getSystemResourceAsStream(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::InputStream> cVar1;
	std::shared_ptr<java::net::URL> url;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar1 = 0x0;
	url = java::lang::ClassLoader::getSystemResource(name);
	//    .local v1, "url":Ljava/net/URL;
	if ( !(url) )  
		goto label_cond_b;
	try {
	//label_try_start_7:
	//label_try_end_a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c;
	}
	//    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_a} :catch_c
	cVar1 = url->openStream();
label_cond_b:
	return cVar1;
	// 299    .line 1012
label_catch_c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	return cVar1;

}
// .method public static getSystemResources(Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::net::URL>> java::lang::ClassLoader::getSystemResources(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::ClassLoader> system;
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 312        value = {
	// 313            "(",
	// 314            "Ljava/lang/String;",
	// 315            ")",
	// 316            "Ljava/util/Enumeration",
	// 317            "<",
	// 318            "Ljava/net/URL;",
	// 319            ">;"
	// 320        }
	// 321    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 324        value = {
	// 325            Ljava/io/IOException;
	// 326        }
	// 327    .end annotation
	system = java::lang::ClassLoader::getSystemClassLoader({const[class].FS-Param});
	//    .local v0, "system":Ljava/lang/ClassLoader;
	if ( system )     
		goto label_cond_b;
	return java::lang::ClassLoader::getBootstrapResources(name);
	// 346    .line 951
label_cond_b:
	return system->getResources(name);

}
// .method protected static registerAsParallelCapable()Z
bool java::lang::ClassLoader::registerAsParallelCapable()
{
	
	//    .annotation runtime Lsun/reflect/CallerSensitive;
	// 358    .end annotation
	return 0x1;

}
// .method public clearAssertionStatus()V
void java::lang::ClassLoader::clearAssertionStatus()
{
	
	return;

}
// .method protected final defineClass(Ljava/lang/String;Ljava/nio/ByteBuffer;Ljava/security/ProtectionDomain;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::lang::ClassLoader::defineClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::nio::ByteBuffer> b,std::shared_ptr<java::security::ProtectionDomain> protectionDomain)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "b"    # Ljava/nio/ByteBuffer;
	//    .param p3, "protectionDomain"    # Ljava/security/ProtectionDomain;
	//    .annotation system Ldalvik/annotation/Signature;
	// 383        value = {
	// 384            "(",
	// 385            "Ljava/lang/String;",
	// 386            "Ljava/nio/ByteBuffer;",
	// 387            "Ljava/security/ProtectionDomain;",
	// 388            ")",
	// 389            "Ljava/lang/Class",
	// 390            "<*>;"
	// 391        }
	// 392    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 395        value = {
	// 396            Ljava/lang/ClassFormatError;
	// 397        }
	// 398    .end annotation
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("can\'t load this type of class file")));
	// throw
	throw cVar0;

}
// .method protected final defineClass(Ljava/lang/String;[BII)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::lang::ClassLoader::defineClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "b"    # [B
	//    .param p3, "off"    # I
	//    .param p4, "len"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 418        value = {
	// 419            "(",
	// 420            "Ljava/lang/String;",
	// 421            "[BII)",
	// 422            "Ljava/lang/Class",
	// 423            "<*>;"
	// 424        }
	// 425    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 428        value = {
	// 429            Ljava/lang/ClassFormatError;
	// 430        }
	// 431    .end annotation
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("can\'t load this type of class file")));
	// throw
	throw cVar0;

}
// .method protected final defineClass(Ljava/lang/String;[BIILjava/security/ProtectionDomain;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::lang::ClassLoader::defineClass(std::shared_ptr<java::lang::String> name,std::shared_ptr<unsigned char[]> b,int off,int len,std::shared_ptr<java::security::ProtectionDomain> protectionDomain)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "b"    # [B
	//    .param p3, "off"    # I
	//    .param p4, "len"    # I
	//    .param p5, "protectionDomain"    # Ljava/security/ProtectionDomain;
	//    .annotation system Ldalvik/annotation/Signature;
	// 452        value = {
	// 453            "(",
	// 454            "Ljava/lang/String;",
	// 455            "[BII",
	// 456            "Ljava/security/ProtectionDomain;",
	// 457            ")",
	// 458            "Ljava/lang/Class",
	// 459            "<*>;"
	// 460        }
	// 461    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 464        value = {
	// 465            Ljava/lang/ClassFormatError;
	// 466        }
	// 467    .end annotation
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("can\'t load this type of class file")));
	// throw
	throw cVar0;

}
// .method protected final defineClass([BII)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::lang::ClassLoader::defineClass(std::shared_ptr<unsigned char[]> b,int off,int len)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "b"    # [B
	//    .param p2, "off"    # I
	//    .param p3, "len"    # I
	//    .annotation system Ldalvik/annotation/Signature;
	// 486        value = {
	// 487            "([BII)",
	// 488            "Ljava/lang/Class",
	// 489            "<*>;"
	// 490        }
	// 491    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 494        value = {
	// 495            Ljava/lang/ClassFormatError;
	// 496        }
	// 497    .end annotation
	//    .annotation runtime Ljava/lang/Deprecated;
	// 500    .end annotation
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("can\'t load this type of class file")));
	// throw
	throw cVar0;

}
// .method protected definePackage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;)Ljava/lang/Package;
std::shared_ptr<java::lang::Package> java::lang::ClassLoader::definePackage(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> specTitle,std::shared_ptr<java::lang::String> specVersion,std::shared_ptr<java::lang::String> specVendor,std::shared_ptr<java::lang::String> implTitle,std::shared_ptr<java::lang::String> implVersion,std::shared_ptr<java::lang::String> implVendor,std::shared_ptr<java::net::URL> sealBase)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::lang::Package> pkg;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "specTitle"    # Ljava/lang/String;
	//    .param p3, "specVersion"    # Ljava/lang/String;
	//    .param p4, "specVendor"    # Ljava/lang/String;
	//    .param p5, "implTitle"    # Ljava/lang/String;
	//    .param p6, "implVersion"    # Ljava/lang/String;
	//    .param p7, "implVendor"    # Ljava/lang/String;
	//    .param p8, "sealBase"    # Ljava/net/URL;
	//    .annotation system Ldalvik/annotation/Throws;
	// 524        value = {
	// 525            Ljava/lang/IllegalArgumentException;
	// 526        }
	// 527    .end annotation
	cVar0 = this->packages;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	pkg = this->packages->get(name);
	pkg->checkCast("java::lang::Package");
	//    .local v0, "pkg":Ljava/lang/Package;
	if ( !(pkg) )  
		goto label_cond_16;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(name);
	// throw
	throw cVar1;
	// 555    :try_end_13
	// 556    .catchall {:try_start_3 .. :try_end_13} :catchall_13
	// 558    .line 1159
	// 559    .end local v0    # "pkg":Ljava/lang/Package;
label_catchall_13:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 567    .line 1164
	// 568    .restart local v0    # "pkg":Ljava/lang/Package;
label_cond_16:
	try {
	//label_try_start_16:
	//    .end local v0    # "pkg":Ljava/lang/Package;
	pkg = std::make_shared<java::lang::Package>(name, specTitle, specVersion, specVendor, implTitle, implVersion, implVendor, sealBase, this);
	//    .restart local v0    # "pkg":Ljava/lang/Package;
	this->packages->put(name, pkg);
	//label_try_end_2d:
	}
	catch (...){
		goto label_catchall_13;
	}
	//    .catchall {:try_start_16 .. :try_end_2d} :catchall_13
	cVar0->monitor_exit();
	return pkg;

}
// .method protected findClass(Ljava/lang/String;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::lang::ClassLoader::findClass(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::ClassNotFoundException> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 612        value = {
	// 613            "(",
	// 614            "Ljava/lang/String;",
	// 615            ")",
	// 616            "Ljava/lang/Class",
	// 617            "<*>;"
	// 618        }
	// 619    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 622        value = {
	// 623            Ljava/lang/ClassNotFoundException;
	// 624        }
	// 625    .end annotation
	cVar0 = std::make_shared<java::lang::ClassNotFoundException>(name);
	// throw
	throw cVar0;

}
// .method protected findLibrary(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> java::lang::ClassLoader::findLibrary(std::shared_ptr<java::lang::String> libname)
{
	
	//    .param p1, "libname"    # Ljava/lang/String;
	return 0x0;

}
// .method protected final findLoadedClass(Ljava/lang/String;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::lang::ClassLoader::findLoadedClass(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::ClassLoader> cVar0;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 651        value = {
	// 652            "(",
	// 653            "Ljava/lang/String;",
	// 654            ")",
	// 655            "Ljava/lang/Class",
	// 656            "<*>;"
	// 657        }
	// 658    .end annotation
	if ( this != java::lang::BootClassLoader::getInstance({const[class].FS-Param}) )
		goto label_cond_c;
	cVar0 = 0x0;
label_goto_7:
	return java::lang::VMClassLoader::findLoadedClass(cVar0, name);
	// 679    .line 737
label_cond_c:
	cVar0 = this;
	//    .local v0, "loader":Ljava/lang/ClassLoader;
	goto label_goto_7;

}
// .method protected findResource(Ljava/lang/String;)Ljava/net/URL;
std::shared_ptr<java::net::URL> java::lang::ClassLoader::findResource(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	return 0x0;

}
// .method protected findResources(Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::net::URL>> java::lang::ClassLoader::findResources(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 702        value = {
	// 703            "(",
	// 704            "Ljava/lang/String;",
	// 705            ")",
	// 706            "Ljava/util/Enumeration",
	// 707            "<",
	// 708            "Ljava/net/URL;",
	// 709            ">;"
	// 710        }
	// 711    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 714        value = {
	// 715            Ljava/io/IOException;
	// 716        }
	// 717    .end annotation
	return java::util::Collections::emptyEnumeration({const[class].FS-Param});

}
// .method protected final findSystemClass(Ljava/lang/String;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::lang::ClassLoader::findSystemClass(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 732        value = {
	// 733            "(",
	// 734            "Ljava/lang/String;",
	// 735            ")",
	// 736            "Ljava/lang/Class",
	// 737            "<*>;"
	// 738        }
	// 739    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 742        value = {
	// 743            Ljava/lang/ClassNotFoundException;
	// 744        }
	// 745    .end annotation
	return java::lang::Class::forName(name, 0x0, java::lang::ClassLoader::getSystemClassLoader(name, 0x0, java::lang::ClassLoader::getSystemClassLoader(name, 0x0, java::lang::ClassLoader::getSystemClassLoader({const[class].FS-Param}))));

}
// .method protected getPackage(Ljava/lang/String;)Ljava/lang/Package;
std::shared_ptr<java::lang::Package> java::lang::ClassLoader::getPackage(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::lang::Package> pkg;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = this->packages;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	pkg = this->packages->get(name);
	pkg->checkCast("java::lang::Package");
	//label_try_end_b:
	}
	catch (...){
		goto label_catchall_d;
	}
	//    .catchall {:try_start_3 .. :try_end_b} :catchall_d
	//    .local v0, "pkg":Ljava/lang/Package;
	cVar0->monitor_exit();
	return pkg;
	// 790    .line 1186
	// 791    .end local v0    # "pkg":Ljava/lang/Package;
label_catchall_d:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method protected getPackages()[Ljava/lang/Package;
std::shared_ptr<java::lang::Package> java::lang::ClassLoader::getPackages()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	std::shared_ptr<java::util::HashMap> map;
	std::shared_ptr<std::vector<java::lang::Package>> cVar1;
	
	cVar0 = this->packages;
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	map = std::make_shared<java::util::HashMap>(this->packages);
	//label_try_end_a:
	}
	catch (...){
		goto label_catchall_1c;
	}
	//    .catchall {:try_start_3 .. :try_end_a} :catchall_1c
	//    .local v0, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Package;>;"
	cVar0->monitor_exit();
	cVar1 = map->values()->toArray(std::make_shared<std::vector<std::vector<java::lang::Package>>>(map->size()));
	cVar1->checkCast("std::vector<java::lang::Package>");
	return cVar1;
	// 841    .line 1203
	// 842    .end local v0    # "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Package;>;"
label_catchall_1c:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public final getParent()Ljava/lang/ClassLoader;
std::shared_ptr<java::lang::ClassLoader> java::lang::ClassLoader::getParent()
{
	
	//    .annotation runtime Lsun/reflect/CallerSensitive;
	// 854    .end annotation
	return this->parent;

}
// .method public getResource(Ljava/lang/String;)Ljava/net/URL;
std::shared_ptr<java::net::URL> java::lang::ClassLoader::getResource(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::net::URL> url;
	
	//    .param p1, "name"    # Ljava/lang/String;
	if ( !(this->parent) )  
		goto label_cond_11;
	url = this->parent->getResource(name);
	//    .local v0, "url":Ljava/net/URL;
label_goto_a:
	if ( url )     
		goto label_cond_10;
label_cond_10:
	return url;
	// 894    .line 790
	// 895    .end local v0    # "url":Ljava/net/URL;
label_cond_11:
	url = java::lang::ClassLoader::getBootstrapResource(name);
	//    .restart local v0    # "url":Ljava/net/URL;
	goto label_goto_a;

}
// .method public getResourceAsStream(Ljava/lang/String;)Ljava/io/InputStream;
std::shared_ptr<java::io::InputStream> java::lang::ClassLoader::getResourceAsStream(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::InputStream> cVar1;
	std::shared_ptr<java::net::URL> url;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar1 = 0x0;
	url = this->getResource(name);
	//    .local v1, "url":Ljava/net/URL;
	if ( !(url) )  
		goto label_cond_b;
	try {
	//label_try_start_7:
	//label_try_end_a:
	}
	catch (java::io::IOException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_c;
	}
	//    .catch Ljava/io/IOException; {:try_start_7 .. :try_end_a} :catch_c
	cVar1 = url->openStream();
label_cond_b:
	return cVar1;
	// 931    .line 990
label_catch_c:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/IOException;
	return cVar1;

}
// .method public getResources(Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::net::URL>> java::lang::ClassLoader::getResources(std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	std::shared<std::vector<std::vector<java::util::Enumeration>>> tmp;
	std::shared_ptr<sun::misc::CompoundEnumeration> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 944        value = {
	// 945            "(",
	// 946            "Ljava/lang/String;",
	// 947            ")",
	// 948            "Ljava/util/Enumeration",
	// 949            "<",
	// 950            "Ljava/net/URL;",
	// 951            ">;"
	// 952        }
	// 953    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 956        value = {
	// 957            Ljava/io/IOException;
	// 958        }
	// 959    .end annotation
	cVar0 = 0x0;
	tmp = std::make_shared<std::vector<std::vector<java::util::Enumeration>>>(0x2);
	//    .local v0, "tmp":[Ljava/util/Enumeration;, "[Ljava/util/Enumeration<Ljava/net/URL;>;"
	if ( !(this->parent) )  
		goto label_cond_1d;
	tmp[cVar0] = this->parent->getResources(name);
label_goto_10:
	tmp[0x1] = this->findResources(name);
	cVar1 = std::make_shared<sun::misc::CompoundEnumeration>(tmp);
	return cVar1;
	// 1001    .line 837
label_cond_1d:
	tmp[cVar0] = java::lang::ClassLoader::getBootstrapResources(name);
	goto label_goto_10;

}
// .method public loadClass(Ljava/lang/String;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::lang::ClassLoader::loadClass(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1016        value = {
	// 1017            "(",
	// 1018            "Ljava/lang/String;",
	// 1019            ")",
	// 1020            "Ljava/lang/Class",
	// 1021            "<*>;"
	// 1022        }
	// 1023    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1026        value = {
	// 1027            Ljava/lang/ClassNotFoundException;
	// 1028        }
	// 1029    .end annotation
	return this->loadClass(name, 0x0);

}
// .method protected loadClass(Ljava/lang/String;Z)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> java::lang::ClassLoader::loadClass(std::shared_ptr<java::lang::String> name,bool resolve)
{
	
	std::shared_ptr<java::lang::Class> c;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "resolve"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 1047        value = {
	// 1048            "(",
	// 1049            "Ljava/lang/String;",
	// 1050            "Z)",
	// 1051            "Ljava/lang/Class",
	// 1052            "<*>;"
	// 1053        }
	// 1054    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 1057        value = {
	// 1058            Ljava/lang/ClassNotFoundException;
	// 1059        }
	// 1060    .end annotation
	c = this->findLoadedClass(name);
	//    .local v0, "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( c )     
		goto label_cond_17;
	try {
	//label_try_start_6:
	if ( !(this->parent) )  
		goto label_cond_18;
	//label_try_end_10:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_6 .. :try_end_10} :catch_1d
	c = this->parent->loadClass(name, 0x0);
label_goto_11:
	if ( c )     
		goto label_cond_17;
	c = this->findClass(name);
label_cond_17:
	return c;
	// 1102    .line 369
label_cond_18:
	try {
	//label_try_start_18:
	//label_try_end_1b:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_18 .. :try_end_1b} :catch_1d
	c = this->findBootstrapClassOrNull(name);
	goto label_goto_11;
	// 1113    .line 371
label_catch_1d:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "e":Ljava/lang/ClassNotFoundException;
	goto label_goto_11;

}
// .method protected final resolveClass(Ljava/lang/Class;)V
void java::lang::ClassLoader::resolveClass(std::shared_ptr<java::lang::Class<java::lang::Object>> c)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 1124        value = {
	// 1125            "(",
	// 1126            "Ljava/lang/Class",
	// 1127            "<*>;)V"
	// 1128        }
	// 1129    .end annotation
	//    .local p1, "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return;

}
// .method public setClassAssertionStatus(Ljava/lang/String;Z)V
void java::lang::ClassLoader::setClassAssertionStatus(std::shared_ptr<java::lang::String> className,bool enabled)
{
	
	//    .param p1, "className"    # Ljava/lang/String;
	//    .param p2, "enabled"    # Z
	return;

}
// .method public setDefaultAssertionStatus(Z)V
void java::lang::ClassLoader::setDefaultAssertionStatus(bool enabled)
{
	
	//    .param p1, "enabled"    # Z
	return;

}
// .method public setPackageAssertionStatus(Ljava/lang/String;Z)V
void java::lang::ClassLoader::setPackageAssertionStatus(std::shared_ptr<java::lang::String> packageName,bool enabled)
{
	
	//    .param p1, "packageName"    # Ljava/lang/String;
	//    .param p2, "enabled"    # Z
	return;

}
// .method protected final setSigners(Ljava/lang/Class;[Ljava/lang/Object;)V
void java::lang::ClassLoader::setSigners(std::shared_ptr<java::lang::Class<java::lang::Object>> c,std::shared_ptr<std::vector<java::lang::Object>> signers)
{
	
	//    .param p2, "signers"    # [Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Signature;
	// 1170        value = {
	// 1171            "(",
	// 1172            "Ljava/lang/Class",
	// 1173            "<*>;[",
	// 1174            "Ljava/lang/Object;",
	// 1175            ")V"
	// 1176        }
	// 1177    .end annotation
	//    .local p1, "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	return;

}


