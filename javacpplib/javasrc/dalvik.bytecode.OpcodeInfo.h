#ifndef __dalvik_bytecode_OpcodeInfo__
#define __dalvik_bytecode_OpcodeInfo__
// H L:\smali2cpp20\x64\Release\out\dalvik\bytecode\OpcodeInfo.smali
#include "java2ctype.h"
#include "java.lang.Object.h"

namespace dalvik::bytecode{
class OpcodeInfo : public java::lang::Object {
protected:
private:
	OpcodeInfo();
public:
	static int MAXIMUM_PACKED_VALUE;
	static int MAXIMUM_VALUE;
	static void static_cinit();
	static bool isInvoke(int packedOpcode);
private:
	class static_init_class {
	public:
		static_init_class(){
			dalvik::bytecode::OpcodeInfo::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~OpcodeInfo(){
	}

}; // class OpcodeInfo
}; // namespace dalvik::bytecode

#endif //__dalvik_bytecode_OpcodeInfo__

