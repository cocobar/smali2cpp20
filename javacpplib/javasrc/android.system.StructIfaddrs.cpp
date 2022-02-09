// CPP L:\smali2cpp20\x64\Release\out\android\system\StructIfaddrs.smali
#include "java2ctype.h"
#include "android.system.StructIfaddrs.h"
#include "java.lang.String.h"
#include "java.net.InetAddress.h"

// .method public constructor <init>(Ljava/lang/String;ILjava/net/InetAddress;Ljava/net/InetAddress;Ljava/net/InetAddress;[B)V
android::system::StructIfaddrs::StructIfaddrs(std::shared_ptr<java::lang::String> ifa_name,int ifa_flags,std::shared_ptr<java::net::InetAddress> ifa_addr,std::shared_ptr<java::net::InetAddress> ifa_netmask,std::shared_ptr<java::net::InetAddress> ifa_broadaddr,std::shared_ptr<unsigned char[]> hwaddr)
{
	
	//    .param p1, "ifa_name"    # Ljava/lang/String;
	//    .param p2, "ifa_flags"    # I
	//    .param p3, "ifa_addr"    # Ljava/net/InetAddress;
	//    .param p4, "ifa_netmask"    # Ljava/net/InetAddress;
	//    .param p5, "ifa_broadaddr"    # Ljava/net/InetAddress;
	//    .param p6, "hwaddr"    # [B
	// 032    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->ifa_name = ifa_name;
	this->ifa_flags = ifa_flags;
	this->ifa_addr = ifa_addr;
	this->ifa_netmask = ifa_netmask;
	this->ifa_broadaddr = ifa_broadaddr;
	this->hwaddr = hwaddr;
	return;

}


