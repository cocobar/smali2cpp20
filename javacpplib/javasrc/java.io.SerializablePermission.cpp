// CPP L:\smali2cpp20\x64\Release\out\java\io\SerializablePermission.smali
#include "java2ctype.h"
#include "java.io.SerializablePermission.h"
#include "java.lang.String.h"
#include "java.security.BasicPermission.h"

// .method public constructor <init>(Ljava/lang/String;)V
java::io::SerializablePermission::SerializablePermission(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	java::security::BasicPermission::(std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
java::io::SerializablePermission::SerializablePermission(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> actions)
{
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "actions"    # Ljava/lang/String;
	java::security::BasicPermission::(std::make_shared<java::lang::String>(std::make_shared<char[]>("")), std::make_shared<java::lang::String>(std::make_shared<char[]>("")));
	return;

}


