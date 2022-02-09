// CPP L:\smali2cpp20\x64\Release\out\android\system\StructIcmpHdr.smali
#include "java2ctype.h"
#include "android.system.OsConstants.h"
#include "android.system.StructIcmpHdr.h"
#include "java.lang.Object.h"

// .method private constructor <init>()V
android::system::StructIcmpHdr::StructIcmpHdr()
{
	
	// 016    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->packet = std::make_shared<std::vector<unsigned char[]>>(0x8);
	return;

}
// .method public static IcmpEchoHdr(ZI)Landroid/system/StructIcmpHdr;
std::shared_ptr<android::system::StructIcmpHdr> android::system::StructIcmpHdr::IcmpEchoHdr(bool ipv4,int seq)
{
	
	std::shared_ptr<android::system::StructIcmpHdr> hdr;
	int cVar0;
	
	//    .param p0, "ipv4"    # Z
	//    .param p1, "seq"    # I
	hdr = std::make_shared<android::system::StructIcmpHdr>();
	//    .local v0, "hdr":Landroid/system/StructIcmpHdr;
	if ( !(ipv4) )  
		goto label_cond_1e;
	cVar0 = android::system::OsConstants::ICMP_ECHO;
label_goto_b:
	hdr->packet[0x0] = (unsigned char)(cVar0);
	hdr->packet[0x6] = (unsigned char)(_shri(seq,0x8));
	hdr->packet[0x7] = (unsigned char)(seq);
	return hdr;
	// 078    .line 50
label_cond_1e:
	cVar0 = android::system::OsConstants::ICMP6_ECHO_REQUEST;
	goto label_goto_b;

}
// .method public getBytes()[B
unsigned char android::system::StructIcmpHdr::getBytes()
{
	
	std::shared_ptr<unsigned char[]> cVar0;
	
	cVar0 = this->packet->clone();
	cVar0->checkCast("unsigned char[]");
	return cVar0;

}


