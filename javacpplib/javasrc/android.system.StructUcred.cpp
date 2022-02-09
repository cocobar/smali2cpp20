// CPP L:\smali2cpp20\x64\Release\out\android\system\StructUcred.smali
#include "java2ctype.h"
#include "android.system.StructUcred.h"
#include "java.lang.String.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>(III)V
android::system::StructUcred::StructUcred(int pid,int uid,int gid)
{
	
	//    .param p1, "pid"    # I
	//    .param p2, "uid"    # I
	//    .param p3, "gid"    # I
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->pid = pid;
	this->uid = uid;
	this->gid = gid;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructUcred::toString()
{
	
	return libcore::util::Objects::toString(this);

}


