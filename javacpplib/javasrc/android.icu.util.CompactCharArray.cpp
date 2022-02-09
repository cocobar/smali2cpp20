// CPP L:\smali2cpp20\x64\Release\out\android\icu\util\CompactCharArray.smali
#include "java2ctype.h"
#include "android.icu.impl.Utility.h"
#include "android.icu.util.CompactCharArray.h"
#include "android.icu.util.ICUCloneNotSupportedException.h"
#include "java.lang.Class.h"
#include "java.lang.CloneNotSupportedException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Math.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.lang.Throwable.h"

static android::icu::util::CompactCharArray::BLOCKCOUNT = 0x20;
static android::icu::util::CompactCharArray::BLOCKMASK = 0x1f;
static android::icu::util::CompactCharArray::BLOCKSHIFT = 0x5;
static android::icu::util::CompactCharArray::INDEXCOUNT = 0x800;
static android::icu::util::CompactCharArray::INDEXSHIFT = 0xb;
static android::icu::util::CompactCharArray::UNICODECOUNT = 0x10000;
// .method public constructor <init>()V
android::icu::util::CompactCharArray::CompactCharArray()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 050    .end annotation
	android::icu::util::CompactCharArray::(0x0);
	return;

}
// .method public constructor <init>(C)V
android::icu::util::CompactCharArray::CompactCharArray(char defaultValue)
{
	
	int cVar0;
	bool cVar1;
	int cVar2;
	int i;
	
	//    .param p1, "defaultValue"    # C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 066    .end annotation
	cVar0 = 0x10000;
	cVar1 = 0x0;
	cVar2 = 0x800;
	// 076    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->values = std::make_shared<std::vector<char[]>>(cVar0);
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
	// 110    .line 76
label_cond_1e:
	i = 0x0;
label_goto_1f:
	if ( i >= cVar2 )
		goto label_cond_2f;
	this->indices[i] = (char)(( i << 0x5));
	this->hashes[i] = cVar1;
	i = ( i + 0x1);
	goto label_goto_1f;
	// 136    .line 80
label_cond_2f:
	this->isCompact = cVar1;
	this->defaultValue = defaultValue;
	return;

}
// .method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
android::icu::util::CompactCharArray::CompactCharArray(std::shared_ptr<java::lang::String> indexArray,std::shared_ptr<java::lang::String> valueArray)
{
	
	//    .param p1, "indexArray"    # Ljava/lang/String;
	//    .param p2, "valueArray"    # Ljava/lang/String;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 152    .end annotation
	android::icu::util::CompactCharArray::(android::icu::impl::Utility::RLEStringToCharArray(indexArray), android::icu::impl::Utility::RLEStringToCharArray(valueArray));
	return;

}
// .method public constructor <init>([C[C)V
android::icu::util::CompactCharArray::CompactCharArray(std::shared_ptr<char[]> indexArray,std::shared_ptr<char[]> newValues)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int i;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	
	//    .param p1, "indexArray"    # [C
	//    .param p2, "newValues"    # [C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 177    .end annotation
	cVar0 = 0x800;
	// 183    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( indexArray->size() == cVar0 )
		goto label_cond_11;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Index out of bounds.")));
	// throw
	throw cVar1;
	// 199    .line 100
label_cond_11:
	i = 0x0;
	//    .local v0, "i":I
label_goto_12:
	if ( i >= cVar0 )
		goto label_cond_27;
	//    .local v1, "index":C
	if ( indexArray[i] <  ( newValues->size() + 0x20) )
		goto label_cond_24;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Index out of bounds.")));
	// throw
	throw cVar2;
	// 227    .line 100
label_cond_24:
	i = ( i + 0x1);
	goto label_goto_12;
	// 233    .line 105
	// 234    .end local v1    # "index":C
