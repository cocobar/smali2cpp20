// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\CharTrie.smali
#include "java2ctype.h"
#include "android.icu.impl.CharTrie.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.Trie_S_DataManipulate.h"
#include "android.icu.impl.Trie.h"
#include "java.lang.AssertionError.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.nio.ByteBuffer.h"

static android::icu::impl::CharTrie::_assertionsDisabled;
// .method static constructor <clinit>()V
void android::icu::impl::CharTrie::static_cinit()
{
	
	android::icu::impl::CharTrie::_assertionsDisabled = ( android::icu::impl::CharTrie()->desiredAssertionStatus() ^ 0x1);
	return;

}
// .method public constructor <init>(IILandroid/icu/impl/Trie$DataManipulate;)V
android::icu::impl::CharTrie::CharTrie(int initialValue,int leadUnitValue,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> dataManipulate)
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
	this->m_data_ = std::make_shared<std::vector<char[]>>(dataLength);
	this->m_dataLength_ = dataLength;
	this->m_initialValue_ = (char)(initialValue);
	i = 0x0;
	//    .local v2, "i":I
label_goto_1b:
	if ( i >= 0x100 )
		goto label_cond_27;
	this->m_data_[i] = (char)(initialValue);
	i = ( i + 0x1);
	goto label_goto_1b;
	// 101    .line 89
label_cond_27:
	if ( leadUnitValue == initialValue )
		goto label_cond_49;
	//    .local v0, "block":C
	i = 0x6c0;
	0x6e0;
	//    .local v4, "limit":I
label_goto_30:
	if ( i >= 0x6e0 )
		goto label_cond_3b;
	this->m_index_[i] = (char)(0x40);
	i = ( i + 0x1);
	goto label_goto_30;
	// 134    .line 99
label_cond_3b:
	i = 0x100;
label_goto_3f:
	if ( i >= 0x120 )
		goto label_cond_49;
	this->m_data_[i] = (char)(leadUnitValue);
	i = ( i + 0x1);
	goto label_goto_3f;
	// 157    .line 104
	// 158    .end local v0    # "block":C
	// 159    .end local v4    # "limit":I
label_cond_49:
	return;

}
// .method public constructor <init>(Ljava/nio/ByteBuffer;Landroid/icu/impl/Trie$DataManipulate;)V
android::icu::impl::CharTrie::CharTrie(std::shared_ptr<java::nio::ByteBuffer> bytes,std::shared_ptr<android::icu::impl::Trie_S_DataManipulate> dataManipulate)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .param p2, "dataManipulate"    # Landroid/icu/impl/Trie$DataManipulate;
	android::icu::impl::Trie::(bytes, dataManipulate);
	if ( this->isCharTrie() )     
		goto label_cond_12;
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Data given does not belong to a char trie.")));
	// throw
	throw cVar0;
	// 191    .line 45
label_cond_12:
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool android::icu::impl::CharTrie::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar1;
	std::shared_ptr<android::icu::impl::CharTrie> othertrie;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar1 = 0x0;
	//    .local v1, "result":Z
	if ( !(this->equals(other)) )  
		goto label_cond_16;
	if ( !(other->instanceOf("android::icu::impl::CharTrie")) )  
		goto label_cond_16;
	othertrie = other;
	othertrie->checkCast("android::icu::impl::CharTrie");
	//    .local v0, "othertrie":Landroid/icu/impl/CharTrie;
	if ( this->m_initialValue_ != othertrie->m_initialValue_ )
		goto label_cond_15;
	cVar1 = 0x1;
label_cond_15:
	return cVar1;
	// 236    .line 225
	// 237    .end local v0    # "othertrie":Landroid/icu/impl/CharTrie;
