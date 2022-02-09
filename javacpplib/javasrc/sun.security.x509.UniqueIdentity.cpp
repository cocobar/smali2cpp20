// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\UniqueIdentity.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.UniqueIdentity.h"

// .method public constructor <init>(Lsun/security/util/BitArray;)V
sun::security::x509::UniqueIdentity::UniqueIdentity(std::shared_ptr<sun::security::util::BitArray> id)
{
	
	//    .param p1, "id"    # Lsun/security/util/BitArray;
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->id = id;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::UniqueIdentity::UniqueIdentity(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 030        value = {
	// 031            Ljava/io/IOException;
	// 032        }
	// 033    .end annotation
	// 037    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	//    .local v0, "derVal":Lsun/security/util/DerValue;
	this->id = in->getDerValue()->getUnalignedBitString(0x1);
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::UniqueIdentity::UniqueIdentity(std::shared_ptr<sun::security::util::DerValue> derVal)
{
	
	//    .param p1, "derVal"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 062        value = {
	// 063            Ljava/io/IOException;
	// 064        }
	// 065    .end annotation
	// 069    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->id = derVal->getUnalignedBitString(0x1);
	return;

}
// .method public constructor <init>([B)V
sun::security::x509::UniqueIdentity::UniqueIdentity(std::shared_ptr<unsigned char[]> id)
{
	
	std::shared_ptr<sun::security::util::BitArray> cVar0;
	
	//    .param p1, "id"    # [B
	// 090    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<sun::security::util::BitArray>(( id->size() * 0x8), id);
	this->id = cVar0;
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;B)V
void sun::security::x509::UniqueIdentity::encode(std::shared_ptr<sun::security::util::DerOutputStream> out,unsigned char tag)
{
	
	std::shared_ptr<unsigned char[]> bytes;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .param p2, "tag"    # B
	//    .annotation system Ldalvik/annotation/Throws;
	// 114        value = {
	// 115            Ljava/io/IOException;
	// 116        }
	// 117    .end annotation
	bytes = this->id->toByteArray();
	//    .local v0, "bytes":[B
	//    .local v1, "excessBits":I
	out->write(tag);
	out->putLength(( bytes->size() + 0x1));
	out->write((( bytes->size() * 0x8) - this->id->length()));
	out->write(bytes);
	return;

}
// .method public getId()[Z
bool sun::security::x509::UniqueIdentity::getId()
{
	
	if ( this->id )     
		goto label_cond_6;
	return 0x0;
	// 175    .line 114
label_cond_6:
	return this->id->toBooleanArray();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::UniqueIdentity::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("UniqueIdentity:")))->append(this->id->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString();

}


