// CPP L:\smali2cpp20\x64\Release\out\sun\security\pkcs\SigningCertificateInfo.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "sun.security.pkcs.ESSCertId.h"
#include "sun.security.pkcs.SigningCertificateInfo.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerValue.h"

// .method public constructor <init>([B)V
sun::security::pkcs::SigningCertificateInfo::SigningCertificateInfo(std::shared_ptr<unsigned char[]> ber)
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	//    .param p1, "ber"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 017        value = {
	// 018            Ljava/io/IOException;
	// 019        }
	// 020    .end annotation
	cVar0 = 0x0;
	// 026    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->ber = cVar0;
	this->certId = cVar0;
	this->parse(ber);
	return;

}
// .method public parse([B)V
void sun::security::pkcs::SigningCertificateInfo::parse(std::shared_ptr<unsigned char[]> bytes)
{
	
	int cVar0;
	std::shared_ptr<sun::security::util::DerValue> derValue;
	std::shared_ptr<java::io::IOException> cVar1;
	auto certs;
	int i;
	std::shared_ptr<sun::security::pkcs::ESSCertId> cVar2;
	
	//    .param p1, "bytes"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 047        value = {
	// 048            Ljava/io/IOException;
	// 049        }
	// 050    .end annotation
	cVar0 = 0x1;
	derValue = std::make_shared<sun::security::util::DerValue>(bytes);
	//    .local v1, "derValue":Lsun/security/util/DerValue;
	if ( derValue->tag == 0x30 )
		goto label_cond_15;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Bad encoding for signingCertificate")));
	// throw
	throw cVar1;
	// 077    .line 115
label_cond_15:
	certs = derValue->data->getSequence(cVar0);
	//    .local v0, "certs":[Lsun/security/util/DerValue;
	this->certId = std::make_shared<std::vector<std::vector<sun::security::pkcs::ESSCertId>>>(certs->size());
	i = 0x0;
	//    .local v2, "i":I
label_goto_21:
	if ( i >= certs->size() )
		goto label_cond_32;
	cVar2 = std::make_shared<sun::security::pkcs::ESSCertId>(certs[i]);
	this->certId[i] = cVar2;
	i = ( i + 0x1);
	goto label_goto_21;
	// 118    .line 122
label_cond_32:
	if ( derValue->data->available() <= 0 )
		goto label_cond_47;
	//    .local v3, "policies":[Lsun/security/util/DerValue;
	i = 0x0;
label_goto_41:
	if ( i >= derValue->data->getSequence(cVar0)->size() )
		goto label_cond_47;
	i = ( i + 0x1);
	goto label_goto_41;
	// 148    .line 128
	// 149    .end local v3    # "policies":[Lsun/security/util/DerValue;
label_cond_47:
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::SigningCertificateInfo::toString()
{
	
	std::shared_ptr<java::lang::StringBuffer> buffer;
	int i;
	
	buffer = std::make_shared<java::lang::StringBuffer>();
	//    .local v0, "buffer":Ljava/lang/StringBuffer;
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[\n")));
	i = 0x0;
	//    .local v1, "i":I
label_goto_c:
	if ( i >= this->certId->size() )
		goto label_cond_1f;
	buffer->append(this->certId[i]->toString());
	i = ( i + 0x1);
	goto label_goto_c;
	// 196    .line 101
label_cond_1f:
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n]")));
	return buffer->toString();

}


