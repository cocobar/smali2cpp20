// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.Trie_S_DataManipulate.h"
#include "android.icu.impl.Trie_S_DefaultGetFoldingOffset.h"
#include "android.icu.impl.Trie.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Arrays.h"

static android::icu::impl::Trie::_assertionsDisabled;
static android::icu::impl::Trie::BMP_INDEX_LENGTH = 0x800;
static android::icu::impl::Trie::DATA_BLOCK_LENGTH = 0x20;
static android::icu::impl::Trie::HEADER_LENGTH_ = 0x10;
static android::icu::impl::Trie::HEADER_OPTIONS_DATA_IS_32_BIT_ = 0x100;
static android::icu::impl::Trie::HEADER_OPTIONS_INDEX_SHIFT_ = 0x4;
static android::icu::impl::Trie::HEADER_OPTIONS_LATIN1_IS_LINEAR_MASK_ = 0x200;
static android::icu::impl::Trie::HEADER_OPTIONS_SHIFT_MASK_ = 0xf;
static android::icu::impl::Trie::HEADER_SIGNATURE_ = 0x54726965;
static android::icu::impl::Trie::INDEX_STAGE_1_SHIFT_ = 0x5;
static android::icu::impl::Trie::INDEX_STAGE_2_SHIFT_ = 0x2;
static android::icu::impl::Trie::INDEX_STAGE_3_MASK_ = 0x1f;
static android::icu::impl::Trie::LEAD_INDEX_OFFSET_ = 0x140;
static android::icu::impl::Trie::SURROGATE_BLOCK_BITS = 0x5;
static android::icu::impl::Trie::SURROGATE_BLOCK_COUNT = 0x20;
static android::icu::impl::Trie::SURROGATE_MASK_ = 0x3ff;
// .method static constructor <clinit>()V
void android::icu::impl::Trie::static_cinit()
{
	
	android::icu::impl::Trie::_assertionsDisabled = ( android::icu::impl::Trie()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method protected constructor <init>(Ljava/nio/ByteBuffer;Landroid/icu/impl/Trie$DataManipulate;)V
android::icu::impl::Trie::Trie(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> dataManipulate)
{
	
	bool cVar2;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<android::icu::impl::Trie_S_DefaultGetFoldingOffset> cVar3;
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p2, "dataManipulate"    # Landroid/icu/impl/Trie$DataManipulate;
	cVar2 = 0x0;
	// 093    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	//    .local v0, "signature":I
	this->m_options_ = bytes->getInt();
	if ( this->checkHeader(bytes->getInt()) )     
		goto label_cond_1e;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("ICU data file error: Trie header authentication failed, please check if you have the most updated ICU data file")));
	// throw
	throw cVar1;
	// 124    .line 160
label_cond_1e:
	if ( !(dataManipulate) )  
		goto label_cond_3b;
	this->m_dataManipulate_ = dataManipulate;
label_goto_22:
	if ( !(( this->m_options_ & 0x200)) )  
		goto label_cond_29;
	cVar2 = 0x1;
label_cond_29:
	this->m_isLatin1Linear_ = cVar2;
	this->m_dataOffset_ = bytes->getInt();
	this->m_dataLength_ = bytes->getInt();
	this->unserialize(bytes);
	return;
	// 164    .line 163
label_cond_3b:
	cVar3 = std::make_shared<android::icu::impl::Trie_S_DefaultGetFoldingOffset>(0x0);
	this->m_dataManipulate_ = cVar3;
	goto label_goto_22;

}
// .method protected constructor <init>([CILandroid/icu/impl/Trie$DataManipulate;)V
android::icu::impl::Trie::Trie(std::shared_ptr<char[]> index,int options,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> dataManipulate)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::impl::Trie_S_DefaultGetFoldingOffset> cVar2;
	
	//    .param p1, "index"    # [C
	//    .param p2, "options"    # I
	//    .param p3, "dataManipulate"    # Landroid/icu/impl/Trie$DataManipulate;
	cVar1 = 0x0;
	// 187    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->m_options_ = options;
	if ( !(dataManipulate) )  
		goto label_cond_1c;
	this->m_dataManipulate_ = dataManipulate;
label_goto_b:
	if ( !(( this->m_options_ & 0x200)) )  
		goto label_cond_12;
	cVar1 = 0x1;
label_cond_12:
	this->m_isLatin1Linear_ = cVar1;
	this->m_index_ = index;
	this->m_dataOffset_ = this->m_index_->size();
	return;
	// 224    .line 185
