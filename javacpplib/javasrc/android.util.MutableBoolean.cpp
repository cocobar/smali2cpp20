// CPP L:\smali2cpp20\x64\Release\out\android\util\MutableBoolean.smali
#include "java2ctype.h"
#include "android.util.MutableBoolean.h"

// .method public constructor <init>(Z)V
android::util::MutableBoolean::MutableBoolean(bool value)
{
	
	//    .param p1, "value"    # Z
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}


