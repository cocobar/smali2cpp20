// CPP L:\smali2cpp20\x64\Release\out\android\system\StructTimespec.smali
#include "java2ctype.h"
#include "android.system.StructTimespec.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>(JJ)V
android::system::StructTimespec::StructTimespec(long long tv_sec,long long tv_nsec)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "tv_sec"    # J
	//    .param p3, "tv_nsec"    # J
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->tv_sec = tv_sec;
	this->tv_nsec = tv_nsec;
	if ( (tv_nsec > 0x0) < 0 ) 
		goto label_cond_14;
	if ( (tv_nsec > 0x3b9ac9ff) <= 0 )
		goto label_cond_35;
label_cond_14:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("tv_nsec value ")))->append(tv_nsec)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" is not in [0, 999999999]")))->toString());
	// throw
	throw cVar0;
	// 090    .line 38
label_cond_35:
	return;

}
// .method public compareTo(Landroid/system/StructTimespec;)I
int android::system::StructTimespec::compareTo(std::shared_ptr<android::system::StructTimespec> other)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "other"    # Landroid/system/StructTimespec;
	cVar0 = 0x1;
	cVar1 = -0x1;
	if ( (this->tv_sec > other->tv_sec) <= 0 )
		goto label_cond_b;
	return cVar0;
	// 118    .line 45
label_cond_b:
	if ( (this->tv_sec > other->tv_sec) >= 0 )
		goto label_cond_14;
	return cVar1;
	// 131    .line 48
label_cond_14:
	if ( (this->tv_nsec > other->tv_nsec) <= 0 )
		goto label_cond_1d;
	return cVar0;
	// 144    .line 51
label_cond_1d:
	if ( (this->tv_nsec > other->tv_nsec) >= 0 )
		goto label_cond_26;
	return cVar1;
	// 157    .line 54
label_cond_26:
	return 0x0;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::system::StructTimespec::equals(std::shared_ptr<java::lang::Object> o)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::system::StructTimespec> that;
	
	//    .param p1, "o"    # Ljava/lang/Object;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this != o )
		goto label_cond_5;
	return cVar0;
	// 192    .line 60
label_cond_5:
	if ( !(o) )  
		goto label_cond_11;
	if ( this->getClass() == o->getClass() )
		goto label_cond_12;
label_cond_11:
	return cVar1;
label_cond_12:
	that = o;
	that->checkCast("android::system::StructTimespec");
	//    .local v0, "that":Landroid/system/StructTimespec;
	if ( !((this->tv_sec > that->tv_sec)) )  
		goto label_cond_1e;
	return cVar1;
	// 227    .line 65
label_cond_1e:
	if ( (this->tv_nsec > that->tv_nsec) )     
		goto label_cond_27;
label_goto_26:
	return cVar0;
label_cond_27:
	cVar0 = cVar1;
	goto label_goto_26;

}
// .method public hashCode()I
int android::system::StructTimespec::hashCode()
{
	
	int cVar0;
	
	cVar0 = 0x20;
	//    .local v0, "result":I
	return (( (int)((this->tv_sec ^  _ushrll(this->tv_sec,cVar0))) * 0x1f) + (int)((this->tv_nsec ^  _ushrll(this->tv_nsec,cVar0))));

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructTimespec::toString()
{
	
	return libcore::util::Objects::toString(this);

}