label_cond_1c:
	cVar2 = std::make_shared<android::icu::impl::Trie_S_DefaultGetFoldingOffset>(0x0);
	this->m_dataManipulate_ = cVar2;
	goto label_goto_b;

}
// .method private final checkHeader(I)Z
bool android::icu::impl::Trie::checkHeader(int signature)
{
	
	bool cVar0;
	
	//    .param p1, "signature"    # I
	cVar0 = 0x0;
	if ( signature == 0x54726965 )
		goto label_cond_7;
	return cVar0;
	// 250    .line 450
label_cond_7:
	if ( ( this->m_options_ & 0xf) != 0x5 )
		goto label_cond_17;
	if ( ( _shri(this->m_options_,0x4) & 0xf) == 0x2 )
		goto label_cond_18;
label_cond_17:
	return cVar0;
	// 279    .line 457
label_cond_18:
	return 0x1;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::Trie::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::impl::Trie> othertrie;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( other != this )
		goto label_cond_5;
	return 0x1;
	// 303    .line 105
label_cond_5:
	if ( other->instanceOf("android::icu::impl::Trie") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	othertrie = other;
	othertrie->checkCast("android::icu::impl::Trie");
	//    .local v0, "othertrie":Landroid/icu/impl/Trie;
	if ( this->m_isLatin1Linear_ != othertrie->m_isLatin1Linear_ )
		goto label_cond_27;
	if ( this->m_options_ != othertrie->m_options_ )
		goto label_cond_27;
	if ( this->m_dataLength_ != othertrie->m_dataLength_ )
		goto label_cond_27;
	cVar1 = java::util::Arrays::equals(this->m_index_, othertrie->m_index_);
label_cond_27:
	return cVar1;

}
// .method protected final getBMPOffset(C)I
int android::icu::impl::Trie::getBMPOffset(char ch)
{
	
	int cVar0;
	
	//    .param p1, "ch"    # C
	if ( ch <  0xd800 )
		goto label_cond_11;
	if ( ch >  0xdbff )
		goto label_cond_11;
	cVar0 = this->getRawOffset(0x140, ch);
label_goto_10:
	return cVar0;
	// 380    .line 315
label_cond_11:
	cVar0 = this->getRawOffset(0x0, ch);
	goto label_goto_10;

}
// .method protected final getCodePointOffset(I)I
int android::icu::impl::Trie::getCodePointOffset(int ch)
{
	
	int cVar0;
	
	//    .param p1, "ch"    # I
	cVar0 = -0x1;
	if ( ch >= 0 )
		goto label_cond_5;
	return cVar0;
	// 406    .line 345
label_cond_5:
	if ( ch >= 0xd800 )
		goto label_cond_10;
	return this->getRawOffset(0x0, (char)(ch));
	// 421    .line 348
label_cond_10:
	if ( ch >= 0x10000 )
		goto label_cond_1a;
	return this->getBMPOffset((char)(ch));
	// 436    .line 351
label_cond_1a:
	if ( ch >  0x10ffff )
		goto label_cond_2b;
	return this->getSurrogateOffset(android::icu::text::UTF16::getLeadSurrogate(ch), (char)(( ch & 0x3ff)));
	// 459    .line 358
label_cond_2b:
	return cVar0;

}
// .method protected final getLeadOffset(C)I
int android::icu::impl::Trie::getLeadOffset(char ch)
{
	
	//    .param p1, "ch"    # C
	return this->getRawOffset(0x0, ch);

}
// .method protected final getRawOffset(IC)I
int android::icu::impl::Trie::getRawOffset(int offset,char ch)
{
	
	//    .param p1, "offset"    # I
	//    .param p2, "ch"    # C
	return (( this->m_index_[(_shri(ch,0x5) +  offset)] << 0x2) +  ( ch & 0x1f));

}
// .method public getSerializedDataSize()I
int android::icu::impl::Trie::getSerializedDataSize()
{
	
	int result;
	
	result = 0x10;
	//    .local v0, "result":I
	result = ( ( this->m_dataOffset_ << 0x1) + 0x10);
	if ( !(this->isCharTrie()) )  
		goto label_cond_14;
	result = (result +  ( this->m_dataLength_ << 0x1));
label_cond_13:
label_goto_13:
	return result;
	// 542    .line 136
label_cond_14:
	if ( !(this->isIntTrie()) )  
		goto label_cond_13;
	result = (result +  ( this->m_dataLength_ << 0x2));
	goto label_goto_13;

}
// .method public hashCode()I
int android::icu::impl::Trie::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( android::icu::impl::Trie::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 583    .line 118
label_cond_d:
	return 0x2a;

}
// .method protected final isCharTrie()Z
bool android::icu::impl::Trie::isCharTrie()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( ( this->m_options_ & 0x100) )     
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method protected final isIntTrie()Z
bool android::icu::impl::Trie::isIntTrie()
{
	
	bool cVar1;
	
	cVar1 = 0x0;
	if ( !(( this->m_options_ & 0x100)) )  
		goto label_cond_8;
	cVar1 = 0x1;
label_cond_8:
	return cVar1;

}
// .method public final isLatin1Linear()Z
bool android::icu::impl::Trie::isLatin1Linear()
{
	
	return this->m_isLatin1Linear_;

}
// .method protected unserialize(Ljava/nio/ByteBuffer;)V
void android::icu::impl::Trie::unserialize(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	this->m_index_ = android::icu::impl::ICUBinary::getChars(bytes, this->m_dataOffset_, 0x0);
	return;

}


