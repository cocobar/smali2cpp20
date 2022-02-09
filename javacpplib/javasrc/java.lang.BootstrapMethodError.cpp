// CPP L:\smali2cpp20\x64\Release\out\java\lang\BootstrapMethodError.smali
#include "java2ctype.h"
#include "java.lang.BootstrapMethodError.h"
#include "java.lang.LinkageError.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static java::lang::BootstrapMethodError::serialVersionUID = 0x124L;
// .method public constructor <init>()V
java::lang::BootstrapMethodError::BootstrapMethodError()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/LinkageError;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::BootstrapMethodError::BootstrapMethodError(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::LinkageError::(s);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
java::lang::BootstrapMethodError::BootstrapMethodError(std::shared_ptr<java::lang::String> s,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::LinkageError::(s, cause);
	return;

}
// .method public constructor <init>(Ljava/lang/Throwable;)V
java::lang::BootstrapMethodError::BootstrapMethodError(std::shared_ptr<java::lang::Throwable> cause)
{
	
	std::shared_ptr<java::lang::String> cVar0;
	
	//    .param p1, "cause"    # Ljava/lang/Throwable;
	cVar0 = 0x0;
	if ( cause )     
		goto label_cond_a;
label_goto_3:
	java::lang::LinkageError::(cVar0);
	this->initCause(cause);
	return;
	// 066    .line 77
label_cond_a:
	cVar0 = cause->toString();
	goto label_goto_3;

}


