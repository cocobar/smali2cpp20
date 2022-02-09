// CPP L:\smali2cpp20\x64\Release\out\java\lang\NoClassDefFoundError.smali
#include "java2ctype.h"
#include "java.lang.LinkageError.h"
#include "java.lang.NoClassDefFoundError.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static java::lang::NoClassDefFoundError::serialVersionUID = 0x7e3afc5a8df49c6aL;
// .method public constructor <init>()V
java::lang::NoClassDefFoundError::NoClassDefFoundError()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/LinkageError;-><init>()V
	return;

}
// .method public constructor <init>(Ljava/lang/String;)V
java::lang::NoClassDefFoundError::NoClassDefFoundError(std::shared_ptr<java::lang::String> s)
{
	
	//    .param p1, "s"    # Ljava/lang/String;
	java::lang::LinkageError::(s);
	return;

}
// .method private constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
java::lang::NoClassDefFoundError::NoClassDefFoundError(std::shared_ptr<java::lang::String> detailMessage,std::shared_ptr<java::lang::Throwable> throwable)
{
	
	//    .param p1, "detailMessage"    # Ljava/lang/String;
	//    .param p2, "throwable"    # Ljava/lang/Throwable;
	java::lang::LinkageError::(detailMessage, throwable);
	return;

}


