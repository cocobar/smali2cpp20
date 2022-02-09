// CPP L:\smali2cpp20\x64\Release\out\java\io\SyncFailedException.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.SyncFailedException.h"
#include "java.lang.String.h"

static java::io::SyncFailedException::serialVersionUID = -0x20a8c0b3f32afac2L;
// .method public constructor <init>(Ljava/lang/String;)V
java::io::SyncFailedException::SyncFailedException(std::shared_ptr<java::lang::String> desc)
{
	
	//    .param p1, "desc"    # Ljava/lang/String;
	java::io::IOException::(desc);
	return;

}


