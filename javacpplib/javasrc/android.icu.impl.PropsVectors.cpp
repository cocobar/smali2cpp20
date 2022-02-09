// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\PropsVectors.smali
#include "java2ctype.h"
#include "android.icu.impl.IntTrie.h"
#include "android.icu.impl.IntTrieBuilder.h"
#include "android.icu.impl.PVecToTrieCompactHandler.h"
#include "android.icu.impl.PropsVectors_S_1.h"
#include "android.icu.impl.PropsVectors_S_CompactHandler.h"
#include "android.icu.impl.PropsVectors_S_DefaultGetFoldedValue.h"
#include "android.icu.impl.PropsVectors_S_DefaultGetFoldingOffset.h"
#include "android.icu.impl.PropsVectors.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.IndexOutOfBoundsException.h"
#include "java.lang.Integer.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.util.Arrays.h"

static android::icu::impl::PropsVectors::ERROR_VALUE_CP = 0x110001;
static android::icu::impl::PropsVectors::FIRST_SPECIAL_CP = 0x110000;
static android::icu::impl::PropsVectors::INITIAL_ROWS = 0x1000;
static android::icu::impl::PropsVectors::INITIAL_VALUE_CP = 0x110000;
static android::icu::impl::PropsVectors::MAX_CP = 0x110001;
static android::icu::impl::PropsVectors::MAX_ROWS = 0x110002;
static android::icu::impl::PropsVectors::MEDIUM_ROWS = 0x10000;
// .method static synthetic -get0(Landroid/icu/impl/PropsVectors;)I
int android::icu::impl::PropsVectors::_get0(std::shared_ptr<android::icu::impl::PropsVectors> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/PropsVectors;
	return _this->columns;

}
// .method static synthetic -get1(Landroid/icu/impl/PropsVectors;)[I
int android::icu::impl::PropsVectors::_get1(std::shared_ptr<android::icu::impl::PropsVectors> _this)
{
	
	//    .param p0, "-this"    # Landroid/icu/impl/PropsVectors;
	return _this->v;

}
// .method public constructor <init>(I)V
android::icu::impl::PropsVectors::PropsVectors(int numOfColumns)
{
	
	int cVar0;
	int cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::StringBuilder> cVar3;
	int index;
	int cp;
	
	//    .param p1, "numOfColumns"    # I
	cVar0 = 0x1;
	cVar1 = 0x0;
	// 079    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( numOfColumns >= cVar0 )
		goto label_cond_23;
	cVar3 = std::make_shared<java::lang::StringBuilder>();
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(cVar3->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("numOfColumns need to be no less than 1; but it is ")))->append(numOfColumns)->toString());
	// throw
	throw cVar2;
	// 109    .line 151
label_cond_23:
	this->columns = ( numOfColumns + 0x2);
	this->v = std::make_shared<std::vector<int[]>>(( this->columns * 0x1000));
	this->maxRows = 0x1000;
	this->rows = 0x3;
	this->prevRow = cVar1;
	this->isCompacted = cVar1;
	this->v[cVar1] = cVar1;
	this->v[cVar0] = 0x110000;
	index = this->columns;
	//    .local v1, "index":I
	cp = 0x110000;
	//    .local v0, "cp":I
label_goto_46:
	if ( cp >  0x110001 )
		goto label_cond_5d;
	this->v[index] = cp;
	this->v[( index + 0x1)] = ( cp + 0x1);
	index = (index +  this->columns);
	cp = ( cp + 0x1);
	goto label_goto_46;
	// 187    .line 165
