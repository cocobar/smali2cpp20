#ifndef __dalvik_system_VMDebug__
#define __dalvik_system_VMDebug__
// H L:\smali2cpp20\x64\Release\out\dalvik\system\VMDebug.smali
#include "java2ctype.h"
#include "java.io.FileDescriptor.h"
#include "java.lang.Class.h"
#include "java.lang.Integer.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"

namespace dalvik::system{
class VMDebug : public java::lang::Object {
protected:
private:
	static int KIND_ALLOCATED_BYTES;
	static int KIND_ALLOCATED_OBJECTS;
	static int KIND_CLASS_INIT_COUNT;
	static int KIND_CLASS_INIT_TIME;
	static int KIND_EXT_ALLOCATED_BYTES;
	static int KIND_EXT_ALLOCATED_OBJECTS;
	static int KIND_EXT_FREED_BYTES;
	static int KIND_EXT_FREED_OBJECTS;
	static int KIND_FREED_BYTES;
	static int KIND_FREED_OBJECTS;
	static int KIND_GC_INVOCATIONS;
	static std::shared_ptr<java::util::HashMap<java::lang::String,java::lang::Integer>> runtimeStatsMap;
	VMDebug();
	static int checkBufferSize(int cVar0);
	static std::shared_ptr<java::lang::String> getRuntimeStatInternal(int var0) = 0;
	static std::shared_ptr<java::lang::String> getRuntimeStatsInternal() = 0;
	static void startClassPrep();
	static void startGC();
	static void startMethodTracingDdmsImpl(int var0,int var1,bool var2,int var3) = 0;
	static void startMethodTracingFd(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::io::FileDescriptor> var1,int var2,int var3,bool var4,int var5,bool var6) = 0;
	static void startMethodTracingFilename(std::shared_ptr<java::lang::String> var0,int var1,int var2,bool var3,int var4) = 0;
public:
	static int KIND_ALL_COUNTS;
	static int KIND_GLOBAL_ALLOCATED_BYTES;
	static int KIND_GLOBAL_ALLOCATED_OBJECTS;
	static int KIND_GLOBAL_CLASS_INIT_COUNT;
	static int KIND_GLOBAL_CLASS_INIT_TIME;
	static int KIND_GLOBAL_EXT_ALLOCATED_BYTES;
	static int KIND_GLOBAL_EXT_ALLOCATED_OBJECTS;
	static int KIND_GLOBAL_EXT_FREED_BYTES;
	static int KIND_GLOBAL_EXT_FREED_OBJECTS;
	static int KIND_GLOBAL_FREED_BYTES;
	static int KIND_GLOBAL_FREED_OBJECTS;
	static int KIND_GLOBAL_GC_INVOCATIONS;
	static int KIND_THREAD_ALLOCATED_BYTES;
	static int KIND_THREAD_ALLOCATED_OBJECTS;
	static int KIND_THREAD_CLASS_INIT_COUNT;
	static int KIND_THREAD_CLASS_INIT_TIME;
	static int KIND_THREAD_EXT_ALLOCATED_BYTES;
	static int KIND_THREAD_EXT_ALLOCATED_OBJECTS;
	static int KIND_THREAD_EXT_FREED_BYTES;
	static int KIND_THREAD_EXT_FREED_OBJECTS;
	static int KIND_THREAD_FREED_BYTES;
	static int KIND_THREAD_FREED_OBJECTS;
	static int KIND_THREAD_GC_INVOCATIONS;
	static int TRACE_COUNT_ALLOCS;
	static void static_cinit();
	static void attachAgent(std::shared_ptr<java::lang::String> var0);
	static bool cacheRegisterMap(std::shared_ptr<java::lang::String> var0) = 0;
	static long long countInstancesOfClass(std::shared_ptr<java::lang::Class> var0,bool var1) = 0;
	static long long countInstancesOfClasses(std::shared_ptr<std::vector<java::lang::Class>> var0,bool var1) = 0;
	static void crash() = 0;
	static void dumpHprofData(std::shared_ptr<java::lang::String> filename);
	static void dumpHprofData(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::io::FileDescriptor> var1);
	static void dumpHprofDataDdms() = 0;
	static void dumpReferenceTables() = 0;
	static int getAllocCount(int var0) = 0;
	static void getHeapSpaceStats(std::shared_ptr<long long[]> var0) = 0;
	static void getInstructionCount(std::shared_ptr<int[]> var0) = 0;
	static int getLoadedClassCount();
	static int getMethodTracingMode() = 0;
	static std::shared_ptr<java::lang::String> getRuntimeStat(std::shared_ptr<java::lang::String> statName);
	static std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> getRuntimeStats();
	static std::shared_ptr<java::lang::String> getVmFeatureList() = 0;
	static void infopoint(int var0) = 0;
	static bool isDebuggerConnected();
	static bool isDebuggingEnabled();
	static long long lastDebuggerActivity();
	static void printLoadedClasses(int var0);
	static void resetAllocCount(int var0) = 0;
	static void resetInstructionCount() = 0;
	static int setAllocationLimit(int limit);
	static int setGlobalAllocationLimit(int limit);
	static void startAllocCounting() = 0;
	static void startEmulatorTracing() = 0;
	static void startInstructionCounting() = 0;
	static void startMethodTracing();
	static void startMethodTracing(std::shared_ptr<java::lang::String> traceFileName,int bufferSize,int flags,bool samplingEnabled,int intervalUs);
	static void startMethodTracing(std::shared_ptr<java::lang::String> traceFileName,std::shared_ptr<java::io::FileDescriptor> fd,int bufferSize,int flags,bool samplingEnabled,int intervalUs);
	static void startMethodTracing(std::shared_ptr<java::lang::String> traceFileName,std::shared_ptr<java::io::FileDescriptor> fd,int bufferSize,int flags,bool samplingEnabled,int intervalUs,bool streamingOutput);
	static void startMethodTracingDdms(int bufferSize,int flags,bool samplingEnabled,int intervalUs);
	static void stopAllocCounting() = 0;
	static void stopEmulatorTracing() = 0;
	static void stopInstructionCounting() = 0;
	static void stopMethodTracing() = 0;
	static long long threadCpuTimeNanos();
private:
	class static_init_class {
	public:
		static_init_class(){
			dalvik::system::VMDebug::static_cinit();
		}
	};
	static inline std::shared_ptr<static_init_class> tmp = std::make_shared<static_init_class>();
public:
	virtual ~VMDebug(){
	}

}; // class VMDebug
}; // namespace dalvik::system

#endif //__dalvik_system_VMDebug__

