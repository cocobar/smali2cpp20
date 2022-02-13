
#ifndef __instructionhelper_H__
#define __instructionhelper_H__
#include <string>
#include <vector>
#include "stringhelper.h"
#include <memory>
#include <cstdio>
#include <map>
#include <unordered_map>



enum Format : uint8_t {
	k10x,  // op
	k12x,  // op vA, vB
	k11n,  // op vA, #+B
	k11x,  // op vAA
	k10t,  // op +AA
	k20t,  // op +AAAA
	k22x,  // op vAA, vBBBB
	k21t,  // op vAA, +BBBB
	k21s,  // op vAA, #+BBBB
	k21h,  // op vAA, #+BBBB00000[00000000]
	k21c,  // op vAA, thing@BBBB
	k23x,  // op vAA, vBB, vCC
	k22b,  // op vAA, vBB, #+CC
	k22t,  // op vA, vB, +CCCC
	k22s,  // op vA, vB, #+CCCC
	k22c,  // op vA, vB, thing@CCCC
	k32x,  // op vAAAA, vBBBB
	k30t,  // op +AAAAAAAA
	k31t,  // op vAA, +BBBBBBBB
	k31i,  // op vAA, #+BBBBBBBB
	k31c,  // op vAA, thing@BBBBBBBB
	k35c,  // op {vC, vD, vE, vF, vG}, thing@BBBB (B: count, A: vG)
	k3rc,  // op {vCCCC .. v(CCCC+AA-1)}, meth@BBBB

	// op {vC, vD, vE, vF, vG}, meth@BBBB, proto@HHHH (A: count)
	// format: AG op BBBB FEDC HHHH
	k45cc,

	// op {VCCCC .. v(CCCC+AA-1)}, meth@BBBB, proto@HHHH (AA: count)
	// format: AA op BBBB CCCC HHHH
	k4rcc,  // op {VCCCC .. v(CCCC+AA-1)}, meth@BBBB, proto@HHHH (AA: count)

	k51l,  // op vAA, #+BBBBBBBBBBBBBBBB
};

// 索引类型
enum IndexType : uint8_t {
	kIndexUnknown = 0,
	kIndexNone,               // has no index
	kIndexTypeRef,            // type reference index
	kIndexStringRef,          // string reference index
	kIndexMethodRef,          // method reference index
	kIndexFieldRef,           // field reference index
	kIndexFieldOffset,        // field offset (for static linked fields)
	kIndexVtableOffset,       // vtable offset (for static linked methods)
	kIndexMethodAndProtoRef,  // method and a proto reference index (for invoke-polymorphic)
	kIndexCallSiteRef,        // call site reference index
	kIndexMethodHandleRef,    // constant method handle reference index
	kIndexProtoRef,           // prototype reference index
};

// 结构类型
enum Flags : uint16_t {
	kBranch = 0x01,  // conditional or unconditional branch
	kContinue = 0x02,  // flow can continue to next statement
	kSwitch = 0x04,  // switch statement
	kThrow = 0x08,  // could cause an exception to be thrown
	kReturn = 0x10,  // returns, no additional statements
	kInvoke = 0x20,  // a flavor of invoke
	kUnconditional = 0x40,  // unconditional branch
	kExperimental = 0x80,  // is an experimental opcode
	kMoveResult = 0x100,	// 保存 Result 的
};

// Old flags. Keeping them around in case we might need them again some day.
enum ExtendedFlags : uint32_t {
	kAdd = 0x0000080,  // addition
	kSubtract = 0x0000100,  // subtract
	kMultiply = 0x0000200,  // multiply
	kDivide = 0x0000400,  // division
	kRemainder = 0x0000800,  // remainder
	kAnd = 0x0001000,  // and
	kOr = 0x0002000,  // or
	kXor = 0x0004000,  // xor
	kShl = 0x0008000,  // shl
	kShr = 0x0010000,  // shr
	kUshr = 0x0020000,  // ushr
	kCast = 0x0040000,  // cast
	kStore = 0x0080000,  // store opcode
	kLoad = 0x0100000,  // load opcode
	kClobber = 0x0200000,  // clobbers memory in a big way (not just a write)
	kRegCFieldOrConstant = 0x0400000,  // is the third virtual register a field or literal constant (vC)
	kRegBFieldOrConstant = 0x0800000,  // is the second virtual register a field or literal constant (vB)
};


enum VerifyFlag : uint32_t {
	kVerifyNothing = 0x0000000,
	kVerifyRegA = 0x0000001,
	kVerifyRegAWide = 0x0000002,
	kVerifyRegB = 0x0000004,
	kVerifyRegBField = 0x0000008,
	kVerifyRegBMethod = 0x0000010,
	kVerifyRegBNewInstance = 0x0000020,
	kVerifyRegBString = 0x0000040,
	kVerifyRegBType = 0x0000080,
	kVerifyRegBWide = 0x0000100,
	kVerifyRegC = 0x0000200,
	kVerifyRegCField = 0x0000400,
	kVerifyRegCNewArray = 0x0000800,
	kVerifyRegCType = 0x0001000,
	kVerifyRegCWide = 0x0002000,
	kVerifyArrayData = 0x0004000,
	kVerifyBranchTarget = 0x0008000,
	kVerifySwitchTargets = 0x0010000,
	kVerifyVarArg = 0x0020000,
	kVerifyVarArgNonZero = 0x0040000,
	kVerifyVarArgRange = 0x0080000,
	kVerifyVarArgRangeNonZero = 0x0100000,
	kVerifyRuntimeOnly = 0x0200000,
	kVerifyError = 0x0400000,
	kVerifyRegHPrototype = 0x0800000,
	kVerifyRegBCallSite = 0x1000000,
	kVerifyRegBMethodHandle = 0x2000000,
	kVerifyRegBPrototype = 0x4000000,
	kTypeIsSame = 0x8000000,		// WF ADD
	kTypeIsInArray = 0x10000000,	// WF ADD
};

/*
* 			if (strSymbol == "B") strTypeName = "unsigned char";
			if (strSymbol == "C") strTypeName = "char";
			if (strSymbol == "D") strTypeName = "double";
			if (strSymbol == "F") strTypeName = "float";
			if (strSymbol == "I") strTypeName = "int";
			if (strSymbol == "J") strTypeName = "long long";
			if (strSymbol == "S") strTypeName = "short";
			if (strSymbol == "Z") strTypeName = "bool";
			if (strSymbol == "V") strTypeName = "void";
*/
// 指令的格式类型
// K  1-2-3 指令占的字节数，  0-1-2-3-5-r  寄存器数, r range
// x ，后续没有
// n , 4 bit 数
// t , label 标签
// s , short 类型数
// h , 高 16 位表示的 32位数
// c , class 类型
// i , 32位数
// l , 64位数
// 
// -表示输入， +表示输出, 其它已知道的可以继续沿用 * 表示 +-
// W 表示 64位
// O 表示 Class
// N 表示 32位
// A 表示 ARRAY
// ? 表示不确定
// T 表示 随便的 N or O or A
// move-result 这类参数隐含一个寄存器


// {nameRegResult}  返回的参数寄存器	{typeReg0}
// %%RT1  寄存器类型
// {nameReg1}  %%格式开始，RN寄存器变量名，1第几个变量，0开始 {nameReg0}	{nameRegResult}
// {constHex1} 符号位置  {constDec1}  {constHex1} {constString1}
// {classType2}
// {lable2}
// {classVT-V3} {classVT-C3} {classVT-T3}
// {classFS-F3} {classFS-S3} {classFS-Param}	{classFS-TParam}