label_cond_5d:
	return;

}
// .method private areElementsSame(I[III)Z
bool android::icu::impl::PropsVectors::areElementsSame(int index1,std::shared_ptr<int[]> target,int index2,int length)
{
	
	int i;
	
	//    .param p1, "index1"    # I
	//    .param p2, "target"    # [I
	//    .param p3, "index2"    # I
	//    .param p4, "length"    # I
	i = 0x0;
	//    .local v0, "i":I
label_goto_1:
	if ( i >= length )
		goto label_cond_14;
	if ( this->v[(index1 + i)] == target[(index2 + i)] )
		goto label_cond_11;
	return 0x0;
	// 225    .line 55
label_cond_11:
	i = ( i + 0x1);
	goto label_goto_1;
	// 231    .line 60
label_cond_14:
	return 0x1;

}
// .method private findRow(I)I
int android::icu::impl::PropsVectors::findRow(int rangeStart)
{
	
	int cVar0;
	int index;
	int start;
	int limit;
	int mid;
	
	//    .param p1, "rangeStart"    # I
	cVar0 = 0x0;
	0x0;
	//    .local v0, "index":I
	index = (this->prevRow * this->columns);
	if ( rangeStart <  this->v[index] )
		goto label_cond_5f;
	if ( rangeStart >= this->v[( index + 0x1)] )
		goto label_cond_17;
	return index;
	// 275    .line 79
label_cond_17:
	index = (index +  this->columns);
	if ( rangeStart >= this->v[( index + 0x1)] )
		goto label_cond_29;
	this->prevRow = ( this->prevRow + 0x1);
	return index;
	// 300    .line 84
label_cond_29:
	index = (index +  this->columns);
	if ( rangeStart >= this->v[( index + 0x1)] )
		goto label_cond_3b;
	this->prevRow = ( this->prevRow + 0x2);
	return index;
	// 325    .line 88
label_cond_3b:
	if ( (rangeStart - this->v[( index + 0x1)]) >= 0xa )
		goto label_cond_69;
	this->prevRow = ( this->prevRow + 0x2);
label_cond_4d:
	this->prevRow = ( this->prevRow + 0x1);
	index = (index +  this->columns);
	if ( rangeStart >= this->v[( index + 0x1)] )
		goto label_cond_4d;
	return index;
	// 371    .line 99
label_cond_5f:
	if ( rangeStart >= this->v[0x1] )
		goto label_cond_69;
	this->prevRow = cVar0;
	return cVar0;
	// 387    .line 106
label_cond_69:
	start = 0x0;
	//    .local v3, "start":I
	0x0;
	//    .local v2, "mid":I
	limit = this->rows;
	//    .local v1, "limit":I
label_goto_6d:
	if ( start >= ( limit + -0x1) )
		goto label_cond_8e;
	mid = ( (start + limit) / 0x2);
	index = (this->columns * mid);
	if ( rangeStart >= this->v[index] )
		goto label_cond_81;
	limit = mid;
	goto label_goto_6d;
	// 428    .line 114
label_cond_81:
	if ( rangeStart >= this->v[( index + 0x1)] )
		goto label_cond_8c;
	this->prevRow = mid;
	return index;
	// 444    .line 118
label_cond_8c:
	start = mid;
	goto label_goto_6d;
	// 450    .line 124
label_cond_8e:
	this->prevRow = start;
	return (start * this->columns);

}
// .method public compact(Landroid/icu/impl/PropsVectors$CompactHandler;)V
void android::icu::impl::PropsVectors::compact(std::shared_ptr<android::icu::impl::PropsVectors_S_CompactHandler> compactor)
{
	
	int cVar0;
	int valueColumns;
	std::shared<std::vector<std::vector<java::lang::Integer>>> indexArray;
	int i;
	std::shared_ptr<android::icu::impl::PropsVectors_S_1> cVar1;
	int count;
	int start;
	std::shared<std::vector<int[]>> temp;
	
	//    .param p1, "compactor"    # Landroid/icu/impl/PropsVectors$CompactHandler;
	cVar0 = 0x110000;
	if ( !(this->isCompacted) )  
		goto label_cond_7;
	return;
	// 480    .line 377
label_cond_7:
	this->isCompacted = 0x1;
	valueColumns = ( this->columns + -0x2);
	//    .local v6, "valueColumns":I
	indexArray = std::make_shared<std::vector<std::vector<java::lang::Integer>>>(this->rows);
	//    .local v2, "indexArray":[Ljava/lang/Integer;
	i = 0x0;
	//    .local v1, "i":I
label_goto_13:
	if ( i >= this->rows )
		goto label_cond_23;
	indexArray[i] = java::lang::Integer::valueOf((this->columns *  i));
	i = ( i + 0x1);
	goto label_goto_13;
	// 523    .line 386
label_cond_23:
	cVar1 = std::make_shared<android::icu::impl::PropsVectors_S_1>(this);
	java::util::Arrays::sort(indexArray, cVar1);
	count = (0 - valueColumns);
	//    .local v0, "count":I
	i = 0x0;
label_goto_2d:
	if ( i >= this->rows )
		goto label_cond_6b;
	start = this->v[indexArray[i]->intValue()];
	//    .local v4, "start":I
	if ( count < 0 ) 
		goto label_cond_59;
	if ( !(( this->areElementsSame(( indexArray[i]->intValue() + 0x2), this->v, ( indexArray[( i + -0x1)]->intValue() + 0x2), valueColumns) ^ 0x1)) )  
		goto label_cond_5a;
label_cond_59:
	count = (count +  valueColumns);
label_cond_5a:
	if ( start != cVar0 )
		goto label_cond_62;
	compactor->setRowIndexForInitialValue(count);
label_cond_5f:
label_goto_5f:
	i = ( i + 0x1);
	goto label_goto_2d;
	// 606    .line 428
label_cond_62:
	if ( start != 0x110001 )
		goto label_cond_5f;
	compactor->setRowIndexForErrorValue(count);
	goto label_goto_5f;
	// 617    .line 435
	// 618    .end local v4    # "start":I
label_cond_6b:
	count = (count +  valueColumns);
	compactor->startRealValues(count);
	temp = std::make_shared<std::vector<int[]>>(count);
	//    .local v5, "temp":[I
	count = (0 - valueColumns);
	i = 0x0;
label_goto_73:
	if ( i >= this->rows )
		goto label_cond_b7;
	start = this->v[indexArray[i]->intValue()];
	//    .restart local v4    # "start":I
	//    .local v3, "limit":I
	if ( count < 0 ) 
		goto label_cond_9f;
	if ( !(( this->areElementsSame(( indexArray[i]->intValue() + 0x2), temp, count, valueColumns) ^ 0x1)) )  
		goto label_cond_ad;
label_cond_9f:
	count = (count +  valueColumns);
	java::lang::System::arraycopy(this->v, ( indexArray[i]->intValue() + 0x2), temp, count, valueColumns);
label_cond_ad:
	if ( start >= cVar0 )
		goto label_cond_b4;
	compactor->setRowIndexForRange(start, ( this->v[( indexArray[i]->intValue() + 0x1)] + -0x1), count);
label_cond_b4:
	i = ( i + 0x1);
	goto label_goto_73;
	// 717    .line 467
	// 718    .end local v3    # "limit":I
	// 719    .end local v4    # "start":I
label_cond_b7:
	this->v = temp;
	this->rows = ( (count / valueColumns) + 0x1);
	return;

}
// .method public compactToTrieWithRowIndexes()Landroid/icu/impl/IntTrie;
std::shared_ptr<android::icu::impl::IntTrie> android::icu::impl::PropsVectors::compactToTrieWithRowIndexes()
{
	
	std::shared_ptr<android::icu::impl::PVecToTrieCompactHandler> compactor;
	std::shared_ptr<android::icu::impl::PropsVectors_S_DefaultGetFoldedValue> cVar0;
	std::shared_ptr<android::icu::impl::PropsVectors_S_DefaultGetFoldingOffset> cVar1;
	
	compactor = std::make_shared<android::icu::impl::PVecToTrieCompactHandler>();
	//    .local v0, "compactor":Landroid/icu/impl/PVecToTrieCompactHandler;
	this->compact(compactor);
	cVar0 = std::make_shared<android::icu::impl::PropsVectors_S_DefaultGetFoldedValue>(compactor->builder);
	cVar1 = std::make_shared<android::icu::impl::PropsVectors_S_DefaultGetFoldingOffset>(0x0);
	return compactor->builder->serialize(cVar0, cVar1);

}
// .method public getCompactedArray()[I
int android::icu::impl::PropsVectors::getCompactedArray()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	if ( this->isCompacted )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal Invocation of the method before compact()")));
	// throw
	throw cVar0;
	// 793    .line 484
