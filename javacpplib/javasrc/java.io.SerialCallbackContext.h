#ifndef __java_io_SerialCallbackContext__
#define __java_io_SerialCallbackContext__
// H L:\smali2cpp20\x64\Release\out\java\io\SerialCallbackContext.smali
#include "java2ctype.h"
#include "java.io.ObjectStreamClass.h"
#include "java.lang.Object.h"
#include "java.lang.Thread.h"

namespace java::io{
class SerialCallbackContext : public java::lang::Object {
protected:
private:
	std::shared_ptr<java::io::ObjectStreamClass> desc;
	std::shared_ptr<java::lang::Object> obj;
	std::shared_ptr<java::lang::Thread> thread;
	void virtual checkAndSetUsed();
public:
	SerialCallbackContext(std::shared_ptr<java::lang::Object> obj,std::shared_ptr<java::io::ObjectStreamClass> desc);
	void virtual check();
	std::shared_ptr<java::io::ObjectStreamClass> virtual getDesc();
	std::shared_ptr<java::lang::Object> virtual getObj();
	void virtual setUsed();
public:
	virtual ~SerialCallbackContext(){
	}

}; // class SerialCallbackContext
}; // namespace java::io

#endif //__java_io_SerialCallbackContext__

