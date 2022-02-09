// CPP L:\smali2cpp20\x64\Release\out\java\lang\AssertionError.smali
#include "java2ctype.h"
#include "java.lang.AssertionError.h"
#include "java.lang.Error.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.Throwable.h"

static java::lang::AssertionError::serialVersionUID = -0x4592d15402bec21aL;
// .method public constructor <init>()V
java::lang::AssertionError::AssertionError()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Error;-><init>()V
	return;

}
// .method public constructor <init>(C)V
java::lang::AssertionError::AssertionError(char detailMessage)
{
	
	//    .param p1, "detailMessage"    # C
	java::lang::AssertionError::(java::lang::String::valueOf(detailMessage));
	return;

}
// .method public constructor <init>(D)V
java::lang::AssertionError::AssertionError(double detailMessage)
{
	
	//    .param p1, "detailMessage"    # D
	java::lang::AssertionError::(java::lang::String::valueOf(detailMessage));
	return;

}
// .method public constructor <init>(F)V
java::lang::AssertionError::AssertionError(float detailMessage)
{
	
	//    .param p1, "detailMessage"    # F
	java::lang::AssertionError::(java::lang::String::valueOf(detailMessage));
	return;

}
// .method public constructor <init>(I)V
java::lang::AssertionError::AssertionError(int detailMessage)
{
	
	//    .param p1, "detailMessage"    # I
	java::lang::AssertionError::(java::lang::String::valueOf(detailMessage));
	return;

}
// .method public constructor <init>(J)V
java::lang::AssertionError::AssertionError(long long detailMessage)
{
	
	//    .param p1, "detailMessage"    # J
	java::lang::AssertionError::(java::lang::String::valueOf(detailMessage));
	return;

}
// .method public constructor <init>(Ljava/lang/Object;)V
java::lang::AssertionError::AssertionError(std::shared_ptr<java::lang::Object> detailMessage)
{
	
	//    .param p1, "detailMessage"    # Ljava/lang/Object;
	java::lang::AssertionError::(java::lang::String::valueOf(detailMessage));
	if ( !(detailMessage->instanceOf("java::lang::Throwable")) )  
		goto label_cond_10;
	detailMessage->checkCast("java::lang::Throwable");
	//    .end local p1    # "detailMessage":Ljava/lang/Object;
	this->initCause(detailMessage);
label_cond_10:
	return;

}
// .method private constructor <init>(Ljava/lang/String;)V
java::lang::AssertionError::AssertionError(std::shared_ptr<java::lang::String> detailMessage)
{
	
	//    .param p1, "detailMessage"    # Ljava/lang/String;
	java::lang::Error::(detailMessage);
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/Throwable;)V
java::lang::AssertionError::AssertionError(std::shared_ptr<java::lang::String> message,std::shared_ptr<java::lang::Throwable> cause)
{
	
	//    .param p1, "message"    # Ljava/lang/String;
	//    .param p2, "cause"    # Ljava/lang/Throwable;
	java::lang::Error::(message, cause);
	return;

}
// .method public constructor <init>(Z)V
java::lang::AssertionError::AssertionError(bool detailMessage)
{
	
	//    .param p1, "detailMessage"    # Z
	java::lang::AssertionError::(java::lang::String::valueOf(detailMessage));
	return;

}


