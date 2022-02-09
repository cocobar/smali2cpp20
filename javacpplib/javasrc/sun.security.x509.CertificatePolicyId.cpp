// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificatePolicyId.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CertificatePolicyId.h"

// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::CertificatePolicyId::CertificatePolicyId(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 015        value = {
	// 016            Ljava/io/IOException;
	// 017        }
	// 018    .end annotation
	// 022    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->id = val->getOID();
	return;

}
// .method public constructor <init>(Lsun/security/util/ObjectIdentifier;)V
sun::security::x509::CertificatePolicyId::CertificatePolicyId(std::shared_ptr<sun::security::util::ObjectIdentifier> id)
{
	
	//    .param p1, "id"    # Lsun/security/util/ObjectIdentifier;
	// 041    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->id = id;
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::CertificatePolicyId::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 056        value = {
	// 057            Ljava/io/IOException;
	// 058        }
	// 059    .end annotation
	out->putOID(this->id);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::CertificatePolicyId::equals(std::shared_ptr<java::lang::Object> other)
{
	
	//    .param p1, "other"    # Ljava/lang/Object;
	if ( !(other->instanceOf("sun::security::x509::CertificatePolicyId")) )  
		goto label_cond_11;
	other->checkCast("sun::security::x509::CertificatePolicyId");
	//    .end local p1    # "other":Ljava/lang/Object;
	return this->id->equals(other->getIdentifier());
	// 099    .line 99
	// 100    .restart local p1    # "other":Ljava/lang/Object;
label_cond_11:
	return 0x0;

}
// .method public getIdentifier()Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::x509::CertificatePolicyId::getIdentifier()
{
	
	return this->id;

}
// .method public hashCode()I
int sun::security::x509::CertificatePolicyId::hashCode()
{
	
	return this->id->hashCode();

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificatePolicyId::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "s":Ljava/lang/String;
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertificatePolicyId: [")))->append(this->id->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")))->toString();

}


