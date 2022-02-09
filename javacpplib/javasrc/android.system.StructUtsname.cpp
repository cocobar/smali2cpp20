// CPP L:\smali2cpp20\x64\Release\out\android\system\StructUtsname.smali
#include "java2ctype.h"
#include "android.system.StructUtsname.h"
#include "java.lang.String.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
android::system::StructUtsname::StructUtsname(std::shared_ptr<java::lang::String> sysname,std::shared_ptr<java::lang::String> nodename,std::shared_ptr<java::lang::String> release,std::shared_ptr<java::lang::String> version,std::shared_ptr<java::lang::String> machine)
{
	
	//    .param p1, "sysname"    # Ljava/lang/String;
	//    .param p2, "nodename"    # Ljava/lang/String;
	//    .param p3, "release"    # Ljava/lang/String;
	//    .param p4, "version"    # Ljava/lang/String;
	//    .param p5, "machine"    # Ljava/lang/String;
	// 029    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->sysname = sysname;
	this->nodename = nodename;
	this->release = release;
	this->version = version;
	this->machine = machine;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructUtsname::toString()
{
	
	return libcore::util::Objects::toString(this);

}


