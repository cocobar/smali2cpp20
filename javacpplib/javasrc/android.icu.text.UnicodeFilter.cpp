// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\UnicodeFilter.smali
#include "java2ctype.h"
#include "android.icu.text.Replaceable.h"
#include "android.icu.text.UTF16.h"
#include "android.icu.text.UnicodeFilter.h"

// .method protected constructor <init>()V
android::icu::text::UnicodeFilter::UnicodeFilter()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 013    .end annotation
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public matches(Landroid/icu/text/Replaceable;[IIZ)I
int android::icu::text::UnicodeFilter::matches(std::shared_ptr<android::icu::text::Replaceable> text,std::shared_ptr<int[]> offset,int limit,bool incremental)
{
	
	int cVar0;
	int cVar1;
	int c;
	
	//    .param p1, "text"    # Landroid/icu/text/Replaceable;
	//    .param p2, "offset"    # [I
	//    .param p3, "limit"    # I
	//    .param p4, "incremental"    # Z
	cVar0 = 0x2;
	cVar1 = 0x0;
	if ( offset[cVar1] >= limit )
		goto label_cond_1c;
	c = text->char32At(offset[cVar1]);
	//    .local v0, "c":I
	if ( !(this->contains(c)) )  
		goto label_cond_1c;
	offset[cVar1] = (offset[cVar1] +  android::icu::text::UTF16::getCharCount(c));
	return cVar0;
	// 073    .line 42
	// 074    .end local v0    # "c":I
label_cond_1c:
	if ( offset[cVar1] <= limit )
		goto label_cond_48;
	if ( !(this->contains(text->char32At(offset[cVar1]))) )  
		goto label_cond_48;
	offset[cVar1] = ( offset[cVar1] + -0x1);
	if ( offset[cVar1] < 0 ) 
		goto label_cond_47;
	offset[cVar1] = (offset[cVar1] -  ( android::icu::text::UTF16::getCharCount(text->char32At(offset[cVar1])) + -0x1));
label_cond_47:
	return cVar0;
	// 127    .line 52
label_cond_48:
	if ( !(incremental) )  
		goto label_cond_50;
	if ( offset[cVar1] != limit )
		goto label_cond_50;
	return 0x1;
	// 140    .line 55
label_cond_50:
	return cVar1;

}


