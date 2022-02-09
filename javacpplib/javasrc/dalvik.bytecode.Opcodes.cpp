// CPP L:\smali2cpp20\x64\Release\out\dalvik\bytecode\Opcodes.smali
#include "java2ctype.h"
#include "dalvik.bytecode.Opcodes.h"

static dalvik::bytecode::Opcodes::OP_ADD_DOUBLE = 0xab;
static dalvik::bytecode::Opcodes::OP_ADD_DOUBLE_2ADDR = 0xcb;
static dalvik::bytecode::Opcodes::OP_ADD_FLOAT = 0xa6;
static dalvik::bytecode::Opcodes::OP_ADD_FLOAT_2ADDR = 0xc6;
static dalvik::bytecode::Opcodes::OP_ADD_INT = 0x90;
static dalvik::bytecode::Opcodes::OP_ADD_INT_2ADDR = 0xb0;
static dalvik::bytecode::Opcodes::OP_ADD_INT_LIT16 = 0xd0;
static dalvik::bytecode::Opcodes::OP_ADD_INT_LIT8 = 0xd8;
static dalvik::bytecode::Opcodes::OP_ADD_LONG = 0x9b;
static dalvik::bytecode::Opcodes::OP_ADD_LONG_2ADDR = 0xbb;
static dalvik::bytecode::Opcodes::OP_AGET = 0x44;
static dalvik::bytecode::Opcodes::OP_AGET_BOOLEAN = 0x47;
static dalvik::bytecode::Opcodes::OP_AGET_BYTE = 0x48;
static dalvik::bytecode::Opcodes::OP_AGET_CHAR = 0x49;
static dalvik::bytecode::Opcodes::OP_AGET_OBJECT = 0x46;
static dalvik::bytecode::Opcodes::OP_AGET_SHORT = 0x4a;
static dalvik::bytecode::Opcodes::OP_AGET_WIDE = 0x45;
static dalvik::bytecode::Opcodes::OP_AND_INT = 0x95;
static dalvik::bytecode::Opcodes::OP_AND_INT_2ADDR = 0xb5;
static dalvik::bytecode::Opcodes::OP_AND_INT_LIT16 = 0xd5;
static dalvik::bytecode::Opcodes::OP_AND_INT_LIT8 = 0xdd;
static dalvik::bytecode::Opcodes::OP_AND_LONG = 0xa0;
static dalvik::bytecode::Opcodes::OP_AND_LONG_2ADDR = 0xc0;
static dalvik::bytecode::Opcodes::OP_APUT = 0x4b;
static dalvik::bytecode::Opcodes::OP_APUT_BOOLEAN = 0x4e;
static dalvik::bytecode::Opcodes::OP_APUT_BYTE = 0x4f;
static dalvik::bytecode::Opcodes::OP_APUT_CHAR = 0x50;
static dalvik::bytecode::Opcodes::OP_APUT_OBJECT = 0x4d;
static dalvik::bytecode::Opcodes::OP_APUT_SHORT = 0x51;
static dalvik::bytecode::Opcodes::OP_APUT_WIDE = 0x4c;
static dalvik::bytecode::Opcodes::OP_ARRAY_LENGTH = 0x21;
static dalvik::bytecode::Opcodes::OP_BREAKPOINT = 0xec;
static dalvik::bytecode::Opcodes::OP_CHECK_CAST = 0x1f;
static dalvik::bytecode::Opcodes::OP_CHECK_CAST_JUMBO = 0x1ff;
static dalvik::bytecode::Opcodes::OP_CMPG_DOUBLE = 0x30;
static dalvik::bytecode::Opcodes::OP_CMPG_FLOAT = 0x2e;
static dalvik::bytecode::Opcodes::OP_CMPL_DOUBLE = 0x2f;
static dalvik::bytecode::Opcodes::OP_CMPL_FLOAT = 0x2d;
static dalvik::bytecode::Opcodes::OP_CMP_LONG = 0x31;
static dalvik::bytecode::Opcodes::OP_CONST = 0x14;
static dalvik::bytecode::Opcodes::OP_CONST_16 = 0x13;
static dalvik::bytecode::Opcodes::OP_CONST_4 = 0x12;
static dalvik::bytecode::Opcodes::OP_CONST_CLASS = 0x1c;
static dalvik::bytecode::Opcodes::OP_CONST_CLASS_JUMBO = 0xff;
static dalvik::bytecode::Opcodes::OP_CONST_HIGH16 = 0x15;
static dalvik::bytecode::Opcodes::OP_CONST_STRING = 0x1a;
static dalvik::bytecode::Opcodes::OP_CONST_STRING_JUMBO = 0x1b;
static dalvik::bytecode::Opcodes::OP_CONST_WIDE = 0x18;
static dalvik::bytecode::Opcodes::OP_CONST_WIDE_16 = 0x16;
static dalvik::bytecode::Opcodes::OP_CONST_WIDE_32 = 0x17;
static dalvik::bytecode::Opcodes::OP_CONST_WIDE_HIGH16 = 0x19;
static dalvik::bytecode::Opcodes::OP_DIV_DOUBLE = 0xae;
static dalvik::bytecode::Opcodes::OP_DIV_DOUBLE_2ADDR = 0xce;
static dalvik::bytecode::Opcodes::OP_DIV_FLOAT = 0xa9;
static dalvik::bytecode::Opcodes::OP_DIV_FLOAT_2ADDR = 0xc9;
static dalvik::bytecode::Opcodes::OP_DIV_INT = 0x93;
static dalvik::bytecode::Opcodes::OP_DIV_INT_2ADDR = 0xb3;
static dalvik::bytecode::Opcodes::OP_DIV_INT_LIT16 = 0xd3;
static dalvik::bytecode::Opcodes::OP_DIV_INT_LIT8 = 0xdb;
static dalvik::bytecode::Opcodes::OP_DIV_LONG = 0x9e;
static dalvik::bytecode::Opcodes::OP_DIV_LONG_2ADDR = 0xbe;
static dalvik::bytecode::Opcodes::OP_DOUBLE_TO_FLOAT = 0x8c;
static dalvik::bytecode::Opcodes::OP_DOUBLE_TO_INT = 0x8a;
static dalvik::bytecode::Opcodes::OP_DOUBLE_TO_LONG = 0x8b;
static dalvik::bytecode::Opcodes::OP_EXECUTE_INLINE = 0xee;
static dalvik::bytecode::Opcodes::OP_EXECUTE_INLINE_RANGE = 0xef;
static dalvik::bytecode::Opcodes::OP_FILLED_NEW_ARRAY = 0x24;
static dalvik::bytecode::Opcodes::OP_FILLED_NEW_ARRAY_JUMBO = 0x5ff;
static dalvik::bytecode::Opcodes::OP_FILLED_NEW_ARRAY_RANGE = 0x25;
static dalvik::bytecode::Opcodes::OP_FILL_ARRAY_DATA = 0x26;
static dalvik::bytecode::Opcodes::OP_FLOAT_TO_DOUBLE = 0x89;
static dalvik::bytecode::Opcodes::OP_FLOAT_TO_INT = 0x87;
static dalvik::bytecode::Opcodes::OP_FLOAT_TO_LONG = 0x88;
static dalvik::bytecode::Opcodes::OP_GOTO = 0x28;
static dalvik::bytecode::Opcodes::OP_GOTO_16 = 0x29;
static dalvik::bytecode::Opcodes::OP_GOTO_32 = 0x2a;
static dalvik::bytecode::Opcodes::OP_IF_EQ = 0x32;
static dalvik::bytecode::Opcodes::OP_IF_EQZ = 0x38;
static dalvik::bytecode::Opcodes::OP_IF_GE = 0x35;
static dalvik::bytecode::Opcodes::OP_IF_GEZ = 0x3b;
static dalvik::bytecode::Opcodes::OP_IF_GT = 0x36;
static dalvik::bytecode::Opcodes::OP_IF_GTZ = 0x3c;
static dalvik::bytecode::Opcodes::OP_IF_LE = 0x37;
static dalvik::bytecode::Opcodes::OP_IF_LEZ = 0x3d;
static dalvik::bytecode::Opcodes::OP_IF_LT = 0x34;
static dalvik::bytecode::Opcodes::OP_IF_LTZ = 0x3a;
static dalvik::bytecode::Opcodes::OP_IF_NE = 0x33;
static dalvik::bytecode::Opcodes::OP_IF_NEZ = 0x39;
static dalvik::bytecode::Opcodes::OP_IGET = 0x52;
static dalvik::bytecode::Opcodes::OP_IGET_BOOLEAN = 0x55;
static dalvik::bytecode::Opcodes::OP_IGET_BOOLEAN_JUMBO = 0x9ff;
static dalvik::bytecode::Opcodes::OP_IGET_BYTE = 0x56;
static dalvik::bytecode::Opcodes::OP_IGET_BYTE_JUMBO = 0xaff;
static dalvik::bytecode::Opcodes::OP_IGET_CHAR = 0x57;
static dalvik::bytecode::Opcodes::OP_IGET_CHAR_JUMBO = 0xbff;
static dalvik::bytecode::Opcodes::OP_IGET_JUMBO = 0x6ff;
static dalvik::bytecode::Opcodes::OP_IGET_OBJECT = 0x54;
static dalvik::bytecode::Opcodes::OP_IGET_OBJECT_JUMBO = 0x8ff;
static dalvik::bytecode::Opcodes::OP_IGET_OBJECT_QUICK = 0xf4;
static dalvik::bytecode::Opcodes::OP_IGET_QUICK = 0xf2;
static dalvik::bytecode::Opcodes::OP_IGET_SHORT = 0x58;
static dalvik::bytecode::Opcodes::OP_IGET_SHORT_JUMBO = 0xcff;
static dalvik::bytecode::Opcodes::OP_IGET_WIDE = 0x53;
static dalvik::bytecode::Opcodes::OP_IGET_WIDE_JUMBO = 0x7ff;
static dalvik::bytecode::Opcodes::OP_IGET_WIDE_QUICK = 0xf3;
static dalvik::bytecode::Opcodes::OP_IGET_WIDE_VOLATILE = 0xe8;
static dalvik::bytecode::Opcodes::OP_INSTANCE_OF = 0x20;
static dalvik::bytecode::Opcodes::OP_INSTANCE_OF_JUMBO = 0x2ff;
static dalvik::bytecode::Opcodes::OP_INT_TO_BYTE = 0x8d;
static dalvik::bytecode::Opcodes::OP_INT_TO_CHAR = 0x8e;
static dalvik::bytecode::Opcodes::OP_INT_TO_DOUBLE = 0x83;
static dalvik::bytecode::Opcodes::OP_INT_TO_FLOAT = 0x82;
static dalvik::bytecode::Opcodes::OP_INT_TO_LONG = 0x81;
static dalvik::bytecode::Opcodes::OP_INT_TO_SHORT = 0x8f;
static dalvik::bytecode::Opcodes::OP_INVOKE_CUSTOM = 0xfc;
static dalvik::bytecode::Opcodes::OP_INVOKE_CUSTOM_RANGE = 0xfd;
static dalvik::bytecode::Opcodes::OP_INVOKE_DIRECT = 0x70;
static dalvik::bytecode::Opcodes::OP_INVOKE_DIRECT_EMPTY = 0xf0;
static dalvik::bytecode::Opcodes::OP_INVOKE_DIRECT_JUMBO = 0x24ff;
static dalvik::bytecode::Opcodes::OP_INVOKE_DIRECT_RANGE = 0x76;
static dalvik::bytecode::Opcodes::OP_INVOKE_INTERFACE = 0x72;
static dalvik::bytecode::Opcodes::OP_INVOKE_INTERFACE_JUMBO = 0x26ff;
static dalvik::bytecode::Opcodes::OP_INVOKE_INTERFACE_RANGE = 0x78;
static dalvik::bytecode::Opcodes::OP_INVOKE_POLYMORPHIC = 0xfa;
static dalvik::bytecode::Opcodes::OP_INVOKE_POLYMORPHIC_RANGE = 0xfb;
static dalvik::bytecode::Opcodes::OP_INVOKE_STATIC = 0x71;
static dalvik::bytecode::Opcodes::OP_INVOKE_STATIC_JUMBO = 0x25ff;
static dalvik::bytecode::Opcodes::OP_INVOKE_STATIC_RANGE = 0x77;
static dalvik::bytecode::Opcodes::OP_INVOKE_SUPER = 0x6f;
static dalvik::bytecode::Opcodes::OP_INVOKE_SUPER_JUMBO = 0x23ff;
static dalvik::bytecode::Opcodes::OP_INVOKE_SUPER_QUICK = 0xfa;
static dalvik::bytecode::Opcodes::OP_INVOKE_SUPER_QUICK_RANGE = 0xfb;
static dalvik::bytecode::Opcodes::OP_INVOKE_SUPER_RANGE = 0x75;
static dalvik::bytecode::Opcodes::OP_INVOKE_VIRTUAL = 0x6e;
static dalvik::bytecode::Opcodes::OP_INVOKE_VIRTUAL_JUMBO = 0x22ff;
static dalvik::bytecode::Opcodes::OP_INVOKE_VIRTUAL_QUICK = 0xf8;
static dalvik::bytecode::Opcodes::OP_INVOKE_VIRTUAL_QUICK_RANGE = 0xf9;
static dalvik::bytecode::Opcodes::OP_INVOKE_VIRTUAL_RANGE = 0x74;
static dalvik::bytecode::Opcodes::OP_IPUT = 0x59;
static dalvik::bytecode::Opcodes::OP_IPUT_BOOLEAN = 0x5c;
static dalvik::bytecode::Opcodes::OP_IPUT_BOOLEAN_JUMBO = 0x10ff;
static dalvik::bytecode::Opcodes::OP_IPUT_BYTE = 0x5d;
static dalvik::bytecode::Opcodes::OP_IPUT_BYTE_JUMBO = 0x11ff;
static dalvik::bytecode::Opcodes::OP_IPUT_CHAR = 0x5e;
static dalvik::bytecode::Opcodes::OP_IPUT_CHAR_JUMBO = 0x12ff;
static dalvik::bytecode::Opcodes::OP_IPUT_JUMBO = 0xdff;
static dalvik::bytecode::Opcodes::OP_IPUT_OBJECT = 0x5b;
static dalvik::bytecode::Opcodes::OP_IPUT_OBJECT_JUMBO = 0xfff;
static dalvik::bytecode::Opcodes::OP_IPUT_OBJECT_QUICK = 0xf7;
static dalvik::bytecode::Opcodes::OP_IPUT_QUICK = 0xf5;
static dalvik::bytecode::Opcodes::OP_IPUT_SHORT = 0x5f;
static dalvik::bytecode::Opcodes::OP_IPUT_SHORT_JUMBO = 0x13ff;
static dalvik::bytecode::Opcodes::OP_IPUT_WIDE = 0x5a;
static dalvik::bytecode::Opcodes::OP_IPUT_WIDE_JUMBO = 0xeff;
static dalvik::bytecode::Opcodes::OP_IPUT_WIDE_QUICK = 0xf6;
static dalvik::bytecode::Opcodes::OP_IPUT_WIDE_VOLATILE = 0xe9;
static dalvik::bytecode::Opcodes::OP_LONG_TO_DOUBLE = 0x86;
static dalvik::bytecode::Opcodes::OP_LONG_TO_FLOAT = 0x85;
static dalvik::bytecode::Opcodes::OP_LONG_TO_INT = 0x84;
static dalvik::bytecode::Opcodes::OP_MONITOR_ENTER = 0x1d;
static dalvik::bytecode::Opcodes::OP_MONITOR_EXIT = 0x1e;
static dalvik::bytecode::Opcodes::OP_MOVE = 0x1;
static dalvik::bytecode::Opcodes::OP_MOVE_16 = 0x3;
static dalvik::bytecode::Opcodes::OP_MOVE_EXCEPTION = 0xd;
static dalvik::bytecode::Opcodes::OP_MOVE_FROM16 = 0x2;
static dalvik::bytecode::Opcodes::OP_MOVE_OBJECT = 0x7;
static dalvik::bytecode::Opcodes::OP_MOVE_OBJECT_16 = 0x9;
static dalvik::bytecode::Opcodes::OP_MOVE_OBJECT_FROM16 = 0x8;
static dalvik::bytecode::Opcodes::OP_MOVE_RESULT = 0xa;
static dalvik::bytecode::Opcodes::OP_MOVE_RESULT_OBJECT = 0xc;
static dalvik::bytecode::Opcodes::OP_MOVE_RESULT_WIDE = 0xb;
static dalvik::bytecode::Opcodes::OP_MOVE_WIDE = 0x4;
static dalvik::bytecode::Opcodes::OP_MOVE_WIDE_16 = 0x6;
static dalvik::bytecode::Opcodes::OP_MOVE_WIDE_FROM16 = 0x5;
static dalvik::bytecode::Opcodes::OP_MUL_DOUBLE = 0xad;
static dalvik::bytecode::Opcodes::OP_MUL_DOUBLE_2ADDR = 0xcd;
static dalvik::bytecode::Opcodes::OP_MUL_FLOAT = 0xa8;
static dalvik::bytecode::Opcodes::OP_MUL_FLOAT_2ADDR = 0xc8;
static dalvik::bytecode::Opcodes::OP_MUL_INT = 0x92;
static dalvik::bytecode::Opcodes::OP_MUL_INT_2ADDR = 0xb2;
static dalvik::bytecode::Opcodes::OP_MUL_INT_LIT16 = 0xd2;
static dalvik::bytecode::Opcodes::OP_MUL_INT_LIT8 = 0xda;
static dalvik::bytecode::Opcodes::OP_MUL_LONG = 0x9d;
static dalvik::bytecode::Opcodes::OP_MUL_LONG_2ADDR = 0xbd;
static dalvik::bytecode::Opcodes::OP_NEG_DOUBLE = 0x80;
static dalvik::bytecode::Opcodes::OP_NEG_FLOAT = 0x7f;
static dalvik::bytecode::Opcodes::OP_NEG_INT = 0x7b;
static dalvik::bytecode::Opcodes::OP_NEG_LONG = 0x7d;
static dalvik::bytecode::Opcodes::OP_NEW_ARRAY = 0x23;
static dalvik::bytecode::Opcodes::OP_NEW_ARRAY_JUMBO = 0x4ff;
static dalvik::bytecode::Opcodes::OP_NEW_INSTANCE = 0x22;
static dalvik::bytecode::Opcodes::OP_NEW_INSTANCE_JUMBO = 0x3ff;
static dalvik::bytecode::Opcodes::OP_NOP = 0x0;
static dalvik::bytecode::Opcodes::OP_NOT_INT = 0x7c;
static dalvik::bytecode::Opcodes::OP_NOT_LONG = 0x7e;
static dalvik::bytecode::Opcodes::OP_OR_INT = 0x96;
static dalvik::bytecode::Opcodes::OP_OR_INT_2ADDR = 0xb6;
static dalvik::bytecode::Opcodes::OP_OR_INT_LIT16 = 0xd6;
static dalvik::bytecode::Opcodes::OP_OR_INT_LIT8 = 0xde;
static dalvik::bytecode::Opcodes::OP_OR_LONG = 0xa1;
static dalvik::bytecode::Opcodes::OP_OR_LONG_2ADDR = 0xc1;
static dalvik::bytecode::Opcodes::OP_PACKED_SWITCH = 0x2b;
static dalvik::bytecode::Opcodes::OP_REM_DOUBLE = 0xaf;
static dalvik::bytecode::Opcodes::OP_REM_DOUBLE_2ADDR = 0xcf;
static dalvik::bytecode::Opcodes::OP_REM_FLOAT = 0xaa;
static dalvik::bytecode::Opcodes::OP_REM_FLOAT_2ADDR = 0xca;
static dalvik::bytecode::Opcodes::OP_REM_INT = 0x94;
static dalvik::bytecode::Opcodes::OP_REM_INT_2ADDR = 0xb4;
static dalvik::bytecode::Opcodes::OP_REM_INT_LIT16 = 0xd4;
static dalvik::bytecode::Opcodes::OP_REM_INT_LIT8 = 0xdc;
static dalvik::bytecode::Opcodes::OP_REM_LONG = 0x9f;
static dalvik::bytecode::Opcodes::OP_REM_LONG_2ADDR = 0xbf;
static dalvik::bytecode::Opcodes::OP_RETURN = 0xf;
static dalvik::bytecode::Opcodes::OP_RETURN_OBJECT = 0x11;
static dalvik::bytecode::Opcodes::OP_RETURN_VOID = 0xe;
static dalvik::bytecode::Opcodes::OP_RETURN_WIDE = 0x10;
static dalvik::bytecode::Opcodes::OP_RSUB_INT = 0xd1;
static dalvik::bytecode::Opcodes::OP_RSUB_INT_LIT8 = 0xd9;
static dalvik::bytecode::Opcodes::OP_SGET = 0x60;
static dalvik::bytecode::Opcodes::OP_SGET_BOOLEAN = 0x63;
static dalvik::bytecode::Opcodes::OP_SGET_BOOLEAN_JUMBO = 0x17ff;
static dalvik::bytecode::Opcodes::OP_SGET_BYTE = 0x64;
static dalvik::bytecode::Opcodes::OP_SGET_BYTE_JUMBO = 0x18ff;
static dalvik::bytecode::Opcodes::OP_SGET_CHAR = 0x65;
static dalvik::bytecode::Opcodes::OP_SGET_CHAR_JUMBO = 0x19ff;
static dalvik::bytecode::Opcodes::OP_SGET_JUMBO = 0x14ff;
static dalvik::bytecode::Opcodes::OP_SGET_OBJECT = 0x62;
static dalvik::bytecode::Opcodes::OP_SGET_OBJECT_JUMBO = 0x16ff;
static dalvik::bytecode::Opcodes::OP_SGET_SHORT = 0x66;
static dalvik::bytecode::Opcodes::OP_SGET_SHORT_JUMBO = 0x1aff;
static dalvik::bytecode::Opcodes::OP_SGET_WIDE = 0x61;
static dalvik::bytecode::Opcodes::OP_SGET_WIDE_JUMBO = 0x15ff;
static dalvik::bytecode::Opcodes::OP_SGET_WIDE_VOLATILE = 0xea;
static dalvik::bytecode::Opcodes::OP_SHL_INT = 0x98;
static dalvik::bytecode::Opcodes::OP_SHL_INT_2ADDR = 0xb8;
static dalvik::bytecode::Opcodes::OP_SHL_INT_LIT8 = 0xe0;
static dalvik::bytecode::Opcodes::OP_SHL_LONG = 0xa3;
static dalvik::bytecode::Opcodes::OP_SHL_LONG_2ADDR = 0xc3;
static dalvik::bytecode::Opcodes::OP_SHR_INT = 0x99;
static dalvik::bytecode::Opcodes::OP_SHR_INT_2ADDR = 0xb9;
static dalvik::bytecode::Opcodes::OP_SHR_INT_LIT8 = 0xe1;
static dalvik::bytecode::Opcodes::OP_SHR_LONG = 0xa4;
static dalvik::bytecode::Opcodes::OP_SHR_LONG_2ADDR = 0xc4;
static dalvik::bytecode::Opcodes::OP_SPARSE_SWITCH = 0x2c;
static dalvik::bytecode::Opcodes::OP_SPUT = 0x67;
static dalvik::bytecode::Opcodes::OP_SPUT_BOOLEAN = 0x6a;
static dalvik::bytecode::Opcodes::OP_SPUT_BOOLEAN_JUMBO = 0x1eff;
static dalvik::bytecode::Opcodes::OP_SPUT_BYTE = 0x6b;
static dalvik::bytecode::Opcodes::OP_SPUT_BYTE_JUMBO = 0x1fff;
static dalvik::bytecode::Opcodes::OP_SPUT_CHAR = 0x6c;
static dalvik::bytecode::Opcodes::OP_SPUT_CHAR_JUMBO = 0x20ff;
static dalvik::bytecode::Opcodes::OP_SPUT_JUMBO = 0x1bff;
static dalvik::bytecode::Opcodes::OP_SPUT_OBJECT = 0x69;
static dalvik::bytecode::Opcodes::OP_SPUT_OBJECT_JUMBO = 0x1dff;
static dalvik::bytecode::Opcodes::OP_SPUT_SHORT = 0x6d;
static dalvik::bytecode::Opcodes::OP_SPUT_SHORT_JUMBO = 0x21ff;
static dalvik::bytecode::Opcodes::OP_SPUT_WIDE = 0x68;
static dalvik::bytecode::Opcodes::OP_SPUT_WIDE_JUMBO = 0x1cff;
static dalvik::bytecode::Opcodes::OP_SPUT_WIDE_VOLATILE = 0xeb;
static dalvik::bytecode::Opcodes::OP_SUB_DOUBLE = 0xac;
static dalvik::bytecode::Opcodes::OP_SUB_DOUBLE_2ADDR = 0xcc;
static dalvik::bytecode::Opcodes::OP_SUB_FLOAT = 0xa7;
static dalvik::bytecode::Opcodes::OP_SUB_FLOAT_2ADDR = 0xc7;
static dalvik::bytecode::Opcodes::OP_SUB_INT = 0x91;
static dalvik::bytecode::Opcodes::OP_SUB_INT_2ADDR = 0xb1;
static dalvik::bytecode::Opcodes::OP_SUB_LONG = 0x9c;
static dalvik::bytecode::Opcodes::OP_SUB_LONG_2ADDR = 0xbc;
static dalvik::bytecode::Opcodes::OP_THROW = 0x27;
static dalvik::bytecode::Opcodes::OP_THROW_VERIFICATION_ERROR = 0xed;
static dalvik::bytecode::Opcodes::OP_USHR_INT = 0x9a;
static dalvik::bytecode::Opcodes::OP_USHR_INT_2ADDR = 0xba;
static dalvik::bytecode::Opcodes::OP_USHR_INT_LIT8 = 0xe2;
static dalvik::bytecode::Opcodes::OP_USHR_LONG = 0xa5;
static dalvik::bytecode::Opcodes::OP_USHR_LONG_2ADDR = 0xc5;
static dalvik::bytecode::Opcodes::OP_XOR_INT = 0x97;
static dalvik::bytecode::Opcodes::OP_XOR_INT_2ADDR = 0xb7;
static dalvik::bytecode::Opcodes::OP_XOR_INT_LIT16 = 0xd7;
static dalvik::bytecode::Opcodes::OP_XOR_INT_LIT8 = 0xdf;
static dalvik::bytecode::Opcodes::OP_XOR_LONG = 0xa2;
static dalvik::bytecode::Opcodes::OP_XOR_LONG_2ADDR = 0xc2;


