// CPP L:\smali2cpp20\x64\Release\out\android\system\StructGroupSourceReq.smali
#include "java2ctype.h"
#include "android.system.StructGroupSourceReq.h"
#include "java.lang.String.h"
#include "java.net.InetAddress.h"
#include "libcore.util.Objects.h"

// .method public constructor <init>(ILjava/net/InetAddress;Ljava/net/InetAddress;)V
android::system::StructGroupSourceReq::StructGroupSourceReq(int gsr_interface,std::shared_ptr<java::net::InetAddress> gsr_group,std::shared_ptr<java::net::InetAddress> gsr_source)
{
	
	//    .param p1, "gsr_interface"    # I
	//    .param p2, "gsr_group"    # Ljava/net/InetAddress;
	//    .param p3, "gsr_source"    # Ljava/net/InetAddress;
	// 023    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->gsr_interface = gsr_interface;
	this->gsr_group = gsr_group;
	this->gsr_source = gsr_source;
	return;

}
// .method public toString()Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::StructGroupSourceReq::toString()
{
	
	return libcore::util::Objects::toString(this);

}


