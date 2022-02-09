#ifndef __dalvik_system_BlockGuard_S_1__
#define __dalvik_system_BlockGuard_S_1__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\BlockGuard$1.smali
#include "java2ctype.h"
#include "dalvik.system.BlockGuard_S_Policy.h"

namespace dalvik::system{
class BlockGuard_S_1 : public dalvik::system::BlockGuard_S_Policy {
protected:
private:
public:
	BlockGuard_S_1();
	int virtual getPolicyMask();
	void virtual onNetwork();
	void virtual onReadFromDisk();
	void virtual onUnbufferedIO();
	void virtual onWriteToDisk();
public:
	virtual ~BlockGuard_S_1(){
	}

}; // class BlockGuard_S_1
}; // namespace dalvik::system

#endif //__dalvik_system_BlockGuard_S_1__

