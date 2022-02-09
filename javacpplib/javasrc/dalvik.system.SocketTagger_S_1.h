#ifndef __dalvik_system_SocketTagger_S_1__
#define __dalvik_system_SocketTagger_S_1__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\SocketTagger$1.smali
#include "java2ctype.h"
#include "dalvik.system.SocketTagger.h"
#include "java.io.FileDescriptor.h"

namespace dalvik::system{
class SocketTagger_S_1 : public dalvik::system::SocketTagger {
protected:
private:
public:
	SocketTagger_S_1();
	void virtual tag(std::shared_ptr<java::io::FileDescriptor> socketDescriptor);
	void virtual untag(std::shared_ptr<java::io::FileDescriptor> socketDescriptor);
public:
	virtual ~SocketTagger_S_1(){
	}

}; // class SocketTagger_S_1
}; // namespace dalvik::system

#endif //__dalvik_system_SocketTagger_S_1__

