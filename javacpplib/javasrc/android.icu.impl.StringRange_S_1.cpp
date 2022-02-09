// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\StringRange$1.smali
#include "java2ctype.h"
#include "android.icu.impl.StringRange_S_1.h"
#include "java.lang.Math.h"

// .method constructor <init>()V
android::icu::impl::StringRange_S_1::StringRange_S_1()
{
	
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public compare([I[I)I
int android::icu::impl::StringRange_S_1::compare(std::shared_ptr<int[]> o1,std::shared_ptr<int[]> o2)
{
	
	int i;
	int diff;
	
	//    .param p1, "o1"    # [I
	//    .param p2, "o2"    # [I
	//    .local v2, "minIndex":I
	i = 0x0;
	//    .local v1, "i":I
label_goto_7:
	if ( i >= java::lang::Math::min(o1->size(), o2->size()) )
		goto label_cond_15;
	diff = (o1[i] - o2[i]);
	//    .local v0, "diff":I
	if ( !(diff) )  
		goto label_cond_12;
	return diff;
	// 095    .line 43
label_cond_12:
	i = ( i + 0x1);
	goto label_goto_7;
	// 101    .line 49
	// 102    .end local v0    # "diff":I
label_cond_15:
	return (o1->size() -  o2->size());

}


