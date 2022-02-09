// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\VMDebug.smali
#include "java2ctype.h"
#include "dalvik.system.VMDebug.h"
#include "java.io.FileDescriptor.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.Integer.h"
#include "java.lang.Iterable.h"
#include "java.lang.NullPointerException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.UnsupportedOperationException.h"
#include "java.util.HashMap.h"
#include "java.util.Iterator.h"
#include "java.util.Map.h"
#include "java.util.Set.h"

static dalvik::system::VMDebug::KIND_ALLOCATED_BYTES = 0x2;
static dalvik::system::VMDebug::KIND_ALLOCATED_OBJECTS = 0x1;
static dalvik::system::VMDebug::KIND_ALL_COUNTS = -0x1;
static dalvik::system::VMDebug::KIND_CLASS_INIT_COUNT = 0x20;
static dalvik::system::VMDebug::KIND_CLASS_INIT_TIME = 0x40;
static dalvik::system::VMDebug::KIND_EXT_ALLOCATED_BYTES = 0x2000;
static dalvik::system::VMDebug::KIND_EXT_ALLOCATED_OBJECTS = 0x1000;
static dalvik::system::VMDebug::KIND_EXT_FREED_BYTES = 0x8000;
static dalvik::system::VMDebug::KIND_EXT_FREED_OBJECTS = 0x4000;
static dalvik::system::VMDebug::KIND_FREED_BYTES = 0x8;
static dalvik::system::VMDebug::KIND_FREED_OBJECTS = 0x4;
static dalvik::system::VMDebug::KIND_GC_INVOCATIONS = 0x10;
static dalvik::system::VMDebug::KIND_GLOBAL_ALLOCATED_BYTES = 0x2;
static dalvik::system::VMDebug::KIND_GLOBAL_ALLOCATED_OBJECTS = 0x1;
static dalvik::system::VMDebug::KIND_GLOBAL_CLASS_INIT_COUNT = 0x20;
static dalvik::system::VMDebug::KIND_GLOBAL_CLASS_INIT_TIME = 0x40;
static dalvik::system::VMDebug::KIND_GLOBAL_EXT_ALLOCATED_BYTES = 0x2000;
static dalvik::system::VMDebug::KIND_GLOBAL_EXT_ALLOCATED_OBJECTS = 0x1000;
static dalvik::system::VMDebug::KIND_GLOBAL_EXT_FREED_BYTES = 0x8000;
static dalvik::system::VMDebug::KIND_GLOBAL_EXT_FREED_OBJECTS = 0x4000;
static dalvik::system::VMDebug::KIND_GLOBAL_FREED_BYTES = 0x8;
static dalvik::system::VMDebug::KIND_GLOBAL_FREED_OBJECTS = 0x4;
static dalvik::system::VMDebug::KIND_GLOBAL_GC_INVOCATIONS = 0x10;
static dalvik::system::VMDebug::KIND_THREAD_ALLOCATED_BYTES = 0x20000;
static dalvik::system::VMDebug::KIND_THREAD_ALLOCATED_OBJECTS = 0x10000;
static dalvik::system::VMDebug::KIND_THREAD_CLASS_INIT_COUNT = 0x200000;
static dalvik::system::VMDebug::KIND_THREAD_CLASS_INIT_TIME = 0x400000;
static dalvik::system::VMDebug::KIND_THREAD_EXT_ALLOCATED_BYTES = 0x20000000;
static dalvik::system::VMDebug::KIND_THREAD_EXT_ALLOCATED_OBJECTS = 0x10000000;
static dalvik::system::VMDebug::KIND_THREAD_EXT_FREED_BYTES = -0x80000000;
static dalvik::system::VMDebug::KIND_THREAD_EXT_FREED_OBJECTS = 0x40000000;
static dalvik::system::VMDebug::KIND_THREAD_FREED_BYTES = 0x80000;
static dalvik::system::VMDebug::KIND_THREAD_FREED_OBJECTS = 0x40000;
static dalvik::system::VMDebug::KIND_THREAD_GC_INVOCATIONS = 0x100000;
static dalvik::system::VMDebug::TRACE_COUNT_ALLOCS = 0x1;
static dalvik::system::VMDebug::runtimeStatsMap;
// .method static constructor <clinit>()V
void dalvik::system::VMDebug::static_cinit()
{
	
	std::shared_ptr<java::util::HashMap> cVar0;
	
	cVar0 = std::make_shared<java::util::HashMap>();
	dalvik::system::VMDebug::runtimeStatsMap = cVar0;
	dalvik::system::VMDebug::runtimeStatsMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("art.gc.gc-count")), java::lang::Integer::valueOf(0x0));
	dalvik::system::VMDebug::runtimeStatsMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("art.gc.gc-time")), java::lang::Integer::valueOf(0x1));
	dalvik::system::VMDebug::runtimeStatsMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("art.gc.bytes-allocated")), java::lang::Integer::valueOf(0x2));
	dalvik::system::VMDebug::runtimeStatsMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("art.gc.bytes-freed")), java::lang::Integer::valueOf(0x3));
	dalvik::system::VMDebug::runtimeStatsMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("art.gc.blocking-gc-count")), java::lang::Integer::valueOf(0x4));
	dalvik::system::VMDebug::runtimeStatsMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("art.gc.blocking-gc-time")), java::lang::Integer::valueOf(0x5));
	dalvik::system::VMDebug::runtimeStatsMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("art.gc.gc-count-rate-histogram")), java::lang::Integer::valueOf(0x6));
	dalvik::system::VMDebug::runtimeStatsMap->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("art.gc.blocking-gc-count-rate-histogram")), java::lang::Integer::valueOf(0x7));
	return;

}
// .method private constructor <init>()V
dalvik::system::VMDebug::VMDebug()
{
	
	// 215    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static native attachAgent(Ljava/lang/String;)V
void dalvik::system::VMDebug::attachAgent(std::shared_ptr<java::lang::String> var0)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 222        value = {
	// 223            Ljava/io/IOException;
	// 224        }
	// 225    .end annotation

}
// .method private static checkBufferSize(I)I
int dalvik::system::VMDebug::checkBufferSize(int cVar0)
{
	
	int cVar0;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar1;
	std::shared_ptr<java::lang::StringBuilder> cVar2;
	
	//    .param p0, "bufferSize"    # I
	if ( cVar0 )     
		goto label_cond_4;
	cVar0 = 0x800000;
label_cond_4:
	if ( cVar0 >= 0x400 )
		goto label_cond_22;
	cVar2 = std::make_shared<java::lang::StringBuilder>();
	cVar1 = std::make_shared<java::lang::IllegalArgumentException>(cVar2->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("buffer size < 1024: ")))->append(cVar0)->toString());
	// throw
	throw cVar1;
	// 273    .line 218
