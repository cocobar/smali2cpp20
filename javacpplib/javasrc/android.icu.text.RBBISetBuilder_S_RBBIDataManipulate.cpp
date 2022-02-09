// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBISetBuilder$RBBIDataManipulate.smali
#include "java2ctype.h"
#include "android.icu.impl.IntTrieBuilder.h"
#include "android.icu.text.RBBISetBuilder_S_RBBIDataManipulate.h"
#include "android.icu.text.RBBISetBuilder.h"

// .method constructor <init>(Landroid/icu/text/RBBISetBuilder;)V
android::icu::text::RBBISetBuilder_S_RBBIDataManipulate::RBBISetBuilder_S_RBBIDataManipulate(std::shared_ptr<android::icu::text::RBBISetBuilder> this_S_0)
{
	
	//    .param p1, "this$0"    # Landroid/icu/text/RBBISetBuilder;
	this->this_S_0 = this_S_0;
	// 033    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public getFoldedValue(II)I
int android::icu::text::RBBISetBuilder_S_RBBIDataManipulate::getFoldedValue(int start,int offset)
{
	
	int cVar0;
	std::shared<std::vector<bool[]>> inBlockZero;
	int start;
	
	//    .param p1, "start"    # I
	//    .param p2, "offset"    # I
	cVar0 = 0x0;
	inBlockZero = std::make_shared<std::vector<bool[]>>(0x1);
	//    .local v0, "inBlockZero":[Z
	//    .local v1, "limit":I
label_goto_6:
	if ( start >= ( start + 0x400) )
		goto label_cond_21;
	//    .local v2, "value":I
	if ( !(inBlockZero[cVar0]) )  
		goto label_cond_17;
	start = ( start + 0x20);
	goto label_goto_6;
	// 082    .line 318
label_cond_17:
	if ( !(this->this_S_0->fTrie->getValue(start, inBlockZero)) )  
		goto label_cond_1e;
	return (0x8000 |  offset);
	// 093    .line 321
label_cond_1e:
	start = ( start + 0x1);
	goto label_goto_6;
	// 099    .line 324
	// 100    .end local v2    # "value":I
label_cond_21:
	return cVar0;

}


