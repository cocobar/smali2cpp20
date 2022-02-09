#ifndef __dalvik_system_BlockGuard_S_BlockGuardPolicyException__
#define __dalvik_system_BlockGuard_S_BlockGuardPolicyException__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\BlockGuard$BlockGuardPolicyException.smali
#include "java2ctype.h"
#include "java.lang.RuntimeException.h"
#include "java.lang.String.h"

namespace dalvik::system{
class BlockGuard_S_BlockGuardPolicyException : public java::lang::RuntimeException {
protected:
private:
	std::shared_ptr<java::lang::String> mMessage;
	int mPolicyState;
	int mPolicyViolated;
public:
	BlockGuard_S_BlockGuardPolicyException(int policyState,int policyViolated);
	BlockGuard_S_BlockGuardPolicyException(int policyState,int policyViolated,std::shared_ptr<java::lang::String> message);
	std::shared_ptr<java::lang::String> virtual getMessage();
	int virtual getPolicy();
	int virtual getPolicyViolation();
public:
	virtual ~BlockGuard_S_BlockGuardPolicyException(){
	}

}; // class BlockGuard_S_BlockGuardPolicyException
}; // namespace dalvik::system

#endif //__dalvik_system_BlockGuard_S_BlockGuardPolicyException__

