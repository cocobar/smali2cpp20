#ifndef __dalvik_system_BlockGuard__
#define __dalvik_system_BlockGuard__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\BlockGuard.smali
#include "java2ctype.h"
#include "dalvik.system.BlockGuard_S_Policy.h"
#include "java.lang.Object.h"
#include "java.lang.ThreadLocal.h"

namespace dalvik::system{
class BlockGuard : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::lang::ThreadLocal<dalvik::system::BlockGuard_S_Policy>> threadPolicy;
	BlockGuard();
public:
	static int DISALLOW_DISK_READ;
	static int DISALLOW_DISK_WRITE;
	static int DISALLOW_NETWORK;
	static std::shared_ptr<dalvik::system::BlockGuard_S_Policy> LAX_POLICY;
	static int PASS_RESTRICTIONS_VIA_RPC;
	static int PENALTY_DEATH;
	static int PENALTY_DIALOG;
	static int PENALTY_LOG;
	static void static_cinit();
	static std::shared_ptr<dalvik::system::BlockGuard_S_Policy> getThreadPolicy();
	static void setThreadPolicy(std::shared_ptr<dalvik::system::BlockGuard_S_Policy> policy);
private:
	class static_init_class {
	public:
		static_init_class(){
			dalvik::system::BlockGuard::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~BlockGuard(){
	}

}; // class BlockGuard
}; // namespace dalvik::system

#endif //__dalvik_system_BlockGuard__

