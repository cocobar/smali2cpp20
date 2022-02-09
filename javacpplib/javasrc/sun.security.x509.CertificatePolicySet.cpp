// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\CertificatePolicySet.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Collections.h"
#include "java.util.List.h"
#include "java.util.Vector.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.CertificatePolicyId.h"
#include "sun.security.x509.CertificatePolicySet.h"

// .method public constructor <init>(Ljava/util/Vector;)V
sun::security::x509::CertificatePolicySet::CertificatePolicySet(std::shared_ptr<java::util::Vector<sun::security::x509::CertificatePolicyId>> ids)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 023        value = {
	// 024            "(",
	// 025            "Ljava/util/Vector",
	// 026            "<",
	// 027            "Lsun/security/x509/CertificatePolicyId;",
	// 028            ">;)V"
	// 029        }
	// 030    .end annotation
	//    .local p1, "ids":Ljava/util/Vector;, "Ljava/util/Vector<Lsun/security/x509/CertificatePolicyId;>;"
	// 035    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->ids = ids;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::CertificatePolicySet::CertificatePolicySet(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	std::shared_ptr<java::util::Vector> cVar0;
	auto seq;
	int i;
	std::shared_ptr<sun::security::x509::CertificatePolicyId> id;
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 048        value = {
	// 049            Ljava/io/IOException;
	// 050        }
	// 051    .end annotation
	// 055    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	cVar0 = std::make_shared<java::util::Vector>();
	this->ids = cVar0;
	seq = in->getSequence(0x5);
	//    .local v2, "seq":[Lsun/security/util/DerValue;
	i = 0x0;
	//    .local v0, "i":I
label_goto_10:
	if ( i >= seq->size() )
		goto label_cond_22;
	id = std::make_shared<sun::security::x509::CertificatePolicyId>(seq[i]);
	//    .local v1, "id":Lsun/security/x509/CertificatePolicyId;
	this->ids->addElement(id);
	i = ( i + 0x1);
	goto label_goto_10;
	// 099    .line 68
	// 100    .end local v1    # "id":Lsun/security/x509/CertificatePolicyId;
label_cond_22:
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::CertificatePolicySet::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	int i;
	std::shared_ptr<sun::security::x509::CertificatePolicyId> cVar0;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 111        value = {
	// 112            Ljava/io/IOException;
	// 113        }
	// 114    .end annotation
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v1, "tmp":Lsun/security/util/DerOutputStream;
	i = 0x0;
	//    .local v0, "i":I
label_goto_6:
	if ( i >= this->ids->size() )
		goto label_cond_1c;
	cVar0 = this->ids->elementAt(i);
	cVar0->checkCast("sun::security::x509::CertificatePolicyId");
	cVar0->encode(tmp);
	i = ( i + 0x1);
	goto label_goto_6;
	// 152    .line 92
label_cond_1c:
	out->write(0x30, tmp);
	return;

}
// .method public getCertPolicyIds()Ljava/util/List;
std::shared_ptr<java::util::List<sun::security::x509::CertificatePolicyId>> sun::security::x509::CertificatePolicySet::getCertPolicyIds()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 165        value = {
	// 166            "()",
	// 167            "Ljava/util/List",
	// 168            "<",
	// 169            "Lsun/security/x509/CertificatePolicyId;",
	// 170            ">;"
	// 171        }
	// 172    .end annotation
	return java::util::Collections::unmodifiableList(this->ids);

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::CertificatePolicySet::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "s":Ljava/lang/String;
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("CertificatePolicySet:[\n")))->append(this->ids->toString())->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]\n")))->toString();

}


