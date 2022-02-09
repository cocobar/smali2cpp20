// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\IntTrieBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.IntTrie.h"
#include "android.icu.impl.IntTrieBuilder.h"
#include "android.icu.impl.Trie_S_DataManipulate.h"
#include "android.icu.impl.TrieBuilder_S_DataManipulate.h"
#include "android.icu.impl.TrieBuilder.h"
#include "android.icu.text.UTF16.h"
#include "java.io.DataOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.lang.ArrayIndexOutOfBoundsException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.IllegalStateException.h"
#include "java.lang.Math.h"
#include "java.lang.String.h"
#include "java.lang.System.h"
#include "java.util.Arrays.h"

// .method public constructor <init>(Landroid/icu/impl/IntTrieBuilder;)V
android::icu::impl::IntTrieBuilder::IntTrieBuilder(std::shared_ptr<android::icu::impl::IntTrieBuilder> table)
{
	
	int cVar0;
	
	//    .param p1, "table"    # Landroid/icu/impl/IntTrieBuilder;
	cVar0 = 0x0;
	android::icu::impl::TrieBuilder::(table);
	this->m_data_ = std::make_shared<std::vector<int[]>>(this->m_dataCapacity_);
	java::lang::System::arraycopy(table->m_data_, cVar0, this->m_data_, cVar0, this->m_dataLength_);
	this->m_initialValue_ = table->m_initialValue_;
	this->m_leadUnitValue_ = table->m_leadUnitValue_;
	return;

}
// .method public constructor <init>([IIIIZ)V
android::icu::impl::IntTrieBuilder::IntTrieBuilder(std::shared_ptr<int[]> aliasdata,int maxdatalength,int initialvalue,int leadunitvalue,bool latin1linear)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int j;
	int i;
	
	//    .param p1, "aliasdata"    # [I
	//    .param p2, "maxdatalength"    # I
	//    .param p3, "initialvalue"    # I
	//    .param p4, "leadunitvalue"    # I
	//    .param p5, "latin1linear"    # Z
	cVar0 = 0x0;
	// 067    invoke-direct {p0}, Landroid/icu/impl/TrieBuilder;-><init>()V
	if ( maxdatalength <  0x20 )
		goto label_cond_e;
	if ( !(latin1linear) )  
		goto label_cond_17;
	if ( maxdatalength >= 0x400 )
		goto label_cond_17;
label_cond_e:
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument maxdatalength is too small")));
	// throw
	throw cVar1;
	// 093    .line 73
label_cond_17:
	if ( !(aliasdata) )  
		goto label_cond_2e;
	this->m_data_ = aliasdata;
label_goto_1b:
	j = 0x20;
	//    .local v2, "j":I
	if ( !(latin1linear) )  
		goto label_cond_33;
	i = 0x0;
	//    .local v0, "i":I
label_goto_20:
	i = ( i + 0x1);
	//    .end local v0    # "i":I
	//    .local v1, "i":I
	this->m_index_[i] = j;
	j = ( j + 0x20);
	if ( i >= 0x8 )
		goto label_cond_33;
	i = i;
	//    .end local v1    # "i":I
	//    .restart local v0    # "i":I
	goto label_goto_20;
	// 136    .line 77
	// 137    .end local v0    # "i":I
	// 138    .end local v2    # "j":I
label_cond_2e:
	this->m_data_ = std::make_shared<std::vector<int[]>>(maxdatalength);
	goto label_goto_1b;
	// 146    .line 97
	// 147    .restart local v2    # "j":I
