// CPP L:\smali2cpp20\x64\Release\out\android\util\MutableByte.smali
#include "java2ctype.h"
#include "android.util.MutableByte.h"

// .method public constructor <init>(B)V
android::util::MutableByte::MutableByte(unsigned char value)
{
	
	//    .param p1, "value"    # B
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}


