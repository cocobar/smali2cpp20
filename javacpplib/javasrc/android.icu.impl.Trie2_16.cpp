// CPP L:\smali2cpp20\x64\Release\out\android\icu\impl\Trie2_16.smali
#include "java2ctype.h"
#include "android.icu.impl.Trie2_S_UTrie2Header.h"
#include "android.icu.impl.Trie2.h"
#include "android.icu.impl.Trie2_16.h"
#include "java.io.DataOutputStream.h"
#include "java.io.OutputStream.h"
#include "java.nio.ByteBuffer.h"

// .method constructor <init>()V
android::icu::impl::Trie2_16::Trie2_16()
{
	
	// 012    invoke-direct {p0}, Landroid/icu/impl/Trie2;-><init>()V
	return;

}
// .method public static createFromSerialized(Ljava/nio/ByteBuffer;)Landroid/icu/impl/Trie2_16;
std::shared_ptr<android::icu::impl::Trie2_16> android::icu::impl::Trie2_16::createFromSerialized(std::shared_ptr<java::nio::ByteBuffer> bytes)
{
	
	std::shared_ptr<android::icu::impl::Trie2_16> cVar0;
	
	//    .param p0, "bytes"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 022        value = {
	// 023            Ljava/io/IOException;
	// 024        }
	// 025    .end annotation
	cVar0 = android::icu::impl::Trie2::createFromSerialized(bytes);
	cVar0->checkCast("android::icu::impl::Trie2_16");
	return cVar0;

}
// .method public final get(I)I
int android::icu::impl::Trie2_16::get(int codePoint)
{
	
	int cVar0;
	int cVar1;
	
	//    .param p1, "codePoint"    # I
	cVar0 = 0xffff;
	cVar1 = 0xd800;
	if ( codePoint < 0 ) 
		goto label_cond_65;
	if ( codePoint <  cVar1 )
		goto label_cond_11;
	if ( codePoint <= 0xdbff )
		goto label_cond_22;
	if ( codePoint >  cVar0 )
		goto label_cond_22;
label_cond_11:
	//    .local v0, "ix":I
	//    .local v1, "value":I
	return this->index[(( this->index[_shri(codePoint,0x5)] << 0x2) + ( codePoint & 0x1f))];
	// 086    .line 84
	// 087    .end local v0    # "ix":I
	// 088    .end local v1    # "value":I
label_cond_22:
	if ( codePoint >  cVar0 )
		goto label_cond_39;
	//    .restart local v0    # "ix":I
	//    .restart local v1    # "value":I
	return this->index[(( this->index[( _shri((codePoint - cVar1),0x5) + 0x800)] << 0x2) + ( codePoint & 0x1f))];
	// 120    .line 96
	// 121    .end local v0    # "ix":I
	// 122    .end local v1    # "value":I
label_cond_39:
	if ( codePoint >= this->highStart )
		goto label_cond_59;
	//    .restart local v0    # "ix":I
	//    .restart local v1    # "value":I
	return this->index[(( this->index[(this->index[( _shri(codePoint,0xb) + 0x820)] +  ( _shri(codePoint,0x5) & 0x3f))] << 0x2) + ( codePoint & 0x1f))];
	// 167    .line 106
	// 168    .end local v0    # "ix":I
	// 169    .end local v1    # "value":I
label_cond_59:
	if ( codePoint >  0x10ffff )
		goto label_cond_65;
	//    .restart local v1    # "value":I
	return this->index[this->highValueIndex];
	// 186    .line 113
	// 187    .end local v1    # "value":I
label_cond_65:
	return this->errorValue;

}
// .method public getFromU16SingleLead(C)I
int android::icu::impl::Trie2_16::getFromU16SingleLead(char codeUnit)
{
	
	//    .param p1, "codeUnit"    # C
	//    .local v0, "ix":I
	//    .local v1, "value":I
	return this->index[(( this->index[_shri(codeUnit,0x5)] << 0x2) + ( codeUnit & 0x1f))];

}
// .method public getSerializedLength()I
int android::icu::impl::Trie2_16::getSerializedLength()
{
	
	return ( ( (this->header->indexLength +  this->dataLength) * 0x2) + 0x10);

}
// .method rangeEnd(III)I
int android::icu::impl::Trie2_16::rangeEnd(int startingCP,int limit,int value)
{
	
	int cVar0;
	int cVar1;
	int cp;
	int block;
	int index2Block;
	int startIx;
	int limitIx;
	int ix;
	char index2Block;
	
	//    .param p1, "startingCP"    # I
	//    .param p2, "limit"    # I
	//    .param p3, "value"    # I
	cVar0 = 0xffff;
	cVar1 = 0xd800;
	cp = startingCP;
	//    .local v1, "cp":I
	block = 0x0;
	//    .local v0, "block":I
	index2Block = 0x0;
	//    .local v2, "index2Block":I
label_goto_9:
	if ( cp <  limit )
		goto label_cond_11;
label_cond_b:
label_goto_b:
	if ( cp <= limit )
		goto label_cond_e;
	cp = limit;
label_cond_e:
	return ( cp + -0x1);
	// 285    .line 199
label_cond_11:
	if ( cp <  cVar1 )
		goto label_cond_1a;
	if ( cp <= 0xdbff )
		goto label_cond_2e;
	if ( cp >  cVar0 )
		goto label_cond_2e;
label_cond_1a:
	index2Block = 0x0;
	block = ( this->index[_shri(cp,0x5)] << 0x2);
label_goto_23:
	if ( index2Block != this->index2NullOffset )
		goto label_cond_61;
	if ( value != this->initialValue )
		goto label_cond_b;
	cp = ( cp + 0x800);
	goto label_goto_9;
	// 324    .line 205
label_cond_2e:
	if ( cp >= cVar0 )
		goto label_cond_3f;
	index2Block = 0x800;
	block = ( this->index[( _shri((cp - cVar1),0x5) + 0x800)] << 0x2);
	goto label_goto_23;
	// 346    .line 209
label_cond_3f:
	if ( cp >= this->highStart )
		goto label_cond_57;
	ix = ( _shri(cp,0xb) + 0x820);
	//    .local v3, "ix":I
	index2Block = this->index[ix];
	block = ( this->index[(( _shri(cp,0x5) & 0x3f) +  index2Block)] << 0x2);
	goto label_goto_23;
	// 378    .line 216
	// 379    .end local v3    # "ix":I
label_cond_57:
	if ( value != this->index[this->highValueIndex] )
		goto label_cond_b;
	cp = limit;
	goto label_goto_b;
	// 394    .line 227
label_cond_61:
	if ( block != this->dataNullOffset )
		goto label_cond_6c;
	if ( value != this->initialValue )
		goto label_cond_b;
	cp = ( cp + 0x20);
	goto label_goto_9;
	// 410    .line 239
label_cond_6c:
	startIx = (block + ( cp & 0x1f));
	//    .local v5, "startIx":I
	limitIx = ( block + 0x20);
	//    .local v4, "limitIx":I
	ix = startIx;
	//    .restart local v3    # "ix":I
label_goto_73:
	if ( ix >= limitIx )
		goto label_cond_82;
	if ( this->index[ix] == value )
		goto label_cond_7f;
	cp = (cp +  (ix - startIx));
	goto label_goto_b;
	// 443    .line 241
label_cond_7f:
	ix = ( ix + 0x1);
	goto label_goto_73;
	// 449    .line 251
label_cond_82:
	cp = (cp +  (limitIx - startIx));
	goto label_goto_9;

}
// .method public serialize(Ljava/io/OutputStream;)I
int android::icu::impl::Trie2_16::serialize(std::shared_ptr<java::io::OutputStream> os)
{
	
	std::shared_ptr<java::io::DataOutputStream> dos;
	int i;
	
	//    .param p1, "os"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 462        value = {
	// 463            Ljava/io/IOException;
	// 464        }
	// 465    .end annotation
	dos = std::make_shared<java::io::DataOutputStream>(os);
	//    .local v1, "dos":Ljava/io/DataOutputStream;
	0x0;
	//    .local v0, "bytesWritten":I
	i = 0x0;
	//    .local v2, "i":I
label_goto_d:
	if ( i >= this->dataLength )
		goto label_cond_1e;
	dos->writeChar(this->index[(this->data16 +  i)]);
	i = ( i + 0x1);
	goto label_goto_d;
	// 510    .line 163
label_cond_1e:
	return (( this->serializeHeader(dos) + 0x0) +  ( this->dataLength * 0x2));

}


