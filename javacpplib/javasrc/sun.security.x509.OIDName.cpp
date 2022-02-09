// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\OIDName.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.lang.Exception.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.OIDName.h"

// .method public constructor <init>(Ljava/lang/String;)V
sun::security::x509::OIDName::OIDName(std::shared_ptr<java::lang::String> name)
{
	
	std::shared_ptr<java::io::IOException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	std::shared_ptr<sun::security::util::ObjectIdentifier> cVar0;
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 018        value = {
	// 019            Ljava/io/IOException;
	// 020        }
	// 021    .end annotation
	// 025    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	try {
	//label_try_start_3:
	cVar0 = std::make_shared<sun::security::util::ObjectIdentifier>(name);
	this->oid = cVar0;
	//label_try_end_a:
	}
	catch (java::lang::Exception e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_b;
	}
	//    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_a} :catch_b
	return;
	// 040    .line 73
label_catch_b:
	// move-exception
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/Exception;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::io::IOException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unable to create OIDName: ")))->append(getCatchExcetionFromList)->toString());
	// throw
	throw cVar1;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::OIDName::OIDName(std::shared_ptr<sun::security::util::DerValue> derValue)
{
	
	//    .param p1, "derValue"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 075        value = {
	// 076            Ljava/io/IOException;
	// 077        }
	// 078    .end annotation
	// 082    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->oid = derValue->getOID();
	return;

}
// .method public constructor <init>(Lsun/security/util/ObjectIdentifier;)V
sun::security::x509::OIDName::OIDName(std::shared_ptr<sun::security::util::ObjectIdentifier> oid)
{
	
	//    .param p1, "oid"    # Lsun/security/util/ObjectIdentifier;
	// 101    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->oid = oid;
	return;

}
// .method public constrains(Lsun/security/x509/GeneralNameInterface;)I
int sun::security::x509::OIDName::constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "inputName"    # Lsun/security/x509/GeneralNameInterface;
	//    .annotation system Ldalvik/annotation/Throws;
	// 116        value = {
	// 117            Ljava/lang/UnsupportedOperationException;
	// 118        }
	// 119    .end annotation
	if ( inputName )     
		goto label_cond_4;
	//    .end local p1    # "inputName":Lsun/security/x509/GeneralNameInterface;
	//    .local v0, "constraintType":I
label_goto_3:
	return constraintType;
	// 134    .line 154
	// 135    .end local v0    # "constraintType":I
	// 136    .restart local p1    # "inputName":Lsun/security/x509/GeneralNameInterface;
label_cond_4:
	if ( inputName->getType() == 0x8 )
		goto label_cond_e;
	//    .restart local v0    # "constraintType":I
	goto label_goto_3;
	// 152    .line 156
	// 153    .end local v0    # "constraintType":I
label_cond_e:
	inputName->checkCast("sun::security::x509::OIDName");
	//    .end local p1    # "inputName":Lsun/security/x509/GeneralNameInterface;
	if ( !(this->equals(inputName)) )  
		goto label_cond_18;
	//    .restart local v0    # "constraintType":I
	goto label_goto_3;
	// 170    .line 160
	// 171    .end local v0    # "constraintType":I
label_cond_18:
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Narrowing and widening are not supported for OIDNames")));
	// throw
	throw cVar0;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::OIDName::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 186        value = {
	// 187            Ljava/io/IOException;
	// 188        }
	// 189    .end annotation
	out->putOID(this->oid);
	return;

}
// .method public equals(Ljava/lang/Object;)Z
bool sun::security::x509::OIDName::equals(std::shared_ptr<java::lang::Object> obj)
{
	
	std::shared_ptr<sun::security::x509::OIDName> other;
	
	//    .param p1, "obj"    # Ljava/lang/Object;
	if ( this != obj )
		goto label_cond_4;
	return 0x1;
	// 214    .line 118
label_cond_4:
	if ( obj->instanceOf("sun::security::x509::OIDName") )     
		goto label_cond_a;
	return 0x0;
label_cond_a:
	other = obj;
	other->checkCast("sun::security::x509::OIDName");
	//    .local v0, "other":Lsun/security/x509/OIDName;
	return this->oid->equals(other->oid);

}
// .method public getOID()Lsun/security/util/ObjectIdentifier;
std::shared_ptr<sun::security::util::ObjectIdentifier> sun::security::x509::OIDName::getOID()
{
	
	return this->oid;

}
// .method public getType()I
int sun::security::x509::OIDName::getType()
{
	
	return 0x8;

}
// .method public hashCode()I
int sun::security::x509::OIDName::hashCode()
{
	
	return this->oid->hashCode();

}
// .method public subtreeDepth()I
int sun::security::x509::OIDName::subtreeDepth()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 281        value = {
	// 282            Ljava/lang/UnsupportedOperationException;
	// 283        }
	// 284    .end annotation
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("subtreeDepth() not supported for OIDName.")));
	// throw
	throw cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::OIDName::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("OIDName: ")))->append(this->oid->toString())->toString();

}