label_cond_27:
	this->indices = indexArray;
	this->values = newValues;
	this->isCompact = 0x1;
	return;

}
// .method private FindOverlappingPosition(I[CI)I
int android::icu::util::CompactCharArray::FindOverlappingPosition(int start,std::shared_ptr<char[]> tempValues,int tempCount)
{
	
	int i;
	
	//    .param p1, "start"    # I
	//    .param p2, "tempValues"    # [C
	//    .param p3, "tempCount"    # I
	i = 0x0;
	//    .local v1, "i":I
label_goto_1:
	if ( i >= tempCount )
		goto label_cond_17;
	//    .local v0, "currentCount":I
	if ( ( i + 0x20) <= tempCount )
		goto label_cond_b;
label_cond_b:
	if ( !(android::icu::util::CompactCharArray::arrayRegionMatches(this->values, start, tempValues, i, 0x20)) )  
		goto label_cond_14;
	return i;
	// 289    .line 262
label_cond_14:
	i = ( i + 0x1);
	goto label_goto_1;
	// 295    .line 270
	// 296    .end local v0    # "currentCount":I
label_cond_17:
	return tempCount;

}
// .method static final arrayRegionMatches([CI[CII)Z
bool android::icu::util::CompactCharArray::arrayRegionMatches(std::shared_ptr<char[]> source,int sourceStart,std::shared_ptr<char[]> target,int targetStart,int len)
{
	
	int i;
	
	//    .param p0, "source"    # [C
	//    .param p1, "sourceStart"    # I
	//    .param p2, "target"    # [C
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
	// 339    .line 284
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_5;
	// 345    .line 288
label_cond_14:
	return 0x1;

}
// .method private final blockTouched(I)Z
bool android::icu::util::CompactCharArray::blockTouched(int i)
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
void android::icu::util::CompactCharArray::expand()
{
	
	int cVar0;
	int cVar1;
	std::shared<std::vector<char[]>> tempArray;
	int i;
	
	cVar0 = 0x10000;
	cVar1 = 0x800;
	if ( !(this->isCompact) )  
		goto label_cond_30;
	this->hashes = std::make_shared<std::vector<int[]>>(cVar1);
	tempArray = std::make_shared<std::vector<char[]>>(cVar0);
	//    .local v1, "tempArray":[C
	i = 0x0;
	//    .local v0, "i":I
label_goto_f:
	if ( i >= cVar0 )
		goto label_cond_1b;
	tempArray[i] = this->elementAt((char)(i));
	i = ( i + 0x1);
	goto label_goto_f;
	// 415    .line 410
label_cond_1b:
	i = 0x0;
label_goto_1c:
	if ( i >= cVar1 )
		goto label_cond_28;
	this->indices[i] = (char)(( i << 0x5));
	i = ( i + 0x1);
	goto label_goto_1c;
	// 436    .line 413
label_cond_28:
	this->values = 0x0;
	this->values = tempArray;
	this->isCompact = 0x0;
	//    .end local v0    # "i":I
	//    .end local v1    # "tempArray":[C
label_cond_30:
	return;

}
// .method private final touchBlock(II)V
void android::icu::util::CompactCharArray::touchBlock(int i,int value)
{
	
	//    .param p1, "i"    # I
	//    .param p2, "value"    # I
	this->hashes[i] = ( (this->hashes[i] +  ( value << 0x1)) | 0x1);
	return;

}
// .method public clone()Ljava/lang/Object;
std::shared_ptr<java::lang::Object> android::icu::util::CompactCharArray::clone()
{
	
	std::shared_ptr<android::icu::util::ICUCloneNotSupportedException> cVar3;
	std::shared_ptr<android::icu::util::CompactCharArray> other;
	std::shared_ptr<char[]> cVar0;
	std::shared_ptr<char[]> cVar1;
	std::shared_ptr<int[]> cVar2;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 487    .end annotation
	try {
	//label_try_start_0:
	other = this->clone();
	other->checkCast("android::icu::util::CompactCharArray");
	//    .local v1, "other":Landroid/icu/util/CompactCharArray;
	cVar0 = this->values->clone();
	cVar0->checkCast("char[]");
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
	// 542    .line 346
	// 543    .end local v1    # "other":Landroid/icu/util/CompactCharArray;
label_catch_29:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/CloneNotSupportedException;
	cVar3 = std::make_shared<android::icu::util::ICUCloneNotSupportedException>(getCatchExcetionFromList);
	// throw
	throw cVar3;

}
// .method public compact()V
void android::icu::util::CompactCharArray::compact()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 559    .end annotation
	this->compact(0x1);
	return;

}
// .method public compact(Z)V
void android::icu::util::CompactCharArray::compact(bool exhaustive)
{
	
	int iBlockStart;
	int iUntouched;
	int newSize;
	std::shared<std::vector<char[]>> target;
	int i;
	int touched;
	int jBlockStart;
	int j;
	int dest;
	int limit;
	std::shared<std::vector<char[]>> result;
	
	//    .param p1, "exhaustive"    # Z
	//    .annotation runtime Ljava/lang/Deprecated;
	// 575    .end annotation
	if ( this->isCompact )     
		goto label_cond_97;
	iBlockStart = 0x0;
	//    .local v2, "iBlockStart":I
	iUntouched = 0xffff;
	//    .local v3, "iUntouched":C
	newSize = 0x0;
	//    .local v7, "newSize":I
	if ( !(exhaustive) )  
		goto label_cond_30;
	target = std::make_shared<std::vector<char[]>>(0x10000);
	//    .local v9, "target":[C
label_goto_f:
	i = 0x0;
	//    .end local v3    # "iUntouched":C
	//    .local v1, "i":I
label_goto_10:
	if ( i >= this->indices->size() )
		goto label_cond_88;
	this->indices[i] = 0xffff;
	touched = this->blockTouched(i);
	//    .local v10, "touched":Z
	if ( touched )     
		goto label_cond_33;
	if ( iUntouched == 0xffff )
		goto label_cond_33;
	this->indices[i] = iUntouched;
label_cond_2b:
label_goto_2b:
	i = ( i + 0x1);
	iBlockStart = ( iBlockStart + 0x20);
	goto label_goto_10;
	// 650    .line 205
	// 651    .end local v1    # "i":I
	// 652    .end local v9    # "target":[C
	// 653    .end local v10    # "touched":Z
	// 654    .restart local v3    # "iUntouched":C
label_cond_30:
	//    .restart local v9    # "target":[C
	goto label_goto_f;
	// 661    .line 216
	// 662    .end local v3    # "iUntouched":C
	// 663    .restart local v1    # "i":I
	// 664    .restart local v10    # "touched":Z
label_cond_33:
	jBlockStart = 0x0;
	//    .local v5, "jBlockStart":I
	j = 0x0;
	//    .local v4, "j":I
label_goto_35:
	if ( j >= i )
		goto label_cond_5a;
	if ( this->hashes[i] != this->hashes[j] )
		goto label_cond_55;
	if ( !(android::icu::util::CompactCharArray::arrayRegionMatches(this->values, iBlockStart, this->values, jBlockStart, 0x20)) )  
		goto label_cond_55;
	this->indices[i] = this->indices[j];
label_cond_55:
	j = ( j + 0x1);
	jBlockStart = ( jBlockStart + 0x20);
	goto label_goto_35;
	// 720    .line 225
label_cond_5a:
	if ( this->indices[i] != 0xffff )
		goto label_cond_2b;
	if ( !(exhaustive) )  
		goto label_cond_7c;
	dest = this->FindOverlappingPosition(iBlockStart, target, newSize);
	//    .local v0, "dest":I
label_goto_69:
	limit = ( dest + 0x20);
	//    .local v6, "limit":I
	if ( limit <= newSize )
		goto label_cond_7f;
	j = newSize;
label_goto_6e:
	if ( j >= limit )
		goto label_cond_7e;
	target[j] = this->values[((iBlockStart + j) -  dest)];
	j = ( j + 0x1);
	goto label_goto_6e;
	// 769    .line 233
	// 770    .end local v0    # "dest":I
	// 771    .end local v6    # "limit":I
label_cond_7c:
	dest = newSize;
	//    .restart local v0    # "dest":I
	goto label_goto_69;
	// 778    .line 240
	// 779    .restart local v6    # "limit":I
label_cond_7e:
	newSize = limit;
label_cond_7f:
	this->indices[i] = (char)(dest);
	if ( touched )     
		goto label_cond_2b;
	//    .local v3, "iUntouched":C
	goto label_goto_2b;
	// 800    .line 252
	// 801    .end local v0    # "dest":I
	// 802    .end local v3    # "iUntouched":C
	// 803    .end local v4    # "j":I
	// 804    .end local v5    # "jBlockStart":I
	// 805    .end local v6    # "limit":I
	// 806    .end local v10    # "touched":Z
label_cond_88:
	result = std::make_shared<std::vector<char[]>>(newSize);
	//    .local v8, "result":[C
	java::lang::System::arraycopy(target, 0x0, result, 0x0, newSize);
	this->values = result;
	this->isCompact = 0x1;
	this->hashes = 0x0;
	//    .end local v1    # "i":I
	//    .end local v2    # "iBlockStart":I
	//    .end local v7    # "newSize":I
	//    .end local v8    # "result":[C
	//    .end local v9    # "target":[C
label_cond_97:
	return;

}
// .method public elementAt(C)C
char android::icu::util::CompactCharArray::elementAt(char index)
{
	
	int ix;
	char cVar0;
	
	//    .param p1, "index"    # C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 845    .end annotation
	ix = ((this->indices[_shri(index,0x5)] &  0xffff) + ( index & 0x1f));
	//    .local v0, "ix":I
	if ( ix <  this->values->size() )
		goto label_cond_16;
	cVar0 = this->defaultValue;
label_goto_15:
	return cVar0;
label_cond_16:
	cVar0 = this->values[ix];
	goto label_goto_15;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::util::CompactCharArray::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<android::icu::util::CompactCharArray> other;
	int i;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	//    .annotation runtime Ljava/lang/Deprecated;
	// 890    .end annotation
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( obj )     
		goto label_cond_5;
	return cVar1;
	// 902    .line 363
label_cond_5:
	if ( this != obj )
		goto label_cond_8;
	return cVar0;
	// 909    .line 365
label_cond_8:
	if ( this->getClass() == obj->getClass() )
		goto label_cond_13;
	return cVar1;
label_cond_13:
	other = obj;
	other->checkCast("android::icu::util::CompactCharArray");
	//    .local v1, "other":Landroid/icu/util/CompactCharArray;
	i = 0x0;
	//    .local v0, "i":I
label_goto_17:
	if ( i >= 0x10000 )
		goto label_cond_2b;
	if ( this->elementAt((char)(i)) == other->elementAt((char)(i)) )
		goto label_cond_28;
	return cVar1;
	// 958    .line 368
label_cond_28:
	i = ( i + 0x1);
	goto label_goto_17;
	// 964    .line 373
label_cond_2b:
	return cVar0;

}
// .method public getIndexArray()[C
char android::icu::util::CompactCharArray::getIndexArray()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 972    .end annotation
	return this->indices;

}
// .method public getValueArray()[C
char android::icu::util::CompactCharArray::getValueArray()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 984    .end annotation
	return this->values;

}
// .method public hashCode()I
int android::icu::util::CompactCharArray::hashCode()
{
	
	int result;
	int i;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 996    .end annotation
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
	// 1042    .line 389
label_cond_1b:
	return result;

}
// .method public setElementAt(CC)V
void android::icu::util::CompactCharArray::setElementAt(char index,char value)
{
	
	//    .param p1, "index"    # C
	//    .param p2, "value"    # C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1052    .end annotation
	if ( !(this->isCompact) )  
		goto label_cond_7;
	this->expand();
label_cond_7:
	this->values[index] = value;
	this->touchBlock(_shri(index,0x5), value);
	return;

}
// .method public setElementAt(CCC)V
void android::icu::util::CompactCharArray::setElementAt(char start,char end,char value)
{
	
	int i;
	
	//    .param p1, "start"    # C
	//    .param p2, "end"    # C
	//    .param p3, "value"    # C
	//    .annotation runtime Ljava/lang/Deprecated;
	// 1084    .end annotation
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
	this->touchBlock(_shri(i,0x5), value);
	i = ( i + 0x1);
	goto label_goto_8;
	// 1118    .line 181
label_cond_16:
	return;

}