// V(opcode, instruction_code, name, format, index, flags, extended_flags, verifier_flags);
#define DEX_INSTRUCTION_LIST(V) \
  V(0x00, NOP,					"nop",						k10x, "",     "","", "",				"_nop()",kIndexNone, kContinue, 0, kVerifyNothing) \
  V(0x01, MOVE,					"move",						k12x, "+N-N", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}", kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegB | kTypeIsSame) \
  V(0x02, MOVE_FROM16,			"move/from16",				k22x, "+N-N", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}", kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegB | kTypeIsSame) \
  V(0x03, MOVE_16,				"move/16",					k32x, "+N-N", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}", kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegB | kTypeIsSame) \
  V(0x04, MOVE_WIDE,			"move-wide",				k12x, "+W-W", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}", kIndexNone, kContinue, 0, kVerifyRegAWide | kVerifyRegBWide | kTypeIsSame) \
  V(0x05, MOVE_WIDE_FROM16,		"move-wide/from16",			k22x, "+W-W", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}", kIndexNone, kContinue, 0, kVerifyRegAWide | kVerifyRegBWide | kTypeIsSame) \
  V(0x06, MOVE_WIDE_16,			"move-wide/16",				k32x, "+W-W", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}", kIndexNone, kContinue, 0, kVerifyRegAWide | kVerifyRegBWide | kTypeIsSame) \
  V(0x07, MOVE_OBJECT,			"move-object",				k12x, "+O-O", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}", kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegB | kTypeIsSame) \
  V(0x08, MOVE_OBJECT_FROM16,	"move-object/from16",		k22x, "+O-O", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}", kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegB | kTypeIsSame) \
  V(0x09, MOVE_OBJECT_16,		"move-object/16",			k32x, "+O-O", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}", kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegB | kTypeIsSame) \
  V(0x0A, MOVE_RESULT,			"move-result",				k11x, "+N",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[-1].in.name}", kIndexNone, kContinue | kMoveResult, 0, kVerifyRegA | kTypeIsSame) \
  V(0x0B, MOVE_RESULT_WIDE,		"move-result-wide",			k11x, "+W",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[-1].in.name}", kIndexNone, kContinue | kMoveResult, 0, kVerifyRegAWide | kTypeIsSame) \
  V(0x0C, MOVE_RESULT_OBJECT,	"move-result-object",		k11x, "+O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[-1].in.name}", kIndexNone, kContinue | kMoveResult, 0, kVerifyRegA | kTypeIsSame) \
  V(0x0D, MOVE_EXCEPTION,		"move-exception",			k11x, "+O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "getCatchExcetionFromList",  kIndexNone, kContinue, 0, kVerifyRegA) \
  V(0x0E, RETURN_VOID,			"return-void",				k10x, "",     "", "", "", "return",              kIndexNone, kReturn, 0, kVerifyNothing) \
  V(0x10, RETURN_WIDE,			"return-wide",				k11x, "-W",   "", "", "", "return {Reg[0].in.name}",        kIndexNone, kReturn, 0, kVerifyRegAWide) \
  V(0x0F, RETURN,				"return",					k11x, "-N",   "", "", "", "return {Reg[0].in.name}",        kIndexNone, kReturn, 0, kVerifyRegA) \
  V(0x11, RETURN_OBJECT,		"return-object",			k11x, "-O",   "", "", "", "return {Reg[0].in.name}",        kIndexNone, kReturn, 0, kVerifyRegA) \
  V(0x12, CONST_4,				"const/4",					k11n, "+N",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].Dec}", kIndexNone, kContinue, kRegBFieldOrConstant, kVerifyRegA) \
  V(0x13, CONST_16,				"const/16",					k21s, "+N",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].Dec}", kIndexNone, kContinue, kRegBFieldOrConstant, kVerifyRegA) \
  V(0x14, WF_CONST,				"const",					k31i, "+N",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].Hex}", kIndexNone, kContinue, kRegBFieldOrConstant, kVerifyRegA) \
  V(0x15, CONST_HIGH16,			"const/high16",				k21h, "+N",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].Hex}", kIndexNone, kContinue, kRegBFieldOrConstant, kVerifyRegA) \
  V(0x16, CONST_WIDE_16,		"const-wide/16",			k21s, "+W",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].Hex}", kIndexNone, kContinue, kRegBFieldOrConstant, kVerifyRegAWide) \
  V(0x17, CONST_WIDE_32,		"const-wide/32",			k31i, "+W",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].Hex}", kIndexNone, kContinue, kRegBFieldOrConstant, kVerifyRegAWide) \
  V(0x18, CONST_WIDE,			"const-wide",				k51l, "+W",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].Hex}", kIndexNone, kContinue, kRegBFieldOrConstant, kVerifyRegAWide) \
  V(0x19, CONST_WIDE_HIGH16,	"const-wide/high16",		k21h, "+W",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].Hex}", kIndexNone, kContinue, kRegBFieldOrConstant, kVerifyRegAWide) \
  V(0x1A, CONST_STRING,			"const-string",				k21c, "+O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].String}", kIndexStringRef, kContinue | kThrow, 0, kVerifyRegA | kVerifyRegBString) \
  V(0x1B, CONST_STRING_JUMBO,	"const-string/jumbo",		k31c, "+O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].String}", kIndexStringRef, kContinue | kThrow, 0, kVerifyRegA | kVerifyRegBString) \
  V(0x1C, CONST_CLASS,			"const-class",				k21c, "+O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].Class}()", kIndexTypeRef, kContinue | kThrow, 0, kVerifyRegA | kVerifyRegBType) \
  V(0x1D, MONITOR_ENTER,		"monitor-enter",			k11x, "-O",   "", "", "","{Reg[0].in.name}->monitor_enter()",							kIndexNone, kContinue | kThrow, kClobber, kVerifyRegA) \
  V(0x1E, MONITOR_EXIT,			"monitor-exit",				k11x, "-O",   "", "", "","{Reg[0].in.name}->monitor_exit()",							kIndexNone, kContinue | kThrow, kClobber, kVerifyRegA) \
  V(0x1F, CHECK_CAST,			"check-cast",				k21c, "-O",   "", "", "","{Reg[0].in.name}->checkCast(\"{const[2].Class}\")", kIndexTypeRef, kContinue | kThrow, 0, kVerifyRegA | kVerifyRegBType) \
  V(0x20, INSTANCE_OF,			"instance-of",				k22c, "+Z-O", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}->instanceOf(\"{const[3].Class}\")", kIndexTypeRef, kContinue | kThrow, 0, kVerifyRegA | kVerifyRegB | kVerifyRegCType) \
  V(0x21, ARRAY_LENGTH,			"array-length",				k12x, "+N-A", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}->size()", kIndexNone, kContinue | kThrow, 0, kVerifyRegA | kVerifyRegB) \
  V(0x22, NEW_INSTANCE,			"new-instance",				k21c, "+O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "new {const[2].Class}", kIndexTypeRef, kContinue | kThrow, kClobber, kVerifyRegA | kVerifyRegBNewInstance) \
  V(0x23, NEW_ARRAY,			"new-array",				k22c, "+A-I", "std::shared<std::vector<{const[3].Class}>>", "{Reg[0].out.name}", "=", "std::make_shared<std::vector<{const[3].Class}>>({Reg[1].in.name})", kIndexTypeRef, kContinue | kThrow, kClobber, kVerifyRegA | kVerifyRegB | kVerifyRegCNewArray) \
  V(0x24, FILLED_NEW_ARRAY, "filled-new-array",				k35c, "-?",   "", "?", "", "?", kIndexTypeRef, kContinue | kThrow, kClobber, kVerifyRegBType | kVerifyVarArg) \
  V(0x25, FILLED_NEW_ARRAY_RANGE, "filled-new-array/range", k3rc, "-?",   "", "?", "", "?", kIndexTypeRef, kContinue | kThrow, kClobber, kVerifyRegBType | kVerifyVarArgRange) \
  V(0x26, FILL_ARRAY_DATA,		"fill-array-data",			k31t, "-A",   "", "?", "", "?", kIndexNone, kContinue | kThrow, kClobber, kVerifyRegA | kVerifyArrayData) \
  V(0x27, WF_THROW,				"throw",					k11x, "-O",     "", "", "", "throw {Reg[0].in.name}", kIndexNone, kThrow, 0, kVerifyRegA) \
  V(0x28, GOTO,				"goto",							k10t, "",       "", "", "", "goto {const[1].lable}", kIndexNone, kBranch | kUnconditional, 0, kVerifyBranchTarget) \
  V(0x29, GOTO_16,			"goto/16",						k20t, "",       "", "", "", "goto {const[1].lable}", kIndexNone, kBranch | kUnconditional, 0, kVerifyBranchTarget) \
  V(0x2A, GOTO_32,			"goto/32",						k30t, "",       "", "", "", "goto {const[1].lable}", kIndexNone, kBranch | kUnconditional, 0, kVerifyBranchTarget) \
  V(0x2B, PACKED_SWITCH,	"packed-switch",				k31t, "-N",     "", "", "", "switch( {Reg[0].in.name} )", kIndexNone, kContinue | kSwitch, 0, kVerifyRegA | kVerifySwitchTargets) \
  V(0x2C, SPARSE_SWITCH,	"sparse-switch",				k31t, "-N",     "", "", "", "switch( {Reg[0].in.name} )", kIndexNone, kContinue | kSwitch, 0, kVerifyRegA | kVerifySwitchTargets) \
  V(0x2D, CMPL_FLOAT,		"cmpl-float",					k23x, "+Z-F-F", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} < {Reg[2].in.name})", kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x2E, CMPG_FLOAT,		"cmpg-float",					k23x, "+Z-F-F", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} > {Reg[2].in.name})", kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x2F, CMPL_DOUBLE,		"cmpl-double",					k23x, "+Z-D-D", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} < {Reg[2].in.name})", kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegBWide | kVerifyRegCWide) \
  V(0x30, CMPG_DOUBLE,		"cmpg-double",					k23x, "+Z-D-D", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} > {Reg[2].in.name})", kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegBWide | kVerifyRegCWide) \
  V(0x31, CMP_LONG,			"cmp-long",						k23x, "+Z-J-J", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} > {Reg[2].in.name})", kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegBWide | kVerifyRegCWide) \
  V(0x32, IF_EQ, "if-eq",		k22t, "-T-T",		"", "", "", "if ( {Reg[0].in.name} == {Reg[1].in.name} ) goto {const[3].lable}", kIndexNone, kContinue | kBranch, 0, kVerifyRegA | kVerifyRegB | kVerifyBranchTarget | kTypeIsSame) \
  V(0x33, IF_NE, "if-ne",		k22t, "-T-T",		"", "", "", "if ( {Reg[0].in.name} != {Reg[1].in.name} ) goto {const[3].lable}", kIndexNone, kContinue | kBranch, 0, kVerifyRegA | kVerifyRegB | kVerifyBranchTarget | kTypeIsSame) \
  V(0x34, IF_LT, "if-lt",		k22t, "-T-T",		"", "", "", "if ( {Reg[0].in.name} <  {Reg[1].in.name} ) goto {const[3].lable}",  kIndexNone, kContinue | kBranch, 0, kVerifyRegA | kVerifyRegB | kVerifyBranchTarget | kTypeIsSame) \
  V(0x35, IF_GE, "if-ge",		k22t, "-T-T",		"", "", "", "if ( {Reg[0].in.name} >= {Reg[1].in.name} ) goto {const[3].lable}", kIndexNone, kContinue | kBranch, 0, kVerifyRegA | kVerifyRegB | kVerifyBranchTarget | kTypeIsSame) \
  V(0x36, IF_GT, "if-gt",		k22t, "-T-T",		"", "", "", "if ( {Reg[0].in.name} >  {Reg[1].in.name} ) goto {const[3].lable}",  kIndexNone, kContinue | kBranch, 0, kVerifyRegA | kVerifyRegB | kVerifyBranchTarget | kTypeIsSame) \
  V(0x37, IF_LE, "if-le",		k22t, "-T-T",		"", "", "", "if ( {Reg[0].in.name} <= {Reg[1].in.name} ) goto {const[3].lable}", kIndexNone, kContinue | kBranch, 0, kVerifyRegA | kVerifyRegB | kVerifyBranchTarget | kTypeIsSame) \
  V(0x38, IF_EQZ, "if-eqz",		k21t, "-T",			"", "", "", "if ( !({Reg[0].in.name}) )   goto {const[2].lable}", kIndexNone, kContinue | kBranch, 0, kVerifyRegA | kVerifyBranchTarget) \
  V(0x39, IF_NEZ, "if-nez",		k21t, "-T",			"", "", "", "if ( {Reg[0].in.name} )      goto {const[2].lable}", kIndexNone, kContinue | kBranch, 0, kVerifyRegA | kVerifyBranchTarget) \
  V(0x3A, IF_LTZ, "if-ltz",		k21t, "-T",			"", "", "", "if ( {Reg[0].in.name} < 0 )  goto {const[2].lable}",  kIndexNone, kContinue | kBranch, 0, kVerifyRegA | kVerifyBranchTarget) \
  V(0x3B, IF_GEZ, "if-gez",		k21t, "-T",			"", "", "", "if ( {Reg[0].in.name} >= 0 ) goto {const[2].lable}", kIndexNone, kContinue | kBranch, 0, kVerifyRegA | kVerifyBranchTarget) \
  V(0x3C, IF_GTZ, "if-gtz",		k21t, "-T",			"", "", "", "if ( {Reg[0].in.name} > 0 )  goto {const[2].lable}",  kIndexNone, kContinue | kBranch, 0, kVerifyRegA | kVerifyBranchTarget) \
  V(0x3D, IF_LEZ, "if-lez",		k21t, "-T",			"", "", "", "if ( {Reg[0].in.name} <= 0 ) goto {const[2].lable}", kIndexNone, kContinue | kBranch, 0, kVerifyRegA | kVerifyBranchTarget) \
  V(0x3E, UNUSED_3E, "unused-3e", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0x3F, UNUSED_3F, "unused-3f", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0x40, UNUSED_40, "unused-40", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0x41, UNUSED_41, "unused-41", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0x42, UNUSED_42, "unused-42", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0x43, UNUSED_43, "unused-43", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0x44, AGET,         "aget",          k23x, "+N-A-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}[{Reg[2].in.name}]", kIndexNone, kContinue | kThrow, kLoad, kVerifyRegA | kVerifyRegB | kVerifyRegC | kTypeIsInArray) \
  V(0x45, AGET_WIDE,    "aget-wide",     k23x, "+W-A-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}[{Reg[2].in.name}]", kIndexNone, kContinue | kThrow, kLoad, kVerifyRegAWide | kVerifyRegB | kVerifyRegC | kTypeIsInArray) \
  V(0x46, AGET_OBJECT,  "aget-object",   k23x, "+O-A-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}[{Reg[2].in.name}]", kIndexNone, kContinue | kThrow, kLoad, kVerifyRegA | kVerifyRegB | kVerifyRegC | kTypeIsInArray) \
  V(0x47, AGET_BOOLEAN, "aget-boolean",  k23x, "+Z-A-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}[{Reg[2].in.name}]", kIndexNone, kContinue | kThrow, kLoad, kVerifyRegA | kVerifyRegB | kVerifyRegC | kTypeIsInArray) \
  V(0x48, AGET_BYTE,    "aget-byte",     k23x, "+B-A-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}[{Reg[2].in.name}]", kIndexNone, kContinue | kThrow, kLoad, kVerifyRegA | kVerifyRegB | kVerifyRegC | kTypeIsInArray) \
  V(0x49, AGET_CHAR,    "aget-char",     k23x, "+C-A-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}[{Reg[2].in.name}]", kIndexNone, kContinue | kThrow, kLoad, kVerifyRegA | kVerifyRegB | kVerifyRegC | kTypeIsInArray) \
  V(0x4A, AGET_SHORT,   "aget-short",    k23x, "+S-A-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}[{Reg[2].in.name}]", kIndexNone, kContinue | kThrow, kLoad, kVerifyRegA | kVerifyRegB | kVerifyRegC | kTypeIsInArray) \
  V(0x4B, APUT,         "aput",          k23x, "-N-A-I", "", "", "", "{Reg[1].in.name}[{Reg[2].in.name}] = {Reg[0].in.name}", kIndexNone, kContinue | kThrow, kStore, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x4C, APUT_WIDE,    "aput-wide",     k23x, "-W-A-I", "", "", "", "{Reg[1].in.name}[{Reg[2].in.name}] = {Reg[0].in.name}", kIndexNone, kContinue | kThrow, kStore, kVerifyRegAWide | kVerifyRegB | kVerifyRegC) \
  V(0x4D, APUT_OBJECT,  "aput-object",   k23x, "-O-A-I", "", "", "", "{Reg[1].in.name}[{Reg[2].in.name}] = {Reg[0].in.name}", kIndexNone, kContinue | kThrow, kStore, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x4E, APUT_BOOLEAN, "aput-boolean",  k23x, "-Z-A-I", "", "", "", "{Reg[1].in.name}[{Reg[2].in.name}] = {Reg[0].in.name}", kIndexNone, kContinue | kThrow, kStore, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x4F, APUT_BYTE,    "aput-byte",     k23x, "-B-A-I", "", "", "", "{Reg[1].in.name}[{Reg[2].in.name}] = {Reg[0].in.name}", kIndexNone, kContinue | kThrow, kStore, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x50, APUT_CHAR,    "aput-char",     k23x, "-C-A-I", "", "", "", "{Reg[1].in.name}[{Reg[2].in.name}] = {Reg[0].in.name}", kIndexNone, kContinue | kThrow, kStore, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x51, APUT_SHORT,   "aput-short",    k23x, "-S-A-I", "", "", "", "{Reg[1].in.name}[{Reg[2].in.name}] = {Reg[0].in.name}", kIndexNone, kContinue | kThrow, kStore, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x52, IGET,         "iget",          k22c, "+N-O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}->{const[3].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRegCField) \
  V(0x53, IGET_WIDE,    "iget-wide",     k22c, "+W-O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}->{const[3].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegAWide | kVerifyRegB | kVerifyRegCField) \
  V(0x54, IGET_OBJECT,  "iget-object",   k22c, "+O-O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}->{const[3].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRegCField) \
  V(0x55, IGET_BOOLEAN, "iget-boolean",  k22c, "+Z-O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}->{const[3].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRegCField) \
  V(0x56, IGET_BYTE,    "iget-byte",     k22c, "+B-O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}->{const[3].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRegCField) \
  V(0x57, IGET_CHAR,    "iget-char",     k22c, "+C-O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}->{const[3].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRegCField) \
  V(0x58, IGET_SHORT,   "iget-short",    k22c, "+S-O",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}->{const[3].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRegCField) \
  V(0x59, IPUT,         "iput",          k22c, "-N-O",   "", "", "", "{Reg[1].in.name}->{const[3].VT-V3} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRegCField) \
  V(0x5A, IPUT_WIDE,    "iput-wide",     k22c, "-W-O",   "", "", "", "{Reg[1].in.name}->{const[3].VT-V3} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegAWide | kVerifyRegB | kVerifyRegCField) \
  V(0x5B, IPUT_OBJECT,  "iput-object",   k22c, "-O-O",   "", "", "", "{Reg[1].in.name}->{const[3].VT-V3} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRegCField) \
  V(0x5C, IPUT_BOOLEAN, "iput-boolean",  k22c, "-Z-O",   "", "", "", "{Reg[1].in.name}->{const[3].VT-V3} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRegCField) \
  V(0x5D, IPUT_BYTE,    "iput-byte",     k22c, "-B-O",   "", "", "", "{Reg[1].in.name}->{const[3].VT-V3} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRegCField) \
  V(0x5E, IPUT_CHAR,    "iput-char",     k22c, "-C-O",   "", "", "", "{Reg[1].in.name}->{const[3].VT-V3} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRegCField) \
  V(0x5F, IPUT_SHORT,   "iput-short",    k22c, "-S-O",   "", "", "", "{Reg[1].in.name}->{const[3].VT-V3} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRegCField) \
  V(0x60, SGET,         "sget",          k21c, "+N",     "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].VT-C}::{const[2].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegBFieldOrConstant, kVerifyRegA | kVerifyRegBField) \
  V(0x61, SGET_WIDE,    "sget-wide",     k21c, "+W",     "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].VT-C}::{const[2].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegBFieldOrConstant, kVerifyRegAWide | kVerifyRegBField) \
  V(0x62, SGET_OBJECT,  "sget-object",   k21c, "+O",     "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].VT-C}::{const[2].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegBFieldOrConstant, kVerifyRegA | kVerifyRegBField) \
  V(0x63, SGET_BOOLEAN, "sget-boolean",  k21c, "+Z",     "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].VT-C}::{const[2].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegBFieldOrConstant, kVerifyRegA | kVerifyRegBField) \
  V(0x64, SGET_BYTE,    "sget-byte",     k21c, "+B",     "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].VT-C}::{const[2].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegBFieldOrConstant, kVerifyRegA | kVerifyRegBField) \
  V(0x65, SGET_CHAR,    "sget-char",     k21c, "+C",     "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].VT-C}::{const[2].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegBFieldOrConstant, kVerifyRegA | kVerifyRegBField) \
  V(0x66, SGET_SHORT,   "sget-short",    k21c, "+S",     "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{const[2].VT-C}::{const[2].VT-V}", kIndexFieldRef, kContinue | kThrow, kLoad | kRegBFieldOrConstant, kVerifyRegA | kVerifyRegBField) \
  V(0x67, SPUT,         "sput",          k21c, "-N",     "", "", "", "{const[2].VT-C}::{const[2].VT-V} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegBFieldOrConstant, kVerifyRegA | kVerifyRegBField) \
  V(0x68, SPUT_WIDE,    "sput-wide",     k21c, "-W",     "", "", "", "{const[2].VT-C}::{const[2].VT-V} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegBFieldOrConstant, kVerifyRegAWide | kVerifyRegBField) \
  V(0x69, SPUT_OBJECT,  "sput-object",   k21c, "-O",     "", "", "", "{const[2].VT-C}::{const[2].VT-V} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegBFieldOrConstant, kVerifyRegA | kVerifyRegBField) \
  V(0x6A, SPUT_BOOLEAN, "sput-boolean",  k21c, "-Z",     "", "", "", "{const[2].VT-C}::{const[2].VT-V} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegBFieldOrConstant, kVerifyRegA | kVerifyRegBField) \
  V(0x6B, SPUT_BYTE,    "sput-byte",     k21c, "-B",     "", "", "", "{const[2].VT-C}::{const[2].VT-V} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegBFieldOrConstant, kVerifyRegA | kVerifyRegBField) \
  V(0x6C, SPUT_CHAR,    "sput-char",     k21c, "-C",     "", "", "", "{const[2].VT-C}::{const[2].VT-V} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegBFieldOrConstant, kVerifyRegA | kVerifyRegBField) \
  V(0x6D, SPUT_SHORT,   "sput-short",    k21c, "-S",     "", "", "", "{const[2].VT-C}::{const[2].VT-V} = {Reg[0].in.name}", kIndexFieldRef, kContinue | kThrow, kStore | kRegBFieldOrConstant, kVerifyRegA | kVerifyRegBField) \
  V(0x6E, INVOKE_VIRTUAL, "invoke-virtual",					k35c, "-?",  "{const[class].FS-S}", "{Reg[-1].out.name}", "=", "{Reg[0].in.name}->{const[class].FS-F}({const[class].FS-TParam})", kIndexMethodRef, kContinue | kThrow | kInvoke, 0, kVerifyRegBMethod | kVerifyVarArgNonZero) \
  V(0x6F, INVOKE_SUPER, "invoke-super",						k35c, "-?",  "{const[class].FS-S}", "{Reg[-1].out.name}", "=", "{Reg[0].in.name}->{const[class].FS-F}({const[class].FS-TParam})", kIndexMethodRef, kContinue | kThrow | kInvoke, 0, kVerifyRegBMethod | kVerifyVarArgNonZero) \
  V(0x70, INVOKE_DIRECT, "invoke-direct",					k35c, "-?",  "{const[class].FS-S}", "{Reg[-1].out.name}", "=", "{Reg[0].in.name}->{const[class].FS-F}({const[class].FS-TParam})", kIndexMethodRef, kContinue | kThrow | kInvoke, 0, kVerifyRegBMethod | kVerifyVarArgNonZero) \
  V(0x71, INVOKE_STATIC, "invoke-static",					k35c, "-?",  "{const[class].FS-S}", "{Reg[-1].out.name}", "=", "{const[class].FS-C}::{const[class].FS-F}({const[class].FS-Param})", kIndexMethodRef, kContinue | kThrow | kInvoke, 0, kVerifyRegBMethod | kVerifyVarArg) \
  V(0x72, INVOKE_INTERFACE, "invoke-interface",				k35c, "-?",  "{const[class].FS-S}", "{Reg[-1].out.name}", "=", "{Reg[0].in.name}->{const[class].FS-F}({const[class].FS-TParam})", kIndexMethodRef, kContinue | kThrow | kInvoke, 0, kVerifyRegBMethod | kVerifyVarArgNonZero) \
  V(0x73, RETURN_VOID_NO_BARRIER, "return-void-no-barrier", k10x, "",    "", "", "", "return", kIndexNone, kReturn, 0, kVerifyNothing) \
  V(0x74, INVOKE_VIRTUAL_RANGE, "invoke-virtual/range",		k3rc, "-?",  "{const[class].FS-S}", "{Reg[-1].out.name}", "=", "{Reg[0].in.name}->{const[class].FS-F}({const[class].FS-TParam})", kIndexMethodRef, kContinue | kThrow | kInvoke, 0, kVerifyRegBMethod | kVerifyVarArgRangeNonZero) \
  V(0x75, INVOKE_SUPER_RANGE, "invoke-super/range",			k3rc, "-?",  "{const[class].FS-S}", "{Reg[-1].out.name}", "=", "{Reg[0].in.name}->{const[class].FS-F}({const[class].FS-TParam})", kIndexMethodRef, kContinue | kThrow | kInvoke, 0, kVerifyRegBMethod | kVerifyVarArgRangeNonZero) \
  V(0x76, INVOKE_DIRECT_RANGE, "invoke-direct/range",		k3rc, "-?",  "{const[class].FS-S}", "{Reg[-1].out.name}", "=", "{Reg[0].in.name}->{const[class].FS-F}({const[class].FS-TParam})", kIndexMethodRef, kContinue | kThrow | kInvoke, 0, kVerifyRegBMethod | kVerifyVarArgRangeNonZero) \
  V(0x77, INVOKE_STATIC_RANGE, "invoke-static/range",		k3rc, "-?",  "{const[class].FS-S}", "{Reg[-1].out.name}", "=", "{const[class].FS-C}::{const[class].FS-F}({const[class].FS-Param})", kIndexMethodRef, kContinue | kThrow | kInvoke, 0, kVerifyRegBMethod | kVerifyVarArgRange) \
  V(0x78, INVOKE_INTERFACE_RANGE, "invoke-interface/range", k3rc, "-?",  "{const[class].FS-S}", "{Reg[-1].out.name}", "=", "{Reg[0].in.name}->{const[class].FS-F}({const[class].FS-TParam})", kIndexMethodRef, kContinue | kThrow | kInvoke, 0, kVerifyRegBMethod | kVerifyVarArgRangeNonZero) \
  V(0x79, UNUSED_79, "unused-79", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0x7A, UNUSED_7A, "unused-7a", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0x7B, NEG_INT,			"neg-int",				k12x, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(0 - {Reg[1].in.name})",		kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegB) \
  V(0x7C, NOT_INT,			"not-int",				k12x, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(~{Reg[1].in.name})",			kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegB) \
  V(0x7D, NEG_LONG,			"neg-long",				k12x, "+J-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(0 - {Reg[1].in.name})",		kIndexNone, kContinue, 0, kVerifyRegAWide | kVerifyRegBWide) \
  V(0x7E, NOT_LONG,			"not-long",				k12x, "+J-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(~{Reg[1].in.name})",			kIndexNone, kContinue, 0, kVerifyRegAWide | kVerifyRegBWide) \
  V(0x7F, NEG_FLOAT,		"neg-float",			k12x, "+F-F",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(0.0 - {Reg[1].in.name})",		kIndexNone, kContinue, 0, kVerifyRegA | kVerifyRegB) \
  V(0x80, NEG_DOUBLE,		"neg-double",			k12x, "+D-D",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(0.0 - {Reg[1].in.name})",		kIndexNone, kContinue, 0, kVerifyRegAWide | kVerifyRegBWide) \
  V(0x81, INT_TO_LONG,		"int-to-long",			k12x, "+J-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(long long)({Reg[1].in.name})",	kIndexNone, kContinue, kCast, kVerifyRegAWide | kVerifyRegB) \
  V(0x82, INT_TO_FLOAT,		"int-to-float",			k12x, "+F-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(float)({Reg[1].in.name})",		kIndexNone, kContinue, kCast, kVerifyRegA | kVerifyRegB) \
  V(0x83, INT_TO_DOUBLE,	"int-to-double",		k12x, "+D-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(double)({Reg[1].in.name})",		kIndexNone, kContinue, kCast, kVerifyRegAWide | kVerifyRegB) \
  V(0x84, LONG_TO_INT,		"long-to-int",			k12x, "+I-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(int)({Reg[1].in.name})",			kIndexNone, kContinue, kCast, kVerifyRegA | kVerifyRegBWide) \
  V(0x85, LONG_TO_FLOAT,	"long-to-float",		k12x, "+F-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(float)({Reg[1].in.name})",		kIndexNone, kContinue, kCast, kVerifyRegA | kVerifyRegBWide) \
  V(0x86, LONG_TO_DOUBLE,	"long-to-double",		k12x, "+D-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(double)({Reg[1].in.name})",		kIndexNone, kContinue, kCast, kVerifyRegAWide | kVerifyRegBWide) \
  V(0x87, FLOAT_TO_INT,		"float-to-int",			k12x, "+I-F",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(int)({Reg[1].in.name})",			kIndexNone, kContinue, kCast, kVerifyRegA | kVerifyRegB) \
  V(0x88, FLOAT_TO_LONG,	"float-to-long",		k12x, "+J-F",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(long long)({Reg[1].in.name})",	kIndexNone, kContinue, kCast, kVerifyRegAWide | kVerifyRegB) \
  V(0x89, FLOAT_TO_DOUBLE,	"float-to-double",		k12x, "+D-F",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(double)({Reg[1].in.name})",		kIndexNone, kContinue, kCast, kVerifyRegAWide | kVerifyRegB) \
  V(0x8A, DOUBLE_TO_INT,	"double-to-int",		k12x, "+I-D",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(int)({Reg[1].in.name})",			kIndexNone, kContinue, kCast, kVerifyRegA | kVerifyRegBWide) \
  V(0x8B, DOUBLE_TO_LONG,	"double-to-long",		k12x, "+J-D",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(long long)({Reg[1].in.name})",	kIndexNone, kContinue, kCast, kVerifyRegAWide | kVerifyRegBWide) \
  V(0x8C, DOUBLE_TO_FLOAT,	"double-to-float",		k12x, "+F-D",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(float)({Reg[1].in.name})",		kIndexNone, kContinue, kCast, kVerifyRegA | kVerifyRegBWide) \
  V(0x8D, INT_TO_BYTE,		"int-to-byte",			k12x, "+B-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(unsigned char)({Reg[1].in.name})", kIndexNone, kContinue, kCast, kVerifyRegA | kVerifyRegB) \
  V(0x8E, INT_TO_CHAR,		"int-to-char",			k12x, "+C-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(char)({Reg[1].in.name})",		kIndexNone, kContinue, kCast, kVerifyRegA | kVerifyRegB) \
  V(0x8F, INT_TO_SHORT,		"int-to-short",			k12x, "+S-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "(short)({Reg[1].in.name})",		kIndexNone, kContinue, kCast, kVerifyRegA | kVerifyRegB) \
  V(0x90, ADD_INT, "add-int",						k23x, "+I-I-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} + {Reg[2].in.name})", kIndexNone, kContinue, kAdd, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x91, SUB_INT, "sub-int",						k23x, "+I-I-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} - {Reg[2].in.name})", kIndexNone, kContinue, kSubtract, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x92, MUL_INT, "mul-int",						k23x, "+I-I-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} * {Reg[2].in.name})", kIndexNone, kContinue, kMultiply, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x93, DIV_INT, "div-int",						k23x, "+I-I-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} / {Reg[2].in.name})", kIndexNone, kContinue | kThrow, kDivide, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x94, REM_INT, "rem-int",						k23x, "+I-I-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} % {Reg[2].in.name})", kIndexNone, kContinue | kThrow, kRemainder, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x95, AND_INT, "and-int",						k23x, "+I-I-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} & {Reg[2].in.name})", kIndexNone, kContinue, kAnd, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x96, OR_INT,	"or-int",						k23x, "+I-I-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} | {Reg[2].in.name})", kIndexNone, kContinue, kOr, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x97, XOR_INT, "xor-int",						k23x, "+I-I-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} ^ {Reg[2].in.name})", kIndexNone, kContinue, kXor, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x98, SHL_INT, "shl-int",						k23x, "+I-I-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} << {Reg[2].in.name})", kIndexNone, kContinue, kShl, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x99, SHR_INT, "shr-int",						k23x, "+I-I-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "_shri({Reg[1].in.name},{Reg[2].in.name})", kIndexNone, kContinue, kShr, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x9A, USHR_INT, "ushr-int",						k23x, "+I-I-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "_ushri({Reg[1].in.name},{Reg[2].in.name})", kIndexNone, kContinue, kUshr, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0x9B, ADD_LONG, "add-long",						k23x, "+J-J-J", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} + {Reg[2].in.name})", kIndexNone, kContinue, kAdd, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0x9C, SUB_LONG, "sub-long",						k23x, "+J-J-J", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} - {Reg[2].in.name})", kIndexNone, kContinue, kSubtract, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0x9D, MUL_LONG, "mul-long",						k23x, "+J-J-J", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} * {Reg[2].in.name})", kIndexNone, kContinue, kMultiply, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0x9E, DIV_LONG, "div-long",						k23x, "+J-J-J", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} / {Reg[2].in.name})", kIndexNone, kContinue | kThrow, kDivide, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0x9F, REM_LONG, "rem-long",						k23x, "+J-J-J", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} % {Reg[2].in.name})", kIndexNone, kContinue | kThrow, kRemainder, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0xA0, AND_LONG, "and-long",						k23x, "+J-J-J", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} & {Reg[2].in.name})", kIndexNone, kContinue, kAnd, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0xA1, OR_LONG,	 "or-long",						k23x, "+J-J-J", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} | {Reg[2].in.name})", kIndexNone, kContinue, kOr, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0xA2, XOR_LONG, "xor-long",						k23x, "+J-J-J", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} ^ {Reg[2].in.name})", kIndexNone, kContinue, kXor, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0xA3, SHL_LONG, "shl-long",						k23x, "+J-J-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} << {Reg[2].in.name})", kIndexNone, kContinue, kShl, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegC) \
  V(0xA4, SHR_LONG, "shr-long",						k23x, "+J-J-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "_shrll({Reg[1].in.name},{Reg[2].in.name})", kIndexNone, kContinue, kShr, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegC) \
  V(0xA5, USHR_LONG, "ushr-long",					k23x, "+J-J-I", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "_ushrll({Reg[1].in.name},{Reg[2].in.name})", kIndexNone, kContinue, kUshr, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegC) \
  V(0xA6, ADD_FLOAT, "add-float",					k23x, "+F-F-F", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} +  {Reg[2].in.name})", kIndexNone, kContinue, kAdd, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0xA7, SUB_FLOAT, "sub-float",					k23x, "+F-F-F", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} -  {Reg[2].in.name})", kIndexNone, kContinue, kSubtract, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0xA8, MUL_FLOAT, "mul-float",					k23x, "+F-F-F", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} *  {Reg[2].in.name})", kIndexNone, kContinue, kMultiply, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0xA9, DIV_FLOAT, "div-float",					k23x, "+F-F-F", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} /  {Reg[2].in.name})", kIndexNone, kContinue, kDivide, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0xAA, REM_FLOAT, "rem-float",					k23x, "+F-F-F", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} %  {Reg[2].in.name})", kIndexNone, kContinue, kRemainder, kVerifyRegA | kVerifyRegB | kVerifyRegC) \
  V(0xAB, ADD_DOUBLE, "add-double",					k23x, "+D-D-D", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} +  {Reg[2].in.name})", kIndexNone, kContinue, kAdd, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0xAC, SUB_DOUBLE, "sub-double",					k23x, "+D-D-D", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} -  {Reg[2].in.name})", kIndexNone, kContinue, kSubtract, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0xAD, MUL_DOUBLE, "mul-double",					k23x, "+D-D-D", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} *  {Reg[2].in.name})", kIndexNone, kContinue, kMultiply, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0xAE, DIV_DOUBLE, "div-double",					k23x, "+D-D-D", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} /  {Reg[2].in.name})", kIndexNone, kContinue, kDivide, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0xAF, REM_DOUBLE, "rem-double",					k23x, "+D-D-D", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[1].in.name} %  {Reg[2].in.name})", kIndexNone, kContinue, kRemainder, kVerifyRegAWide | kVerifyRegBWide | kVerifyRegCWide) \
  V(0xB0, ADD_INT_2ADDR, "add-int/2addr",			k12x, "*I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} +  {Reg[1].in.name})", kIndexNone, kContinue, kAdd, kVerifyRegA | kVerifyRegB) \
  V(0xB1, SUB_INT_2ADDR, "sub-int/2addr",			k12x, "*I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} -  {Reg[1].in.name})", kIndexNone, kContinue, kSubtract, kVerifyRegA | kVerifyRegB) \
  V(0xB2, MUL_INT_2ADDR, "mul-int/2addr",			k12x, "*I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} *  {Reg[1].in.name})", kIndexNone, kContinue, kMultiply, kVerifyRegA | kVerifyRegB) \
  V(0xB3, DIV_INT_2ADDR, "div-int/2addr",			k12x, "*I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} /  {Reg[1].in.name})", kIndexNone, kContinue | kThrow, kDivide, kVerifyRegA | kVerifyRegB) \
  V(0xB4, REM_INT_2ADDR, "rem-int/2addr",			k12x, "*I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} %  {Reg[1].in.name})", kIndexNone, kContinue | kThrow, kRemainder, kVerifyRegA | kVerifyRegB) \
  V(0xB5, AND_INT_2ADDR, "and-int/2addr",			k12x, "*I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} &  {Reg[1].in.name})", kIndexNone, kContinue, kAnd, kVerifyRegA | kVerifyRegB) \
  V(0xB6, OR_INT_2ADDR,   "or-int/2addr",			k12x, "*I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} |  {Reg[1].in.name})", kIndexNone, kContinue, kOr, kVerifyRegA | kVerifyRegB) \
  V(0xB7, XOR_INT_2ADDR, "xor-int/2addr",			k12x, "*I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} ^  {Reg[1].in.name})", kIndexNone, kContinue, kXor, kVerifyRegA | kVerifyRegB) \
  V(0xB8, SHL_INT_2ADDR, "shl-int/2addr",			k12x, "*I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} << {Reg[1].in.name})", kIndexNone, kContinue, kShl, kVerifyRegA | kVerifyRegB) \
  V(0xB9, SHR_INT_2ADDR, "shr-int/2addr",			k12x, "*I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "_shri({Reg[0].in.name},{Reg[1].in.name})", kIndexNone, kContinue, kShr, kVerifyRegA | kVerifyRegB) \
  V(0xBA, USHR_INT_2ADDR, "ushr-int/2addr",			k12x, "*I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "_ushri({Reg[0].in.name},{Reg[1].in.name})", kIndexNone, kContinue, kUshr, kVerifyRegA | kVerifyRegB) \
  V(0xBB, ADD_LONG_2ADDR, "add-long/2addr",			k12x, "*J-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} +  {Reg[1].in.name})", kIndexNone, kContinue, kAdd, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xBC, SUB_LONG_2ADDR, "sub-long/2addr",			k12x, "*J-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} -  {Reg[1].in.name})", kIndexNone, kContinue, kSubtract, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xBD, MUL_LONG_2ADDR, "mul-long/2addr",			k12x, "*J-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} *  {Reg[1].in.name})", kIndexNone, kContinue, kMultiply, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xBE, DIV_LONG_2ADDR, "div-long/2addr",			k12x, "*J-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} /  {Reg[1].in.name})", kIndexNone, kContinue | kThrow, kDivide, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xBF, REM_LONG_2ADDR, "rem-long/2addr",			k12x, "*J-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} %  {Reg[1].in.name})", kIndexNone, kContinue | kThrow, kRemainder, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xC0, AND_LONG_2ADDR, "and-long/2addr",			k12x, "*J-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} &  {Reg[1].in.name})", kIndexNone, kContinue, kAnd, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xC1, OR_LONG_2ADDR,   "or-long/2addr",			k12x, "*J-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} |  {Reg[1].in.name})", kIndexNone, kContinue, kOr, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xC2, XOR_LONG_2ADDR, "xor-long/2addr",			k12x, "*J-J",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} ^  {Reg[1].in.name})", kIndexNone, kContinue, kXor, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xC3, SHL_LONG_2ADDR, "shl-long/2addr",			k12x, "*J-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "({Reg[0].in.name} << {Reg[1].in.name})", kIndexNone, kContinue, kShl, kVerifyRegAWide | kVerifyRegB) \
  V(0xC4, SHR_LONG_2ADDR, "shr-long/2addr",			k12x, "*J-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "_shrll({Reg[0].in.name},{Reg[1].in.name})", kIndexNone, kContinue, kShr, kVerifyRegAWide | kVerifyRegB) \
  V(0xC5, USHR_LONG_2ADDR, "ushr-long/2addr",		k12x, "*J-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "_ushrll({Reg[0].in.name},{Reg[1].in.name})", kIndexNone, kContinue, kUshr, kVerifyRegAWide | kVerifyRegB) \
  V(0xC6, ADD_FLOAT_2ADDR, "add-float/2addr",		k12x, "*F-F",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[0].in.name} + {Reg[1].in.name})", kIndexNone, kContinue, kAdd, kVerifyRegA | kVerifyRegB) \
  V(0xC7, SUB_FLOAT_2ADDR, "sub-float/2addr",		k12x, "*F-F",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[0].in.name} - {Reg[1].in.name})", kIndexNone, kContinue, kSubtract, kVerifyRegA | kVerifyRegB) \
  V(0xC8, MUL_FLOAT_2ADDR, "mul-float/2addr",		k12x, "*F-F",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[0].in.name} * {Reg[1].in.name})", kIndexNone, kContinue, kMultiply, kVerifyRegA | kVerifyRegB) \
  V(0xC9, DIV_FLOAT_2ADDR, "div-float/2addr",		k12x, "*F-F",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[0].in.name} / {Reg[1].in.name})", kIndexNone, kContinue, kDivide, kVerifyRegA | kVerifyRegB) \
  V(0xCA, REM_FLOAT_2ADDR, "rem-float/2addr",		k12x, "*F-F",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[0].in.name} % {Reg[1].in.name})", kIndexNone, kContinue, kRemainder, kVerifyRegA | kVerifyRegB) \
  V(0xCB, ADD_DOUBLE_2ADDR, "add-double/2addr",		k12x, "*D-D",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[0].in.name} + {Reg[1].in.name})", kIndexNone, kContinue, kAdd, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xCC, SUB_DOUBLE_2ADDR, "sub-double/2addr",		k12x, "*D-D",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[0].in.name} - {Reg[1].in.name})", kIndexNone, kContinue, kSubtract, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xCD, MUL_DOUBLE_2ADDR, "mul-double/2addr",		k12x, "*D-D",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[0].in.name} * {Reg[1].in.name})", kIndexNone, kContinue, kMultiply, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xCE, DIV_DOUBLE_2ADDR, "div-double/2addr",		k12x, "*D-D",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[0].in.name} / {Reg[1].in.name})", kIndexNone, kContinue, kDivide, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xCF, REM_DOUBLE_2ADDR, "rem-double/2addr",		k12x, "*D-D",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[0].in.name} % {Reg[1].in.name})", kIndexNone, kContinue, kRemainder, kVerifyRegAWide | kVerifyRegBWide) \
  V(0xD0, ADD_INT_LIT16, "add-int/lit16",			k22s, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} + {const[3].Dec})", kIndexNone, kContinue, kAdd | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xD1, RSUB_INT,           "rsub-int",			k22s, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} - {const[3].Dec})", kIndexNone, kContinue, kSubtract | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xD2, MUL_INT_LIT16, "mul-int/lit16",			k22s, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} * {const[3].Dec})", kIndexNone, kContinue, kMultiply | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xD3, DIV_INT_LIT16, "div-int/lit16",			k22s, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} / {const[3].Dec})", kIndexNone, kContinue | kThrow, kDivide | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xD4, REM_INT_LIT16, "rem-int/lit16",			k22s, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} % {const[3].Dec})", kIndexNone, kContinue | kThrow, kRemainder | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xD5, AND_INT_LIT16, "and-int/lit16",			k22s, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} & {const[3].Dec})", kIndexNone, kContinue, kAnd | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xD6, OR_INT_LIT16,   "or-int/lit16",			k22s, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} | {const[3].Dec})", kIndexNone, kContinue, kOr | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xD7, XOR_INT_LIT16, "xor-int/lit16",			k22s, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} ^ {const[3].Dec})", kIndexNone, kContinue, kXor | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xD8, ADD_INT_LIT8,   "add-int/lit8",			k22b, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} + {const[3].Dec})", kIndexNone, kContinue, kAdd | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xD9, RSUB_INT_LIT8, "rsub-int/lit8",			k22b, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} - {const[3].Dec})", kIndexNone, kContinue, kSubtract | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xDA, MUL_INT_LIT8,   "mul-int/lit8",			k22b, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} * {const[3].Dec})", kIndexNone, kContinue, kMultiply | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xDB, DIV_INT_LIT8,   "div-int/lit8",			k22b, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} / {const[3].Dec})", kIndexNone, kContinue | kThrow, kDivide | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xDC, REM_INT_LIT8,   "rem-int/lit8",			k22b, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} % {const[3].Dec})", kIndexNone, kContinue | kThrow, kRemainder | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xDD, AND_INT_LIT8,   "and-int/lit8",			k22b, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} & {const[3].Dec})", kIndexNone, kContinue, kAnd | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xDE, OR_INT_LIT8,     "or-int/lit8",			k22b, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} | {const[3].Dec})", kIndexNone, kContinue, kOr | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xDF, XOR_INT_LIT8,   "xor-int/lit8",			k22b, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} ^ {const[3].Dec})", kIndexNone, kContinue, kXor | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xE0, SHL_INT_LIT8,   "shl-int/lit8",			k22b, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "( {Reg[1].in.name} << {const[3].Dec})", kIndexNone, kContinue, kShl | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xE1, SHR_INT_LIT8,   "shr-int/lit8",			k22b, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "_shri({Reg[1].in.name},{const[3].Dec})", kIndexNone, kContinue, kShr | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xE2, USHR_INT_LIT8, "ushr-int/lit8",			k22b, "+I-I",   "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "_ushri({Reg[1].in.name},{const[3].Dec})", kIndexNone, kContinue, kUshr | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB) \
  V(0xE4, IGET_WIDE_QUICK,				"iget-wide-quick",				k22c, "+W-O", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}.{const[3].VT-V}", kIndexFieldOffset, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegAWide | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xE3, IGET_QUICK,					"iget-quick",					k22c, "+N-O", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}.{const[3].VT-V}", kIndexFieldOffset, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xE5, IGET_OBJECT_QUICK,			"iget-object-quick",			k22c, "+O-O", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}.{const[3].VT-V}", kIndexFieldOffset, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xE6, IPUT_QUICK,					"iput-quick",					k22c, "-N-O", "", "", "", "{Reg[1].in.name}.{const[3].VT-V} = {Reg[0].in.name}", kIndexFieldOffset, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xE7, IPUT_WIDE_QUICK,				"iput-wide-quick",				k22c, "-W-O", "", "", "", "{Reg[1].in.name}.{const[3].VT-V} = {Reg[0].in.name}", kIndexFieldOffset, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegAWide | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xE8, IPUT_OBJECT_QUICK,			"iput-object-quick",			k22c, "-O-O", "", "", "", "{Reg[1].in.name}.{const[3].VT-V} = {Reg[0].in.name}", kIndexFieldOffset, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xE9, INVOKE_VIRTUAL_QUICK,			"invoke-virtual-quick",			k35c, "-?",   "{const[2].FS-S}", "{Reg[Result].out.name}", "=", "{Reg[0].in.name}.{const[2].FS-F}({const[2].FS-TParam})", kIndexVtableOffset, kContinue | kThrow | kInvoke, 0, kVerifyVarArgNonZero | kVerifyRuntimeOnly) \
  V(0xEA, INVOKE_VIRTUAL_RANGE_QUICK,	"invoke-virtual/range-quick",	k3rc, "-?",   "{const[2].FS-S}", "{Reg[Result].out.name}", "=", "{Reg[0].in.name}.{const[2].FS-F}({const[2].FS-TParam})", kIndexVtableOffset, kContinue | kThrow | kInvoke, 0, kVerifyVarArgRangeNonZero | kVerifyRuntimeOnly) \
  V(0xEB, IPUT_BOOLEAN_QUICK,			"iput-boolean-quick",			k22c, "-Z-O", "", "", "", "{Reg[1].in.name}.{const[3].VT-V} = {Reg[0].in.name}", kIndexFieldOffset, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xEC, IPUT_BYTE_QUICK,				"iput-byte-quick",				k22c, "-B-O", "", "", "", "{Reg[1].in.name}.{const[3].VT-V} = {Reg[0].in.name}", kIndexFieldOffset, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xED, IPUT_CHAR_QUICK,				"iput-char-quick",				k22c, "-C-O", "", "", "", "{Reg[1].in.name}.{const[3].VT-V} = {Reg[0].in.name}", kIndexFieldOffset, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xEE, IPUT_SHORT_QUICK,				"iput-short-quick",				k22c, "-S-O", "", "", "", "{Reg[1].in.name}.{const[3].VT-V} = {Reg[0].in.name}", kIndexFieldOffset, kContinue | kThrow, kStore | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xEF, IGET_BOOLEAN_QUICK,			"iget-boolean-quick",			k22c, "+Z-O", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}.{const[2].VT-V}", kIndexFieldOffset, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xF0, IGET_BYTE_QUICK,				"iget-byte-quick",				k22c, "+B-O", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}.{const[2].VT-V}", kIndexFieldOffset, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xF1, IGET_CHAR_QUICK,				"iget-char-quick",				k22c, "+C-O", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}.{const[2].VT-V}", kIndexFieldOffset, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xF2, IGET_SHORT_QUICK,				"iget-short-quick",				k22c, "+S-O", "{Reg[0].out.dtype}", "{Reg[0].out.name}", "=", "{Reg[1].in.name}.{const[2].VT-V}", kIndexFieldOffset, kContinue | kThrow, kLoad | kRegCFieldOrConstant, kVerifyRegA | kVerifyRegB | kVerifyRuntimeOnly) \
  V(0xF3, UNUSED_F3, "unused-f3", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0xF4, UNUSED_F4, "unused-f4", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0xF5, UNUSED_F5, "unused-f5", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0xF6, UNUSED_F6, "unused-f6", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0xF7, UNUSED_F7, "unused-f7", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0xF8, UNUSED_F8, "unused-f8", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0xF9, UNUSED_F9, "unused-f9", k10x, "", "", "", "", "", kIndexUnknown, 0, 0, kVerifyError) \
  V(0xFA, INVOKE_POLYMORPHIC,			"invoke-polymorphic",			k45cc, "-?", "{const[invoke].FS-S}", "{Reg[-1].out.name}", "=", "{Reg[0].in.name}->{const[invoke].FS-F}({const[invoke].FS-TParam})", kIndexMethodAndProtoRef, kContinue | kThrow | kInvoke, 0, kVerifyRegBMethod | kVerifyVarArgNonZero | kVerifyRegHPrototype) \
  V(0xFB, INVOKE_POLYMORPHIC_RANGE,		"invoke-polymorphic/range",		k4rcc, "-?", "{const[invoke].FS-S}", "{Reg[-1].out.name}", "=", "{Reg[0].in.name}->{const[invoke].FS-F}({const[invoke].FS-TParam})", kIndexMethodAndProtoRef, kContinue | kThrow | kInvoke, 0, kVerifyRegBMethod | kVerifyVarArgRangeNonZero | kVerifyRegHPrototype) \
  V(0xFC, INVOKE_CUSTOM,				"invoke-custom",				k35c,  "-?", "?", "?", "?", "?", kIndexCallSiteRef, kContinue | kThrow, 0, kVerifyRegBCallSite | kVerifyVarArg) \
  V(0xFD, INVOKE_CUSTOM_RANGE,			"invoke-custom/range",			k3rc,  "-?", "?", "?", "?", "?", kIndexCallSiteRef, kContinue | kThrow, 0, kVerifyRegBCallSite | kVerifyVarArgRange) \
  V(0xFE, CONST_METHOD_HANDLE,			"const-method-handle",			k21c,  "-?", "?", "?", "?", "?", kIndexMethodHandleRef, kContinue | kThrow, 0, kVerifyRegA | kVerifyRegBMethodHandle) \
  V(0xFF, CONST_METHOD_TYPE,			"const-method-type",			k21c,  "-?", "?", "?", "?", "?", kIndexProtoRef, kContinue | kThrow, 0, kVerifyRegA | kVerifyRegBPrototype)

