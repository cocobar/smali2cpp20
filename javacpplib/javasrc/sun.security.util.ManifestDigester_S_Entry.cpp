// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\ManifestDigester$Entry.smali
#include "java2ctype.h"
#include "java.security.MessageDigest.h"
#include "sun.security.util.ManifestDigester_S_Entry.h"

// .method public constructor <init>(III[B)V
sun::security::util::ManifestDigester_S_Entry::ManifestDigester_S_Entry(int offset,int length,int lengthWithBlankLine,std::shared_ptr<unsigned char[]> rawBytes)
{
	
	//    .param p1, "offset"    # I
	//    .param p2, "length"    # I
	//    .param p3, "lengthWithBlankLine"    # I
	//    .param p4, "rawBytes"    # [B
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->offset = offset;
	this->length = length;
	this->lengthWithBlankLine = lengthWithBlankLine;
	this->rawBytes = rawBytes;
	return;

}
// .method private doOldStyle(Ljava/security/MessageDigest;[BII)V
void sun::security::util::ManifestDigester_S_Entry::doOldStyle(std::shared_ptr<java::security::MessageDigest> md,std::shared_ptr<unsigned char[]> bytes,int offset,int length)
{
	
	int i;
	int start;
	int prev;
	unsigned char prev;
	
	//    .param p1, "md"    # Ljava/security/MessageDigest;
	//    .param p2, "bytes"    # [B
	//    .param p3, "offset"    # I
	//    .param p4, "length"    # I
	i = offset;
	//    .local v0, "i":I
	start = offset;
	//    .local v3, "start":I
	//    .local v1, "max":I
	prev = -0x1;
	//    .local v2, "prev":I
label_goto_5:
	if ( i >= (offset + length) )
		goto label_cond_1e;
	if ( bytes[i] != 0xd )
		goto label_cond_19;
	if ( prev != 0x20 )
		goto label_cond_19;
	md->update(bytes, start, ( (i - start) + -0x1));
	start = i;
label_cond_19:
	prev = bytes[i];
	i = ( i + 0x1);
	goto label_goto_5;
	// 115    .line 243
label_cond_1e:
	md->update(bytes, start, (i - start));
	return;

}
// .method public digest(Ljava/security/MessageDigest;)[B
unsigned char sun::security::util::ManifestDigester_S_Entry::digest(std::shared_ptr<java::security::MessageDigest> md)
{
	
	//    .param p1, "md"    # Ljava/security/MessageDigest;
	md->reset();
	if ( !(this->oldStyle) )  
		goto label_cond_15;
	this->doOldStyle(md, this->rawBytes, this->offset, this->lengthWithBlankLine);
label_goto_10:
	return md->digest();
	// 157    .line 216
label_cond_15:
	md->update(this->rawBytes, this->offset, this->lengthWithBlankLine);
	goto label_goto_10;

}
// .method public digestWorkaround(Ljava/security/MessageDigest;)[B
unsigned char sun::security::util::ManifestDigester_S_Entry::digestWorkaround(std::shared_ptr<java::security::MessageDigest> md)
{
	
	//    .param p1, "md"    # Ljava/security/MessageDigest;
	md->reset();
	md->update(this->rawBytes, this->offset, this->length);
	return md->digest();

}


