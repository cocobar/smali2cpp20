// CPP L:\smali2cpp20\x64\Release\out\sun\security\util\SecurityConstants.smali
#include "java2ctype.h"
#include "java.lang.RuntimePermission.h"
#include "java.lang.String.h"
#include "java.net.NetPermission.h"
#include "java.net.SocketPermission.h"
#include "java.security.AllPermission.h"
#include "java.security.SecurityPermission.h"
#include "sun.security.util.SecurityConstants.h"

static sun::security::util::SecurityConstants::ALL_PERMISSION;
static sun::security::util::SecurityConstants::CHECK_MEMBER_ACCESS_PERMISSION;
static sun::security::util::SecurityConstants::CREATE_ACC_PERMISSION;
static sun::security::util::SecurityConstants::CREATE_CLASSLOADER_PERMISSION;
static sun::security::util::SecurityConstants::FILE_DELETE_ACTION = std::make_shared<java::lang::String>("delete");
static sun::security::util::SecurityConstants::FILE_EXECUTE_ACTION = std::make_shared<java::lang::String>("execute");
static sun::security::util::SecurityConstants::FILE_READLINK_ACTION = std::make_shared<java::lang::String>("readlink");
static sun::security::util::SecurityConstants::FILE_READ_ACTION = std::make_shared<java::lang::String>("read");
static sun::security::util::SecurityConstants::FILE_WRITE_ACTION = std::make_shared<java::lang::String>("write");
static sun::security::util::SecurityConstants::GET_CLASSLOADER_PERMISSION;
static sun::security::util::SecurityConstants::GET_COMBINER_PERMISSION;
static sun::security::util::SecurityConstants::GET_COOKIEHANDLER_PERMISSION;
static sun::security::util::SecurityConstants::GET_PD_PERMISSION;
static sun::security::util::SecurityConstants::GET_POLICY_PERMISSION;
static sun::security::util::SecurityConstants::GET_PROXYSELECTOR_PERMISSION;
static sun::security::util::SecurityConstants::GET_RESPONSECACHE_PERMISSION;
static sun::security::util::SecurityConstants::GET_STACK_TRACE_PERMISSION;
static sun::security::util::SecurityConstants::LOCAL_LISTEN_PERMISSION;
static sun::security::util::SecurityConstants::MODIFY_THREADGROUP_PERMISSION;
static sun::security::util::SecurityConstants::MODIFY_THREAD_PERMISSION;
static sun::security::util::SecurityConstants::PROPERTY_READ_ACTION = std::make_shared<java::lang::String>("read");
static sun::security::util::SecurityConstants::PROPERTY_RW_ACTION = std::make_shared<java::lang::String>("read,write");
static sun::security::util::SecurityConstants::PROPERTY_WRITE_ACTION = std::make_shared<java::lang::String>("write");
static sun::security::util::SecurityConstants::SET_COOKIEHANDLER_PERMISSION;
static sun::security::util::SecurityConstants::SET_PROXYSELECTOR_PERMISSION;
static sun::security::util::SecurityConstants::SET_RESPONSECACHE_PERMISSION;
static sun::security::util::SecurityConstants::SOCKET_ACCEPT_ACTION = std::make_shared<java::lang::String>("accept");
static sun::security::util::SecurityConstants::SOCKET_CONNECT_ACCEPT_ACTION = std::make_shared<java::lang::String>("connect,accept");
static sun::security::util::SecurityConstants::SOCKET_CONNECT_ACTION = std::make_shared<java::lang::String>("connect");
static sun::security::util::SecurityConstants::SOCKET_LISTEN_ACTION = std::make_shared<java::lang::String>("listen");
static sun::security::util::SecurityConstants::SOCKET_RESOLVE_ACTION = std::make_shared<java::lang::String>("resolve");
static sun::security::util::SecurityConstants::SPECIFY_HANDLER_PERMISSION;
static sun::security::util::SecurityConstants::STOP_THREAD_PERMISSION;
// .method static constructor <clinit>()V
void sun::security::util::SecurityConstants::static_cinit()
{
	
	std::shared_ptr<java::security::AllPermission> cVar0;
	std::shared_ptr<java::net::NetPermission> cVar1;
	std::shared_ptr<java::net::NetPermission> cVar2;
	std::shared_ptr<java::net::NetPermission> cVar3;
	std::shared_ptr<java::net::NetPermission> cVar4;
	std::shared_ptr<java::net::NetPermission> cVar5;
	std::shared_ptr<java::net::NetPermission> cVar6;
	std::shared_ptr<java::net::NetPermission> cVar7;
	std::shared_ptr<java::lang::RuntimePermission> cVar8;
	std::shared_ptr<java::lang::RuntimePermission> cVar9;
	std::shared_ptr<java::lang::RuntimePermission> cVar10;
	std::shared_ptr<java::lang::RuntimePermission> cVar11;
	std::shared_ptr<java::lang::RuntimePermission> cVar12;
	std::shared_ptr<java::lang::RuntimePermission> cVar13;
	std::shared_ptr<java::lang::RuntimePermission> cVar14;
	std::shared_ptr<java::lang::RuntimePermission> cVar15;
	std::shared_ptr<java::security::SecurityPermission> cVar16;
	std::shared_ptr<java::security::SecurityPermission> cVar17;
	std::shared_ptr<java::security::SecurityPermission> cVar18;
	std::shared_ptr<java::net::SocketPermission> cVar19;
	
	cVar0 = std::make_shared<java::security::AllPermission>();
	sun::security::util::SecurityConstants::ALL_PERMISSION = cVar0;
	cVar1 = std::make_shared<java::net::NetPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("specifyStreamHandler")));
	sun::security::util::SecurityConstants::SPECIFY_HANDLER_PERMISSION = cVar1;
	cVar2 = std::make_shared<java::net::NetPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("setProxySelector")));
	sun::security::util::SecurityConstants::SET_PROXYSELECTOR_PERMISSION = cVar2;
	cVar3 = std::make_shared<java::net::NetPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getProxySelector")));
	sun::security::util::SecurityConstants::GET_PROXYSELECTOR_PERMISSION = cVar3;
	cVar4 = std::make_shared<java::net::NetPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("setCookieHandler")));
	sun::security::util::SecurityConstants::SET_COOKIEHANDLER_PERMISSION = cVar4;
	cVar5 = std::make_shared<java::net::NetPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getCookieHandler")));
	sun::security::util::SecurityConstants::GET_COOKIEHANDLER_PERMISSION = cVar5;
	cVar6 = std::make_shared<java::net::NetPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("setResponseCache")));
	sun::security::util::SecurityConstants::SET_RESPONSECACHE_PERMISSION = cVar6;
	cVar7 = std::make_shared<java::net::NetPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getResponseCache")));
	sun::security::util::SecurityConstants::GET_RESPONSECACHE_PERMISSION = cVar7;
	cVar8 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("createClassLoader")));
	sun::security::util::SecurityConstants::CREATE_CLASSLOADER_PERMISSION = cVar8;
	cVar9 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("accessDeclaredMembers")));
	sun::security::util::SecurityConstants::CHECK_MEMBER_ACCESS_PERMISSION = cVar9;
	cVar10 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("modifyThread")));
	sun::security::util::SecurityConstants::MODIFY_THREAD_PERMISSION = cVar10;
	cVar11 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("modifyThreadGroup")));
	sun::security::util::SecurityConstants::MODIFY_THREADGROUP_PERMISSION = cVar11;
	cVar12 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getProtectionDomain")));
	sun::security::util::SecurityConstants::GET_PD_PERMISSION = cVar12;
	cVar13 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getClassLoader")));
	sun::security::util::SecurityConstants::GET_CLASSLOADER_PERMISSION = cVar13;
	cVar14 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("stopThread")));
	sun::security::util::SecurityConstants::STOP_THREAD_PERMISSION = cVar14;
	cVar15 = std::make_shared<java::lang::RuntimePermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getStackTrace")));
	sun::security::util::SecurityConstants::GET_STACK_TRACE_PERMISSION = cVar15;
	cVar16 = std::make_shared<java::security::SecurityPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("createAccessControlContext")));
	sun::security::util::SecurityConstants::CREATE_ACC_PERMISSION = cVar16;
	cVar17 = std::make_shared<java::security::SecurityPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getDomainCombiner")));
	sun::security::util::SecurityConstants::GET_COMBINER_PERMISSION = cVar17;
	cVar18 = std::make_shared<java::security::SecurityPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("getPolicy")));
	sun::security::util::SecurityConstants::GET_POLICY_PERMISSION = cVar18;
	cVar19 = std::make_shared<java::net::SocketPermission>(std::make_shared<java::lang::String>(std::make_shared<char[]>("localhost:0")), std::make_shared<java::lang::String>(std::make_shared<char[]>("listen")));
	sun::security::util::SecurityConstants::LOCAL_LISTEN_PERMISSION = cVar19;
	return;

}
// .method private constructor <init>()V
sun::security::util::SecurityConstants::SecurityConstants()
{
	
	// 287    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}