// invoke-polymorphic {v0..v1}, java/lang/invoke/MethodHandle;->invoke([Ljava/lang/Object;)Ljava/lang/Object;, (I)J
// invoke-polymorphic/range {v0,v1}, java/lang/invoke/MethodHandle;->invoke([Ljava/lang/Object;)Ljava/lang/Object;, (I)J

enum kInstructionTypeEnum : uint16_t {
#define INSTRUCTION_TYPE_ENUM(opcode, instruction_code, name, format, strParam, strType, strVar, strOp, strExp, index, flags, extended_flags, verifier_flags)	instruction_code = opcode,
	DEX_INSTRUCTION_LIST(INSTRUCTION_TYPE_ENUM)
#undef INSTRUCTION_TYPE_ENUM
};

struct InstructionInfo {
	std::string pName;				// 指令的名字		第三项
	uint16_t instType;				// 指令的代码		第二项
	uint8_t instFormat;				// 指令的类型		第四项
	std::string pParamFormat;		// 指令的参数描述	第五项

	std::string strType;			// 6
	std::string strVar;				// 7
	std::string strOp;				// 8
	std::string strExp;				// 9

	//const char* pLeftExpFormat;		// 左表达式模板
	//const char* pRightExpFormat;	// 右表达式模板

	uint8_t indexType;
	uint16_t instFlags;
	uint32_t externedFlags;
	uint32_t verifyFlags;
};

