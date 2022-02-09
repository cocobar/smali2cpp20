// CPP L:\smali2cpp20\x64\Release\out\android\system\StructTimeval.smali
#include "java2ctype.h"
#include "android.system.StructTimeval.h"
#include "java.lang.String.h"
#include "libcore.util.Objects.h"

// .method private constructor <init>(JJ)V
android::system::StructTimeval::StructTimeval(long long tv_sec,long long tv_usec)
{
	
	//    .param p1, "tv_sec"    # J
	//    .param p3, "tv_usec"    # J
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->tv_sec = tv_sec;
	this->tv_usec = tv_usec;
	return;

}
// .method public static fromMillis(J)Landroid/system/StructTimeval;
std::shared_ptr<android::system::StructTimeval> android::system::StructTimeval::fromMillis(long long millis)
{
	
	long long cVar0;
	long long tv_sec;
	std::shared_ptr<android::system::StructTimeval> cVar1;
	
	//    .param p0, "millis"    # J
	cVar0 = 0x3e8;
	tv_sec = (millis / cVar0);
	//    .local v0, "tv_sec":J
	//    .local v2, "tv_usec":J
	cVar1 = std::make_shared<android::system::StructTimeval>(tv_sec, ((millis - (tv_sec * cVar0)) * cVar0));
	return cVar1;

}
// .method public toMillis()J
long long android::system::StructTimeval::toMillis()
{
	
	long long cVar0;
	
	cVar0 = 0x3e8;
	return ((this->tv_sec *  cVar0) +  (this->tv_usec /  cVar0));

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructTimeval::toString()
{
	
	return libcore::util::Objects::toString(this);

}


