// CPP L:\smali2cpp20\x64\Release\out\android\system\StructCapUserData.smali
#include "java2ctype.h"
#include "android.system.StructCapUserData.h"
#include "java.lang.String.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>(III)V
android::system::StructCapUserData::StructCapUserData(int effective,int permitted,int inheritable)
{
	
	//    .param p1, "effective"    # I
	//    .param p2, "permitted"    # I
	//    .param p3, "inheritable"    # I
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->effective = effective;
	this->permitted = permitted;
	this->inheritable = inheritable;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructCapUserData::toString()
{
	
	return libcore::util::Objects::toString(this);

}


