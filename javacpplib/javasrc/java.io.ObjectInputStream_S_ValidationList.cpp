// CPP L:\smali2cpp20\x64\Release\out\java\io\ObjectInputStream$ValidationList.smali
#include "java2ctype.h"
#include "java.io.InvalidObjectException.h"
#include "java.io.ObjectInputStream_S_ValidationList_S_1.h"
#include "java.io.ObjectInputStream_S_ValidationList_S_Callback.h"
#include "java.io.ObjectInputStream_S_ValidationList.h"
#include "java.io.ObjectInputValidation.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.security.AccessControlContext.h"
#include "java.security.AccessController.h"
#include "java.security.PrivilegedActionException.h"

// .method static synthetic -get0(Ljava/io/ObjectInputStream$ValidationList;)Ljava/io/ObjectInputStream$ValidationList$Callback;
std::shared_ptr<java::io::ObjectInputStream_S_ValidationList_S_Callback> java::io::ObjectInputStream_S_ValidationList::_get0(std::shared_ptr<java::io::ObjectInputStream_S_ValidationList> _this)
{
	
	//    .param p0, "-this"    # Ljava/io/ObjectInputStream$ValidationList;
	return _this->list;

}
// .method constructor <init>()V
java::io::ObjectInputStream_S_ValidationList::ObjectInputStream_S_ValidationList()
{
	
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public clear()V
void java::io::ObjectInputStream_S_ValidationList::clear()
{
	
	this->list = 0x0;
	return;

}
// .method doCallbacks()V
void java::io::ObjectInputStream_S_ValidationList::doCallbacks()
{
	
	std::shared_ptr<java::io::InvalidObjectException> cVar1;
	std::shared_ptr<java::io::ObjectInputStream_S_ValidationList_S_1> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 067        value = {
	// 068            Ljava/io/InvalidObjectException;
	// 069        }
	// 070    .end annotation
label_goto_1:
	try {
	//label_try_start_1:
	if ( !(this->list) )  
		goto label_cond_22;
	cVar0 = std::make_shared<java::io::ObjectInputStream_S_ValidationList_S_1>(this);
	java::security::AccessController::doPrivileged(cVar0, this->list->acc);
	this->list = this->list->next;
	//label_try_end_17:
	}
	catch (java::security::PrivilegedActionException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_18;
	}
	//    .catch Ljava/security/PrivilegedActionException; {:try_start_1 .. :try_end_17} :catch_18
	goto label_goto_1;
	// 106    .line 2274
label_catch_18:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "ex":Ljava/security/PrivilegedActionException;
	this->list = 0x0;
	tryCatchExcetionList.pop_back();
	cVar1 = tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	cVar1->checkCast("java::io::InvalidObjectException");
	// throw
	throw cVar1;
	// 123    .line 2278
	// 124    .end local v0    # "ex":Ljava/security/PrivilegedActionException;
label_cond_22:
	return;

}
// .method register(Ljava/io/ObjectInputValidation;I)V
void java::io::ObjectInputStream_S_ValidationList::register(std::shared_ptr<java::io::ObjectInputValidation> obj,int priority)
{
	
	std::shared_ptr<java::io::InvalidObjectException> cVar0;
	std::shared_ptr<java::io::ObjectInputStream_S_ValidationList_S_Callback> prev;
	std::shared_ptr<java::io::ObjectInputStream_S_ValidationList_S_Callback> cur;
	std::shared_ptr<java::security::AccessControlContext> acc;
	std::shared_ptr<java::io::ObjectInputStream_S_ValidationList_S_Callback> cVar1;
	std::shared_ptr<java::io::ObjectInputStream_S_ValidationList_S_Callback> cVar2;
	
	//    .param p1, "obj"    # Ljava/io/ObjectInputValidation;
	//    .param p2, "priority"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 134        value = {
	// 135            Ljava/io/InvalidObjectException;
	// 136        }
	// 137    .end annotation
	if ( obj )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::io::InvalidObjectException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("null callback")));
	// throw
	throw cVar0;
	// 152    .line 2241
label_cond_b:
	prev = 0x0;
	//    .local v2, "prev":Ljava/io/ObjectInputStream$ValidationList$Callback;
	cur = this->list;
	//    .end local v2    # "prev":Ljava/io/ObjectInputStream$ValidationList$Callback;
	//    .local v1, "cur":Ljava/io/ObjectInputStream$ValidationList$Callback;
label_goto_e:
	if ( !(cur) )  
		goto label_cond_18;
	if ( priority >= cur->priority )
		goto label_cond_18;
	cur;
	//    .local v2, "prev":Ljava/io/ObjectInputStream$ValidationList$Callback;
	cur = cur->next;
	goto label_goto_e;
	// 178    .line 2246
	// 179    .end local v2    # "prev":Ljava/io/ObjectInputStream$ValidationList$Callback;
label_cond_18:
	acc = java::security::AccessController::getContext({const[class].FS-Param});
	//    .local v0, "acc":Ljava/security/AccessControlContext;
	if ( !(prev) )  
		goto label_cond_26;
	cVar1 = std::make_shared<java::io::ObjectInputStream_S_ValidationList_S_Callback>(obj, priority, cur, acc);
	prev->next = cVar1;
label_goto_25:
	return;
	// 200    .line 2250
label_cond_26:
	cVar2 = std::make_shared<java::io::ObjectInputStream_S_ValidationList_S_Callback>(obj, priority, this->list, acc);
	this->list = cVar2;
	goto label_goto_25;

}


