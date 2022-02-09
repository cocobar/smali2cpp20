// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$IntPropertyFilter.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.UnicodeSet_S_IntPropertyFilter.h"

// .method constructor <init>(II)V
android::icu::text::UnicodeSet_S_IntPropertyFilter::UnicodeSet_S_IntPropertyFilter(int prop,int value)
{
	
	//    .param p1, "prop"    # I
	//    .param p2, "value"    # I
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->prop = prop;
	this->value = value;
	return;

}
// .method public contains(I)Z
bool android::icu::text::UnicodeSet_S_IntPropertyFilter::contains(int ch)
{
	
	bool cVar0;
	
	//    .param p1, "ch"    # I
	if ( android::icu::lang::UCharacter::getIntPropertyValue(ch, this->prop) != this->value )
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}


