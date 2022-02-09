// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\AllocationLimitError.smali
#include "java2ctype.h"
#include "dalvik.system.AllocationLimitError.h"
#include "java.lang.String.h"
#include "java.lang.VirtualMachineError.h"

// .method public constructor <init>()V
dalvik::system::AllocationLimitError::AllocationLimitError()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/VirtualMachineError;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
dalvik::system::AllocationLimitError::AllocationLimitError(std::shared_ptr<java::lang::String> detailMessage)
{
	
	//    .param p1, "detailMessage"    # Ljava/lang/String;
	java::lang::VirtualMachineError::(detailMessage);
	return;

}


