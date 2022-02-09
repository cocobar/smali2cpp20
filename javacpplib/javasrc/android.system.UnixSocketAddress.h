#ifndef __android_system_UnixSocketAddress__
#define __android_system_UnixSocketAddress__
// H L:\smali2cpp20\x64\Release\out\android\system\UnixSocketAddress.smali
#include "java2ctype.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.net.SocketAddress.h"

namespace android::system{
class UnixSocketAddress : public java::net::SocketAddress {
protected:
private:
	static int NAMED_PATH_LENGTH;
	static std::shared_ptr<unsigned char[]> UNNAMED_PATH;
	std::shared_ptr<unsigned char[]> sun_path;
	UnixSocketAddress(std::shared_ptr<unsigned char[]> sun_path);
public:
	static void static_cinit();
	static std::shared_ptr<android::system::UnixSocketAddress> createAbstract(std::shared_ptr<java::lang::String> name);
	static std::shared_ptr<android::system::UnixSocketAddress> createFileSystem(std::shared_ptr<java::lang::String> pathName);
	static std::shared_ptr<android::system::UnixSocketAddress> createUnnamed();
	bool virtual equals(std::shared_ptr<java::lang::Object> o);
	unsigned char virtual getSunPath();
	int virtual hashCode();
	std::shared_ptr<java::lang::String> virtual toString();
private:
	class static_init_class {
	public:
		static_init_class(){
			android::system::UnixSocketAddress::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~UnixSocketAddress(){
	}

}; // class UnixSocketAddress
}; // namespace android::system

#endif //__android_system_UnixSocketAddress__