label_cond_22:
	return cVar0;

}
// .method public static dumpHprofData(Ljava/lang/String;)V
void dalvik::system::VMDebug::dumpHprofData(std::shared_ptr<java::lang::String> filename)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p0, "filename"    # Ljava/lang/String;
	//    .annotation system Ldalvik/annotation/Throws;
	// 291        value = {
	// 292            Ljava/io/IOException;
	// 293        }
	// 294    .end annotation
	if ( filename )     
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("filename == null")));
	// throw
	throw cVar0;
	// 311    .line 324
label_cond_c:
	dalvik::system::VMDebug::dumpHprofData(filename, 0x0);
	return;

}
// .method public static native dumpHprofData(Ljava/lang/String;Ljava/io/FileDescriptor;)V
void dalvik::system::VMDebug::dumpHprofData(std::shared_ptr<java::lang::String> var0,std::shared_ptr<java::io::FileDescriptor> var1)
{
	
	//    .annotation system Ldalvik/annotation/Throws;
	// 321        value = {
	// 322            Ljava/io/IOException;
	// 323        }
	// 324    .end annotation

}
// .method public static native getLoadedClassCount()I
int dalvik::system::VMDebug::getLoadedClassCount()
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 344    .end annotation

}
// .method public static getRuntimeStat(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::VMDebug::getRuntimeStat(std::shared_ptr<java::lang::String> statName)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	std::shared_ptr<java::lang::Integer> statId;
	
	//    .param p0, "statName"    # Ljava/lang/String;
	if ( statName )     
		goto label_cond_c;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("statName == null")));
	// throw
	throw cVar0;
	// 369    .line 460