label_cond_33:
	this->m_dataLength_ = j;
	java::util::Arrays::fill(this->m_data_, cVar0, this->m_dataLength_, initialvalue);
	this->m_initialValue_ = initialvalue;
	this->m_leadUnitValue_ = leadunitvalue;
	this->m_dataCapacity_ = maxdatalength;
	this->m_isLatin1Linear_ = latin1linear;
	this->m_isCompacted_ = cVar0;
	return;

}
// .method private allocDataBlock()I
int android::icu::impl::IntTrieBuilder::allocDataBlock()
{
	
	int newBlock;
	int newTop;
	
	newBlock = this->m_dataLength_;
	//    .local v0, "newBlock":I
	newTop = ( newBlock + 0x20);
	//    .local v1, "newTop":I
	if ( newTop <= this->m_dataCapacity_ )
		goto label_cond_a;
	return -0x1;
	// 199    .line 514
label_cond_a:
	this->m_dataLength_ = newTop;
	return newBlock;

}
// .method private compact(Z)V
void android::icu::impl::IntTrieBuilder::compact(bool overlap)
{
	
	int overlapStart;
	int newStart;
	int start;
	int cVar0;
	int i;
	
	//    .param p1, "overlap"    # Z
	if ( !(this->m_isCompacted_) )  
		goto label_cond_5;
	return;
	// 220    .line 565
label_cond_5:
	this->findUnusedBlocks();
	0x20;
	//    .local v3, "overlapStart":I
	if ( !(this->m_isLatin1Linear_) )  
		goto label_cond_10;
	overlapStart = 0x120;
label_cond_10:
	newStart = 0x20;
	//    .local v1, "newStart":I
	start = 0x20;
	//    .local v4, "start":I
label_goto_14:
	if ( start >= this->m_dataLength_ )
		goto label_cond_a0;
	if ( this->m_map_[_ushri(start,0x5)] >= 0 )
		goto label_cond_23;
	start = ( start + 0x20);
	goto label_goto_14;
	// 265    .line 588
label_cond_23:
	if ( start <  overlapStart )
		goto label_cond_3c;
	if ( !(overlap) )  
		goto label_cond_39;
	cVar0 = 0x4;
label_goto_2a:
	i = android::icu::impl::IntTrieBuilder::findSameDataBlock(this->m_data_, newStart, start, cVar0);
	//    .local v0, "i":I
	if ( i < 0 ) 
		goto label_cond_3c;
	this->m_map_[_ushri(start,0x5)] = i;
	start = ( start + 0x20);
	goto label_goto_14;
	// 300    .line 590
	// 301    .end local v0    # "i":I
label_cond_39:
	cVar0 = 0x20;
	goto label_goto_2a;
	// 307    .line 603
label_cond_3c:
	if ( !(overlap) )  
		goto label_cond_53;
	if ( start <  overlapStart )
		goto label_cond_53;
	i = 0x1c;
	//    .restart local v0    # "i":I
label_goto_42:
	if ( i <= 0 )
		goto label_cond_54;
	if ( !(( android::icu::impl::IntTrieBuilder::equal_int(this->m_data_, (newStart - i), start, i) ^ 0x1)) )  
		goto label_cond_54;
	i = ( i + -0x4);
	goto label_goto_42;
	// 339    .line 609
	// 340    .end local v0    # "i":I
label_cond_53:
	i = 0x0;
	//    .restart local v0    # "i":I
label_cond_54:
	if ( i <= 0 )
		goto label_cond_76;
	this->m_map_[_ushri(start,0x5)] = (newStart - i);
	start = (start +  i);
	i = ( i - 0x20);
	start = start;
	//    .end local v4    # "start":I
	//    .local v5, "start":I
	newStart = newStart;
	//    .end local v1    # "newStart":I
	//    .local v2, "newStart":I
label_goto_63:
	if ( i <= 0 )
		goto label_cond_bd;
	//    .end local v2    # "newStart":I
	//    .restart local v1    # "newStart":I
	start = ( start + 0x1);
	//    .end local v5    # "start":I
	//    .restart local v4    # "start":I
	this->m_data_[newStart] = this->m_data_[start];
	i = ( i + -0x1);
	start = start;
	//    .end local v4    # "start":I
	//    .restart local v5    # "start":I
	newStart = ( newStart + 0x1);
	//    .end local v1    # "newStart":I
	//    .restart local v2    # "newStart":I
	goto label_goto_63;
	// 405    .line 620
	// 406    .end local v2    # "newStart":I
	// 407    .end local v5    # "start":I
	// 408    .restart local v1    # "newStart":I
	// 409    .restart local v4    # "start":I
label_cond_76:
	if ( newStart >= start )
		goto label_cond_95;
	this->m_map_[_ushri(start,0x5)] = newStart;
	i = 0x20;
	start = start;
	//    .end local v4    # "start":I
	//    .restart local v5    # "start":I
	newStart = newStart;
	//    .end local v1    # "newStart":I
	//    .restart local v2    # "newStart":I
label_goto_82:
	if ( i <= 0 )
		goto label_cond_bd;
	//    .end local v2    # "newStart":I
	//    .restart local v1    # "newStart":I
	start = ( start + 0x1);
	//    .end local v5    # "start":I
	//    .restart local v4    # "start":I
	this->m_data_[newStart] = this->m_data_[start];
	i = ( i + -0x1);
	start = start;
	//    .end local v4    # "start":I
	//    .restart local v5    # "start":I
	newStart = ( newStart + 0x1);
	//    .end local v1    # "newStart":I
	//    .restart local v2    # "newStart":I
	goto label_goto_82;
	// 464    .line 628
	// 465    .end local v2    # "newStart":I
	// 466    .end local v5    # "start":I
	// 467    .restart local v1    # "newStart":I
	// 468    .restart local v4    # "start":I
label_cond_95:
	this->m_map_[_ushri(start,0x5)] = start;
	newStart = ( newStart + 0x20);
	start = newStart;
	goto label_goto_14;
	// 484    .line 634
	// 485    .end local v0    # "i":I
label_cond_a0:
	i = 0x0;
	//    .restart local v0    # "i":I
label_goto_a1:
	if ( i >= this->m_indexLength_ )
		goto label_cond_ba;
	this->m_index_[i] = this->m_map_[_ushri(java::lang::Math::abs(this->m_index_[i]),0x5)];
	i = ( i + 0x1);
	goto label_goto_a1;
	// 519    .line 637
label_cond_ba:
	this->m_dataLength_ = newStart;
	return;
	// 526    .end local v1    # "newStart":I
	// 527    .end local v4    # "start":I
	// 528    .restart local v2    # "newStart":I
	// 529    .restart local v5    # "start":I
label_cond_bd:
	start = start;
	//    .end local v5    # "start":I
	//    .restart local v4    # "start":I
	newStart = newStart;
	//    .end local v2    # "newStart":I
	//    .restart local v1    # "newStart":I
	goto label_goto_14;

}
// .method private fillBlock(IIIIZ)V
void android::icu::impl::IntTrieBuilder::fillBlock(int cVar1,int start,int limit,int value,bool overwrite)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "block"    # I
	//    .param p2, "start"    # I
	//    .param p3, "limit"    # I
	//    .param p4, "value"    # I
	//    .param p5, "overwrite"    # Z
	cVar0 = (limit +  cVar1);
	cVar1 = (cVar1 +  start);
	if ( !(overwrite) )  
		goto label_cond_e;
