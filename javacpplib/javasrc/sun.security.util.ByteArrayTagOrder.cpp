// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\ByteArrayTagOrder.smali
#include "java2ctype.h"
#include "sun.security.util.ByteArrayTagOrder.h"

// .method public constructor <init>()V
sun::security::util::ByteArrayTagOrder::ByteArrayTagOrder()
{
	
	// 025    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public final compare([B[B)I
int sun::security::util::ByteArrayTagOrder::compare(std::shared_ptr<unsigned char[]> bytes1,std::shared_ptr<unsigned char[]> bytes2)
{
	
	int cVar0;
	
	//    .param p1, "bytes1"    # [B
	//    .param p2, "bytes2"    # [B
	cVar0 = 0x0;
	return (( bytes1[cVar0] | 0x20) -  ( bytes2[cVar0] | 0x20));

}


