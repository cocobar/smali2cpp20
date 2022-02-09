// CPP L:\smali2cpp20\x64\Release\out\android\system\StructLinger.smali
#include "java2ctype.h"
#include "android.system.StructLinger.h"
#include "java.lang.String.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>(II)V
android::system::StructLinger::StructLinger(int l_onoff,int l_linger)
{
	
	//    .param p1, "l_onoff"    # I
	//    .param p2, "l_linger"    # I
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->l_onoff = l_onoff;
	this->l_linger = l_linger;
	return;

}
// .method public isOn()Z
bool android::system::StructLinger::isOn()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !(this->l_onoff) )  
		goto label_cond_6;
	cVar1 = 0x1;
label_cond_6:
	return cVar1;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructLinger::toString()
{
	
	return libcore::util::Objects::toString(this);

}


