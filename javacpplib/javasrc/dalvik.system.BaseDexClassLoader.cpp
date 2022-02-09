// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\BaseDexClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.BaseDexClassLoader_S_Reporter.h"
#include "dalvik.system.BaseDexClassLoader.h"
#include "dalvik.system.DexPathList.h"
#include "java.io.File.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.Iterable.h"
#include "java.lang.Object.h"
#include "java.lang.Package.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"
#include "java.net.URL.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.ArrayList.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.List.h"

static dalvik::system::BaseDexClassLoader::reporter;
// .method static constructor <clinit>()V
void dalvik::system::BaseDexClassLoader::static_cinit()
{
	
	dalvik::system::BaseDexClassLoader::reporter = 0x0;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/io/File;Ljava/lang/String;Ljava/lang/ClassLoader;)V
dalvik::system::BaseDexClassLoader::BaseDexClassLoader(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::io::File> optimizedDirectory,std::shared_ptr<java::lang::String> librarySearchPath,std::shared_ptr<java::lang::ClassLoader> parent)
{
	
	std::shared_ptr<dalvik::system::DexPathList> cVar0;
	
	//    .param p1, "dexPath"    # Ljava/lang/String;
	//    .param p2, "optimizedDirectory"    # Ljava/io/File;
	//    .param p3, "librarySearchPath"    # Ljava/lang/String;
	//    .param p4, "parent"    # Ljava/lang/ClassLoader;
	java::lang::ClassLoader::(parent);
	cVar0 = std::make_shared<dalvik::system::DexPathList>(this, dexPath, librarySearchPath, 0x0);
	this->pathList = cVar0;
	if ( !(dalvik::system::BaseDexClassLoader::reporter) )  
		goto label_cond_12;
	this->reportClassLoaderChain();
label_cond_12:
	return;

}
// .method public constructor <init>([Ljava/nio/ByteBuffer;Ljava/lang/ClassLoader;)V
dalvik::system::BaseDexClassLoader::BaseDexClassLoader(std::shared_ptr<std::vector<java::nio::ByteBuffer>> dexFiles,std::shared_ptr<java::lang::ClassLoader> parent)
{
	
	std::shared_ptr<dalvik::system::DexPathList> cVar0;
	
	//    .param p1, "dexFiles"    # [Ljava/nio/ByteBuffer;
	//    .param p2, "parent"    # Ljava/lang/ClassLoader;
	java::lang::ClassLoader::(parent);
	cVar0 = std::make_shared<dalvik::system::DexPathList>(this, dexFiles);
	this->pathList = cVar0;
	return;

}
// .method public static getReporter()Ldalvik/system/BaseDexClassLoader$Reporter;
std::shared_ptr<dalvik::system::BaseDexClassLoader_S_Reporter> dalvik::system::BaseDexClassLoader::getReporter()
{
	
	return dalvik::system::BaseDexClassLoader::reporter;

}
// .method private reportClassLoaderChain()V
void dalvik::system::BaseDexClassLoader::reportClassLoaderChain()
{
	
	std::shared_ptr<java::util::ArrayList> classLoadersChain;
	std::shared_ptr<java::util::ArrayList> classPaths;
	std::shared_ptr<dalvik::system::BaseDexClassLoader> current;
	std::shared_ptr<dalvik::system::BaseDexClassLoader> bdcCurrent;
	
	classLoadersChain = std::make_shared<java::util::ArrayList>();
	//    .local v2, "classLoadersChain":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ldalvik/system/BaseDexClassLoader;>;"
	classPaths = std::make_shared<java::util::ArrayList>();
	//    .local v3, "classPaths":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Ljava/lang/String;>;"
	classLoadersChain->add(this);
	classPaths->add(java::lang::String::join(java::io::File::pathSeparator, this->pathList->getDexPaths()));
	//    .local v5, "onlySawSupportedClassLoaders":Z
	//    .local v1, "bootClassLoader":Ljava/lang/ClassLoader;
	current = this->getParent();
	//    .local v4, "current":Ljava/lang/ClassLoader;
label_goto_29:
	if ( !(current) )  
		goto label_cond_4c;
	if ( current == java::lang::ClassLoader::getSystemClassLoader({const[class].FS-Param})->getParent() )
		goto label_cond_4c;
	if ( !(current->instanceOf("dalvik::system::BaseDexClassLoader")) )  
		goto label_cond_4b;
	bdcCurrent = current;
	bdcCurrent->checkCast("dalvik::system::BaseDexClassLoader");
	//    .local v0, "bdcCurrent":Ldalvik/system/BaseDexClassLoader;
	classLoadersChain->add(bdcCurrent);
	classPaths->add(java::lang::String::join(java::io::File::pathSeparator, bdcCurrent->pathList->getDexPaths()));
	current = current->getParent();
	goto label_goto_29;
	// 195    .line 93
	// 196    .end local v0    # "bdcCurrent":Ldalvik/system/BaseDexClassLoader;
label_cond_4b:
label_cond_4c:
	if ( !(0x1) )  
		goto label_cond_53;
	dalvik::system::BaseDexClassLoader::reporter->report(classLoadersChain, classPaths);
label_cond_53:
	return;

}
// .method public static setReporter(Ldalvik/system/BaseDexClassLoader$Reporter;)V
void dalvik::system::BaseDexClassLoader::setReporter(std::shared_ptr<dalvik::system::BaseDexClassLoader_S_Reporter> newReporter)
{
	
	//    .param p0, "newReporter"    # Ldalvik/system/BaseDexClassLoader$Reporter;
	dalvik::system::BaseDexClassLoader::reporter = newReporter;
	return;

}
// .method public addDexPath(Ljava/lang/String;)V
void dalvik::system::BaseDexClassLoader::addDexPath(std::shared_ptr<java::lang::String> dexPath)
{
	
	//    .param p1, "dexPath"    # Ljava/lang/String;
	this->pathList->addDexPath(dexPath, 0x0);
	return;

}
// .method protected findClass(Ljava/lang/String;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> dalvik::system::BaseDexClassLoader::findClass(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::util::ArrayList> suppressedExceptions;
	std::shared_ptr<java::lang::Class> c;
	std::shared_ptr<java::lang::ClassNotFoundException> cnfe;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::util::Iterator> t_S_iterator;
	std::shared_ptr<java::lang::Throwable> t;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 248        value = {
	// 249            "(",
	// 250            "Ljava/lang/String;",
	// 251            ")",
	// 252            "Ljava/lang/Class",
	// 253            "<*>;"
	// 254        }
	// 255    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 258        value = {
	// 259            Ljava/lang/ClassNotFoundException;
	// 260        }
	// 261    .end annotation
	suppressedExceptions = std::make_shared<java::util::ArrayList>();
	//    .local v2, "suppressedExceptions":Ljava/util/List;, "Ljava/util/List<Ljava/lang/Throwable;>;"
	c = this->pathList->findClass(name, suppressedExceptions);
	//    .local v0, "c":Ljava/lang/Class;
	if ( c )     
		goto label_cond_48;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cnfe = std::make_shared<java::lang::ClassNotFoundException>(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Didn\'t find class \")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\")))->append(this->pathList)->toString());
	//    .local v1, "cnfe":Ljava/lang/ClassNotFoundException;
	t_S_iterator = suppressedExceptions->iterator();
	//    .local v4, "t$iterator":Ljava/util/Iterator;
label_goto_37:
	if ( !(t_S_iterator->hasNext()) )  
		goto label_cond_47;
	t = t_S_iterator->next();
	t->checkCast("java::lang::Throwable");
	//    .local v3, "t":Ljava/lang/Throwable;
	cnfe->addSuppressed(t);
	goto label_goto_37;
	// 344    .line 130
	// 345    .end local v3    # "t":Ljava/lang/Throwable;
label_cond_47:
	// throw
	throw cnfe;
	// 349    .line 132
	// 350    .end local v1    # "cnfe":Ljava/lang/ClassNotFoundException;
	// 351    .end local v4    # "t$iterator":Ljava/util/Iterator;
label_cond_48:
	return c;

}
// .method public findLibrary(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::BaseDexClassLoader::findLibrary(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	return this->pathList->findLibrary(name);

}
// .method protected findResource(Ljava/lang/String;)Ljava/net/URL;
std::shared_ptr<java::net::URL> dalvik::system::BaseDexClassLoader::findResource(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	return this->pathList->findResource(name);

}
// .method protected findResources(Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::net::URL>> dalvik::system::BaseDexClassLoader::findResources(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 390        value = {
	// 391            "(",
	// 392            "Ljava/lang/String;",
	// 393            ")",
	// 394            "Ljava/util/Enumeration",
	// 395            "<",
	// 396            "Ljava/net/URL;",
	// 397            ">;"
	// 398        }
	// 399    .end annotation
	return this->pathList->findResources(name);

}
// .method public getLdLibraryPath()Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::BaseDexClassLoader::getLdLibraryPath()
{
	
	std::shared_ptr<java::lang::StringBuilder> result;
	std::shared_ptr<java::util::Iterator> directory_S_iterator;
	std::shared_ptr<java::io::File> directory;
	
	result = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "result":Ljava/lang/StringBuilder;
	directory_S_iterator = this->pathList->getNativeLibraryDirectories()->iterator();
	//    .local v1, "directory$iterator":Ljava/util/Iterator;
label_goto_f:
	if ( !(directory_S_iterator->hasNext()) )  
		goto label_cond_2a;
	directory = directory_S_iterator->next();
	directory->checkCast("java::io::File");
	//    .local v0, "directory":Ljava/io/File;
	if ( result->length() <= 0 )
		goto label_cond_26;
	result->append(0x3a);
label_cond_26:
	result->append(directory);
	goto label_goto_f;
	// 466    .line 211
	// 467    .end local v0    # "directory":Ljava/io/File;
label_cond_2a:
	return result->toString();

}
// .method protected declared-synchronized getPackage(Ljava/lang/String;)Ljava/lang/Package;
std::shared_ptr<java::lang::Package> dalvik::system::BaseDexClassLoader::getPackage(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::lang::Package> pack;
	
	//    .param p1, "name"    # Ljava/lang/String;
	this->monitor_enter();
	if ( !(name) )  
		goto label_cond_2d;
	try {
	//label_try_start_4:
	if ( !(( name->isEmpty() ^ 0x1)) )  
		goto label_cond_2d;
	pack = this->getPackage(name);
	//    .local v9, "pack":Ljava/lang/Package;
	if ( pack )     
		goto label_cond_2b;
	//label_try_end_2a:
	}
	catch (...){
		goto label_catchall_2f;
	}
	//    .catchall {:try_start_4 .. :try_end_2a} :catchall_2f
label_cond_2b:
	this->monitor_exit();
	return pack;
	// 539    .end local v9    # "pack":Ljava/lang/Package;
label_cond_2d:
	this->monitor_exit();
	return 0x0;
label_catchall_2f:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::BaseDexClassLoader::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(this->getClass()->getName())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[")))->append(this->pathList)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();

}


