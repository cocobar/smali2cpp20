// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\SocketTagger.smali
#include "java2ctype.h"
#include "dalvik.system.SocketTagger_S_1.h"
#include "dalvik.system.SocketTagger.h"
#include "java.io.FileDescriptor.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.String.h"
#include "java.net.DatagramSocket.h"
#include "java.net.Socket.h"

static dalvik::system::SocketTagger::tagger;
// .method static constructor <clinit>()V
void dalvik::system::SocketTagger::static_cinit()
{
	
	std::shared_ptr<dalvik::system::SocketTagger_S_1> cVar0;
	
	cVar0 = std::make_shared<dalvik::system::SocketTagger_S_1>();
	dalvik::system::SocketTagger::tagger = cVar0;
	return;

}
// .method public constructor <init>()V
dalvik::system::SocketTagger::SocketTagger()
{
	
	// 039    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static declared-synchronized get()Ldalvik/system/SocketTagger;
std::shared_ptr<dalvik::system::SocketTagger> dalvik::system::SocketTagger::get()
{
	
	std::shared_ptr<dalvik::system::SocketTagger> cVar0;
	
	cVar0 = dalvik::system::SocketTagger();
	cVar0->monitor_enter();
	try {
	//label_try_start_3:
	//label_try_end_5:
	}
	catch (...){
		goto label_catchall_7;
	}
	//    .catchall {:try_start_3 .. :try_end_5} :catchall_7
	cVar0->monitor_exit();
	return dalvik::system::SocketTagger::tagger;
label_catchall_7:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;

}
// .method public static declared-synchronized set(Ldalvik/system/SocketTagger;)V
void dalvik::system::SocketTagger::set(std::shared_ptr<dalvik::system::SocketTagger> tagger)
{
	
	std::shared_ptr<dalvik::system::SocketTagger> cVar0;
	std::shared_ptr<java::lang::NullPointerException> cVar1;
	
	//    .param p0, "tagger"    # Ldalvik/system/SocketTagger;
	cVar0 = dalvik::system::SocketTagger();
	cVar0->monitor_enter();
	if ( tagger )     
		goto label_cond_11;
	try {
	//label_try_start_5:
	cVar1 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("tagger == null")));
	// throw
	throw cVar1;
	// 091    :try_end_e
	// 092    .catchall {:try_start_5 .. :try_end_e} :catchall_e
label_catchall_e:
	// move-exception
	
	cVar0->monitor_exit();
	// throw
	throw;
	// 101    .line 84
label_cond_11:
	try {
	//label_try_start_11:
	dalvik::system::SocketTagger::tagger = tagger;
	//label_try_end_13:
	}
	catch (...){
		goto label_catchall_e;
	}
	//    .catchall {:try_start_11 .. :try_end_13} :catchall_e
	cVar0->monitor_exit();
	return;

}
// .method public abstract tag(Ljava/io/FileDescriptor;)V
void dalvik::system::SocketTagger::tag(std::shared_ptr<java::io::FileDescriptor> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 118        value = {
	// 119            Ljava/net/SocketException;
	// 120        }
	// 121    .end annotation

}
// .method public final tag(Ljava/net/DatagramSocket;)V
void dalvik::system::SocketTagger::tag(std::shared_ptr<java::net::DatagramSocket> socket)
{
	
	//    .param p1, "socket"    # Ljava/net/DatagramSocket;
	//    .annotation system Ldalvik/annotation/Throws;
	// 128        value = {
	// 129            Ljava/net/SocketException;
	// 130        }
	// 131    .end annotation
	if ( socket->isClosed() )     
		goto label_cond_d;
	this->tag(socket->getFileDescriptor$());
label_cond_d:
	return;

}
// .method public final tag(Ljava/net/Socket;)V
void dalvik::system::SocketTagger::tag(std::shared_ptr<java::net::Socket> socket)
{
	
	//    .param p1, "socket"    # Ljava/net/Socket;
	//    .annotation system Ldalvik/annotation/Throws;
	// 157        value = {
	// 158            Ljava/net/SocketException;
	// 159        }
	// 160    .end annotation
	if ( socket->isClosed() )     
		goto label_cond_d;
	this->tag(socket->getFileDescriptor$());
label_cond_d:
	return;

}
// .method public abstract untag(Ljava/io/FileDescriptor;)V
void dalvik::system::SocketTagger::untag(std::shared_ptr<java::io::FileDescriptor> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 184        value = {
	// 185            Ljava/net/SocketException;
	// 186        }
	// 187    .end annotation

}
// .method public final untag(Ljava/net/DatagramSocket;)V
void dalvik::system::SocketTagger::untag(std::shared_ptr<java::net::DatagramSocket> socket)
{
	
	//    .param p1, "socket"    # Ljava/net/DatagramSocket;
	//    .annotation system Ldalvik/annotation/Throws;
	// 194        value = {
	// 195            Ljava/net/SocketException;
	// 196        }
	// 197    .end annotation
	if ( socket->isClosed() )     
		goto label_cond_d;
	this->untag(socket->getFileDescriptor$());
label_cond_d:
	return;

}
// .method public final untag(Ljava/net/Socket;)V
void dalvik::system::SocketTagger::untag(std::shared_ptr<java::net::Socket> socket)
{
	
	//    .param p1, "socket"    # Ljava/net/Socket;
	//    .annotation system Ldalvik/annotation/Throws;
	// 223        value = {
	// 224            Ljava/net/SocketException;
	// 225        }
	// 226    .end annotation
	if ( socket->isClosed() )     
		goto label_cond_d;
	this->untag(socket->getFileDescriptor$());
label_cond_d:
	return;

}


