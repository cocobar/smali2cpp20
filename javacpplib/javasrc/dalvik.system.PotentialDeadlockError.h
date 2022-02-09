#ifndef __dalvik_system_PotentialDeadlockError__
#define __dalvik_system_PotentialDeadlockError__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\PotentialDeadlockError.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.VirtualMachineError.h"

namespace dalvik::system{
class PotentialDeadlockError : public java::lang::VirtualMachineError {
protected:
private:
public:
	PotentialDeadlockError();
	PotentialDeadlockError(std::shared_ptr<java::lang::String> detailMessage);
public:
	virtual ~PotentialDeadlockError(){
	}

}; // class PotentialDeadlockError
}; // namespace dalvik::system

#endif //__dalvik_system_PotentialDeadlockError__

