// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\X400Address.smali
#include "java2ctype.h"
#include "java.lang.String.h"
#include "java.lang.UnsupportedOperationException.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.GeneralNameInterface.h"
#include "sun.security.x509.X400Address.h"

// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::X400Address::X400Address(std::shared_ptr<sun::security::util::DerValue> derValue)
{
	
	//    .param p1, "derValue"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 018        value = {
	// 019            Ljava/io/IOException;
	// 020        }
	// 021    .end annotation
	// 025    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->nameValue = 0x0;
	this->nameValue = derValue->toByteArray();
	return;

}
// .method public constructor <init>([B)V
sun::security::x509::X400Address::X400Address(std::shared_ptr<unsigned char[]> value)
{
	
	//    .param p1, "value"    # [B
	// 049    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->nameValue = 0x0;
	this->nameValue = value;
	return;

}
// .method public constrains(Lsun/security/x509/GeneralNameInterface;)I
int sun::security::x509::X400Address::constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> inputName)
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .param p1, "inputName"    # Lsun/security/x509/GeneralNameInterface;
	//    .annotation system Ldalvik/annotation/Throws;
	// 069        value = {
	// 070            Ljava/lang/UnsupportedOperationException;
	// 071        }
	// 072    .end annotation
	if ( inputName )     
		goto label_cond_4;
	//    .local v0, "constraintType":I
label_goto_3:
	return constraintType;
	// 086    .line 403
	// 087    .end local v0    # "constraintType":I
label_cond_4:
	if ( inputName->getType() == 0x3 )
		goto label_cond_d;
	//    .restart local v0    # "constraintType":I
	goto label_goto_3;
	// 103    .line 407
	// 104    .end local v0    # "constraintType":I
label_cond_d:
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Narrowing, widening, and match are not supported for X400Address.")));
	// throw
	throw cVar0;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::X400Address::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	std::shared_ptr<sun::security::util::DerValue> derValue;
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 119        value = {
	// 120            Ljava/io/IOException;
	// 121        }
	// 122    .end annotation
	derValue = std::make_shared<sun::security::util::DerValue>(this->nameValue);
	//    .local v0, "derValue":Lsun/security/util/DerValue;
	out->putDerValue(derValue);
	return;

}
// .method public getType()I
int sun::security::x509::X400Address::getType()
{
	
	return 0x3;

}
// .method public subtreeDepth()I
int sun::security::x509::X400Address::subtreeDepth()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 153        value = {
	// 154            Ljava/lang/UnsupportedOperationException;
	// 155        }
	// 156    .end annotation
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("subtreeDepth not supported for X400Address")));
	// throw
	throw cVar0;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::X400Address::toString()
{
	
	return std::make_shared<java::lang::String>(std::make_shared<char[]>("X400Address: <DER-encoded value>"));

}


