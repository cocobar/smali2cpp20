// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\UCharacterNameReader.smali
#include "java2ctype.h"
#include "android.icu.impl.ICUBinary.h"
#include "android.icu.impl.UCharacterName_S_AlgorithmName.h"
#include "android.icu.impl.UCharacterName.h"
#include "android.icu.impl.UCharacterNameReader.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.nio.ByteBuffer.h"
#include "java.util.Arrays.h"

static android::icu::impl::UCharacterNameReader::ALG_INFO_SIZE_ = 0xc;
static android::icu::impl::UCharacterNameReader::DATA_FORMAT_ID_ = 0x756e616d;
static android::icu::impl::UCharacterNameReader::GROUP_INFO_SIZE_ = 0x3;
// .method protected constructor <init>(Ljava/nio/ByteBuffer;)V
android::icu::impl::UCharacterNameReader::UCharacterNameReader(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	//    .param p1, "bytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 034        value = {
	// 035            Ljava/io/IOException;
	// 036        }
	// 037    .end annotation
	// 041    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	android::icu::impl::ICUBinary::readHeader(bytes, 0x756e616d, this);
	this->m_byteBuffer_ = bytes;
	return;

}
// .method private readAlg()Landroid/icu/impl/UCharacterName$AlgorithmName;
std::shared_ptr<android::icu::impl::UCharacterName_S_AlgorithmName> android::icu::impl::UCharacterNameReader::readAlg()
{
	
	std::shared_ptr<android::icu::impl::UCharacterName_S_AlgorithmName> result;
	unsigned char type;
	unsigned char variant;
	int size;
	std::shared_ptr<java::lang::StringBuilder> prefix;
	char c;
	std::shared<std::vector<unsigned char[]>> string;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 058        value = {
	// 059            Ljava/io/IOException;
	// 060        }
	// 061    .end annotation
	result = std::make_shared<android::icu::impl::UCharacterName_S_AlgorithmName>();
	//    .local v5, "result":Landroid/icu/impl/UCharacterName$AlgorithmName;
	//    .local v4, "rangestart":I
	//    .local v3, "rangeend":I
	type = this->m_byteBuffer_->get();
	//    .local v8, "type":B
	variant = this->m_byteBuffer_->get();
	//    .local v9, "variant":B
	if ( result->setInfo(this->m_byteBuffer_->getInt(), this->m_byteBuffer_->getInt(), type, variant) )     
		goto label_cond_26;
	return 0x0;
	// 116    .line 171
label_cond_26:
	size = this->m_byteBuffer_->getChar();
	//    .local v6, "size":I
	if ( type != 0x1 )
		goto label_cond_3b;
	//    .local v1, "factor":[C
	result->setFactor(android::icu::impl::ICUBinary::getChars(this->m_byteBuffer_, variant, 0x0));
	//    .end local v1    # "factor":[C
label_cond_3b:
	prefix = std::make_shared<java::lang::StringBuilder>();
	//    .local v2, "prefix":Ljava/lang/StringBuilder;
	c = (char)(( this->m_byteBuffer_->get() & 0xff));
	//    .local v0, "c":C
label_goto_49:
	if ( !(c) )  
		goto label_cond_58;
	prefix->append(c);
	c = (char)(( this->m_byteBuffer_->get() & 0xff));
	goto label_goto_49;
	// 186    .line 188
label_cond_58:
	result->setPrefix(prefix->toString());
	size = (size -  ( ( prefix->length() + 0xc) + 0x1));
	if ( size <= 0 )
		goto label_cond_74;
	string = std::make_shared<std::vector<unsigned char[]>>(size);
	//    .local v7, "string":[B
	this->m_byteBuffer_->get(string);
	result->setFactorString(string);
	//    .end local v7    # "string":[B
label_cond_74:
	return result;

}
// .method protected authenticate([B[B)Z
bool android::icu::impl::UCharacterNameReader::authenticate(std::shared_ptr<unsigned char[]> dataformatid,std::shared_ptr<unsigned char[]> dataformatversion)
{
	
	bool cVar0;
	
	//    .param p1, "dataformatid"    # [B
	//    .param p2, "dataformatversion"    # [B
	if ( !(java::util::Arrays::equals(android::icu::impl::ICUBinary::getVersionByteArrayFromCompactInt(0x756e616d), dataformatid)) )  
		goto label_cond_12;
	cVar0 = this->isDataVersionAcceptable(dataformatversion);
label_goto_11:
	return cVar0;
label_cond_12:
	cVar0 = 0x0;
	goto label_goto_11;

}
// .method public isDataVersionAcceptable([B)Z
bool android::icu::impl::UCharacterNameReader::isDataVersionAcceptable(std::shared_ptr<unsigned char[]> version)
{
	
	bool cVar0;
	int cVar1;
	
	//    .param p1, "version"    # [B
	cVar0 = 0x1;
	cVar1 = 0x0;
	if ( version[cVar1] != cVar0 )
		goto label_cond_7;
label_goto_6:
	return cVar0;
label_cond_7:
	cVar0 = cVar1;
	goto label_goto_6;

}
// .method protected read(Landroid/icu/impl/UCharacterName;)V
void android::icu::impl::UCharacterNameReader::read(std::shared_ptr<android::icu::impl::UCharacterName> data)
{
	
	int cVar0;
	std::shared<std::vector<unsigned char[]>> tokenstr;
	int count;
	std::shared<std::vector<unsigned char[]>> groupstring;
	std::shared<std::vector<std::vector<android::icu::impl::UCharacterName_S_AlgorithmName>>> alg;
	int i;
	auto an;
	std::shared_ptr<java::io::IOException> cVar1;
	
	//    .param p1, "data"    # Landroid/icu/impl/UCharacterName;
	//    .annotation system Ldalvik/annotation/Throws;
	// 290        value = {
	// 291            Ljava/io/IOException;
	// 292        }
	// 293    .end annotation
	cVar0 = 0x0;
	this->m_tokenstringindex_ = this->m_byteBuffer_->getInt();
	this->m_groupindex_ = this->m_byteBuffer_->getInt();
	this->m_groupstringindex_ = this->m_byteBuffer_->getInt();
	this->m_algnamesindex_ = this->m_byteBuffer_->getInt();
	//    .local v2, "count":I
	//    .local v7, "token":[C
	//    .local v6, "size":I
	tokenstr = std::make_shared<std::vector<unsigned char[]>>((this->m_groupindex_ - this->m_tokenstringindex_));
	//    .local v8, "tokenstr":[B
	this->m_byteBuffer_->get(tokenstr);
	data->setToken(android::icu::impl::ICUBinary::getChars(this->m_byteBuffer_, this->m_byteBuffer_->getChar(), cVar0), tokenstr);
	count = this->m_byteBuffer_->getChar();
	data->setGroupCountSize(count, 0x3);
	//    .local v3, "group":[C
	groupstring = std::make_shared<std::vector<unsigned char[]>>((this->m_algnamesindex_ - this->m_groupstringindex_));
	//    .local v4, "groupstring":[B
	this->m_byteBuffer_->get(groupstring);
	data->setGroup(android::icu::impl::ICUBinary::getChars(this->m_byteBuffer_, ( count * 0x3), cVar0), groupstring);
	count = this->m_byteBuffer_->getInt();
	alg = std::make_shared<std::vector<std::vector<android::icu::impl::UCharacterName_S_AlgorithmName>>>(count);
	//    .local v0, "alg":[Landroid/icu/impl/UCharacterName$AlgorithmName;
	i = 0x0;
	//    .local v5, "i":I
label_goto_68:
	if ( i >= count )
		goto label_cond_7e;
	an = this->readAlg();
	//    .local v1, "an":Landroid/icu/impl/UCharacterName$AlgorithmName;
	if ( an )     
		goto label_cond_79;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("unames.icu read error: Algorithmic names creation error")));
	// throw
	throw cVar1;
	// 448    .line 99
label_cond_79:
	alg[i] = an;
	i = ( i + 0x1);
	goto label_goto_68;
	// 457    .line 101
	// 458    .end local v1    # "an":Landroid/icu/impl/UCharacterName$AlgorithmName;
label_cond_7e:
	data->setAlgorithm(alg);
	return;

}


