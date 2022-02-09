// CPP L:\smali2cpp20\x64\Release\out\sun\reflect\misc\ReflectUtil.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.Object.h"
#include "java.lang.SecurityException.h"
#include "java.lang.SecurityManager.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.reflect.Proxy.h"
#include "sun.reflect.misc.ReflectUtil.h"

// .method private constructor <init>()V
sun::reflect::misc::ReflectUtil::ReflectUtil()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static checkPackageAccess(Ljava/lang/Class;)V
void sun::reflect::misc::ReflectUtil::checkPackageAccess(std::shared_ptr<java::lang::Class<java::lang::Object>> clazz)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 021        value = {
	// 022            "(",
	// 023            "Ljava/lang/Class",
	// 024            "<*>;)V"
	// 025        }
	// 026    .end annotation
	//    .local p0, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	sun::reflect::misc::ReflectUtil::checkPackageAccess(clazz->getName());
	if ( !(sun::reflect::misc::ReflectUtil::isNonPublicProxyClass(clazz)) )  
		goto label_cond_10;
	sun::reflect::misc::ReflectUtil::checkProxyPackageAccess(clazz);
label_cond_10:
	return;

}
// .method public static checkPackageAccess(Ljava/lang/String;)V
void sun::reflect::misc::ReflectUtil::checkPackageAccess(std::shared_ptr<java::lang::String> name)
{
	
	char cVar0;
	std::shared_ptr<java::lang::SecurityManager> s;
	std::shared_ptr<java::lang::String> cname;
	int b;
	int i;
	
	//    .param p0, "name"    # Ljava/lang/String;
	cVar0 = 0x2e;
	s = java::lang::System::getSecurityManager({const[class].FS-Param});
	//    .local v3, "s":Ljava/lang/SecurityManager;
	if ( !(s) )  
		goto label_cond_3b;
	cname = name->replace(0x2f, cVar0);
	//    .local v1, "cname":Ljava/lang/String;
	if ( !(cname->startsWith(std::make_shared<java::lang::String>(std::make_shared<char[]>("[")))) )  
		goto label_cond_2c;
	b = ( cname->lastIndexOf(0x5b) + 0x2);
	//    .local v0, "b":I
	if ( b <= 0x1 )
		goto label_cond_2c;
	if ( b >= cname->length() )
		goto label_cond_2c;
	cname = cname->substring(b);
	//    .end local v0    # "b":I
label_cond_2c:
	i = cname->lastIndexOf(cVar0);
	//    .local v2, "i":I
	if ( i == -0x1 )
		goto label_cond_3b;
	s->checkPackageAccess(cname->substring(0x0, i));
	//    .end local v1    # "cname":Ljava/lang/String;
	//    .end local v2    # "i":I
label_cond_3b:
	return;

}
// .method public static checkProxyPackageAccess(Ljava/lang/Class;)V
void sun::reflect::misc::ReflectUtil::checkProxyPackageAccess(std::shared_ptr<java::lang::Class<java::lang::Object>> clazz)
{
	
	std::shared_ptr<java::lang::Object> cVar0;
	int cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 143        value = {
	// 144            "(",
	// 145            "Ljava/lang/Class",
	// 146            "<*>;)V"
	// 147        }
	// 148    .end annotation
	//    .local p0, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local v1, "s":Ljava/lang/SecurityManager;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_1c;
	if ( !(java::lang::reflect::Proxy::isProxyClass(clazz)) )  
		goto label_cond_1c;
	cVar0 = clazz->getInterfaces();
	cVar1 = 0x0;
label_goto_12:
	if ( cVar1 >= cVar0->size() )
		goto label_cond_1c;
	//    .local v0, "intf":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	sun::reflect::misc::ReflectUtil::checkPackageAccess(cVar0[cVar1]);
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_12;
	// 191    .line 160
	// 192    .end local v0    # "intf":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_1c:
	return;

}
// .method public static varargs checkProxyPackageAccess(Ljava/lang/ClassLoader;[Ljava/lang/Class;)V
void sun::reflect::misc::ReflectUtil::checkProxyPackageAccess(std::shared_ptr<java::lang::ClassLoader> ccl,std::shared_ptr<std::vector<java::lang::Class<java::lang::Object>>> interfaces)
{
	
	int cVar0;
	std::shared_ptr<java::lang::Class> intf;
	
	//    .param p0, "ccl"    # Ljava/lang/ClassLoader;
	//    .annotation system Ldalvik/annotation/Signature;
	// 201        value = {
	// 202            "(",
	// 203            "Ljava/lang/ClassLoader;",
	// 204            "[",
	// 205            "Ljava/lang/Class",
	// 206            "<*>;)V"
	// 207        }
	// 208    .end annotation
	//    .local p1, "interfaces":[Ljava/lang/Class;, "[Ljava/lang/Class<*>;"
	//    .local v2, "sm":Ljava/lang/SecurityManager;
	if ( !(java::lang::System::getSecurityManager({const[class].FS-Param})) )  
		goto label_cond_1c;
	cVar0 = 0x0;
label_goto_8:
	if ( cVar0 >= interfaces->size() )
		goto label_cond_1c;
	intf = interfaces[cVar0];
	//    .local v1, "intf":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local v0, "cl":Ljava/lang/ClassLoader;
	if ( !(sun::reflect::misc::ReflectUtil::needsPackageAccessCheck(ccl, intf->getClassLoader())) )  
		goto label_cond_19;
	sun::reflect::misc::ReflectUtil::checkPackageAccess(intf);
label_cond_19:
	cVar0 = ( cVar0 + 0x1);
	goto label_goto_8;
	// 254    .line 182
	// 255    .end local v0    # "cl":Ljava/lang/ClassLoader;
	// 256    .end local v1    # "intf":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_cond_1c:
	return;

}
// .method public static forName(Ljava/lang/String;)Ljava/lang/Class;
std::shared_ptr<java::lang::Class<java::lang::Object>> sun::reflect::misc::ReflectUtil::forName(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Signature;
	// 265        value = {
	// 266            "(",
	// 267            "Ljava/lang/String;",
	// 268            ")",
	// 269            "Ljava/lang/Class",
	// 270            "<*>;"
	// 271        }
	// 272    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 275        value = {
	// 276            Ljava/lang/ClassNotFoundException;
	// 277        }
	// 278    .end annotation
	sun::reflect::misc::ReflectUtil::checkPackageAccess(name);
	return java::lang::Class::forName(name);

}
// .method private static isAncestor(Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;)Z
bool sun::reflect::misc::ReflectUtil::isAncestor(std::shared_ptr<java::lang::ClassLoader> p,std::shared_ptr<java::lang::ClassLoader> cl)
{
	
	std::shared_ptr<java::lang::ClassLoader> acl;
	
	//    .param p0, "p"    # Ljava/lang/ClassLoader;
	//    .param p1, "cl"    # Ljava/lang/ClassLoader;
	//    .local v0, "acl":Ljava/lang/ClassLoader;
label_cond_1:
	acl = acl->getParent();
	if ( p != acl )
		goto label_cond_9;
	return 0x1;
	// 316    .line 119
label_cond_9:
	if ( acl )     
		goto label_cond_1;
	return 0x0;

}
// .method public static isNonPublicProxyClass(Ljava/lang/Class;)Z
bool sun::reflect::misc::ReflectUtil::isNonPublicProxyClass(std::shared_ptr<java::lang::Class<java::lang::Object>> cls)
{
	
	int cVar1;
	std::shared_ptr<java::lang::String> name;
	int i;
	bool cVar1;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 329        value = {
	// 330            "(",
	// 331            "Ljava/lang/Class",
	// 332            "<*>;)Z"
	// 333        }
	// 334    .end annotation
	//    .local p0, "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	cVar1 = 0x0;
	name = cls->getName();
	//    .local v1, "name":Ljava/lang/String;
	i = name->lastIndexOf(0x2e);
	//    .local v0, "i":I
	if ( i == -0x1 )
		goto label_cond_1f;
	//    .local v2, "pkg":Ljava/lang/String;
label_goto_12:
	if ( !(java::lang::reflect::Proxy::isProxyClass(cls)) )  
		goto label_cond_1e;
	cVar1 = ( name->substring(cVar1, i)->isEmpty() ^ 0x1);
label_cond_1e:
	return cVar1;
	// 381    .line 199
	// 382    .end local v2    # "pkg":Ljava/lang/String;
label_cond_1f:
	std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
	//    .restart local v2    # "pkg":Ljava/lang/String;
	goto label_goto_12;

}
// .method public static isPackageAccessible(Ljava/lang/Class;)Z
bool sun::reflect::misc::ReflectUtil::isPackageAccessible(std::shared_ptr<java::lang::Class<java::lang::Object>> clazz)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 393        value = {
	// 394            "(",
	// 395            "Ljava/lang/Class",
	// 396            "<*>;)Z"
	// 397        }
	// 398    .end annotation
	//    .local p0, "clazz":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	try {
	//label_try_start_0:
	sun::reflect::misc::ReflectUtil::checkPackageAccess(clazz);
	//label_try_end_3:
	}
	catch (java::lang::SecurityException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_5;
	}
	//    .catch Ljava/lang/SecurityException; {:try_start_0 .. :try_end_3} :catch_5
	return 0x1;
	// 413    .line 104
label_catch_5:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/SecurityException;
	return 0x0;

}
// .method private static isSubclassOf(Ljava/lang/Class;Ljava/lang/Class;)Z
bool sun::reflect::misc::ReflectUtil::isSubclassOf(std::shared_ptr<java::lang::Class<java::lang::Object>> queryClass,std::shared_ptr<java::lang::Class<java::lang::Object>> ofClass)
{
	
	std::shared_ptr<java::lang::Class> queryClass;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 427        value = {
	// 428            "(",
	// 429            "Ljava/lang/Class",
	// 430            "<*>;",
	// 431            "Ljava/lang/Class",
	// 432            "<*>;)Z"
	// 433        }
	// 434    .end annotation
	//    .local p0, "queryClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	//    .local p1, "ofClass":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_0:
	if ( !(queryClass) )  
		goto label_cond_b;
	if ( queryClass != ofClass )
		goto label_cond_6;
	return 0x1;
	// 451    .line 57
label_cond_6:
	queryClass = queryClass->getSuperclass();
	goto label_goto_0;
	// 459    .line 59
label_cond_b:
	return 0x0;

}
// .method public static needsPackageAccessCheck(Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;)Z
bool sun::reflect::misc::ReflectUtil::needsPackageAccessCheck(std::shared_ptr<java::lang::ClassLoader> from,std::shared_ptr<java::lang::ClassLoader> to)
{
	
	//    .param p0, "from"    # Ljava/lang/ClassLoader;
	//    .param p1, "to"    # Ljava/lang/ClassLoader;
	if ( !(from) )  
		goto label_cond_4;
	if ( from != to )
		goto label_cond_6;
label_cond_4:
	return 0x0;
	// 483    .line 138
label_cond_6:
	if ( to )     
		goto label_cond_a;
	return 0x1;
	// 492    .line 141
label_cond_a:
	return ( sun::reflect::misc::ReflectUtil::isAncestor(from, to) ^ 0x1);

}
// .method public static newInstance(Ljava/lang/Class;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::reflect::misc::ReflectUtil::newInstance(std::shared_ptr<java::lang::Class<java::lang::Object>> cls)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 506        value = {
	// 507            "(",
	// 508            "Ljava/lang/Class",
	// 509            "<*>;)",
	// 510            "Ljava/lang/Object;"
	// 511        }
	// 512    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 515        value = {
	// 516            Ljava/lang/InstantiationException;,
	// 517            Ljava/lang/IllegalAccessException;
	// 518        }
	// 519    .end annotation
	//    .local p0, "cls":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	sun::reflect::misc::ReflectUtil::checkPackageAccess(cls);
	return cls->newInstance();

}


