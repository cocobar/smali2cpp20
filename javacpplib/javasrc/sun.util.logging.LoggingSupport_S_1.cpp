// CPP L:\smali2cpp20\x64\Release\out\sun\util\logging\LoggingSupport$1.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.ClassLoader.h"
#include "java.lang.ClassNotFoundException.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.NoSuchFieldException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.reflect.Field.h"
#include "sun.util.logging.LoggingProxy.h"
#include "sun.util.logging.LoggingSupport_S_1.h"

// .method constructor <init>()V
sun::util::logging::LoggingSupport_S_1::LoggingSupport_S_1()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Lsun/util/logging/LoggingProxy;
std::shared_ptr<sun::util::logging::LoggingProxy> sun::util::logging::LoggingSupport_S_1::run()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::AssertionError> cVar1;
	std::shared_ptr<java::lang::reflect::Field> f;
	std::shared_ptr<sun::util::logging::LoggingProxy> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	try {
	//label_try_start_1:
	//    .local v0, "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	f = java::lang::Class::forName(std::make_shared<java::lang::String>(std::make_shared<char[]>("java.util.logging.LoggingProxyImpl")), 0x1, 0x0)->getDeclaredField(std::make_shared<java::lang::String>(std::make_shared<char[]>("INSTANCE")));
	//    .local v4, "f":Ljava/lang/reflect/Field;
	f->setAccessible(0x1);
	cVar0 = f->get(0x0);
	cVar0->checkCast("sun::util::logging::LoggingProxy");
	//label_try_end_1c:
	}
	catch (java::lang::ClassNotFoundException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2b;
	}
	catch (java::lang::NoSuchFieldException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1d;
	}
	//    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_1c} :catch_2b
	//    .catch Ljava/lang/NoSuchFieldException; {:try_start_1 .. :try_end_1c} :catch_24
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_1 .. :try_end_1c} :catch_1d
	return cVar0;
	// 103    .line 62
	// 104    .end local v0    # "c":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
	// 105    .end local v4    # "f":Ljava/lang/reflect/Field;
label_catch_1d:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "e":Ljava/lang/IllegalAccessException;
	cVar1 = std::make_shared<java::lang::AssertionError>(getCatchExcetionFromList);
	// throw
	throw cVar1;
	// 117    .line 60
	// 118    .end local v2    # "e":Ljava/lang/IllegalAccessException;
label_catch_24:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v3, "e":Ljava/lang/NoSuchFieldException;
	cVar2 = std::make_shared<java::lang::AssertionError>(getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 130    .line 58
	// 131    .end local v3    # "e":Ljava/lang/NoSuchFieldException;
label_catch_2b:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "cnf":Ljava/lang/ClassNotFoundException;
	return 0x0;

}


