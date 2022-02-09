// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\PolicyInformation.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.security.cert.PolicyQualifierInfo.h"
#include "java.util.Collections.h"
#include "java.util.Enumeration.h"
#include "java.util.Iterator.h"
#include "java.util.LinkedHashSet.h"
#include "java.util.Set.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.AttributeNameEnumeration.h"
#include "sun.security.x509.CertificatePolicyId.h"
#include "sun.security.x509.PolicyInformation.h"

static sun::security::x509::PolicyInformation::ID = std::make_shared<java::lang::String>("id");
static sun::security::x509::PolicyInformation::NAME = std::make_shared<java::lang::String>("PolicyInformation");
static sun::security::x509::PolicyInformation::QUALIFIERS = std::make_shared<java::lang::String>("qualifiers");
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::PolicyInformation::PolicyInformation(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	int cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<sun::security::x509::CertificatePolicyId> cVar2;
	std::shared_ptr<java::util::LinkedHashSet> cVar3;
	unsigned char opt;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<java::security::cert::PolicyQualifierInfo> cVar6;
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 034        value = {
	// 035            Ljava/io/IOException;
	// 036        }
	// 037    .end annotation
	cVar0 = 0x30;
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( val->tag == cVar0 )
		goto label_cond_12;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of PolicyInformation")));
	// throw
	throw cVar1;
	// 059    .line 106
label_cond_12:
	cVar2 = std::make_shared<sun::security::x509::CertificatePolicyId>(val->data->getDerValue());
	this->policyIdentifier = cVar2;
	if ( !(val->data->available()) )  
		goto label_cond_6f;
	cVar3 = std::make_shared<java::util::LinkedHashSet>();
	this->policyQualifiers = cVar3;
	opt = val->data->getDerValue();
	//    .local v0, "opt":Lsun/security/util/DerValue;
	if ( opt->tag == cVar0 )
		goto label_cond_41;
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding of PolicyInformation")));
	// throw
	throw cVar4;
	// 111    .line 112
label_cond_41:
	if ( opt->data->available() )     
		goto label_cond_52;
	cVar5 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("No data available in policyQualifiers")));
	// throw
	throw cVar5;
	// 130    .line 114
label_cond_52:
label_goto_52:
	if ( !(opt->data->available()) )  
		goto label_cond_75;
	cVar6 = std::make_shared<java::security::cert::PolicyQualifierInfo>(opt->data->getDerValue()->toByteArray());
	this->policyQualifiers->add(cVar6);
	goto label_goto_52;
	// 164    .line 118
	// 165    .end local v0    # "opt":Lsun/security/util/DerValue;
label_cond_6f:
	this->policyQualifiers = java::util::Collections::emptySet({const[class].FS-Param});
label_cond_75:
	return;

}
// .method public constructor <init>(Lsun/security/x509/CertificatePolicyId;Ljava/util/Set;)V
sun::security::x509::PolicyInformation::PolicyInformation(std::shared_ptr<sun::security::x509::CertificatePolicyId> policyIdentifier,std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> policyQualifiers)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::util::LinkedHashSet> cVar1;
	
	//    .param p1, "policyIdentifier"    # Lsun/security/x509/CertificatePolicyId;
	//    .annotation system Ldalvik/annotation/Signature;
	// 182        value = {
	// 183            "(",
	// 184            "Lsun/security/x509/CertificatePolicyId;",
	// 185            "Ljava/util/Set",
	// 186            "<",
	// 187            "Ljava/security/cert/PolicyQualifierInfo;",
	// 188            ">;)V"
	// 189        }
	// 190    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 193        value = {
	// 194            Ljava/io/IOException;
	// 195        }
	// 196    .end annotation
	//    .local p2, "policyQualifiers":Ljava/util/Set;, "Ljava/util/Set<Ljava/security/cert/PolicyQualifierInfo;>;"
	// 201    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	if ( policyQualifiers )     
		goto label_cond_e;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("policyQualifiers is null")));
	// throw
	throw cVar0;
	// 215    .line 91
label_cond_e:
	cVar1 = std::make_shared<java::util::LinkedHashSet>(policyQualifiers);
	this->policyQualifiers = cVar1;
	this->policyIdentifier = policyIdentifier;
	return;

}
// .method public delete(Ljava/lang/String;)V
void sun::security::x509::PolicyInformation::_delete_(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 237        value = {
	// 238            Ljava/io/IOException;
	// 239        }
	// 240    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("qualifiers")))) )  
		goto label_cond_10;
	this->policyQualifiers = java::util::Collections::emptySet({const[class].FS-Param});
	return;
	// 262    .line 228
label_cond_10:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("id")))) )  
		goto label_cond_22;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute ID may not be deleted from PolicyInformation.")));
	// throw
	throw cVar0;
	// 281    .line 233