label_cond_16:
	return cVar1;

}
// .method public final getBMPValue(C)C
char android::icu::impl::CharTrie::getBMPValue(char ch)
{
	
	//    .param p1, "ch"    # C
	return this->m_data_[this->getBMPOffset(ch)];

}
// .method public final getCodePointValue(I)C
char android::icu::impl::CharTrie::getCodePointValue(int ch)
{
	
	int offset;
	char cVar0;
	
	//    .param p1, "ch"    # I
	if ( ch < 0 ) 
		goto label_cond_18;
	if ( ch >= 0xd800 )
		goto label_cond_18;
	//    .local v0, "offset":I
	return this->m_data_[(( this->m_index_[_shri(ch,0x5)] << 0x2) + ( ch & 0x1f))];
	// 294    .line 128
	// 295    .end local v0    # "offset":I
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
int android::icu::impl::CharTrie::getInitialValue()
{
	
	return this->m_initialValue_;

}
// .method public final getLatin1LinearValue(C)C
char android::icu::impl::CharTrie::getLatin1LinearValue(char ch)
{
	
	//    .param p1, "ch"    # C
	return this->m_data_[(( this->m_dataOffset_ + 0x20) +  ch)];

}
// .method public final getLeadValue(C)C
char android::icu::impl::CharTrie::getLeadValue(char ch)
{
	
	//    .param p1, "ch"    # C
	return this->m_data_[this->getLeadOffset(ch)];

}
// .method protected final getSurrogateOffset(CC)I
int android::icu::impl::CharTrie::getSurrogateOffset(char lead,char trail)
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
	// 386    .line 266
label_cond_d:
	offset = this->m_dataManipulate_->getFoldingOffset(this->getLeadValue(lead));
	//    .local v0, "offset":I
	if ( offset <= 0 )
		goto label_cond_21;
	return this->getRawOffset(offset, (char)(( trail & 0x3ff)));
	// 413    .line 275
label_cond_21:
	return -0x1;

}
// .method public final getSurrogateValue(CC)C
char android::icu::impl::CharTrie::getSurrogateValue(char lead,char trail)
{
	
	int offset;
	
	//    .param p1, "lead"    # C
	//    .param p2, "trail"    # C
	offset = this->getSurrogateOffset(lead, trail);
	//    .local v0, "offset":I
	if ( offset <= 0 )
		goto label_cond_b;
	return this->m_data_[offset];
	// 442    .line 172
label_cond_b:
	return this->m_initialValue_;

}
// .method public final getTrailValue(IC)C
char android::icu::impl::CharTrie::getTrailValue(int leadvalue,char trail)
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
	// 471    .line 190
label_cond_d:
	offset = this->m_dataManipulate_->getFoldingOffset(leadvalue);
	//    .local v0, "offset":I
	if ( offset <= 0 )
		goto label_cond_21;
	return this->m_data_[this->getRawOffset(offset, (char)(( trail & 0x3ff)))];
	// 500    .line 195
label_cond_21:
	return this->m_initialValue_;

}
// .method protected final getValue(I)I
int android::icu::impl::CharTrie::getValue(int index)
{
	
	//    .param p1, "index"    # I
	return this->m_data_[index];

}
// .method public hashCode()I
int android::icu::impl::CharTrie::hashCode()
{
	
	std::shared_ptr<java::lang::AssertionError> cVar0;
	
	if ( android::icu::impl::CharTrie::_assertionsDisabled )     
		goto label_cond_d;
	cVar0 = std::make_shared<java::lang::AssertionError>(std::make_shared<java::lang::String>(std::make_shared<char[]>("hashCode not designed")));
	// throw
	throw cVar0;
	// 537    .line 231
label_cond_d:
	return 0x2a;

}
// .method protected final unserialize(Ljava/nio/ByteBuffer;)V
void android::icu::impl::CharTrie::unserialize(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .local v0, "indexDataLength":I
	this->m_index_ = android::icu::impl::ICUBinary::getChars(bytes, (this->m_dataOffset_ + this->m_dataLength_), 0x0);
	this->m_data_ = this->m_index_;
	this->m_initialValue_ = this->m_data_[this->m_dataOffset_];
	return;

}


