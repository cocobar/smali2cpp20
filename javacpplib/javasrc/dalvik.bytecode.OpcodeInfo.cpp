// CPP L:\smali2cpp20\x64\Release\out\dalvik\bytecode\OpcodeInfo.smali
#include "java2ctype.h"
#include "dalvik.bytecode.OpcodeInfo.h"

static dalvik::bytecode::OpcodeInfo::MAXIMUM_PACKED_VALUE;
static dalvik::bytecode::OpcodeInfo::MAXIMUM_VALUE;
// .method static constructor <clinit>()V
void dalvik::bytecode::OpcodeInfo::static_cinit()
{
	
	dalvik::bytecode::OpcodeInfo::MAXIMUM_VALUE = 0xffff;
	dalvik::bytecode::OpcodeInfo::MAXIMUM_PACKED_VALUE = 0xff;
	return;

}
// .method private constructor <init>()V
dalvik::bytecode::OpcodeInfo::OpcodeInfo()
{
	
	// 036    invoke-direct {p0}, Ljava/lang/Object;-><init>()V
	return;

}
// .method public static isInvoke(I)Z
bool dalvik::bytecode::OpcodeInfo::isInvoke(int packedOpcode)
{
	
	//    .param p0, "packedOpcode"    # I
	return 0x0;

}


