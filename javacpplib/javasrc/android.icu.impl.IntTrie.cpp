// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\IntTrie.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.IntTrie.h"
#include "android.icu.impl.Trie_S_DataManipulate.h"
#include "android.icu.impl.Trie.h"
#include "android.icu.text.UTF16.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Arrays.h"

static android::icu::impl::IntTrie::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::IntTrie::static_cinit()
{
	
	android::icu::impl::IntTrie::_assertionsDisabled = ( android::icu::impl::IntTrie()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(IILandroid/icu/impl/Trie$DataManipulate;)V
android::icu::impl::IntTrie::IntTrie(int initialValue,int leadUnitValue,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> dataManipulate)
{
	
	int dataLength;
	int i;
	
	//    .param p1, "initialValue"    # I
	//    .param p2, "leadUnitValue"    # I
	//    .param p3, "dataManipulate"    # Landroid/icu/impl/Trie$DataManipulate;
	android::icu::impl::Trie::(std::make_shared<std::vector<char[]>>(0x820), 0x200, dataManipulate);
	0x100;
	//    .local v3, "latin1Length":I
	dataLength = 0x100;
	//    .local v1, "dataLength":I
	if ( leadUnitValue == initialValue )
		goto label_cond_11;
	dataLength = 0x120;
label_cond_11:
	this->m_data_ = std::make_shared<std::vector<int[]>>(dataLength);
	this->m_dataLength_ = dataLength;
	this->m_initialValue_ = initialValue;
	i = 0x0;
	//    .local v2, "i":I
label_goto_1a:
	if ( i >= 0x100 )
		goto label_cond_25;
	this->m_data_[i] = initialValue;
	i = ( i + 0x1);
	goto label_goto_1a;
	// 097    .line 93
label_cond_25:
	if ( leadUnitValue == initialValue )
		goto label_cond_46;
	//    .local v0, "block":C
	i = 0x6c0;
	0x6e0;
	//    .local v4, "limit":I
label_goto_2e:
	if ( i >= 0x6e0 )
		goto label_cond_39;
	this->m_index_[i] = (char)(0x40);
	i = ( i + 0x1);
	goto label_goto_2e;
	// 130    .line 103
label_cond_39:
	i = 0x100;
label_goto_3d:
	if ( i >= 0x120 )
		goto label_cond_46;
	this->m_data_[i] = leadUnitValue;
	i = ( i + 0x1);
	goto label_goto_3d;
	// 151    .line 108
	// 152    .end local v0    # "block":C
	// 153    .end local v4    # "limit":I
label_cond_46:
	return;

}
// .method public constructor <init>(Ljava/nio/ByteBuffer;Landroid/icu/impl/Trie$DataManipulate;)V
android::icu::impl::IntTrie::IntTrie(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> dataManipulate)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p2, "dataManipulate"    # Landroid/icu/impl/Trie$DataManipulate;
	//    .annotation system Ldalvik/annotation/Throws;
	// 163        value = {
	// 164            Ljava/io/IOException;
	// 165        }
	// 166    .end annotation
	android::icu::impl::Trie::(bytes, dataManipulate);
	if ( this->isIntTrie() )     
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Data given does not belong to a int trie.")));
	// throw
	throw cVar0;
	// 190    .line 49
label_cond_12:
	return;

}
// .method constructor <init>([C[IIILandroid/icu/impl/Trie$DataManipulate;)V
android::icu::impl::IntTrie::IntTrie(std::shared_ptr<char[]> index,std::shared_ptr<int[]> data,int initialvalue,int options,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> datamanipulate)
{
	
	//    .param p1, "index"    # [C
	//    .param p2, "data"    # [I
	//    .param p3, "initialvalue"    # I
	//    .param p4, "options"    # I
	//    .param p5, "datamanipulate"    # Landroid/icu/impl/Trie$DataManipulate;
	android::icu::impl::Trie::(index, options, datamanipulate);
	this->m_data_ = data;
	this->m_dataLength_ = this->m_data_->size();
	this->m_initialValue_ = initialvalue;
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::IntTrie::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<android::icu::impl::IntTrie> othertrie;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x0;
	//    .local v1, "result":Z
	if ( !(this->equals(other)) )  
		goto label_cond_23;
	if ( !(other->instanceOf("android::icu::impl::IntTrie")) )  
		goto label_cond_23;
	othertrie = other;
	othertrie->checkCast("android::icu::impl::IntTrie");
	//    .local v0, "othertrie":Landroid/icu/impl/IntTrie;
	if ( this->m_initialValue_ != othertrie->m_initialValue_ )
		goto label_cond_20;
	if ( !(( java::util::Arrays::equals(this->m_data_, othertrie->m_data_) ^ 0x1)) )  
		goto label_cond_21;
label_cond_20:
	return cVar0;
	// 277    .line 236
label_cond_21:
	return 0x1;
	// 283    .line 238
	// 284    .end local v0    # "othertrie":Landroid/icu/impl/IntTrie;
label_cond_23:
	return cVar0;

}
// .method public final getBMPValue(C)I
int android::icu::impl::IntTrie::getBMPValue(char ch)
{
	
	//    .param p1, "ch"    # C
	return this->m_data_[this->getBMPOffset(ch)];

}
// .method public final getCodePointValue(I)I
int android::icu::impl::IntTrie::getCodePointValue(int ch)
{
	
	int offset;
	int cVar0;
	
	//    .param p1, "ch"    # I
	if ( ch < 0 ) 
		goto label_cond_18;
	if ( ch >= 0xd800 )
		goto label_cond_18;
	//    .local v0, "offset":I
	return this->m_data_[(( this->m_index_[_shri(ch,0x5)] << 0x2) + ( ch & 0x1f))];
	// 341    .line 132
	// 342    .end local v0    # "offset":I
label_cond_18:
	offset = this->getCodePointOffset(ch);
	//    .restart local v0    # "offset":I
	if ( offset < 0 ) 
		goto label_cond_23;
	cVar0 = this->m_data_[offset];
label_goto_22:
	return cVar0;
label_cond_23:
	cVar0 = this->m_initialValue_;
	goto label_goto_22;

}
// .method protected final getInitialValue()I
int android::icu::impl::IntTrie::getInitialValue()
{
	
	return this->m_initialValue_;

}
// .method public final getLatin1LinearValue(C)I
int android::icu::impl::IntTrie::getLatin1LinearValue(char ch)
{
	
	//    .param p1, "ch"    # C
	return this->m_data_[( ch + 0x20)];

}
// .method public final getLeadValue(C)I
int android::icu::impl::IntTrie::getLeadValue(char ch)
{
	
	//    .param p1, "ch"    # C
	return this->m_data_[this->getLeadOffset(ch)];

}
// .method protected final getSurrogateOffset(CC)I
int android::icu::impl::IntTrie::getSurrogateOffset(char lead,char trail)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	int offset;
	
	//    .param p1, "lead"    # C
	//    .param p2, "trail"    # C
	if ( this->m_dataManipulate_ )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The field DataManipulate in this Trie is null")));
	// throw
	throw cVar0;
	// 429    .line 278
label_cond_d:
	offset = this->m_dataManipulate_->getFoldingOffset(this->getLeadValue(lead));
	//    .local v0, "offset":I
	if ( offset <= 0 )
		goto label_cond_21;
	return this->getRawOffset(offset, (char)(( trail & 0x3ff)));
	// 456    .line 287
label_cond_21:
	return -0x1;

}
// .method public final getSurrogateValue(CC)I
int android::icu::impl::IntTrie::getSurrogateValue(char lead,char trail)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	int offset;
	
	//    .param p1, "lead"    # C
	//    .param p2, "trail"    # C
	if ( !(android::icu::text::UTF16::isLeadSurrogate(lead)) )  
		goto label_cond_e;
	if ( !(( android::icu::text::UTF16::isTrailSurrogate(trail) ^ 0x1)) )  
		goto label_cond_17;
