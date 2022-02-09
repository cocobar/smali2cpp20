// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\PropsVectors$DefaultGetFoldedValue.smali
#include "java2ctype.h"
#include "android.icu.impl.IntTrieBuilder.h"
#include "android.icu.impl.PropsVectors_S_DefaultGetFoldedValue.h"

// .method public constructor <init>(Landroid/icu/impl/IntTrieBuilder;)V
android::icu::impl::PropsVectors_S_DefaultGetFoldedValue::PropsVectors_S_DefaultGetFoldedValue(std::shared_ptr<android::icu::impl::IntTrieBuilder> inBuilder)
{
	
	//    .param p1, "inBuilder"    # Landroid/icu/impl/IntTrieBuilder;
	// 031    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->builder = inBuilder;
	return;

}
// .method public getFoldedValue(II)I
int android::icu::impl::PropsVectors_S_DefaultGetFoldedValue::getFoldedValue(int start,int offset)
{
	
	int cVar0;
	std::shared<std::vector<bool[]>> inBlockZero;
	int start;
	
	//    .param p1, "start"    # I
	//    .param p2, "offset"    # I
	cVar0 = 0x0;
	//    .local v1, "initialValue":I
	//    .local v2, "limit":I
label_goto_7:
	if ( start >= ( start + 0x400) )
		goto label_cond_1f;
	inBlockZero = std::make_shared<std::vector<bool[]>>(0x1);
	//    .local v0, "inBlockZero":[Z
	//    .local v3, "value":I
	if ( !(inBlockZero[cVar0]) )  
		goto label_cond_19;
	start = ( start + 0x20);
	goto label_goto_7;
	// 088    .line 550
label_cond_19:
	if ( this->builder->getValue(start, inBlockZero) == this->builder->m_initialValue_ )
		goto label_cond_1c;
	return offset;
	// 095    .line 553
label_cond_1c:
	start = ( start + 0x1);
	goto label_goto_7;
	// 101    .line 556
	// 102    .end local v0    # "inBlockZero":[Z
	// 103    .end local v3    # "value":I
label_cond_1f:
	return cVar0;

}


