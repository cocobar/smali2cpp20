#ifndef __java_io_DeleteOnExitHook_S_1__
#define __java_io_DeleteOnExitHook_S_1__
// H L:\smali2cpp20\x64\Release\out\java\io\DeleteOnExitHook$1.smali
#include "java2ctype.h"
#include "java.lang.Thread.h"

namespace java::io{
class DeleteOnExitHook_S_1 : public java::lang::Thread {
protected:
private:
public:
	DeleteOnExitHook_S_1();
	void virtual run();
public:
	virtual ~DeleteOnExitHook_S_1(){
	}

}; // class DeleteOnExitHook_S_1
}; // namespace java::io

#endif //__java_io_DeleteOnExitHook_S_1__

