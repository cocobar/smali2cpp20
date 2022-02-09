// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$ValidationList$1.smali
#include "java2ctype.h"
#include "java.io.ObjectInputStream_S_ValidationList_S_1.h"
#include "java.io.ObjectInputStream_S_ValidationList_S_Callback.h"
#include "java.io.ObjectInputStream_S_ValidationList.h"
#include "java.io.ObjectInputValidation.h"
#include "java.lang.Void.h"

// .method constructor <init>(Ljava/io/ObjectInputStream$ValidationList;)V
java::io::ObjectInputStream_S_ValidationList_S_1::ObjectInputStream_S_ValidationList_S_1(std::shared_ptr<java::io::ObjectInputStream_S_ValidationList> this_S_1)
{
	
	//    .param p1, "this$1"    # Ljava/io/ObjectInputStream$ValidationList;
	this->this_S_1 = this_S_1;
	// 044    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public run()Ljava/lang/Void;
std::shared_ptr<java::lang::Void> java::io::ObjectInputStream_S_ValidationList_S_1::run()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 072        value = {
	// 073            Ljava/io/InvalidObjectException;
	// 074        }
	// 075    .end annotation
	java::io::ObjectInputStream_S_ValidationList::-get0(this->this_S_1)->obj->validateObject();
	return 0x0;

}


