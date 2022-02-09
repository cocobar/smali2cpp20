// CPP L:\smali2cpp20\x64\Release\out\java\lang\Enum$1.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Class.h"
#include "java.lang.Enum_S_1.h"
#include "java.lang.Enum.h"
#include "java.lang.IllegalAccessException.h"
#include "java.lang.NoSuchMethodException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.lang.reflect.InvocationTargetException.h"
#include "java.lang.reflect.Method.h"
#include "libcore.util.BasicLruCache.h"
#include "libcore.util.EmptyArray.h"

// .method constructor <init>(I)V
java::lang::Enum_S_1::Enum_S_1(int _S_anonymous0)
{
	
	//    .param p1, "$anonymous0"    # I
	libcore::util::BasicLruCache::(_S_anonymous0);
	return;

}
// .method protected create(Ljava/lang/Class;)[Ljava/lang/Object;
std::shared_ptr<java::lang::Object> java::lang::Enum_S_1::create(std::shared_ptr<java::lang::Class<java::lang::Enum>> enumType)
{
	
	std::shared_ptr<java::lang::AssertionError> cVar4;
	std::shared_ptr<java::lang::AssertionError> cVar3;
	std::shared_ptr<java::lang::AssertionError> cVar2;
	std::shared_ptr<java::lang::reflect::Method> method;
	std::shared_ptr<std::vector<java::lang::Object>> cVar0;
	std::shared_ptr<std::vector<java::lang::Object>> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 062        value = {
	// 063            "(",
	// 064            "Ljava/lang/Class",
	// 065            "<+",
	// 066            "Ljava/lang/Enum;",
	// 067            ">;)[",
	// 068            "Ljava/lang/Object;"
	// 069        }
	// 070    .end annotation
	//    .local p1, "enumType":Ljava/lang/Class;, "Ljava/lang/Class<+Ljava/lang/Enum;>;"
	if ( enumType->isEnum() )     
		goto label_cond_8;
	return 0x0;
	// 086    .line 268
label_cond_8:
	try {
	//label_try_start_8:
	method = enumType->getDeclaredMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("values")), libcore::util::EmptyArray::CLASS);
	//    .local v3, "method":Ljava/lang/reflect/Method;
	method->setAccessible(0x1);
	cVar0 = 0x0;
	cVar0->checkCast("std::vector<java::lang::Object>");
	cVar1 = method->invoke(cVar0, std::make_shared<std::vector<std::vector<java::lang::Object>>>(0x0));
	cVar1->checkCast("std::vector<java::lang::Object>");
	//label_try_end_21:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_36;
	}
	catch (java::lang::IllegalAccessException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_2c;
	}
	catch (java::lang::reflect::InvocationTargetException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_22;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_8 .. :try_end_21} :catch_36
	//    .catch Ljava/lang/IllegalAccessException; {:try_start_8 .. :try_end_21} :catch_2c
	//    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_8 .. :try_end_21} :catch_22
	return cVar1;
	// 124    .line 275
	// 125    .end local v3    # "method":Ljava/lang/reflect/Method;
label_catch_22:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v2, "impossible":Ljava/lang/reflect/InvocationTargetException;
	cVar2 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("impossible")), getCatchExcetionFromList);
	// throw
	throw cVar2;
	// 139    .line 273
	// 140    .end local v2    # "impossible":Ljava/lang/reflect/InvocationTargetException;
label_catch_2c:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "impossible":Ljava/lang/IllegalAccessException;
	cVar3 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("impossible")), getCatchExcetionFromList);
	// throw
	throw cVar3;
	// 154    .line 271
	// 155    .end local v0    # "impossible":Ljava/lang/IllegalAccessException;
label_catch_36:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v1, "impossible":Ljava/lang/NoSuchMethodException;
	cVar4 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("impossible")), getCatchExcetionFromList);
	// throw
	throw cVar4;

}


