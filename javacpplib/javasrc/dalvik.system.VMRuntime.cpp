// CPP L:\smali2cpp20\x64\Release\out\dalvik\system\VMRuntime.smali
#include "java2ctype.h"
#include "dalvik.system.VMRuntime.h"
#include "java.lang.Class.h"
#include "java.lang.IllegalArgumentException.h"
#include "java.lang.InterruptedException.h"
#include "java.lang.Object.h"
#include "java.lang.String.h"
#include "java.lang.StringBuilder.h"
#include "java.lang.System.h"
#include "java.lang.Thread.h"
#include "java.lang.ref.FinalizerReference.h"
#include "java.util.HashMap.h"
#include "java.util.Map.h"

static dalvik::system::VMRuntime::ABI_TO_INSTRUCTION_SET_MAP;
static dalvik::system::VMRuntime::SDK_VERSION_CUR_DEVELOPMENT = 0x2710;
static dalvik::system::VMRuntime::THE_ONE;
// .method static constructor <clinit>()V
void dalvik::system::VMRuntime::static_cinit()
{
	
	std::shared_ptr<dalvik::system::VMRuntime> cVar0;
	std::shared_ptr<java::util::HashMap> cVar1;
	
	cVar0 = std::make_shared<dalvik::system::VMRuntime>();
	dalvik::system::VMRuntime::THE_ONE = cVar0;
	cVar1 = std::make_shared<java::util::HashMap>(0x10);
	dalvik::system::VMRuntime::ABI_TO_INSTRUCTION_SET_MAP = cVar1;
	dalvik::system::VMRuntime::ABI_TO_INSTRUCTION_SET_MAP->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("armeabi")), std::make_shared<java::lang::String>(std::make_shared<char[]>("arm")));
	dalvik::system::VMRuntime::ABI_TO_INSTRUCTION_SET_MAP->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("armeabi-v7a")), std::make_shared<java::lang::String>(std::make_shared<char[]>("arm")));
	dalvik::system::VMRuntime::ABI_TO_INSTRUCTION_SET_MAP->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("mips")), std::make_shared<java::lang::String>(std::make_shared<char[]>("mips")));
	dalvik::system::VMRuntime::ABI_TO_INSTRUCTION_SET_MAP->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("mips64")), std::make_shared<java::lang::String>(std::make_shared<char[]>("mips64")));
	dalvik::system::VMRuntime::ABI_TO_INSTRUCTION_SET_MAP->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("x86")), std::make_shared<java::lang::String>(std::make_shared<char[]>("x86")));
	dalvik::system::VMRuntime::ABI_TO_INSTRUCTION_SET_MAP->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("x86_64")), std::make_shared<java::lang::String>(std::make_shared<char[]>("x86_64")));
	dalvik::system::VMRuntime::ABI_TO_INSTRUCTION_SET_MAP->put(std::make_shared<java::lang::String>(std::make_shared<char[]>("arm64-v8a")), std::make_shared<java::lang::String>(std::make_shared<char[]>("arm64")));
	return;

}
// .method private constructor <init>()V
dalvik::system::VMRuntime::VMRuntime()
{
	
	// 122    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	this->targetSdkVersion = 0x2710;
	return;

}
// .method public static getInstructionSet(Ljava/lang/String;)Ljava/lang/String;
std::shared_ptr<java::lang::String> dalvik::system::VMRuntime::getInstructionSet(std::shared_ptr<java::lang::String> abi)
{
	
	std::shared_ptr<java::lang::String> instructionSet;
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p0, "abi"    # Ljava/lang/String;
	instructionSet = dalvik::system::VMRuntime::ABI_TO_INSTRUCTION_SET_MAP->get(abi);
	instructionSet->checkCast("java::lang::String");
	//    .local v0, "instructionSet":Ljava/lang/String;
	if ( instructionSet )     
		goto label_cond_24;
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(std::make_shared<java::lang::String>(std::make_shared<char[]>("Unsupported ABI: ")))->append(abi)->toString());
	// throw
	throw cVar0;
	// 182    .line 387