label_cond_d:
	return this->v;

}
// .method public getCompactedColumns()I
int android::icu::impl::PropsVectors::getCompactedColumns()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	if ( this->isCompacted )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal Invocation of the method before compact()")));
	// throw
	throw cVar0;
	// 820    .line 510
label_cond_d:
	return ( this->columns + -0x2);

}
// .method public getCompactedRows()I
int android::icu::impl::PropsVectors::getCompactedRows()
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	
	if ( this->isCompacted )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal Invocation of the method before compact()")));
	// throw
	throw cVar0;
	// 849    .line 497
label_cond_d:
	return this->rows;

}
// .method public getRow(I)[I
int android::icu::impl::PropsVectors::getRow(int rowIndex)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared<std::vector<int[]>> rowToReturn;
	
	//    .param p1, "rowIndex"    # I
	if ( !(this->isCompacted) )  
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal Invocation of the method after compact()")));
	// throw
	throw cVar0;
	// 879    .line 305
label_cond_e:
	if ( rowIndex < 0 ) 
		goto label_cond_14;
	if ( rowIndex <= this->rows )
		goto label_cond_1d;
label_cond_14:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("rowIndex out of bound!")));
	// throw
	throw cVar1;
	// 897    .line 308
label_cond_1d:
	rowToReturn = std::make_shared<std::vector<int[]>>(( this->columns + -0x2));
	//    .local v0, "rowToReturn":[I
	java::lang::System::arraycopy(this->v, ( (this->columns *  rowIndex) + 0x2), rowToReturn, 0x0, ( this->columns + -0x2));
	return rowToReturn;

}
// .method public getRowEnd(I)I
int android::icu::impl::PropsVectors::getRowEnd(int rowIndex)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "rowIndex"    # I
	if ( !(this->isCompacted) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal Invocation of the method after compact()")));
	// throw
	throw cVar0;
	// 948    .line 346
label_cond_d:
	if ( rowIndex < 0 ) 
		goto label_cond_13;
	if ( rowIndex <= this->rows )
		goto label_cond_1c;
label_cond_13:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("rowIndex out of bound!")));
	// throw
	throw cVar1;
	// 966    .line 349
