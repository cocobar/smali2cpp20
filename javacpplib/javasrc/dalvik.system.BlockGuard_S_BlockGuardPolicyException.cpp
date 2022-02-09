// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\BlockGuard$BlockGuardPolicyException.smali
#include "java2ctype.h"
#include "dalvik.system.BlockGuard_S_BlockGuardPolicyException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.Throwable.h"

// .method public constructor <init>(II)V
dalvik::system::BlockGuard_S_BlockGuardPolicyException::BlockGuard_S_BlockGuardPolicyException(int policyState,int policyViolated)
{
	
	//    .param p1, "policyState"    # I
	//    .param p2, "policyViolated"    # I
	dalvik::system::BlockGuard_S_BlockGuardPolicyException::(policyState, policyViolated, 0x0);
	return;

}
// .method public constructor <init>(IILjava/lang/String;)V
dalvik::system::BlockGuard_S_BlockGuardPolicyException::BlockGuard_S_BlockGuardPolicyException(int policyState,int policyViolated,std::shared_ptr<java::lang::String> message)
{
	
	//    .param p1, "policyState"    # I
	//    .param p2, "policyViolated"    # I
	//    .param p3, "message"    # Ljava/lang/String;
	// 049    invoke-direct {p0}, Ljava/lang/RuntimeException;-><init>()V
	this->mPolicyState = policyState;
	this->mPolicyViolated = policyViolated;
	this->mMessage = message;
	this->fillInStackTrace();
	return;

}
// .method public getMessage()Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::BlockGuard_S_BlockGuardPolicyException::getMessage()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::String> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	if ( this->mMessage )     
		goto label_cond_2f;
	cVar1 = std::make_shared<java::lang::String>(std::make_shared<char[]>(""));
label_goto_26:
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("policy=")))->append(this->mPolicyState)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" violation=")))->append(this->mPolicyViolated)->append(cVar1)->toString();
	// 121    .line 115
label_cond_2f:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" msg=")))->append(this->mMessage)->toString();
	goto label_goto_26;

}
// .method public getPolicy()I
int dalvik::system::BlockGuard_S_BlockGuardPolicyException::getPolicy()
{
	
	return this->mPolicyState;

}
// .method public getPolicyViolation()I
int dalvik::system::BlockGuard_S_BlockGuardPolicyException::getPolicyViolation()
{
	
	return this->mPolicyViolated;

}


