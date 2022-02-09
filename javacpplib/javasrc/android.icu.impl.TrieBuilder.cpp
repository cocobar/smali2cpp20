// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\TrieBuilder.smali
#include "java2ctype.h"
#include "android.icu.impl.TrieBuilder.h"
#include "java.lang.Math.h"
#include "java.lang.System.h"
#include "java.util.Arrays.h"

static android::icu::impl::TrieBuilder::BMP_INDEX_LENGTH_ = 0x800;
static android::icu::impl::TrieBuilder::DATA_BLOCK_LENGTH = 0x20;
static android::icu::impl::TrieBuilder::DATA_GRANULARITY_ = 0x4;
static android::icu::impl::TrieBuilder::INDEX_SHIFT_ = 0x2;
static android::icu::impl::TrieBuilder::MASK_ = 0x1f;
static android::icu::impl::TrieBuilder::MAX_BUILD_TIME_DATA_LENGTH_ = 0x110420;
static android::icu::impl::TrieBuilder::MAX_DATA_LENGTH_ = 0x40000;
static android::icu::impl::TrieBuilder::MAX_INDEX_LENGTH_ = 0x8800;
static android::icu::impl::TrieBuilder::OPTIONS_DATA_IS_32_BIT_ = 0x100;
static android::icu::impl::TrieBuilder::OPTIONS_INDEX_SHIFT_ = 0x4;
static android::icu::impl::TrieBuilder::OPTIONS_LATIN1_IS_LINEAR_ = 0x200;
static android::icu::impl::TrieBuilder::SHIFT_ = 0x5;
static android::icu::impl::TrieBuilder::SURROGATE_BLOCK_COUNT_ = 0x20;
// .method protected constructor <init>()V
android::icu::impl::TrieBuilder::TrieBuilder()
{
	
	int cVar0;
	bool cVar1;
	
	cVar0 = 0x8800;
	cVar1 = 0x0;
	// 068    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->m_index_ = std::make_shared<std::vector<int[]>>(cVar0);
	this->m_map_ = std::make_shared<std::vector<int[]>>(0x8821);
	this->m_isLatin1Linear_ = cVar1;
	this->m_isCompacted_ = cVar1;
	this->m_indexLength_ = cVar0;
	return;

}
// .method protected constructor <init>(Landroid/icu/impl/TrieBuilder;)V
android::icu::impl::TrieBuilder::TrieBuilder(std::shared_ptr<android::icu::impl::TrieBuilder> table)
{
	
	int cVar0;
	
	//    .param p1, "table"    # Landroid/icu/impl/TrieBuilder;
	cVar0 = 0x0;
	// 103    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->m_index_ = std::make_shared<std::vector<int[]>>(0x8800);
	this->m_indexLength_ = table->m_indexLength_;
	java::lang::System::arraycopy(table->m_index_, cVar0, this->m_index_, cVar0, this->m_indexLength_);
	this->m_dataCapacity_ = table->m_dataCapacity_;
	this->m_dataLength_ = table->m_dataLength_;
	this->m_map_ = std::make_shared<std::vector<int[]>>(table->m_map_->size());
	java::lang::System::arraycopy(table->m_map_, cVar0, this->m_map_, cVar0, this->m_map_->size());
	this->m_isLatin1Linear_ = table->m_isLatin1Linear_;
	this->m_isCompacted_ = table->m_isCompacted_;
	return;

}
// .method protected static final equal_int([IIII)Z
bool android::icu::impl::TrieBuilder::equal_int(std::shared_ptr<int[]> array,int start1,int start2,int length)
{
	
	bool cVar4;
	int start1;
	int start2;
	int length;
	
	//    .param p0, "array"    # [I
	//    .param p1, "start1"    # I
	//    .param p2, "start2"    # I
	//    .param p3, "length"    # I
	cVar4 = 0x0;
label_goto_1:
	if ( length <= 0 )
		goto label_cond_10;
	if ( array[start1] != array[start2] )
		goto label_cond_10;
	start1 = ( start1 + 0x1);
	start2 = ( start2 + 0x1);
	length = ( length + -0x1);
	goto label_goto_1;
	// 201    .line 211
label_cond_10:
	if ( length )     
		goto label_cond_13;
	cVar4 = 0x1;
label_cond_13:
	return cVar4;

}
// .method protected static final findSameIndexBlock([III)I
int android::icu::impl::TrieBuilder::findSameIndexBlock(std::shared_ptr<int[]> index,int indexLength,int otherBlock)
{
	
	int block;
	
	//    .param p0, "index"    # [I
	//    .param p1, "indexLength"    # I
	//    .param p2, "otherBlock"    # I
	block = 0x800;
	//    .local v0, "block":I
label_goto_2:
	if ( block >= indexLength )
		goto label_cond_10;
	if ( !(android::icu::impl::TrieBuilder::equal_int(index, block, otherBlock, 0x20)) )  
		goto label_cond_d;
	return block;
	// 237    .line 247
label_cond_d:
	block = ( block + 0x20);
	goto label_goto_2;
	// 243    .line 252
label_cond_10:
	return indexLength;

}
// .method protected findUnusedBlocks()V
void android::icu::impl::TrieBuilder::findUnusedBlocks()
{
	
	int cVar0;
	int i;
	
	cVar0 = 0x0;
	java::util::Arrays::fill(this->m_map_, 0xff);
	i = 0x0;
	//    .local v0, "i":I
label_goto_9:
	if ( i >= this->m_indexLength_ )
		goto label_cond_1e;
	this->m_map_[_shri(java::lang::Math::abs(this->m_index_[i]),0x5)] = cVar0;
	i = ( i + 0x1);
	goto label_goto_9;
	// 292    .line 233
label_cond_1e:
	this->m_map_[cVar0] = cVar0;
	return;

}
// .method public isInZeroBlock(I)Z
bool android::icu::impl::TrieBuilder::isInZeroBlock(int ch)
{
	
	bool cVar0;
	
	//    .param p1, "ch"    # I
	cVar0 = 0x1;
	if ( this->m_isCompacted_ )     
		goto label_cond_b;
	if ( ch <= 0x10ffff )
		goto label_cond_c;
label_cond_b:
	return cVar0;
	// 324    .line 89
label_cond_c:
	if ( ch < 0 ) 
		goto label_cond_b;
	if ( this->m_index_[_shri(ch,0x5)] )     
		goto label_cond_17;
label_goto_16:
	return cVar0;
label_cond_17:
	cVar0 = 0x0;
	goto label_goto_16;

}