label_cond_24:
	return instructionSet;

}
// .method public static getRuntime()Ldalvik/system/VMRuntime;
std::shared_ptr<dalvik::system::VMRuntime> dalvik::system::VMRuntime::getRuntime()
{
	
	return dalvik::system::VMRuntime::THE_ONE;

}
// .method public static is64BitAbi(Ljava/lang/String;)Z
bool dalvik::system::VMRuntime::is64BitAbi(std::shared_ptr<java::lang::String> abi)
{
	
	//    .param p0, "abi"    # Ljava/lang/String;
	return dalvik::system::VMRuntime::is64BitInstructionSet(dalvik::system::VMRuntime::getInstructionSet(abi));

}
// .method public static is64BitInstructionSet(Ljava/lang/String;)Z
bool dalvik::system::VMRuntime::is64BitInstructionSet(std::shared_ptr<java::lang::String> instructionSet)
{
	
	bool cVar0;
	
	//    .param p0, "instructionSet"    # Ljava/lang/String;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("arm64"))->equals(instructionSet) )     
		goto label_cond_1a;
	if ( std::make_shared<java::lang::String>(std::make_shared<char[]>("x86_64"))->equals(instructionSet) )     
		goto label_cond_1a;
	cVar0 = std::make_shared<java::lang::String>(std::make_shared<char[]>("mips64"))->equals(instructionSet);
label_goto_19:
	return cVar0;
label_cond_1a:
	cVar0 = 0x1;
	goto label_goto_19;

}
// .method public static runFinalization(J)V
void dalvik::system::VMRuntime::runFinalization(long long timeout)
{
	
	std::vector<std::any> tryCatchExcetionList;
	
	//    .param p0, "timeout"    # J
	try {
	//label_try_start_0:
	java::lang::ref::FinalizerReference::finalizeAllEnqueued(timeout);
	//label_try_end_3:
	}
	catch (java::lang::InterruptedException e){
		tryCatchExcetionList.push_back(e);
		goto label_catch_4;
	}
	//    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_3} :catch_4
label_goto_3:
	return;
	// 282    .line 340
label_catch_4:
	// move-exception
	tryCatchExcetionList.back();
	tryCatchExcetionList.pop_back();
	//    .local v0, "e":Ljava/lang/InterruptedException;
	java::lang::Thread::currentThread({const[class].FS-Param})->interrupt();
	goto label_goto_3;

}
// .method public native addressOf(Ljava/lang/Object;)J
long long dalvik::system::VMRuntime::addressOf(std::shared_ptr<java::lang::Object> var0)
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 307    .end annotation

}
// .method public gcSoftReferences()V
void dalvik::system::VMRuntime::gcSoftReferences()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 331    .end annotation
	return;

}
// .method public getExternalBytesAllocated()J
long long dalvik::system::VMRuntime::getExternalBytesAllocated()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 341    .end annotation
	return 0x0;

}
// .method public getMinimumHeapSize()J
long long dalvik::system::VMRuntime::getMinimumHeapSize()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 353    .end annotation
	return 0x0;

}
// .method public declared-synchronized getTargetSdkVersion()I
int dalvik::system::VMRuntime::getTargetSdkVersion()
{
	
	this->monitor_enter();
	try {
	//label_try_start_1:
	//label_try_end_3:
	}
	catch (...){
		goto label_catchall_5;
	}
	//    .catchall {:try_start_1 .. :try_end_3} :catchall_5
	this->monitor_exit();
	return this->targetSdkVersion;
label_catchall_5:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public native is64Bit()Z
bool dalvik::system::VMRuntime::is64Bit()
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 391    .end annotation

}
// .method public native isCheckJniEnabled()Z
bool dalvik::system::VMRuntime::isCheckJniEnabled()
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 396    .end annotation

}
// .method public native isDebuggerActive()Z
bool dalvik::system::VMRuntime::isDebuggerActive()
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 401    .end annotation

}
// .method public native isNativeDebuggable()Z
bool dalvik::system::VMRuntime::isNativeDebuggable()
{
	
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 406    .end annotation

}
// .method public native newNonMovableArray(Ljava/lang/Class;I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> dalvik::system::VMRuntime::newNonMovableArray(std::shared_ptr<java::lang::Class<java::lang::Object>> var0,int var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 411        value = {
	// 412            "(",
	// 413            "Ljava/lang/Class",
	// 414            "<*>;I)",
	// 415            "Ljava/lang/Object;"
	// 416        }
	// 417    .end annotation
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 420    .end annotation

}
// .method public native newUnpaddedArray(Ljava/lang/Class;I)Ljava/lang/Object;
std::shared_ptr<java::lang::Object> dalvik::system::VMRuntime::newUnpaddedArray(std::shared_ptr<java::lang::Class<java::lang::Object>> var0,int var1)
{
	
	//    .annotation system Ldalvik/annotation/Signature;
	// 425        value = {
	// 426            "(",
	// 427            "Ljava/lang/Class",
	// 428            "<*>;I)",
	// 429            "Ljava/lang/Object;"
	// 430        }
	// 431    .end annotation
	//    .annotation build Ldalvik/annotation/optimization/FastNative;
	// 434    .end annotation

}
// .method public runFinalizationSync()V
void dalvik::system::VMRuntime::runFinalizationSync()
{
	
	//    .annotation runtime Ljava/lang/Deprecated;
	// 458    .end annotation
	java::lang::System::runFinalization({const[class].FS-Param});
	return;

}
// .method public setMinimumHeapSize(J)J
long long dalvik::system::VMRuntime::setMinimumHeapSize(long long size)
{
	
	//    .param p1, "size"    # J
	//    .annotation runtime Ljava/lang/Deprecated;
	// 475    .end annotation
	return 0x0;

}
// .method public setTargetHeapUtilization(F)F
float dalvik::system::VMRuntime::setTargetHeapUtilization(float newTarget)
{
	
	std::shared_ptr<java::lang::IllegalArgumentException> cVar0;
	std::shared_ptr<java::lang::StringBuilder> cVar1;
	
	//    .param p1, "newTarget"    # F
	if ( (newTarget > 0x0) <= 0 )
		goto label_cond_b;
	if ( (newTarget < 0x3f800000) < 0 ) 
		goto label_cond_25;
label_cond_b:
	cVar1 = std::make_shared<java::lang::StringBuilder>();
	cVar0 = std::make_shared<java::lang::IllegalArgumentException>(cVar1->append(newTarget)->append(std::make_shared<java::lang::String>(std::make_shared<char[]>(" out of range (0,1)")))->toString());
	// throw
	throw cVar0;
	// 530    .line 155
label_cond_25:
	this->monitor_enter();
	try {
	//label_try_start_26:
	//    .local v0, "oldTarget":F
	this->nativeSetTargetHeapUtilization(newTarget);
	//label_try_end_2d:
	}
	catch (...){
		goto label_catchall_2f;
	}
	//    .catchall {:try_start_26 .. :try_end_2d} :catchall_2f
	this->monitor_exit();
	return this->getTargetHeapUtilization();
	// 551    .line 155
	// 552    .end local v0    # "oldTarget":F
label_catchall_2f:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public declared-synchronized setTargetSdkVersion(I)V
void dalvik::system::VMRuntime::setTargetSdkVersion(int targetSdkVersion)
{
	
	//    .param p1, "targetSdkVersion"    # I
	this->monitor_enter();
	try {
	//label_try_start_1:
	this->targetSdkVersion = targetSdkVersion;
	this->setTargetSdkVersionNative(this->targetSdkVersion);
	//label_try_end_8:
	}
	catch (...){
		goto label_catchall_a;
	}
	//    .catchall {:try_start_1 .. :try_end_8} :catchall_a
	this->monitor_exit();
	return;
label_catchall_a:
	// move-exception
	
	this->monitor_exit();
	// throw
	throw;

}
// .method public trackExternalAllocation(J)Z
bool dalvik::system::VMRuntime::trackExternalAllocation(long long size)
{
	
	//    .param p1, "size"    # J
	//    .annotation runtime Ljava/lang/Deprecated;
	// 605    .end annotation
	return 0x1;

}
// .method public trackExternalFree(J)V
void dalvik::system::VMRuntime::trackExternalFree(long long size)
{
	
	//    .param p1, "size"    # J
	//    .annotation runtime Ljava/lang/Deprecated;
	// 618    .end annotation
	return;

}


