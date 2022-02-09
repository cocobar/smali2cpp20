// CPP L:\smali2cpp20\x64\Release\out\android\icu\text\RBBIDataWrapper$TrieFoldingFunc.smali
#include "java2ctype.h"
#include "android.icu.text.RBBIDataWrapper_S_TrieFoldingFunc.h"

// .method constructor <init>()V
android::icu::text::RBBIDataWrapper_S_TrieFoldingFunc::RBBIDataWrapper_S_TrieFoldingFunc()
{
	
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public getFoldingOffset(I)I
int android::icu::text::RBBIDataWrapper_S_TrieFoldingFunc::getFoldingOffset(int data)
{
	
	//    .param p1, "data"    # I
	if ( !((0x8000 &  data)) )  
		goto label_cond_a;
	return ( data & 0x7fff);
	// 052    .line 157
label_cond_a:
	return 0x0;

}


