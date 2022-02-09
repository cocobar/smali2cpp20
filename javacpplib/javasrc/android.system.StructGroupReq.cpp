// CPP L:\smali2cpp20\x64\Release\out\android\system\StructGroupReq.smali
#include "java2ctype.h"
#include "android.system.StructGroupReq.h"
#include "java.lang.String.h"
#include "java.net.InetAddress.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>(ILjava/net/InetAddress;)V
android::system::StructGroupReq::StructGroupReq(int gr_interface,std::shared_ptr<java::net::InetAddress> gr_group)
{
	
	//    .param p1, "gr_interface"    # I
	//    .param p2, "gr_group"    # Ljava/net/InetAddress;
	// 020    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->gr_interface = gr_interface;
	this->gr_group = gr_group;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructGroupReq::toString()
{
	
	return libcore::util::Objects::toString(this);

}


