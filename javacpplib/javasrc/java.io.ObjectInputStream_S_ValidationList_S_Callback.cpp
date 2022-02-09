// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$ValidationList$Callback.smali
#include "java2ctype.h"
#include "java.io.ObjectInputStream_S_ValidationList_S_Callback.h"
#include "java.io.ObjectInputValidation.h"
#include "java.security.AccessControlContext.h"

// .method constructor <init>(Ljava/io/ObjectInputValidation;ILjava/io/ObjectInputStream$ValidationList$Callback;Ljava/security/AccessControlContext;)V
java::io::ObjectInputStream_S_ValidationList_S_Callback::ObjectInputStream_S_ValidationList_S_Callback(std::shared_ptr<java::io::ObjectInputValidation> obj,int priority,std::shared_ptr<java::io::ObjectInputStream_S_ValidationList_S_Callback> next,std::shared_ptr<java::security::AccessControlContext> acc)
{
	
	//    .param p1, "obj"    # Ljava/io/ObjectInputValidation;
	//    .param p2, "priority"    # I
	//    .param p3, "next"    # Ljava/io/ObjectInputStream$ValidationList$Callback;
	//    .param p4, "acc"    # Ljava/security/AccessControlContext;
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->obj = obj;
	this->priority = priority;
	this->next = next;
	this->acc = acc;
	return;

}


