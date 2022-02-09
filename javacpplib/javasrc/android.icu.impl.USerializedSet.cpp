// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\USerializedSet.smali
#include "java2ctype.h"
#include "android.icu.impl.USerializedSet.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.System.h"

// .method public constructor <init>()V
android::icu::impl::USerializedSet::USerializedSet()
{
	
	// 022    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->array = std::make_shared<std::vector<char[]>>(0x8);
	return;

}
// .method public final contains(I)Z
bool android::icu::impl::USerializedSet::contains(int c)
{
	
	bool cVar0;
	bool cVar1;
	int i;
	char high;
	
	//    .param p1, "c"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( c <= 0x10ffff )
		goto label_cond_8;
	return cVar1;
	// 054    .line 157
label_cond_8:
	if ( c >  0xffff )
		goto label_cond_23;
	i = 0x0;
	//    .local v1, "i":I
label_goto_e:
	if ( i >= this->bmpLength )
		goto label_cond_1c;
	if ( (char)(c) <  this->array[i] )
		goto label_cond_1c;
	i = ( i + 0x1);
	goto label_goto_e;
	// 081    .line 161
label_cond_1c:
	if ( !(( i & 0x1)) )  
		goto label_cond_21;
label_goto_20:
	return cVar0;
label_cond_21:
	cVar0 = cVar1;
	goto label_goto_20;
	// 095    .line 165
	// 096    .end local v1    # "i":I
label_cond_23:
	high = (char)(_shri(c,0x10));
	//    .local v0, "high":C
	//    .local v2, "low":C
	i = this->bmpLength;
	//    .restart local v1    # "i":I
label_goto_29:
	if ( i >= this->length )
		goto label_cond_44;
	if ( high >  this->array[i] )
		goto label_cond_41;
	if ( high != this->array[i] )
		goto label_cond_44;
	if ( (char)(c) <  this->array[( i + 0x1)] )
		goto label_cond_44;
label_cond_41:
	i = ( i + 0x2);
	goto label_goto_29;
	// 142    .line 171
label_cond_44:
	if ( !(( (this->bmpLength +  i) & 0x2)) )  
		goto label_cond_4c;
label_goto_4b:
	return cVar0;
label_cond_4c:
	cVar0 = cVar1;
	goto label_goto_4b;

}
// .method public final countRanges()I
int android::icu::impl::USerializedSet::countRanges()
{
	
	return ( ( (this->bmpLength +  ( (this->length -  this->bmpLength) / 0x2)) + 0x1) / 0x2);

}
// .method public final getRange(I[I)Z
bool android::icu::impl::USerializedSet::getRange(int rangeIndex,std::shared_ptr<int[]> range)
{
	
	int cVar0;
	bool cVar1;
	bool cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar3;
	int cVar4;
	int rangeIndex;
	int cVar5;
	int suppLength;
	int offset;
	int cVar6;
	
	//    .param p1, "rangeIndex"    # I
	//    .param p2, "range"    # [I
	cVar0 = 0x10ffff;
	cVar1 = 0x0;
	cVar2 = 0x1;
	if ( rangeIndex >= 0 )
		goto label_cond_8;
	return cVar1;
	// 203    .line 108
label_cond_8:
	if ( this->array )     
		goto label_cond_12;
	this->array = std::make_shared<std::vector<char[]>>(0x8);
label_cond_12:
	if ( !(range) )  
		goto label_cond_18;
	if ( range->size() >= 0x2 )
		goto label_cond_1e;
label_cond_18:
	cVar3 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar3;
	// 234    .line 114
label_cond_1e:
	cVar4 = ( rangeIndex * 0x2);
	if ( cVar4 >= this->bmpLength )
		goto label_cond_52;
	rangeIndex = ( cVar4 + 0x1);
	//    .end local p1    # "rangeIndex":I
	//    .local v1, "rangeIndex":I
	range[cVar1] = this->array[cVar4];
	if ( rangeIndex >= this->bmpLength )
		goto label_cond_39;
	range[cVar2] = ( this->array[rangeIndex] + -0x1);
label_goto_38:
	return cVar2;
	// 272    .line 119
label_cond_39:
	if ( rangeIndex >= this->length )
		goto label_cond_4f;
	range[cVar2] = ( (( this->array[rangeIndex] << 0x10) |  this->array[( rangeIndex + 0x1)]) + -0x1);
	goto label_goto_38;
	// 299    .line 122
label_cond_4f:
	range[cVar2] = cVar0;
	goto label_goto_38;
	// 305    .line 126
	// 306    .end local v1    # "rangeIndex":I
	// 307    .restart local p1    # "rangeIndex":I
label_cond_52:
	cVar5 = ( (cVar4 -  this->bmpLength) * 0x2);
	suppLength = (this->length - this->bmpLength);
	//    .local v2, "suppLength":I
	if ( cVar5 >= suppLength )
		goto label_cond_95;
	offset = (this->arrayOffset + this->bmpLength);
	//    .local v0, "offset":I
	range[cVar1] = (( this->array[(offset + cVar5)] << 0x10) |  this->array[( (offset + cVar5) + 0x1)]);
	cVar6 = ( cVar5 + 0x2);
	if ( cVar6 >= suppLength )
		goto label_cond_92;
	range[cVar2] = ( (( this->array[(offset + cVar6)] << 0x10) |  this->array[( (offset + cVar6) + 0x1)]) + -0x1);
label_goto_91:
	return cVar2;
	// 389    .line 136
label_cond_92:
	range[cVar2] = cVar0;
	goto label_goto_91;
	// 395    .line 140
	// 396    .end local v0    # "offset":I
label_cond_95:
	return cVar1;

}
// .method public final getSet([CI)Z
bool android::icu::impl::USerializedSet::getSet(std::shared_ptr<char[]> src,int srcStart)
{
	
	int cVar0;
	int srcStart;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar1;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar2;
	
	//    .param p1, "src"    # [C
	//    .param p2, "srcStart"    # I
	cVar0 = 0x0;
	this->array = 0x0;
	this->length = cVar0;
	this->bmpLength = cVar0;
	this->arrayOffset = cVar0;
	srcStart = ( srcStart + 0x1);
	//    .end local p2    # "srcStart":I
	//    .local v0, "srcStart":I
	this->length = src[srcStart];
	if ( !((this->length &  0x8000)) )  
		goto label_cond_43;
	this->length = ( this->length & 0x7fff);
	if ( src->size() >= (( srcStart + 0x1) +  this->length) )
		goto label_cond_2e;
	this->length = cVar0;
	cVar1 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar1;
	// 467    .line 46
label_cond_2e:
	//    .end local v0    # "srcStart":I
	//    .restart local p2    # "srcStart":I
	this->bmpLength = src[srcStart];
label_goto_34:
	this->array = std::make_shared<std::vector<char[]>>(this->length);
	java::lang::System::arraycopy(src, srcStart, this->array, cVar0, this->length);
	return 0x1;
	// 497    .line 49
	// 498    .end local p2    # "srcStart":I
	// 499    .restart local v0    # "srcStart":I
label_cond_43:
	if ( src->size() >= (this->length +  srcStart) )
		goto label_cond_51;
	this->length = cVar0;
	cVar2 = std::make_shared<java::lang::IndexOutOfBoundsException>();
	// throw
	throw cVar2;
	// 519    .line 53
label_cond_51:
	this->bmpLength = this->length;
	//    .end local v0    # "srcStart":I
	//    .restart local p2    # "srcStart":I
	goto label_goto_34;

}
// .method public final setToOne(I)V
void android::icu::impl::USerializedSet::setToOne(int c)
{
	
	int cVar0;
	char cVar1;
	int cVar2;
	int cVar3;
	int cVar4;
	int cVar5;
	
	//    .param p1, "c"    # I
	cVar0 = 0x3;
	cVar1 = 0xffff;
	cVar2 = 0x2;
	cVar3 = 0x1;
	cVar4 = 0x0;
	if ( 0x10ffff >= c )
		goto label_cond_d;
	return;
	// 555    .line 70
label_cond_d:
	if ( c >= cVar1 )
		goto label_cond_20;
	this->length = cVar2;
	this->bmpLength = cVar2;
	this->array[cVar4] = (char)(c);
	this->array[cVar3] = (char)(( c + 0x1));
label_goto_1f:
	return;
	// 584    .line 74
label_cond_20:
	if ( c != cVar1 )
		goto label_cond_33;
	this->bmpLength = cVar3;
	this->length = cVar0;
	this->array[cVar4] = cVar1;
	this->array[cVar3] = cVar3;
	this->array[cVar2] = cVar4;
	goto label_goto_1f;
	// 611    .line 80
label_cond_33:
	if ( c >= 0x10ffff )
		goto label_cond_58;
	this->bmpLength = cVar4;
	this->length = 0x4;
	this->array[cVar4] = (char)(_shri(c,0x10));
	this->array[cVar3] = (char)(c);
	cVar5 = ( c + 0x1);
	this->array[cVar2] = (char)(_shri(cVar5,0x10));
	this->array[cVar0] = (char)(cVar5);
	goto label_goto_1f;
	// 662    .line 89
label_cond_58:
	this->bmpLength = cVar4;
	this->length = cVar2;
	this->array[cVar4] = 0x10;
	this->array[cVar3] = cVar1;
	goto label_goto_1f;

}


