// CPP L:\smali2cpp20\x64\Release\out\sun\security\pkcs\ESSCertId.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.StringBuffer.h"
#include "java.lang.StringBuilder.h"
#include "sun.misc.HexDumpEncoder.h"
#include "sun.security.pkcs.ESSCertId.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.SerialNumber.h"

static sun::security::pkcs::ESSCertId::hexDumper;
// .method constructor <init>(Lsun/security/util/DerValue;)V
sun::security::pkcs::ESSCertId::ESSCertId(std::shared_ptr<sun::security::util::DerValue> certId)
{
	
	std::shared_ptr<sun::security::util::DerInputStream> issuerSerial;
	std::shared_ptr<sun::security::x509::GeneralNames> cVar0;
	std::shared_ptr<sun::security::x509::SerialNumber> cVar1;
	
	//    .param p1, "certId"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 023        value = {
	// 024            Ljava/io/IOException;
	// 025        }
	// 026    .end annotation
	// 030    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->certHash = certId->data->getDerValue()->toByteArray();
	if ( certId->data->available() <= 0 )
		goto label_cond_37;
	issuerSerial = certId->data->getDerValue();
	//    .local v0, "issuerSerial":Lsun/security/util/DerValue;
	cVar0 = std::make_shared<sun::security::x509::GeneralNames>(issuerSerial->data->getDerValue());
	this->issuer = cVar0;
	cVar1 = std::make_shared<sun::security::x509::SerialNumber>(issuerSerial->data->getDerValue());
	this->serialNumber = cVar1;
	//    .end local v0    # "issuerSerial":Lsun/security/util/DerValue;
label_cond_37:
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::pkcs::ESSCertId::toString()
{
	
	std::shared_ptr<java::lang::StringBuffer> buffer;
	std::shared_ptr<sun::misc::HexDumpEncoder> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	buffer = std::make_shared<java::lang::StringBuffer>();
	//    .local v0, "buffer":Ljava/lang/StringBuffer;
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("[\n\tCertificate hash (SHA-1):\n")));
	if ( sun::security::pkcs::ESSCertId::hexDumper )     
		goto label_cond_16;
	cVar0 = std::make_shared<sun::misc::HexDumpEncoder>();
	sun::security::pkcs::ESSCertId::hexDumper = cVar0;
label_cond_16:
	buffer->append(sun::security::pkcs::ESSCertId::hexDumper->encode(this->certHash));
	if ( !(this->issuer) )  
		goto label_cond_62;
	if ( !(this->serialNumber) )  
		goto label_cond_62;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	buffer->append(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n\tIssuer: ")))->append(this->issuer)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")))->toString());
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	buffer->append(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\t")))->append(this->serialNumber)->toString());
label_cond_62:
	buffer->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n]")));
	return buffer->toString();

}


