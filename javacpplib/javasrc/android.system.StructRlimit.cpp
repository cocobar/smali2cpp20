// CPP L:\smali2cpp20\x64\Release\out\android\system\StructRlimit.smali
#include "java2ctype.h"
#include "android.system.StructRlimit.h"
#include "java.lang.String.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>(JJ)V
android::system::StructRlimit::StructRlimit(long long rlim_cur,long long rlim_max)
{
	
	//    .param p1, "rlim_cur"    # J
	//    .param p3, "rlim_max"    # J
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->rlim_cur = rlim_cur;
	this->rlim_max = rlim_max;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructRlimit::toString()
{
	
	return libcore::util::Objects::toString(this);

}


