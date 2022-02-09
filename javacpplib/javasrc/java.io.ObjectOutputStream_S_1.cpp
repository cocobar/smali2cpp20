// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectOutputStream$1.smali
#include "java2ctype.h"
#include "java.io.ObjectOutputStream_S_1.h"
#include "java.io.ObjectOutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Class.h"
#include "java.lang.NoSuchMethodException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.reflect.Method.h"

// .method constructor <init>(Ljava/lang/Class;)V
java::io::ObjectOutputStream_S_1::ObjectOutputStream_S_1(std::shared_ptr<java::lang::Class> var0)
{
	
	this->val_S_subcl = var0;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/Boolean;
std::shared_ptr<java::lang::Boolean> java::io::ObjectOutputStream_S_1::run()
{
	
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<std::vector<java::lang::Class>> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar0;
	
	cl = this->val_S_subcl;
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_2:
	if ( cl == java::io::ObjectOutputStream() )
		goto label_cond_2a;
	try {
	//label_try_start_6:
	cVar0 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(0x1);
	cVar0[0x0] = java::lang::Object();
	cl->getDeclaredMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("writeUnshared")), cVar0);
	//label_try_end_16:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_17;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_6 .. :try_end_16} :catch_17
	return java::lang::Boolean::FALSE;
	// 090    .line 1095
label_catch_17:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/lang/NoSuchMethodException;
	try {
	//label_try_start_18:
	cVar1 = 0x0;
	cVar1->checkCast("std::vector<java::lang::Class>");
	cl->getDeclaredMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("putFields")), cVar1);
	//label_try_end_23:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_24;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_18 .. :try_end_23} :catch_24
	return java::lang::Boolean::FALSE;
	// 112    .line 1100
label_catch_24:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	cl = cl->getSuperclass();
	goto label_goto_2;
	// 123    .line 1103
	// 124    .end local v1    # "ex":Ljava/lang/NoSuchMethodException;
label_cond_2a:
	return java::lang::Boolean::TRUE;

}


