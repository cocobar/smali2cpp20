// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\FreshestCRLExtension.smali
#include "java2ctype.h"
#include "java.io.OutputStream.h"
#include "java.lang.Boolean.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.List.h"
#include "sun.security.util.ObjectIdentifier.h"
#include "sun.security.x509.CRLDistributionPointsExtension.h"
#include "sun.security.x509.DistributionPoint.h"
#include "sun.security.x509.FreshestCRLExtension.h"
#include "sun.security.x509.PKIXExtensions.h"

static sun::security::x509::FreshestCRLExtension::NAME = std::make_shared<java::lang::String>("FreshestCRL");
// .method public constructor <init>(Ljava/lang/Boolean;Ljava/lang/Object;)V
sun::security::x509::FreshestCRLExtension::FreshestCRLExtension(std::shared_ptr<java::lang::Boolean> critical,std::shared_ptr<java::lang::Object> value)
{
	
	//    .param p1, "critical"    # Ljava/lang/Boolean;
	//    .param p2, "value"    # Ljava/lang/Object;
	//    .annotation system Ldalvik/annotation/Throws;
	// 016        value = {
	// 017            Ljava/io/IOException;
	// 018        }
	// 019    .end annotation
	sun::security::x509::CRLDistributionPointsExtension::(sun::security::x509::PKIXExtensions::FreshestCRL_Id, java::lang::Boolean::valueOf(critical->booleanValue()), value, std::make_shared<java::lang::String>(std::make_shared<char[]>("FreshestCRL")));
	return;

}
// .method public constructor <init>(Ljava/util/List;)V
sun::security::x509::FreshestCRLExtension::FreshestCRLExtension(std::shared_ptr<java::util::List<sun::security::x509::DistributionPoint>> distributionPoints)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 046        value = {
	// 047            "(",
	// 048            "Ljava/util/List",
	// 049            "<",
	// 050            "Lsun/security/x509/DistributionPoint;",
	// 051            ">;)V"
	// 052        }
	// 053    .end annotation
	//    .annotation system Ldalvik/annotation/Throws;
	// 056        value = {
	// 057            Ljava/io/IOException;
	// 058        }
	// 059    .end annotation
	//    .local p1, "distributionPoints":Ljava/util/List;, "Ljava/util/List<Lsun/security/x509/DistributionPoint;>;"
	sun::security::x509::CRLDistributionPointsExtension::(sun::security::x509::PKIXExtensions::FreshestCRL_Id, 0x0, distributionPoints, std::make_shared<java::lang::String>(std::make_shared<char[]>("FreshestCRL")));
	return;

}
// .method public encode(Ljava/io/OutputStream;)V
void sun::security::x509::FreshestCRLExtension::encode(std::shared_ptr<java::io::OutputStream> out)
{
	
	//    .param p1, "out"    # Ljava/io/OutputStream;
	//    .annotation system Ldalvik/annotation/Throws;
	// 082        value = {
	// 083            Ljava/io/IOException;
	// 084        }
	// 085    .end annotation
	this->encode(out, sun::security::x509::PKIXExtensions::FreshestCRL_Id, 0x0);
	return;

}


