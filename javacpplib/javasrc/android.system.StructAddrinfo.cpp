// CPP L:\smali2cpp20\x64\Release\out\android\system\StructAddrinfo.smali
#include "java2ctype.h"
#include "android.system.StructAddrinfo.h"
#include "java.lang.String.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>()V
android::system::StructAddrinfo::StructAddrinfo()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructAddrinfo::toString()
{
	
	return libcore::util::Objects::toString(this);

}


