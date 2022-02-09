// CPP L:\smali2cpp20\x64\Release\out\android\system\PacketSocketAddress.smali
#include "java2ctype.h"
#include "android.system.PacketSocketAddress.h"

// .method public constructor <init>(I[B)V
android::system::PacketSocketAddress::PacketSocketAddress(int sll_ifindex,std::shared_ptr<unsigned char[]> sll_addr)
{
	
	short cVar0;
	
	//    .param p1, "sll_ifindex"    # I
	//    .param p2, "sll_addr"    # [B
	cVar0 = 0x0;
	android::system::PacketSocketAddress::(cVar0, sll_ifindex, cVar0, cVar0, sll_addr);
	return;

}
// .method public constructor <init>(SI)V
android::system::PacketSocketAddress::PacketSocketAddress(short sll_protocol,int sll_ifindex)
{
	
	short cVar0;
	
	//    .param p1, "sll_protocol"    # S
	//    .param p2, "sll_ifindex"    # I
	cVar0 = 0x0;
	android::system::PacketSocketAddress::(sll_protocol, sll_ifindex, cVar0, cVar0, 0x0);
	return;

}
// .method public constructor <init>(SISB[B)V
android::system::PacketSocketAddress::PacketSocketAddress(short sll_protocol,int sll_ifindex,short sll_hatype,unsigned char sll_pkttype,std::shared_ptr<unsigned char[]> sll_addr)
{
	
	//    .param p1, "sll_protocol"    # S
	//    .param p2, "sll_ifindex"    # I
	//    .param p3, "sll_hatype"    # S
	//    .param p4, "sll_pkttype"    # B
	//    .param p5, "sll_addr"    # [B
	// 079    invoke-direct {p0}, Ljava/net/SocketAddress;-><init>()V
	this->sll_protocol = sll_protocol;
	this->sll_ifindex = sll_ifindex;
	this->sll_hatype = sll_hatype;
	this->sll_pkttype = sll_pkttype;
	this->sll_addr = sll_addr;
	return;

}


