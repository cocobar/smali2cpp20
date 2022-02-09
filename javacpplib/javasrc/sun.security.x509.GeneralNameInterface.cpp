// CPP L:\smali2cpp20\x64\Release\out\sun\security\x509\GeneralNameInterface.smali
#include "java2ctype.h"
#include "sun.security.util.DerOutputStream.h"
#include "sun.security.x509.GeneralNameInterface.h"

static sun::security::x509::GeneralNameInterface::NAME_ANY = 0x0;
static sun::security::x509::GeneralNameInterface::NAME_DIFF_TYPE = -0x1;
static sun::security::x509::GeneralNameInterface::NAME_DIRECTORY = 0x4;
static sun::security::x509::GeneralNameInterface::NAME_DNS = 0x2;
static sun::security::x509::GeneralNameInterface::NAME_EDI = 0x5;
static sun::security::x509::GeneralNameInterface::NAME_IP = 0x7;
static sun::security::x509::GeneralNameInterface::NAME_MATCH = 0x0;
static sun::security::x509::GeneralNameInterface::NAME_NARROWS = 0x1;
static sun::security::x509::GeneralNameInterface::NAME_OID = 0x8;
static sun::security::x509::GeneralNameInterface::NAME_RFC822 = 0x1;
static sun::security::x509::GeneralNameInterface::NAME_SAME_TYPE = 0x3;
static sun::security::x509::GeneralNameInterface::NAME_URI = 0x6;
static sun::security::x509::GeneralNameInterface::NAME_WIDENS = 0x2;
static sun::security::x509::GeneralNameInterface::NAME_X400 = 0x3;
// .method public abstract constrains(Lsun/security/x509/GeneralNameInterface;)I
int sun::security::x509::GeneralNameInterface::constrains(std::shared_ptr<sun::security::x509::GeneralNameInterface> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 039        value = {
	// 040            Ljava/lang/UnsupportedOperationException;
	// 041        }
	// 042    .end annotation

}
// .method public abstract encode(Lsun/security/util/DerOutputStream;)V
void sun::security::x509::GeneralNameInterface::encode(std::shared_ptr<sun::security::util::DerOutputStream> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 047        value = {
	// 048            Ljava/io/IOException;
	// 049        }
	// 050    .end annotation

}
// .method public abstract subtreeDepth()I
int sun::security::x509::GeneralNameInterface::subtreeDepth()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 058        value = {
	// 059            Ljava/lang/UnsupportedOperationException;
	// 060        }
	// 061    .end annotation

}


