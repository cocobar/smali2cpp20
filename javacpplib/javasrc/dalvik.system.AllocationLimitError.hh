#ifndef __dalvik_system_AllocationLimitError__
#define __dalvik_system_AllocationLimitError__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\AllocationLimitError.smali
#include "java2ctype.h"
#include "java.lang.VirtualMachineError.hh"

namespace dalvik::system{
class AllocationLimitError : public java::lang::VirtualMachineError {
public:
	AllocationLimitError();
	virtual ~AllocationLimitError();

}; // class AllocationLimitError
}; // namespace dalvik::system

#endif //__dalvik_system_AllocationLimitError__

