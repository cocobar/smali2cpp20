// CPP L:\smali2cpp20\x64\Release\out\sun\nio\fs\UnixUserPrincipals$Group.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "sun.nio.fs.UnixUserPrincipals_S_Group.h"
#include "sun.nio.fs.UnixUserPrincipals_S_User.h"

// .method constructor <init>(ILjava/lang/String;)V
sun::nio::fs::UnixUserPrincipals_S_Group::UnixUserPrincipals_S_Group(int id,std::shared_ptr<java::lang::String> name)
{
	
	//    .param p1, "id"    # I
	//    .param p2, "name"    # Ljava/lang/String;
	sun::nio::fs::UnixUserPrincipals_S_User::(id, 0x1, name, 0x0);
	return;

}


