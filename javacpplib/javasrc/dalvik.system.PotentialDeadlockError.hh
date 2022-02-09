#ifndef __dalvik_system_PotentialDeadlockError__
#define __dalvik_system_PotentialDeadlockError__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\PotentialDeadlockError.smali
#include "java2ctype.h"
#include "java.lang.VirtualMachineError.hh"

namespace dalvik::system{
class PotentialDeadlockError : public java::lang::VirtualMachineError {
public:
	PotentialDeadlockError();
	virtual ~PotentialDeadlockError();

}; // class PotentialDeadlockError
}; // namespace dalvik::system

#endif //__dalvik_system_PotentialDeadlockError__

