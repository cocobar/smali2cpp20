// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\PotentialDeadlockError.smali
#include "java2ctype.h"
#include "dalvik.system.PotentialDeadlockError.h"
#include "java.lang.String.h"
#include "java.lang.VirtualMachineError.h"

// .method public constructor <init>()V
dalvik::system::PotentialDeadlockError::PotentialDeadlockError()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/VirtualMachineError;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
dalvik::system::PotentialDeadlockError::PotentialDeadlockError(std::shared_ptr<java::lang::String> detailMessage)
{
	
	//    .param p1, "detailMessage"    # Ljava/lang/String;
	java::lang::VirtualMachineError::(detailMessage);
	return;

}


