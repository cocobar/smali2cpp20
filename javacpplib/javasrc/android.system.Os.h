#ifndef __android_system_Os__
#define __android_system_Os__
// H L:\smali2cpp20\x64\Release\out\android\system\Os.smali
#include "java2ctype.h"
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

namespace android::system{
class Os : public java::lang::Object {
protected:
private:
	Os();
public:
	static std::shared_ptr<java::io::FileDescriptor> accept(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::net::InetSocketAddress> peerAddress);
	static std::shared_ptr<java::io::FileDescriptor> accept(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::net::SocketAddress> peerAddress);
	static bool access(std::shared_ptr<java::lang::String> path,int mode);
	static std::shared_ptr<java::net::InetAddress> android_getaddrinfo(std::shared_ptr<java::lang::String> node,std::shared_ptr<android::system::StructAddrinfo> hints,int netId);
	static void bind(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::net::InetAddress> address,int port);
	static void bind(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::net::SocketAddress> address);
	static std::shared_ptr<android::system::StructCapUserData> capget(std::shared_ptr<android::system::StructCapUserHeader> hdr);
	static void capset(std::shared_ptr<android::system::StructCapUserHeader> hdr,std::shared_ptr<std::vector<android::system::StructCapUserData>> data);
	static void chmod(std::shared_ptr<java::lang::String> path,int mode);
	static void chown(std::shared_ptr<java::lang::String> path,int uid,int gid);
	static void close(std::shared_ptr<java::io::FileDescriptor> fd);
	static void connect(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::net::InetAddress> address,int port);
	static void connect(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::net::SocketAddress> address);
	static std::shared_ptr<java::io::FileDescriptor> dup(std::shared_ptr<java::io::FileDescriptor> oldFd);
	static std::shared_ptr<java::io::FileDescriptor> dup2(std::shared_ptr<java::io::FileDescriptor> oldFd,int newFd);
	static std::shared_ptr<java::lang::String> environ();
	static void execv(std::shared_ptr<java::lang::String> filename,std::shared_ptr<std::vector<java::lang::String>> argv);
	static void execve(std::shared_ptr<java::lang::String> filename,std::shared_ptr<std::vector<java::lang::String>> argv,std::shared_ptr<std::vector<java::lang::String>> envp);
	static void fchmod(std::shared_ptr<java::io::FileDescriptor> fd,int mode);
	static void fchown(std::shared_ptr<java::io::FileDescriptor> fd,int uid,int gid);
	static int fcntlFlock(std::shared_ptr<java::io::FileDescriptor> fd,int cmd,std::shared_ptr<android::system::StructFlock> arg);
	static int fcntlInt(std::shared_ptr<java::io::FileDescriptor> fd,int cmd,int arg);
	static int fcntlVoid(std::shared_ptr<java::io::FileDescriptor> fd,int cmd);
	static void fdatasync(std::shared_ptr<java::io::FileDescriptor> fd);
	static std::shared_ptr<android::system::StructStat> fstat(std::shared_ptr<java::io::FileDescriptor> fd);
	static std::shared_ptr<android::system::StructStatVfs> fstatvfs(std::shared_ptr<java::io::FileDescriptor> fd);
	static void fsync(std::shared_ptr<java::io::FileDescriptor> fd);
	static void ftruncate(std::shared_ptr<java::io::FileDescriptor> fd,long long length);
	static std::shared_ptr<java::lang::String> gai_strerror(int error);
	static int getegid();
	static std::shared_ptr<java::lang::String> getenv(std::shared_ptr<java::lang::String> name);
	static int geteuid();
	static int getgid();
	static std::shared_ptr<android::system::StructIfaddrs> getifaddrs();
	static std::shared_ptr<java::lang::String> getnameinfo(std::shared_ptr<java::net::InetAddress> address,int flags);
	static std::shared_ptr<java::net::SocketAddress> getpeername(std::shared_ptr<java::io::FileDescriptor> fd);
	static int getpgid(int pid);
	static int getpid();
	static int getppid();
	static std::shared_ptr<android::system::StructPasswd> getpwnam(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::system::StructPasswd> getpwuid(int uid);
	static std::shared_ptr<android::system::StructRlimit> getrlimit(int resource);
	static std::shared_ptr<java::net::SocketAddress> getsockname(std::shared_ptr<java::io::FileDescriptor> fd);
	static int getsockoptByte(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option);
	static std::shared_ptr<java::net::InetAddress> getsockoptInAddr(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option);
	static int getsockoptInt(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option);
	static std::shared_ptr<android::system::StructLinger> getsockoptLinger(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option);
	static std::shared_ptr<android::system::StructTimeval> getsockoptTimeval(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option);
	static std::shared_ptr<android::system::StructUcred> getsockoptUcred(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option);
	static int gettid();
	static int getuid();
	static unsigned char getxattr(std::shared_ptr<java::lang::String> path,std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<java::lang::String> if_indextoname(int index);
	static int if_nametoindex(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<java::net::InetAddress> inet_pton(int family,std::shared_ptr<java::lang::String> address);
	static std::shared_ptr<java::net::InetAddress> ioctlInetAddress(std::shared_ptr<java::io::FileDescriptor> fd,int cmd,std::shared_ptr<java::lang::String> interfaceName);
	static int ioctlInt(std::shared_ptr<java::io::FileDescriptor> fd,int cmd,std::shared_ptr<android::util::MutableInt> arg);
	static bool isatty(std::shared_ptr<java::io::FileDescriptor> fd);
	static void kill(int pid,int signal);
	static void lchown(std::shared_ptr<java::lang::String> path,int uid,int gid);
	static void link(std::shared_ptr<java::lang::String> oldPath,std::shared_ptr<java::lang::String> newPath);
	static void listen(std::shared_ptr<java::io::FileDescriptor> fd,int backlog);
	static std::shared_ptr<java::lang::String> listxattr(std::shared_ptr<java::lang::String> path);
	static long long lseek(std::shared_ptr<java::io::FileDescriptor> fd,long long offset,int whence);
	static std::shared_ptr<android::system::StructStat> lstat(std::shared_ptr<java::lang::String> path);
	static void mincore(long long address,long long byteCount,std::shared_ptr<unsigned char[]> vector);
	static void mkdir(std::shared_ptr<java::lang::String> path,int mode);
	static void mkfifo(std::shared_ptr<java::lang::String> path,int mode);
	static void mlock(long long address,long long byteCount);
	static long long mmap(long long address,long long byteCount,int prot,int flags,std::shared_ptr<java::io::FileDescriptor> fd,long long offset);
	static void msync(long long address,long long byteCount,int flags);
	static void munlock(long long address,long long byteCount);
	static void munmap(long long address,long long byteCount);
	static std::shared_ptr<java::io::FileDescriptor> open(std::shared_ptr<java::lang::String> path,int flags,int mode);
	static std::shared_ptr<java::io::FileDescriptor> pipe();
	static std::shared_ptr<java::io::FileDescriptor> pipe2(int flags);
	static int poll(std::shared_ptr<std::vector<android::system::StructPollfd>> fds,int timeoutMs);
	static void posix_fallocate(std::shared_ptr<java::io::FileDescriptor> fd,long long offset,long long length);
	static int prctl(int option,long long arg2,long long arg3,long long arg4,long long arg5);
	static int pread(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::nio::ByteBuffer> buffer,long long offset);
	static int pread(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount,long long offset);
	static int pwrite(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::nio::ByteBuffer> buffer,long long offset);
	static int pwrite(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount,long long offset);
	static int read(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::nio::ByteBuffer> buffer);
	static int read(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount);
	static std::shared_ptr<java::lang::String> readlink(std::shared_ptr<java::lang::String> path);
	static int readv(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<std::vector<java::lang::Object>> buffers,std::shared_ptr<int[]> offsets,std::shared_ptr<int[]> byteCounts);
	static int recvfrom(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::nio::ByteBuffer> buffer,int flags,std::shared_ptr<java::net::InetSocketAddress> srcAddress);
	static int recvfrom(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount,int flags,std::shared_ptr<java::net::InetSocketAddress> srcAddress);
	static void remove(std::shared_ptr<java::lang::String> path);
	static void removexattr(std::shared_ptr<java::lang::String> path,std::shared_ptr<java::lang::String> name);
	static void rename(std::shared_ptr<java::lang::String> oldPath,std::shared_ptr<java::lang::String> newPath);
	static long long sendfile(std::shared_ptr<java::io::FileDescriptor> outFd,std::shared_ptr<java::io::FileDescriptor> inFd,std::shared_ptr<android::util::MutableLong> inOffset,long long byteCount);
	static int sendto(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::nio::ByteBuffer> buffer,int flags,std::shared_ptr<java::net::InetAddress> inetAddress,int port);
	static int sendto(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount,int flags,std::shared_ptr<java::net::InetAddress> inetAddress,int port);
	static int sendto(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount,int flags,std::shared_ptr<java::net::SocketAddress> address);
	static void setegid(int egid);
	static void setenv(std::shared_ptr<java::lang::String> name,std::shared_ptr<java::lang::String> value,bool overwrite);
	static void seteuid(int euid);
	static void setgid(int gid);
	static void setpgid(int pid,int pgid);
	static void setregid(int rgid,int egid);
	static void setreuid(int ruid,int euid);
	static int setsid();
	static void setsockoptByte(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,int value);
	static void setsockoptGroupReq(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,std::shared_ptr<android::system::StructGroupReq> value);
	static void setsockoptGroupSourceReq(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,std::shared_ptr<android::system::StructGroupSourceReq> value);
	static void setsockoptIfreq(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,std::shared_ptr<java::lang::String> value);
	static void setsockoptInt(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,int value);
	static void setsockoptIpMreqn(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,int value);
	static void setsockoptLinger(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,std::shared_ptr<android::system::StructLinger> value);
	static void setsockoptTimeval(std::shared_ptr<java::io::FileDescriptor> fd,int level,int option,std::shared_ptr<android::system::StructTimeval> value);
	static void setuid(int uid);
	static void setxattr(std::shared_ptr<java::lang::String> path,std::shared_ptr<java::lang::String> name,std::shared_ptr<unsigned char[]> value,int flags);
	static void shutdown(std::shared_ptr<java::io::FileDescriptor> fd,int how);
	static std::shared_ptr<java::io::FileDescriptor> socket(int domain,int type,int protocol);
	static void socketpair(int domain,int type,int protocol,std::shared_ptr<java::io::FileDescriptor> fd1,std::shared_ptr<java::io::FileDescriptor> fd2);
	static std::shared_ptr<android::system::StructStat> stat(std::shared_ptr<java::lang::String> path);
	static std::shared_ptr<android::system::StructStatVfs> statvfs(std::shared_ptr<java::lang::String> path);
	static std::shared_ptr<java::lang::String> strerror(int errno);
	static std::shared_ptr<java::lang::String> strsignal(int signal);
	static void symlink(std::shared_ptr<java::lang::String> oldPath,std::shared_ptr<java::lang::String> newPath);
	static long long sysconf(int name);
	static void tcdrain(std::shared_ptr<java::io::FileDescriptor> fd);
	static void tcsendbreak(std::shared_ptr<java::io::FileDescriptor> fd,int duration);
	static int umask(int mask);
	static std::shared_ptr<android::system::StructUtsname> uname();
	static void unlink(std::shared_ptr<java::lang::String> pathname);
	static void unsetenv(std::shared_ptr<java::lang::String> name);
	static int waitpid(int pid,std::shared_ptr<android::util::MutableInt> status,int options);
	static int write(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<java::nio::ByteBuffer> buffer);
	static int write(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<unsigned char[]> bytes,int byteOffset,int byteCount);
	static int writev(std::shared_ptr<java::io::FileDescriptor> fd,std::shared_ptr<std::vector<java::lang::Object>> buffers,std::shared_ptr<int[]> offsets,std::shared_ptr<int[]> byteCounts);
public:
	virtual ~Os(){
	}

}; // class Os
}; // namespace android::system

#endif //__android_system_Os__

