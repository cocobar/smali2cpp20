// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CompactByteArray.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.util.CompactByteArray.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "java.lang.Class.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"

static android::icu::util::CompactByteArray::BLOCKCOUNT = 0x80;
static android::icu::util::CompactByteArray::BLOCKMASK = 0x7f;
static android::icu::util::CompactByteArray::BLOCKSHIFT = 0x7;
static android::icu::util::CompactByteArray::INDEXCOUNT = 0x200;
static android::icu::util::CompactByteArray::INDEXSHIFT = 0x9;
static android::icu::util::CompactByteArray::UNICODECOUNT = 0x10000;
// .method public constructor <init>()V
android::icu::util::CompactByteArray::CompactByteArray()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 047    .end annotation
	android::icu::util::CompactByteArray::(0x0);
	return;

}
// .method public constructor <init>(B)V
android::icu::util::CompactByteArray::CompactByteArray(unsigned char defaultValue)
{
	
	int cVar0;
	bool cVar1;
	int cVar2;
	int i;
	
	//    .param p1, "defaultValue"    # B
	//    .annotation runtime Ljava/lang/Deprecated;
	// 063    .end annotation
	cVar0 = 0x10000;
	cVar1 = 0x0;
	cVar2 = 0x200;
	// 073    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->values = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	this->indices = std::make_shared<std::vector<char[]>>(cVar2);
	this->hashes = std::make_shared<std::vector<int[]>>(cVar2);
	i = 0x0;
	//    .local v0, "i":I
label_goto_15:
	if ( i >= cVar0 )
		goto label_cond_1e;
	this->values[i] = defaultValue;
	i = ( i + 0x1);
	goto label_goto_15;
	// 107    .line 75
label_cond_1e:
	i = 0x0;
label_goto_1f:
	if ( i >= cVar2 )
		goto label_cond_2f;
	this->indices[i] = (char)(( i << 0x7));
	this->hashes[i] = cVar1;
	i = ( i + 0x1);
	goto label_goto_1f;
	// 133    .line 79
label_cond_2f:
	this->isCompact = cVar1;
	this->defaultValue = defaultValue;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::util::CompactByteArray::CompactByteArray(std::shared_ptr<java::lang::String> indexArray,std::shared_ptr<java::lang::String> valueArray)
{
	
	//    .param p1, "indexArray"    # Ljava/lang/String;
	//    .param p2, "valueArray"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 149    .end annotation
	android::icu::util::CompactByteArray::(android::icu::impl::Utility::RLEStringToCharArray(indexArray), android::icu::impl::Utility::RLEStringToByteArray(valueArray));
	return;

}
// .method public constructor <init>([C[B)V
android::icu::util::CompactByteArray::CompactByteArray(std::shared_ptr<char[]> indexArray,std::shared_ptr<unsigned char[]> newValues)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "indexArray"    # [C
	//    .param p2, "newValues"    # [B
	//    .annotation runtime Ljava/lang/Deprecated;
	// 174    .end annotation
	cVar0 = 0x200;
	// 180    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( indexArray->size() == cVar0 )
		goto label_cond_11;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Index out of bounds.")));
	// throw
	throw cVar1;
	// 196    .line 99
label_cond_11:
	i = 0x0;
	//    .local v0, "i":I
label_goto_12:
	if ( i >= cVar0 )
		goto label_cond_27;
	//    .local v1, "index":C
	if ( indexArray[i] <  ( newValues->size() + 0x80) )
		goto label_cond_24;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Index out of bounds.")));
	// throw
	throw cVar2;
	// 224    .line 99
label_cond_24:
	i = ( i + 0x1);
	goto label_goto_12;
	// 230    .line 104
	// 231    .end local v1    # "index":C
label_cond_27:
	this->indices = indexArray;
	this->values = newValues;
	this->isCompact = 0x1;
	return;

}
// .method static final arrayRegionMatches([BI[BII)Z
bool android::icu::util::CompactByteArray::arrayRegionMatches(std::shared_ptr<unsigned char[]> source,int sourceStart,std::shared_ptr<unsigned char[]> target,int targetStart,int len)
{
	
	int i;
	
	//    .param p0, "source"    # [B
	//    .param p1, "sourceStart"    # I
	//    .param p2, "target"    # [B
	//    .param p3, "targetStart"    # I
	//    .param p4, "len"    # I
	//    .local v2, "sourceEnd":I
	//    .local v0, "delta":I
	i = sourceStart;
	//    .local v1, "i":I
label_goto_5:
	if ( i >= (sourceStart + len) )
		goto label_cond_14;
	if ( source[i] == target[(i + (targetStart - sourceStart))] )
		goto label_cond_11;
	return 0x0;
	// 285    .line 260
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_5;
	// 291    .line 264
label_cond_14:
	return 0x1;

}
// .method private final blockTouched(I)Z
bool android::icu::util::CompactByteArray::blockTouched(int i)
{
	
	bool cVar1;
	
	//    .param p1, "i"    # I
	cVar1 = 0x0;
	if ( !(this->hashes[i]) )  
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method private expand()V
void android::icu::util::CompactByteArray::expand()
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<unsigned char[]>> tempArray;
	int i;
	int value;
	
	cVar0 = 0x10000;
	cVar1 = 0x200;
	if ( !(this->isCompact) )  
		goto label_cond_35;
	this->hashes = std::make_shared<std::vector<int[]>>(cVar1);
	tempArray = std::make_shared<std::vector<unsigned char[]>>(cVar0);
	//    .local v1, "tempArray":[B
	i = 0x0;
	//    .local v0, "i":I
label_goto_f:
	if ( i >= cVar0 )
		goto label_cond_20;
	value = this->elementAt((char)(i));
	//    .local v2, "value":B
	tempArray[i] = value;
	this->touchBlock(_shri(i,0x7), value);
	i = ( i + 0x1);
	goto label_goto_f;
	// 368    .line 387
	// 369    .end local v2    # "value":B
label_cond_20:
	i = 0x0;
label_goto_21:
	if ( i >= cVar1 )
		goto label_cond_2d;
	this->indices[i] = (char)(( i << 0x7));
	i = ( i + 0x1);
	goto label_goto_21;
	// 390    .line 390
label_cond_2d:
	this->values = 0x0;
	this->values = tempArray;
	this->isCompact = 0x0;
	//    .end local v0    # "i":I
	//    .end local v1    # "tempArray":[B
label_cond_35:
	return;

}
// .method private final touchBlock(II)V
void android::icu::util::CompactByteArray::touchBlock(int i,int value)
{
	
	//    .param p1, "i"    # I
	//    .param p2, "value"    # I
	this->hashes[i] = ( (this->hashes[i] +  ( value << 0x1)) | 0x1);
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::CompactByteArray::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar3;
	std::shared_ptr<android::icu::util::CompactByteArray> other;
	std::shared_ptr<unsigned char[]> cVar0;
	std::shared_ptr<char[]> cVar1;
	std::shared_ptr<int[]> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 441    .end annotation
	try {
	//label_try_start_0:
	other = this->clone();
	other->checkCast("android::icu::util::CompactByteArray");
	//    .local v1, "other":Landroid/icu/util/CompactByteArray;
	cVar0 = this->values->clone();
	cVar0->checkCast("unsigned char[]");
	other->values = cVar0;
	cVar1 = this->indices->clone();
	cVar1->checkCast("char[]");
	other->indices = cVar1;
	if ( !(this->hashes) )  
		goto label_cond_28;
	cVar2 = this->hashes->clone();
	cVar2->checkCast("int[]");
	other->hashes = cVar2;
	//label_try_end_28:
	}
	catch (java::lang::CloneNotSupportedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_29;
	}
	//    .catch Ljava/lang/CloneNotSupportedException; {:try_start_0 .. :try_end_28} :catch_29
label_cond_28:
	return other;
	// 496    .line 322
	// 497    .end local v1    # "other":Landroid/icu/util/CompactByteArray;
label_catch_29:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar3 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar3;

}
// .method public compact()V
void android::icu::util::CompactByteArray::compact()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 513    .end annotation
	this->compact(0x0);
	return;

}
// .method public compact(Z)V
void android::icu::util::CompactByteArray::compact(bool exhaustive)
{
	
	int cVar0;
	int cVar1;
	char cVar2;
	int limitCompacted;
	int iBlockStart;
	int iUntouched;
	int i;
	int touched;
	int jBlockStart;
	int j;
	int newSize;
	std::shared<std::vector<unsigned char[]>> result;
	
	//    .param p1, "exhaustive"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 529    .end annotation
	cVar0 = 0x80;
	cVar1 = 0x0;
	cVar2 = 0xffff;
	if ( this->isCompact )     
		goto label_cond_7e;
	limitCompacted = 0x0;
	//    .local v5, "limitCompacted":I
	iBlockStart = 0x0;
	//    .local v1, "iBlockStart":I
	iUntouched = 0xffff;
	//    .local v2, "iUntouched":C
	i = 0x0;
	//    .end local v2    # "iUntouched":C
	//    .local v0, "i":I
label_goto_10:
	if ( i >= this->indices->size() )
		goto label_cond_6d;
	this->indices[i] = cVar2;
	touched = this->blockTouched(i);
	//    .local v8, "touched":Z
	if ( touched )     
		goto label_cond_2a;
	if ( iUntouched == cVar2 )
		goto label_cond_2a;
	this->indices[i] = iUntouched;
label_cond_25:
label_goto_25:
	i = ( i + 0x1);
	iBlockStart = ( iBlockStart + 0x80);
	goto label_goto_10;
	// 597    .line 212
label_cond_2a:
	jBlockStart = 0x0;
	//    .local v4, "jBlockStart":I
	j = 0x0;
	//    .local v3, "j":I
	j = 0x0;
label_goto_2d:
	if ( j >= limitCompacted )
		goto label_cond_48;
	if ( this->hashes[i] != this->hashes[j] )
		goto label_cond_68;
	if ( !(android::icu::util::CompactByteArray::arrayRegionMatches(this->values, iBlockStart, this->values, jBlockStart, cVar0)) )  
		goto label_cond_68;
	this->indices[i] = (char)(jBlockStart);
label_cond_48:
	if ( this->indices[i] != cVar2 )
		goto label_cond_25;
	java::lang::System::arraycopy(this->values, iBlockStart, this->values, jBlockStart, cVar0);
	this->indices[i] = (char)(jBlockStart);
	this->hashes[j] = this->hashes[i];
	limitCompacted = ( limitCompacted + 0x1);
	if ( touched )     
		goto label_cond_25;
	//    .local v2, "iUntouched":C
	goto label_goto_25;
	// 689    .line 215
	// 690    .end local v2    # "iUntouched":C
label_cond_68:
	j = ( j + 0x1);
	jBlockStart = ( jBlockStart + 0x80);
	goto label_goto_2d;
	// 698    .line 240
	// 699    .end local v3    # "j":I
	// 700    .end local v4    # "jBlockStart":I
	// 701    .end local v8    # "touched":Z
label_cond_6d:
	newSize = ( limitCompacted * 0x80);
	//    .local v6, "newSize":I
	result = std::make_shared<std::vector<unsigned char[]>>(newSize);
	//    .local v7, "result":[B
	java::lang::System::arraycopy(this->values, cVar1, result, cVar1, newSize);
	this->values = result;
	this->isCompact = 0x1;
	this->hashes = 0x0;
	//    .end local v0    # "i":I
	//    .end local v1    # "iBlockStart":I
	//    .end local v5    # "limitCompacted":I
	//    .end local v6    # "newSize":I
	//    .end local v7    # "result":[B
label_cond_7e:
	return;

}
// .method public elementAt(C)B
unsigned char android::icu::util::CompactByteArray::elementAt(char index)
{
	
	//    .param p1, "index"    # C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 742    .end annotation
	return this->values[((this->indices[_shri(index,0x7)] &  0xffff) +  ( index & 0x7f))];

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::CompactByteArray::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::CompactByteArray> other;
	int i;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 773    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( obj )     
		goto label_cond_5;
	return cVar1;
	// 785    .line 339
label_cond_5:
	if ( this != obj )
		goto label_cond_8;
	return cVar0;
	// 792    .line 341
label_cond_8:
	if ( this->getClass() == obj->getClass() )
		goto label_cond_13;
	return cVar1;
label_cond_13:
	other = obj;
	other->checkCast("android::icu::util::CompactByteArray");
	//    .local v1, "other":Landroid/icu/util/CompactByteArray;
	i = 0x0;
	//    .local v0, "i":I
label_goto_17:
	if ( i >= 0x10000 )
		goto label_cond_2b;
	if ( this->elementAt((char)(i)) == other->elementAt((char)(i)) )
		goto label_cond_28;
	return cVar1;
	// 841    .line 344
label_cond_28:
	i = ( i + 0x1);
	goto label_goto_17;
	// 847    .line 349
label_cond_2b:
	return cVar0;

}
// .method public getIndexArray()[C
char android::icu::util::CompactByteArray::getIndexArray()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 855    .end annotation
	return this->indices;

}
// .method public getValueArray()[B
unsigned char android::icu::util::CompactByteArray::getValueArray()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 867    .end annotation
	return this->values;

}
// .method public hashCode()I
int android::icu::util::CompactByteArray::hashCode()
{
	
	int result;
	int i;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 879    .end annotation
	result = 0x0;
	//    .local v2, "result":I
	//    .local v1, "increment":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_c:
	if ( i >= this->values->size() )
		goto label_cond_1b;
	result = (( result * 0x25) + this->values[i]);
	i = (i +  java::lang::Math::min(0x3, ( this->values->size() / 0x10)));
	goto label_goto_c;
	// 925    .line 365
label_cond_1b:
	return result;

}
// .method public setElementAt(CB)V
void android::icu::util::CompactByteArray::setElementAt(char index,unsigned char value)
{
	
	//    .param p1, "index"    # C
	//    .param p2, "value"    # B
	//    .annotation runtime Ljava/lang/Deprecated;
	// 935    .end annotation
	if ( !(this->isCompact) )  
		goto label_cond_7;
	this->expand();
label_cond_7:
	this->values[index] = value;
	this->touchBlock(_shri(index,0x7), value);
	return;

}
// .method public setElementAt(CCB)V
void android::icu::util::CompactByteArray::setElementAt(char start,char end,unsigned char value)
{
	
	int i;
	
	//    .param p1, "start"    # C
	//    .param p2, "end"    # C
	//    .param p3, "value"    # B
	//    .annotation runtime Ljava/lang/Deprecated;
	// 967    .end annotation
	if ( !(this->isCompact) )  
		goto label_cond_7;
	this->expand();
label_cond_7:
	i = start;
	//    .local v0, "i":I
label_goto_8:
	if ( i >  end )
		goto label_cond_16;
	this->values[i] = value;
	this->touchBlock(_shri(i,0x7), value);
	i = ( i + 0x1);
	goto label_goto_8;
	// 1001    .line 179
label_cond_16:
	return;

}


