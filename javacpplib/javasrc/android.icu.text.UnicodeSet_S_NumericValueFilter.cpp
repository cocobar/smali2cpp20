// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$NumericValueFilter.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.UnicodeSet_S_NumericValueFilter.h"

// .method constructor <init>(D)V
android::icu::text::UnicodeSet_S_NumericValueFilter::UnicodeSet_S_NumericValueFilter(double value)
{
	
	//    .param p1, "value"    # D
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->value = value;
	return;

}
// .method public contains(I)Z
bool android::icu::text::UnicodeSet_S_NumericValueFilter::contains(int ch)
{
	
	bool cVar0;
	
	//    .param p1, "ch"    # I
	if ( (android::icu::lang::UCharacter::getUnicodeNumericValue(ch) < this->value) )     
		goto label_cond_c;
	cVar0 = 0x1;
label_goto_b:
	return cVar0;
label_cond_c:
	cVar0 = 0x0;
	goto label_goto_b;

}


