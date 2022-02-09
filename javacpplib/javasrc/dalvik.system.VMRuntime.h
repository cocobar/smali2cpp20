#ifndef __dalvik_system_VMRuntime__
#define __dalvik_system_VMRuntime__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\VMRuntime.smali
#include "java2ctype.h"
#include "java.lang.Class.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.Map.h"

namespace dalvik::system{
class VMRuntime : public java::lang::Object {
protected:
private:
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> ABI_TO_INSTRUCTION_SET_MAP;
	static std::shared_ptr<dalvik::system::VMRuntime> THE_ONE;
	int targetSdkVersion;
	VMRuntime();
	void virtual nativeSetTargetHeapUtilization(float var0) = 0;
	void virtual setTargetSdkVersionNative(int var0) = 0;
public:
	static int SDK_VERSION_CUR_DEVELOPMENT;
	static void static_cinit();
	static bool didPruneDalvikCache() = 0;
	static std::shared_ptr<java::lang::String> getCurrentInstructionSet() = 0;
	static std::shared_ptr<java::lang::String> getInstructionSet(std::shared_ptr<java::lang::String> abi);
	static std::shared_ptr<dalvik::system::VMRuntime> getRuntime();
	static bool is64BitAbi(std::shared_ptr<java::lang::String> abi);
	static bool is64BitInstructionSet(std::shared_ptr<java::lang::String> instructionSet);
	static bool isBootClassPathOnDisk(std::shared_ptr<java::lang::String> var0) = 0;
	static void registerAppInfo(std::shared_ptr<java::lang::String> var0,std::shared_ptr<std::vector<java::lang::String>> var1) = 0;
	static void registerSensitiveThread() = 0;
	static void runFinalization(long long timeout);
	static void setSystemDaemonThreadPriority() = 0;
	long long virtual addressOf(std::shared_ptr<java::lang::Object> var0);
	std::shared_ptr<java::lang::String> virtual bootClassPath() = 0;
	void virtual clampGrowthLimit() = 0;
	std::shared_ptr<java::lang::String> virtual classPath() = 0;
	void virtual clearGrowthLimit() = 0;
	void virtual concurrentGC() = 0;
	void virtual disableJitCompilation() = 0;
	void virtual gcSoftReferences();
	long long virtual getExternalBytesAllocated();
	long long virtual getMinimumHeapSize();
	float virtual getTargetHeapUtilization() = 0;
	int virtual getTargetSdkVersion();
	bool virtual is64Bit();
	bool virtual isCheckJniEnabled();
	bool virtual isDebuggerActive();
	bool virtual isNativeDebuggable();
	std::shared_ptr<java::lang::Object> virtual newNonMovableArray(std::shared_ptr<java::lang::Class<java::lang::Object>> var0,int var1);
	std::shared_ptr<java::lang::Object> virtual newUnpaddedArray(std::shared_ptr<java::lang::Class<java::lang::Object>> var0,int var1);
	void virtual preloadDexCaches() = 0;
	std::shared_ptr<java::lang::String> virtual properties() = 0;
	void virtual registerNativeAllocation(int var0) = 0;
	void virtual registerNativeFree(int var0) = 0;
	void virtual requestConcurrentGC() = 0;
	void virtual requestHeapTrim() = 0;
	void virtual runFinalizationSync();
	void virtual runHeapTasks() = 0;
	long long virtual setMinimumHeapSize(long long size);
	float virtual setTargetHeapUtilization(float newTarget);
	void virtual setTargetSdkVersion(int targetSdkVersion);
	void virtual startHeapTaskProcessor() = 0;
	void virtual startJitCompilation() = 0;
	void virtual stopHeapTaskProcessor() = 0;
	bool virtual trackExternalAllocation(long long size);
	void virtual trackExternalFree(long long size);
	void virtual trimHeap() = 0;
	void virtual updateProcessState(int var0) = 0;
	std::shared_ptr<java::lang::String> virtual vmInstructionSet() = 0;
	std::shared_ptr<java::lang::String> virtual vmLibrary() = 0;
	std::shared_ptr<java::lang::String> virtual vmVersion() = 0;
private:
	class static_init_class {
	public:
		static_init_class(){
			dalvik::system::VMRuntime::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~VMRuntime(){
	}

}; // class VMRuntime
}; // namespace dalvik::system

#endif //__dalvik_system_VMRuntime__

