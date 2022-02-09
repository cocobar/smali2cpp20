// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificatePolicyMap.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.CertificatePolicyId.h"
#include "sun.security.x509.CertificatePolicyMap.h"

// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::CertificatePolicyMap::CertificatePolicyMap(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<sun::security::x509::CertificatePolicyId> cVar1;
	std::shared_ptr<sun::security::x509::CertificatePolicyId> cVar2;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 017        value = {
	// 018            Ljava/io/IOException;
	// 019        }
	// 020    .end annotation
	// 024    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( val->tag == 0x30 )
		goto label_cond_12;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for CertificatePolicyMap")));
	// throw
	throw cVar0;
	// 042    .line 63
label_cond_12:
	cVar1 = std::make_shared<sun::security::x509::CertificatePolicyId>(val->data->getDerValue());
	this->issuerDomain = cVar1;
	cVar2 = std::make_shared<sun::security::x509::CertificatePolicyId>(val->data->getDerValue());
	this->subjectDomain = cVar2;
	return;

}
// .method public constructor <init>(Lsun/security/x509/CertificatePolicyId;Lsun/security/x509/CertificatePolicyId;)V
sun::security::x509::CertificatePolicyMap::CertificatePolicyMap(std::shared_ptr<sun::security::x509::CertificatePolicyId> issuer,std::shared_ptr<sun::security::x509::CertificatePolicyId> subject)
{
	
	//    .param p1, "issuer"    # Lsun/security/x509/CertificatePolicyId;
	//    .param p2, "subject"    # Lsun/security/x509/CertificatePolicyId;
	// 080    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->issuerDomain = issuer;
	this->subjectDomain = subject;
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::CertificatePolicyMap::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 098        value = {
	// 099            Ljava/io/IOException;
	// 100        }
	// 101    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	this->issuerDomain->encode(tmp);
	this->subjectDomain->encode(tmp);
	out->write(0x30, tmp);
	return;

}
// .method public getIssuerIdentifier()Lsun/security/x509/CertificatePolicyId;
std::shared_ptr<sun::security::x509::CertificatePolicyId> sun::security::x509::CertificatePolicyMap::getIssuerIdentifier()
{
	
	return this->issuerDomain;

}
// .method public getSubjectIdentifier()Lsun/security/x509/CertificatePolicyId;
std::shared_ptr<sun::security::x509::CertificatePolicyId> sun::security::x509::CertificatePolicyMap::getSubjectIdentifier()
{
	
	return this->subjectDomain;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificatePolicyMap::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "s":Ljava/lang/String;
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertificatePolicyMap: [\nIssuerDomain:")))->append(this->issuerDomain->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SubjectDomain:")))->append(this->subjectDomain->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")))->toString();

}


