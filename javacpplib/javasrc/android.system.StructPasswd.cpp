// CPP L:\smali2cpp20\x64\Release\out\android\system\StructPasswd.smali
#include "java2ctype.h"
#include "android.system.StructPasswd.h"
#include "java.lang.String.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>(Ljava/lang/String;IILjava/lang/String;Ljava/lang/String;)V
android::system::StructPasswd::StructPasswd(std::shared_ptr<java::lang::String> pw_name,int pw_uid,int pw_gid,std::shared_ptr<java::lang::String> pw_dir,std::shared_ptr<java::lang::String> pw_shell)
{
	
	//    .param p1, "pw_name"    # Ljava/lang/String;
	//    .param p2, "pw_uid"    # I
	//    .param p3, "pw_gid"    # I
	//    .param p4, "pw_dir"    # Ljava/lang/String;
	//    .param p5, "pw_shell"    # Ljava/lang/String;
	// 029    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->pw_name = pw_name;
	this->pw_uid = pw_uid;
	this->pw_gid = pw_gid;
	this->pw_dir = pw_dir;
	this->pw_shell = pw_shell;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructPasswd::toString()
{
	
	return libcore::util::Objects::toString(this);

}


