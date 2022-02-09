// CPP L:\smali2cpp20\x64\Release\out\android\system\StructCapUserHeader.smali
#include "java2ctype.h"
#include "android.system.StructCapUserHeader.h"
#include "java.lang.String.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>(II)V
android::system::StructCapUserHeader::StructCapUserHeader(int version,int pid)
{
	
	//    .param p1, "version"    # I
	//    .param p2, "pid"    # I
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->version = version;
	this->pid = pid;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructCapUserHeader::toString()
{
	
	return libcore::util::Objects::toString(this);

}


