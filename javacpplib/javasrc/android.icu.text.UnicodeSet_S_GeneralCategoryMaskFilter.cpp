// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeSet$GeneralCategoryMaskFilter.smali
#include "java2ctype.h"
#include "android.icu.lang.UCharacter.h"
#include "android.icu.text.UnicodeSet_S_GeneralCategoryMaskFilter.h"

// .method constructor <init>(I)V
android::icu::text::UnicodeSet_S_GeneralCategoryMaskFilter::UnicodeSet_S_GeneralCategoryMaskFilter(int mask)
{
	
	//    .param p1, "mask"    # I
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->mask = mask;
	return;

}
// .method public contains(I)Z
bool android::icu::text::UnicodeSet_S_GeneralCategoryMaskFilter::contains(int ch)
{
	
	bool cVar0;
	
	//    .param p1, "ch"    # I
	cVar0 = 0x1;
	if ( !(((cVar0 << android::icu::lang::UCharacter::getType(ch)) &  this->mask)) )  
		goto label_cond_e;
label_goto_d:
	return cVar0;
label_cond_e:
	cVar0 = 0x0;
	goto label_goto_d;

}


