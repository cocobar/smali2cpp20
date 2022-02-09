// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\DistributionPointName.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.util.Objects.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.DistributionPointName.h"
#include "sun.security.x509.GeneralNames.h"
#include "sun.security.x509.RDN.h"

static sun::security::x509::DistributionPointName::TAG_FULL_NAME = 0x0t;
static sun::security::x509::DistributionPointName::TAG_RELATIVE_NAME = 0x1t;
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::DistributionPointName::DistributionPointName(std::shared_ptr<sun::security::util::DerValue> encoding)
{
	
	std::shared_ptr<sun::security::x509::GeneralNames> cVar0;
	std::shared_ptr<sun::security::x509::GeneralNames> cVar1;
	std::shared_ptr<sun::security::x509::RDN> cVar2;
	std::shared_ptr<java::io::IOException> cVar3;
	
	//    .param p1, "encoding"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 025        value = {
	// 026            Ljava/io/IOException;
	// 027        }
	// 028    .end annotation
	cVar0 = 0x0;
	// 034    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fullName = cVar0;
	this->relativeName = cVar0;
	if ( !(encoding->isContextSpecific(0x0)) )  
		goto label_cond_22;
	if ( !(encoding->isConstructed()) )  
		goto label_cond_22;
	encoding->resetTag(0x30);
	cVar1 = std::make_shared<sun::security::x509::GeneralNames>(encoding);
	this->fullName = cVar1;
label_goto_21:
	return;
	// 075    .line 138
label_cond_22:
	if ( !(encoding->isContextSpecific(0x1)) )  
		goto label_cond_3c;
	if ( !(encoding->isConstructed()) )  
		goto label_cond_3c;
	encoding->resetTag(0x31);
	cVar2 = std::make_shared<sun::security::x509::RDN>(encoding);
	this->relativeName = cVar2;
	goto label_goto_21;
	// 107    .line 145
label_cond_3c:
	cVar3 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Invalid encoding for DistributionPointName")));
	// throw
	throw cVar3;

}
// .method public constructor <init>(Lsun/security/x509/GeneralNames;)V
sun::security::x509::DistributionPointName::DistributionPointName(std::shared_ptr<sun::security::x509::GeneralNames> fullName)
{
	
	std::shared_ptr<sun::security::x509::GeneralNames> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "fullName"    # Lsun/security/x509/GeneralNames;
	cVar0 = 0x0;
	// 126    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fullName = cVar0;
	this->relativeName = cVar0;
	if ( fullName )     
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("fullName must not be null")));
	// throw
	throw cVar1;
	// 146    .line 106
label_cond_13:
	this->fullName = fullName;
	return;

}
// .method public constructor <init>(Lsun/security/x509/RDN;)V
sun::security::x509::DistributionPointName::DistributionPointName(std::shared_ptr<sun::security::x509::RDN> relativeName)
{
	
	std::shared_ptr<sun::security::x509::GeneralNames> cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	
	//    .param p1, "relativeName"    # Lsun/security/x509/RDN;
	cVar0 = 0x0;
	// 162    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->fullName = cVar0;
	this->relativeName = cVar0;
	if ( relativeName )     
		goto label_cond_13;
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("relativeName must not be null")));
	// throw
	throw cVar1;
	// 182    .line 121
label_cond_13:
	this->relativeName = relativeName;
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::DistributionPointName::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	unsigned char cVar0;
	bool cVar1;
	std::shared_ptr<sun::security::util::DerOutputStream> theChoice;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 196        value = {
	// 197            Ljava/io/IOException;
	// 198        }
	// 199    .end annotation
	cVar0 = -0x80;
	cVar1 = 0x1;
	theChoice = std::make_shared<sun::security::util::DerOutputStream>();
	//    .local v0, "theChoice":Lsun/security/util/DerOutputStream;
	if ( !(this->fullName) )  
		goto label_cond_1a;
	this->fullName->encode(theChoice);
	out->writeImplicit(sun::security::util::DerValue::createTag(cVar0, cVar1, 0x0), theChoice);
label_goto_19:
	return;
	// 236    .line 181
label_cond_1a:
	this->relativeName->encode(theChoice);
	out->writeImplicit(sun::security::util::DerValue::createTag(cVar0, cVar1, cVar1), theChoice);
	goto label_goto_19;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::DistributionPointName::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	bool cVar1;
	std::shared_ptr<sun::security::x509::DistributionPointName> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	cVar1 = 0x0;
	if ( this != obj )
		goto label_cond_5;
	return 0x1;
	// 268    .line 199
label_cond_5:
	if ( obj->instanceOf("sun::security::x509::DistributionPointName") )     
		goto label_cond_a;
	return cVar1;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::x509::DistributionPointName");
	//    .local v0, "other":Lsun/security/x509/DistributionPointName;
	if ( !(java::util::Objects::equals(this->fullName, other->fullName)) )  
		goto label_cond_1f;
	cVar1 = java::util::Objects::equals(this->relativeName, other->relativeName);
label_cond_1f:
	return cVar1;

}
// .method public getFullName()Lsun/security/x509/GeneralNames;
std::shared_ptr<sun::security::x509::GeneralNames> sun::security::x509::DistributionPointName::getFullName()
{
	
	return this->fullName;

}
// .method public getRelativeName()Lsun/security/x509/RDN;
std::shared_ptr<sun::security::x509::RDN> sun::security::x509::DistributionPointName::getRelativeName()
{
	
	return this->relativeName;

}
// .method public hashCode()I
int sun::security::x509::DistributionPointName::hashCode()
{
	
	int hash;
	
	hash = this->hashCode;
	//    .local v0, "hash":I
	if ( hash )     
		goto label_cond_13;
	0x1;
	if ( !(this->fullName) )  
		goto label_cond_14;
	hash = ( this->fullName->hashCode() + 0x1);
label_goto_11:
	this->hashCode = hash;
label_cond_13:
	return hash;
	// 365    .line 221
label_cond_14:
	hash = ( this->relativeName->hashCode() + 0x1);
	goto label_goto_11;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::DistributionPointName::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> sb;
	
	sb = std::make_shared<java::lang::StringBuilder>();
	//    .local v0, "sb":Ljava/lang/StringBuilder;
	if ( !(this->fullName) )  
		goto label_cond_21;
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DistributionPointName:\n     ")))->append(this->fullName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
label_goto_1c:
	return sb->toString();
	// 418    .line 237
label_cond_21:
	sb->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("DistributionPointName:\n     ")))->append(this->relativeName)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("\n")));
	goto label_goto_1c;

}


