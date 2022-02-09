// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\SimpleDateFormat$PatternItem.smali
#include "java2ctype.h"
#include "android.icu.text.SimpleDateFormat_S_PatternItem.h"
#include "android.icu.text.SimpleDateFormat.h"

// .method constructor <init>(CI)V
android::icu::text::SimpleDateFormat_S_PatternItem::SimpleDateFormat_S_PatternItem(char type,int length)
{
	
	//    .param p1, "type"    # C
	//    .param p2, "length"    # I
	// 033    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->type = type;
	this->length = length;
	this->isNumeric = android::icu::text::SimpleDateFormat::-wrap0(type, length);
	return;

}