label_cond_c:
	statId = dalvik::system::VMDebug::runtimeStatsMap->get(statName);
	statId->checkCast("java::lang::Integer");
	//    .local v0, "statId":Ljava/lang/Integer;
	if ( !(statId) )  
		goto label_cond_1f;
	return dalvik::system::VMDebug::getRuntimeStatInternal(statId->intValue());
	// 394    .line 464
label_cond_1f:
	return 0x0;

}
// .method public static getRuntimeStats()Ljava/util/Map;
std::shared_ptr<java::util::Map<java::lang::String,java::lang::String>> dalvik::system::VMDebug::getRuntimeStats()
{
	
	std::shared_ptr<java::util::HashMap> map;
	std::shared_ptr<java::util::Iterator> name_S_iterator;
	std::shared_ptr<java::lang::String> name;
	std::shared_ptr<java::lang::Integer> cVar0;
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 405        value = {
	// 406            "()",
	// 407            "Ljava/util/Map",
	// 408            "<",
	// 409            "Ljava/lang/String;",
	// 410            "Ljava/lang/String;",
	// 411            ">;"
	// 412        }
	// 413    .end annotation
	map = std::make_shared<java::util::HashMap>();
	//    .local v1, "map":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;"
	//    .local v5, "values":[Ljava/lang/String;
	name_S_iterator = dalvik::system::VMDebug::runtimeStatsMap->keySet()->iterator();
	//    .local v3, "name$iterator":Ljava/util/Iterator;
label_goto_13:
	if ( !(name_S_iterator->hasNext()) )  
		goto label_cond_31;
	name = name_S_iterator->next();
	name->checkCast("java::lang::String");
	//    .local v2, "name":Ljava/lang/String;
	cVar0 = dalvik::system::VMDebug::runtimeStatsMap->get(name);
	cVar0->checkCast("java::lang::Integer");
	//    .local v0, "id":I
	//    .local v4, "value":Ljava/lang/String;
	map->put(name, dalvik::system::VMDebug::getRuntimeStatsInternal({const[class].FS-Param})[cVar0->intValue()]);
	goto label_goto_13;
	// 477    .line 481
	// 478    .end local v0    # "id":I
	// 479    .end local v2    # "name":Ljava/lang/String;
	// 480    .end local v4    # "value":Ljava/lang/String;
label_cond_31:
	return map;

}
// .method public static native isDebuggerConnected()Z
bool dalvik::system::VMDebug::isDebuggerConnected()
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 496    .end annotation

}
// .method public static native isDebuggingEnabled()Z
bool dalvik::system::VMDebug::isDebuggingEnabled()
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 501    .end annotation

}
// .method public static native lastDebuggerActivity()J
long long dalvik::system::VMDebug::lastDebuggerActivity()
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 506    .end annotation

}
// .method public static native printLoadedClasses(I)V
void dalvik::system::VMDebug::printLoadedClasses(int var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 511    .end annotation

}
// .method public static setAllocationLimit(I)I
int dalvik::system::VMDebug::setAllocationLimit(int limit)
{
	
	//    .param p0, "limit"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 524    .end annotation
	return -0x1;

}
// .method public static setGlobalAllocationLimit(I)I
int dalvik::system::VMDebug::setGlobalAllocationLimit(int limit)
{
	
	//    .param p0, "limit"    # I
	//    .annotation runtime Ljava/lang/Deprecated;
	// 537    .end annotation
	return -0x1;

}
// .method private static startClassPrep()V
void dalvik::system::VMDebug::startClassPrep()
{
	
	return;

}
// .method private static startGC()V
void dalvik::system::VMDebug::startGC()
{
	
	return;

}
// .method public static startMethodTracing()V
void dalvik::system::VMDebug::startMethodTracing()
{
	
	std::shared_ptr<java::lang::UnsupportedOperationException> cVar0;
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 574    .end annotation
	cVar0 = std::make_shared<java::lang::UnsupportedOperationException>();
	// throw
	throw cVar0;

}
// .method public static startMethodTracing(Ljava/lang/String;IIZI)V
void dalvik::system::VMDebug::startMethodTracing(std::shared_ptr<java::lang::String> traceFileName,int bufferSize,int flags,bool samplingEnabled,int intervalUs)
{
	
	//    .param p0, "traceFileName"    # Ljava/lang/String;
	//    .param p1, "bufferSize"    # I
	//    .param p2, "flags"    # I
	//    .param p3, "samplingEnabled"    # Z
	//    .param p4, "intervalUs"    # I
	dalvik::system::VMDebug::startMethodTracingFilename(traceFileName, dalvik::system::VMDebug::checkBufferSize(bufferSize), flags, samplingEnabled, intervalUs);
	return;

}
// .method public static startMethodTracing(Ljava/lang/String;Ljava/io/FileDescriptor;IIZI)V
void dalvik::system::VMDebug::startMethodTracing(std::shared_ptr<java::lang::String> traceFileName,std::shared_ptr<java::io::FileDescriptor> fd,int bufferSize,int flags,bool samplingEnabled,int intervalUs)
{
	
	//    .param p0, "traceFileName"    # Ljava/lang/String;
	//    .param p1, "fd"    # Ljava/io/FileDescriptor;
	//    .param p2, "bufferSize"    # I
	//    .param p3, "flags"    # I
	//    .param p4, "samplingEnabled"    # Z
	//    .param p5, "intervalUs"    # I
	dalvik::system::VMDebug::startMethodTracing(traceFileName, fd, bufferSize, flags, samplingEnabled, intervalUs, 0x0);
	return;

}
// .method public static startMethodTracing(Ljava/lang/String;Ljava/io/FileDescriptor;IIZIZ)V
void dalvik::system::VMDebug::startMethodTracing(std::shared_ptr<java::lang::String> traceFileName,std::shared_ptr<java::io::FileDescriptor> fd,int bufferSize,int flags,bool samplingEnabled,int intervalUs,bool streamingOutput)
{
	
	std::shared_ptr<java::lang::NullPointerException> cVar0;
	
	//    .param p0, "traceFileName"    # Ljava/lang/String;
	//    .param p1, "fd"    # Ljava/io/FileDescriptor;
	//    .param p2, "bufferSize"    # I
	//    .param p3, "flags"    # I
	//    .param p4, "samplingEnabled"    # Z
	//    .param p5, "intervalUs"    # I
	//    .param p6, "streamingOutput"    # Z
	if ( fd )     
		goto label_cond_b;
	cVar0 = std::make_shared<java::lang::NullPointerException>(std::make_shared<java::lang::String>(std::make_shared<char[]>("fd == null")));
	// throw
	throw cVar0;
	// 660    .line 197
label_cond_b:
	dalvik::system::VMDebug::startMethodTracingFd(traceFileName, fd, dalvik::system::VMDebug::checkBufferSize(bufferSize), flags, samplingEnabled, intervalUs, streamingOutput);
	return;

}
// .method public static startMethodTracingDdms(IIZI)V
void dalvik::system::VMDebug::startMethodTracingDdms(int bufferSize,int flags,bool samplingEnabled,int intervalUs)
{
	
	//    .param p0, "bufferSize"    # I
	//    .param p1, "flags"    # I
	//    .param p2, "samplingEnabled"    # Z
	//    .param p3, "intervalUs"    # I
	dalvik::system::VMDebug::startMethodTracingDdmsImpl(dalvik::system::VMDebug::checkBufferSize(bufferSize), flags, samplingEnabled, intervalUs);
	return;

}
// .method public static native threadCpuTimeNanos()J
long long dalvik::system::VMDebug::threadCpuTimeNanos()
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 726    .end annotation

}


