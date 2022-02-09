// CPP L:\smali2cpp20\x64\Release\out\java\io\FilePermission.smali
#include "java2ctype.h"
#include "java.io.FilePermission.h"
#include "java.lang.String.h"
#include "java.security.Permission.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
java::io::FilePermission::FilePermission(std::shared_ptr<java::lang::String> path,std::shared_ptr<java::lang::String> actions)
{
	
	//    .param p1, "path"    # Ljava/lang/String;
	//    .param p2, "actions"    # Ljava/lang/String;
	java::security::Permission::(path);
	return;

}
// .method public getActions()Ljava/lang/String;
std::shared_ptr<java::lang::String> java::io::FilePermission::getActions()
{
	
	return 0x0;

}
// .method public implies(Ljava/security/Permission;)Z
bool java::io::FilePermission::implies(std::shared_ptr<java::security::Permission> p)
{
	
	//    .param p1, "p"    # Ljava/security/Permission;
	return 0x1;

}


