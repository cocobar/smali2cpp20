// CPP L:\smali2cpp20\x64\Release\out\android\system\NetlinkSocketAddress.smali
#include "java2ctype.h"
#include "android.system.NetlinkSocketAddress.h"
#include "java.lang.String.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>()V
android::system::NetlinkSocketAddress::NetlinkSocketAddress()
{
	
	int cVar0;
	
	cVar0 = 0x0;
	android::system::NetlinkSocketAddress::(cVar0, cVar0);
	return;

}
// .method public constructor <init>(I)V
android::system::NetlinkSocketAddress::NetlinkSocketAddress(int nlPortId)
{
	
	//    .param p1, "nlPortId"    # I
	android::system::NetlinkSocketAddress::(nlPortId, 0x0);
	return;

}
// .method public constructor <init>(II)V
android::system::NetlinkSocketAddress::NetlinkSocketAddress(int nlPortId,int nlGroupsMask)
{
	
	//    .param p1, "nlPortId"    # I
	//    .param p2, "nlGroupsMask"    # I
	// 047    invoke-direct {p0}, Ljava/net/SocketAddress;-><init>()V
	this->nlPortId = nlPortId;
	this->nlGroupsMask = nlGroupsMask;
	return;

}
// .method public getGroupsMask()I
int android::system::NetlinkSocketAddress::getGroupsMask()
{
	
	return this->nlGroupsMask;

}
// .method public getPortId()I
int android::system::NetlinkSocketAddress::getPortId()
{
	
	return this->nlPortId;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::NetlinkSocketAddress::toString()
{
	
	return libcore::util::Objects::toString(this);

}


