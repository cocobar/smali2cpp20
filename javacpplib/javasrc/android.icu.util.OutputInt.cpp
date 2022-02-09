// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\OutputInt.smali
#include "java2ctype.h"
#include "android.icu.util.OutputInt.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"

// .method public constructor <init>()V
android::icu::util::OutputInt::OutputInt()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 022    .end annotation
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public constructor <init>(I)V
android::icu::util::OutputInt::OutputInt(int value)
{
	
	//    .param p1, "value"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 036    .end annotation
	// 040    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::icu::util::OutputInt::toString()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 054    .end annotation
	return java::lang::Integer::toString(this->value);

}