label_goto_4:
	cVar1 = cVar1;
	//    .end local p1    # "block":I
	//    .local v0, "block":I
	if ( cVar1 >= cVar0 )
		goto label_cond_1f;
	cVar1 = ( cVar1 + 0x1);
	//    .end local v0    # "block":I
	//    .restart local p1    # "block":I
	this->m_data_[cVar1] = value;
	goto label_goto_4;
	// 579    .line 787
label_cond_e:
label_goto_e:
	if ( cVar1 >= cVar0 )
		goto label_cond_20;
	if ( this->m_data_[cVar1] != this->m_initialValue_ )
		goto label_cond_1c;
	this->m_data_[cVar1] = value;
label_cond_1c:
	cVar1 = ( cVar1 + 0x1);
	goto label_goto_e;
	// 604    .end local p1    # "block":I
	// 605    .restart local v0    # "block":I
label_cond_1f:
	cVar1 = cVar1;
	//    .end local v0    # "block":I
	//    .restart local p1    # "block":I
label_cond_20:
	return;

}
// .method private static final findSameDataBlock([IIII)I
int android::icu::impl::IntTrieBuilder::findSameDataBlock(std::shared_ptr<int[]> data,int dataLength,int otherBlock,int step)
{
	
	int block;
	
	//    .param p0, "data"    # [I
	//    .param p1, "dataLength"    # I
	//    .param p2, "otherBlock"    # I
	//    .param p3, "step"    # I
	block = 0x0;
	//    .local v0, "block":I
label_goto_3:
	if ( block >  ( dataLength + -0x20) )
		goto label_cond_10;
	if ( !(android::icu::impl::IntTrieBuilder::equal_int(data, block, otherBlock, 0x20)) )  
		goto label_cond_e;
	return block;
	// 646    .line 653
label_cond_e:
	block = (block +  step);
	goto label_goto_3;
	// 652    .line 658
label_cond_10:
	return -0x1;

}
// .method private final fold(Landroid/icu/impl/TrieBuilder$DataManipulate;)V
void android::icu::impl::IntTrieBuilder::fold(std::shared_ptr<android::icu::impl::TrieBuilder_S_DataManipulate> manipulate)
{
	
	int cVar0;
	int cVar1;
	int cVar2;
	std::shared<std::vector<int[]>> leadIndexes;
	std::shared_ptr<int[]> index;
	int c;
	int indexLength;
	int block;
	int value;
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar4;
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar5;
	std::shared_ptr<java::lang::IllegalStateException> cVar3;
	
	//    .param p1, "manipulate"    # Landroid/icu/impl/TrieBuilder$DataManipulate;
	cVar0 = 0x800;
	cVar1 = 0x20;
	cVar2 = 0x0;
	leadIndexes = std::make_shared<std::vector<int[]>>(cVar1);
	//    .local v9, "leadIndexes":[I
	index = this->m_index_;
	//    .local v7, "index":[I
	java::lang::System::arraycopy(index, 0x6c0, leadIndexes, cVar2, cVar1);
	//    .local v1, "block":I
	if ( this->m_leadUnitValue_ != this->m_initialValue_ )
		goto label_cond_22;
label_goto_15:
	c = 0x6c0;
	//    .local v6, "c":I
label_goto_17:
	if ( c >= 0x6e0 )
		goto label_cond_3a;
	this->m_index_[c] = 0x0;
	c = ( c + 0x1);
	goto label_goto_17;
	// 714    .line 694
	// 715    .end local v6    # "c":I
label_cond_22:
	block = this->allocDataBlock();
	if ( block >= 0 )
		goto label_cond_31;
	cVar3 = std::make_shared<java::lang::IllegalStateException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Internal error: Out of memory space")));
	// throw
	throw cVar3;
	// 733    .line 699
label_cond_31:
	this->fillBlock(block, cVar2, cVar1, this->m_leadUnitValue_, 0x1);
	(0 - block);
	goto label_goto_15;
	// 748    .line 714
	// 749    .restart local v6    # "c":I
label_cond_3a:
	indexLength = 0x800;
	//    .local v8, "indexLength":I
	c = 0x10000;
label_goto_3e:
	if ( c >= 0x110000 )
		goto label_cond_82;
	if ( !(index[_shri(c,0x5)]) )  
		goto label_cond_7f;
	c = ( c & -0x400);
	block = android::icu::impl::IntTrieBuilder::findSameIndexBlock(index, indexLength, _shri(c,0x5));
	value = manipulate->getFoldedValue(c, ( block + 0x20));
	//    .local v10, "value":I
	if ( value == this->getValue(android::icu::text::UTF16::getLeadSurrogate(c)) )
		goto label_cond_7c;
	if ( this->setValue(android::icu::text::UTF16::getLeadSurrogate(c), value) )     
		goto label_cond_73;
	cVar4 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Data table overflow")));
	// throw
	throw cVar4;
	// 821    .line 736
label_cond_73:
	if ( block != indexLength )
		goto label_cond_7c;
	java::lang::System::arraycopy(index, _shri(c,0x5), index, indexLength, cVar1);
	indexLength = ( indexLength + 0x20);
label_cond_7c:
	c = ( c + 0x400);
	goto label_goto_3e;
	// 839    .line 747
	// 840    .end local v10    # "value":I
label_cond_7f:
	c = ( c + 0x20);
	goto label_goto_3e;
	// 846    .line 759
label_cond_82:
	if ( indexLength <  0x8800 )
		goto label_cond_90;
	cVar5 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Index table overflow")));
	// throw
	throw cVar5;
	// 861    .line 766
label_cond_90:
	java::lang::System::arraycopy(index, cVar0, index, 0x820, ( indexLength + -0x800));
	java::lang::System::arraycopy(leadIndexes, cVar2, index, cVar0, cVar1);
	indexLength = ( indexLength + 0x20);
	this->m_indexLength_ = indexLength;
	return;

}
// .method private getDataBlock(I)I
int android::icu::impl::IntTrieBuilder::getDataBlock(int ch)
{
	
	int cVar0;
	int indexValue;
	int newBlock;
	
	//    .param p1, "ch"    # I
	cVar0 = _shri(ch,0x5);
	indexValue = this->m_index_[cVar0];
	//    .local v0, "indexValue":I
	if ( indexValue <= 0 )
		goto label_cond_9;
	return indexValue;
	// 904    .line 532
label_cond_9:
	newBlock = this->allocDataBlock();
	//    .local v1, "newBlock":I
	if ( newBlock >= 0 )
		goto label_cond_11;
	return -0x1;
	// 919    .line 537
label_cond_11:
	this->m_index_[cVar0] = newBlock;
	java::lang::System::arraycopy(this->m_data_, java::lang::Math::abs(indexValue), this->m_data_, newBlock, 0x80);
	return newBlock;

}
// .method public getValue(I)I
int android::icu::impl::IntTrieBuilder::getValue(int ch)
{
	
	//    .param p1, "ch"    # I
	if ( this->m_isCompacted_ )     
		goto label_cond_a;
	if ( ch <= 0x10ffff )
		goto label_cond_b;
label_cond_a:
	return 0x0;
	// 966    .line 175
label_cond_b:
	if ( ch < 0 ) 
		goto label_cond_a;
	//    .local v0, "block":I
	return this->m_data_[(java::lang::Math::abs(this->m_index_[_shri(ch,0x5)]) +  ( ch & 0x1f))];

}
// .method public getValue(I[Z)I
int android::icu::impl::IntTrieBuilder::getValue(int ch,std::shared_ptr<bool[]> inBlockZero)
{
	
	bool cVar0;
	int cVar1;
	int block;
	
	//    .param p1, "ch"    # I
	//    .param p2, "inBlockZero"    # [Z
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( this->m_isCompacted_ )     
		goto label_cond_b;
	if ( ch <= 0x10ffff )
		goto label_cond_10;
label_cond_b:
	if ( !(inBlockZero) )  
		goto label_cond_f;
	inBlockZero[cVar1] = cVar0;
label_cond_f:
	return cVar1;
	// 1024    .line 193
label_cond_10:
	if ( ch < 0 ) 
		goto label_cond_b;
	block = this->m_index_[_shri(ch,0x5)];
	//    .local v0, "block":I
	if ( !(inBlockZero) )  
		goto label_cond_1e;
	if ( block )     
		goto label_cond_2a;
label_goto_1c:
	inBlockZero[cVar1] = cVar0;
label_cond_1e:
	return this->m_data_[(java::lang::Math::abs(block) +  ( ch & 0x1f))];
label_cond_2a:
	cVar0 = cVar1;
	goto label_goto_1c;

}
// .method public serialize(Ljava/io/OutputStream;ZLandroid/icu/impl/TrieBuilder$DataManipulate;)I
int android::icu::impl::IntTrieBuilder::serialize(std::shared_ptr<java::io::OutputStream> os,bool reduceTo16Bits,std::shared_ptr<android::icu::impl::TrieBuilder_S_DataManipulate> datamanipulate)
{
	
	bool cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	int length;
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar2;
	std::shared_ptr<java::io::DataOutputStream> dos;
	int options;
	int i;
	
	//    .param p1, "os"    # Ljava/io/OutputStream;
	//    .param p2, "reduceTo16Bits"    # Z
	//    .param p3, "datamanipulate"    # Landroid/icu/impl/TrieBuilder$DataManipulate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1074        value = {
	// 1075            Ljava/io/IOException;
	// 1076        }
	// 1077    .end annotation
	cVar0 = 0x1;
	if ( datamanipulate )     
		goto label_cond_c;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parameters can not be null")));
	// throw
	throw cVar1;
	// 1094    .line 305
label_cond_c:
	if ( this->m_isCompacted_ )     
		goto label_cond_1c;
	this->compact(0x0);
	this->fold(datamanipulate);
	this->compact(cVar0);
	this->m_isCompacted_ = cVar0;
label_cond_1c:
	if ( !(reduceTo16Bits) )  
		goto label_cond_31;
	length = (this->m_dataLength_ + this->m_indexLength_);
	//    .local v2, "length":I
label_goto_24:
	if ( length <  0x40000 )
		goto label_cond_34;
	cVar2 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Data length too small")));
	// throw
	throw cVar2;
	// 1141    .line 320
	// 1142    .end local v2    # "length":I
label_cond_31:
	length = this->m_dataLength_;
	//    .restart local v2    # "length":I
	goto label_goto_24;
	// 1149    .line 331
label_cond_34:
	length = ( ( this->m_indexLength_ * 0x2) + 0x10);
	if ( !(reduceTo16Bits) )  
		goto label_cond_44;
	length = (length +  ( this->m_dataLength_ * 0x2));
label_goto_41:
	if ( os )     
		goto label_cond_4a;
	return length;
	// 1174    .line 335
label_cond_44:
	length = (length +  ( this->m_dataLength_ * 0x4));
	goto label_goto_41;
	// 1184    .line 343
label_cond_4a:
	dos = std::make_shared<java::io::DataOutputStream>(os);
	//    .local v0, "dos":Ljava/io/DataOutputStream;
	dos->writeInt(0x54726965);
	//    .local v3, "options":I
	if ( reduceTo16Bits )     
		goto label_cond_5b;
	options = 0x125;
label_cond_5b:
	if ( !(this->m_isLatin1Linear_) )  
		goto label_cond_61;
label_cond_61:
	dos->writeInt(0x25);
	dos->writeInt(this->m_indexLength_);
	dos->writeInt(this->m_dataLength_);
	if ( !(reduceTo16Bits) )  
		goto label_cond_98;
	i = 0x0;
	//    .local v1, "i":I
label_goto_71:
	if ( i >= this->m_indexLength_ )
		goto label_cond_84;
	//    .local v4, "v":I
	dos->writeChar(_ushri((this->m_index_[i] +  this->m_indexLength_),0x2));
	i = ( i + 0x1);
	goto label_goto_71;
	// 1261    .line 367
	// 1262    .end local v4    # "v":I
label_cond_84:
	i = 0x0;
label_goto_85:
	if ( i >= this->m_dataLength_ )
		goto label_cond_b8;
	//    .restart local v4    # "v":I
	dos->writeChar((this->m_data_[i] & 0xffff));
	i = ( i + 0x1);
	goto label_goto_85;
	// 1289    .line 373
	// 1290    .end local v1    # "i":I
	// 1291    .end local v4    # "v":I
label_cond_98:
	i = 0x0;
	//    .restart local v1    # "i":I
label_goto_99:
	if ( i >= this->m_indexLength_ )
		goto label_cond_a9;
	//    .restart local v4    # "v":I
	dos->writeChar(_ushri(this->m_index_[i],0x2));
	i = ( i + 0x1);
	goto label_goto_99;
	// 1317    .line 379
	// 1318    .end local v4    # "v":I
label_cond_a9:
	i = 0x0;
label_goto_aa:
	if ( i >= this->m_dataLength_ )
		goto label_cond_b8;
	dos->writeInt(this->m_data_[i]);
	i = ( i + 0x1);
	goto label_goto_aa;
	// 1339    .line 384
label_cond_b8:
	return length;

}
// .method public serialize(Landroid/icu/impl/TrieBuilder$DataManipulate;Landroid/icu/impl/Trie$DataManipulate;)Landroid/icu/impl/IntTrie;
std::shared_ptr<android::icu::impl::IntTrie> android::icu::impl::IntTrieBuilder::serialize(std::shared_ptr<android::icu::impl::TrieBuilder_S_DataManipulate> datamanipulate,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> triedatamanipulate)
{
	
	bool cVar0;
	bool cVar1;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar2;
	std::shared_ptr<java::lang::ArrayIndexOutOfBoundsException> cVar3;
	std::shared<std::vector<char[]>> index;
	std::shared<std::vector<int[]>> data;
	int i;
	int options;
	std::shared_ptr<android::icu::impl::IntTrie> cVar4;
	
	//    .param p1, "datamanipulate"    # Landroid/icu/impl/TrieBuilder$DataManipulate;
	//    .param p2, "triedatamanipulate"    # Landroid/icu/impl/Trie$DataManipulate;
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( datamanipulate )     
		goto label_cond_d;
	cVar2 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Parameters can not be null")));
	// throw
	throw cVar2;
	// 1366    .line 245
label_cond_d:
	if ( this->m_isCompacted_ )     
		goto label_cond_1c;
	this->compact(cVar1);
	this->fold(datamanipulate);
	this->compact(cVar0);
	this->m_isCompacted_ = cVar0;
label_cond_1c:
	if ( this->m_dataLength_ <  0x40000 )
		goto label_cond_2b;
	cVar3 = std::make_shared<java::lang::ArrayIndexOutOfBoundsException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Data length too small")));
	// throw
	throw cVar3;
	// 1401    .line 259
label_cond_2b:
	index = std::make_shared<std::vector<char[]>>(this->m_indexLength_);
	//    .local v1, "index":[C
	data = std::make_shared<std::vector<int[]>>(this->m_dataLength_);
	//    .local v2, "data":[I
	i = 0x0;
	//    .local v6, "i":I
label_goto_34:
	if ( i >= this->m_indexLength_ )
		goto label_cond_44;
	index[i] = (char)(_ushri(this->m_index_[i],0x2));
	i = ( i + 0x1);
	goto label_goto_34;
	// 1439    .line 267
label_cond_44:
	java::lang::System::arraycopy(this->m_data_, cVar1, data, cVar1, this->m_dataLength_);
	0x25;
	//    .local v4, "options":I
	options = 0x125;
	if ( !(this->m_isLatin1Linear_) )  
		goto label_cond_55;
label_cond_55:
	cVar4 = std::make_shared<android::icu::impl::IntTrie>(index, data, this->m_initialValue_, options, triedatamanipulate);
	return cVar4;

}
// .method public setRange(IIIZ)Z
bool android::icu::impl::IntTrieBuilder::setRange(int cVar0,int limit,int value,bool overwrite)
{
	
	int block;
	int nextStart;
	int cVar0;
	int rest;
	int repeatBlock;
	
	//    .param p1, "start"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "value"    # I
	//    .param p4, "overwrite"    # Z
	if ( this->m_isCompacted_ )     
		goto label_cond_6;
	if ( cVar0 >= 0 )
		goto label_cond_8;
label_cond_6:
	return 0x0;
	// 1496    .line 410
label_cond_8:
	if ( cVar0 >  0x10ffff )
		goto label_cond_6;
	if ( limit < 0 ) 
		goto label_cond_6;
	if ( limit >  0x110000 )
		goto label_cond_6;
	if ( cVar0 >  limit )
		goto label_cond_6;
	if ( cVar0 != limit )
		goto label_cond_1f;
	return 0x1;
	// 1525    .line 419
label_cond_1f:
	if ( !(( cVar0 & 0x1f)) )  
		goto label_cond_40;
	block = this->getDataBlock(cVar0);
	//    .local v2, "block":I
	if ( block >= 0 )
		goto label_cond_2b;
	return 0x0;
	// 1545    .line 426
label_cond_2b:
	nextStart = ( ( cVar0 + 0x20) & -0x20);
	//    .local v11, "nextStart":I
	if ( nextStart >  limit )
		goto label_cond_68;
	this->fillBlock(block, ( cVar0 & 0x1f), 0x20, value, overwrite);
	cVar0 = nextStart;
	//    .end local v2    # "block":I
	//    .end local v11    # "nextStart":I
label_cond_40:
	rest = ( limit & 0x1f);
	//    .local v13, "rest":I
	//    .local v4, "repeatBlock":I
	if ( value != this->m_initialValue_ )
		goto label_cond_76;
	repeatBlock = 0x0;
	//    .end local v4    # "repeatBlock":I
	//    .local v12, "repeatBlock":I
label_goto_4c:
	if ( cVar0 >= ( limit & -0x20) )
		goto label_cond_ad;
	block = this->m_index_[_shri(cVar0,0x5)];
	//    .restart local v2    # "block":I
	if ( block <= 0 )
		goto label_cond_79;
	this->fillBlock(block, 0x0, 0x20, value, overwrite);
	//    .end local v12    # "repeatBlock":I
	//    .restart local v4    # "repeatBlock":I
label_goto_64:
	cVar0 = ( cVar0 + 0x20);
	repeatBlock = repeatBlock;
	//    .end local v4    # "repeatBlock":I
	//    .restart local v12    # "repeatBlock":I
	goto label_goto_4c;
	// 1642    .line 433
	// 1643    .end local v12    # "repeatBlock":I
	// 1644    .end local v13    # "rest":I
	// 1645    .restart local v11    # "nextStart":I
label_cond_68:
	this->fillBlock(block, ( cVar0 & 0x1f), ( limit & 0x1f), value, overwrite);
	return 0x1;
	// 1664    .line 451
	// 1665    .end local v2    # "block":I
	// 1666    .end local v11    # "nextStart":I
	// 1667    .restart local v4    # "repeatBlock":I
	// 1668    .restart local v13    # "rest":I
label_cond_76:
	-0x1;
	//    .end local v4    # "repeatBlock":I
	//    .restart local v12    # "repeatBlock":I
	goto label_goto_4c;
	// 1678    .line 460
	// 1679    .restart local v2    # "block":I
label_cond_79:
	if ( this->m_data_[(0 - block)] == value )
		goto label_cond_91;
	if ( !(block) )  
		goto label_cond_86;
	if ( !(overwrite) )  
		goto label_cond_c4;
label_cond_86:
	if ( repeatBlock < 0 ) 
		goto label_cond_93;
	this->m_index_[_shri(cVar0,0x5)] = (0 - repeatBlock);
	//    .end local v12    # "repeatBlock":I
	//    .restart local v4    # "repeatBlock":I
	goto label_goto_64;
	// 1714    .end local v4    # "repeatBlock":I
	// 1715    .restart local v12    # "repeatBlock":I
label_cond_91:
	//    .end local v12    # "repeatBlock":I
	//    .restart local v4    # "repeatBlock":I
	goto label_goto_64;
	// 1724    .line 468
	// 1725    .end local v4    # "repeatBlock":I
	// 1726    .restart local v12    # "repeatBlock":I
label_cond_93:
	repeatBlock = this->getDataBlock(cVar0);
	//    .end local v12    # "repeatBlock":I
	//    .restart local v4    # "repeatBlock":I
	if ( repeatBlock >= 0 )
		goto label_cond_9b;
	return 0x0;
	// 1742    .line 475
label_cond_9b:
	this->m_index_[_shri(cVar0,0x5)] = (0 - repeatBlock);
	this->fillBlock(repeatBlock, 0x0, 0x20, value, 0x1);
	goto label_goto_64;
	// 1767    .line 483
	// 1768    .end local v2    # "block":I
	// 1769    .end local v4    # "repeatBlock":I
	// 1770    .restart local v12    # "repeatBlock":I
label_cond_ad:
	if ( rest <= 0 )
		goto label_cond_c2;
	block = this->getDataBlock(cVar0);
	//    .restart local v2    # "block":I
	if ( block >= 0 )
		goto label_cond_b7;
	return 0x0;
	// 1788    .line 489
label_cond_b7:
	this->fillBlock(block, 0x0, rest, value, overwrite);
	//    .end local v2    # "block":I
label_cond_c2:
	return 0x1;
	// 1811    .restart local v2    # "block":I
label_cond_c4:
	//    .end local v12    # "repeatBlock":I
	//    .restart local v4    # "repeatBlock":I
	goto label_goto_64;

}
// .method public setValue(II)Z
bool android::icu::impl::IntTrieBuilder::setValue(int ch,int value)
{
	
	bool cVar0;
	int block;
	
	//    .param p1, "ch"    # I
	//    .param p2, "value"    # I
	cVar0 = 0x0;
	if ( this->m_isCompacted_ )     
		goto label_cond_a;
	if ( ch <= 0x10ffff )
		goto label_cond_b;
label_cond_a:
	return cVar0;
	// 1841    .line 218
label_cond_b:
	if ( ch < 0 ) 
		goto label_cond_a;
	block = this->getDataBlock(ch);
	//    .local v0, "block":I
	if ( block >= 0 )
		goto label_cond_14;
	return cVar0;
	// 1857    .line 227
label_cond_14:
	this->m_data_[(( ch & 0x1f) +  block)] = value;
	return 0x1;

}


