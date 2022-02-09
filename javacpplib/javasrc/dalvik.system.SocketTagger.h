#ifndef __dalvik_system_SocketTagger__
#define __dalvik_system_SocketTagger__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\SocketTagger.smali
#include "java2ctype.h"
#include "java.io.FileDescriptor.h"
#include "java.lang.Object.h"
#include "java.net.DatagramSocket.h"
#include "java.net.Socket.h"

namespace dalvik::system{
class SocketTagger : public java::lang::Object {
protected:
private:
	static std::shared_ptr<dalvik::system::SocketTagger> tagger;
public:
	static void static_cinit();
	SocketTagger();
	static std::shared_ptr<dalvik::system::SocketTagger> get();
	static void set(std::shared_ptr<dalvik::system::SocketTagger> tagger);
	void tag(std::shared_ptr<java::io::FileDescriptor> var0);
	void virtual tag(std::shared_ptr<java::net::DatagramSocket> socket);
	void virtual tag(std::shared_ptr<java::net::Socket> socket);
	void untag(std::shared_ptr<java::io::FileDescriptor> var0);
	void virtual untag(std::shared_ptr<java::net::DatagramSocket> socket);
	void virtual untag(std::shared_ptr<java::net::Socket> socket);
private:
	class static_init_class {
	public:
		static_init_class(){
			dalvik::system::SocketTagger::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~SocketTagger(){
	}

}; // class SocketTagger
}; // namespace dalvik::system

#endif //__dalvik_system_SocketTagger__