label_cond_e:
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Argument characters do not form a supplementary character")));
	// throw
	throw cVar0;
	// 496    .line 174
label_cond_17:
	offset = this->getSurrogateOffset(lead, trail);
	//    .local v0, "offset":I
	if ( offset <= 0 )
		goto label_cond_22;
	return this->m_data_[offset];
	// 513    .line 182
label_cond_22:
	return this->m_initialValue_;

}
// .method public final getTrailValue(IC)I
int android::icu::impl::IntTrie::getTrailValue(int leadvalue,char trail)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	int offset;
	
	//    .param p1, "leadvalue"    # I
	//    .param p2, "trail"    # C
	if ( this->m_dataManipulate_ )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("The field DataManipulate in this Trie is null")));
	// throw
	throw cVar0;
	// 542    .line 199
label_cond_d:
	offset = this->m_dataManipulate_->getFoldingOffset(leadvalue);
	//    .local v0, "offset":I
	if ( offset <= 0 )
		goto label_cond_21;
	return this->m_data_[this->getRawOffset(offset, (char)(( trail & 0x3ff)))];
	// 571    .line 204
label_cond_21:
	return this->m_initialValue_;

}
// .method protected final getValue(I)I
int android::icu::impl::IntTrie::getValue(int index)
{
	
	//    .param p1, "index"    # I
	return this->m_data_[index];

}
// .method public hashCode()I
int android::icu::impl::IntTrie::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( android::icu::impl::IntTrie::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 608    .line 244
label_cond_d:
	return 0x2a;

}
// .method protected final unserialize(Ljava/nio/ByteBuffer;)V
void android::icu::impl::IntTrie::unserialize(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	int cVar0;
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	cVar0 = 0x0;
	this->unserialize(bytes);
	this->m_data_ = android::icu::impl::ICUBinary::getInts(bytes, this->m_dataLength_, cVar0);
	this->m_initialValue_ = this->m_data_[cVar0];
	return;

}


