// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\SerialNumber.smali
#include "java2ctype.h"
#include "java.io.IOException.h"
#include "java.io.InputStream.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.math.BigInteger.h"
#include "sun.security.util.Debug.h"
#include "sun.security.util.DerInputStream.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.DerValue.h"
#include "sun.security.x509.SerialNumber.h"

// .method public constructor <init>(I)V
sun::security::x509::SerialNumber::SerialNumber(int num)
{
	
	//    .param p1, "num"    # I
	// 017    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->serialNum = java::math::BigInteger::valueOf((long long)(num));
	return;

}
// .method public constructor <init>(Ljava/io/InputStream;)V
sun::security::x509::SerialNumber::SerialNumber(std::shared_ptr<java::io::InputStream> in)
{
	
	std::shared_ptr<sun::security::util::DerValue> derVal;
	
	//    .param p1, "in"    # Ljava/io/InputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 036        value = {
	// 037            Ljava/io/IOException;
	// 038        }
	// 039    .end annotation
	// 043    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	derVal = std::make_shared<sun::security::util::DerValue>(in);
	//    .local v0, "derVal":Lsun/security/util/DerValue;
	this->construct(derVal);
	return;

}
// .method public constructor <init>(Ljava/math/BigInteger;)V
sun::security::x509::SerialNumber::SerialNumber(std::shared_ptr<java::math::BigInteger> num)
{
	
	//    .param p1, "num"    # Ljava/math/BigInteger;
	// 064    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->serialNum = num;
	return;

}
// .method public constructor <init>(Lsun/security/util/DerInputStream;)V
sun::security::x509::SerialNumber::SerialNumber(std::shared_ptr<sun::security::util::DerInputStream> in)
{
	
	//    .param p1, "in"    # Lsun/security/util/DerInputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 077        value = {
	// 078            Ljava/io/IOException;
	// 079        }
	// 080    .end annotation
	// 084    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	//    .local v0, "derVal":Lsun/security/util/DerValue;
	this->construct(in->getDerValue());
	return;

}
// .method public constructor <init>(Lsun/security/util/DerValue;)V
sun::security::x509::SerialNumber::SerialNumber(std::shared_ptr<sun::security::util::DerValue> val)
{
	
	//    .param p1, "val"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 103        value = {
	// 104            Ljava/io/IOException;
	// 105        }
	// 106    .end annotation
	// 110    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->construct(val);
	return;

}
// .method private construct(Lsun/security/util/DerValue;)V
void sun::security::x509::SerialNumber::construct(std::shared_ptr<sun::security::util::DerValue> derVal)
{
	
	std::shared_ptr<java::io::IOException> cVar0;
	
	//    .param p1, "derVal"    # Lsun/security/util/DerValue;
	//    .annotation system Ldalvik/annotation/Throws;
	// 123        value = {
	// 124            Ljava/io/IOException;
	// 125        }
	// 126    .end annotation
	this->serialNum = derVal->getBigInteger();
	if ( !(derVal->data->available()) )  
		goto label_cond_17;
	cVar0 = std::make_shared<java::io::IOException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("Excess SerialNumber data")));
	// throw
	throw cVar0;
	// 154    .line 48
label_cond_17:
	return;

}
// .method public encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::SerialNumber::encode(std::shared_ptr<sun::security::util::DerOutputStream> out)
{
	
	//    .param p1, "out"    # Lsun/security/util/DerOutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 165        value = {
	// 166            Ljava/io/IOException;
	// 167        }
	// 168    .end annotation
	out->putInteger(this->serialNum);
	return;

}
// .method public getNumber()Ljava/math/BigInteger;
std::shared_ptr<java::math::BigInteger> sun::security::x509::SerialNumber::getNumber()
{
	
	return this->serialNum;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> sun::security::x509::SerialNumber::toString()
{
	
	std::shared_ptr<java::lang::StringBuilder> cVar0;
	
	cVar0 = std::make_shared<java::lang::StringBuilder>();
	return cVar0->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("SerialNumber: [")))->append(sun::security::util::Debug::toHexString(this->serialNum))->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("]")))->toString();

}