label_cond_1c:
	return ( this->v[( (this->columns *  rowIndex) + 0x1)] + -0x1);

}
// .method public getRowStart(I)I
int android::icu::impl::PropsVectors::getRowStart(int rowIndex)
{
	
	std::shared_ptr<java::lang::IllegalStateException> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "rowIndex"    # I
	if ( !(this->isCompacted) )  
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Illegal Invocation of the method after compact()")));
	// throw
	throw cVar0;
	// 1004    .line 327
label_cond_d:
	if ( rowIndex < 0 ) 
		goto label_cond_13;
	if ( rowIndex <= this->rows )
		goto label_cond_1c;
label_cond_13:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("rowIndex out of bound!")));
	// throw
	throw cVar1;
	// 1022    .line 330
label_cond_1c:
	return this->v[(this->columns *  rowIndex)];

}
// .method public getValue(II)I
int android::icu::impl::PropsVectors::getValue(int c,int column)
{
	
	//    .param p1, "c"    # I
	//    .param p2, "column"    # I
	if ( this->isCompacted )     
		goto label_cond_7;
	if ( c >= 0 )
		goto label_cond_8;
label_cond_7:
	return 0x0;
	// 1054    .line 285
label_cond_8:
	if ( c >  0x110001 )
		goto label_cond_7;
	if ( column < 0 ) 
		goto label_cond_7;
	if ( column >= ( this->columns + -0x2) )
		goto label_cond_7;
	//    .local v0, "index":I
	return this->v[(( this->findRow(c) + 0x2) +  column)];

}
// .method public setValue(IIIII)V
void android::icu::impl::PropsVectors::setValue(int start,int end,int column,int value,int mask)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::IllegalStateException> cVar1;
	int limit;
	int cVar2;
	int cVar3;
	int firstRow;
	int lastRow;
	int splitFirstRow;
	int splitLastRow;
	int rowsToExpand;
	int newMaxRows;
	std::shared<std::vector<int[]>> temp;
	int count;
	std::shared_ptr<java::lang::IndexOutOfBoundsException> cVar4;
	
	//    .param p1, "start"    # I
	//    .param p2, "end"    # I
	//    .param p3, "column"    # I
	//    .param p4, "value"    # I
	//    .param p5, "mask"    # I
	if ( start < 0 ) 
		goto label_cond_8;
	if ( start <= end )
		goto label_cond_e;
label_cond_8:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>();
	// throw
	throw cVar0;
	// 1113    .line 178
label_cond_e:
	if ( end >  0x110001 )
		goto label_cond_8;
	if ( column < 0 ) 
		goto label_cond_8;
	if ( column >= ( this->columns + -0x2) )
		goto label_cond_8;
	if ( !(this->isCompacted) )  
		goto label_cond_30;
	cVar1 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Shouldn\'t be called aftercompact()!")));
	// throw
	throw cVar1;
	// 1150    .line 188
label_cond_30:
	limit = ( end + 0x1);
	//    .local v5, "limit":I
	cVar2 = ( column + 0x2);
	cVar3 = (value & mask);
	firstRow = this->findRow(start);
	//    .local v3, "firstRow":I
	lastRow = this->findRow(end);
	//    .local v4, "lastRow":I
	if ( start == this->v[firstRow] )
		goto label_cond_170;
	if ( cVar3 == (this->v[(firstRow + cVar2)] & mask) )
		goto label_cond_170;
	splitFirstRow = 0x1;
	//    .local v8, "splitFirstRow":Z
