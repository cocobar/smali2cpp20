// CPP L:\smali2cpp20\x64\Release\out\android\util\MutableLong.smali
#include "java2ctype.h"
#include "android.util.MutableLong.h"

// .method public constructor <init>(J)V
android::util::MutableLong::MutableLong(long long value)
{
	
	//    .param p1, "value"    # J
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}


