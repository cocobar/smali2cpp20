// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\ByteArrayLexOrder.smali
#include "java2ctype.h"
#include "sun.security.util.ByteArrayLexOrder.h"

// .method public constructor <init>()V
sun::security::util::ByteArrayLexOrder::ByteArrayLexOrder()
{
	
	// 025    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public final compare([B[B)I
int sun::security::util::ByteArrayLexOrder::compare(std::shared_ptr<unsigned char[]> bytes1,std::shared_ptr<unsigned char[]> bytes2)
{
	
	int i;
	int diff;
	
	//    .param p1, "bytes1"    # [B
	//    .param p2, "bytes2"    # [B
	i = 0x0;
	//    .local v1, "i":I
label_goto_1:
	if ( i >= bytes1->size() )
		goto label_cond_17;
	if ( i >= bytes2->size() )
		goto label_cond_17;
	diff = (( bytes1[i] & 0xff) - ( bytes2[i] & 0xff));
	//    .local v0, "diff":I
	if ( !(diff) )  
		goto label_cond_14;
	return diff;
	// 085    .line 55
label_cond_14:
	i = ( i + 0x1);
	goto label_goto_1;
	// 091    .line 63
	// 092    .end local v0    # "diff":I
label_cond_17:
	return (bytes1->size() -  bytes2->size());

}


