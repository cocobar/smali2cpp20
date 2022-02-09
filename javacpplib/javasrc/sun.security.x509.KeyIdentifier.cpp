// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\KeyIdentifier.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.MessageDigest.h"
#include "java.security.NoSuchAlgorithmException.h"
#include "java.security.PublicKey.h"
#include "java.util.Arrays.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.util.BitArray.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.AlgorithmId.h"
#include "sun.security.x509.KeyIdentifier.h"

// .method public constructor <init>(Ljava/security/PublicKey;)V
sun::security::x509::KeyIdentifier::KeyIdentifier(std::shared_ptr<java::security::PublicKey> pubKey)
{
	
	std::shared_ptr<sun::security::util::DerValue> algAndKey;
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::vector<std::any> tryCatchExcetionList;
	std::shared_ptr<java::security::MessageDigest> md;
	
	//    .param p1, "pubKey"    # Ljava/security/PublicKey;
	//    .annotation system Ldalvik/annotation/Throws;
	// 015        value = {
	// 016            Ljava/io/IOException;
	// 017        }
	// 018    .end annotation
	// 022    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	algAndKey = std::make_shared<sun::security::util::DerValue>(pubKey->getEncoded());
	//    .local v0, "algAndKey":Lsun/security/util/DerValue;
	if ( algAndKey->tag == 0x30 )
		goto label_cond_1b;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("PublicKey value is not a valid X.509 public key")));
	// throw
	throw cVar0;
	// 050    .line 90
label_cond_1b:
	sun::security::x509::AlgorithmId::parse(algAndKey->data->getDerValue());
	//    .local v1, "algid":Lsun/security/x509/AlgorithmId;
	//    .local v3, "key":[B
	0x0;
	//    .local v4, "md":Ljava/security/MessageDigest;
	try {
	//label_try_start_30:
	//label_try_end_36:
	}
	catch (java::security::NoSuchAlgorithmException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_41;
	}
	//    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_30 .. :try_end_36} :catch_41
	md = java::security::MessageDigest::getInstance(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1")));
	//    .local v4, "md":Ljava/security/MessageDigest;
	md->update(algAndKey->data->getUnalignedBitString()->toByteArray());
	this->octetString = md->digest();
	return;
	// 103    .line 96
	// 104    .local v4, "md":Ljava/security/MessageDigest;
label_catch_41:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v2, "e3":Ljava/security/NoSuchAlgorithmException;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("SHA1 not supported")));
	// throw
	throw cVar1;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::KeyIdentifier::KeyIdentifier(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 123        value = {
	// 124            Ljava/io/IOException;
	// 125        }
	// 126    .end annotation
	// 130    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->octetString = val->getOctetString();
	return;

}
// .method public constructor <init>([B)V
sun::security::x509::KeyIdentifier::KeyIdentifier(std::shared_ptr<unsigned char[]> octetString)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .param p1, "octetString"    # [B
	// 149    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = octetString->clone();
	cVar0->checkCast("unsigned char[]");
	this->octetString = cVar0;
	return;

}
// .method encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::KeyIdentifier::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 170        value = {
	// 171            Ljava/io/IOException;
	// 172        }
	// 173    .end annotation
	out->putOctetString(this->octetString);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::KeyIdentifier::equals(std::shared_ptr<java::lang::Object> other)
{
	
	//    .param p1, "other"    # Ljava/lang/Object;
	if ( this != other )
		goto label_cond_4;
	return 0x1;
	// 198    .line 149
label_cond_4:
	if ( other->instanceOf("sun::security::x509::KeyIdentifier") )     
		goto label_cond_a;
	return 0x0;
	// 209    .line 151
label_cond_a:
	other->checkCast("sun::security::x509::KeyIdentifier");
	//    .end local p1    # "other":Ljava/lang/Object;
	//    .local v0, "otherString":[B
	return java::util::Arrays::equals(this->octetString, other->octetString);

}
// .method public getIdentifier()[B
unsigned char sun::security::x509::KeyIdentifier::getIdentifier()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	cVar0 = this->octetString->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}
// .method public hashCode()I
int sun::security::x509::KeyIdentifier::hashCode()
{
	
	int retval;
	int i;
	
	retval = 0x0;
	//    .local v1, "retval":I
	i = 0x0;
	//    .local v0, "i":I
label_goto_2:
	if ( i >= this->octetString->size() )
		goto label_cond_10;
	retval = (retval +  (this->octetString[i] *  i));
	i = ( i + 0x1);
	goto label_goto_2;
	// 276    .line 140
label_cond_10:
	return retval;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::KeyIdentifier::toString()
{
	
	std::shared_ptr<sun::misc::HexDumpEncoder> encoder;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .local v1, "s":Ljava/lang/String;
	encoder = std::make_shared<sun::misc::HexDumpEncoder>();
	//    .local v0, "encoder":Lsun/misc/HexDumpEncoder;
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	return cVar1->append(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("KeyIdentifier [\n")))->append(encoder->encodeBuffer(this->octetString))->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")))->toString();

}


