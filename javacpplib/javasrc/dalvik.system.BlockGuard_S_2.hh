#ifndef __dalvik_system_BlockGuard_S_2__
#define __dalvik_system_BlockGuard_S_2__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\BlockGuard$2.smali
#include "java2ctype.h"
#include "dalvik.system.BlockGuard_S_Policy.hhh"
#include "java.lang.ThreadLocal.hhh"

namespace dalvik::system{
class BlockGuard_S_2 : public java::lang::ThreadLocal<dalvik::system::BlockGuard_S_Policy> {
public:
	BlockGuard_S_2();
	virtual ~BlockGuard_S_2();

}; // class BlockGuard_S_2
}; // namespace dalvik::system

#endif //__dalvik_system_BlockGuard_S_2__

