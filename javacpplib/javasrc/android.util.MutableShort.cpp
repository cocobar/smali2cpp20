// CPP L:\smali2cpp20\x64\Release\out\android\util\MutableShort.smali
#include "java2ctype.h"
#include "android.util.MutableShort.h"

// .method public constructor <init>(S)V
android::util::MutableShort::MutableShort(short value)
{
	
	//    .param p1, "value"    # S
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}


