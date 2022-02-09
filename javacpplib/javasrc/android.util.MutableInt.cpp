// CPP L:\smali2cpp20\x64\Release\out\android\util\MutableInt.smali
#include "java2ctype.h"
#include "android.util.MutableInt.h"

// .method public constructor <init>(I)V
android::util::MutableInt::MutableInt(int value)
{
	
	//    .param p1, "value"    # I
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}