label_goto_5b:
	if ( limit == this->v[( lastRow + 0x1)] )
		goto label_cond_173;
	if ( cVar3 == (this->v[(lastRow + cVar2)] & mask) )
		goto label_cond_173;
	splitLastRow = 0x1;
	//    .local v9, "splitLastRow":Z
label_goto_74:
	if ( splitFirstRow )     
		goto label_cond_78;
	if ( !(splitLastRow) )  
		goto label_cond_14a;
label_cond_78:
	rowsToExpand = 0x0;
	//    .local v7, "rowsToExpand":I
	if ( !(splitFirstRow) )  
		goto label_cond_7c;
	rowsToExpand = 0x1;
label_cond_7c:
	if ( !(splitLastRow) )  
		goto label_cond_80;
	rowsToExpand = ( rowsToExpand + 0x1);
label_cond_80:
	newMaxRows = 0x0;
	//    .local v6, "newMaxRows":I
	if ( (this->rows +  rowsToExpand) <= this->maxRows )
		goto label_cond_b7;
	if ( this->maxRows >= 0x10000 )
		goto label_cond_176;
	newMaxRows = 0x10000;
label_goto_96:
	temp = std::make_shared<std::vector<int[]>>((this->columns *  newMaxRows));
	//    .local v10, "temp":[I
	java::lang::System::arraycopy(this->v, 0x0, temp, 0x0, (this->rows *  this->columns));
	this->v = temp;
	this->maxRows = newMaxRows;
	//    .end local v10    # "temp":[I
label_cond_b7:
	count = ((this->rows *  this->columns) - (this->columns +  lastRow));
	//    .local v2, "count":I
	if ( count <= 0 )
		goto label_cond_e1;
	java::lang::System::arraycopy(this->v, (this->columns +  lastRow), this->v, ((( rowsToExpand + 0x1) *  this->columns) +  lastRow), count);
label_cond_e1:
	this->rows = (this->rows +  rowsToExpand);
	if ( !(splitFirstRow) )  
		goto label_cond_121;
	java::lang::System::arraycopy(this->v, firstRow, this->v, (this->columns +  firstRow), ((lastRow - firstRow) + this->columns));
	lastRow = (lastRow +  this->columns);
	this->v[(this->columns +  firstRow)] = start;
	this->v[( firstRow + 0x1)] = start;
	firstRow = (firstRow +  this->columns);
label_cond_121:
	if ( !(splitLastRow) )  
		goto label_cond_14a;
	java::lang::System::arraycopy(this->v, lastRow, this->v, (this->columns +  lastRow), this->columns);
	this->v[(this->columns +  lastRow)] = limit;
	this->v[( lastRow + 0x1)] = limit;
	//    .end local v2    # "count":I
	//    .end local v6    # "newMaxRows":I
	//    .end local v7    # "rowsToExpand":I
label_cond_14a:
	this->prevRow = (lastRow / this->columns);
	firstRow = (firstRow + cVar2);
label_goto_15d:
	this->v[firstRow] = ((this->v[firstRow] & (~mask)) | cVar3);
	if ( firstRow != (lastRow + cVar2) )
		goto label_cond_18d;
	return;
	// 1558    .line 204
	// 1559    .end local v8    # "splitFirstRow":Z
	// 1560    .end local v9    # "splitLastRow":Z
label_cond_170:
	splitFirstRow = 0x0;
	//    .restart local v8    # "splitFirstRow":Z
	goto label_goto_5b;
	// 1567    .line 205
label_cond_173:
	splitLastRow = 0x0;
	//    .restart local v9    # "splitLastRow":Z
	goto label_goto_74;
	// 1574    .line 220
	// 1575    .restart local v6    # "newMaxRows":I
	// 1576    .restart local v7    # "rowsToExpand":I
label_cond_176:
	if ( this->maxRows >= 0x110002 )
		goto label_cond_184;
	newMaxRows = 0x110002;
	goto label_goto_96;
	// 1591    .line 223
label_cond_184:
	cVar4 = std::make_shared<java::lang::IndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("MAX_ROWS exceeded! Increase it to a higher valuein the implementation")));
	// throw
	throw cVar4;
	// 1603    .line 277
	// 1604    .end local v6    # "newMaxRows":I
	// 1605    .end local v7    # "rowsToExpand":I
label_cond_18d:
	firstRow = (firstRow +  this->columns);
	goto label_goto_15d;

}


