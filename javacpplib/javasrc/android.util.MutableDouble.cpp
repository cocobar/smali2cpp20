// CPP L:\smali2cpp20\x64\Release\out\android\util\MutableDouble.smali
#include "java2ctype.h"
#include "android.util.MutableDouble.h"

// .method public constructor <init>(D)V
android::util::MutableDouble::MutableDouble(double value)
{
	
	//    .param p1, "value"    # D
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}


