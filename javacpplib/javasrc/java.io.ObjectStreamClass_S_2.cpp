// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectStreamClass$2.smali
#include "java2ctype.h"
#include "java.io.InvalidClassException.h"
#include "java.io.ObjectInputStream.h"
#include "java.io.ObjectOutputStream.h"
#include "java.io.ObjectStreamClass_S_2.h"
#include "java.io.ObjectStreamClass_S_ExceptionInfo.h"
#include "java.io.ObjectStreamClass.h"
#include "java.io.ObjectStreamField.h"
#include "java.lang.Class.h"
#include "java.lang.Long.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Void.h"
#include "java.lang.reflect.Constructor.h"
#include "java.lang.reflect.Method.h"

// .method constructor <init>(Ljava/io/ObjectStreamClass;Ljava/lang/Class;)V
java::io::ObjectStreamClass_S_2::ObjectStreamClass_S_2(std::shared_ptr<java::io::ObjectStreamClass> this_S_0,std::shared_ptr<java::lang::Class> var1)
{
	
	//    .param p1, "this$0"    # Ljava/io/ObjectStreamClass;
	this->this_S_0 = this_S_0;
	this->val_S_cl = var1;
	// 048    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/Void;
std::shared_ptr<java::lang::Void> java::io::ObjectStreamClass_S_2::run()
{
	
	bool cVar0;
	int cVar1;
	std::shared_ptr<java::lang::Void> cVar2;
	std::shared_ptr<java::lang::String> e;
	std::shared_ptr<java::io::ObjectStreamClass_S_ExceptionInfo> cVar3;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar4;
	std::shared<std::vector<std::vector<java::lang::Class>>> cVar5;
	std::vector<std::any> tryCatchExcetionList;
	
	cVar0 = 0x1;
	cVar1 = 0x0;
	cVar2 = 0x0;
	if ( !(java::io::ObjectStreamClass::-get2(this->this_S_0)) )  
		goto label_cond_1e;
	java::io::ObjectStreamClass::-set8(this->this_S_0, java::lang::Long::valueOf(0x0));
	java::io::ObjectStreamClass::-set2(this->this_S_0, java::io::ObjectStreamClass::NO_FIELDS);
	return cVar2;
	// 108    .line 464
label_cond_1e:
	if ( !(this->val_S_cl->isArray()) )  
		goto label_cond_2e;
	java::io::ObjectStreamClass::-set2(this->this_S_0, java::io::ObjectStreamClass::NO_FIELDS);
	return cVar2;
	// 128    .line 469
label_cond_2e:
	java::io::ObjectStreamClass::-set8(this->this_S_0, java::io::ObjectStreamClass::-wrap1(this->val_S_cl));
	try {
	//label_try_start_39:
	java::io::ObjectStreamClass::-set2(this->this_S_0, java::io::ObjectStreamClass::-wrap0(this->val_S_cl));
	java::io::ObjectStreamClass::-wrap9(this->this_S_0);
	//label_try_end_49:
	}
	catch (java::io::InvalidClassException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_7d;
	}
	//    .catch Ljava/io/InvalidClassException; {:try_start_39 .. :try_end_49} :catch_7d
label_goto_49:
	if ( !(java::io::ObjectStreamClass::-get1(this->this_S_0)) )  
		goto label_cond_9c;
	java::io::ObjectStreamClass::-set0(this->this_S_0, java::io::ObjectStreamClass::-wrap4(this->val_S_cl));
label_goto_5c:
	java::io::ObjectStreamClass::-set10(this->this_S_0, java::io::ObjectStreamClass::-wrap6(this->val_S_cl, std::make_shared<java::lang::String>(std::make_shared<char[]>("writeReplace")), cVar2, java::lang::Object()));
	java::io::ObjectStreamClass::-set6(this->this_S_0, java::io::ObjectStreamClass::-wrap6(this->val_S_cl, std::make_shared<java::lang::String>(std::make_shared<char[]>("readResolve")), cVar2, java::lang::Object()));
	return cVar2;
	// 218    .line 473
label_catch_7d:
	// move-exception
	e = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/io/InvalidClassException;
	cVar3 = std::make_shared<java::io::ObjectStreamClass_S_ExceptionInfo>(e->classname, e->getMessage());
	java::io::ObjectStreamClass::-set7(this->this_S_0, java::io::ObjectStreamClass::-set1(this->this_S_0, cVar3));
	java::io::ObjectStreamClass::-set2(this->this_S_0, java::io::ObjectStreamClass::NO_FIELDS);
	goto label_goto_49;
	// 255    .line 482
	// 256    .end local v0    # "e":Ljava/io/InvalidClassException;
label_cond_9c:
	java::io::ObjectStreamClass::-set0(this->this_S_0, java::io::ObjectStreamClass::-wrap5(this->val_S_cl));
	cVar4 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(cVar0);
	cVar4[cVar1] = java::io::ObjectOutputStream();
	java::io::ObjectStreamClass::-set9(this->this_S_0, java::io::ObjectStreamClass::-wrap7(this->val_S_cl, std::make_shared<java::lang::String>(std::make_shared<char[]>("writeObject")), cVar4, java::lang::Void::TYPE));
	cVar5 = std::make_shared<std::vector<std::vector<java::lang::Class>>>(cVar0);
	cVar5[cVar1] = java::io::ObjectInputStream();
	java::io::ObjectStreamClass::-set4(this->this_S_0, java::io::ObjectStreamClass::-wrap7(this->val_S_cl, std::make_shared<java::lang::String>(std::make_shared<char[]>("readObject")), cVar5, java::lang::Void::TYPE));
	java::io::ObjectStreamClass::-set5(this->this_S_0, java::io::ObjectStreamClass::-wrap7(this->val_S_cl, std::make_shared<java::lang::String>(std::make_shared<char[]>("readObjectNoData")), cVar2, java::lang::Void::TYPE));
	if ( !(java::io::ObjectStreamClass::-get3(this->this_S_0)) )  
		goto label_cond_f2;
label_goto_ed:
	java::io::ObjectStreamClass::-set3(this->this_S_0, cVar0);
	goto label_goto_5c;
label_cond_f2:
	cVar0 = cVar1;
	goto label_goto_ed;

}


