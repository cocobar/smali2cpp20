// CPP L:\smali2cpp20\x64\Release\out\android\util\MutableFloat.smali
#include "java2ctype.h"
#include "android.util.MutableFloat.h"

// .method public constructor <init>(F)V
android::util::MutableFloat::MutableFloat(float value)
{
	
	//    .param p1, "value"    # F
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}


