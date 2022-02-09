// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\DelegateLastClassLoader.smali
#include "java2ctype.h"
#include "dalvik.system.DelegateLastClassLoader.h"
#include "dalvik.system.PathClassLoader.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.net.URL.h"
#include "java.util.Enumeration.h"
#include "sun.misc.CompoundEnumeration.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/ClassLoader;)V
dalvik::system::DelegateLastClassLoader::DelegateLastClassLoader(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::lang::ClassLoader> parent)
{
	
	//    .param p1, "dexPath"    # Ljava/lang/String;
	//    .param p2, "parent"    # Ljava/lang/ClassLoader;
	dalvik::system::PathClassLoader::(dexPath, parent);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V
dalvik::system::DelegateLastClassLoader::DelegateLastClassLoader(std::shared_ptr<java::lang::String> dexPath,std::shared_ptr<java::lang::String> librarySearchPath,std::shared_ptr<java::lang::ClassLoader> parent)
{
	
	//    .param p1, "dexPath"    # Ljava/lang/String;
	//    .param p2, "librarySearchPath"    # Ljava/lang/String;
	//    .param p3, "parent"    # Ljava/lang/ClassLoader;
	dalvik::system::PathClassLoader::(dexPath, librarySearchPath, parent);
	return;

}
// .method public getResource(Ljava/lang/String;)Ljava/net/URL;
std::shared_ptr<java::net::URL> dalvik::system::DelegateLastClassLoader::getResource(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::net::URL> cVar0;
	std::shared_ptr<java::net::URL> resource;
	std::shared_ptr<java::lang::ClassLoader> cl;
	
	//    .param p1, "name"    # Ljava/lang/String;
	cVar0 = 0x0;
	resource = java::lang::Object()->getClassLoader()->getResource(name);
	//    .local v1, "resource":Ljava/net/URL;
	if ( !(resource) )  
		goto label_cond_e;
	return resource;
	// 061    .line 129
label_cond_e:
	resource = this->findResource(name);
	if ( !(resource) )  
		goto label_cond_15;
	return resource;
	// 073    .line 135
label_cond_15:
	cl = this->getParent();
	//    .local v0, "cl":Ljava/lang/ClassLoader;
	if ( cl )     
		goto label_cond_1c;
label_goto_1b:
	return cVar0;
label_cond_1c:
	cVar0 = cl->getResource(name);
	goto label_goto_1b;

}
// .method public getResources(Ljava/lang/String;)Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::net::URL>> dalvik::system::DelegateLastClassLoader::getResources(std::shared_ptr<java::lang::String> name)
{
	
	int cVar0;
	std::shared<std::vector<std::vector<java::util::Enumeration>>> resources;
	std::shared_ptr<sun::misc::CompoundEnumeration> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 098        value = {
	// 099            "(",
	// 100            "Ljava/lang/String;",
	// 101            ")",
	// 102            "Ljava/util/Enumeration",
	// 103            "<",
	// 104            "Ljava/net/URL;",
	// 105            ">;"
	// 106        }
	// 107    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 110        value = {
	// 111            Ljava/io/IOException;
	// 112        }
	// 113    .end annotation
	cVar0 = 0x0;
	resources = std::make_shared<std::vector<std::vector<java::util::Enumeration>>>(0x3);
	resources[0x0] = java::lang::Object()->getClassLoader()->getResources(name);
	resources[0x1] = this->findResources(name);
	if ( this->getParent() )     
		goto label_cond_27;
label_goto_1e:
	resources[0x2] = cVar0;
	//    .local v0, "resources":[Ljava/util/Enumeration;, "[Ljava/util/Enumeration<Ljava/net/URL;>;"
	cVar1 = std::make_shared<sun::misc::CompoundEnumeration>(resources);
	return cVar1;
	// 167    .line 145
	// 168    .end local v0    # "resources":[Ljava/util/Enumeration;, "[Ljava/util/Enumeration<Ljava/net/URL;>;"
label_cond_27:
	cVar0 = this->getParent()->getResources(name);
	goto label_goto_1e;

}
// .method protected loadClass(Ljava/lang/String;Z)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> dalvik::system::DelegateLastClassLoader::loadClass(std::shared_ptr<java::lang::String> name,bool resolve)
{
	
	std::shared_ptr<java::lang::Class> cl;
	std::any ex;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "resolve"    # Z
	//    .annotation system Ldalvik/annotation/Signature;
	// 186        value = {
	// 187            "(",
	// 188            "Ljava/lang/String;",
	// 189            "Z)",
	// 190            "Ljava/lang/Class",
	// 191            "<*>;"
	// 192        }
	// 193    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 196        value = {
	// 197            Ljava/lang/ClassNotFoundException;
	// 198        }
	// 199    .end annotation
	cl = this->findLoadedClass(name);
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	if ( !(cl) )  
		goto label_cond_7;
	return cl;
	// 214    .line 95
label_cond_7:
	try {
	//label_try_start_7:
	//label_try_end_10:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_7 .. :try_end_10} :catch_12
	return java::lang::Object()->getClassLoader()->loadClass(name);
	// 231    .line 96
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v4, "ignored":Ljava/lang/ClassNotFoundException;
	0x0;
	//    .local v3, "fromSuper":Ljava/lang/ClassNotFoundException;
	try {
	//label_try_start_14:
	//label_try_end_17:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_19;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_14 .. :try_end_17} :catch_19
	return this->findClass(name);
	// 250    .line 104
label_catch_19:
	// move-exception
	ex = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "ex":Ljava/lang/ClassNotFoundException;
	ex;
	//    .local v3, "fromSuper":Ljava/lang/ClassNotFoundException;
	try {
	//label_try_start_1b:
	//label_try_end_22:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_1b .. :try_end_22} :catch_24
	return this->getParent()->loadClass(name);
	// 273    .line 111
label_catch_24:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "cnfe":Ljava/lang/ClassNotFoundException;
	// throw
	throw ex;

}


