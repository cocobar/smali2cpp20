// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\SocketTagger$1.smali
#include "java2ctype.h"
#include "dalvik.system.SocketTagger_S_1.h"
#include "java.io.FileDescriptor.h"

// .method constructor <init>()V
dalvik::system::SocketTagger_S_1::SocketTagger_S_1()
{
	
	// 023    invoke-direct {p0}, Ldalvik/system/SocketTagger;-><init>()V
	return;

}
// .method public tag(Ljava/io/FileDescriptor;)V
void dalvik::system::SocketTagger_S_1::tag(std::shared_ptr<java::io::FileDescriptor> socketDescriptor)
{
	
	//    .param p1, "socketDescriptor"    # Ljava/io/FileDescriptor;
	//    .annotation system Ldalvik/annotation/Throws;
	// 035        value = {
	// 036            Ljava/net/SocketException;
	// 037        }
	// 038    .end annotation
	return;

}
// .method public untag(Ljava/io/FileDescriptor;)V
void dalvik::system::SocketTagger_S_1::untag(std::shared_ptr<java::io::FileDescriptor> socketDescriptor)
{
	
	//    .param p1, "socketDescriptor"    # Ljava/io/FileDescriptor;
	//    .annotation system Ldalvik/annotation/Throws;
	// 049        value = {
	// 050            Ljava/net/SocketException;
	// 051        }
	// 052    .end annotation
	return;

}


