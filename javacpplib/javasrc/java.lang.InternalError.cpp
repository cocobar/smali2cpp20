// CPP L:\smali2cpp20\x64\Release\out\java\lang\InternalError.smali
#include "java2ctype.h"
#include "java.lang.InternalError.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"
#include "java.lang.VirtualMachineError.h"

static java::lang::InternalError::serialVersionUID = -0x7dc4ccb23ff53dfdL;
// .method public constructor <init>()V
java::lang::InternalError::InternalError()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/VirtualMachineError;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::InternalError::InternalError(std::shared_ptr<java::lang::String> message)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	java::lang::VirtualMachineError::(message);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
java::lang::InternalError::InternalError(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::VirtualMachineError::(message, cause);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
java::lang::InternalError::InternalError(std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	java::lang::VirtualMachineError::(cause);
	return;

}


