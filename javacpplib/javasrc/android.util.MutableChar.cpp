// CPP L:\smali2cpp20\x64\Release\out\android\util\MutableChar.smali
#include "java2ctype.h"
#include "android.util.MutableChar.h"

// .method public constructor <init>(C)V
android::util::MutableChar::MutableChar(char value)
{
	
	//    .param p1, "value"    # C
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}


