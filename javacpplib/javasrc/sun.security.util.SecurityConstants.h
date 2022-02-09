#ifndef __sun_security_util_SecurityConstants__
#define __sun_security_util_SecurityConstants__
// H L:\smali2cpp20\x64\Release\out\sun\security\util\SecurityConstants.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.RuntimePermission.h"
#include "java.lang.String.h"
#include "java.net.NetPermission.h"
#include "java.net.SocketPermission.h"
#include "java.security.AllPermission.h"
#include "java.security.SecurityPermission.h"

namespace sun::security::util{
class SecurityConstants : public java::lang::Object {
protected:
private:
	SecurityConstants();
public:
	static std::shared_ptr<java::security::AllPermission> ALL_PERMISSION;
	static std::shared_ptr<java::lang::RuntimePermission> CHECK_MEMBER_ACCESS_PERMISSION;
	static std::shared_ptr<java::security::SecurityPermission> CREATE_ACC_PERMISSION;
	static std::shared_ptr<java::lang::RuntimePermission> CREATE_CLASSLOADER_PERMISSION;
	static std::shared_ptr<java::lang::String> FILE_DELETE_ACTION;
	static std::shared_ptr<java::lang::String> FILE_EXECUTE_ACTION;
	static std::shared_ptr<java::lang::String> FILE_READLINK_ACTION;
	static std::shared_ptr<java::lang::String> FILE_READ_ACTION;
	static std::shared_ptr<java::lang::String> FILE_WRITE_ACTION;
	static std::shared_ptr<java::lang::RuntimePermission> GET_CLASSLOADER_PERMISSION;
	static std::shared_ptr<java::security::SecurityPermission> GET_COMBINER_PERMISSION;
	static std::shared_ptr<java::net::NetPermission> GET_COOKIEHANDLER_PERMISSION;
	static std::shared_ptr<java::lang::RuntimePermission> GET_PD_PERMISSION;
	static std::shared_ptr<java::security::SecurityPermission> GET_POLICY_PERMISSION;
	static std::shared_ptr<java::net::NetPermission> GET_PROXYSELECTOR_PERMISSION;
	static std::shared_ptr<java::net::NetPermission> GET_RESPONSECACHE_PERMISSION;
	static std::shared_ptr<java::lang::RuntimePermission> GET_STACK_TRACE_PERMISSION;
	static std::shared_ptr<java::net::SocketPermission> LOCAL_LISTEN_PERMISSION;
	static std::shared_ptr<java::lang::RuntimePermission> MODIFY_THREADGROUP_PERMISSION;
	static std::shared_ptr<java::lang::RuntimePermission> MODIFY_THREAD_PERMISSION;
	static std::shared_ptr<java::lang::String> PROPERTY_READ_ACTION;
	static std::shared_ptr<java::lang::String> PROPERTY_RW_ACTION;
	static std::shared_ptr<java::lang::String> PROPERTY_WRITE_ACTION;
	static std::shared_ptr<java::net::NetPermission> SET_COOKIEHANDLER_PERMISSION;
	static std::shared_ptr<java::net::NetPermission> SET_PROXYSELECTOR_PERMISSION;
	static std::shared_ptr<java::net::NetPermission> SET_RESPONSECACHE_PERMISSION;
	static std::shared_ptr<java::lang::String> SOCKET_ACCEPT_ACTION;
	static std::shared_ptr<java::lang::String> SOCKET_CONNECT_ACCEPT_ACTION;
	static std::shared_ptr<java::lang::String> SOCKET_CONNECT_ACTION;
	static std::shared_ptr<java::lang::String> SOCKET_LISTEN_ACTION;
	static std::shared_ptr<java::lang::String> SOCKET_RESOLVE_ACTION;
	static std::shared_ptr<java::net::NetPermission> SPECIFY_HANDLER_PERMISSION;
	static std::shared_ptr<java::lang::RuntimePermission> STOP_THREAD_PERMISSION;
	static void static_cinit();
private:
	class static_init_class {
	public:
		static_init_class(){
			sun::security::util::SecurityConstants::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SecurityConstants(){
	}

}; // class SecurityConstants
}; // namespace sun::security::util

#endif //__sun_security_util_SecurityConstants__

