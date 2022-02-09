// CPP L:\smali2cpp20\x64\Release\out\android\system\Os.smali
#include "java2ctype.h"
#include "android.system.Os.h"
#include "android.system.StructAddrinfo.h"
#include "android.system.StructCapUserData.h"
#include "android.system.StructCapUserHeader.h"
#include "android.system.StructFlock.h"
#include "android.system.StructGroupReq.h"
#include "android.system.StructGroupSourceReq.h"
#include "android.system.StructIfaddrs.h"
#include "android.system.StructLinger.h"
#include "android.system.StructPasswd.h"
#include "android.system.StructPollfd.h"
#include "android.system.StructRlimit.h"
#include "android.system.StructStat.h"
#include "android.system.StructStatVfs.h"
#include "android.system.StructTimeval.h"
#include "android.system.StructUcred.h"
#include "android.system.StructUtsname.h"
#include "android.util.MutableInt.h"
#include "android.util.MutableLong.h"
#include "java.io.FileDescriptor.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.net.InetAddress.h"
#include "java.net.InetSocketAddress.h"
#include "java.net.SocketAddress.h"
#include "java.nio.ByteBuffer.h"
#include "libcore.io.Libcore.h"
#include "libcore.io.Os.h"

// .method private constructor <init>()V
android::system::Os::Os()
{
	
	// 012    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static accept(Ljava/io/FileDescriptor;Ljava/net/InetSocketAddress;)Ljava/io/FileDescriptor;
std::shared_ptr<java::io::FileDescriptor> android::system::Os::accept(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::net::InetSocketAddress> peerAddress)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "peerAddress"    # Ljava/net/InetSocketAddress;
	//    .annotation system Ldalvik/annotation/Throws;
	// 022        value = {
	// 023            Landroid/system/ErrnoException;,
	// 024            Ljava/net/SocketException;
	// 025        }
	// 026    .end annotation
	return libcore::io::Libcore::os->accept(fd, peerAddress);

}
// .method public static accept(Ljava/io/FileDescriptor;Ljava/net/SocketAddress;)Ljava/io/FileDescriptor;
std::shared_ptr<java::io::FileDescriptor> android::system::Os::accept(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::net::SocketAddress> peerAddress)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "peerAddress"    # Ljava/net/SocketAddress;
	//    .annotation system Ldalvik/annotation/Throws;
	// 044        value = {
	// 045            Landroid/system/ErrnoException;,
	// 046            Ljava/net/SocketException;
	// 047        }
	// 048    .end annotation
	return libcore::io::Libcore::os->accept(fd, peerAddress);

}
// .method public static access(Ljava/lang/String;I)Z
bool android::system::Os::access(std::shared_ptr<java::lang::String> path,int mode)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "mode"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 066        value = {
	// 067            Landroid/system/ErrnoException;
	// 068        }
	// 069    .end annotation
	return libcore::io::Libcore::os->access(path, mode);

}
// .method public static android_getaddrinfo(Ljava/lang/String;Landroid/system/StructAddrinfo;I)[Ljava/net/InetAddress;
std::shared_ptr<java::net::InetAddress> android::system::Os::android_getaddrinfo(std::shared_ptr<java::lang::String> node,std::shared_ptr<android::system::StructAddrinfo> hints,int netId)
{
	
	//    .param p0, "node"    # Ljava/lang/String;
	//    .param p1, "hints"    # Landroid/system/StructAddrinfo;
	//    .param p2, "netId"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 088        value = {
	// 089            Landroid/system/GaiException;
	// 090        }
	// 091    .end annotation
	return libcore::io::Libcore::os->android_getaddrinfo(node, hints, netId);

}
// .method public static bind(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V
void android::system::Os::bind(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::net::InetAddress> address,int port)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "address"    # Ljava/net/InetAddress;
	//    .param p2, "port"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 110        value = {
	// 111            Landroid/system/ErrnoException;,
	// 112            Ljava/net/SocketException;
	// 113        }
	// 114    .end annotation
	libcore::io::Libcore::os->bind(fd, address, port);
	return;

}
// .method public static bind(Ljava/io/FileDescriptor;Ljava/net/SocketAddress;)V
void android::system::Os::bind(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::net::SocketAddress> address)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "address"    # Ljava/net/SocketAddress;
	//    .annotation system Ldalvik/annotation/Throws;
	// 130        value = {
	// 131            Landroid/system/ErrnoException;,
	// 132            Ljava/net/SocketException;
	// 133        }
	// 134    .end annotation
	libcore::io::Libcore::os->bind(fd, address);
	return;

}
// .method public static capget(Landroid/system/StructCapUserHeader;)[Landroid/system/StructCapUserData;
std::shared_ptr<android::system::StructCapUserData> android::system::Os::capget(std::shared_ptr<android::system::StructCapUserHeader> hdr)
{
	
	//    .param p0, "hdr"    # Landroid/system/StructCapUserHeader;
	//    .annotation system Ldalvik/annotation/Throws;
	// 149        value = {
	// 150            Landroid/system/ErrnoException;
	// 151        }
	// 152    .end annotation
	return libcore::io::Libcore::os->capget(hdr);

}
// .method public static capset(Landroid/system/StructCapUserHeader;[Landroid/system/StructCapUserData;)V
void android::system::Os::capset(std::shared_ptr<android::system::StructCapUserHeader> hdr,std::shared_ptr<std::vector<android::system::StructCapUserData>> data)
{
	
	//    .param p0, "hdr"    # Landroid/system/StructCapUserHeader;
	//    .param p1, "data"    # [Landroid/system/StructCapUserData;
	//    .annotation system Ldalvik/annotation/Throws;
	// 170        value = {
	// 171            Landroid/system/ErrnoException;
	// 172        }
	// 173    .end annotation
	libcore::io::Libcore::os->capset(hdr, data);
	return;

}
// .method public static chmod(Ljava/lang/String;I)V
void android::system::Os::chmod(std::shared_ptr<java::lang::String> path,int mode)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "mode"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 190        value = {
	// 191            Landroid/system/ErrnoException;
	// 192        }
	// 193    .end annotation
	libcore::io::Libcore::os->chmod(path, mode);
	return;

}
// .method public static chown(Ljava/lang/String;II)V
void android::system::Os::chown(std::shared_ptr<java::lang::String> path,int uid,int gid)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "uid"    # I
	//    .param p2, "gid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 210        value = {
	// 211            Landroid/system/ErrnoException;
	// 212        }
	// 213    .end annotation
	libcore::io::Libcore::os->chown(path, uid, gid);
	return;

}
// .method public static close(Ljava/io/FileDescriptor;)V
void android::system::Os::close(std::shared_ptr<java::io::FileDescriptor> fd)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .annotation system Ldalvik/annotation/Throws;
	// 228        value = {
	// 229            Landroid/system/ErrnoException;
	// 230        }
	// 231    .end annotation
	libcore::io::Libcore::os->close(fd);
	return;

}
// .method public static connect(Ljava/io/FileDescriptor;Ljava/net/InetAddress;I)V
void android::system::Os::connect(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::net::InetAddress> address,int port)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "address"    # Ljava/net/InetAddress;
	//    .param p2, "port"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 248        value = {
	// 249            Landroid/system/ErrnoException;,
	// 250            Ljava/net/SocketException;
	// 251        }
	// 252    .end annotation
	libcore::io::Libcore::os->connect(fd, address, port);
	return;

}
// .method public static connect(Ljava/io/FileDescriptor;Ljava/net/SocketAddress;)V
void android::system::Os::connect(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::net::SocketAddress> address)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "address"    # Ljava/net/SocketAddress;
	//    .annotation system Ldalvik/annotation/Throws;
	// 268        value = {
	// 269            Landroid/system/ErrnoException;,
	// 270            Ljava/net/SocketException;
	// 271        }
	// 272    .end annotation
	libcore::io::Libcore::os->connect(fd, address);
	return;

}
// .method public static dup(Ljava/io/FileDescriptor;)Ljava/io/FileDescriptor;
std::shared_ptr<java::io::FileDescriptor> android::system::Os::dup(std::shared_ptr<java::io::FileDescriptor> oldFd)
{
	
	//    .param p0, "oldFd"    # Ljava/io/FileDescriptor;
	//    .annotation system Ldalvik/annotation/Throws;
	// 287        value = {
	// 288            Landroid/system/ErrnoException;
	// 289        }
	// 290    .end annotation
	return libcore::io::Libcore::os->dup(oldFd);

}
// .method public static dup2(Ljava/io/FileDescriptor;I)Ljava/io/FileDescriptor;
std::shared_ptr<java::io::FileDescriptor> android::system::Os::dup2(std::shared_ptr<java::io::FileDescriptor> oldFd,int newFd)
{
	
	//    .param p0, "oldFd"    # Ljava/io/FileDescriptor;
	//    .param p1, "newFd"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 308        value = {
	// 309            Landroid/system/ErrnoException;
	// 310        }
	// 311    .end annotation
	return libcore::io::Libcore::os->dup2(oldFd, newFd);

}
// .method public static environ()[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::Os::environ()
{
	
	return libcore::io::Libcore::os->environ();

}
// .method public static execv(Ljava/lang/String;[Ljava/lang/String;)V
void android::system::Os::execv(std::shared_ptr<java::lang::String> filename,std::shared_ptr<std::vector<java::lang::String>> argv)
{
	
	//    .param p0, "filename"    # Ljava/lang/String;
	//    .param p1, "argv"    # [Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 343        value = {
	// 344            Landroid/system/ErrnoException;
	// 345        }
	// 346    .end annotation
	libcore::io::Libcore::os->execv(filename, argv);
	return;

}
// .method public static execve(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V
void android::system::Os::execve(std::shared_ptr<java::lang::String> filename,std::shared_ptr<std::vector<java::lang::String>> argv,std::shared_ptr<std::vector<java::lang::String>> envp)
{
	
	//    .param p0, "filename"    # Ljava/lang/String;
	//    .param p1, "argv"    # [Ljava/lang/String;
	//    .param p2, "envp"    # [Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 363        value = {
	// 364            Landroid/system/ErrnoException;
	// 365        }
	// 366    .end annotation
	libcore::io::Libcore::os->execve(filename, argv, envp);
	return;

}
// .method public static fchmod(Ljava/io/FileDescriptor;I)V
void android::system::Os::fchmod(std::shared_ptr<java::io::FileDescriptor> fd,int mode)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "mode"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 382        value = {
	// 383            Landroid/system/ErrnoException;
	// 384        }
	// 385    .end annotation
	libcore::io::Libcore::os->fchmod(fd, mode);
	return;

}
// .method public static fchown(Ljava/io/FileDescriptor;II)V
void android::system::Os::fchown(std::shared_ptr<java::io::FileDescriptor> fd,int uid,int gid)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "uid"    # I
	//    .param p2, "gid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 402        value = {
	// 403            Landroid/system/ErrnoException;
	// 404        }
	// 405    .end annotation
	libcore::io::Libcore::os->fchown(fd, uid, gid);
	return;

}
// .method public static fcntlFlock(Ljava/io/FileDescriptor;ILandroid/system/StructFlock;)I
int android::system::Os::fcntlFlock(std::shared_ptr<java::io::FileDescriptor> fd,int cmd,std::shared_ptr<android::system::StructFlock> arg)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "cmd"    # I
	//    .param p2, "arg"    # Landroid/system/StructFlock;
	//    .annotation system Ldalvik/annotation/Throws;
	// 422        value = {
	// 423            Landroid/system/ErrnoException;,
	// 424            Ljava/io/InterruptedIOException;
	// 425        }
	// 426    .end annotation
	return libcore::io::Libcore::os->fcntlFlock(fd, cmd, arg);

}
// .method public static fcntlInt(Ljava/io/FileDescriptor;II)I
int android::system::Os::fcntlInt(std::shared_ptr<java::io::FileDescriptor> fd,int cmd,int arg)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "cmd"    # I
	//    .param p2, "arg"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 445        value = {
	// 446            Landroid/system/ErrnoException;
	// 447        }
	// 448    .end annotation
	return libcore::io::Libcore::os->fcntlInt(fd, cmd, arg);

}
// .method public static fcntlVoid(Ljava/io/FileDescriptor;I)I
int android::system::Os::fcntlVoid(std::shared_ptr<java::io::FileDescriptor> fd,int cmd)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "cmd"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 466        value = {
	// 467            Landroid/system/ErrnoException;
	// 468        }
	// 469    .end annotation
	return libcore::io::Libcore::os->fcntlVoid(fd, cmd);

}
// .method public static fdatasync(Ljava/io/FileDescriptor;)V
void android::system::Os::fdatasync(std::shared_ptr<java::io::FileDescriptor> fd)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .annotation system Ldalvik/annotation/Throws;
	// 486        value = {
	// 487            Landroid/system/ErrnoException;
	// 488        }
	// 489    .end annotation
	libcore::io::Libcore::os->fdatasync(fd);
	return;

}
// .method public static fstat(Ljava/io/FileDescriptor;)Landroid/system/StructStat;
std::shared_ptr<android::system::StructStat> android::system::Os::fstat(std::shared_ptr<java::io::FileDescriptor> fd)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .annotation system Ldalvik/annotation/Throws;
	// 504        value = {
	// 505            Landroid/system/ErrnoException;
	// 506        }
	// 507    .end annotation
	return libcore::io::Libcore::os->fstat(fd);

}
// .method public static fstatvfs(Ljava/io/FileDescriptor;)Landroid/system/StructStatVfs;
std::shared_ptr<android::system::StructStatVfs> android::system::Os::fstatvfs(std::shared_ptr<java::io::FileDescriptor> fd)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .annotation system Ldalvik/annotation/Throws;
	// 524        value = {
	// 525            Landroid/system/ErrnoException;
	// 526        }
	// 527    .end annotation
	return libcore::io::Libcore::os->fstatvfs(fd);

}
// .method public static fsync(Ljava/io/FileDescriptor;)V
void android::system::Os::fsync(std::shared_ptr<java::io::FileDescriptor> fd)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .annotation system Ldalvik/annotation/Throws;
	// 544        value = {
	// 545            Landroid/system/ErrnoException;
	// 546        }
	// 547    .end annotation
	libcore::io::Libcore::os->fsync(fd);
	return;

}
// .method public static ftruncate(Ljava/io/FileDescriptor;J)V
void android::system::Os::ftruncate(std::shared_ptr<java::io::FileDescriptor> fd,long long length)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "length"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 563        value = {
	// 564            Landroid/system/ErrnoException;
	// 565        }
	// 566    .end annotation
	libcore::io::Libcore::os->ftruncate(fd, length);
	return;

}
// .method public static gai_strerror(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::Os::gai_strerror(int error)
{
	
	//    .param p0, "error"    # I
	return libcore::io::Libcore::os->gai_strerror(error);

}
// .method public static getegid()I
int android::system::Os::getegid()
{
	
	return libcore::io::Libcore::os->getegid();

}
// .method public static getenv(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::Os::getenv(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	return libcore::io::Libcore::os->getenv(name);

}
// .method public static geteuid()I
int android::system::Os::geteuid()
{
	
	return libcore::io::Libcore::os->geteuid();

}
// .method public static getgid()I
int android::system::Os::getgid()
{
	
	return libcore::io::Libcore::os->getgid();

}
// .method public static getifaddrs()[Landroid/system/StructIfaddrs;
std::shared_ptr<android::system::StructIfaddrs> android::system::Os::getifaddrs()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 652        value = {
	// 653            Landroid/system/ErrnoException;
	// 654        }
	// 655    .end annotation
	return libcore::io::Libcore::os->getifaddrs();

}
// .method public static getnameinfo(Ljava/net/InetAddress;I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::Os::getnameinfo(std::shared_ptr<java::net::InetAddress> address,int flags)
{
	
	//    .param p0, "address"    # Ljava/net/InetAddress;
	//    .param p1, "flags"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 673        value = {
	// 674            Landroid/system/GaiException;
	// 675        }
	// 676    .end annotation
	return libcore::io::Libcore::os->getnameinfo(address, flags);

}
// .method public static getpeername(Ljava/io/FileDescriptor;)Ljava/net/SocketAddress;
std::shared_ptr<java::net::SocketAddress> android::system::Os::getpeername(std::shared_ptr<java::io::FileDescriptor> fd)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .annotation system Ldalvik/annotation/Throws;
	// 693        value = {
	// 694            Landroid/system/ErrnoException;
	// 695        }
	// 696    .end annotation
	return libcore::io::Libcore::os->getpeername(fd);

}
// .method public static getpgid(I)I
int android::system::Os::getpgid(int pid)
{
	
	//    .param p0, "pid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 713        value = {
	// 714            Landroid/system/ErrnoException;
	// 715        }
	// 716    .end annotation
	return libcore::io::Libcore::os->getpgid(pid);

}
// .method public static getpid()I
int android::system::Os::getpid()
{
	
	return libcore::io::Libcore::os->getpid();

}
// .method public static getppid()I
int android::system::Os::getppid()
{
	
	return libcore::io::Libcore::os->getppid();

}
// .method public static getpwnam(Ljava/lang/String;)Landroid/system/StructPasswd;
std::shared_ptr<android::system::StructPasswd> android::system::Os::getpwnam(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 761        value = {
	// 762            Landroid/system/ErrnoException;
	// 763        }
	// 764    .end annotation
	return libcore::io::Libcore::os->getpwnam(name);

}
// .method public static getpwuid(I)Landroid/system/StructPasswd;
std::shared_ptr<android::system::StructPasswd> android::system::Os::getpwuid(int uid)
{
	
	//    .param p0, "uid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 781        value = {
	// 782            Landroid/system/ErrnoException;
	// 783        }
	// 784    .end annotation
	return libcore::io::Libcore::os->getpwuid(uid);

}
// .method public static getrlimit(I)Landroid/system/StructRlimit;
std::shared_ptr<android::system::StructRlimit> android::system::Os::getrlimit(int resource)
{
	
	//    .param p0, "resource"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 801        value = {
	// 802            Landroid/system/ErrnoException;
	// 803        }
	// 804    .end annotation
	return libcore::io::Libcore::os->getrlimit(resource);

}
// .method public static getsockname(Ljava/io/FileDescriptor;)Ljava/net/SocketAddress;
std::shared_ptr<java::net::SocketAddress> android::system::Os::getsockname(std::shared_ptr<java::io::FileDescriptor> fd)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .annotation system Ldalvik/annotation/Throws;
	// 821        value = {
	// 822            Landroid/system/ErrnoException;
	// 823        }
	// 824    .end annotation
	return libcore::io::Libcore::os->getsockname(fd);

}
// .method public static getsockoptByte(Ljava/io/FileDescriptor;II)I
int android::system::Os::getsockoptByte(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 843        value = {
	// 844            Landroid/system/ErrnoException;
	// 845        }
	// 846    .end annotation
	return libcore::io::Libcore::os->getsockoptByte(fd, level, option);

}
// .method public static getsockoptInAddr(Ljava/io/FileDescriptor;II)Ljava/net/InetAddress;
std::shared_ptr<java::net::InetAddress> android::system::Os::getsockoptInAddr(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 865        value = {
	// 866            Landroid/system/ErrnoException;
	// 867        }
	// 868    .end annotation
	return libcore::io::Libcore::os->getsockoptInAddr(fd, level, option);

}
// .method public static getsockoptInt(Ljava/io/FileDescriptor;II)I
int android::system::Os::getsockoptInt(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 887        value = {
	// 888            Landroid/system/ErrnoException;
	// 889        }
	// 890    .end annotation
	return libcore::io::Libcore::os->getsockoptInt(fd, level, option);

}
// .method public static getsockoptLinger(Ljava/io/FileDescriptor;II)Landroid/system/StructLinger;
std::shared_ptr<android::system::StructLinger> android::system::Os::getsockoptLinger(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 909        value = {
	// 910            Landroid/system/ErrnoException;
	// 911        }
	// 912    .end annotation
	return libcore::io::Libcore::os->getsockoptLinger(fd, level, option);

}
// .method public static getsockoptTimeval(Ljava/io/FileDescriptor;II)Landroid/system/StructTimeval;
std::shared_ptr<android::system::StructTimeval> android::system::Os::getsockoptTimeval(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 931        value = {
	// 932            Landroid/system/ErrnoException;
	// 933        }
	// 934    .end annotation
	return libcore::io::Libcore::os->getsockoptTimeval(fd, level, option);

}
// .method public static getsockoptUcred(Ljava/io/FileDescriptor;II)Landroid/system/StructUcred;
std::shared_ptr<android::system::StructUcred> android::system::Os::getsockoptUcred(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 953        value = {
	// 954            Landroid/system/ErrnoException;
	// 955        }
	// 956    .end annotation
	return libcore::io::Libcore::os->getsockoptUcred(fd, level, option);

}
// .method public static gettid()I
int android::system::Os::gettid()
{
	
	return libcore::io::Libcore::os->gettid();

}
// .method public static getuid()I
int android::system::Os::getuid()
{
	
	return libcore::io::Libcore::os->getuid();

}
// .method public static getxattr(Ljava/lang/String;Ljava/lang/String;)[B
unsigned char android::system::Os::getxattr(std::shared_ptr<java::lang::String> path,std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1002        value = {
	// 1003            Landroid/system/ErrnoException;
	// 1004        }
	// 1005    .end annotation
	return libcore::io::Libcore::os->getxattr(path, name);

}
// .method public static if_indextoname(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::Os::if_indextoname(int index)
{
	
	//    .param p0, "index"    # I
	return libcore::io::Libcore::os->if_indextoname(index);

}
// .method public static if_nametoindex(Ljava/lang/String;)I
int android::system::Os::if_nametoindex(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	return libcore::io::Libcore::os->if_nametoindex(name);

}
// .method public static inet_pton(ILjava/lang/String;)Ljava/net/InetAddress;
std::shared_ptr<java::net::InetAddress> android::system::Os::inet_pton(int family,std::shared_ptr<java::lang::String> address)
{
	
	//    .param p0, "family"    # I
	//    .param p1, "address"    # Ljava/lang/String;
	return libcore::io::Libcore::os->inet_pton(family, address);

}
// .method public static ioctlInetAddress(Ljava/io/FileDescriptor;ILjava/lang/String;)Ljava/net/InetAddress;
std::shared_ptr<java::net::InetAddress> android::system::Os::ioctlInetAddress(std::shared_ptr<java::io::FileDescriptor> fd,int cmd,std::shared_ptr<java::lang::String> interfaceName)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "cmd"    # I
	//    .param p2, "interfaceName"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1070        value = {
	// 1071            Landroid/system/ErrnoException;
	// 1072        }
	// 1073    .end annotation
	return libcore::io::Libcore::os->ioctlInetAddress(fd, cmd, interfaceName);

}
// .method public static ioctlInt(Ljava/io/FileDescriptor;ILandroid/util/MutableInt;)I
int android::system::Os::ioctlInt(std::shared_ptr<java::io::FileDescriptor> fd,int cmd,std::shared_ptr<android::util::MutableInt> arg)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "cmd"    # I
	//    .param p2, "arg"    # Landroid/util/MutableInt;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1092        value = {
	// 1093            Landroid/system/ErrnoException;
	// 1094        }
	// 1095    .end annotation
	return libcore::io::Libcore::os->ioctlInt(fd, cmd, arg);

}
// .method public static isatty(Ljava/io/FileDescriptor;)Z
bool android::system::Os::isatty(std::shared_ptr<java::io::FileDescriptor> fd)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	return libcore::io::Libcore::os->isatty(fd);

}
// .method public static kill(II)V
void android::system::Os::kill(int pid,int signal)
{
	
	//    .param p0, "pid"    # I
	//    .param p1, "signal"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1128        value = {
	// 1129            Landroid/system/ErrnoException;
	// 1130        }
	// 1131    .end annotation
	libcore::io::Libcore::os->kill(pid, signal);
	return;

}
// .method public static lchown(Ljava/lang/String;II)V
void android::system::Os::lchown(std::shared_ptr<java::lang::String> path,int uid,int gid)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "uid"    # I
	//    .param p2, "gid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1148        value = {
	// 1149            Landroid/system/ErrnoException;
	// 1150        }
	// 1151    .end annotation
	libcore::io::Libcore::os->lchown(path, uid, gid);
	return;

}
// .method public static link(Ljava/lang/String;Ljava/lang/String;)V
void android::system::Os::link(std::shared_ptr<java::lang::String> oldPath,std::shared_ptr<java::lang::String> newPath)
{
	
	//    .param p0, "oldPath"    # Ljava/lang/String;
	//    .param p1, "newPath"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1167        value = {
	// 1168            Landroid/system/ErrnoException;
	// 1169        }
	// 1170    .end annotation
	libcore::io::Libcore::os->link(oldPath, newPath);
	return;

}
// .method public static listen(Ljava/io/FileDescriptor;I)V
void android::system::Os::listen(std::shared_ptr<java::io::FileDescriptor> fd,int backlog)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "backlog"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1186        value = {
	// 1187            Landroid/system/ErrnoException;
	// 1188        }
	// 1189    .end annotation
	libcore::io::Libcore::os->listen(fd, backlog);
	return;

}
// .method public static listxattr(Ljava/lang/String;)[Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::Os::listxattr(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1204        value = {
	// 1205            Landroid/system/ErrnoException;
	// 1206        }
	// 1207    .end annotation
	return libcore::io::Libcore::os->listxattr(path);

}
// .method public static lseek(Ljava/io/FileDescriptor;JI)J
long long android::system::Os::lseek(std::shared_ptr<java::io::FileDescriptor> fd,long long offset,int whence)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "offset"    # J
	//    .param p3, "whence"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1226        value = {
	// 1227            Landroid/system/ErrnoException;
	// 1228        }
	// 1229    .end annotation
	return libcore::io::Libcore::os->lseek(fd, offset, whence);

}
// .method public static lstat(Ljava/lang/String;)Landroid/system/StructStat;
std::shared_ptr<android::system::StructStat> android::system::Os::lstat(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1246        value = {
	// 1247            Landroid/system/ErrnoException;
	// 1248        }
	// 1249    .end annotation
	return libcore::io::Libcore::os->lstat(path);

}
// .method public static mincore(JJ[B)V
void android::system::Os::mincore(long long address,long long byteCount,std::shared_ptr<unsigned char[]> vector)
{
	
	//    .param p0, "address"    # J
	//    .param p2, "byteCount"    # J
	//    .param p4, "vector"    # [B
	//    .annotation system Ldalvik/annotation/Throws;
	// 1268        value = {
	// 1269            Landroid/system/ErrnoException;
	// 1270        }
	// 1271    .end annotation
	libcore::io::Libcore::os->mincore(address, byteCount, vector);
	return;

}
// .method public static mkdir(Ljava/lang/String;I)V
void android::system::Os::mkdir(std::shared_ptr<java::lang::String> path,int mode)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "mode"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1293        value = {
	// 1294            Landroid/system/ErrnoException;
	// 1295        }
	// 1296    .end annotation
	libcore::io::Libcore::os->mkdir(path, mode);
	return;

}
// .method public static mkfifo(Ljava/lang/String;I)V
void android::system::Os::mkfifo(std::shared_ptr<java::lang::String> path,int mode)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "mode"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1312        value = {
	// 1313            Landroid/system/ErrnoException;
	// 1314        }
	// 1315    .end annotation
	libcore::io::Libcore::os->mkfifo(path, mode);
	return;

}
// .method public static mlock(JJ)V
void android::system::Os::mlock(long long address,long long byteCount)
{
	
	//    .param p0, "address"    # J
	//    .param p2, "byteCount"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1331        value = {
	// 1332            Landroid/system/ErrnoException;
	// 1333        }
	// 1334    .end annotation
	libcore::io::Libcore::os->mlock(address, byteCount);
	return;

}
// .method public static mmap(JJIILjava/io/FileDescriptor;J)J
long long android::system::Os::mmap(long long address,long long byteCount,int prot,int flags,std::shared_ptr<java::io::FileDescriptor> fd,long long offset)
{
	
	//    .param p0, "address"    # J
	//    .param p2, "byteCount"    # J
	//    .param p4, "prot"    # I
	//    .param p5, "flags"    # I
	//    .param p6, "fd"    # Ljava/io/FileDescriptor;
	//    .param p7, "offset"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1354        value = {
	// 1355            Landroid/system/ErrnoException;
	// 1356        }
	// 1357    .end annotation
	return libcore::io::Libcore::os->mmap(address, byteCount, prot, flags, fd, offset);

}
// .method public static msync(JJI)V
void android::system::Os::msync(long long address,long long byteCount,int flags)
{
	
	//    .param p0, "address"    # J
	//    .param p2, "byteCount"    # J
	//    .param p4, "flags"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1388        value = {
	// 1389            Landroid/system/ErrnoException;
	// 1390        }
	// 1391    .end annotation
	libcore::io::Libcore::os->msync(address, byteCount, flags);
	return;

}
// .method public static munlock(JJ)V
void android::system::Os::munlock(long long address,long long byteCount)
{
	
	//    .param p0, "address"    # J
	//    .param p2, "byteCount"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1413        value = {
	// 1414            Landroid/system/ErrnoException;
	// 1415        }
	// 1416    .end annotation
	libcore::io::Libcore::os->munlock(address, byteCount);
	return;

}
// .method public static munmap(JJ)V
void android::system::Os::munmap(long long address,long long byteCount)
{
	
	//    .param p0, "address"    # J
	//    .param p2, "byteCount"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1432        value = {
	// 1433            Landroid/system/ErrnoException;
	// 1434        }
	// 1435    .end annotation
	libcore::io::Libcore::os->munmap(address, byteCount);
	return;

}
// .method public static open(Ljava/lang/String;II)Ljava/io/FileDescriptor;
std::shared_ptr<java::io::FileDescriptor> android::system::Os::open(std::shared_ptr<java::lang::String> path,int flags,int mode)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "flags"    # I
	//    .param p2, "mode"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1452        value = {
	// 1453            Landroid/system/ErrnoException;
	// 1454        }
	// 1455    .end annotation
	return libcore::io::Libcore::os->open(path, flags, mode);

}
// .method public static pipe()[Ljava/io/FileDescriptor;
std::shared_ptr<java::io::FileDescriptor> android::system::Os::pipe()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 1471        value = {
	// 1472            Landroid/system/ErrnoException;
	// 1473        }
	// 1474    .end annotation
	return libcore::io::Libcore::os->pipe2(0x0);

}
// .method public static pipe2(I)[Ljava/io/FileDescriptor;
std::shared_ptr<java::io::FileDescriptor> android::system::Os::pipe2(int flags)
{
	
	//    .param p0, "flags"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1493        value = {
	// 1494            Landroid/system/ErrnoException;
	// 1495        }
	// 1496    .end annotation
	return libcore::io::Libcore::os->pipe2(flags);

}
// .method public static poll([Landroid/system/StructPollfd;I)I
int android::system::Os::poll(std::shared_ptr<std::vector<android::system::StructPollfd>> fds,int timeoutMs)
{
	
	//    .param p0, "fds"    # [Landroid/system/StructPollfd;
	//    .param p1, "timeoutMs"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1514        value = {
	// 1515            Landroid/system/ErrnoException;
	// 1516        }
	// 1517    .end annotation
	return libcore::io::Libcore::os->poll(fds, timeoutMs);

}
// .method public static posix_fallocate(Ljava/io/FileDescriptor;JJ)V
void android::system::Os::posix_fallocate(std::shared_ptr<java::io::FileDescriptor> fd,long long offset,long long length)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "offset"    # J
	//    .param p3, "length"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1536        value = {
	// 1537            Landroid/system/ErrnoException;
	// 1538        }
	// 1539    .end annotation
	libcore::io::Libcore::os->posix_fallocate(fd, offset, length);
	return;

}
// .method public static prctl(IJJJJ)I
int android::system::Os::prctl(int option,long long arg2,long long arg3,long long arg4,long long arg5)
{
	
	//    .param p0, "option"    # I
	//    .param p1, "arg2"    # J
	//    .param p3, "arg3"    # J
	//    .param p5, "arg4"    # J
	//    .param p7, "arg5"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1564        value = {
	// 1565            Landroid/system/ErrnoException;
	// 1566        }
	// 1567    .end annotation
	return libcore::io::Libcore::os->prctl(option, arg2, arg3, arg4, arg5);

}
// .method public static pread(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;J)I
int android::system::Os::pread(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::nio::ByteBuffer> buffer,long long offset)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "buffer"    # Ljava/nio/ByteBuffer;
	//    .param p2, "offset"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1596        value = {
	// 1597            Landroid/system/ErrnoException;,
	// 1598            Ljava/io/InterruptedIOException;
	// 1599        }
	// 1600    .end annotation
	return libcore::io::Libcore::os->pread(fd, buffer, offset);

}
// .method public static pread(Ljava/io/FileDescriptor;[BIIJ)I
int android::system::Os::pread(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount,long long offset)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "bytes"    # [B
	//    .param p2, "byteOffset"    # I
	//    .param p3, "byteCount"    # I
	//    .param p4, "offset"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1621        value = {
	// 1622            Landroid/system/ErrnoException;,
	// 1623            Ljava/io/InterruptedIOException;
	// 1624        }
	// 1625    .end annotation
	return libcore::io::Libcore::os->pread(fd, bytes, byteOffset, byteCount, offset);

}
// .method public static pwrite(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;J)I
int android::system::Os::pwrite(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::nio::ByteBuffer> buffer,long long offset)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "buffer"    # Ljava/nio/ByteBuffer;
	//    .param p2, "offset"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1654        value = {
	// 1655            Landroid/system/ErrnoException;,
	// 1656            Ljava/io/InterruptedIOException;
	// 1657        }
	// 1658    .end annotation
	return libcore::io::Libcore::os->pwrite(fd, buffer, offset);

}
// .method public static pwrite(Ljava/io/FileDescriptor;[BIIJ)I
int android::system::Os::pwrite(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount,long long offset)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "bytes"    # [B
	//    .param p2, "byteOffset"    # I
	//    .param p3, "byteCount"    # I
	//    .param p4, "offset"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1679        value = {
	// 1680            Landroid/system/ErrnoException;,
	// 1681            Ljava/io/InterruptedIOException;
	// 1682        }
	// 1683    .end annotation
	return libcore::io::Libcore::os->pwrite(fd, bytes, byteOffset, byteCount, offset);

}
// .method public static read(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;)I
int android::system::Os::read(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::nio::ByteBuffer> buffer)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "buffer"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1711        value = {
	// 1712            Landroid/system/ErrnoException;,
	// 1713            Ljava/io/InterruptedIOException;
	// 1714        }
	// 1715    .end annotation
	return libcore::io::Libcore::os->read(fd, buffer);

}
// .method public static read(Ljava/io/FileDescriptor;[BII)I
int android::system::Os::read(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "bytes"    # [B
	//    .param p2, "byteOffset"    # I
	//    .param p3, "byteCount"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1735        value = {
	// 1736            Landroid/system/ErrnoException;,
	// 1737            Ljava/io/InterruptedIOException;
	// 1738        }
	// 1739    .end annotation
	return libcore::io::Libcore::os->read(fd, bytes, byteOffset, byteCount);

}
// .method public static readlink(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::Os::readlink(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1756        value = {
	// 1757            Landroid/system/ErrnoException;
	// 1758        }
	// 1759    .end annotation
	return libcore::io::Libcore::os->readlink(path);

}
// .method public static readv(Ljava/io/FileDescriptor;[Ljava/lang/Object;[I[I)I
int android::system::Os::readv(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<std::vector<java::lang::Object>> buffers,std::shared_ptr<int[]> offsets,std::shared_ptr<int[]> byteCounts)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "buffers"    # [Ljava/lang/Object;
	//    .param p2, "offsets"    # [I
	//    .param p3, "byteCounts"    # [I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1779        value = {
	// 1780            Landroid/system/ErrnoException;,
	// 1781            Ljava/io/InterruptedIOException;
	// 1782        }
	// 1783    .end annotation
	return libcore::io::Libcore::os->readv(fd, buffers, offsets, byteCounts);

}
// .method public static recvfrom(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;ILjava/net/InetSocketAddress;)I
int android::system::Os::recvfrom(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::nio::ByteBuffer> buffer,int flags,std::shared_ptr<java::net::InetSocketAddress> srcAddress)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "buffer"    # Ljava/nio/ByteBuffer;
	//    .param p2, "flags"    # I
	//    .param p3, "srcAddress"    # Ljava/net/InetSocketAddress;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1803        value = {
	// 1804            Landroid/system/ErrnoException;,
	// 1805            Ljava/net/SocketException;
	// 1806        }
	// 1807    .end annotation
	return libcore::io::Libcore::os->recvfrom(fd, buffer, flags, srcAddress);

}
// .method public static recvfrom(Ljava/io/FileDescriptor;[BIIILjava/net/InetSocketAddress;)I
int android::system::Os::recvfrom(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount,int flags,std::shared_ptr<java::net::InetSocketAddress> srcAddress)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "bytes"    # [B
	//    .param p2, "byteOffset"    # I
	//    .param p3, "byteCount"    # I
	//    .param p4, "flags"    # I
	//    .param p5, "srcAddress"    # Ljava/net/InetSocketAddress;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1829        value = {
	// 1830            Landroid/system/ErrnoException;,
	// 1831            Ljava/net/SocketException;
	// 1832        }
	// 1833    .end annotation
	return libcore::io::Libcore::os->recvfrom(fd, bytes, byteOffset, byteCount, flags, srcAddress);

}
// .method public static remove(Ljava/lang/String;)V
void android::system::Os::remove(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1862        value = {
	// 1863            Landroid/system/ErrnoException;
	// 1864        }
	// 1865    .end annotation
	libcore::io::Libcore::os->remove(path);
	return;

}
// .method public static removexattr(Ljava/lang/String;Ljava/lang/String;)V
void android::system::Os::removexattr(std::shared_ptr<java::lang::String> path,std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1881        value = {
	// 1882            Landroid/system/ErrnoException;
	// 1883        }
	// 1884    .end annotation
	libcore::io::Libcore::os->removexattr(path, name);
	return;

}
// .method public static rename(Ljava/lang/String;Ljava/lang/String;)V
void android::system::Os::rename(std::shared_ptr<java::lang::String> oldPath,std::shared_ptr<java::lang::String> newPath)
{
	
	//    .param p0, "oldPath"    # Ljava/lang/String;
	//    .param p1, "newPath"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 1900        value = {
	// 1901            Landroid/system/ErrnoException;
	// 1902        }
	// 1903    .end annotation
	libcore::io::Libcore::os->rename(oldPath, newPath);
	return;

}
// .method public static sendfile(Ljava/io/FileDescriptor;Ljava/io/FileDescriptor;Landroid/util/MutableLong;J)J
long long android::system::Os::sendfile(std::shared_ptr<java::io::FileDescriptor> outFd,std::shared_ptr<java::io::FileDescriptor> inFd,std::shared_ptr<android::util::MutableLong> inOffset,long long byteCount)
{
	
	//    .param p0, "outFd"    # Ljava/io/FileDescriptor;
	//    .param p1, "inFd"    # Ljava/io/FileDescriptor;
	//    .param p2, "inOffset"    # Landroid/util/MutableLong;
	//    .param p3, "byteCount"    # J
	//    .annotation system Ldalvik/annotation/Throws;
	// 1921        value = {
	// 1922            Landroid/system/ErrnoException;
	// 1923        }
	// 1924    .end annotation
	return libcore::io::Libcore::os->sendfile(outFd, inFd, inOffset, byteCount);

}
// .method public static sendto(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;ILjava/net/InetAddress;I)I
int android::system::Os::sendto(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::nio::ByteBuffer> buffer,int flags,std::shared_ptr<java::net::InetAddress> inetAddress,int port)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "buffer"    # Ljava/nio/ByteBuffer;
	//    .param p2, "flags"    # I
	//    .param p3, "inetAddress"    # Ljava/net/InetAddress;
	//    .param p4, "port"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1953        value = {
	// 1954            Landroid/system/ErrnoException;,
	// 1955            Ljava/net/SocketException;
	// 1956        }
	// 1957    .end annotation
	return libcore::io::Libcore::os->sendto(fd, buffer, flags, inetAddress, port);

}
// .method public static sendto(Ljava/io/FileDescriptor;[BIIILjava/net/InetAddress;I)I
int android::system::Os::sendto(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount,int flags,std::shared_ptr<java::net::InetAddress> inetAddress,int port)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "bytes"    # [B
	//    .param p2, "byteOffset"    # I
	//    .param p3, "byteCount"    # I
	//    .param p4, "flags"    # I
	//    .param p5, "inetAddress"    # Ljava/net/InetAddress;
	//    .param p6, "port"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 1990        value = {
	// 1991            Landroid/system/ErrnoException;,
	// 1992            Ljava/net/SocketException;
	// 1993        }
	// 1994    .end annotation
	return libcore::io::Libcore::os->sendto(fd, bytes, byteOffset, byteCount, flags, inetAddress, port);

}
// .method public static sendto(Ljava/io/FileDescriptor;[BIIILjava/net/SocketAddress;)I
int android::system::Os::sendto(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount,int flags,std::shared_ptr<java::net::SocketAddress> address)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "bytes"    # [B
	//    .param p2, "byteOffset"    # I
	//    .param p3, "byteCount"    # I
	//    .param p4, "flags"    # I
	//    .param p5, "address"    # Ljava/net/SocketAddress;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2030        value = {
	// 2031            Landroid/system/ErrnoException;,
	// 2032            Ljava/net/SocketException;
	// 2033        }
	// 2034    .end annotation
	return libcore::io::Libcore::os->sendto(fd, bytes, byteOffset, byteCount, flags, address);

}
// .method public static setegid(I)V
void android::system::Os::setegid(int egid)
{
	
	//    .param p0, "egid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2063        value = {
	// 2064            Landroid/system/ErrnoException;
	// 2065        }
	// 2066    .end annotation
	libcore::io::Libcore::os->setegid(egid);
	return;

}
// .method public static setenv(Ljava/lang/String;Ljava/lang/String;Z)V
void android::system::Os::setenv(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> value,bool overwrite)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .param p1, "value"    # Ljava/lang/String;
	//    .param p2, "overwrite"    # Z
	//    .annotation system Ldalvik/annotation/Throws;
	// 2083        value = {
	// 2084            Landroid/system/ErrnoException;
	// 2085        }
	// 2086    .end annotation
	libcore::io::Libcore::os->setenv(name, value, overwrite);
	return;

}
// .method public static seteuid(I)V
void android::system::Os::seteuid(int euid)
{
	
	//    .param p0, "euid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2101        value = {
	// 2102            Landroid/system/ErrnoException;
	// 2103        }
	// 2104    .end annotation
	libcore::io::Libcore::os->seteuid(euid);
	return;

}
// .method public static setgid(I)V
void android::system::Os::setgid(int gid)
{
	
	//    .param p0, "gid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2119        value = {
	// 2120            Landroid/system/ErrnoException;
	// 2121        }
	// 2122    .end annotation
	libcore::io::Libcore::os->setgid(gid);
	return;

}
// .method public static setpgid(II)V
void android::system::Os::setpgid(int pid,int pgid)
{
	
	//    .param p0, "pid"    # I
	//    .param p1, "pgid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2138        value = {
	// 2139            Landroid/system/ErrnoException;
	// 2140        }
	// 2141    .end annotation
	libcore::io::Libcore::os->setpgid(pid, pgid);
	return;

}
// .method public static setregid(II)V
void android::system::Os::setregid(int rgid,int egid)
{
	
	//    .param p0, "rgid"    # I
	//    .param p1, "egid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2157        value = {
	// 2158            Landroid/system/ErrnoException;
	// 2159        }
	// 2160    .end annotation
	libcore::io::Libcore::os->setregid(rgid, egid);
	return;

}
// .method public static setreuid(II)V
void android::system::Os::setreuid(int ruid,int euid)
{
	
	//    .param p0, "ruid"    # I
	//    .param p1, "euid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2176        value = {
	// 2177            Landroid/system/ErrnoException;
	// 2178        }
	// 2179    .end annotation
	libcore::io::Libcore::os->setreuid(ruid, euid);
	return;

}
// .method public static setsid()I
int android::system::Os::setsid()
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 2193        value = {
	// 2194            Landroid/system/ErrnoException;
	// 2195        }
	// 2196    .end annotation
	return libcore::io::Libcore::os->setsid();

}
// .method public static setsockoptByte(Ljava/io/FileDescriptor;III)V
void android::system::Os::setsockoptByte(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,int value)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .param p3, "value"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2216        value = {
	// 2217            Landroid/system/ErrnoException;
	// 2218        }
	// 2219    .end annotation
	libcore::io::Libcore::os->setsockoptByte(fd, level, option, value);
	return;

}
// .method public static setsockoptGroupReq(Ljava/io/FileDescriptor;IILandroid/system/StructGroupReq;)V
void android::system::Os::setsockoptGroupReq(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,std::shared_ptr<android::system::StructGroupReq> value)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .param p3, "value"    # Landroid/system/StructGroupReq;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2237        value = {
	// 2238            Landroid/system/ErrnoException;
	// 2239        }
	// 2240    .end annotation
	libcore::io::Libcore::os->setsockoptGroupReq(fd, level, option, value);
	return;

}
// .method public static setsockoptGroupSourceReq(Ljava/io/FileDescriptor;IILandroid/system/StructGroupSourceReq;)V
void android::system::Os::setsockoptGroupSourceReq(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,std::shared_ptr<android::system::StructGroupSourceReq> value)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .param p3, "value"    # Landroid/system/StructGroupSourceReq;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2258        value = {
	// 2259            Landroid/system/ErrnoException;
	// 2260        }
	// 2261    .end annotation
	libcore::io::Libcore::os->setsockoptGroupSourceReq(fd, level, option, value);
	return;

}
// .method public static setsockoptIfreq(Ljava/io/FileDescriptor;IILjava/lang/String;)V
void android::system::Os::setsockoptIfreq(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,std::shared_ptr<java::lang::String> value)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .param p3, "value"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2279        value = {
	// 2280            Landroid/system/ErrnoException;
	// 2281        }
	// 2282    .end annotation
	libcore::io::Libcore::os->setsockoptIfreq(fd, level, option, value);
	return;

}
// .method public static setsockoptInt(Ljava/io/FileDescriptor;III)V
void android::system::Os::setsockoptInt(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,int value)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .param p3, "value"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2300        value = {
	// 2301            Landroid/system/ErrnoException;
	// 2302        }
	// 2303    .end annotation
	libcore::io::Libcore::os->setsockoptInt(fd, level, option, value);
	return;

}
// .method public static setsockoptIpMreqn(Ljava/io/FileDescriptor;III)V
void android::system::Os::setsockoptIpMreqn(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,int value)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .param p3, "value"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2321        value = {
	// 2322            Landroid/system/ErrnoException;
	// 2323        }
	// 2324    .end annotation
	libcore::io::Libcore::os->setsockoptIpMreqn(fd, level, option, value);
	return;

}
// .method public static setsockoptLinger(Ljava/io/FileDescriptor;IILandroid/system/StructLinger;)V
void android::system::Os::setsockoptLinger(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,std::shared_ptr<android::system::StructLinger> value)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .param p3, "value"    # Landroid/system/StructLinger;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2342        value = {
	// 2343            Landroid/system/ErrnoException;
	// 2344        }
	// 2345    .end annotation
	libcore::io::Libcore::os->setsockoptLinger(fd, level, option, value);
	return;

}
// .method public static setsockoptTimeval(Ljava/io/FileDescriptor;IILandroid/system/StructTimeval;)V
void android::system::Os::setsockoptTimeval(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,std::shared_ptr<android::system::StructTimeval> value)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "level"    # I
	//    .param p2, "option"    # I
	//    .param p3, "value"    # Landroid/system/StructTimeval;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2363        value = {
	// 2364            Landroid/system/ErrnoException;
	// 2365        }
	// 2366    .end annotation
	libcore::io::Libcore::os->setsockoptTimeval(fd, level, option, value);
	return;

}
// .method public static setuid(I)V
void android::system::Os::setuid(int uid)
{
	
	//    .param p0, "uid"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2381        value = {
	// 2382            Landroid/system/ErrnoException;
	// 2383        }
	// 2384    .end annotation
	libcore::io::Libcore::os->setuid(uid);
	return;

}
// .method public static setxattr(Ljava/lang/String;Ljava/lang/String;[BI)V
void android::system::Os::setxattr(std::shared_ptr<java::lang::String> path,std::shared_ptr<java::lang::String> name,std::shared_ptr<unsigned char[]> value,int flags)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .param p1, "name"    # Ljava/lang/String;
	//    .param p2, "value"    # [B
	//    .param p3, "flags"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2402        value = {
	// 2403            Landroid/system/ErrnoException;
	// 2404        }
	// 2405    .end annotation
	libcore::io::Libcore::os->setxattr(path, name, value, flags);
	return;

}
// .method public static shutdown(Ljava/io/FileDescriptor;I)V
void android::system::Os::shutdown(std::shared_ptr<java::io::FileDescriptor> fd,int how)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "how"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2421        value = {
	// 2422            Landroid/system/ErrnoException;
	// 2423        }
	// 2424    .end annotation
	libcore::io::Libcore::os->shutdown(fd, how);
	return;

}
// .method public static socket(III)Ljava/io/FileDescriptor;
std::shared_ptr<java::io::FileDescriptor> android::system::Os::socket(int domain,int type,int protocol)
{
	
	//    .param p0, "domain"    # I
	//    .param p1, "type"    # I
	//    .param p2, "protocol"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2441        value = {
	// 2442            Landroid/system/ErrnoException;
	// 2443        }
	// 2444    .end annotation
	return libcore::io::Libcore::os->socket(domain, type, protocol);

}
// .method public static socketpair(IIILjava/io/FileDescriptor;Ljava/io/FileDescriptor;)V
void android::system::Os::socketpair(int domain,int type,int protocol,std::shared_ptr<java::io::FileDescriptor> fd1,std::shared_ptr<java::io::FileDescriptor> fd2)
{
	
	//    .param p0, "domain"    # I
	//    .param p1, "type"    # I
	//    .param p2, "protocol"    # I
	//    .param p3, "fd1"    # Ljava/io/FileDescriptor;
	//    .param p4, "fd2"    # Ljava/io/FileDescriptor;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2465        value = {
	// 2466            Landroid/system/ErrnoException;
	// 2467        }
	// 2468    .end annotation
	libcore::io::Libcore::os->socketpair(domain, type, protocol, fd1, fd2);
	return;

}
// .method public static stat(Ljava/lang/String;)Landroid/system/StructStat;
std::shared_ptr<android::system::StructStat> android::system::Os::stat(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2493        value = {
	// 2494            Landroid/system/ErrnoException;
	// 2495        }
	// 2496    .end annotation
	return libcore::io::Libcore::os->stat(path);

}
// .method public static statvfs(Ljava/lang/String;)Landroid/system/StructStatVfs;
std::shared_ptr<android::system::StructStatVfs> android::system::Os::statvfs(std::shared_ptr<java::lang::String> path)
{
	
	//    .param p0, "path"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2513        value = {
	// 2514            Landroid/system/ErrnoException;
	// 2515        }
	// 2516    .end annotation
	return libcore::io::Libcore::os->statvfs(path);

}
// .method public static strerror(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::Os::strerror(int errno)
{
	
	//    .param p0, "errno"    # I
	return libcore::io::Libcore::os->strerror(errno);

}
// .method public static strsignal(I)Ljava/lang/String;
std::shared_ptr<java::lang::String> android::system::Os::strsignal(int signal)
{
	
	//    .param p0, "signal"    # I
	return libcore::io::Libcore::os->strsignal(signal);

}
// .method public static symlink(Ljava/lang/String;Ljava/lang/String;)V
void android::system::Os::symlink(std::shared_ptr<java::lang::String> oldPath,std::shared_ptr<java::lang::String> newPath)
{
	
	//    .param p0, "oldPath"    # Ljava/lang/String;
	//    .param p1, "newPath"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2564        value = {
	// 2565            Landroid/system/ErrnoException;
	// 2566        }
	// 2567    .end annotation
	libcore::io::Libcore::os->symlink(oldPath, newPath);
	return;

}
// .method public static sysconf(I)J
long long android::system::Os::sysconf(int name)
{
	
	//    .param p0, "name"    # I
	return libcore::io::Libcore::os->sysconf(name);

}
// .method public static tcdrain(Ljava/io/FileDescriptor;)V
void android::system::Os::tcdrain(std::shared_ptr<java::io::FileDescriptor> fd)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2597        value = {
	// 2598            Landroid/system/ErrnoException;
	// 2599        }
	// 2600    .end annotation
	libcore::io::Libcore::os->tcdrain(fd);
	return;

}
// .method public static tcsendbreak(Ljava/io/FileDescriptor;I)V
void android::system::Os::tcsendbreak(std::shared_ptr<java::io::FileDescriptor> fd,int duration)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "duration"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2616        value = {
	// 2617            Landroid/system/ErrnoException;
	// 2618        }
	// 2619    .end annotation
	libcore::io::Libcore::os->tcsendbreak(fd, duration);
	return;

}
// .method public static umask(I)I
int android::system::Os::umask(int mask)
{
	
	//    .param p0, "mask"    # I
	return libcore::io::Libcore::os->umask(mask);

}
// .method public static uname()Landroid/system/StructUtsname;
std::shared_ptr<android::system::StructUtsname> android::system::Os::uname()
{
	
	return libcore::io::Libcore::os->uname();

}
// .method public static unlink(Ljava/lang/String;)V
void android::system::Os::unlink(std::shared_ptr<java::lang::String> pathname)
{
	
	//    .param p0, "pathname"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2663        value = {
	// 2664            Landroid/system/ErrnoException;
	// 2665        }
	// 2666    .end annotation
	libcore::io::Libcore::os->unlink(pathname);
	return;

}
// .method public static unsetenv(Ljava/lang/String;)V
void android::system::Os::unsetenv(std::shared_ptr<java::lang::String> name)
{
	
	//    .param p0, "name"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2681        value = {
	// 2682            Landroid/system/ErrnoException;
	// 2683        }
	// 2684    .end annotation
	libcore::io::Libcore::os->unsetenv(name);
	return;

}
// .method public static waitpid(ILandroid/util/MutableInt;I)I
int android::system::Os::waitpid(int pid,std::shared_ptr<android::util::MutableInt> status,int options)
{
	
	//    .param p0, "pid"    # I
	//    .param p1, "status"    # Landroid/util/MutableInt;
	//    .param p2, "options"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2701        value = {
	// 2702            Landroid/system/ErrnoException;
	// 2703        }
	// 2704    .end annotation
	return libcore::io::Libcore::os->waitpid(pid, status, options);

}
// .method public static write(Ljava/io/FileDescriptor;Ljava/nio/ByteBuffer;)I
int android::system::Os::write(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::nio::ByteBuffer> buffer)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "buffer"    # Ljava/nio/ByteBuffer;
	//    .annotation system Ldalvik/annotation/Throws;
	// 2722        value = {
	// 2723            Landroid/system/ErrnoException;,
	// 2724            Ljava/io/InterruptedIOException;
	// 2725        }
	// 2726    .end annotation
	return libcore::io::Libcore::os->write(fd, buffer);

}
// .method public static write(Ljava/io/FileDescriptor;[BII)I
int android::system::Os::write(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "bytes"    # [B
	//    .param p2, "byteOffset"    # I
	//    .param p3, "byteCount"    # I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2746        value = {
	// 2747            Landroid/system/ErrnoException;,
	// 2748            Ljava/io/InterruptedIOException;
	// 2749        }
	// 2750    .end annotation
	return libcore::io::Libcore::os->write(fd, bytes, byteOffset, byteCount);

}
// .method public static writev(Ljava/io/FileDescriptor;[Ljava/lang/Object;[I[I)I
int android::system::Os::writev(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<std::vector<java::lang::Object>> buffers,std::shared_ptr<int[]> offsets,std::shared_ptr<int[]> byteCounts)
{
	
	//    .param p0, "fd"    # Ljava/io/FileDescriptor;
	//    .param p1, "buffers"    # [Ljava/lang/Object;
	//    .param p2, "offsets"    # [I
	//    .param p3, "byteCounts"    # [I
	//    .annotation system Ldalvik/annotation/Throws;
	// 2770        value = {
	// 2771            Landroid/system/ErrnoException;,
	// 2772            Ljava/io/InterruptedIOException;
	// 2773        }
	// 2774    .end annotation
	return libcore::io::Libcore::os->writev(fd, buffers, offsets, byteCounts);

}


