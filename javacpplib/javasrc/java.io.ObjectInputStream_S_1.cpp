// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$1.smali
#include "java2ctype.h"
#include "java.io.ObjectInputStream_S_1.h"
#include "java.io.ObjectInputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Class.h"
#include "java.lang.NoSuchMethodException.h"
#include "java.lang.String.h"
#include "java.lang.reflect.Method.h"

// .method constructor <init>(Ljava/lang/Class;)V
java::io::ObjectInputStream_S_1::ObjectInputStream_S_1(std::shared_ptr<java::lang::Class> var0)
{
	
	this->val_S_subcl = var0;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/Boolean;
std::shared_ptr<java::lang::Boolean> java::io::ObjectInputStream_S_1::run()
{
	
	std::shared_ptr<java::lang::Class> cl;
	std::shared_ptr<std::vector<java::lang::Class>> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<std::vector<java::lang::Class>> cVar0;
	
	cl = this->val_S_subcl;
	//    .local v0, "cl":Ljava/lang/Class;, "Ljava/lang/Class<*>;"
label_goto_2:
	if ( cl == java::io::ObjectInputStream() )
		goto label_cond_25;
	try {
	//label_try_start_6:
	cVar0 = 0x0;
	cVar0->checkCast("std::vector<java::lang::Class>");
	cl->getDeclaredMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("readUnshared")), cVar0);
	//label_try_end_11:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_12;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_6 .. :try_end_11} :catch_12
	return java::lang::Boolean::FALSE;
	// 084    .line 1277
label_catch_12:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v1, "ex":Ljava/lang/NoSuchMethodException;
	try {
	//label_try_start_13:
	cVar1 = 0x0;
	cVar1->checkCast("std::vector<java::lang::Class>");
	cl->getDeclaredMethod(std::make_shared<java::lang::String>(std::make_shared<char[]>("readFields")), cVar1);
	//label_try_end_1e:
	}
	catch (java::lang::NoSuchMethodException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_1f;
	}
	//    .catch Ljava/lang/NoSuchMethodException; {:try_start_13 .. :try_end_1e} :catch_1f
	return java::lang::Boolean::FALSE;
	// 106    .line 1282
label_catch_1f:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	cl = cl->getSuperclass();
	goto label_goto_2;
	// 117    .line 1285
	// 118    .end local v1    # "ex":Ljava/lang/NoSuchMethodException;
label_cond_25:
	return java::lang::Boolean::TRUE;

}