class InstructionInfoClass {
public:
	std::string pName;				// 指令的名字		第三项
	uint16_t instType;				// 指令的代码		第二项
	uint8_t instFormat;				// 指令的类型		第四项
	std::string pParamFormat;		// 指令的参数描述	第五项

	std::string strType;			// 6
	std::string strVar;				// 7
	std::string strOp;				// 8
	std::string strExp;				// 9

	uint8_t indexType;
	uint16_t instFlags;
	uint32_t externedFlags;
	uint32_t verifyFlags;
};

#define InstructioClassFromStruct(x, y)		\
x->pName			= y->pName			;	\
x->instType			= y->instType		;	\
x->instFormat		= y->instFormat		;	\
x->pParamFormat		= y->pParamFormat	;	\
x->strType			= y->strType		;	\
x->strVar			= y->strVar			;	\
x->strOp			= y->strOp			;	\
x->strExp			= y->strExp			;	\
x->indexType		= y->indexType		;	\
x->instFlags		= y->instFlags		;	\
x->externedFlags	= y->externedFlags	;	\
x->verifyFlags		= y->verifyFlags	;



static const struct InstructionInfo kInstructionInfoDatas[] = {
#define INSTRUCTION_INFO(opcode, instruction_code, name, format, strParam, strType, strVar, strOp, strExp, index, flags, extended_flags, verifier_flags) \
	{name, instruction_code, format, strParam, strType, strVar, strOp, strExp, index, flags, extended_flags, verifier_flags},
	DEX_INSTRUCTION_LIST(INSTRUCTION_INFO)
#undef INSTRUCTION_INFO
};
// unordered_map
class instructionhelper
{
private:
	static inline std::unordered_map<std::string, std::shared_ptr<InstructionInfoClass>> mapInstruction;

	static void initMapInstruction() {
		for (int i = 0; i < sizeof(kInstructionInfoDatas) / sizeof(struct InstructionInfo); i++) {
			auto a = &kInstructionInfoDatas[i];
			std::shared_ptr<InstructionInfoClass> b = std::make_shared<InstructionInfoClass>();
			InstructioClassFromStruct(b, a);
			mapInstruction.insert(std::make_pair(std::string(kInstructionInfoDatas[i].pName), b));
		}
	}

	class static_class_init {
	public:
		static_class_init() {
			instructionhelper::initMapInstruction();
		}
	};
	static inline std::shared_ptr<static_class_init> pTmp = std::make_shared<static_class_init>();

public:


	instructionhelper() {};
	~instructionhelper() {};

	// 返回指令的数据类型
	static std::shared_ptr<InstructionInfoClass> getInstructInfo(std::string& strInst) {
		auto it = mapInstruction.find(strInst);
		if (it != mapInstruction.end()) {
			return it->second;
		}
		return nullptr;
	}
};

#endif