label_cond_22:
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by PolicyInformation.")))->toString());
	// throw
	throw cVar1;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::PolicyInformation::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	unsigned char cVar0;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp;
	std::shared_ptr<sun::security::util::DerOutputStream> tmp2;
	std::shared_ptr<java::util::Iterator> pq_S_iterator;
	std::shared_ptr<java::security::cert::PolicyQualifierInfo> pq;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 320        value = {
	// 321            Ljava/io/IOException;
	// 322        }
	// 323    .end annotation
	cVar0 = 0x30;
	tmp = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v2, "tmp":Lsun/security/util/DerOutputStream;
	this->policyIdentifier->encode(tmp);
	if ( this->policyQualifiers->isEmpty() )     
		goto label_cond_36;
	tmp2 = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v3, "tmp2":Lsun/security/util/DerOutputStream;
	pq_S_iterator = this->policyQualifiers->iterator();
	//    .local v1, "pq$iterator":Ljava/util/Iterator;
label_goto_1f:
	if ( !(pq_S_iterator->hasNext()) )  
		goto label_cond_33;
	pq = pq_S_iterator->next();
	pq->checkCast("java::security::cert::PolicyQualifierInfo");
	//    .local v0, "pq":Ljava/security/cert/PolicyQualifierInfo;
	tmp2->write(pq->getEncoded());
	goto label_goto_1f;
	// 385    .line 280
	// 386    .end local v0    # "pq":Ljava/security/cert/PolicyQualifierInfo;
label_cond_33:
	tmp->write(cVar0, tmp2);
	//    .end local v1    # "pq$iterator":Ljava/util/Iterator;
	//    .end local v3    # "tmp2":Lsun/security/util/DerOutputStream;
label_cond_36:
	out->write(cVar0, tmp);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::PolicyInformation::equals(std::shared_ptr<java::lang::Object> other)
{
	
	bool cVar0;
	std::shared_ptr<sun::security::x509::PolicyInformation> piOther;
	
	//    .param p1, "other"    # Ljava/lang/Object;
	cVar0 = 0x0;
	if ( other->instanceOf("sun::security::x509::PolicyInformation") )     
		goto label_cond_6;
	return cVar0;
label_cond_6:
	piOther = other;
	piOther->checkCast("sun::security::x509::PolicyInformation");
	//    .local v0, "piOther":Lsun/security/x509/PolicyInformation;
	if ( this->policyIdentifier->equals(piOther->getPolicyIdentifier()) )     
		goto label_cond_16;
	return cVar0;
	// 438    .line 136
label_cond_16:
	return this->policyQualifiers->equals(piOther->getPolicyQualifiers());

}
// .method public get(Ljava/lang/String;)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> sun::security::x509::PolicyInformation::get(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 457        value = {
	// 458            Ljava/io/IOException;
	// 459        }
	// 460    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("id")))) )  
		goto label_cond_c;
	return this->policyIdentifier;
	// 477    .line 178
label_cond_c:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("qualifiers")))) )  
		goto label_cond_18;
	return this->policyQualifiers;
	// 492    .line 181
