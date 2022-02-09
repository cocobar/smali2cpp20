#ifndef __dalvik_system_BlockGuard_S_Policy__
#define __dalvik_system_BlockGuard_S_Policy__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\BlockGuard$Policy.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace dalvik::system{
class BlockGuard_S_Policy : public java::lang::Object {
protected:
private:
public:
	int getPolicyMask() = 0;
	void onNetwork() = 0;
	void onReadFromDisk() = 0;
	void onUnbufferedIO() = 0;
	void onWriteToDisk() = 0;
	BlockGuard_S_Policy(){ };
	virtual ~BlockGuard_S_Policy(){ };

}; // class BlockGuard_S_Policy
}; // namespace dalvik::system

#endif //__dalvik_system_BlockGuard_S_Policy__

