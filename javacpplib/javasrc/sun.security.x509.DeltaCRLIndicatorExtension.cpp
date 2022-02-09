// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\DeltaCRLIndicatorExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.math.BigInteger.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CRLNumberExtension.h"
#include "sun.security.x509.DeltaCRLIndicatorExtension.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::DeltaCRLIndicatorExtension::LABEL = std::make_shared<java::lang::String>("Base CRL Number");
static sun::security::x509::DeltaCRLIndicatorExtension::NAME = std::make_shared<java::lang::String>("DeltaCRLIndicator");
// .method public constructor <init>(I)V
sun::security::x509::DeltaCRLIndicatorExtension::DeltaCRLIndicatorExtension(int crlNum)
{
	
	//    .param p1, "crlNum"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 017        value = {
	// 018            Ljava/io/IOException;
	// 019        }
	// 020    .end annotation
	sun::security::x509::CRLNumberExtension::(sun::security::x509::PKIXExtensions::DeltaCRLIndicator_Id, 0x1, java::math::BigInteger::valueOf((long long)(crlNum)), std::make_shared<java::lang::String>(std::make_shared<char[]>("DeltaCRLIndicator")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Base CRL Number")));
	return;

}
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::DeltaCRLIndicatorExtension::DeltaCRLIndicatorExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 053        value = {
	// 054            Ljava/io/IOException;
	// 055        }
	// 056    .end annotation
	sun::security::x509::CRLNumberExtension::(sun::security::x509::PKIXExtensions::DeltaCRLIndicator_Id, java::lang::Boolean::valueOf(critical->booleanValue()), value, std::make_shared<java::lang::String>(std::make_shared<char[]>("DeltaCRLIndicator")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Base CRL Number")));
	return;

}
// .method public constructor <init>(Ljava/math/BigInteger;)V
sun::security::x509::DeltaCRLIndicatorExtension::DeltaCRLIndicatorExtension(std::shared_ptr<java::math::BigInteger> crlNum)
{
	
	//    .param p1, "crlNum"    # Ljava/math/BigInteger;
	//    .annotation system Ldalvik/annotation/Throws;
	// 090        value = {
	// 091            Ljava/io/IOException;
	// 092        }
	// 093    .end annotation
	sun::security::x509::CRLNumberExtension::(sun::security::x509::PKIXExtensions::DeltaCRLIndicator_Id, 0x1, crlNum, std::make_shared<java::lang::String>(std::make_shared<char[]>("DeltaCRLIndicator")), std::make_shared<java::lang::String>(std::make_shared<char[]>("Base CRL Number")));
	return;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::DeltaCRLIndicatorExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 121        value = {
	// 122            Ljava/io/IOException;
	// 123        }
	// 124    .end annotation
	tmp = new sun::security::util::DerOutputStream();
	//    .local v0, "tmp":Lsun/security/util/DerOutputStream;
	this->encode(out, sun::security::x509::PKIXExtensions::DeltaCRLIndicator_Id, 0x1);
	return;

}