label_cond_18:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::io::IOException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by PolicyInformation.")))->toString());
	// throw
	throw cVar0;

}
// .method public getElements()Ljava/util/Enumeration;
std::shared_ptr<java::util::Enumeration<java::lang::String>> sun::security::x509::PolicyInformation::getElements()
{
	
	std::shared_ptr<sun::security::x509::AttributeNameEnumeration> elements;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 530        value = {
	// 531            "()",
	// 532            "Ljava/util/Enumeration",
	// 533            "<",
	// 534            "Ljava/lang/String;",
	// 535            ">;"
	// 536        }
	// 537    .end annotation
	elements = std::make_shared<sun::security::x509::AttributeNameEnumeration>();
	//    .local v0, "elements":Lsun/security/x509/AttributeNameEnumeration;
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("id")));
	elements->addElement(std::make_shared<java::lang::String>(std::make_shared<char[]>("qualifiers")));
	return elements->elements();

}
// .method public getName()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::PolicyInformation::getName()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("PolicyInformation"));

}
// .method public getPolicyIdentifier()Lsun/security/x509/CertificatePolicyId;
std::shared_ptr<sun::security::x509::CertificatePolicyId> sun::security::x509::PolicyInformation::getPolicyIdentifier()
{
	
	return this->policyIdentifier;

}
// .method public getPolicyQualifiers()Ljava/util/Set;
std::shared_ptr<java::util::Set<java::security::cert::PolicyQualifierInfo>> sun::security::x509::PolicyInformation::getPolicyQualifiers()
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 587        value = {
	// 588            "()",
	// 589            "Ljava/util/Set",
	// 590            "<",
	// 591            "Ljava/security/cert/PolicyQualifierInfo;",
	// 592            ">;"
	// 593        }
	// 594    .end annotation
	return this->policyQualifiers;

}
// .method public hashCode()I
int sun::security::x509::PolicyInformation::hashCode()
{
	
	//    .local v0, "myhash":I
	return (( ( this->policyIdentifier->hashCode() + 0x25) * 0x25) + this->policyQualifiers->hashCode());

}
// .method public set(Ljava/lang/String;Ljava/lang/Object;)V
void sun::security::x509::PolicyInformation::set(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::util::Set> cVar2;
	std::shared_ptr<java::util::Iterator> i;
	std::shared_ptr<java::io::IOException> cVar3;
	std::shared_ptr<java::io::IOException> cVar4;
	std::shared_ptr<java::io::IOException> cVar5;
	std::shared_ptr<java::lang::StringBuilder> cVar6;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "obj"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 637        value = {
	// 638            Ljava/io/IOException;
	// 639        }
	// 640    .end annotation
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("id")))) )  
		goto label_cond_1b;
	if ( !(obj->instanceOf("sun::security::x509::CertificatePolicyId")) )  
		goto label_cond_12;
	obj->checkCast("sun::security::x509::CertificatePolicyId");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->policyIdentifier = obj;
label_goto_11:
	return;
	// 667    .line 195
	// 668    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_12:
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value must be instance of CertificatePolicyId.")));
	// throw
	throw cVar0;
	// 678    .line 197
label_cond_1b:
	if ( !(name->equalsIgnoreCase(std::make_shared<java::lang::String>(std::make_shared<char[]>("qualifiers")))) )  
		goto label_cond_61;
	if ( this->policyIdentifier )     
		goto label_cond_31;
	cVar1 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute must have a CertificatePolicyIdentifier value before PolicyQualifierInfo can be set.")));
	// throw
	throw cVar1;
	// 702    .line 203
label_cond_31:
	if ( !(obj->instanceOf("java::util::Set")) )  
		goto label_cond_58;
	cVar2 = obj;
	cVar2->checkCast("java::util::Set");
	i = cVar2->iterator();
	//    .local v0, "i":Ljava/util/Iterator;, "Ljava/util/Iterator<*>;"
label_cond_3c:
	if ( !(i->hasNext()) )  
		goto label_cond_53;
	//    .local v1, "obj1":Ljava/lang/Object;
	if ( i->next()->instanceOf("java::security::cert::PolicyQualifierInfo") )     
		goto label_cond_3c;
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value must be aSet of PolicyQualifierInfo objects.")));
	// throw
	throw cVar3;
	// 746    .line 212
	// 747    .end local v1    # "obj1":Ljava/lang/Object;
label_cond_53:
	obj->checkCast("java::util::Set");
	//    .end local p2    # "obj":Ljava/lang/Object;
	this->policyQualifiers = obj;
	goto label_goto_11;
	// 756    .line 214
	// 757    .end local v0    # "i":Ljava/util/Iterator;, "Ljava/util/Iterator<*>;"
	// 758    .restart local p2    # "obj":Ljava/lang/Object;
label_cond_58:
	cVar4 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute value must be of type Set.")));
	// throw
	throw cVar4;
	// 768    .line 217
label_cond_61:
	cVar6 = std::make_shared<java::lang::StringBuilder>();
	cVar5 = std::make_shared<java::io::IOException>(cVar6->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Attribute name [")))->append(name)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("] not recognized by PolicyInformation")))->toString());
	// throw
	throw cVar5;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::PolicyInformation::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> s;
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	s = std::make_shared<java::lang::StringBuilder>(cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  [")))->append(this->policyIdentifier->toString())->toString());
	//    .local v0, "s":Ljava/lang/StringBuilder;
	s->append(this->policyQualifiers)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("  ]\n")));
	return s->toString();

}


